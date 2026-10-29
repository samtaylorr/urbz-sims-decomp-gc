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

void fn_8033FD40(void) {

}

void fn_8033FD44(s32 arg0, s32 arg1) {
    M2C_UNK fn_802EE234(s32, s32);
    M2C_UNK fn_8035DA38(s32);
    fn_8035DA38(arg1);
    fn_802EE234(arg0, arg1);
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
    s32 i;

    for (i = 0; i < *(s32 *)(self + 0x2A4); i++) {
        f32 a[2];
        f32 b[2];
        f32 *src = (f32 *)(self + 0xE4 + i * 0xC);
        u8 *vt;
        b[0] = *(f32 *)(self + 0x1A4 + i * 0xC);
        b[1] = *(f32 *)(self + 0x1A8 + i * 0xC);
        a[0] = src[0];
        a[1] = src[1];
        vt = *(u8 **)(arg1 + 0x68);
        (*(void (**)(void *, f32 *, f32 *, f32))(vt + 0x33C))(arg1 + *(s16 *)(vt + 0x338), a, b, *(f32 *)(self + 0x1AC + i * 0xC));
    }
    *(s32 *)(self + 0x2A4) = 0;
}

void fn_80340458(u8 *self) {
    if (*(s32 *)(self + 0x320) != 0) {
        f32 *v = (f32 *)(self + 0x300);
        f32 s = *(f32 *)(self + 0x2F8);
        f32 tmp[3];
        f32 x = v[0] * s;
        f32 y = v[1] * s;
        f32 z = v[2] * s;
        tmp[0] = x;
        tmp[1] = y;
        tmp[2] = z;
        fn_8035A124(lbl_8046DF78, tmp, self + 0x30C, *(f32 *)(self + 0x2E0), *(f32 *)(self + 0x2E4), *(f32 *)(self + 0x2E8) * lbl_803F417C[0], *(f32 *)(self + 0x2F4));
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

