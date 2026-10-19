/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_801288B4(void) {

}

void fn_801289C4(M2C_UNK *arg0) {
    extern M2C_UNK *lbl_80494448;
    *arg0 = lbl_80494448;
    lbl_80494448 = arg0;
}

s32 fn_80129544(void) {
    return 0xD6000;
}

s32 fn_80129550(void) {
    return 0x1C;
}

s32 fn_8012A8C0(void) {
    M2C_UNK fn_8012AF90();
    fn_8012AF90();
    return 0;
}

s32 fn_8012A8E4(void) {
    return 0;
}

s32 fn_8012A8EC(void) {
    return 0;
}

s32 fn_8012A8F4(void) {
    return 0;
}

s32 fn_8012A8FC(void) {
    return 0;
}

s32 fn_8012A904(void) {
    return 0;
}

void fn_8012A90C(void) {

}

s32 fn_8012A910(void) {
    return 0;
}

s32 fn_8012A944(void) {
    return 1;
}

s32 fn_8012A94C(void) {
    return 0;
}

s32 fn_8012A954(void) {
    return 0;
}

s32 fn_8012A9F4(void) {
    return 0;
}

void fn_8012AA68(void) {

}

s32 fn_8012AA6C(void) {
    return 0;
}

s32 fn_8012AA74(void) {
    return 0x1C004;
}

void fn_8012AA90(void) {

}

void fn_8012AA94(void) {

}

s32 fn_8012AA98(void) {
    return 0;
}

void fn_8012AAA0(void) {

}

void fn_8012AAA4(void) {

}

s32 fn_8012AAA8(void) {
    return 1;
}

void fn_8012AAB0(void) {

}

void fn_8012ACA4(void) {

}

void fn_8012ACA8(void) {

}

void fn_8012ACAC(void) {

}

void fn_8012ACB0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (arg1 - 1);
}

void fn_8012FE00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x180) = arg1;
}

s32 fn_8012FE08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x180);
}

void fn_8012FE10(void) {
    extern s32 lbl_80494464;
    extern s32 lbl_80494468;
    lbl_80494468 = 0;
    lbl_80494464 = 0;
}

s32 fn_8013019C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28) + 1;
}

s32 fn_801301A8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

