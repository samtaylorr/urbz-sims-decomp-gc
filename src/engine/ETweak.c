/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802435CC(void);
s32 fn_80313110(s32 arg0) {
    s32 var_r3;
    s32 var_r9;

    var_r3 = arg0;
    var_r9 = -1;
    do {
        var_r9 += 1;
        var_r3 = var_r3 >> 1;
    } while (var_r3 != 0);
    return var_r9;
}

void fn_803135D4(void) {
    fn_802435CC();
}

void fn_803140DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + arg1);
}

void fn_8031411C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

void fn_80314124(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
}

void fn_803145A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
}

