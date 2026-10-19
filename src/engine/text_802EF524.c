/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_802EF524(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_802EF544(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_802EF584(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_802EF944(void) {
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0xCC);
    fn_802EF5C4();
}

void fn_802EF5C4(void);
void fn_802EF96C(void) {
    fn_802EF5C4();
}

void fn_802EF9B0(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493768[];
void *fn_802EF9F0(void) {
    return lbl_80493768;
}

extern s32 lbl_80493774[];
s32 fn_802EF9FC(void) {
    return lbl_80493774[0];
}

extern s32 lbl_80493778[];
s32 fn_802EFA08(void) {
    return lbl_80493778[0];
}

extern u16 lbl_8049377C[];
u16 fn_802EFA14(void) {
    return lbl_8049377C[0];
}

void *fn_802EFA20(void) {
    return lbl_80493768;
}

extern u16 lbl_8049377E[];
u16 fn_802EFA2C(void) {
    return lbl_8049377E[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_802EF944(void);
extern void fn_802EF98C(void);
extern u8 lbl_803F0D18[];
extern u8 lbl_80493740[];
void fn_802EFA38(s32 arg0) {
    fn_802D6A90(lbl_80493768, fn_802EF944, fn_802EF96C, fn_802EF98C, arg0, lbl_803F0D18, lbl_80493740);
}

void fn_802D2430(void);
void fn_802EFA8C(void) {
    fn_802D2430();
}

s32 fn_802EFAAC(void) {
    return 2;
}

s32 fn_802EFAD4(s32 arg0) {
    return arg0 + 0xC0;
}

