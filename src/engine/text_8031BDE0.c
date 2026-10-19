/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_8031BE00(void) {
    fn_802D2FD0();
}

void fn_8031BEA0(void);
void fn_8031C5E0(void) {
    fn_8031BEA0();
}

void fn_8031C624(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493880[];
void *fn_8031C664(void) {
    return lbl_80493880;
}

extern s32 lbl_8049388C[];
s32 fn_8031C670(void) {
    return lbl_8049388C[0];
}

extern s32 lbl_80493890[];
s32 fn_8031C67C(void) {
    return lbl_80493890[0];
}

extern u16 lbl_80493894[];
u16 fn_8031C688(void) {
    return lbl_80493894[0];
}

void *fn_8031C694(void) {
    return lbl_80493880;
}

extern u16 lbl_80493896[];
u16 fn_8031C6A0(void) {
    return lbl_80493896[0];
}

void fn_802D2430(void);
void fn_8031C700(void) {
    fn_802D2430();
}

