/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_804942B4;
void fn_800A0568(void) {

}

void fn_800A0A88(void) {

}

void fn_800A0A8C(void) {

}

void fn_800A0F48(s32 arg0) {
    M2C_UNK fn_800A3310(s32);
    fn_800A3310(arg0 + 0x4C);
}

void fn_800A13DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1A0) = arg1;
}

s32 fn_800A18A8(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x180);
    M2C_FIELD(arg0, s32 *, 0x180) = arg1;
    return temp_r0;
}

void fn_800A1B38(void) {

}

void fn_800A1B3C(void) {

}

void fn_800A1B40(void) {

}

void fn_800A1B44(void) {

}

void fn_800A22D4(void) {

}

s32 fn_800A3F68(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), s32 *, 0xC);
}

void fn_800A40EC(void) {

}

void fn_800A4370(void) {

}

s32 fn_800A4374(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x174);
}

s32 fn_800A437C(void) {
    return lbl_804942B4;
}
