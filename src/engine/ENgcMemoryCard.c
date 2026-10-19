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

s32 fn_80345204(void) {
    return 1;
}

void fn_8034520C(void) {

}

void fn_80345210(void) {

}

