/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_80329264(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80329284(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_803292C4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80329838(void) {

}

s32 fn_8032A6F8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x140);
}

s32 fn_8032A700(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14C);
}

s32 fn_8032A708(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x158);
}

void fn_8032B9E4(void) {

}

s32 fn_8032C194(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x134);
}

void fn_8032CD5C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493948[];
void *fn_8032CD9C(void) {
    return lbl_80493948;
}

extern s32 lbl_80493954[];
s32 fn_8032CDA8(void) {
    return lbl_80493954[0];
}

extern s32 lbl_80493958[];
s32 fn_8032CDB4(void) {
    return lbl_80493958[0];
}

extern u16 lbl_8049395C[];
u16 fn_8032CDC0(void) {
    return lbl_8049395C[0];
}

void *fn_8032CDCC(void) {
    return lbl_80493948;
}

extern u16 lbl_8049395E[];
u16 fn_8032CDD8(void) {
    return lbl_8049395E[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8032CCE4(void);
extern void fn_8032CD0C(void);
extern void fn_8032CD38(void);
extern u8 lbl_803F331C[];
extern u8 lbl_80493858[];
void fn_8032CDE4(s32 arg0) {
    fn_802D6A90(lbl_80493948, fn_8032CCE4, fn_8032CD0C, fn_8032CD38, arg0, lbl_803F331C, lbl_80493858);
}

void fn_802D2430(void);
void fn_8032CE38(void) {
    fn_802D2430();
}

void *fn_8032CE88(u32 size, void *p);
void *fn_8032CE88(u32 size, void *p) {
    return p;
}

s32 fn_8032CEF0(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x13C) + (arg1 * 0xB0);
}

s32 fn_8032CF00(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x148) + (arg1 * 0x58);
}

s32 fn_8032CF10(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x154) + (arg1 * 0x58);
}

s32 fn_8032CF20(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

s32 fn_8032CF28(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

s32 fn_8032CF30(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_8032CF38(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

s32 fn_8032CF40(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

s32 fn_8032CF48(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_8032CF50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

s32 fn_8032CF58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x98);
}

s32 fn_8032CF60(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x94);
}

u8 fn_8032CF68(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x160);
}

void fn_8032CF70(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x161) = -1;
}

s32 fn_8032CF7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x164);
}

s32 fn_8032CF84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x16C);
}

s32 fn_8032CF8C(s32 arg0) {
    return arg0 + 0x170;
}

