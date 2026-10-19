/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802435CC(void);
void fn_80313090(void *arg0, s32 arg1) {
    s32 fn_802D118C(s32);
    s32 fn_802D1194(s32);
    s32 fn_802D119C(s32);
    s32 fn_802D12C4(s32);
    s32 fn_802DCFE0(s32);
    M2C_FIELD(arg0, s32 *, 0) = fn_802D12C4(arg1);
    M2C_FIELD(arg0, u32 *, 4) = (u32) ((u32) (fn_802DCFE0(arg1) + 0x3FF) >> 0xAU);
    M2C_FIELD(arg0, u32 *, 8) = (u32) ((u32) (fn_802D118C(arg1) + 0x3FF) >> 0xAU);
    M2C_FIELD(arg0, u32 *, 0xC) = (u32) ((u32) (fn_802D1194(arg1) + 0x3FF) >> 0xAU);
    M2C_FIELD(arg0, s32 *, 0x10) = fn_802D119C(arg1);
}

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

void fn_80314560(void *arg0) {
    M2C_UNK fn_80314004();
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    fn_80314004();
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) - 1);
}

void fn_803145A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
}

void fn_80314C68(void) {
    M2C_UNK fn_80314C14(M2C_UNK, M2C_UNK);
    fn_80314C14(1, 0xFFFF);
}

