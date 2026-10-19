/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_8032417C(void) {
    fn_802D2FD0();
}

void fn_8032421C(void);
void fn_80329080(void) {
    fn_8032421C();
}

void fn_803290C4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_804938F8[];
void *fn_80329104(void) {
    return lbl_804938F8;
}

extern s32 lbl_80493904[];
s32 fn_80329110(void) {
    return lbl_80493904[0];
}

extern s32 lbl_80493908[];
s32 fn_8032911C(void) {
    return lbl_80493908[0];
}

extern u16 lbl_8049390C[];
u16 fn_80329128(void) {
    return lbl_8049390C[0];
}

void *fn_80329134(void) {
    return lbl_804938F8;
}

extern u16 lbl_8049390E[];
u16 fn_80329140(void) {
    return lbl_8049390E[0];
}

void fn_802D2430(void);
void fn_803291A0(void) {
    fn_802D2430();
}

extern s32 lbl_80494F38;
s32 fn_80329200(void) {
    return lbl_80494F38;
}

