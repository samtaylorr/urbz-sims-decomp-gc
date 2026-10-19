/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_80320408(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80320428(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80320468(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80323DB4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_804938D0[];
void *fn_80323DF4(void) {
    return lbl_804938D0;
}

extern s32 lbl_804938DC[];
s32 fn_80323E00(void) {
    return lbl_804938DC[0];
}

extern s32 lbl_804938E0[];
s32 fn_80323E0C(void) {
    return lbl_804938E0[0];
}

extern u16 lbl_804938E4[];
u16 fn_80323E18(void) {
    return lbl_804938E4[0];
}

void *fn_80323E24(void) {
    return lbl_804938D0;
}

extern u16 lbl_804938E6[];
u16 fn_80323E30(void) {
    return lbl_804938E6[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80323D3C(void);
extern void fn_80323D64(void);
extern void fn_80323D90(void);
extern u8 lbl_803F2F74[];
extern u8 lbl_80493858[];
void fn_80323E3C(s32 arg0) {
    fn_802D6A90(lbl_804938D0, fn_80323D3C, fn_80323D64, fn_80323D90, arg0, lbl_803F2F74, lbl_80493858);
}

void fn_802D2430(void);
void fn_80323E90(void) {
    fn_802D2430();
}

void *fn_80323F5C(u32 size, void *p);
void *fn_80323F5C(u32 size, void *p) {
    return p;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80323F64(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

f32 fn_80323F98(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x58);
}

s32 fn_803240A0(s32 arg0) {
    return arg0 + 0x64;
}

