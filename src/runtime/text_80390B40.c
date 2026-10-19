/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8049661C;
void fn_803985D8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg1 + arg2);
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}

void fn_80398744(s32 arg0) {
    lbl_8049661C = arg0;
}

s32 fn_8039874C(void) {
    return lbl_8049661C;
}
