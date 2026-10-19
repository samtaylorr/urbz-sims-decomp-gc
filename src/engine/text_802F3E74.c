/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_802F3E74(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_802F3E94(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_802F3ED4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802E34F0(void *, void *);
void fn_802F4A8C(char *self, void *arg1) {
    fn_802E34F0(arg1, self + 0x44);
}

void fn_802F56A4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x124) = arg1;
}

s32 fn_802F56AC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x124);
}

void fn_802F58A8(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491C50[];
void *fn_802F58E8(void) {
    return lbl_80491C50;
}

extern s32 lbl_80491C5C[];
s32 fn_802F58F4(void) {
    return lbl_80491C5C[0];
}

extern s32 lbl_80491C60[];
s32 fn_802F5900(void) {
    return lbl_80491C60[0];
}

extern u16 lbl_80491C64[];
u16 fn_802F590C(void) {
    return lbl_80491C64[0];
}

void *fn_802F5918(void) {
    return lbl_80491C50;
}

extern u16 lbl_80491C66[];
u16 fn_802F5924(void) {
    return lbl_80491C66[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_802F5830(void);
extern void fn_802F5858(void);
extern void fn_802F5884(void);
extern u8 lbl_803F1140[];
extern u8 lbl_80493808[];
void fn_802F5930(s32 arg0) {
    fn_802D6A90(lbl_80491C50, fn_802F5830, fn_802F5858, fn_802F5884, arg0, lbl_803F1140, lbl_80493808);
}

void fn_802D2430(void);
void fn_802F5984(void) {
    fn_802D2430();
}

void *fn_802F5A50(u32 size, void *p);
void *fn_802F5A50(u32 size, void *p) {
    return p;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_802F5A58(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_802F5B14(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x120);
}

s32 fn_802F5B1C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x134);
}

s32 fn_802F5B24(s32 arg0) {
    return arg0 + 0x90;
}

s32 fn_802F5B2C(s32 arg0) {
    return arg0 + 0xD0;
}

