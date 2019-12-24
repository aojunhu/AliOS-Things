/*
 * art_assert.h
 *
 *  Created on: Sep 29, 2018
 *      Author: naiquanhu
 */

#ifndef __ART_ASSERT_H_
#define __ART_ASSERT_H_

#include <assert.h>
#include "proj_config.h"


#if ((FULL_ASSERT == ENABLE) && (__CONFIG_OS_KERNEL == RTOS_FREERTOS))
  #define ART_ASSERT(e) assert(e)
  void __aeabi_assert (const char *expr, const char *file, int line);
#elif ((FULL_ASSERT == ENABLE) && (__CONFIG_OS_KERNEL == RTOS_ALIOS))
  #define ART_ASSERT(e) assert(e)
#else
  #define ART_ASSERT(e)   while(!(e))
#endif

#endif /* __ART_ASSERT_H_ */
