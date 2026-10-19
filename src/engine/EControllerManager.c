/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80494F5C;
s32 fn_803336A8(void *arg0) {
    s32 var_ctr;
    s32 var_r9;
    void *var_r3;

    var_r3 = arg0;
    var_r9 = 0;
    var_ctr = 4;
    do {
        M2C_FIELD(var_r3, s32 *, 0) = var_r9;
        M2C_FIELD(var_r3, s32 *, 0x10) = 1;
        var_r9 += 1;
        var_r3 += 4;
        var_ctr -= 1;
    } while (var_ctr != 0);
    return 1;
}

void fn_8033372C(void) {

}

s32 fn_80333D60(void) {
    return 4;
}

s32 fn_803347A4(s32 arg0) {
    return 1 << arg0;
}

void fn_8033480C(void) {

}

f32 fn_80334A58(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xA8);
}

void fn_80334B04(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xA8) = farg0;
}

void fn_80334B94(s32 arg0, s32 arg1) {
    s32 fn_80334B0C();
    M2C_UNK fn_8033789C(s32, s32);
    if (((s32) lbl_80494F5C != 0) || (fn_80334B0C() != 0)) {
        fn_8033789C(arg0, arg1);
    }
}

void fn_80334CF8(s32 arg0, s32 arg1) {
    M2C_UNK fn_803379C8(s32, s32);
    if (((s32) lbl_80494F5C != 0) || (fn_80334B0C() != 0)) {
        fn_803379C8(arg0, arg1);
    }
}

void fn_80334EC4(void (*cb)(void)) {
    lbl_80494F5C = cb;
}

s32 fn_80334ECC(void) {
    return lbl_80494F5C;
}

void fn_80334ED4(s32 arg0) {
    extern s32 lbl_80494F60;
    fn_80334EC4(arg0 ^ 1);
    lbl_80494F60 = arg0;
}

void fn_80334FC8(void) {
    M2C_UNK fn_80334F08(M2C_UNK, M2C_UNK);
    fn_80334F08(1, 0xFFFF);
}

