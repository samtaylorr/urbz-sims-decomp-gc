/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_800FE02C(s32 arg0, s32 arg1, s32 arg2) {
    extern s32 lbl_804943E4;
    extern s32 lbl_80495AD0;
    extern s32 lbl_80495AD4;
    extern s32 lbl_80495AD8;
    lbl_80495AD4 = arg0;
    lbl_804943E4 = 1;
    lbl_80495AD0 = arg1;
    lbl_80495AD8 = arg2;
    return 1;
}

void fn_80101300(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 1;
}

void fn_80101310(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 1;
}

void fn_80101320(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
}

void fn_80101330(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
}

void fn_80101C10(void *arg0) {
    u32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, u32 *, 0x28) + 1;
    M2C_FIELD(arg0, u32 *, 0x28) = temp_r9;
    if (temp_r9 > 0x2BU) {
        M2C_FIELD(arg0, u32 *, 0x28) = 0U;
    }
}

void fn_80101C30(void *arg0) {
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x28) - 1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r9;
    if (temp_r9 < 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0x2B;
    }
}

