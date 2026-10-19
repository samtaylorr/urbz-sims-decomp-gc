/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8033FD40(void) {

}

void fn_8033FD44(s32 arg0, s32 arg1) {
    M2C_UNK fn_802EE234(s32, s32);
    M2C_UNK fn_8035DA38(s32);
    fn_8035DA38(arg1);
    fn_802EE234(arg0, arg1);
}

extern u8 lbl_8045F980[];
extern void fn_80348F08(void *, s32);
void fn_8033FE0C(void);
void fn_8033FE0C(void) {
    fn_80348F08(lbl_8045F980, 2);
}

void fn_8033FFD4(void) {
    M2C_UNK fn_802D1FC8(M2C_UNK);
    M2C_UNK fn_8035D9C0();
    fn_802D1FC8(0x2C);
    fn_8035D9C0();
}

void fn_80340534(void) {
    M2C_UNK fn_803404E0(M2C_UNK, M2C_UNK);
    fn_803404E0(1, 0xFFFF);
}

