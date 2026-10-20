/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80494F5C;

typedef struct {
    s32 a;
    s32 b;
} ECtrlPair;
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

extern ECtrlPair lbl_803F3724[];
extern ECtrlPair lbl_803F372C[];
void fn_80333B64(s32, ECtrlPair *, s32, s32, s32, s32, s32);
void fn_80333A04(s32, s32, ECtrlPair *, ECtrlPair *, s32, s32, s32);

void fn_80333D68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair a = lbl_803F3724[0];
    ECtrlPair b = lbl_803F3724[0];
    fn_80333A04(arg0, arg1, &a, &b, 0, arg2, arg3);
}

void fn_80333DBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair a = lbl_803F372C[0];
    ECtrlPair b = lbl_803F3724[0];
    fn_80333A04(arg0, arg1, &a, &b, 0, arg2, arg3);
}

void fn_80333F54(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3724[0];
    fn_80333B64(arg0, &p, 0, 0, arg1, arg2, arg3);
}

void fn_80333FA4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F372C[0];
    fn_80333B64(arg0, &p, 0, 0, arg1, arg2, arg3);
}

extern ECtrlPair lbl_803F3734[];
void fn_80333FF4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3734[0];
    fn_80333B64(arg0, &p, 0, 0, arg1, arg2, arg3);
}

extern ECtrlPair lbl_803F373C[];
void fn_80334044(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F373C[0];
    fn_80333B64(arg0, &p, 0, 0, arg1, arg2, arg3);
}

extern ECtrlPair lbl_803F3744[];
void fn_80334094(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3744[0];
    fn_80333B64(arg0, &p, 0, 0, arg1, arg2, arg3);
}

void fn_803340E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3724[0];
    fn_80333B64(arg0, &p, 0, 1, arg1, arg2, arg3);
}

void fn_80334134(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F372C[0];
    fn_80333B64(arg0, &p, 0, 1, arg1, arg2, arg3);
}

void fn_80334184(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3734[0];
    fn_80333B64(arg0, &p, 0, 1, arg1, arg2, arg3);
}

void fn_803341D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F373C[0];
    fn_80333B64(arg0, &p, 0, 1, arg1, arg2, arg3);
}

void fn_80334224(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3744[0];
    fn_80333B64(arg0, &p, 0, 1, arg1, arg2, arg3);
}

void fn_80334460(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3724[0];
    fn_80333B64(arg0, &p, 1, 0, arg1, arg2, arg3);
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

