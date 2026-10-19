/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

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

void fn_802F273C(void);
void fn_802F31F0(void) {
    fn_802F273C();
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

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_802F31C8(void);
extern void fn_802F3210(void);
extern u8 lbl_803F0FAC[];
extern u8 lbl_80493740[];
void fn_802F32BC(s32 arg0) {
    fn_802D6A90(lbl_804937B8, fn_802F31C8, fn_802F31F0, fn_802F3210, arg0, lbl_803F0FAC, lbl_80493740);
}

void fn_802D2430(void);
void fn_802F3310(void) {
    fn_802D2430();
}

s32 fn_802F3340(void) {
    return 1;
}

