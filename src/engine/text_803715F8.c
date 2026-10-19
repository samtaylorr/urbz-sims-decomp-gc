/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_803715F8(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80371618(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80371698(void);
void fn_80371958(void) {
    fn_80371698();
}

void fn_8037199C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493E44[];
void *fn_803719DC(void) {
    return lbl_80493E44;
}

extern s32 lbl_80493E50[];
s32 fn_803719E8(void) {
    return lbl_80493E50[0];
}

extern s32 lbl_80493E54[];
s32 fn_803719F4(void) {
    return lbl_80493E54[0];
}

extern u16 lbl_80493E58[];
u16 fn_80371A00(void) {
    return lbl_80493E58[0];
}

void *fn_80371A0C(void) {
    return lbl_80493E44;
}

extern u16 lbl_80493E5A[];
u16 fn_80371A18(void) {
    return lbl_80493E5A[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_803718D8(void);
extern void fn_80371978(void);
extern u8 lbl_803F55DC[];
extern u8 lbl_80493858[];
void fn_80371A24(s32 arg0) {
    fn_802D6A90(lbl_80493E44, fn_803718D8, fn_80371958, fn_80371978, arg0, lbl_803F55DC, lbl_80493858);
}

void fn_802D2430(void);
void fn_80371A78(void) {
    fn_802D2430();
}

