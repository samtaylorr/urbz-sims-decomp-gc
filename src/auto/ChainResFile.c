/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8040D690[];
extern void fn_802D20E8(void *);
void fn_801020E0(void **self, s32 flags) {
    *self = lbl_8040D690;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_801023F4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0xC);
}

s32 fn_80102400(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4) + (arg1 * 0x14);
}

s32 fn_80102414(void *arg0, s32 arg1) {
    return (s32) ((arg1 - M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4)) * 0xCCCCCCCD) >> 2;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_801029D8(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_801051C0(void) {
    return 0;
}

s32 fn_80105314(s32 *self) {
    return self[1];
}

s32 fn_8010531C(s32 *self) {
    return *self;
}

void fn_80105508(void *arg0) {
    M2C_FIELD(arg0, s8 *, 2) = 0;
}

void fn_801055FC(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_801058BC(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0) + (s8) M2C_FIELD(arg0, u8 *, 1);
}

s32 fn_801058D4(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0) - (s8) M2C_FIELD(arg0, u8 *, 1);
}

s8 fn_80105B78(u8 *arg0) {
    return (s8) *arg0;
}

s8 fn_80105B84(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 1);
}

void fn_80105B90(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = (s32) (s8) M2C_FIELD(arg0, u8 *, 0);
    *arg2 = (s32) (s8) M2C_FIELD(arg0, u8 *, 1);
}

void fn_80105BEC(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = arg2;
}

s8 fn_80105C08(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 2);
}

void fn_80105C14(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 2) = arg1;
}

void fn_80105C1C(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 2);
}

void fn_80105C28(void) {

}

