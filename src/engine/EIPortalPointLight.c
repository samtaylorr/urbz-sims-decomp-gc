/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } EIPortalPointLightVec3;

static inline void EIPortalPointLightVec3_Set(EIPortalPointLightVec3 *v, f32 x, f32 y, f32 z) {
    v->z = z;
    v->y = y;
    v->x = x;
}

extern s32 lbl_804961D8;
extern u8 lbl_804937B8[];
extern u8 lbl_803F0FAC[];
extern u8 lbl_80493740[];
extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
void fn_802F31C8(void);
void fn_802F31F0(void);
void fn_802F3210(void *);
void *fn_802F273C();
void *fn_802F1B74(void *);
void fn_802F2278(void *, EIPortalPointLightVec3 *);
void fn_802F2D08(void *);

void fn_802D2FD0(void);
void fn_802F269C(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_802F26BC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_802F26FC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void *fn_802F273C(self)
    void *self;
{
    extern f32 lbl_803F1000[];
    extern u8 lbl_8041A388[];
    extern f32 lbl_80494E68;
    extern f32 lbl_80494E80;
    EIPortalPointLightVec3 v;
    f32 zero;

    fn_802F1B74(self);
    zero = lbl_803F1000[0];
    M2C_FIELD(self, void **, 0) = lbl_8041A388;
    M2C_FIELD(self, s32 *, 0x64) |= 0x80000;
    M2C_FIELD(self, s32 *, 0xE8) = 0;
    EIPortalPointLightVec3_Set(&v, zero, zero, zero);
    fn_802F2278(self, &v);
    M2C_FIELD(self, f32 *, 0xD8) = zero;
    M2C_FIELD(self, f32 *, 0xDC) = lbl_80494E68;
    M2C_FIELD(self, s32 *, 0xE0) = 1;
    M2C_FIELD(self, f32 *, 0xA0) = lbl_80494E80;
    M2C_FIELD(self, s32 *, 0xE4) = 0;
    M2C_FIELD(self, s32 *, 0x9C) = 1;
    fn_802F2D08(self);
    return self;
}

void fn_802F27E4(void *arg0, s32 arg1, s32 arg2) {
    char *vt;

    M2C_FIELD(arg0, s32 *, 0xE8) = arg1;
    M2C_FIELD(arg0, s32 *, 0xE4) = arg2;
    vt = *(char **)arg0;
    (*(void (**)(void *))(vt + 0x5C))((char *)arg0 + *(s16 *)(vt + 0x58));
}

void fn_802F3158(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_804961D8 = fn_802D6A90(lbl_804937B8, fn_802F31C8, fn_802F31F0, fn_802F3210, 0, lbl_803F0FAC, lbl_80493740);
    }
}

void fn_802F31C8(void) {
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0xEC);
    fn_802F273C();
}

void fn_802F31F0(void) {
    fn_802F273C();
}

void fn_802F3210(void *self) {
    extern void fn_802F05AC(void *, s32);
    fn_802F05AC(self, 2);
}

void fn_802F3234(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_804937B8[];
void *fn_802F3274(void) {
    return lbl_804937B8;
}

extern s32 lbl_804937C4[];
s32 fn_802F3280(void) {
    return lbl_804937C4[0];
}

extern s32 lbl_804937C8[];
s32 fn_802F328C(void) {
    return lbl_804937C8[0];
}

extern u16 lbl_804937CC[];
u16 fn_802F3298(void) {
    return lbl_804937CC[0];
}

void *fn_802F32A4(void) {
    return lbl_804937B8;
}

extern u16 lbl_804937CE[];
u16 fn_802F32B0(void) {
    return lbl_804937CE[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_802F31C8(void);
extern void fn_802F3210(void *);
extern u8 lbl_803F0FAC[];
extern u8 lbl_80493740[];
void fn_802F32BC(s32 arg0) {
    fn_802D6A90(lbl_804937B8, fn_802F31C8, fn_802F31F0, fn_802F3210, arg0, lbl_803F0FAC, lbl_80493740);
}

void fn_802D2430(void);
void fn_802F3310(void) {
    fn_802D2430();
}

s32 fn_802F3330(void) {
    return 4;
}

s32 fn_802F3338(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xE8);
}

s32 fn_802F3340(void) {
    return 1;
}

void fn_802F3348(void) {
    void fn_802F3158(s32, s32);
    fn_802F3158(1, 0xFFFF);
}

