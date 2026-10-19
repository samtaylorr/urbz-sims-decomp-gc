/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041DC30[];
void fn_802D8BEC(void *);
s32 fn_8036ED88(void) {
    return 0;
}

s32 fn_8036EDA4(void) {
    return 1;
}

void fn_8036EE30(u8 *self) {
    *(u8 **)(self + 0x338) = lbl_8041DC30;
    fn_802D8BEC(self);
}

s32 fn_8036EE60(void) {
    return 0;
}

s32 fn_8036F1DC(void) {
    return 1;
}

s32 fn_8036F1F0(void) {
    return 0;
}

s32 fn_8036F1F8(void) {
    return 0;
}

s32 fn_8036FF94(void) {
    return 0;
}

s32 fn_8036FF9C(void) {
    return 0;
}

s32 fn_8036FFA4(void) {
    return 0;
}

s32 fn_8036FFAC(void) {
    return 0;
}

void fn_802D2FD0(void);
void fn_80370010(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80370030(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80370F50(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493DCC[];
void *fn_80370F90(void) {
    return lbl_80493DCC;
}

extern s32 lbl_80493DD8[];
s32 fn_80370F9C(void) {
    return lbl_80493DD8[0];
}

extern s32 lbl_80493DDC[];
s32 fn_80370FA8(void) {
    return lbl_80493DDC[0];
}

extern u16 lbl_80493DE0[];
u16 fn_80370FB4(void) {
    return lbl_80493DE0[0];
}

void *fn_80370FC0(void) {
    return lbl_80493DCC;
}

extern u16 lbl_80493DE2[];
u16 fn_80370FCC(void) {
    return lbl_80493DE2[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80370ED8(void);
extern void fn_80370F00(void);
extern void fn_80370F2C(void);
extern u8 lbl_803F54B0[];
extern u8 lbl_80493858[];
void fn_80370FD8(s32 arg0) {
    fn_802D6A90(lbl_80493DCC, fn_80370ED8, fn_80370F00, fn_80370F2C, arg0, lbl_803F54B0, lbl_80493858);
}

void fn_802D2430(void);
void fn_8037102C(void) {
    fn_802D2430();
}

