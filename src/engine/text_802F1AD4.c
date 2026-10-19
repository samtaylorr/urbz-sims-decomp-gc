/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_802F1AD4(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_802F1AF4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_802F1B34(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_802F1B74(void);
void fn_802F2500(void) {
    fn_802F1B74();
}

void fn_802F2544(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493790[];
void *fn_802F2584(void) {
    return lbl_80493790;
}

extern s32 lbl_8049379C[];
s32 fn_802F2590(void) {
    return lbl_8049379C[0];
}

extern s32 lbl_804937A0[];
s32 fn_802F259C(void) {
    return lbl_804937A0[0];
}

extern u16 lbl_804937A4[];
u16 fn_802F25A8(void) {
    return lbl_804937A4[0];
}

void *fn_802F25B4(void) {
    return lbl_80493790;
}

extern u16 lbl_804937A6[];
u16 fn_802F25C0(void) {
    return lbl_804937A6[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_802F24D8(void);
extern void fn_802F2520(void);
extern u8 lbl_803F0EF4[];
extern u8 lbl_80493740[];
void fn_802F25CC(s32 arg0) {
    fn_802D6A90(lbl_80493790, fn_802F24D8, fn_802F2500, fn_802F2520, arg0, lbl_803F0EF4, lbl_80493740);
}

void fn_802D2430(void);
void fn_802F2620(void) {
    fn_802D2430();
}

