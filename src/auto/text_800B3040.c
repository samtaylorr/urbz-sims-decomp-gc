/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

f32 fn_800B3238(f32 farg0) {
    extern f32 lbl_803CECD0[];
    return farg0 / lbl_803CECD0[0];
}

s32 fn_800B3420(s32 arg0) {
    return arg0 + 0x60;
}

s32 fn_800B3428(s32 arg0) {
    return arg0 + 0x64;
}

s32 fn_800B3470(void) {
    return 0;
}

void fn_800B3A88(void) {

}

void fn_800B3A8C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x8C) = arg1;
}

s32 fn_800B49E0(void) {
    return 0;
}

s32 fn_800B49E8(void) {
    return 0;
}

void fn_800B49F0(void *arg0, s32 arg1, s32 arg2) {

}

s32 fn_800B4C20(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

void fn_800B4C28(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
}

s32 fn_800B4C34(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xD4);
}

void fn_800B5098(void) {
    M2C_UNK fn_800B4C3C(M2C_UNK, M2C_UNK);
    fn_800B4C3C(1, 0xFFFF);
}

