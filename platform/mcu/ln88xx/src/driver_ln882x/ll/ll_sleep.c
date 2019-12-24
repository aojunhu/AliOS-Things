
#include "types.h"
#include "reg_sysc_cmp.h"
#include "reg_sysc_awo.h"
#include "reg_mac_pcu_reg.h"
#include "ll/ll_sleep.h"

#define PRE_SLEEP_LOOP_COUNT            10
void ll_pre_sleep_processing(sleep_mode_enum_t sleep_mode, uint8_t sram_powerdown)
{
    int i = 0;
    
    if(sleep_mode < LIGHT_SLEEP || sleep_mode > FROZEN_SLEEP){
        return;
    }

    sysc_awo_o_phy_pd_en_setf(1);
    sysc_awo_o_phy_po_en_setf(1);
    sysc_awo_ldo18_po_en_setf(7);
    if(sleep_mode >= RETENTION_SLEEP){
        sysc_awo_o_sram_pd_en_setf(sram_powerdown);
        sysc_awo_o_sram_po_en_setf(0x07);
        sysc_awo_r_pmu_ret_en_setf(1);
        sysc_awo_r_pmu_unret_en_setf(1);
        sysc_awo_o_pdcmp_po_setf(0);
        if(sleep_mode == FROZEN_SLEEP){
            sysc_awo_o_cpucore_retreg_po_setf(0);           //set 0 to enter frozon mode
            sysc_awo_idle_reg_set(0x52);
        }else{
            sysc_awo_o_cpucore_retreg_po_setf(1);
            sysc_awo_lp_mode_awo_setf(1);
        }
    }else{//sleep_mode <= DEEP_SLEEP
        sysc_awo_o_pdcmp_po_setf(1);
        sysc_awo_o_cpucore_retreg_po_setf(1);

        // if phy needs power down, then save phy reg to cmp
        sysc_cmp_rfreg_len_setf(0x151);
        sysc_cmp_rfreg_base_addr_setf(0);
        sysc_cmp_rfreg_action_set(0x1);     //bit 0 is save rf register
        while(sysc_cmp_save_done_getf() != 1);
    }

    if((sleep_mode >= DEEP_SLEEP) && (sleep_mode <= RETENTION_SLEEP)){
        mac_pcu_reg_mac_power_management_ctrl_ps_clk_switch_setf(1);//switch to 32k and power saving
    }

    //set CM4 sleep mode
    if(sleep_mode >= DEEP_SLEEP){
        SCB->SCR |= (1<<2);
    }else{
        SCB->SCR &= ~(1<<2);
    }
    if(sleep_mode == LIGHT_SLEEP){
        sysc_awo_sw_pwr_ctrl_set(0x02);
        while(i++ < PRE_SLEEP_LOOP_COUNT){
            __NOP();
        }
        while(sysc_awo_pmu_fsm_getf() != 0);
        sysc_cmp_sw_clkg_set(0x000600);
    }
}

void ll_post_sleep_processing(sleep_mode_enum_t sleep_mode)
{
    if(sleep_mode < LIGHT_SLEEP || sleep_mode > FROZEN_SLEEP){
        return;
    }

    if(sleep_mode <= DEEP_SLEEP){
        if(sleep_mode == LIGHT_SLEEP){
            sysc_awo_sw_pwr_ctrl_set(0x01);
            sysc_cmp_sw_clkg_set(0xFFFFFFFF);
            while(sysc_awo_pmu_fsm_getf() != 0);
        }
        //restore RF register firstly
        sysc_cmp_rfreg_action_set(0x2);//bit 2 is restore rf register
        while(sysc_cmp_restore_done_getf() != 1);
    }

    if((sleep_mode >= DEEP_SLEEP) && (sleep_mode <= RETENTION_SLEEP)){
        mac_pcu_reg_mac_power_management_ctrl_ps_clk_switch_setf(0);//switch to 40M
    }
}

