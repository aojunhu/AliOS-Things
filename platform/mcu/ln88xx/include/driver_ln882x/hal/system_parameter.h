#ifndef __SYSTEM_PARAMETER_H__
#define __SYSTEM_PARAMETER_H__
#include "proj_config.h"

#include "types.h"
#include "osal/osal.h"
#include "wifi/wifi.h"
#include "network_ctrl/network_ctrl.h"
#include "dhcpd/dhcpd.h"

typedef struct {
    wifi_mode_enum_t  mode;
    uint8_t           sta_addr[MAC_ADDRESS_LEN];
    uint8_t           ap_addr[MAC_ADDRESS_LEN];
} wifi_common_config_t;

typedef struct {
    uint8_t ip_addr[4];   /**< ip */
    uint8_t netmask[4];   /**< netmask */
    uint8_t gw[4];        /**< gateway */
}ip_config_t;

typedef struct {
    uint8_t sta_hostname[NETIF_HOSTNAME_LEN_MAX+1];
    uint8_t ap_hostname[NETIF_HOSTNAME_LEN_MAX+1];
} hostname_t;

typedef struct {
    uint8_t password[64];
    uint8_t password_len;
    uint8_t ssid[33];
    uint8_t ssid_len;
    uint8_t psk[40];
} wifi_psk_info_t;
#define WIFI_PSK_INFO_LIST_SIZE                 (4)
typedef struct {
    wifi_psk_info_t psk_info_list[WIFI_PSK_INFO_LIST_SIZE];
} wifi_psk_info_list_t;

typedef enum {
    WIFI_COMMON_CONFIG = 0,
    WIFI_STA_CONFIG,
    WIFI_AP_CONFIG,
    STA_IP_CONFIG,
    AP_IP_CONFIG,
    DHCP_ENABLE_CONFIG,
    HOSTNAME_CONFIG,
    DHCPD_CONFIG,
    WIFI_PSK_INFO,
} system_parameter_item_id_enum_t;

typedef struct {
    wifi_common_config_t    wifi_common_config;
    wifi_sta_config_t       sta_config;
    wifi_ap_config_t        ap_config;
    ip_config_t             sta_ip_config;
    ip_config_t             ap_ip_config;
    uint8_t                 dhcp_sw_config;
    hostname_t              hostname_cfg;
    server_config_t         dhcpd_config;
    wifi_psk_info_list_t    psk_info_list;
    OS_Mutex_t              lock;
} system_parameter_t;

typedef struct {
    uint32_t                    item_id;
    union
    {
        wifi_common_config_t    wifi_common_config;
        wifi_sta_config_t       sta_config;
        wifi_ap_config_t        ap_config;
        ip_config_t             sta_ip_config;
        ip_config_t             ap_ip_config;
        uint8_t                 dhcp_sw_config;          
        hostname_t              hostname_cfg;
	    server_config_t         dhcpd_config;
        wifi_psk_info_list_t    psk_info_list;
    }item;
} system_param_item_t;

void system_parameter_init(void);
void system_parameter_deinit(void);
system_parameter_t *get_system_parameter_handle(void);

//sta mac config
bool system_parameter_set_station_macaddr(system_parameter_t *system_parameter, uint8_t *macaddr);
bool system_parameter_get_station_macaddr(system_parameter_t *system_parameter, uint8_t *macaddr);
//ap mac config
bool system_parameter_set_ap_macaddr(system_parameter_t *system_parameter, uint8_t *macaddr);
bool system_parameter_get_ap_macaddr(system_parameter_t *system_parameter, uint8_t *macaddr);
//sta config
void system_parameter_set_station_config(system_parameter_t *system_parameter, wifi_sta_config_t *sta_config);
void system_parameter_get_station_config(system_parameter_t *system_parameter, wifi_sta_config_t *sta_config);
//ap config
void system_parameter_set_ap_config(system_parameter_t *system_parameter, wifi_ap_config_t *ap_config);
void system_parameter_get_ap_config(system_parameter_t *system_parameter, wifi_ap_config_t *ap_config);
//sta ip config
void system_parameter_set_sta_ip_config(system_parameter_t *system_parameter, ip_config_t *sta_ip_config);
void system_parameter_get_sta_ip_config(system_parameter_t *system_parameter, ip_config_t *sta_ip_config);
//ap ip config
void system_parameter_set_ap_ip_config(system_parameter_t *system_parameter, ip_config_t *ap_ip_config);
void system_parameter_get_ap_ip_config(system_parameter_t *system_parameter, ip_config_t *ap_ip_config);
//dhcp enable config
bool system_parameter_set_dhcp_enable(system_parameter_t *system_parameter, uint8_t en);
uint8_t system_parameter_get_dhcp_enable(system_parameter_t *system_parameter);
//sta_hostname config
void system_parameter_set_sta_hostname(system_parameter_t *system_parameter, uint8_t *hostname);
void system_parameter_get_sta_hostname(system_parameter_t *system_parameter, uint8_t *hostname);
//ap_hostname config
void system_parameter_set_ap_hostname(system_parameter_t *system_parameter, uint8_t *hostname);
void system_parameter_get_ap_hostname(system_parameter_t *system_parameter, uint8_t *hostname);
////PSK info
bool system_parameter_set_psk_info(system_parameter_t *system_parameter, wifi_psk_info_t *psk_info);
bool system_parameter_get_psk_info(system_parameter_t *system_parameter, wifi_psk_info_t *psk_info);
bool system_parameter_set_psk_info_list(system_parameter_t *system_parameter, wifi_psk_info_list_t *psk_info_list);
bool system_parameter_get_psk_info_list(system_parameter_t *system_parameter, wifi_psk_info_list_t *psk_info_list);
bool system_parameter_set_wifi_mode(system_parameter_t *system_parameter, wifi_mode_enum_t wifi_mode);
wifi_mode_enum_t system_parameter_get_wifi_mode(system_parameter_t *system_parameter);
wifi_mode_enum_t system_parameter_get_wifi_mode_default(void);
bool system_parameter_get_wifi_config_default (wifi_interface_enum_t if_index, wifi_config_t *config);
bool system_parameter_get_wifi_macaddr_default (wifi_interface_enum_t if_index, uint8_t *macaddr);

bool system_parameter_set_dhcpd_config(system_parameter_t *system_parameter, server_config_t *server_config);
bool system_parameter_get_dhcpd_config(system_parameter_t *system_parameter, server_config_t *server_config);
bool system_parameter_get_dhcpd_config_default (server_config_t *server_config);
bool system_parameter_get_sta_ip_config_default (ip_config_t *ip_config);
bool system_parameter_get_hostname_default (wifi_interface_enum_t if_index, char *hostname);

#endif /* __SYSTEM_PARAMETER_H__ */

