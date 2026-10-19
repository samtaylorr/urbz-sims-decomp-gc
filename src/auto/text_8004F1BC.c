/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8004F438(void) {

}

void fn_8004FBD8(s32 arg0, s32 arg1) {
    M2C_UNK fn_8004F890(s32, s32);
    s32 fn_801D7E6C();
    M2C_UNK fn_801D841C(s32, M2C_UNK);
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494600;
    if ((s32) lbl_80494600 == 0) {
        fn_802D1FC8(0x78);
        lbl_80494600 = fn_801D7E6C();
    }
    fn_801D841C(lbl_80494600, 0xA027B573);
    fn_8004F890(arg0, arg1);
}

void fn_8004FC78(void) {
    M2C_UNK fn_8004FC3C(M2C_UNK, M2C_UNK);
    fn_8004FC3C(1, 0xFFFF);
}

