/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_80371AC4(void) {
    fn_802D2FD0();
}

void fn_80371B64(void);
void fn_80372304(void) {
    fn_80371B64();
}

void fn_80372348(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493E6C[];
void *fn_80372388(void) {
    return lbl_80493E6C;
}

extern s32 lbl_80493E78[];
s32 fn_80372394(void) {
    return lbl_80493E78[0];
}

extern s32 lbl_80493E7C[];
s32 fn_803723A0(void) {
    return lbl_80493E7C[0];
}

extern u16 lbl_80493E80[];
u16 fn_803723AC(void) {
    return lbl_80493E80[0];
}

void *fn_803723B8(void) {
    return lbl_80493E6C;
}

extern u16 lbl_80493E82[];
u16 fn_803723C4(void) {
    return lbl_80493E82[0];
}

void fn_802D2430(void);
void fn_80372424(void) {
    fn_802D2430();
}

