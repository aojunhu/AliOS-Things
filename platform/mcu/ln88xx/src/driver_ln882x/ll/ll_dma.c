#include "types.h"
#include "ln88xx.h"
#include "reg_dma.h"
#include "ll/ll_dma.h"

#pragma push
#pragma O2

/**
 * @brief Enable/disalbe DMA controller, which must be done before 
 * any channel activity can begin.
 * 
 * @param enable @see LL_DMA_CONTROLLER_ENABLE.
 */
void LL_DMA_Enable(bool enable)
{
    dma_dma_en_setf(enable);
}

/**
 * @brief Enable/disalbe the channel.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 */
void LL_DMA_ChanEnable(uint8_t chanIndex)
{
    dma_chenreg_l_pack(chanIndex, chanIndex);
}

/**
 * @brief Software can poll the channel bits to determine when these channl bits
 * are free for a new DMA transfer.
 * 
 * @return uint8_t ORed value from these enabled channels.
 */
uint8_t LL_DMA_GetBusyChannel(void)
{
    return dma_ch_en_getf();
}
//////////////////////////////  Cfg Register  /////////////////////////////////

/**
 * @brief Maximum AMBA Burst Length Set/Get.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param maxAbrst
 */
void LL_DMA_MaxAbrstSet(uint8_t chanIndex, uint16_t maxAbrst)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_max_abrst_setf(maxAbrst);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_max_abrst_setf(maxAbrst);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_max_abrst_setf(maxAbrst);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_MaxAbrstGet(uint8_t chanIndex)
{
    uint16_t max_abrst;
    switch(chanIndex){
        case LL_DMA_CHANNEL_0:
            max_abrst = dma_ch0_max_abrst_getf();
            break;
        case LL_DMA_CHANNEL_1:
            max_abrst = dma_ch1_max_abrst_getf();
            break;
        case LL_DMA_CHANNEL_2:
            max_abrst = dma_ch2_max_abrst_getf();
            break;
        default:
            break;
    }
    return max_abrst;
}


/**
 * @brief Source Handshaking Interface Polarity Set/Get.
 * 
 * @param chanIndex 
 * @param src_hs_pol 
 */
void LL_DMA_SrcHandshakePolSet(uint8_t chanIndex, uint8_t src_hs_pol)
{
    switch(chanIndex){
        case LL_DMA_CHANNEL_0:
            dma_ch0_src_hs_pol_setf(src_hs_pol);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_src_hs_pol_setf(src_hs_pol);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_src_hs_pol_setf(src_hs_pol);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_SrcHandshakePolGet(uint8_t chanIndex)
{
    uint8_t src_hs_pol;
    
    switch(chanIndex)
    {
        case LL_DMA_CHANNEL_0:
            src_hs_pol = dma_ch0_src_hs_pol_getf();
            break;
        case LL_DMA_CHANNEL_1:
            src_hs_pol = dma_ch1_src_hs_pol_getf();
            break;
        case LL_DMA_CHANNEL_2:
            src_hs_pol = dma_ch2_src_hs_pol_getf();
            break;
        default:
            break;
    }

    return src_hs_pol;
}


/**
 * @brief Destination Handshaking interface Polarity Set/Get.
 * 
 * @param chanIndex 
 * @param dst_hs_pol 
 */
void LL_DMA_DstHandShakePolSet(uint8_t chanIndex, uint8_t dst_hs_pol)
{
    switch(chanIndex){
        case LL_DMA_CHANNEL_0:
            dma_ch0_dst_hs_pol_setf(dst_hs_pol);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_dst_hs_pol_setf(dst_hs_pol);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_dst_hs_pol_setf(dst_hs_pol);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_DstHandShakePolGet(uint8_t chanIndex)
{
    uint8_t dst_hs_pol;

    switch(chanIndex){
        case LL_DMA_CHANNEL_0:
            dst_hs_pol = dma_ch0_dst_hs_pol_getf();
            break;
        case LL_DMA_CHANNEL_1:
            dst_hs_pol = dma_ch1_dst_hs_pol_getf();
            break;
        case LL_DMA_CHANNEL_2:
            dst_hs_pol = dma_ch2_dst_hs_pol_getf();
            break;
        default:
            break;
    }

    return dst_hs_pol;
}


/**
 * @brief Source Software or Hardware Handshaking Select.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param hs_sel_src @see LL_DMA_HANDSHAKE_SOURCE_HARDWARE
 */
void LL_DMA_HandshakeSelectSrcSet(uint8_t chanIndex, uint8_t hs_sel_src)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_hs_sel_src_setf(hs_sel_src);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_hs_sel_src_setf(hs_sel_src);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_hs_sel_src_setf(hs_sel_src);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_HandShakeSelectSrcGet(uint8_t chanIndex)
{
    uint8_t hs_sel_src;
    
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            hs_sel_src = dma_ch0_hs_sel_src_getf();
            break;
        case LL_DMA_CHANNEL_1:
            hs_sel_src = dma_ch1_hs_sel_src_getf();
            break;
        case LL_DMA_CHANNEL_2:
            hs_sel_src = dma_ch2_hs_sel_src_getf();
            break;
        default:
            break;
    }

    return hs_sel_src;
}


/**
 * @brief Destination Software or Hardware Handshaking Select.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param hs_sel_dst @see LL_DMA_HANDSHAKE_SOURCE_HARDWARE
 */
void LL_DMA_HandshakeSelectDstSet(uint8_t chanIndex, uint8_t hs_sel_dst)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_hs_sel_dst_setf(hs_sel_dst);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_hs_sel_dst_setf(hs_sel_dst);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_hs_sel_dst_setf(hs_sel_dst);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_HandshakeSelectDstGet(uint8_t chanIndex)
{
    uint8_t hs_sel_dst;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            hs_sel_dst = dma_ch0_hs_sel_dst_getf();
            break;
        case LL_DMA_CHANNEL_1:
            hs_sel_dst = dma_ch1_hs_sel_dst_getf();
            break;
        case LL_DMA_CHANNEL_2:
            hs_sel_dst = dma_ch2_hs_sel_dst_getf();
            break;
        default:
            break;
    }

    return hs_sel_dst;
}

/**
 * @brief Channel Suspend. Suspends all DMA data transfers from the source until this bit is cleared.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param ch_susp @see LL_DMA_CHANNEL_SUSPEND_NO
 */
void LL_DMA_ChanSuspSet(uint8_t chanIndex, uint8_t ch_susp)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_ch_susp_setf(ch_susp);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_ch_susp_setf(ch_susp);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_ch_susp_setf(ch_susp);
            break;
        default:
            break;
    }
}


uint8_t LL_DMA_ChanSuspGet(uint8_t chanIndex)
{
    uint8_t ch_susp;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            ch_susp = dma_ch0_ch_susp_getf();
            break;
        case LL_DMA_CHANNEL_1:
            ch_susp = dma_ch1_ch_susp_getf();
            break;
        case LL_DMA_CHANNEL_2:
            ch_susp = dma_ch2_ch_susp_getf();
            break;
        default:
            break;
    }

    return ch_susp;
}


/**
 * @brief Channel priority.
 * 0 is the lowest.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param ch_prior @see LL_DMA_CHANNEL_PRIORITY_0
 */
void LL_DMA_ChanPrioritySet(uint8_t chanIndex, uint8_t ch_prior)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_ch_prior_setf(ch_prior);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_ch_prior_setf(ch_prior);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_ch_prior_setf(ch_prior);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_ChanPriorityGet(uint8_t chanIndex)
{
    uint8_t ch_prior;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            ch_prior = dma_ch0_ch_prior_getf();
            break;
        case LL_DMA_CHANNEL_1:
            ch_prior = dma_ch1_ch_prior_getf();
            break;
        case LL_DMA_CHANNEL_2:
            ch_prior = dma_ch2_ch_prior_getf();
            break;
        default:
            break;
    }

    return ch_prior;
}

/**
 * @brief Assigns a hradware handshaking interface to the destination of this 
 * channel if the channel handshake select destination is LL_DMA_HANDSHAKE_SOURCE_HARDWARE; 
 * otherwise, this field is ignored.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0 
 * @param dest_per @see LL_DMA_DEV_TYPE_QSPI_RX
 */
void LL_DMA_DestPeripheralSet(uint8_t chanIndex, uint8_t dest_per)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_dest_per_setf(dest_per);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_dest_per_setf(dest_per);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_dest_per_setf(dest_per);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_DestPeripheralGet(uint8_t chanIndex)
{
    uint8_t dest_per;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dest_per = dma_ch0_dest_per_getf();
            break;
        case LL_DMA_CHANNEL_1:
            dest_per = dma_ch1_dest_per_getf();
            break;
        case LL_DMA_CHANNEL_2:
            dest_per = dma_ch2_dest_per_getf();
            break;
        default:
            break;
    }
    
    return dest_per;
}

/**
 * @brief Assigns a hardware handshakeing interface (0-15) to the source of 
 * this channel if the chan handshake select srouce field is LL_DMA_HANDSHAKE_SOURCE_HARDWARE; 
 * otherwise, this field is ignored.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param src_per @see LL_DMA_DEV_TYPE_QSPI_RX
 */
void LL_DMA_SrcPeripheralSet(uint8_t chanIndex, uint8_t src_per)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_src_per_setf(src_per);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_src_per_setf(src_per);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_src_per_setf(src_per);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_SrcPeripheralGet(uint8_t chanIndex)
{
    uint8_t src_per;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            src_per = dma_ch0_src_per_getf();
            break;
        case LL_DMA_CHANNEL_1:
            src_per = dma_ch1_src_per_getf();
            break;
        case LL_DMA_CHANNEL_2:
            src_per = dma_ch2_src_per_getf();
            break;
        default:
            break;
    }

    return src_per;
}


// FIXME: not used by user.
/**
 * @brief Protection Control bits used to drive the AHB HPROT[3:1] bus.
 * 
 * @param chanIndex 
 * @param protctl 
 */
void LL_DMA_ProtectionCtrlSet(uint8_t chanIndex, uint8_t protctl)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_protctl_setf(protctl);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_protctl_setf(protctl);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_protctl_setf(protctl);
            break;
        default:
            break;
    }
}


uint8_t LL_DMA_ProtectionCtrlGet(uint8_t chanIndex)
{
    uint8_t protctl;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            protctl = dma_ch0_protctl_getf();
            break;
        case LL_DMA_CHANNEL_1:
            protctl = dma_ch1_protctl_getf();
            break;
        case LL_DMA_CHANNEL_2:
            protctl = dma_ch2_protctl_getf();
            break;
        default:
            break;
    }

    return protctl;
}

/**
 * @brief FIFO Mode Select.
 * Determines how much space or data needs to be available in the FIFO before 
 * a burst transaction request is serviced.
 * 
 * @param chanIndex 
 * @param fifo_mode 
 */
void LL_DMA_FifoModeSet(uint8_t chanIndex, uint8_t fifo_mode)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_fifo_mode_setf(fifo_mode);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_fifo_mode_setf(fifo_mode);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_fifo_mode_setf(fifo_mode);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_FifoModeGet(uint8_t chanIndex)
{
    uint8_t fifo_mode;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            fifo_mode = dma_ch0_fifo_mode_getf();
            break;
        case LL_DMA_CHANNEL_1:
            fifo_mode = dma_ch1_fifo_mode_getf();
            break;
        case LL_DMA_CHANNEL_2:
            fifo_mode = dma_ch2_fifo_mode_getf();
            break;
        default:
            break;
    }

    return fifo_mode;
}

/**
 * @brief Flow Control Mode.
 * Determines when source transaction requests are serviced when the Destination
 *  Peripheral is the flow controller.
 * 
 * 0 -- Source transaction reqeusts are serviced when they occur.
 * 1 -- Source transaction requests are not serviced until a destination transaction
 * request occurs.
 * 
 * @param chanIndex 
 * @param fc_mode 
 */
void LL_DMA_FlowControlModeSet(uint8_t chanIndex, uint8_t fc_mode)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_fc_mode_setf(fc_mode);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_fc_mode_setf(fc_mode);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_fc_mode_setf(fc_mode);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_FlowControlModeGet(uint8_t chanIndex)
{
    uint8_t fc_mode;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            fc_mode = dma_ch0_fc_mode_getf();
            break;
        case LL_DMA_CHANNEL_1:
            fc_mode = dma_ch1_fc_mode_getf();
            break;
        case LL_DMA_CHANNEL_2:
            fc_mode = dma_ch2_fc_mode_getf();
            break;
        default:
            break;
    }

    return fc_mode;
}

/**
 * @brief 
 * 
 * @param chanIndex 
 * @param max_abrst 
 * @param src_hs_pol 
 * @param dst_hs_pol 
 * @param hs_sel_src 
 * @param hs_sel_dst 
 * @param ch_susp 
 * @param ch_prior 
 */
void LL_DMA_ChanConfigureLowReg(uint8_t chanIndex, 
                                uint16_t max_abrst, 
                                uint8_t src_hs_pol, 
                                uint8_t dst_hs_pol, 
                                uint8_t hs_sel_src,
                                uint8_t hs_sel_dst,
                                uint8_t ch_susp,
                                uint8_t ch_prior)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_cfg_l_pack(max_abrst, src_hs_pol, dst_hs_pol, hs_sel_src, hs_sel_dst, ch_susp, ch_prior);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_cfg_l_pack(max_abrst, src_hs_pol, dst_hs_pol, hs_sel_src, hs_sel_dst, ch_susp, ch_prior);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_cfg_l_pack(max_abrst, src_hs_pol, dst_hs_pol, hs_sel_src, hs_sel_dst, ch_susp, ch_prior);
            break;
        default:
            break;
    }
}


void LL_DMA_ChanConfigureHighReg(uint8_t chanIndex,
                                uint8_t dest_per,
                                uint8_t src_per,
                                uint8_t protctl,
                                uint8_t fifo_mode,
                                uint8_t fc_mode)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_cfg_h_pack(dest_per, src_per, protctl, fifo_mode, fc_mode);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_cfg_h_pack(dest_per, src_per, protctl, fifo_mode, fc_mode);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_cfg_h_pack(dest_per, src_per, protctl, fifo_mode, fc_mode);
            break;
        default:
            break;
    }
}



/**
 * @brief Set Chan CFG register.
 * 
 * @param chanIndex 
 * @param max_abrst 
 * @param src_hs_pol 
 * @param dst_hs_pol 
 * @param hs_sel_src 
 * @param hs_sel_dst 
 * @param ch_susp 
 * @param ch_prior 
 * @param dest_per 
 * @param src_per 
 * @param protctl 
 * @param fifo_mode 
 * @param fc_mode 
 */
void LL_DMA_ChanConfigure(  uint8_t chanIndex,
                            uint16_t max_abrst,
                            uint8_t src_hs_pol,
                            uint8_t dst_hs_pol,
                            uint8_t hs_sel_src,
                            uint8_t hs_sel_dst,
                            uint8_t ch_susp,
                            uint8_t ch_prior,
                            uint8_t dest_per,
                            uint8_t src_per,
                            uint8_t protctl,
                            uint8_t fifo_mode,
                            uint8_t fc_mode )
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_cfg_l_pack(max_abrst, src_hs_pol, dst_hs_pol, hs_sel_src, hs_sel_dst, ch_susp, ch_prior);
            dma_ch0_cfg_h_pack(dest_per, src_per, protctl, fifo_mode, fc_mode);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_cfg_l_pack(max_abrst, src_hs_pol, dst_hs_pol, hs_sel_src, hs_sel_dst, ch_susp, ch_prior);
            dma_ch1_cfg_h_pack(dest_per, src_per, protctl, fifo_mode, fc_mode);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_cfg_l_pack(max_abrst, src_hs_pol, dst_hs_pol, hs_sel_src, hs_sel_dst, ch_susp, ch_prior);
            dma_ch2_cfg_h_pack(dest_per, src_per, protctl, fifo_mode, fc_mode);
            break;
        default:
            break;
    }
}

//////////////////////////////  SAR Register  /////////////////////////////////

/**
 * @brief Current Source Address of DMA transfer.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param src_addr source address.
 */
void LL_DMA_SrcAddrSet(uint8_t chanIndex, uint32_t src_addr)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_sar_setf(src_addr);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_sar_setf(src_addr);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_sar_setf(src_addr);
            break;
        default:
            break;
    }
}

uint32_t LL_DAM_SrcAddrGet(uint8_t chanIndex)
{
    uint32_t src_addr;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            src_addr = dma_ch0_sar_getf();
            break;
        case LL_DMA_CHANNEL_1:
            src_addr = dma_ch1_sar_getf();
            break;
        case LL_DMA_CHANNEL_2:
            src_addr = dma_ch2_sar_getf();
            break;
        default:
            break;
    }

    return src_addr;
}

//////////////////////////////  DAR Register  /////////////////////////////////

/**
 * @brief Current Destination address of DMA transfer.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param dst_addr destination address.
 */
void LL_DMA_DstAddrSet(uint8_t chanIndex, uint32_t dst_addr)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_dar_setf(dst_addr);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_dar_setf(dst_addr);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_dar_setf(dst_addr);
            break;
        default:
            break;
    }
}

uint32_t LL_DMA_DstAddrGet(uint8_t chanIndex)
{
    uint32_t dst_addr;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dst_addr = dma_ch0_dar_getf();
            break;
        case LL_DMA_CHANNEL_1:
            dst_addr = dma_ch1_dar_getf();
            break;
        case LL_DMA_CHANNEL_2:
            dst_addr = dma_ch2_dar_getf();
            break;
        default:
            break;
    }
    
    return dst_addr;
}

//////////////////////////////  Ctrl Register  /////////////////////////////////

/**
 * @brief Transfer Type and Flow Contrl.
 * The following transfer types are supported.
 * - Memory to Memory
 * - Memory to Peripheral
 * - Peripheral to Memory
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param tt_fc @see LL_DMA_TRANS_TYPE_MEMORY_TO_MEMORY
 */
void LL_DMA_TranTypeFlowCtrlSet(uint8_t chanIndex, uint8_t tt_fc)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_tt_fc_setf(tt_fc);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_tt_fc_setf(tt_fc);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_tt_fc_setf(tt_fc);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_TranTypeFlowCtrlGet(uint8_t chanIndex)
{
    uint8_t tt_fc;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            tt_fc = dma_ch0_tt_fc_getf();
            break;
        case LL_DMA_CHANNEL_1:
            tt_fc = dma_ch1_tt_fc_getf();
            break;
        case LL_DMA_CHANNEL_2:
            tt_fc = dma_ch2_tt_fc_getf();
            break;
        default:
            break;
    }

    return tt_fc;
}

/**
 * @brief Source Burst Transaction Length.
 * Number of data items, each of width src_tr_width, to be read from the source
 * every time a source burst transaction request is made from either the corresponding
 * hardware or software handshaking interface.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param src_msize @see LL_DMA_BURST_TRANSACTION_LENGTH_8
 */
void LL_DMA_SrcMsizeSet(uint8_t chanIndex, uint8_t src_msize)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_src_msize_setf(src_msize);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_src_msize_setf(src_msize);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_src_msize_setf(src_msize);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_SrcMsizeGet(uint8_t chanIndex)
{
    uint8_t src_msize;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            src_msize = dma_ch0_src_msize_getf();
            break;
        case LL_DMA_CHANNEL_1:
            src_msize = dma_ch1_src_msize_getf();
            break;
        case LL_DMA_CHANNEL_2:
            src_msize = dma_ch2_src_msize_getf();
            break;
        default:
            break;
    }

    return src_msize;
}

/**
 * @brief Destination Burst Transaction Length.
 * Number of data items, each of width dst_tr_width, to be written to the destination
 * every time a destination burst transaction request is made from either the 
 * corresponding hardware or software handshaking interface.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param dest_msize @see LL_DMA_BURST_TRANSACTION_LENGTH_8
 */
void LL_DMA_DestMsizeSet(uint8_t chanIndex, uint8_t dest_msize)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_dest_msize_setf(dest_msize);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_dest_msize_setf(dest_msize);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_dest_msize_setf(dest_msize);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_DestMsizeGet(uint8_t chanIndex)
{
    uint8_t dest_msize;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dest_msize = dma_ch0_dest_msize_getf();
            break;
        case LL_DMA_CHANNEL_1:
            dest_msize = dma_ch1_dest_msize_getf();
            break;
        case LL_DMA_CHANNEL_2:
            dest_msize = dma_ch2_dest_msize_getf();
            break;
        default:
            break;
    }

    return dest_msize;
}

/**
 * @brief Source Address Increment.
 * Indicates whether to increment or decrement the source address on every source transfer.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param sinc @see LL_DMA_ADDRESS_INCREMENT
 */
void LL_DMA_SrcAddrIncSet(uint8_t chanIndex, uint8_t sinc)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_sinc_setf(sinc);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_sinc_setf(sinc);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_sinc_setf(sinc);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_SrcAddrIncGet(uint8_t chanIndex)
{
    uint8_t sinc;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            sinc = dma_ch0_sinc_getf();
            break;
        case LL_DMA_CHANNEL_1:
            sinc = dma_ch1_sinc_getf();
            break;
        case LL_DMA_CHANNEL_2:
            sinc = dma_ch2_sinc_getf();
            break;
        default:
            break;
    }

    return sinc;
}

/**
 * @brief Destination Address Increment.
 * Indicates whether to increment or decrement the destination address on every
 * destination transfer.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param dinc @see LL_DMA_ADDRESS_INCREMENT
 */
void LL_DMA_DestAddrIncSet(uint8_t chanIndex, uint8_t dinc)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_dinc_setf(dinc);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_dinc_setf(dinc);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_dinc_setf(dinc);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_DestAddrIncGet(uint8_t chanIndex)
{
    uint8_t dinc;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dinc = dma_ch0_dinc_getf();
            break;
        case LL_DMA_CHANNEL_1:
            dinc = dma_ch1_dinc_getf();
            break;
        case LL_DMA_CHANNEL_2:
            dinc = dma_ch2_dinc_getf();
            break;
        default:
            break;
    }

    return dinc;
}

/**
 * @brief Source Transfer width.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param src_tr_width @see LL_DMA_TRANSFER_WIDTH_8_BITS
 */
void LL_DMA_SrcTrWidthSet(uint8_t chanIndex, uint8_t src_tr_width)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_src_tr_width_setf(src_tr_width);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_src_tr_width_setf(src_tr_width);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_src_tr_width_setf(src_tr_width);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_SrcTrWidthGet(uint8_t chanIndex)
{
    uint8_t src_tr_width;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            src_tr_width = dma_ch0_src_tr_width_getf();
            break;
        case LL_DMA_CHANNEL_1:
            src_tr_width = dma_ch1_src_tr_width_getf();
            break;
        case LL_DMA_CHANNEL_2:
            src_tr_width = dma_ch2_src_tr_width_getf();
            break;
        default:
            break;
    }

    return src_tr_width;
}

/**
 * @brief Destination Transfer width.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param dst_tr_width @see LL_DMA_TRANSFER_WIDTH_8_BITS
 */
void LL_DMA_DestTrWidthSet(uint8_t chanIndex, uint8_t dst_tr_width)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_dst_tr_width_setf(dst_tr_width);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_dst_tr_width_setf(dst_tr_width);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_dst_tr_width_setf(dst_tr_width);
            break;
        default:
            break;
    }
}


uint8_t LL_DMA_DestTrWidthGet(uint8_t chanIndex)
{
    uint8_t dst_tr_width;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dst_tr_width = dma_ch0_dst_tr_width_getf();
            break;
        case LL_DMA_CHANNEL_1:
            dst_tr_width = dma_ch1_dst_tr_width_getf();
            break;
        case LL_DMA_CHANNEL_2:
            dst_tr_width = dma_ch2_dst_tr_width_getf();
            break;
        default:
            break;
    }

    return dst_tr_width;
}

/**
 * @brief Interrupt Enable.
 * If set, then all interrupt-generating sources are enabled.
 * Functions as a global mask bit for all interrupts for the channel;
 * raw interrupt registers still assert if channel int_en is 0.
 * 
 * @param chanIndex 
 * @param int_en 
 */
void LL_DMA_ChanIntEnSet(uint8_t chanIndex, uint8_t int_en)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_int_en_setf(int_en);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_int_en_setf(int_en);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_int_en_setf(int_en);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_ChanIntEnGet(uint8_t chanIndex)
{
    uint8_t int_en;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            int_en = dma_ch0_int_en_getf();
            break;
        case LL_DMA_CHANNEL_1:
            int_en = dma_ch1_int_en_getf();
            break;
        case LL_DMA_CHANNEL_2:
            int_en = dma_ch2_int_en_getf();
            break;
        default:
            break;
    }

    return int_en;
}

/**
 * @brief Done bit.
 * If status write-back is enabled, the upper word of the control register, CTLX[63:32],
 * is written to the control register location of the linked List Item ( LLI ) in 
 * system memory at the end of the block transfer with the done bit set.
 * 
 * Software can poll the LLI CTLX.DONE bit to see when a block transfer is complete.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param done 
 */
void LL_DMA_ChanDoneSet(uint8_t chanIndex, uint8_t done)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_done_setf(done);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_done_setf(done);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_done_setf(done);
            break;
        default:
            break;
    }
}

uint8_t LL_DMA_ChanDoneGet(uint8_t chanIndex)
{
    uint8_t done;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            done = dma_ch0_done_getf();
            break;
        case LL_DMA_CHANNEL_1:
            done = dma_ch1_done_getf();
            break;
        case LL_DMA_CHANNEL_2:
            done = dma_ch2_done_getf();
            break;
        default:
            break;
    }

    return done;
}

/**
 * @brief Block Transfer Size.
 * The number programmed into BLOCK_TS indicates the total number of single transactions
 * to perform for every block transfer; a single transaction is mapped to a single AMBA beat.
 * 
 * @param chanIndex @see LL_DMA_CHANNEL_0
 * @param block_ts 
 */
void LL_DMA_ChanBlockTranSizeSet(uint8_t chanIndex, uint32_t block_ts)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_block_ts_setf(block_ts);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_block_ts_setf(block_ts);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_block_ts_setf(block_ts);
            break;
        default:
            break;
    }
}

uint32_t LL_DMA_ChanBlockTranSizeGet(uint8_t chanIndex)
{
    uint32_t block_ts;

    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            block_ts = dma_ch0_block_ts_getf();
            break;
        case LL_DMA_CHANNEL_1:
            block_ts = dma_ch1_block_ts_getf();
            break;
        case LL_DMA_CHANNEL_2:
            block_ts = dma_ch2_block_ts_getf();
            break;
        default:
            break;
    }

    return block_ts;
}

/**
 * @brief 
 * 
 * @param chanIndex 
 * @param tt_fc 
 * @param src_msize 
 * @param dest_msize 
 * @param sinc 
 * @param dinc 
 * @param src_tr_width 
 * @param dst_tr_width 
 * @param int_en 
 */
void LL_DMA_ChanCtrlLowReg(uint8_t chanIndex,
                            uint8_t tt_fc,
                            uint8_t src_msize,
                            uint8_t dest_msize,
                            uint8_t sinc,
                            uint8_t dinc,
                            uint8_t src_tr_width,
                            uint8_t dst_tr_width,
                            uint8_t int_en)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_ctrl_l_pack(tt_fc, src_msize, dest_msize, sinc, dinc, src_tr_width, dst_tr_width, int_en);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_ctrl_l_pack(tt_fc, src_msize, dest_msize, sinc, dinc, src_tr_width, dst_tr_width, int_en);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_ctrl_l_pack(tt_fc, src_msize, dest_msize, sinc, dinc, src_tr_width, dst_tr_width, int_en);
            break;
        default:
            break;
    }
}

void LL_DMA_ChanCtrlHighReg(uint8_t chanIndex,
                            uint8_t done,
                            uint16_t block_ts)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_ctrl_h_pack(done, block_ts);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_ctrl_h_pack(done, block_ts);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_ctrl_h_pack(done, block_ts);
            break;
        default:
            break;
    }
}

/**
 * @brief 
 * 
 * @param chanIndex 
 * @param tt_fc 
 * @param src_msize 
 * @param dest_msize 
 * @param sinc 
 * @param dinc 
 * @param src_tr_width 
 * @param dst_tr_width 
 * @param int_en 
 * @param done 
 * @param block_ts 
 */
void LL_DMA_ChanCtrl(uint8_t chanIndex, 
                    uint8_t tt_fc,
                    uint8_t src_msize,
                    uint8_t dest_msize,
                    uint8_t sinc,
                    uint8_t dinc,
                    uint8_t src_tr_width,
                    uint8_t dst_tr_width,
                    uint8_t int_en,
                    uint8_t done,
                    uint16_t block_ts)
{
    switch(chanIndex) {
        case LL_DMA_CHANNEL_0:
            dma_ch0_ctrl_l_pack(tt_fc, src_msize, dest_msize, sinc, dinc, src_tr_width, dst_tr_width, int_en);
            dma_ch0_ctrl_h_pack(done, block_ts);
            break;
        case LL_DMA_CHANNEL_1:
            dma_ch1_ctrl_l_pack(tt_fc, src_msize, dest_msize, sinc, dinc, src_tr_width, dst_tr_width, int_en);
            dma_ch1_ctrl_h_pack(done, block_ts);
            break;
        case LL_DMA_CHANNEL_2:
            dma_ch2_ctrl_l_pack(tt_fc, src_msize, dest_msize, sinc, dinc, src_tr_width, dst_tr_width, int_en);
            dma_ch2_ctrl_h_pack(done, block_ts);
            break;
        default:
            break;
    }
}

//////////////////////////////  Interrupt Raw Status Registers  /////////////////////////////////
/**
 * @brief Interrupt events are stored in these Raw Interrupt Status registers before masking.
 * Each Raw Interrupt Status register has a bit allocated per channel; for example,
 * RawTfr[2] is the Channel 2 raw transfer complete interrupt.
 * 
 * @return uint8_t 
 */
uint8_t LL_DMA_RawStatusBlock(void)
{
    return dma_rawblock_getf();
}

uint8_t LL_DMA_RawStatusErr(void)
{
    return dma_rawerr_getf();
}

uint8_t LL_DMA_RawStatusTfr(void)
{
    return dma_rawtfr_getf();
}

uint8_t LL_DMA_RawStatusDstTran(void)
{
    return dma_rawdsttran_getf();
}

uint8_t LL_DMA_RawStatusSrcTran(void)
{
    return dma_rawsrctran_getf();
}

//////////////////////////////     Interrupt Status Registers   /////////////////////////////////
/**
 * @brief All interrupt events from all channles are stored in these Interrupt 
 * Status registers after masking.
 * Each Interrupt Status register has a bit allocated per channel: for example, 
 * StatusTfr[2] is the Channel 2 status transfer complete interrupt.
 * 
 * @return uint8_t 
 */
uint8_t LL_DMA_StatusBlock(void)
{
    return dma_statusblock_getf();
}

uint8_t LL_DMA_StatusErr(void)
{
    return dma_statuserr_getf();
}

uint8_t LL_DMA_StatusTfr(void)
{
    return dma_statustfr_getf();
}

uint8_t LL_DMA_StatusDstTran(void)
{
    return dma_statustfr_getf();
}

uint8_t LL_DMA_StatusSrcTran(void)
{
    return dma_statussrctran_getf();
}

//////////////////////////////      Interrupt Mask  Registers    /////////////////////////////////

/**
 * @brief The contents of the Raw Status registers are masked with the contents of the Mask registers.
 * Each Interrupt Mask register has a bit allocated per channel: for example, MaksTfr[2] is the mask
 * bit for the Channel 2 transfer complete interrupt.
 * @param chanIndex 
 */
void LL_DMA_UnMaskBlock(uint8_t chanIndex)
{
    dma_maskblock_l_pack(chanIndex, chanIndex);
}

void LL_DMA_UnMaskErr(uint8_t chanIndex)
{
    dma_maskerr_l_pack(chanIndex, chanIndex);
}

void LL_DMA_UnMaskTfr(uint8_t chanIndex)
{
    dma_masktfr_l_pack(chanIndex, chanIndex);
}

void LL_DMA_UnMaskDstTran(uint8_t chanIndex)
{
    dma_maskdsttran_l_pack(chanIndex, chanIndex);
}

void LL_DMA_UnMaskSrcTran(uint8_t chanIndex)
{
    dma_masksrctran_l_pack(chanIndex, chanIndex);
}

//////////////////////////////      Interrupt Clear  Registers    /////////////////////////////////

/**
 * @brief Each Interrupt Clear register has a bit allocated per channel; for example, ClearTfr[2] 
 * is the clear bit for the Channel 2 transfer complete interrupt.
 * 
 * @param chanIndex 
 */
void LL_DMA_ClearBlock(uint8_t chanIndex)
{
    dma_clearblock_l_pack(chanIndex);
}

void LL_DMA_ClearErr(uint8_t chanIndex)
{
    dma_clearerr_l_pack(chanIndex);
}

void LL_DMA_ClearTfr(uint8_t chanIndex)
{
    dma_cleartfr_l_pack(chanIndex);
}

void LL_DMA_ClearDstTran(uint8_t chanIndex)
{
    dma_cleardsttran_l_pack(chanIndex);
}

void LL_DMA_ClearSrcTran(uint8_t chanIndex)
{
    dma_clearsrctran_l_pack(chanIndex);
}

////////////////////////////     Combined  Interrupt Stats Registers    ///////////////////////////

/**
 * @brief Combined Interrupt Status Register.
 * 
 * @return uint8_t The contents of each of teh five status registers is ORed to produce a single bit for
 * each interrupt type in the Combined Status register.
 */
uint8_t LL_DMA_IntStatus(void)
{
    return dma_statusint_l_get();
}

//////////////////////////////      Software Handshaking Registers    /////////////////////////////
void LL_DMA_SWSrcTranRequest(uint8_t chanIndex)
{
    dma_reqsrcreg_l_pack(chanIndex, chanIndex);
}

uint8_t LL_DMA_SWSrcTranRead(void)
{
    return dma_src_req_getf();
}

void LL_DMA_SWDstTranRequest(uint8_t chanIndex)
{
    dma_reqdstreg_l_pack(chanIndex, chanIndex);
}

uint8_t LL_DMA_SWDstTranRead(void)
{
    return dma_dst_req_getf();
}

void LL_DMA_SingleSrcTranRequest(uint8_t chanIndex)
{
    dma_sglreqsrcreg_l_pack(chanIndex, chanIndex);
}

uint8_t LL_DMA_SingleSrcTranRead(void)
{
    return dma_src_sglreq_getf();
}

void LL_DMA_SingleDstTranRequest(uint8_t chanIndex)
{
    dma_sglreqdstreg_l_pack(chanIndex, chanIndex);
}

uint8_t LL_DMA_SingleDstTranRead(void)
{
    return dma_dst_sglreq_getf();
}

void LL_DMA_LastSrcTranRequest(uint8_t chanIndex)
{
    dma_lstsrcreg_l_pack(chanIndex, chanIndex);
}

uint8_t LL_DMA_LastSrcTranRead(void)
{
    return dma_lstsrc_getf();
}

void LL_DMA_LastDstTranRequest(uint8_t chanIndex)
{
    dma_lstdstreg_l_pack(chanIndex, chanIndex);
}

uint8_t LL_DMA_LastDstTranRead(void)
{
    return dma_lstdst_getf();
}

#pragma pop

