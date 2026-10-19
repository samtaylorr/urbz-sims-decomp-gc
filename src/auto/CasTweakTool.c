/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_801CF874(void *arg0) {
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x150);
    if (temp_r9 == 0) {
        M2C_FIELD(arg0, s32 *, 0x158) = temp_r9;
        M2C_FIELD(arg0, s32 *, 0x154) = 1;
    }
}

void fn_801CF890(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x150) != 0) {
        M2C_FIELD(arg0, s32 *, 0x158) = 1;
        M2C_FIELD(arg0, s32 *, 0x154) = 0;
    }
}

void fn_801D36C0(u8 *self) {
    extern void fn_801CD6DC(u8 *);
    extern u8 lbl_80416238[];
    *(u8 **)(self + 4) = lbl_80416238;
    fn_801CD6DC(self);
}

void fn_801D3894(u8 *self, u8 *msg) {
    s32 id = *(s32 *)(msg + 8);
    if (id == 0x22 || id == 0x23 || id == 0x1f || id == 0x24 || id == 0x20 || id == 0x21 ||
        id == 0x8 || id == 0x32 || id == 0x31 || id == 0x30 || id == 0x2f || id == 0x29 ||
        id == 0x2d || id == 0x27 || id == 0x2b || id == 0x2a || id == 0x2e || id == 0x28 ||
        id == 0x2c) {
        return;
    }
    if (id == 6 && *(s32 *)(*(u8 **)self + 0x24) == 0) {
        return;
    }
    *(s32 *)(self + 0x230) = 1;
}

void fn_801D3954(void) {

}

void fn_801D3958(void) {

}

void fn_801D395C(void) {

}

void fn_801D3960(u8 *self) {
    extern void fn_802EA51C(u8 *, s32, u32, s32, s32, f32);
    extern f32 lbl_803DF368[];
    fn_802EA51C(self + 0x68, 1, 0xCD11B382, -1, 0, lbl_803DF368[0]);
}

u8 *fn_801D494C(u8 *self) {
    return self + 8;
}

void fn_801D4B2C(void) {
    M2C_UNK fn_801D4AD8(M2C_UNK, M2C_UNK);
    fn_801D4AD8(1, 0xFFFF);
}

