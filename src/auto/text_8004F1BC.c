/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_8004F2A4(s32 arg0) {
    if (arg0 == 0x24C95F99) {
        return 1;
    }
    if (arg0 == 0xC5F45AA3 || arg0 == 0x39E377CF || arg0 == 0xFFECF6B5 ||
        arg0 == 0x9087E0A2 || arg0 == 0x4740F763) {
        return 1;
    }
    switch (arg0) {
    case 0xA4E8B034:
        return 1;
    default:
        return arg0 == 0x8B519FA6;
    }
}

void fn_8004F438(void *arg0) {

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

M2C_UNK fn_8004FC3C(M2C_UNK arg0, M2C_UNK arg1) {
    extern s32 lbl_8049580C;
    void fn_8004F438();
    if (arg1 == 0xFFFF && arg0 != 0) {
        fn_8004F438(&lbl_8049580C);
    }
}

void fn_8004FC78(void) {
    M2C_UNK fn_8004FC3C(M2C_UNK, M2C_UNK);
    fn_8004FC3C(1, 0xFFFF);
}

void fn_8004FCA4(void) {
    fn_8004FC3C(0, 0xFFFF);
}

