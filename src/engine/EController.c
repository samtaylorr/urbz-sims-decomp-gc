/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_803105B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

s32 fn_80310750(void) {
    return 0;
}

s32 fn_80310FE4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1AC);
}

void fn_80310FEC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1AC) = arg1;
}

void fn_80310FF4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1B0) = arg1;
}

s32 fn_80311B60(s32 *self) {
    return *self;
}

s32 fn_80311B68(s32 *self) {
    return self[1];
}

