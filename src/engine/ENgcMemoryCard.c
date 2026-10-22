/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041C9A8[];
extern void fn_802D20E8(void *);
void fn_80340654(void **self, s32 flags) {
    *self = lbl_8041C9A8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_80340688(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) != 0;
}

void fn_803406A0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}

void fn_803406B0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - 1);
}

s32 fn_80340974(void) {
    return 1;
}

s32 fn_80341528(void) {
    return 1;
}

s32 fn_80341530(void) {
    return 1;
}

s32 fn_80343C5C(void) {
    return 0;
}

s32 fn_80343C64(void) {
    return 0;
}

s32 fn_80343C6C(void) {
    return 0;
}

s32 fn_80343C74(void) {
    return 0;
}

s32 fn_80343C7C(void) {
    return 0;
}

s32 fn_80343C84(void) {
    return 0;
}

s32 fn_80343C8C(void) {
    return 0;
}

s32 fn_80344640(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    *arg4 = 0;
    return 1;
}

s32 fn_8034491C(void *arg0, s32 *arg1) {
    *arg1 = -1;
    if ((*(s32 (**)(void *, s32))(*(u8 **)arg0 + 0xA4))((u8 *)arg0 + *(s16 *)(*(u8 **)arg0 + 0xA0), 1) != 0) {
        *arg1 = 1;
    }
    if ((*(s32 (**)(void *, s32))(*(u8 **)arg0 + 0xA4))((u8 *)arg0 + *(s16 *)(*(u8 **)arg0 + 0xA0), 0) != 0) {
        *arg1 = 0;
    }
    return *arg1 != -1;
}

s32 fn_80345204(void) {
    return 1;
}

void fn_8034520C(void) {

}

void fn_80345210(void) {

}

s32 fn_80345A44(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 8) + (arg1 * 8);
}

void fn_80345A54(s32 arg0, s32 arg1);

void fn_80345AA0(void) {
    fn_80345A54(1, 0xFFFF);
}

extern s32 lbl_80496298;
extern void fn_80340634(void *);
void fn_80345ACC(void) {
    fn_80345A54(0, 0xFFFF);
}

