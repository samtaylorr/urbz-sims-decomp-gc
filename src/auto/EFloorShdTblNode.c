/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80496694;
extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80052EFC(void) {

}

void fn_80052F00(void) {

}

void fn_80052F04(void) {

}

void fn_80052F5C(void) {

}

void fn_80053DF8(void) {

}

void fn_80053DFC(void) {

}

void fn_80056888(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_800568D0(void) {
    return lbl_80496694;
}

void fn_80058514(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80058534(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80058574(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void *fn_800596B8(u32 size, void *p);
void *fn_800596B8(u32 size, void *p) {
    return p;
}

void fn_80059734(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491DF4[];
void *fn_80059774(void) {
    return lbl_80491DF4;
}

extern s32 lbl_80491E00[];
s32 fn_80059780(void) {
    return lbl_80491E00[0];
}

extern s32 lbl_80491E04[];
s32 fn_8005978C(void) {
    return lbl_80491E04[0];
}

extern u16 lbl_80491E08[];
u16 fn_80059798(void) {
    return lbl_80491E08[0];
}

void *fn_800597A4(void) {
    return lbl_80491DF4;
}

extern u16 lbl_80491E0A[];
u16 fn_800597B0(void) {
    return lbl_80491E0A[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_800596C0(void);
extern void fn_800596EC(void);
extern void fn_80059710(void);
extern u8 lbl_803C7B8C[];
extern u8 lbl_80491E1C[];
void fn_800597BC(s32 arg0) {
    fn_802D6A90(lbl_80491DF4, fn_800596C0, fn_800596EC, fn_80059710, arg0, lbl_803C7B8C, lbl_80491E1C);
}

void fn_80059810(void) {
    fn_802D2430();
}

