/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_802EFB08(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_802EFB28(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_802EFBA8(void);
void fn_802F01AC(void) {
    fn_802EFBA8();
}

void fn_802F01F0(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493740[];
void *fn_802F0230(void) {
    return lbl_80493740;
}

extern s32 lbl_8049374C[];
s32 fn_802F023C(void) {
    return lbl_8049374C[0];
}

extern s32 lbl_80493750[];
s32 fn_802F0248(void) {
    return lbl_80493750[0];
}

extern u16 lbl_80493754[];
u16 fn_802F0254(void) {
    return lbl_80493754[0];
}

void *fn_802F0260(void) {
    return lbl_80493740;
}

extern u16 lbl_80493756[];
u16 fn_802F026C(void) {
    return lbl_80493756[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_802F0184(void);
extern void fn_802F01CC(void);
extern u8 lbl_803F0D58[];
extern u8 lbl_80491E1C[];
void fn_802F0278(s32 arg0) {
    fn_802D6A90(lbl_80493740, fn_802F0184, fn_802F01AC, fn_802F01CC, arg0, lbl_803F0D58, lbl_80491E1C);
}

void fn_802D2430(void);
void fn_802F02CC(void) {
    fn_802D2430();
}

s32 fn_802F02FC(void) {
    return 0;
}

extern s32 lbl_80494E58;
s32 fn_802F03E8(void) {
    return lbl_80494E58;
}

