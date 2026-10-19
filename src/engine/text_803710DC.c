/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_803710DC(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_803710FC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8037113C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8037117C(void);
void fn_80371484(void) {
    fn_8037117C();
}

void fn_803714C8(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493E1C[];
void *fn_80371508(void) {
    return lbl_80493E1C;
}

extern s32 lbl_80493E28[];
s32 fn_80371514(void) {
    return lbl_80493E28[0];
}

extern s32 lbl_80493E2C[];
s32 fn_80371520(void) {
    return lbl_80493E2C[0];
}

extern u16 lbl_80493E30[];
u16 fn_8037152C(void) {
    return lbl_80493E30[0];
}

void *fn_80371538(void) {
    return lbl_80493E1C;
}

extern u16 lbl_80493E32[];
u16 fn_80371544(void) {
    return lbl_80493E32[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80371404(void);
extern void fn_803714A4(void);
extern u8 lbl_803F5530[];
extern u8 lbl_80493858[];
void fn_80371550(s32 arg0) {
    fn_802D6A90(lbl_80493E1C, fn_80371404, fn_80371484, fn_803714A4, arg0, lbl_803F5530, lbl_80493858);
}

void fn_802D2430(void);
void fn_803715A4(void) {
    fn_802D2430();
}

s32 fn_803715C4(u8 *self) {
    return *(s32 *)(self + 0x20);
}

