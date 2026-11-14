/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
void fn_802F3CE0(void);
void fn_802F3D08(void);
void fn_802F3D28(void *);
void *fn_802F3414();
extern u8 lbl_804937E0[];
extern u8 lbl_803F1054[];
extern u8 lbl_80493740[];
extern s32 lbl_804961DC;

typedef struct { f32 x, y, z; } Vec3_802F;
static inline void Vec3_802F_Set(Vec3_802F *v, f32 x, f32 y, f32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}

void fn_802D2FD0(void);
void fn_802F3374(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_802F3394(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_802F33D4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void *fn_802F3414(self)
    void *self;
{
    extern void fn_802EFBA8(void *);
    extern void fn_802F3A5C(void *);
    extern u8 lbl_8041A500[];
    extern const f32 lbl_803F1060[];
    extern const f32 lbl_803F1064[];
    extern const f32 lbl_803F1068[];
    extern f32 lbl_803F106C[];
    extern f32 lbl_803F1070[];
    extern f32 lbl_803F1074[];
    extern f32 lbl_803F1078[];
    typedef struct { f32 x, y, z; } Vec;
    Vec t;
    Vec *v;
    f32 a;
    f32 b;

    fn_802EFBA8(self);
    *(u8 **)self = lbl_8041A500;
    v = (Vec *)((char *)self + 0xCC);
    v->x = lbl_803F1060[0];
    v->z = lbl_803F1064[0];
    v->y = lbl_803F1060[0];
    t.z = lbl_803F1060[0];
    t.y = lbl_803F1060[0];
    t.x = lbl_803F1060[0];
    M2C_FIELD(self, Vec *, 0xC0) = t;
    M2C_FIELD(self, f32 *, 0xD8) = lbl_803F1068[0];
    M2C_FIELD(self, f32 *, 0xDC) = lbl_803F106C[0];
    a = lbl_803F1070[0] * lbl_803F1074[0];
    b = lbl_803F1078[0] * lbl_803F1074[0];
    M2C_FIELD(self, s32 *, 0xE8) = 1;
    M2C_FIELD(self, f32 *, 0xE0) = a;
    M2C_FIELD(self, f32 *, 0xE4) = b;
    fn_802F3A5C(self);
    return self;
}

void fn_802F3C70(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_804961DC = fn_802D6A90(lbl_804937E0, fn_802F3CE0, fn_802F3D08, fn_802F3D28, 0, lbl_803F1054, lbl_80493740);
    }
}

void fn_802F3CE0(void) {
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0xF4);
    fn_802F3414();
}

void fn_802F3D08(void) {
    fn_802F3414();
}

extern void fn_802F05AC(void *, s32);
void fn_802F3D28(void *self) {
    fn_802F05AC(self, 2);
}

void fn_802F3D4C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_804937E0[];
void *fn_802F3D8C(void) {
    return lbl_804937E0;
}

extern s32 lbl_804937EC[];
s32 fn_802F3D98(void) {
    return lbl_804937EC[0];
}

extern s32 lbl_804937F0[];
s32 fn_802F3DA4(void) {
    return lbl_804937F0[0];
}

extern u16 lbl_804937F4[];
u16 fn_802F3DB0(void) {
    return lbl_804937F4[0];
}

void *fn_802F3DBC(void) {
    return lbl_804937E0;
}

extern u16 lbl_804937F6[];
u16 fn_802F3DC8(void) {
    return lbl_804937F6[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_802F3CE0(void);
extern void fn_802F3D28(void *);
extern u8 lbl_803F1054[];
extern u8 lbl_80493740[];
void fn_802F3DD4(s32 arg0) {
    fn_802D6A90(lbl_804937E0, fn_802F3CE0, fn_802F3D08, fn_802F3D28, arg0, lbl_803F1054, lbl_80493740);
}

void fn_802D2430(void);
void fn_802F3E28(void) {
    fn_802D2430();
}

void fn_802F3C70(s32 arg0, s32 arg1);

void fn_802F3E48(void) {
    fn_802F3C70(1, 0xFFFF);
}

