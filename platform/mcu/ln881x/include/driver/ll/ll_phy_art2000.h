#ifndef __LL_PHY_ART2000_H__
#define __LL_PHY_ART2000_H__

#ifdef __cplusplus
    extern "C" {
#endif /* __cplusplus */

#include <stdint.h>

/**
 * @brief  Read value to the addr of PHY-PA.
 * @param  addr: the address of PHY-PA register.
 *         value: the value of PHY-PA register. 
 * @return 0 : on success, 1 : read reg timeout(failed)
 * @note   There is a 22 ms blocking delay inside the function.
 */
int32_t ll_phy_art2000_reg_read(uint8_t reg_addr, uint32_t *reg_data);
        
/**
 * @brief  Write value to the addr of PHY-PA.
 * @param  addr: the address of PHY-PA register.
 *         value: the value of PHY-PA register. 
 * @return 0 : on success, -1 : write reg timeout(failed)
 * @note   There is a 11 ms blocking delay inside the function.
 */
int32_t ll_phy_art2000_reg_write(uint8_t reg_addr, uint32_t reg_data);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __LL_PHY_ART2000_H__ */
