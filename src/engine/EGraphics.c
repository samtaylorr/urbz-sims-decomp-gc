/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_802ED900(void) {

}

void fn_802EDB28(void) {

}

void fn_802EDB2C(void) {

}

void fn_802EEE68(void) {

}

void fn_802EEE6C(void) {

}

s32 fn_802EEE70(void) {
    return 0;
}

s32 fn_802EEE78(void) {
    return 0;
}

s32 fn_802EEE80(void) {
    return 1;
}

s32 fn_802EEE88(void) {
    return 1;
}

s32 fn_802EEE90(void) {
    return 1;
}

s32 fn_802EEE98(void) {
    return 1;
}

s32 fn_802EEEA0(void) {
    return -1;
}

s32 fn_802EEEA8(void) {
    return 1;
}

s32 fn_802EEEC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x98);
}

void fn_802EEED0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x98) = arg1;
}

s32 fn_802EEEE4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_802EEEEC(s32 *self) {
    return self[6];
}

s32 fn_802EEF74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_802EEF7C(s32 *self) {
    return self[6];
}

void fn_802EEF84(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

void fn_802EEF8C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}

s32 fn_802EEF94(s32 *self) {
    return self[7];
}

s32 fn_802EEF9C(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802EEFA4(void) {
    return 0x400;
}

void fn_802EEFBC(void) {

}

void fn_802EEFC0(void) {

}

void fn_802EEFC4(void) {

}

void fn_802EEFC8(void) {

}

s32 fn_802EEFEC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x31C);
}

s32 fn_802EEFFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x320);
}

s32 fn_802EF004(void) {
    return 1;
}

void fn_802EF00C(void) {

}

void fn_802EF010(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_802EF030(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_802EF070(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_802EF3F4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493718[];
void *fn_802EF434(void) {
    return lbl_80493718;
}

extern s32 lbl_80493724[];
s32 fn_802EF440(void) {
    return lbl_80493724[0];
}

extern s32 lbl_80493728[];
s32 fn_802EF44C(void) {
    return lbl_80493728[0];
}

extern u16 lbl_8049372C[];
u16 fn_802EF458(void) {
    return lbl_8049372C[0];
}

void *fn_802EF464(void) {
    return lbl_80493718;
}

extern u16 lbl_8049372E[];
u16 fn_802EF470(void) {
    return lbl_8049372E[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_802EF354(void);
extern void fn_802EF398(void);
extern void fn_802EF3D0(void);
extern u8 lbl_803F0CD8[];
extern u8 lbl_80493740[];
void fn_802EF47C(s32 arg0) {
    fn_802D6A90(lbl_80493718, fn_802EF354, fn_802EF398, fn_802EF3D0, arg0, lbl_803F0CD8, lbl_80493740);
}

void fn_802D2430(void);
void fn_802EF4D0(void) {
    fn_802D2430();
}

s32 fn_802EF4F0(void) {
    return 1;
}

