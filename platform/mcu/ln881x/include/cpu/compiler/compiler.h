#ifndef _COMPILER_H_
#define _COMPILER_H_

#if defined(__CC_ARM) //ARM Compiler

	#define inline		__inline
	#define __inline__	__inline

	#ifndef __always_inline
		#define __always_inline	__forceinline
	#endif

	#ifndef __noinline
		#define __noinline
	#endif

	#if defined(__GNUC__) //ARM Compiler support GNU
		#define __packed	__attribute__((__packed__))
	#else
		//#define __packed	__packed
	#endif

	//#define __asm		__asm
	//#define __weak	__weak

#elif defined(__GNUC__) //GNU Compiler

	#define __inline	inline
	#define __inline__	inline

	#ifdef __always_inline
		#undef __always_inline	/* already defined in <sys/cdefs.h> */
	#endif
	#define __always_inline	inline __attribute__((always_inline))

	#ifndef __noinline
		#define __noinline	__attribute__((__noinline__))
	#endif

	#define __packed	__attribute__((__packed__))
	#define __asm		asm
	#define __weak		__attribute__((weak))

	#ifdef __CONFIG_XIP_SECTION_FUNC_LEVEL
		#define __xip_text      __attribute__((section (".xip.text")))
		#define __xip_rodata    __attribute__((section (".xip.rodata")))
		#define __nonxip_text   __attribute__((section (".nonxip.text")))
		#define __nonxip_data   __attribute__((section (".nonxip.data")))
		#define __nonxip_rodata __attribute__((section (".nonxip.rodata")))
	#else /* __CONFIG_XIP_SECTION_FUNC_LEVEL */
		#define __xip_text
		#define __xip_rodata
		#define __nonxip_text
		#define __nonxip_data
		#define __nonxip_rodata
	#endif /* __CONFIG_XIP_SECTION_FUNC_LEVEL */

#else
	#error "Compiler not supported."
#endif

#endif /* _COMPILER_H_ */
