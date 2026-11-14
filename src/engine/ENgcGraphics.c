/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041C640[];
extern f32 lbl_803F417C[];
extern u8 lbl_8045F9F0[];
extern u8 lbl_8046DF78[];
extern void fn_8035A124(void *, f32 *, void *, f32, f32, f32, f32);
M2C_UNK **fn_8033FA18(M2C_UNK **arg0) {
    M2C_UNK fn_802ED720();
    extern M2C_UNK **lbl_80495050;
    fn_802ED720();
    *arg0 = &lbl_8041C640;
    lbl_80495050 = arg0;
    return arg0;
}

void fn_8033FA58(void **self, s32 flags) {
    M2C_UNK fn_802ED8B4(void **);
    *self = lbl_8041C640;
    fn_802ED8B4(self);
}

void fn_8033FCF8(void *self, s32 arg1, s32 arg2) {
    extern void fn_802EDC38(void *, s32, s32, s32);
    extern void fn_8034D53C(void *, s32, s32);
    fn_802EDC38(self, arg1, arg2, 1);
    fn_8034D53C(lbl_8046DF78, arg1, arg2);
}

void fn_8033FD40(void) {

}

void fn_8033FD44(s32 arg0, s32 arg1) {
    M2C_UNK fn_802EE234(s32, s32);
    M2C_UNK fn_8035DA38(s32);
    fn_8035DA38(arg1);
    fn_802EE234(arg0, arg1);
}

void *fn_8033FD84(void) {
    extern void *fn_8036BA10(s32);
    extern void fn_8036B878(void *, s32);
    extern u8 lbl_8041C628[];
    u8 *self = fn_8036BA10(0x60);
    fn_8036B878(self, 0x400);
    *(void **)(self + 0x5C) = lbl_8041C628;
    return self;
}

void fn_8033FDCC(void *unused, char *obj) {
    if (obj != NULL) {
        char *vt = *(char **)(obj + 0x5C);
        (*(void (**)(void *, s32))(vt + 0xC))(obj + *(s16 *)(vt + 0x8), 3);
    }
}

extern u8 lbl_8045F980[];
extern void fn_80348F08(void *, s32);
void fn_8033FE0C(void);
void fn_8033FE0C(void) {
    fn_80348F08(lbl_8045F980, 2);
}

void *fn_8033FE38(void *unused, s32 arg1) {
    extern void *fn_802D1FC8(s32);
    extern void *fn_80348ECC(void *);
    extern void fn_80246D44(void (*)(void));
    extern s32 lbl_8049628C;
    if (arg1 == 1) {
        return fn_80348ECC(fn_802D1FC8(0x6C));
    }
    if (lbl_8049628C == 0) {
        fn_80348ECC(lbl_8045F980);
        lbl_8049628C = 1;
        fn_80246D44(fn_8033FE0C);
    }
    return lbl_8045F980;
}

void fn_8033FEA0(void *unused, char *obj, s32 flag) {
    if (flag == 1 && obj != NULL) {
        char *vt = *(char **)(obj + 0x68);
        (*(void (**)(void *, s32))(vt + 0xC))(obj + *(s16 *)(vt + 0x8), 3);
    }
}

void fn_8033FEEC(void) {
    extern u8 lbl_8045BAE8[];
    extern void *fn_80338000(void *, s32, s32);
    extern void fn_80360C04(void);
    fn_80338000(lbl_8045BAE8, 0x2C, 4);
    fn_80360C04();
}

void fn_8033FF20(void *unused, char *obj) {
    if (obj != NULL) {
        char *vt = *(char **)(obj + 0x24);
        (*(void (**)(void *, s32))(vt + 0xC))(obj + *(s16 *)(vt + 0x8), 3);
    }
}

extern u8 lbl_8045BAE8[];
extern void *fn_80338000(void *, s32, s32);
extern void fn_80360C04(void);
extern u8 lbl_8045BA40[];
extern void fn_8035F368(void);
void fn_8033FF60(void) {
    fn_80338000(lbl_8045BA40, 0xF4, 4);
    fn_8035F368();
}

void fn_8033FF94(void *arg0, void *obj) {
    if (obj != NULL) {
        char *vt = *(char **)((char *)obj + 0xF0);
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

void fn_8033FFD4(void) {
    M2C_UNK fn_802D1FC8(M2C_UNK);
    M2C_UNK fn_8035D9C0();
    fn_802D1FC8(0x2C);
    fn_8035D9C0();
}

void fn_8033FFFC(void *arg0, void *obj) {
    if (obj != NULL) {
        char *vt = *(char **)((char *)obj + 0x20);
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

void fn_8034003C(void) {
    M2C_UNK fn_802D1FC8(M2C_UNK);
    M2C_UNK fn_80345AF8();
    fn_802D1FC8(0x4C);
    fn_80345AF8();
}

void fn_80340064(void *arg0, void *obj) {
    if (obj != NULL) {
        char *vt = *(char **)((char *)obj + 0x8);
        (*(void (**)(void *, s32))(vt + 0x3C))((char *)obj + *(s16 *)(vt + 0x38), 3);
    }
}

void fn_803403B4(u8 *self, u8 *arg1) {
    typedef struct { f32 x, y; } V2;
    s32 i;
    f32 *p;
    V2 a;
    V2 b;
    V2 *pa;

    i = 0;
    if (i < *(s32 *)(self + 0x2A4)) {
        pa = &a;
        p = (f32 *)(self + 0x1AC);
        do {
            u8 *vt;
            a.x = p[-50];
            pa->y = p[-49];
            b.x = p[-2];
            b.y = p[-1];
            vt = *(u8 **)(arg1 + 0x68);
            i++;
            (*(void (**)(void *, V2 *, V2 *, f32))(vt + 0x33C))(arg1 + *(s16 *)(vt + 0x338), pa, &b, p[0]);
            p += 3;
        } while (i < *(s32 *)(self + 0x2A4));
    }
    *(s32 *)(self + 0x2A4) = 0;
}

void fn_80340458(u8 *self) {
    if (*(s32 *)(self + 0x320) != 0) {
        f32 *v = (f32 *)(self + 0x300);
        f32 s = *(f32 *)(self + 0x2F8);
        f32 tmp[3];
        f32 fov;
        f32 a;
        register f32 d;
        f32 b;
        tmp[0] = v[0] * s;
        tmp[1] = v[1] * s;
        fov = *(f32 *)(self + 0x2E8) * lbl_803F417C[0];
        a = *(f32 *)(self + 0x2E0);
        b = *(f32 *)(self + 0x2E4);
        tmp[2] = v[2] * s;
        d = *(f32 *)(self + 0x2F4);
        fn_8035A124(lbl_8046DF78, tmp, self + 0x30C, a, b, fov, d);
    }
}

void fn_803404E0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8033FA18((M2C_UNK **)lbl_8045F9F0);
        } else {
            fn_8033FA58((void **)lbl_8045F9F0, 2);
        }
    }
}

void fn_803404E0(s32 arg0, s32 arg1);

void fn_80340534(void) {
    fn_803404E0(1, 0xFFFF);
}

extern f32 lbl_803F417C[];
extern u8 lbl_8046DF78[];
extern void fn_8035A124(void *, f32 *, void *, f32, f32, f32, f32);
extern u8 lbl_8045F9F0[];
void fn_80340560(void) {
    fn_803404E0(0, 0xFFFF);
}

