#include "types.h"
#include "ln88xx.h"
#include "mem_map_ln882x.h"

#pragma pack(4)
typedef struct {
	uint8_t     * bootram_target_addr; // bootram load addr
	uint16_t      bootram_bin_length;  // Tools build
	uint16_t      bootram_crc_offset;  // >= (sizeof(boot_header_t) + sizeof(boot_header_ext_t))
	uint32_t      bootram_crc_value;   // Tools build (Depends on the bootram_crc_offset.)
	uint32_t    * bootram_vector_addr; // bootram vector addr (At least 256 Byte aligned.)
	uint32_t      crp_flag;            // Tools build
	uint32_t      boot_hearder_crc;    // Tools build
} boot_header_t;

typedef struct {
	boot_header_t boot_header;
	uint32_t bootram_version;
	uint32_t force_in_ymodem;
}bootram_info_t;
#pragma pack()


#define BOOT_HEADER_ATTRIBUTE   __attribute__((section("boot_header_area")))
#define TO_BE_FILLED           (0xFFFFFFFF)
#define FLASH_VALID_FLAG       (0x32545241)
#define CRP_VALID_FLAG         (0x46505243)

const bootram_info_t boot_info BOOT_HEADER_ATTRIBUTE __attribute__((used)) = {
    .boot_header ={
        .bootram_target_addr  = (uint8_t *)BOOTRAM_BASE,
        .bootram_bin_length   = 0xffff,     
        .bootram_crc_offset   = sizeof(boot_header_t) + sizeof(uint32_t)*2,     
        .bootram_crc_value    = TO_BE_FILLED,      
        .bootram_vector_addr  = (uint32_t *)(BOOTRAM_BASE + 0x100),	//At least 256 bytes aligned.
        .crp_flag             = CRP_VALID_FLAG, 
        .boot_hearder_crc     = TO_BE_FILLED
    },    
    .bootram_version = 0,
    .force_in_ymodem = 0  
};


uint32_t boot_header_info_init(void)
{
    return (uint32_t)&boot_info.boot_header;
}

uint32_t is_force_in_ymodem(void)
{
    return boot_info.force_in_ymodem;
}

uint8_t * get_driver_lib_version(void){
    const char * driver_lib_version = "1.2";
    return (uint8_t *)driver_lib_version;
}

