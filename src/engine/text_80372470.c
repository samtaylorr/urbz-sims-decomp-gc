/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_80372470(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80372490(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_803724D0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80372510(void);
void fn_803727BC(void) {
    fn_80372510();
}

void fn_80372800(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493E94[];
void *fn_80372840(void) {
    return lbl_80493E94;
}

extern s32 lbl_80493EA0[];
s32 fn_8037284C(void) {
    return lbl_80493EA0[0];
}

extern s32 lbl_80493EA4[];
s32 fn_80372858(void) {
    return lbl_80493EA4[0];
}

extern u16 lbl_80493EA8[];
u16 fn_80372864(void) {
    return lbl_80493EA8[0];
}

void *fn_80372870(void) {
    return lbl_80493E94;
}

extern u16 lbl_80493EAA[];
u16 fn_8037287C(void) {
    return lbl_80493EAA[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8037273C(void);
extern void fn_803727DC(void);
extern u8 lbl_803F5658[];
extern u8 lbl_80493858[];
void fn_80372888(s32 arg0) {
    fn_802D6A90(lbl_80493E94, fn_8037273C, fn_803727BC, fn_803727DC, arg0, lbl_803F5658, lbl_80493858);
}

void fn_802D2430(void);
void fn_803728DC(void) {
    fn_802D2430();
}

