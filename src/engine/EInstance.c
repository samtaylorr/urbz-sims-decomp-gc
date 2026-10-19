/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_802F041C(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_802F043C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_802F047C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern s32 lbl_80494E5C;
s32 fn_802F150C(void) {
    return lbl_80494E5C;
}

void fn_802F04BC(void);
void fn_802F162C(void) {
    fn_802F04BC();
}

void fn_802F1670(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491E1C[];
void *fn_802F16B0(void) {
    return lbl_80491E1C;
}

extern s32 lbl_80491E28[];
s32 fn_802F16BC(void) {
    return lbl_80491E28[0];
}

extern s32 lbl_80491E2C[];
s32 fn_802F16C8(void) {
    return lbl_80491E2C[0];
}

extern u16 lbl_80491E30[];
u16 fn_802F16D4(void) {
    return lbl_80491E30[0];
}

void *fn_802F16E0(void) {
    return lbl_80491E1C;
}

extern u16 lbl_80491E32[];
u16 fn_802F16EC(void) {
    return lbl_80491E32[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_802F1604(void);
extern void fn_802F164C(void);
extern u8 lbl_803F0DE4[];
extern u8 lbl_804936F0[];
void fn_802F16F8(s32 arg0) {
    fn_802D6A90(lbl_80491E1C, fn_802F1604, fn_802F162C, fn_802F164C, arg0, lbl_803F0DE4, lbl_804936F0);
}

void fn_802D2430(void);
void fn_802F174C(void) {
    fn_802D2430();
}

void fn_802F176C(void) {

}

void fn_802F1770(void) {

}

void fn_802F1774(void) {

}

void fn_802F1778(void) {

}

s32 fn_802F177C(void) {
    return 1;
}

void fn_802F1784(void) {

}

void fn_802F1788(void) {

}

void fn_802F178C(void) {

}

void fn_802F1790(void) {

}

void fn_802F1794(void) {

}

s32 fn_802F17AC(s32 *self) {
    return self[2];
}

void fn_802F1920(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

s32 fn_802F1928(s32 *self) {
    return self[6];
}

s32 fn_802F193C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 fn_802F1944(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802F194C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 fn_802F1954(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

void fn_802F19D4(void) {

}

s32 fn_802F19D8(void) {
    return 0;
}

s32 fn_802F19E0(s32 *self) {
    return self[1];
}

void fn_802F19E8(void) {

}

s32 fn_802F19EC(void) {
    return 0;
}

s32 fn_802F19F4(void) {
    return 0;
}

void fn_802C876C(void *);
void fn_802F1A2C(void *self, void *arg) {
    fn_802C876C(arg);
}

s32 fn_802F1A50(void) {
    return 0;
}

void fn_802F1A58(void) {

}

s32 fn_802F1A5C(void) {
    return 0;
}

void fn_802F1A64(void) {

}

void fn_802F1A68(void) {

}

void fn_802F1A6C(void) {

}

s32 fn_802F1A88(s32 *self) {
    return self[7];
}

s32 fn_802F1A90(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

