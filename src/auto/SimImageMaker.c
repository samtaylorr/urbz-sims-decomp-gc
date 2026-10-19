/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8009CC24(void *arg0, s32 *arg1) {
    *arg1 = (M2C_FIELD(arg0, u8 *, 0) << 0x18) | (M2C_FIELD(arg0, u8 *, 1) << 0x10) | (M2C_FIELD(arg0, u8 *, 2) << 8) | M2C_FIELD(arg0, u8 *, 3);
}

void *fn_8009CCE4(void *arg0) {
    M2C_UNK fn_8009CD8C(void *);
    M2C_UNK fn_802E55C0(s32);
    s32 var_ctr;
    s32 var_ctr_2;

    fn_802E55C0(arg0 + 0xC);
    var_ctr = 3;
    do {
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_ctr_2 = 4;
    do {
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
    M2C_FIELD(arg0, s32 *, 0x1F4) = 0;
    fn_8009CD8C(arg0);
    return arg0;
}

void fn_8009D0F8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
}

void fn_8009D100(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
}

void fn_8009E9A8(void) {
    M2C_UNK fn_8009E964(M2C_UNK, M2C_UNK);
    fn_8009E964(1, 0xFFFF);
}

