#ifndef __HAL_INTERRUPT_ART2000_H__
#define __HAL_INTERRUPT_ART2000_H__

#include "types.h"

#ifdef __cplusplus
    extern "C" {
#endif /* __cplusplus */


void set_interrupt_priority(void);
void switch_global_interrupt(bool enable);




#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __HAL_INTERRUPT_ART2000_H__ */
