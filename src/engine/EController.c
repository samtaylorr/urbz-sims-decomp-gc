/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80310528(void *arg0) {
    M2C_UNK fn_8036FC58(s32);
    fn_8036FC58(M2C_FIELD(arg0, s32 *, 0x200));
}

s32 fn_8031054C(u32 *arg0, u32 *arg1) {
    u32 temp_r0;
    u32 temp_r9;

    temp_r9 = *arg0;
    temp_r0 = *arg1;
    if (temp_r9 >= temp_r0) {
        return temp_r9 > temp_r0;
    }
    return -1;
}

void fn_803105B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

s32 fn_80310750(void) {
    return 0;
}

s32 fn_80310A48(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x1E4) = farg0;
    return 1;
}

s32 fn_80310AB8(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x1E8) = farg0;
    return 1;
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

void fn_803112BC(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 0x78) = 1;
}

s32 fn_80311350(u32 *arg0, u32 *arg1) {
    u32 temp_r0;
    u32 temp_r9;

    temp_r9 = *arg0;
    temp_r0 = *arg1;
    if (temp_r9 >= temp_r0) {
        return temp_r9 > temp_r0;
    }
    return -1;
}

s32 fn_80311B60(s32 *self) {
    return *self;
}

s32 fn_80311B68(s32 *self) {
    return self[1];
}

s32 fn_80311B70(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 4) >> 1U) & 1;
}

