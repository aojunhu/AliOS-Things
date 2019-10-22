#include "reg_sdio.h"
#include "driver/ll/ll_sdio.h"

uint8_t *ll_sdio_cis_func_get(sdio_func_enum_t fn)
{
    uint8_t *fn_reg_base = NULL;

    switch (fn) {
        case SDIO_FUNC0:
            fn_reg_base = (uint8_t *)sdio_sdio_cis_fn0_get();
            break;
        case SDIO_FUNC1:
            fn_reg_base = (uint8_t *)sdio_sdio_cis_fn1_get();
            break;
        case SDIO_FUNC2:
            fn_reg_base = (uint8_t *)sdio_sdio_cis_fn2_get();
            break;
        case SDIO_FUNC3:
            fn_reg_base = (uint8_t *)sdio_sdio_cis_fn3_get();
            break;
        case SDIO_FUNC4:
            fn_reg_base = (uint8_t *)sdio_sdio_cis_fn4_get();
            break;
        case SDIO_FUNC5:
            fn_reg_base = (uint8_t *)sdio_sdio_cis_fn5_get();
            break;
        case SDIO_FUNC6:
            fn_reg_base = (uint8_t *)sdio_sdio_cis_fn6_get();
            break;
        case SDIO_FUNC7:
            fn_reg_base = (uint8_t *)sdio_sdio_cis_fn7_get();
            break;
    }
    return fn_reg_base;
}
bool ll_sdio_cis_fn_set(sdio_func_enum_t fn, uint32_t offset, uint8_t value)
{
    uint8_t *fn_reg_base = NULL;

    fn_reg_base = ll_sdio_cis_func_get(fn);
    if(fn_reg_base) {
        *(fn_reg_base + offset) = value;
        return true;
    }
    return false;
}
uint32_t *ll_sdio_receive_from_host_buffer_get(void)
{
    return (uint32_t *)sdio_sdio_write_fn1_get();
}
void ll_sdio_receive_from_host_buffer_set(uint8_t *addr)
{
    sdio_sdio_write_fn1_set((uint32_t)addr);
}

uint16_t ll_sdio_receive_from_host_buffer_size_get(void)
{
    return sdio_sdio_xfer_cnt_getf();
}

uint32_t *ll_sdio_xfer_to_host_buffer_get(void)
{
    return (uint32_t *)sdio_sdio_read_fn1_get();
}
void ll_sdio_xfer_to_host_buffer_set(uint8_t *addr)
{
    sdio_sdio_read_fn1_set((uint32_t)addr);
}
void ll_sdio_xfer_to_host_buffer_size_set(uint32_t size)
{
    sdio_xfer_cnt_setf(size);
}
void ll_sdio_triggle_data1_interrupt_to_host(void)
{
    sdio_sdio_fn1_spec_pack(SDIO_HOST_IIR_REG_SET);
}

#if (SET_CISTPL_CHECKSUM == 1)
static uint8_t get_checksum(uint8_t *buffer, uint32_t len)
{
    uint8_t chk_sum = 0, *ptr = NULL;

    for(ptr = buffer; ptr < (buffer + len); ptr++)
        chk_sum += *ptr;

    return chk_sum;
}
#endif

static void ll_sdio_cis_init(void)
{
    sdio_func_enum_t fn = SDIO_FUNC0;
    uint32_t offset = 0;
#if (SET_CISTPL_CHECKSUM == 1)
    uint8_t chk_sum = 0;
#endif

#if (SET_CISTPL_CHECKSUM == 1)
    /* Setting the CISTPL_CHECKSUM Tuple */
    ll_sdio_cis_fn_set(fn, offset++, 0x10); /* CISTPL_CHECKSUM                  */
    ll_sdio_cis_fn_set(fn, offset++, 0x05); /* TPL_LINK                         */
    ll_sdio_cis_fn_set(fn, offset++, 0x07); /* TPLCKS_ADDR0                     */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLCKS_ADDR1                     */
    offset++;                          /* TPLCKS_LEN0                      */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLCKS_LEN1                      */
    offset++;                          /* TPLCKS_CS                        */
#endif
    /* Setting the CISTPL_MANFID Tuple */
    ll_sdio_cis_fn_set(fn, offset++, 0x20); /* CISTPL_MANFID                    */
    ll_sdio_cis_fn_set(fn, offset++, 0x04); /* TPL_LINK                         */
    ll_sdio_cis_fn_set(fn, offset++, 0x2C); /* TPLMID_SDIO MAN CODE0            */
    ll_sdio_cis_fn_set(fn, offset++, 0x03); /* TPLMID_SDIO MAN CODE1            */
    ll_sdio_cis_fn_set(fn, offset++, 0x20); /* TPLMID_CARD MAN INFO0            */
    ll_sdio_cis_fn_set(fn, offset++, 0x01); /* TPLMID_CARD MAN INFO1            */

    /* Setting the CISTPL_FUNCID Tuple */
    ll_sdio_cis_fn_set(fn, offset++, 0x21); /* CISTPL_FUNCID                    */
    ll_sdio_cis_fn_set(fn, offset++, 0x02); /* TPL_LINK                         */
    ll_sdio_cis_fn_set(fn, offset++, 0x0C); /* TPLFID_FUNCTION                  */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFID_SYSINIT                   */

    /* Setting the CISTPL_FUNCE Tuple */
    ll_sdio_cis_fn_set(fn, offset++, 0x22); /* CISTPL_FUNCE                     */
    ll_sdio_cis_fn_set(fn, offset++, 0x04); /* TPL_LINK                         */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_TYPE                       */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_FN0_BLK_SIZE0              */
    ll_sdio_cis_fn_set(fn, offset++, 0x08); /* TPLFE_FN0_BLK_SIZE1              */
    ll_sdio_cis_fn_set(fn, offset++, 0x5A); /* TPLFE_MAX_TRANS_SPEED            */

    /* Setting the CISTPL_EMD Tuple */
    ll_sdio_cis_fn_set(fn, offset++, 0xFF); /* CISTPL_SDIO_END                  */
#if (SET_CISTPL_CHECKSUM == 1)
    chk_sum = get_checksum(ll_sdio_cis_func_get(SDIO_FUNC0) + (SDIO_FUNC_CIS_CHECKSUM_OFFSET + 1), (offset - (SDIO_FUNC_CIS_CHECKSUM_OFFSET + 1)));
    /* Update the CIS with length and the Checksum value   */
    ll_sdio_cis_fn_set(fn, SDIO_FUN_CIS_LENGTH_OFFSET, (offset - (SDIO_FUNC_CIS_CHECKSUM_OFFSET + 1)));/* TPLCKS_ADDR0 */
    ll_sdio_cis_fn_set(fn, SDIO_FUNC_CIS_CHECKSUM_OFFSET, chk_sum); /* TPLCKS_CS    */
#endif

    fn = SDIO_FUNC1;
    offset = 0;
#if (SET_CISTPL_CHECKSUM == 1)
    chk_sum = 0;
    /* Setting the CISTPL_CHECKSUM Tuple */
    ll_sdio_cis_fn_set(fn, offset++, 0x10); /* CISTPL_CHECKSUM                  */
    ll_sdio_cis_fn_set(fn, offset++, 0x05); /* TPL_LINK                         */
    ll_sdio_cis_fn_set(fn, offset++, 0x06); /* TPLCKS_ADDR0                     */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLCKS_ADDR1                     */
    offset++;                          /* TPLCKS_LEN0                      */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLCKS_LEN1                      */
    offset++;                          /* TPLCKS_CS                        */
#endif
    /* Setting the CISTPL_MANFID Tuple */
    ll_sdio_cis_fn_set(fn, offset++, 0x20); /* CISTPL_MANFID                    */
    ll_sdio_cis_fn_set(fn, offset++, 0x04); /* TPL_LINK                         */
    ll_sdio_cis_fn_set(fn, offset++, 0x49); /* TPLMID_SDIO MAN CODE0            */
    ll_sdio_cis_fn_set(fn, offset++, 0x54); /* TPLMID_SDIO MAN CODE1            */
    ll_sdio_cis_fn_set(fn, offset++, 0x45); /* TPLMID_CARD MAN INFO0            */
    ll_sdio_cis_fn_set(fn, offset++, 0x01); /* TPLMID_CARD MAN INFO1            */

    /* Setting the CISTPL_FUNCID Tuple */
    ll_sdio_cis_fn_set(fn, offset++, 0x21); /* CISTPL_FUNCID                    */
    ll_sdio_cis_fn_set(fn, offset++, 0x02); /* TPL_LINK                         */
    ll_sdio_cis_fn_set(fn, offset++, 0x0C); /* TPLFID_FUNCTION                  */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFID_SYSINIT                   */

    /* Setting the CISTPL_FUNCE Tuple */
    ll_sdio_cis_fn_set(fn, offset++, 0x22); /* CISTPL_FUNCE                     */
    ll_sdio_cis_fn_set(fn, offset++, 0x2A); /* TPL_LINK                         */
    ll_sdio_cis_fn_set(fn, offset++, 0x01); /* TPLFE_TYPE                       */
    ll_sdio_cis_fn_set(fn, offset++, 0x01); /* TPLFE_FUNCTION_INFO              */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_STIO_IO_REV                */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_CARD_PSN0                  */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_CARD_PSN1                  */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_CARD_PSN2                  */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_CARD_PSN3                  */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_CSA_SIZE0                  */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_CSA_SIZE1                  */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_CSA_SIZE2                  */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_CSA_SIZE3                  */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_CSA_PROPERTY               */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_FN1_BLK_SIZE0              */
    ll_sdio_cis_fn_set(fn, offset++, 0x08); /* TPLFE_FN1_BLK_SIZE1              */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_OCR0                       */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_OCR1                       */
    ll_sdio_cis_fn_set(fn, offset++, 0x80); /* TPLFE_OCR2                       */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_OCR3                       */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_OP_MIN_PWR                 */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_OP_AVG_PWR                 */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_OP_MAX_PWR                 */
    ll_sdio_cis_fn_set(fn, offset++, 0xFF); /* TPLFE_SB_MIN_PWR                 */
    ll_sdio_cis_fn_set(fn, offset++, 0xFF); /* TPLFE_SB_AVG_PWR                 */
    ll_sdio_cis_fn_set(fn, offset++, 0xFF); /* TPLFE_SB_MAX_PWR                 */
    ll_sdio_cis_fn_set(fn, offset++, 0x04); /* TPLFE_MIN_BW0                    */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_MIN_BW1                    */
    ll_sdio_cis_fn_set(fn, offset++, 0x04); /* TPLFE_OPT_BW0                    */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_OPT_BW1                    */
    ll_sdio_cis_fn_set(fn, offset++, 0x64); /* TPLFE_ENABLE_TIMEOUT_VAL0        */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_ENABLE_TIMEOUT_VAL1        */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_SP_AVG_PWR_3.3V0           */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_SP_AVG_PWR_3.3V1           */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_SP_MAX_PWR_3.3V0           */
    ll_sdio_cis_fn_set(fn, offset++, 0x00); /* TPLFE_SP_MAX_PWR_3.3V1           */
    ll_sdio_cis_fn_set(fn, offset++, 0xFF); /* TPLFE_HP_AVG_PWR_3.3V0           */
    ll_sdio_cis_fn_set(fn, offset++, 0xFF); /* TPLFE_HP_AVG_PWR_3.3V1           */
    ll_sdio_cis_fn_set(fn, offset++, 0xFF); /* TPLFE_HP_MAX_PWR_3.3V0           */
    ll_sdio_cis_fn_set(fn, offset++, 0xFF); /* TPLFE_HP_MAX_PWR_3.3V1           */
    ll_sdio_cis_fn_set(fn, offset++, 0xFF); /* TPLFE_LP_AVG_PWR_3.3V0           */
    ll_sdio_cis_fn_set(fn, offset++, 0xFF); /* TPLFE_LP_AVG_PWR_3.3V1           */
    ll_sdio_cis_fn_set(fn, offset++, 0xFF); /* TPLFE_LP_MAX_PWR_3.3V0           */
    ll_sdio_cis_fn_set(fn, offset++, 0xFF); /* TPLFE_LP_MAX_PWR_3.3V1           */

    /* Setting the CISTPL_EMD Tuple */
    ll_sdio_cis_fn_set(fn, offset++, 0xFF); /* CISTPL_SDIO_END                  */
#if (SET_CISTPL_CHECKSUM == 1)
    chk_sum = get_checksum(ll_sdio_cis_func_get(SDIO_FUNC0) + (SDIO_FUNC_CIS_CHECKSUM_OFFSET + 1), (offset - (SDIO_FUNC_CIS_CHECKSUM_OFFSET + 1)));
    /* Update the CIS with length and the Checksum value   */
    ll_sdio_cis_fn_set(fn, SDIO_FUN_CIS_LENGTH_OFFSET, (offset - (SDIO_FUNC_CIS_CHECKSUM_OFFSET + 1)));/* TPLCKS_ADDR0 */
    ll_sdio_cis_fn_set(fn, SDIO_FUNC_CIS_CHECKSUM_OFFSET, chk_sum); /* TPLCKS_CS    */
#endif
}

void ll_sdio_init(sdio_config_t *config)
{
    sdio_sdio_ior_reg1_set(SDIO_IO_READY);//FN1 ready
    sdio_sdio_progreg_set(SDIO_DEVICE_READY | SDIO_CARD_READY | SDIO_CPU_IN_ACTIVE | SDIO_SUPPORT_FUNC_NUM);//device ready ahb and arm in active state
    //sdio_sdio_ocr_reg1_set();
    sdio_sdio_cccr_pack(config->clr_busy_sd, config->csa_support, config->supp_high_speed, config->card_cap_sd, REVISION_REG_SD);

    //sdio_sdio_burst_support_pack(0x11);

    //write base address for local RAM3
    sdio_sdio_cis_fn0_set((uint32_t)config->cis_fn0_base);
    sdio_sdio_cis_fn1_set((uint32_t)config->cis_fn1_base);
    ll_sdio_receive_from_host_buffer_set(config->from_host_buffer);

    sdio_sdio_fbr_reg1_pack(Power_Selection_Enabled, SDIO_FBR1_REG, SDIO_INTERFACE_CODE);
    ll_sdio_cis_init();
    sdio_sdio_ahb_int_sts_en1_set(config->int_en_ctrl.val);
}

uint32_t ll_sdio_get_interrupt_status(void)
{
    return sdio_sdio_ahb_int_sts1_get();
}
void ll_sdio_set_interrupt_status(uint32_t st)
{
    sdio_sdio_ahb_int_sts1_set(st);
}
void ll_sdio_clear_busy_sd(void)
{
    sdio_clr_busy_sd_setf(CLEAR_BUSY_SD);
}

