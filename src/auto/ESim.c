/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8003A1D0(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8003A1F0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8003A230(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8003F8A0(void) {
    fn_8003F9E0();
}

void fn_8003F8E4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491C78[];
void *fn_8003F924(void) {
    return lbl_80491C78;
}

extern s32 lbl_80491C84[];
s32 fn_8003F930(void) {
    return lbl_80491C84[0];
}

extern s32 lbl_80491C88[];
s32 fn_8003F93C(void) {
    return lbl_80491C88[0];
}

extern u16 lbl_80491C8C[];
u16 fn_8003F948(void) {
    return lbl_80491C8C[0];
}

void *fn_8003F954(void) {
    return lbl_80491C78;
}

extern u16 lbl_80491C8E[];
u16 fn_8003F960(void) {
    return lbl_80491C8E[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8003F7F8(void);
extern void fn_8003F8C0(void);
extern u8 lbl_803C5AA0[];
extern u8 lbl_80491CA0[];
void fn_8003F96C(s32 arg0) {
    fn_802D6A90(lbl_80491C78, fn_8003F7F8, fn_8003F8A0, fn_8003F8C0, arg0, lbl_803C5AA0, lbl_80491CA0);
}

void fn_8003F9C0(void) {
    fn_802D2430();
}

