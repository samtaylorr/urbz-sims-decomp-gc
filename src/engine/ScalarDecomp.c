/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8036375C(void *);
void fn_802CB634(void *);
void fn_802D23C0(void *, u32, s32, s32);
void fn_802CA9A8(void *);
void fn_802CAA00(void *, s32);
void fn_8036BB88(s32 arg0, s32 arg1);
extern u8 lbl_8047551C[];
extern u8 lbl_80475558[];

void fn_8036A91C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}

void fn_8036A928(s32 *arg0, f32 arg1) {
    void fn_802DDC6C(s32, s32);

    fn_802DDC6C(arg0[0], (s32)(arg0[1] + arg1));
}

s32 fn_8036A98C(s32 *self) {
    return self[2];
}

s32 fn_8036AA70(u8 *dst, u8 *src) {
    void fn_802482F8(void *, void *, s32);
    u8 *start = src;

    fn_802482F8(dst, src, 2);
    src += 2;
    fn_802482F8(dst + 2, src, 2);
    src += 2;
    fn_802482F8(dst + 4, src, 4);
    src += 4;
    fn_802482F8(dst + 8, src, 0xC);
    src += 0xC;
    fn_802482F8(dst + 0x14, src, 4);
    src += 4;
    fn_802482F8(dst + 0x18, src, 4);
    src += 4;
    return src - start;
}

s32 fn_8036ACBC(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x18) * M2C_FIELD(arg0, s16 *, 0x1C)) + 0x63;
}

void fn_8036B20C(void *arg0) {
    extern const f32 lbl_803F50C4[];
    extern u32 fn_802DE634(s32, s32, s32);
    void fn_8036B300(void *);

    M2C_FIELD(arg0, s32 *, 0x8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_803F50C4[0];
    M2C_FIELD(arg0, s32 *, 0x10) = fn_802DE634(M2C_FIELD(arg0, s32 *, 0x0), M2C_FIELD(arg0, s32 *, 0x4) + M2C_FIELD(arg0, s16 *, 0x1C), M2C_FIELD(arg0, s8 *, 0x1E)) + 1;
    fn_8036B300(arg0);
}

void fn_8036B278(void *arg0) {
    extern const f32 lbl_803F50C8[];
    extern u32 fn_802DE634(s32, s32, s32);
    void fn_8036B300(void *);
    s32 n;
    s32 w;
    s32 last;

    n = M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x8) = n - 2;
    M2C_FIELD(arg0, s32 *, 0x10) = M2C_FIELD(arg0, s32 *, 0x14) - 1;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_803F50C8[0];
    w = fn_802DE634(M2C_FIELD(arg0, s32 *, 0x0), M2C_FIELD(arg0, s32 *, 0x4) + (n - 1) * M2C_FIELD(arg0, s16 *, 0x1C), M2C_FIELD(arg0, s8 *, 0x1E));
    last = M2C_FIELD(arg0, s32 *, 0x10) - 1;
    M2C_FIELD(arg0, s32 *, 0xC) = last - w;
    fn_8036B300(arg0);
}

void fn_8036B300(void *arg0) {
    extern void fn_8036B50C(void *, s32, s32, void *);
    s32 n;

    fn_8036B50C(arg0, 2, M2C_FIELD(arg0, s32 *, 0x8), (u8 *)arg0 + 0x2C);
    fn_8036B50C(arg0, 1, M2C_FIELD(arg0, s32 *, 0x8), (u8 *)arg0 + 0x30);
    n = M2C_FIELD(arg0, s32 *, 0x8) + 1;
    fn_8036B50C(arg0, 0, n, (u8 *)arg0 + 0x34);
    fn_8036B50C(arg0, 2, n, (u8 *)arg0 + 0x38);
}

void fn_8036BB88(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            char *p = (char *)lbl_8047551C;
            char *buf = (char *)lbl_80475558;
            fn_802D23C0(p, ((u32)buf + 0x3F) & ~0x3F, 0x60, 2);
            fn_802CA9A8(p + 0x20);
        } else {
            char *q = (char *)lbl_8047551C;
            fn_802CAA00(q + 0x20, 2);
        }
    }
}

s32 fn_8036BC0C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

void fn_8036BC14(void *self) {
    fn_8036375C(self);
}

void fn_8036BC34(void *self) {
    fn_802CB634(self);
}

void fn_8036BC54(char *self) {
    fn_8036375C(self + 0x14);
}

void fn_8036BC78(char *self) {
    fn_802CB634(self + 0x14);
}

s32 fn_8036BC9C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

void fn_8036BCFC(void) {
    fn_8036BB88(1, 0xFFFF);
}

void fn_8036BD28(void) {
    fn_8036BB88(0, 0xFFFF);
}

