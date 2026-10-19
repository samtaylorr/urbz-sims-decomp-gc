/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_80415560[];
extern void fn_802D20E8(void *);
void fn_801B262C(void **self, s32 flags) {
    *self = lbl_80415560;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_801B2770(s32 arg0) {
    M2C_UNK fn_800F6A38(s32);
    fn_800F6A38(arg0 + 0xC);
    return 1;
}

s16 fn_801B2798(void *arg0) {
    return *M2C_FIELD(arg0, s16 **, 0x54);
}

s16 fn_801B27A4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s16 *, 2);
}

u8 fn_801B27B0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), u8 *, 4);
}

void fn_801B27BC(void *arg0, s8 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s8 *, 4) = arg1;
}

void fn_801B2830(void *arg0, s8 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s8 *, 5) = arg1;
}

void fn_801B28AC(void *arg0, s8 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s8 *, 6) = arg1;
}

u8 fn_801B28B8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), u8 *, 0xB);
}

void fn_801B28C4(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s32 *, 8) = arg1;
}

s16 fn_801B28E4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 4);
}

void fn_801B28EC(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = arg1;
}

s32 fn_801B2D08(void) {
    return 0;
}

s32 fn_801B36E8(void) {
    return 8;
}

s32 fn_801B36F0(void) {
    return 2;
}

