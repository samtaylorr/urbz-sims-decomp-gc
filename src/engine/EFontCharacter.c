/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_8036BD54(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8036BD74(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8036BDB4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8036C038(void) {
    fn_802D2FD0();
}

s32 fn_8036C058(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_8036C098(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8036C31C(void) {
    fn_802D2FD0();
}

s32 fn_8036C33C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_8036C37C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8036C818(void) {
    fn_802D2FD0();
}

s32 fn_8036C838(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_8036C878(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8036CF6C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493D2C[];
void *fn_8036CFAC(void) {
    return lbl_80493D2C;
}

extern s32 lbl_80493D38[];
s32 fn_8036CFB8(void) {
    return lbl_80493D38[0];
}

extern s32 lbl_80493D3C[];
s32 fn_8036CFC4(void) {
    return lbl_80493D3C[0];
}

extern u16 lbl_80493D40[];
u16 fn_8036CFD0(void) {
    return lbl_80493D40[0];
}

void *fn_8036CFDC(void) {
    return lbl_80493D2C;
}

extern u16 lbl_80493D42[];
u16 fn_8036CFE8(void) {
    return lbl_80493D42[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8036CF18(void);
extern void fn_8036CF4C(void);
extern void fn_8036CF5C(void);
extern u8 lbl_803F5174[];
extern u8 lbl_804936F0[];
void fn_8036CFF4(s32 arg0) {
    fn_802D6A90(lbl_80493D2C, fn_8036CF18, fn_8036CF4C, fn_8036CF5C, arg0, lbl_803F5174, lbl_804936F0);
}

void fn_802D2430(void);
void fn_8036D048(void) {
    fn_802D2430();
}

void fn_8036C0D8(void);
void fn_8036D090(void) {
    fn_8036C0D8();
}

void fn_8036D0C0(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493D54[];
void *fn_8036D100(void) {
    return lbl_80493D54;
}

extern s32 lbl_80493D60[];
s32 fn_8036D10C(void) {
    return lbl_80493D60[0];
}

extern s32 lbl_80493D64[];
s32 fn_8036D118(void) {
    return lbl_80493D64[0];
}

extern u16 lbl_80493D68[];
u16 fn_8036D124(void) {
    return lbl_80493D68[0];
}

void *fn_8036D130(void) {
    return lbl_80493D54;
}

extern u16 lbl_80493D6A[];
u16 fn_8036D13C(void) {
    return lbl_80493D6A[0];
}

extern void fn_8036D068(void);
extern void fn_8036D0B0(void);
extern u8 lbl_803F5184[];
void fn_8036D148(s32 arg0) {
    fn_802D6A90(lbl_80493D54, fn_8036D068, fn_8036D090, fn_8036D0B0, arg0, lbl_803F5184, lbl_804936F0);
}

void fn_8036D19C(void) {
    fn_802D2430();
}

void fn_8036C3BC(void);
void fn_8036D1E4(void) {
    fn_8036C3BC();
}

void fn_8036D228(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493D7C[];
void *fn_8036D268(void) {
    return lbl_80493D7C;
}

extern s32 lbl_80493D88[];
s32 fn_8036D274(void) {
    return lbl_80493D88[0];
}

extern s32 lbl_80493D8C[];
s32 fn_8036D280(void) {
    return lbl_80493D8C[0];
}

extern u16 lbl_80493D90[];
u16 fn_8036D28C(void) {
    return lbl_80493D90[0];
}

void *fn_8036D298(void) {
    return lbl_80493D7C;
}

extern u16 lbl_80493D92[];
u16 fn_8036D2A4(void) {
    return lbl_80493D92[0];
}

extern void fn_8036D1BC(void);
extern void fn_8036D204(void);
extern u8 lbl_803F5190[];
void fn_8036D2B0(s32 arg0) {
    fn_802D6A90(lbl_80493D7C, fn_8036D1BC, fn_8036D1E4, fn_8036D204, arg0, lbl_803F5190, lbl_804936F0);
}

void fn_8036D304(void) {
    fn_802D2430();
}

void fn_8036C8B8(void);
void fn_8036D34C(void) {
    fn_8036C8B8();
}

void fn_8036D390(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493DA4[];
void *fn_8036D3D0(void) {
    return lbl_80493DA4;
}

extern s32 lbl_80493DB0[];
s32 fn_8036D3DC(void) {
    return lbl_80493DB0[0];
}

extern s32 lbl_80493DB4[];
s32 fn_8036D3E8(void) {
    return lbl_80493DB4[0];
}

extern u16 lbl_80493DB8[];
u16 fn_8036D3F4(void) {
    return lbl_80493DB8[0];
}

void *fn_8036D400(void) {
    return lbl_80493DA4;
}

extern u16 lbl_80493DBA[];
u16 fn_8036D40C(void) {
    return lbl_80493DBA[0];
}

extern void fn_8036D324(void);
extern void fn_8036D36C(void);
extern u8 lbl_803F519C[];
void fn_8036D418(s32 arg0) {
    fn_802D6A90(lbl_80493DA4, fn_8036D324, fn_8036D34C, fn_8036D36C, arg0, lbl_803F519C, lbl_804936F0);
}

void fn_8036D46C(void) {
    fn_802D2430();
}

