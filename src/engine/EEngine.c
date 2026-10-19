/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 fn_802D1E4C[];
void *fn_802E0AD8(void) {
    return fn_802D1E4C;
}

extern u8 fn_802D1F94[];
void *fn_802E0AE4(void) {
    return fn_802D1F94;
}

extern u8 fn_802D1EDC[];
void *fn_802E0AF0(void) {
    return fn_802D1EDC;
}

extern u8 lbl_803F050C[];
void *fn_802E0B08(void) {
    return lbl_803F050C;
}

extern u8 lbl_803F0540[];
void *fn_802E0B14(void) {
    return lbl_803F0540;
}

s32 fn_802E0B20(void) {
    return 0;
}

s32 fn_802E0B28(void) {
    return 0;
}

s32 fn_802E0B30(void) {
    return 8;
}

s32 fn_802E0B38(s32 arg0) {
    return arg0 + 0x350;
}

void fn_802E0B48(u8 *self, s32 value) {
    *(s32 *)(self + 0x468) = value;
}

void fn_802E0B60(void) {

}

void fn_802E0B64(void) {

}

void fn_802E0B68(void) {

}

void fn_802E0B78(void) {

}

void fn_802E0D30(void) {

}

void fn_802E13B4(void) {

}

void fn_802E13B8(void) {

}

void fn_802E1A20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void fn_802E1A28(void) {

}

void fn_802E1A2C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
}

s32 fn_802E1A34(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

void fn_802E1A3C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

s32 fn_802E1A44(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_802E1A4C(void) {

}

s32 fn_802E1A50(void) {
    return 1;
}

