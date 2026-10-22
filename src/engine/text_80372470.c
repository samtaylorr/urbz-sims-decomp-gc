/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_80372470(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80372490(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_803724D0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80372554(void *arg0, s32 arg1) {
    extern void fn_803C07E0(void *, s32);
    extern void fn_8031E910(void *, s32);
    extern void *fn_802D0AB8();
    extern void fn_802D1A00(void *, void *);
    extern u8 lbl_8041E068[];

    *(u8 **)arg0 = lbl_8041E068;
    fn_803C07E0((u8 *)arg0 + 0x20, 2);
    fn_8031E910(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

extern void fn_8031E988(void *, void *);
extern void fn_803C0820(void *, void *);
void fn_803725B8(void *arg0, void *arg1) {
    fn_8031E988(arg0, arg1);
    fn_803C0820(arg1, (u8 *)arg0 + 0x20);
}

void fn_80372640(void **arg0, char *arg1) {
    extern void fn_80364C90(void *);
    extern void fn_80364CB0(void *, s32);
    extern void fn_80364EAC(void *, void *, s32, s32, s32);
    char buf[0x28];
    char *vt;

    fn_80364C90(buf);
    vt = *(char **)(arg1 + 0x28);
    fn_80364EAC(buf, arg1, 0, (*(s32 (**)(void *))(vt + 0x34))(arg1 + *(s16 *)(vt + 0x30)), 0);
    vt = (char *)*arg0;
    (*(void (**)(void *, void *))(vt + 0x3C))((char *)arg0 + *(s16 *)(vt + 0x38), buf);
    fn_80364CB0(buf, 2);
}

void fn_803726CC(s32 arg0, s32 arg1) {
    extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
    extern void fn_8037273C(void);
    extern void fn_803727BC(void);
    extern void fn_803727DC(void *);
    extern u8 lbl_803F5658[];
    extern u8 lbl_80493858[];
    extern u8 lbl_80493E94[];
    extern s32 lbl_80496318;

    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_80496318 = fn_802D6A90(lbl_80493E94, fn_8037273C, fn_803727BC, fn_803727DC, 0, lbl_803F5658, lbl_80493858);
    }
}

void fn_80372510(void);
void fn_803727BC(void) {
    fn_80372510();
}

void fn_803727DC(void *self) {
    void fn_80372554(void *, s32);
    fn_80372554(self, 2);
}

void fn_80372800(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493E94[];
void *fn_80372840(void) {
    return lbl_80493E94;
}

extern s32 lbl_80493EA0[];
s32 fn_8037284C(void) {
    return lbl_80493EA0[0];
}

extern s32 lbl_80493EA4[];
s32 fn_80372858(void) {
    return lbl_80493EA4[0];
}

extern u16 lbl_80493EA8[];
u16 fn_80372864(void) {
    return lbl_80493EA8[0];
}

void *fn_80372870(void) {
    return lbl_80493E94;
}

extern u16 lbl_80493EAA[];
u16 fn_8037287C(void) {
    return lbl_80493EAA[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8037273C(void);
extern void fn_803727DC(void *);
extern u8 lbl_803F5658[];
extern u8 lbl_80493858[];
void fn_80372888(s32 arg0) {
    fn_802D6A90(lbl_80493E94, fn_8037273C, fn_803727BC, fn_803727DC, arg0, lbl_803F5658, lbl_80493858);
}

void fn_802D2430(void);
void fn_803728DC(void) {
    fn_802D2430();
}

void fn_803728FC(void) {
    void fn_803726CC(s32, s32);
    fn_803726CC(1, 0xFFFF);
}

