/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } Vec3f;

static inline void Vec3f_Set(Vec3f *v, f32 x, f32 y, f32 z) {
    v->z = z;
    v->y = y;
    v->x = x;
}

static inline void *Stream_Write(void *stream, void *data, s32 size) {
    void *vt = M2C_FIELD(stream, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x3C)((char *)stream + M2C_FIELD(vt, s16 *, 0x38), data, size);
    return stream;
}

static inline void *Stream_WriteF32p(void *stream, const f32 *v) {
    void *vt;
    void (*f)(void *, void *, s32);
    void *p;
    f32 t;

    vt = M2C_FIELD(stream, void **, 0x18);
    f = M2C_FIELD(vt, void (**)(void *, void *, s32), 0x3C);
    p = (char *)stream + M2C_FIELD(vt, s16 *, 0x38);
    t = *v;
    f(p, &t, 4);
    return stream;
}

static inline void *Stream_WriteU8(void *stream, u8 v) {
    u8 t = v;
    return Stream_Write(stream, &t, 1);
}

extern s32 lbl_804961D4;
extern u8 lbl_80493790[];
extern u8 lbl_803F0EF4[];
extern u8 lbl_80493740[];
extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
void fn_802F24D8(void);
void fn_802F2500(void *);
void fn_802F2520(void *);

void fn_802D2FD0(void);
void fn_802F1AD4(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_802F1AF4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_802F1B34(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void *fn_802F1B74(void *self) {
    extern void fn_802EFBA8(void *);
    extern void fn_802F2378(void *);
    extern const f32 lbl_803F0F38[];
    extern const f32 lbl_803F0F3C[];
    extern const f32 lbl_803F0F40[];
    extern u8 lbl_8041A218[];
    Vec3f v;
    s32 zero;

    fn_802EFBA8(self);
    Vec3f_Set(&v, lbl_803F0F38[0], lbl_803F0F38[0], lbl_803F0F38[0]);
    *(void **)self = lbl_8041A218;
    *(Vec3f *)((u8 *)self + 0xC0) = v;
    zero = 0;
    *(s32 *)((u8 *)self + 0xCC) = zero;
    *(s32 *)((u8 *)self + 0xD4) = -1;
    *(f32 *)((u8 *)self + 0xD8) = lbl_803F0F3C[0];
    *(f32 *)((u8 *)self + 0xDC) = lbl_803F0F40[0];
    *(s32 *)((u8 *)self + 0xE0) = 1;
    *(s32 *)((u8 *)self + 0xD0) = zero;
    fn_802F2378(self);
    return self;
}

extern void fn_802EFC54(void *, void *);
extern void *fn_802D34B0(void *, void *);
void fn_802F1C20(void *self, void *stream) {
    void *s;
    u8 b;
    fn_802EFC54(self, stream);
    s = fn_802D34B0(stream, (u8 *)self + 0xC0);
    Stream_WriteF32p(Stream_WriteF32p(s, (f32 *)((u8 *)self + 0xD8)), (f32 *)((u8 *)self + 0xDC));
    b = 0;
    if (M2C_FIELD(self, s32 *, 0xE0) != 0) {
        b = 1;
    }
    Stream_WriteU8(s, b);
}

void fn_802F1CE8(char *self, void *stream) {
    extern u16 lbl_804937A6[];
    extern void fn_802EFD68(void *, void *);
    extern void *fn_802D3714(void *, void *);
    u8 flag;
    void *vt;

    fn_802EFD68(self, stream);
    if (lbl_804937A6[0] == 0) {
        stream = fn_802D3714(stream, self + 0xC0);
        vt = M2C_FIELD(stream, void **, 0x18);
        M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)stream + M2C_FIELD(vt, s16 *, 0x30), self + 0xD8, 4);
        vt = M2C_FIELD(stream, void **, 0x18);
        M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)stream + M2C_FIELD(vt, s16 *, 0x30), self + 0xDC, 4);
        vt = M2C_FIELD(stream, void **, 0x18);
        M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)stream + M2C_FIELD(vt, s16 *, 0x30), &flag, 1);
        M2C_FIELD(self, s32 *, 0xE0) = flag != 0;
    }
}

void fn_802F1DB0(char *self, f32 *pos, f32 *out) {
    extern f32 fn_8025FC40(Vec3f *);
    extern const f32 lbl_803F0F44[];
    extern const f32 lbl_803F0F48[];
    extern const f32 lbl_803F0F4C[];
    extern const f32 lbl_803F0F50[];
    Vec3f v;
    f32 dist;
    f32 scale;
    f32 a;

    v.x = pos[0] - M2C_FIELD(self, f32 *, 0xC0);
    v.y = pos[1] - M2C_FIELD(self, f32 *, 0xC4);
    v.z = lbl_803F0F44[0];
    dist = fn_8025FC40(&v);
    a = M2C_FIELD(self, f32 *, 0xA0);
    *out = a;
    if (a == lbl_803F0F44[0]) {
        *out = lbl_803F0F48[0];
    }
    if (dist != lbl_803F0F44[0]) {
        scale = lbl_803F0F4C[0];
        if (M2C_FIELD(self, s32 *, 0xE0) != 0) {
            scale = M2C_FIELD(self, f32 *, 0xDC) / (dist * lbl_803F0F50[0]);
            scale *= scale;
        }
        *out *= scale;
        if (*out > lbl_803F0F4C[0]) {
            *out = lbl_803F0F4C[0];
        }
    }
}

void fn_802F2278(char *self, Vec3f *pos) {
    extern s32 lbl_80494E58;
    void (*cb)(s32, s32, u16 *, s16 *);
    u16 a;
    s16 b;
    u16 *pa;
    s16 *pb;
    s32 ix;
    s32 iy;

    *(Vec3f *)(self + 0xC0) = *pos;
    pa = &a;
    pb = &b;
    cb = M2C_FIELD(self, void (**)(s32, s32, u16 *, s16 *), 0x20);
    if (cb != NULL) {
        cb(M2C_FIELD(self, s32 *, 0x30), 0, pa, pb);
    } else {
        *pb = 0;
        *pa = 0;
    }
    M2C_FIELD(self, s32 *, 8) = M2C_FIELD(self, u16 *, 0x28) != *pa;
    M2C_FIELD(self, u16 *, 0x28) = *pa;
    ix = (s32)pos->x;
    iy = (s32)pos->y;
    if (ix != M2C_FIELD(self, s32 *, 0xCC) || iy != M2C_FIELD(self, s32 *, 0xD0) || M2C_FIELD(self, s32 *, 0xD4) != b) {
        M2C_FIELD(self, s32 *, 0xCC) = ix;
        M2C_FIELD(self, s32 *, 0xD0) = iy;
        M2C_FIELD(self, s32 *, 0xD4) = b;
        lbl_80494E58 = 1;
    }
}

void fn_802F2378(void *self) {
    extern const f32 lbl_803F0F70[];
    extern const f32 lbl_803F0F74[];
    extern const f32 lbl_803F0F78[];
    extern void fn_802C5148(void *, void *, f32);
    extern void fn_802F09B8(void *, void *);
    struct { Vec3f min; Vec3f max; } box;
    Vec3f tmp;
    Vec3f *t = &tmp;

    Vec3f_Set(t, lbl_803F0F70[0], lbl_803F0F70[0], lbl_803F0F70[0]);
    box.max = *t;
    box.min = box.max;
    if (M2C_FIELD(self, s32 *, 0xE0) != 0) {
        fn_802C5148(&box, (u8 *)self + 0xC0, M2C_FIELD(self, f32 *, 0xDC));
    } else {
        Vec3f_Set(t, lbl_803F0F74[0], lbl_803F0F74[0], lbl_803F0F74[0]);
        box.min = *t;
        Vec3f_Set(t, lbl_803F0F78[0], lbl_803F0F78[0], lbl_803F0F78[0]);
        box.max = *t;
    }
    fn_802F09B8(self, &box);
}

void fn_802F2468(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_804961D4 = fn_802D6A90(lbl_80493790, fn_802F24D8, fn_802F2500, fn_802F2520, 0, lbl_803F0EF4, lbl_80493740);
    }
}

void *fn_802D1FC8(s32);
void *fn_802F1B74(void *);
void fn_802F24D8(void) {
    fn_802F1B74(fn_802D1FC8(0xE4));
}

void fn_802F2500(void *self) {
    fn_802F1B74(self);
}

void fn_802F2520(void *self) {
    extern void fn_802F05AC(void *, s32);
    fn_802F05AC(self, 2);
}

void fn_802F2544(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493790[];
void *fn_802F2584(void) {
    return lbl_80493790;
}

extern s32 lbl_8049379C[];
s32 fn_802F2590(void) {
    return lbl_8049379C[0];
}

extern s32 lbl_804937A0[];
s32 fn_802F259C(void) {
    return lbl_804937A0[0];
}

extern u16 lbl_804937A4[];
u16 fn_802F25A8(void) {
    return lbl_804937A4[0];
}

void *fn_802F25B4(void) {
    return lbl_80493790;
}

extern u16 lbl_804937A6[];
u16 fn_802F25C0(void) {
    return lbl_804937A6[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_802F24D8(void);
extern void fn_802F2520(void *);
extern u8 lbl_803F0EF4[];
extern u8 lbl_80493740[];
void fn_802F25CC(s32 arg0) {
    fn_802D6A90(lbl_80493790, fn_802F24D8, fn_802F2500, fn_802F2520, arg0, lbl_803F0EF4, lbl_80493740);
}

void fn_802D2430(void);
void fn_802F2620(void) {
    fn_802D2430();
}

s32 fn_802F2640(void) {
    return 3;
}

void fn_802F2648(u8 *arg0, Vec3f *out) {
    *out = *(Vec3f *)(arg0 + 0xC0);
}

f32 fn_802F2668(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xDC);
}

void fn_802F2670(void) {
    void fn_802F2468(s32, s32);
    fn_802F2468(1, 0xFFFF);
}

