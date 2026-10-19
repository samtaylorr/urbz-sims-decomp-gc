/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80496694;
s32 fn_800568D0(void) {
    return lbl_80496694;
}

void fn_80058514(void) {
    fn_802D2FD0();
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

void fn_80059810(void) {
    fn_802D2430();
}

