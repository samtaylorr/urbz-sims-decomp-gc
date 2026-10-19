/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_8036D7C8(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8036D7E8(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8036D828(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8036DBA8(void);
void fn_8036D960(void) {
    fn_8036DBA8();
}

extern void fn_802E34F0(void *, void *);
void fn_8036DF8C(char *self, void *arg1) {
    fn_802E34F0(arg1, self + 0x44);
}

void fn_8036EAC8(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493D04[];
void *fn_8036EB08(void) {
    return lbl_80493D04;
}

extern s32 lbl_80493D10[];
s32 fn_8036EB14(void) {
    return lbl_80493D10[0];
}

extern s32 lbl_80493D14[];
s32 fn_8036EB20(void) {
    return lbl_80493D14[0];
}

extern u16 lbl_80493D18[];
u16 fn_8036EB2C(void) {
    return lbl_80493D18[0];
}

void *fn_8036EB38(void) {
    return lbl_80493D04;
}

extern u16 lbl_80493D1A[];
u16 fn_8036EB44(void) {
    return lbl_80493D1A[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8036EA50(void);
extern void fn_8036EA78(void);
extern void fn_8036EAA4(void);
extern u8 lbl_803F52F0[];
extern u8 lbl_80491E1C[];
void fn_8036EB50(s32 arg0) {
    fn_802D6A90(lbl_80493D04, fn_8036EA50, fn_8036EA78, fn_8036EAA4, arg0, lbl_803F52F0, lbl_80491E1C);
}

void fn_802D2430(void);
void fn_8036EBA4(void) {
    fn_802D2430();
}

void *fn_8036EC70(u32 size, void *p);
void *fn_8036EC70(u32 size, void *p) {
    return p;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8036EC78(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

