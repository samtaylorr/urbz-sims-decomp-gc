/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void fn_802D20E8(void *);
f32 *fn_800F4B08(f32 *out, f32 *arg1, f32 *arg2, s32 arg3) {
    f32 fn_800F4AA4(s32);
    extern f32 lbl_803D5A04[];
    f32 scale = lbl_803D5A04[0];
    f32 x = *arg2 * scale;
    f32 y = fn_800F4AA4(arg3);
    f32 z = *arg1 * scale;

    out[0] = x;
    out[1] = y;
    out[2] = z;
    return out;
}

f32 *fn_800F4BE0(f32 *out, s32 *in, s32 arg2) {
    f32 fn_800F4AA4(s32);
    extern f32 lbl_803D5A0C[];
    f32 scale = lbl_803D5A0C[0];
    f32 x = (f32)in[0] * scale;
    f32 y = fn_800F4AA4(arg2);
    f32 z = (f32)in[1] * scale;

    out[0] = x;
    out[1] = y;
    out[2] = z;
    return out;
}

s32 fn_800F4D9C(s32 arg0, s32 arg1) {
    void fn_800F4E18(s32, s32, f32 *);
    extern f32 lbl_803D5A38[];
    extern f32 lbl_803D5A3C[];
    f32 sp8;
    f32 x;

    x = (f32)arg1 * lbl_803D5A38[0];
    sp8 = (x + x) * lbl_803D5A3C[0];
    fn_800F4E18(arg0, 1, &sp8);
    return arg0;
}

void fn_800F51EC(u8 *dst, u16 *src) {
    while (*src != 0) {
        *dst++ = *src++;
    }
    *dst = 0;
}

void fn_800F521C(void *self) {

}

void fn_800F5220(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800F5248(void) {

}

extern s32 fn_800F8120(s32);
extern void *fn_802D2058(s32);
extern void fn_800F51EC(u8 *, u16 *);
extern void fn_802D211C(void *);
extern s32 fn_80245BB4(char *, const char *, ...);
extern char lbl_803D5A48[];
extern char lbl_803D5A4C[];
extern s32 lbl_80495A90;
s32 fn_800F524C(s32 arg0, s32 arg1) {
    void *buf;

    buf = fn_802D2058(fn_800F8120(arg1) + 1);
    fn_800F51EC(buf, (u16 *)arg1);
    if (buf != 0) {
        fn_802D211C(buf);
    }
    return arg0;
}

s32 fn_800F52A8(s32 arg0, f64 *arg1) {
    char buf[64];

    fn_80245BB4(buf, lbl_803D5A48, *arg1);
    return arg0;
}

s32 fn_800F52EC(s32 arg0, s32 arg1) {
    char buf[64];

    fn_80245BB4(buf, lbl_803D5A4C, arg1);
    return arg0;
}

extern char lbl_803D5A50[];
s32 fn_800F5330(s32 arg0, s32 arg1) {
    char buf[64];

    fn_80245BB4(buf, lbl_803D5A50, arg1);
    return arg0;
}

s32 fn_800F5374(s32 arg0, s32 arg1) {
    char buf[64];

    fn_80245BB4(buf, lbl_803D5A4C, arg1);
    return arg0;
}

extern char lbl_803D5A54[];
s32 fn_800F53B8(s32 arg0, s32 arg1) {
    char buf[64];

    fn_80245BB4(buf, lbl_803D5A54, arg1);
    return arg0;
}

void fn_800F53FC(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_800F521C(&lbl_80495A90);
            return;
        }
        fn_800F5220(&lbl_80495A90, 2);
    }
}

void fn_800F5448(void) {
    void fn_800F53FC(s32, s32);
    fn_800F53FC(1, 0xFFFF);
}

void fn_800F5474(void) {
    fn_800F53FC(0, 0xFFFF);
}

