#include "reg_aes.h"
#include "ln88xx.h"
#include "driver/ll/ll_aes.h"
#include <stdbool.h>

#ifdef LN882x

typedef void* AesInstance;
void LL_AES_Set_Opcode(AesInstance AESx, uint8_t opcode)
{
    aes_opcode_setf(AESx, opcode);
}

void LL_AES_Set_Endian(AesInstance AESx, bool endian)
{
    aes_bigendian_setf(AESx, endian);
}

uint32_t LL_AES_Set_Keylen(AesInstance AESx, uint8_t keylength)
{
    aes_keylen_setf(AESx, keylength);

    return 0;
}

void LL_AES_Set_mode(AesInstance AESx, bool mode)
{
    aes_cbc_setf(AESx, mode);
}

void LL_Aes_Enable(AesInstance AESx, bool start)
{
    aes_start_setf(AESx, start);
}

void LL_Aes_Enable_Interrupt(AesInstance AESx, bool data_int_en)
{
    aes_data_int_en_setf(AESx, data_int_en);
}

void LL_Aes_Key_Enable_Interrupt(AesInstance AESx, bool key_int_en)
{
    aes_key_int_en_setf(AESx, key_int_en);

}

void LL_Aes_Clear_Key_Interrupt(AesInstance AESx, uint8_t key_int_flag)
{
    aes_key_int_clr_setf(AESx, key_int_flag);
}

void LL_Aes_Clear_Data_Interrupt_Key(AesInstance AESx, uint8_t data_int_flag)
{
    aes_data_int_clr_setf(AESx, data_int_flag);
}

uint32_t LL_Aes_Get_Intstatus(AesInstance AESx, uint32_t AES_IT)
{
    return (aes_state_get(AESx) & AES_IT) ? 1 : 0;
}

#endif // LN882x
