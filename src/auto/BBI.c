/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

struct BBI_Handle { s32 v; };
struct BBI_Vec3 { s32 a; s32 b; s32 c; };

s32 fn_80059AC4(s32 *self) {
    return self[1];
}

u8 fn_80059B90(u8 *self) {
    return self[2];
}

s32 fn_80059B98(s32 *self, struct BBI_Vec3 *out) {
    struct BBI_Vec3 tmp;
    s32 ret;

    if (out != 0) {
        out->a = self[0];
        out->b = self[1];
        tmp.c = out->c;
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}

s32 *fn_80059BD4(s32 *self) {
    s32 i;
    s32 *p = self;

    for (i = 0x24; i != 0; i--) {
        *p++ = 0;
    }
    return self;
}

extern void fn_8005A038(s32);
extern void fn_802D20E8(s32);
void fn_80059BF4(s32 self, s32 flags) {
    fn_8005A038(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8005A38C(void) {
    return 0x24;
}

void fn_8005B368(void) {

}

void fn_8005B67C(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8005B69C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8005B6DC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8005D344(void) {
    fn_8005D054();
}

void fn_8005DA60(void) {

}

void fn_8005DC04(void) {

}

void fn_8005FAD0(void) {
    fn_802D2FD0();
}

s32 fn_8005FAF0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_8005FB30(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8005FC18(void) {

}

void fn_80060610(void) {
    fn_802D2FD0();
}

s32 fn_80060630(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_80060670(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80060C30(void) {
    fn_802D2FD0();
}

s32 fn_80060C50(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_80060C90(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_80060DAC(void) {
    return 0;
}

void fn_800616D8(void) {

}

void fn_800616DC(void) {
    fn_802D2FD0();
}

s32 fn_800616FC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_8006173C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_800630FC(void) {
    fn_8005B71C();
}

void fn_80063140(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491E44[];
void *fn_80063180(void) {
    return lbl_80491E44;
}

extern s32 lbl_80491E50[];
s32 fn_8006318C(void) {
    return lbl_80491E50[0];
}

extern s32 lbl_80491E54[];
s32 fn_80063198(void) {
    return lbl_80491E54[0];
}

extern u16 lbl_80491E58[];
u16 fn_800631A4(void) {
    return lbl_80491E58[0];
}

void *fn_800631B0(void) {
    return lbl_80491E44;
}

extern u16 lbl_80491E5A[];
u16 fn_800631BC(void) {
    return lbl_80491E5A[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80063054(void);
extern void fn_8006311C(void);
extern u8 lbl_803C7EE4[];
extern u8 lbl_80491CA0[];
void fn_800631C8(s32 arg0) {
    fn_802D6A90(lbl_80491E44, fn_80063054, fn_800630FC, fn_8006311C, arg0, lbl_803C7EE4, lbl_80491CA0);
}

void fn_8006321C(void) {
    fn_802D2430();
}

s32 fn_8006323C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x42C);
}

s32 fn_80063278(s32 arg0) {
    return arg0 + 0x3E4;
}

s32 fn_800632A0(s32 arg0) {
    return arg0 + 0x3F0;
}

f32 fn_800632C8(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3D0);
}

void fn_800632D0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x3D0) = farg0;
}

s32 fn_800632D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x440);
}

void fn_800633C8(void) {
    fn_8005FB70();
}

void fn_8006340C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491E6C[];
void *fn_8006344C(void) {
    return lbl_80491E6C;
}

extern s32 lbl_80491E78[];
s32 fn_80063458(void) {
    return lbl_80491E78[0];
}

extern s32 lbl_80491E7C[];
s32 fn_80063464(void) {
    return lbl_80491E7C[0];
}

extern u16 lbl_80491E80[];
u16 fn_80063470(void) {
    return lbl_80491E80[0];
}

void *fn_8006347C(void) {
    return lbl_80491E6C;
}

extern u16 lbl_80491E82[];
u16 fn_80063488(void) {
    return lbl_80491E82[0];
}

extern void fn_80063320(void);
extern void fn_800633E8(void);
extern u8 lbl_803C7EF8[];
void fn_80063494(s32 arg0) {
    fn_802D6A90(lbl_80491E6C, fn_80063320, fn_800633C8, fn_800633E8, arg0, lbl_803C7EF8, lbl_80491E44);
}

void fn_800634E8(void) {
    fn_802D2430();
}

void fn_800635B0(void) {
    fn_800606B0();
}

void fn_800635F4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491E94[];
void *fn_80063634(void) {
    return lbl_80491E94;
}

extern s32 lbl_80491EA0[];
s32 fn_80063640(void) {
    return lbl_80491EA0[0];
}

extern s32 lbl_80491EA4[];
s32 fn_8006364C(void) {
    return lbl_80491EA4[0];
}

extern u16 lbl_80491EA8[];
u16 fn_80063658(void) {
    return lbl_80491EA8[0];
}

void *fn_80063664(void) {
    return lbl_80491E94;
}

extern u16 lbl_80491EAA[];
u16 fn_80063670(void) {
    return lbl_80491EAA[0];
}

extern void fn_80063508(void);
extern void fn_800635D0(void);
extern u8 lbl_803C7F10[];
void fn_8006367C(s32 arg0) {
    fn_802D6A90(lbl_80491E94, fn_80063508, fn_800635B0, fn_800635D0, arg0, lbl_803C7F10, lbl_80491E44);
}

void fn_800636D0(void) {
    fn_802D2430();
}

void fn_80063798(void) {
    fn_80060CD0();
}

void fn_800637DC(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491EBC[];
void *fn_8006381C(void) {
    return lbl_80491EBC;
}

extern s32 lbl_80491EC8[];
s32 fn_80063828(void) {
    return lbl_80491EC8[0];
}

extern s32 lbl_80491ECC[];
s32 fn_80063834(void) {
    return lbl_80491ECC[0];
}

extern u16 lbl_80491ED0[];
u16 fn_80063840(void) {
    return lbl_80491ED0[0];
}

void *fn_8006384C(void) {
    return lbl_80491EBC;
}

extern u16 lbl_80491ED2[];
u16 fn_80063858(void) {
    return lbl_80491ED2[0];
}

extern void fn_800636F0(void);
extern void fn_800637B8(void);
extern u8 lbl_803C7F2C[];
void fn_80063864(s32 arg0) {
    fn_802D6A90(lbl_80491EBC, fn_800636F0, fn_80063798, fn_800637B8, arg0, lbl_803C7F2C, lbl_80491E44);
}

void fn_800638B8(void) {
    fn_802D2430();
}

void fn_80063980(void) {
    fn_8006177C();
}

void fn_800639C4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491EE4[];
void *fn_80063A04(void) {
    return lbl_80491EE4;
}

extern s32 lbl_80491EF0[];
s32 fn_80063A10(void) {
    return lbl_80491EF0[0];
}

extern s32 lbl_80491EF4[];
s32 fn_80063A1C(void) {
    return lbl_80491EF4[0];
}

extern u16 lbl_80491EF8[];
u16 fn_80063A28(void) {
    return lbl_80491EF8[0];
}

void *fn_80063A34(void) {
    return lbl_80491EE4;
}

extern u16 lbl_80491EFA[];
u16 fn_80063A40(void) {
    return lbl_80491EFA[0];
}

extern void fn_800638D8(void);
extern void fn_800639A0(void);
extern u8 lbl_803C7F44[];
void fn_80063A4C(s32 arg0) {
    fn_802D6A90(lbl_80491EE4, fn_800638D8, fn_80063980, fn_800639A0, arg0, lbl_803C7F44, lbl_80491E44);
}

void fn_80063AA0(void) {
    fn_802D2430();
}

