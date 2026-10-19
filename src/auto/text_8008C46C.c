/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8008CD40(void) {
    fn_803073C4();
}

void fn_8008D5BC(void) {

}

extern s32 lbl_804941F0;
void fn_8008DCCC(void (*cb)(void)) {
    lbl_804941F0 = cb;
}

void fn_8008DCD4(void) {

}

void fn_8008E250(void) {

}

void fn_8008F240(void) {

}

s32 fn_8008F854(void) {
    return 1;
}

s32 fn_8008F85C(void) {
    return 0;
}

s32 fn_8008F864(void) {
    return 1;
}

void fn_8008F86C(void) {

}

void fn_8008F870(void) {

}

void fn_8008F874(void) {

}

void fn_8008F878(void) {

}

void fn_8008FEE0(void) {

}

void fn_8008FEE4(void) {

}

s32 fn_80093598(void) {
    return 0;
}

void fn_8009415C(void) {
    fn_80091BE8();
}

s32 fn_80095A44(void) {
    return 1;
}

void fn_800969B0(void) {

}

void fn_80096DA4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x114) = arg1;
}

void fn_80096DAC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x118) = arg1;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80097B40(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

f32 fn_80097C08(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xFC);
}

void fn_80097C20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C4) = arg1;
}

void fn_80097C28(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C8) = arg1;
}

