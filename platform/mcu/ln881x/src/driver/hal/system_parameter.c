#include <string.h>
#include "proj_config.h"

//#include "ART2000.h"
#include "driver/hal/flash.h"
#include "driver/hal/system_parameter.h"
#include "driver/hal/eeprom.h"
#include "dflt_param_tab.h"
#include "lwip/ip4_addr.h"
#include "utils/debug/art_assert.h"
#include "utils/debug/log.h"

static system_param_item_t g_item = {0,};
static system_parameter_t g_system_parameter;

static void system_parameter_sync_to_flash(system_parameter_t *system_parameter, system_param_item_t *param_item);

void system_parameter_init(void)
{
    OS_Status ret = OS_OK;
    system_parameter_t *system_parameter = get_system_parameter_handle();
    uint16_t *system_parameter_buffer = (uint16_t *)system_parameter;
    uint8_t addr[MAC_ADDRESS_LEN] = {0,};
    wifi_config_t config = {0,};
    server_config_t dhcp_server_config = {0,};
    wifi_psk_info_list_t    psk_info_list = {0,};
    ip_config_t  sta_ip_config = {0,};

    memset(system_parameter, 0, sizeof(system_parameter_t));
    ret = OS_MutexCreate(&system_parameter->lock);
    if (ret != OS_OK) {
        LOG(LOG_LVL_ERROR, "[%s, %d]OS_MutexCreate system_parameter->lock fail.\r\n", __func__, __LINE__);
        return;
    }
    
#if (FLASH_XIP == DISABLE) // run in RAM.
    FLASH_Init();
#endif

    if(!EE_Init(system_parameter_buffer, sizeof(system_parameter_t) - sizeof(OS_Mutex_t))){
        //mode
        system_parameter_set_wifi_mode(system_parameter, system_parameter_get_wifi_mode_default());

        //sta_macaddr
        system_parameter_get_wifi_macaddr_default(STATION_IF, addr);
        system_parameter_set_station_macaddr(system_parameter, addr);

        //ap_macaddr
        system_parameter_get_wifi_macaddr_default(SOFT_AP_IF, addr);
        system_parameter_set_ap_macaddr(system_parameter, addr);

        //sta config
        system_parameter_get_wifi_config_default(STATION_IF, &config);
        system_parameter_set_station_config(system_parameter, &(config.sta));

        //ap config
        system_parameter_get_wifi_config_default(SOFT_AP_IF, &config);
        system_parameter_set_ap_config(system_parameter, &(config.ap));

        //sta ip
        system_parameter_get_sta_ip_config_default(&sta_ip_config);
        system_parameter_set_sta_ip_config(system_parameter, &sta_ip_config);

        //dhcp server config
        system_parameter_get_dhcpd_config_default(&dhcp_server_config);
        system_parameter_set_dhcpd_config(system_parameter, &dhcp_server_config);

        //PSK info
        system_parameter_set_psk_info_list(system_parameter, &psk_info_list);
        
    }
}
void system_parameter_deinit(void)
{
    OS_Status ret = OS_OK;
    system_parameter_t *system_parameter = get_system_parameter_handle();

    ART_ASSERT(system_parameter);

    ret = OS_MutexDelete(&system_parameter->lock);
    if (ret != OS_OK) {
        LOG(LOG_LVL_ERROR, "[%s, %d]OS_MutexDelete system_parameter->lock fail.\r\n", __func__, __LINE__);
        return;
    }

#if (FLASH_XIP == DISABLE)
    FLASH_Deinit();
#endif
}
system_parameter_t *get_system_parameter_handle(void)
{
    return &(g_system_parameter);
}
static system_param_item_t *get_param_item_cache(void)
{
    return &g_item;
}
void system_parameter_sync_to_flash(system_parameter_t *system_parameter, system_param_item_t *param_item)
{
    uint32_t start = 0, len = 0, i = 0, flag = 0;
    uint8_t *cache_content = NULL, *system_parameter_base = NULL;
    uint16_t *system_parameter_base_u16 = NULL;
    system_parameter_item_id_enum_t item_id;

    ART_ASSERT(system_parameter && param_item);
    system_parameter_base = (uint8_t *)system_parameter;
    system_parameter_base_u16 = (uint16_t *)system_parameter;
    item_id = (system_parameter_item_id_enum_t)param_item->item_id;
    switch(item_id) {

        case WIFI_COMMON_CONFIG: {
            cache_content = (uint8_t *)&(param_item->item.wifi_common_config);
            len = sizeof(wifi_common_config_t);
            start = (uint8_t *)&(system_parameter->wifi_common_config) - system_parameter_base;
        }
        break;
        
        case WIFI_STA_CONFIG: {
            cache_content = (uint8_t *)&(param_item->item.sta_config);
            len = sizeof(wifi_sta_config_t);
            start = (uint8_t *)&(system_parameter->sta_config) - system_parameter_base;
        }
        break;

        case WIFI_AP_CONFIG: {
            cache_content = (uint8_t *)&(param_item->item.ap_config);
            len = sizeof(wifi_ap_config_t);
            start = (uint8_t *)&(system_parameter->ap_config) - system_parameter_base;
        }
        break;

        case STA_IP_CONFIG: {
            cache_content = (uint8_t *)&(param_item->item.sta_ip_config);
            len = sizeof(ip_config_t);
            start = (uint8_t *)&(system_parameter->sta_ip_config) - system_parameter_base;
        }
        break;

        case AP_IP_CONFIG: {
            cache_content = (uint8_t *)&(param_item->item.ap_ip_config);
            len = sizeof(ip_config_t);
            start = (uint8_t *)&(system_parameter->ap_ip_config) - system_parameter_base;
        }
        break;
        
        case DHCP_ENABLE_CONFIG: {
            cache_content = (uint8_t *)&(param_item->item.dhcp_sw_config);
            len = sizeof(uint8_t);
            start = (uint8_t *)&(system_parameter->dhcp_sw_config) - system_parameter_base;
        }
        break;

        case HOSTNAME_CONFIG: {
            cache_content = (uint8_t *)&(param_item->item.hostname_cfg);
            len = sizeof(hostname_t);
            start = (uint8_t *)&(system_parameter->hostname_cfg) - system_parameter_base;
        }
        break;
        
	    case DHCPD_CONFIG: {
            cache_content = (uint8_t *)&(param_item->item.dhcpd_config);
            len = sizeof(server_config_t);
            start = (uint8_t *)&(system_parameter->dhcpd_config) - system_parameter_base;
        }
        break;

        case WIFI_PSK_INFO: {
            cache_content = (uint8_t *)&(param_item->item.psk_info_list);
            len = sizeof(wifi_psk_info_list_t);
            start = (uint8_t *)&(system_parameter->psk_info_list) - system_parameter_base;
        }
        break;
		
        default:
            break;
    }

    for(i = start; i < (start + len); i++){
        if(system_parameter_base[i] != cache_content[i - start]){
            system_parameter_base[i] = cache_content[i - start];
            if(i%2){
                EE_WriteVariable(i/2, system_parameter_base_u16[i/2]);
                flag = 0;
            }else{
                flag = 1;
            }
        }else{
            if(i%2 && flag == 1){
                EE_WriteVariable(i/2, system_parameter_base_u16[i/2]);
                flag = 0;
            }
        }
    }
    if(flag == 1){
        EE_WriteVariable(i/2, system_parameter_base_u16[i/2]);
        flag = 0;
    }
    
}

//sta mac config
bool system_parameter_set_station_macaddr(system_parameter_t *system_parameter, uint8_t *sta_macaddr)
{
    uint8_t *macaddr = NULL;
    system_param_item_t *param_item = get_param_item_cache();

    ART_ASSERT(system_parameter && sta_macaddr);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(&param_item->item.wifi_common_config, &system_parameter->wifi_common_config, sizeof(wifi_common_config_t));
    param_item->item_id = (uint32_t)WIFI_COMMON_CONFIG;
    macaddr = (param_item->item.wifi_common_config.sta_addr);
    memcpy(macaddr, sta_macaddr, MAC_ADDRESS_LEN);
    system_parameter_sync_to_flash(system_parameter, param_item);
    OS_MutexUnlock(&system_parameter->lock);
    return true;
}
bool system_parameter_get_station_macaddr(system_parameter_t *system_parameter, uint8_t *sta_macaddr)
{
    ART_ASSERT(system_parameter && sta_macaddr);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(sta_macaddr, system_parameter->wifi_common_config.sta_addr, MAC_ADDRESS_LEN);
    OS_MutexUnlock(&system_parameter->lock);
    return true;
}

//ap mac config
bool system_parameter_set_ap_macaddr(system_parameter_t *system_parameter, uint8_t *ap_macaddr)
{
    system_param_item_t *param_item = get_param_item_cache();

    ART_ASSERT(system_parameter && ap_macaddr);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(&param_item->item.wifi_common_config, &system_parameter->wifi_common_config, sizeof(wifi_common_config_t));
    param_item->item_id = (uint32_t)WIFI_COMMON_CONFIG;
    memcpy(param_item->item.wifi_common_config.ap_addr, ap_macaddr, MAC_ADDRESS_LEN);
    system_parameter_sync_to_flash(system_parameter, param_item);
    OS_MutexUnlock(&system_parameter->lock);
    return true;
}
bool system_parameter_get_ap_macaddr(system_parameter_t *system_parameter, uint8_t *ap_macaddr)
{
    ART_ASSERT(system_parameter && ap_macaddr);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(ap_macaddr, system_parameter->wifi_common_config.ap_addr, MAC_ADDRESS_LEN);
    OS_MutexUnlock(&system_parameter->lock);
    return true;
}

//sta config
void system_parameter_set_station_config(system_parameter_t *system_parameter, wifi_sta_config_t *sta_config)
{
    system_param_item_t *param_item = get_param_item_cache();

    ART_ASSERT(system_parameter && sta_config);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    param_item->item_id = (uint32_t)WIFI_STA_CONFIG;
    memcpy(&param_item->item.sta_config, sta_config, sizeof(wifi_sta_config_t));
    system_parameter_sync_to_flash(system_parameter, param_item);
    OS_MutexUnlock(&system_parameter->lock);
}
void system_parameter_get_station_config(system_parameter_t *system_parameter, wifi_sta_config_t *sta_config)
{
    ART_ASSERT(system_parameter && sta_config);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(sta_config, &(system_parameter->sta_config), sizeof(wifi_sta_config_t));
    OS_MutexUnlock(&system_parameter->lock);
}

//ap config
void system_parameter_set_ap_config(system_parameter_t *system_parameter, wifi_ap_config_t *ap_config)
{
    system_param_item_t *param_item = get_param_item_cache();

    ART_ASSERT(system_parameter && ap_config);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    param_item->item_id = (uint32_t)WIFI_AP_CONFIG;
    memcpy(&param_item->item.ap_config, ap_config,sizeof(wifi_ap_config_t));
    system_parameter_sync_to_flash(system_parameter, param_item);
    OS_MutexUnlock(&system_parameter->lock);
}
void system_parameter_get_ap_config(system_parameter_t *system_parameter, wifi_ap_config_t *ap_config)
{
    ART_ASSERT(system_parameter && ap_config);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(ap_config, &(system_parameter->ap_config), sizeof(wifi_ap_config_t));
    OS_MutexUnlock(&system_parameter->lock);
}

//PSK info
bool system_parameter_set_psk_info(system_parameter_t *system_parameter, wifi_psk_info_t *psk_info)
{
    int i, idx_idle = -1;
    wifi_psk_info_t *wifi_psk_info = NULL;
    wifi_psk_info_list_t wifi_psk_info_list = {0,};
    system_param_item_t *param_item = get_param_item_cache();
    bool need_flush = false;

    ART_ASSERT(system_parameter && psk_info);

    if(system_parameter_get_psk_info_list(system_parameter, &wifi_psk_info_list))
    {
        for(i = 0; i < (sizeof(wifi_psk_info_list_t)/sizeof(wifi_psk_info_t)); i++){
            wifi_psk_info = &(wifi_psk_info_list.psk_info_list[i]);
            //Got it
            if((psk_info->ssid_len == wifi_psk_info->ssid_len)
                && (psk_info->password_len == wifi_psk_info->password_len)
                && ((psk_info->password_len > 0) && !memcmp(psk_info->password, wifi_psk_info->password, psk_info->password_len))
                && ((psk_info->ssid_len > 0) && !memcmp(psk_info->ssid, wifi_psk_info->ssid, psk_info->ssid_len))){
                break;
            }

            //First idle
            if((idx_idle < 0)
                && (psk_info->password_len == 0)
                && (psk_info->ssid_len == 0)){
                idx_idle = i;
            }
        }
        if(i < (sizeof(wifi_psk_info_list_t)/sizeof(wifi_psk_info_t))){//already in list
            wifi_psk_info = &(wifi_psk_info_list.psk_info_list[i]);
            if(memcmp(psk_info->psk, wifi_psk_info->psk, 40) != 0){//update
                memcpy(wifi_psk_info->psk, psk_info->psk, 40);
                need_flush = true;
            }
        }else if(idx_idle >= 0 && idx_idle < (sizeof(wifi_psk_info_list_t)/sizeof(wifi_psk_info_t))){
            wifi_psk_info = &(wifi_psk_info_list.psk_info_list[i]);
            memcpy(wifi_psk_info, psk_info, sizeof(wifi_psk_info_t));
            need_flush = true;
        }else{
            wifi_psk_info = &(wifi_psk_info_list.psk_info_list[0]);
            memcpy(wifi_psk_info, psk_info, sizeof(wifi_psk_info_t));
            need_flush = true;
        }

        if(need_flush){
            system_parameter_set_psk_info_list(system_parameter, &wifi_psk_info_list);
        }
        return true;
    }
    return false;
}
bool system_parameter_get_psk_info(system_parameter_t *system_parameter, wifi_psk_info_t *psk_info)
{
    int i;
    wifi_psk_info_t *wifi_psk_info = NULL;
    wifi_psk_info_list_t wifi_psk_info_list = {0,};
    system_param_item_t *param_item = get_param_item_cache();

    ART_ASSERT(system_parameter && psk_info);

    if(system_parameter_get_psk_info_list(system_parameter, &wifi_psk_info_list))
    {
        for(i = 0; i < (sizeof(wifi_psk_info_list_t)/sizeof(wifi_psk_info_t)); i++){
            wifi_psk_info = &(wifi_psk_info_list.psk_info_list[i]);
            //Got it
            if((psk_info->ssid_len == wifi_psk_info->ssid_len)
                && (psk_info->password_len == wifi_psk_info->password_len)
                && ((psk_info->password_len > 0) && !memcmp(psk_info->password, wifi_psk_info->password, psk_info->password_len))
                && ((psk_info->ssid_len > 0) && !memcmp(psk_info->ssid, wifi_psk_info->ssid, psk_info->ssid_len))){
                break;
            }
        }
        if(i < (sizeof(wifi_psk_info_list_t)/sizeof(wifi_psk_info_t))){//already in list
            wifi_psk_info = &(wifi_psk_info_list.psk_info_list[i]);
            memcpy(psk_info, wifi_psk_info, sizeof(wifi_psk_info_t));
            return true;
        }
    }
    return false;
}
bool system_parameter_set_psk_info_list(system_parameter_t *system_parameter, wifi_psk_info_list_t *psk_info_list)
{
    system_param_item_t *param_item = get_param_item_cache();

    ART_ASSERT(system_parameter && psk_info_list);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    param_item->item_id = (uint32_t)WIFI_PSK_INFO;
    memcpy(&param_item->item.psk_info_list, psk_info_list, sizeof(wifi_psk_info_list_t));
    system_parameter_sync_to_flash(system_parameter, param_item);
    OS_MutexUnlock(&system_parameter->lock);
    return true;
}
bool system_parameter_get_psk_info_list(system_parameter_t *system_parameter, wifi_psk_info_list_t *psk_info_list)
{
    ART_ASSERT(system_parameter && psk_info_list);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(psk_info_list, &(system_parameter->psk_info_list), sizeof(wifi_psk_info_list_t));
    OS_MutexUnlock(&system_parameter->lock);
    return true;
}

//sta ip config
void system_parameter_set_sta_ip_config(system_parameter_t *system_parameter, ip_config_t *sta_ip_config)
{
    system_param_item_t *param_item = get_param_item_cache();

    ART_ASSERT(system_parameter && sta_ip_config);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    param_item->item_id = (uint32_t)STA_IP_CONFIG;
    memcpy(&param_item->item.sta_ip_config, sta_ip_config, sizeof(ip_config_t));
    system_parameter_sync_to_flash(system_parameter, param_item);
    OS_MutexUnlock(&system_parameter->lock);
}
void system_parameter_get_sta_ip_config(system_parameter_t *system_parameter, ip_config_t *sta_ip_config)
{
    ART_ASSERT(system_parameter && sta_ip_config);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(sta_ip_config, &(system_parameter->sta_ip_config), sizeof(ip_config_t));
    OS_MutexUnlock(&system_parameter->lock);
}

//ap ip config
void system_parameter_set_ap_ip_config(system_parameter_t *system_parameter, ip_config_t *ap_ip_config)
{
    system_param_item_t *param_item = get_param_item_cache();

    ART_ASSERT(system_parameter && ap_ip_config);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    param_item->item_id = (uint32_t)AP_IP_CONFIG;
    memcpy(&param_item->item.ap_ip_config, ap_ip_config, sizeof(ip_config_t));
    system_parameter_sync_to_flash(system_parameter, param_item);
    OS_MutexUnlock(&system_parameter->lock);
}
void system_parameter_get_ap_ip_config(system_parameter_t *system_parameter, ip_config_t *ap_ip_config)
{
    ART_ASSERT(system_parameter && ap_ip_config);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(ap_ip_config, &(system_parameter->ap_ip_config), sizeof(ip_config_t));
    OS_MutexUnlock(&system_parameter->lock);
}

//dhcp enable config
bool system_parameter_set_dhcp_enable(system_parameter_t *system_parameter, uint8_t en)
{
    system_param_item_t *param_item = get_param_item_cache();

    ART_ASSERT(system_parameter);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    param_item->item_id             = (uint32_t)DHCP_ENABLE_CONFIG;
    param_item->item.dhcp_sw_config = en;
    system_parameter_sync_to_flash(system_parameter, param_item);
    OS_MutexUnlock(&system_parameter->lock);
    return true;
}

uint8_t system_parameter_get_dhcp_enable(system_parameter_t *system_parameter)
{
    ART_ASSERT(system_parameter);

    return system_parameter->dhcp_sw_config;
}

//wifi mode config
bool system_parameter_set_wifi_mode(system_parameter_t *system_parameter, wifi_mode_enum_t wifi_mode)
{
    system_param_item_t *param_item = get_param_item_cache();

    ART_ASSERT(system_parameter && wifi_mode);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(&param_item->item.wifi_common_config, &system_parameter->wifi_common_config, sizeof(wifi_common_config_t));
    param_item->item_id = (uint32_t)WIFI_COMMON_CONFIG;
    param_item->item.wifi_common_config.mode = wifi_mode;
    system_parameter_sync_to_flash(system_parameter, param_item);
    OS_MutexUnlock(&system_parameter->lock);
    return true;
}

wifi_mode_enum_t system_parameter_get_wifi_mode(system_parameter_t *system_parameter)
{
    ART_ASSERT(system_parameter);

    return system_parameter->wifi_common_config.mode;
}

//sta_hostname config
void system_parameter_set_sta_hostname(system_parameter_t *system_parameter, uint8_t *hostname)
{
    system_param_item_t *param_item = get_param_item_cache();

    ART_ASSERT(system_parameter && hostname);
    
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(&param_item->item.hostname_cfg, &system_parameter->hostname_cfg, sizeof(hostname_t));
    memcpy(&param_item->item.hostname_cfg.sta_hostname, hostname, (strlen((char *)hostname)>NETIF_HOSTNAME_LEN_MAX) ? NETIF_HOSTNAME_LEN_MAX : strlen((char *)hostname));
    param_item->item_id = (uint32_t)HOSTNAME_CONFIG;
    
    system_parameter_sync_to_flash(system_parameter, param_item);
    OS_MutexUnlock(&system_parameter->lock);
}
void system_parameter_get_sta_hostname(system_parameter_t *system_parameter, uint8_t *hostname)
{
    uint8_t * name = (uint8_t *)&(system_parameter->hostname_cfg.sta_hostname);
    
    ART_ASSERT(system_parameter && hostname);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(hostname, name, (strlen((char *)name) > NETIF_HOSTNAME_LEN_MAX) ? NETIF_HOSTNAME_LEN_MAX : strlen((char *)name));
    OS_MutexUnlock(&system_parameter->lock);
}

//ap_hostname config
void system_parameter_set_ap_hostname(system_parameter_t *system_parameter, uint8_t *hostname)
{
    system_param_item_t *param_item = get_param_item_cache();

    ART_ASSERT(system_parameter && hostname);
    
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(&param_item->item.hostname_cfg, &system_parameter->hostname_cfg, sizeof(hostname_t));
    memcpy(&param_item->item.hostname_cfg.ap_hostname, hostname, (strlen((char *)hostname)>NETIF_HOSTNAME_LEN_MAX) ? NETIF_HOSTNAME_LEN_MAX : strlen((char *)hostname));
    param_item->item_id = (uint32_t)HOSTNAME_CONFIG;
    
    system_parameter_sync_to_flash(system_parameter, param_item);
    OS_MutexUnlock(&system_parameter->lock);
}
void system_parameter_get_ap_hostname(system_parameter_t *system_parameter, uint8_t *hostname)
{
    uint8_t * name = (uint8_t *)&(system_parameter->hostname_cfg.ap_hostname);
    
    ART_ASSERT(system_parameter && hostname);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(hostname, name, (strlen((char *)name) > NETIF_HOSTNAME_LEN_MAX) ? NETIF_HOSTNAME_LEN_MAX : strlen((char *)name));
    OS_MutexUnlock(&system_parameter->lock);
}


wifi_mode_enum_t system_parameter_get_wifi_mode_default(void)
{
    return WIFI_MODE_DEFAULT;
}
bool system_parameter_get_wifi_config_default (wifi_interface_enum_t if_index, wifi_config_t *config)
{
    wifi_ap_config_t  *ap = NULL;
    wifi_sta_config_t *sta = NULL;
    int len = 0;
    
    ART_ASSERT(config);
    memset(config, 0, sizeof(wifi_config_t));

    //从出厂默认参数中获取
    if(if_index == STATION_IF){
        sta = &config->sta;
        //memset(sta->ssid, SSID_MAX_LEN, 0);
        //memset(sta->password, PASSWORD_MAX_LEN, 0);
        //memset(sta->bssid, BSSID_LEN, 0);
        sta->channel = 1;
        sta->bssid_set = 0;
        sta->scan_method = WIFI_ALL_CHANNEL_SCAN;
    }else{
        ap = &config->ap;
        ap->ssid_len = strlen(WIFI_AP_SSID_DEFAULT);
        memcpy(ap->ssid, WIFI_AP_SSID_DEFAULT, ap->ssid_len);
        len = (strlen(WIFI_AP_PASSWORD_DEFAULT) < PASSWORD_MAX_LEN) ? strlen(WIFI_AP_PASSWORD_DEFAULT) : PASSWORD_MAX_LEN;
        memcpy(ap->password, WIFI_AP_PASSWORD_DEFAULT, len);
        ap->channel = WIFI_AP_CHANNEL_DEFAULT;
        ap->authmode = WIFI_AP_AUTH_MODE_DEFAULT;
        ap->ssid_hidden = WIFI_AP_SSID_HIDDEN_DEFAULT;
        ap->max_connection = WIFI_AP_MAX_CONNECTION_DEFAULT;
        ap->beacon_interval = WIFI_AP_BEACON_INTERVAL_DEFAULT;
    }

    return true;
}
bool system_parameter_get_wifi_macaddr_default (wifi_interface_enum_t if_index, uint8_t *macaddr)
{
    ART_ASSERT(macaddr);
    memset(macaddr, 0, MAC_ADDRESS_LEN);
    if(if_index == STATION_IF){
        macaddr[0] = STA_MAC_ADDR0;
        macaddr[1] = STA_MAC_ADDR1;
        macaddr[2] = STA_MAC_ADDR2;
        macaddr[3] = STA_MAC_ADDR3;
        macaddr[4] = STA_MAC_ADDR4;
        macaddr[5] = STA_MAC_ADDR5;
    }else{
        macaddr[0] = AP_MAC_ADDR0;
        macaddr[1] = AP_MAC_ADDR1;
        macaddr[2] = AP_MAC_ADDR2;
        macaddr[3] = AP_MAC_ADDR3;
        macaddr[4] = AP_MAC_ADDR4;
        macaddr[5] = AP_MAC_ADDR5;
    }
    return true;
}

bool system_parameter_set_dhcpd_config(system_parameter_t *system_parameter, server_config_t *server_config)
{
    system_param_item_t *param_item = get_param_item_cache();

    ART_ASSERT(system_parameter && server_config);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    param_item->item_id = (uint32_t)DHCPD_CONFIG;
    memcpy(&param_item->item.dhcpd_config, server_config, sizeof(server_config_t));
    system_parameter_sync_to_flash(system_parameter, param_item);
    OS_MutexUnlock(&system_parameter->lock);
    return true;
}
bool system_parameter_get_dhcpd_config(system_parameter_t *system_parameter, server_config_t *server_config)
{
    ART_ASSERT(system_parameter && server_config);
    OS_MutexLock(&system_parameter->lock, OS_WAIT_FOREVER);
    memcpy(server_config, &(system_parameter->dhcpd_config), sizeof(server_config_t));
    OS_MutexUnlock(&system_parameter->lock);
    return true;
}
bool system_parameter_get_sta_ip_config_default (ip_config_t *ip_config)
{
    ART_ASSERT(ip_config);
    memset(ip_config, 0, sizeof(ip_config_t));
    ip_config->ip_addr[0] = STA_IP_ADDR0;
    ip_config->ip_addr[1] = STA_IP_ADDR1;
    ip_config->ip_addr[2] = STA_IP_ADDR2;
    ip_config->ip_addr[3] = STA_IP_ADDR3;

    ip_config->netmask[0] = STA_NETMASK_ADDR0;
    ip_config->netmask[1] = STA_NETMASK_ADDR1;
    ip_config->netmask[2] = STA_NETMASK_ADDR2;
    ip_config->netmask[3] = STA_NETMASK_ADDR3;

    ip_config->gw[0] = STA_GW_ADDR0;
    ip_config->gw[1] = STA_GW_ADDR1;
    ip_config->gw[2] = STA_GW_ADDR2;
    ip_config->gw[3] = STA_GW_ADDR3;
    return true;
}

bool system_parameter_get_dhcpd_config_default (server_config_t *server_config)
{
    ART_ASSERT(server_config);
    memset(server_config, 0, sizeof(server_config_t));
    ip4_addr_set_u32(&(server_config->server), AP_IP_ADDR0|(AP_IP_ADDR1 << 8)|(AP_IP_ADDR2 << 16)|(AP_IP_ADDR3 << 24));
    server_config->port = DHCPD_LISTEN_PORT;
    server_config->lease = DHCPD_IP_LEASE_TIME;
    server_config->renew = DHCPD_IP_RENEW_TIME;
    ip4_addr_set_u32(&(server_config->ip_start), DHCPD_IP_START);
    ip4_addr_set_u32(&(server_config->ip_end), DHCPD_IP_END);
    server_config->client_max = DHCPD_CLIENT_MAX;
    return true;
}

bool system_parameter_get_hostname_default (wifi_interface_enum_t if_index, char *hostname)
{
    ART_ASSERT(hostname);
    if(if_index == STATION_IF){
        memcpy(hostname, STA_HOSTNAME, strlen(STA_HOSTNAME));
    }else{
        memcpy(hostname, AP_HOSTNAME, strlen(AP_HOSTNAME));
    }
    return true;
}




