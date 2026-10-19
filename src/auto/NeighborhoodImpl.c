/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

M2C_UNK *fn_801231C8(void) {
    extern M2C_UNK lbl_80495B74;
    return &lbl_80495B74;
}

void fn_801236E8(void) {

}

s32 fn_80124808(void) {
    return 0;
}

s32 fn_80125674(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x1C4) - M2C_FIELD(arg0, s32 *, 0x1C0)) >> 2;
}

s32 fn_80127CA0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}

void fn_80127CA8(void) {

}

void fn_80127F7C(void) {

}

extern s32 lbl_80495B9C;
s32 fn_80128338(void) {
    return lbl_80495B9C;
}

extern s32 lbl_80495BA0;
s32 fn_80128340(void) {
    return lbl_80495BA0;
}

extern s32 lbl_80495BA4;
s32 fn_80128348(void) {
    return lbl_80495BA4;
}

s16 fn_801285F4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x168);
}

s32 fn_801286A0(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x15C) - M2C_FIELD(arg0, s32 *, 0x158)) >> 2;
}

s16 fn_801286C4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x16A);
}

void fn_801286DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x16E) = (s16) (arg1 ^ 1);
}

void fn_801286E8(void) {

}

void fn_801286EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1D4) = arg1;
}

