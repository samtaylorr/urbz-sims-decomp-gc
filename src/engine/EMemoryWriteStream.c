/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void *fn_80374058(void *arg0) {
    void fn_803C0C20(void *);
    extern u8 lbl_8041E178[];
    M2C_FIELD(arg0, void **, 0xAC) = lbl_8041E178;
    fn_803C0C20((char *)arg0 + 0x94);
    fn_803C0C20((char *)arg0 + 0xA0);
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    return arg0;
}

s32 fn_80374B94(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
    return (arg1 * temp_r0 * M2C_FIELD(arg0, s32 *, 0x88)) + (arg2 * temp_r0) + arg3;
}

void fn_80375760(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
}

void fn_80375768(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
}

void fn_80375770(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
}

void fn_80375778(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x8C) = arg1;
}

void fn_80375780(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
    M2C_FIELD(arg0, s32 *, 0x88) = arg2;
    M2C_FIELD(arg0, s32 *, 0x8C) = arg3;
}

void fn_80375790(void *arg0, s32 arg1) {
    extern void fn_8039A334(void *, s32, s32);
    M2C_FIELD(arg0, s32 *, 0x90) = arg1;
    fn_8039A334((u8 *)arg0 + 0x94, arg1, 0);
}

void fn_803757C4(void) {

}

s32 fn_803757C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

s32 fn_803757D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_803757D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

s32 fn_803757E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

void fn_803757E8(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x84);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x88);
    *arg3 = M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_80375804(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84) * M2C_FIELD(arg0, s32 *, 0x88) * M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_8037581C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x8C);
    return (arg1 * (M2C_FIELD(arg0, s32 *, 0x88) * temp_r9)) + (arg2 * temp_r9) + arg3;
}

s32 fn_8037583C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

void *fn_80375844(void *arg0, void *arg1, s32 arg2) {
    extern void fn_8039A4B8(void *, void *);
    fn_8039A4B8(arg0, (u8 *)M2C_FIELD(arg1, void **, 0x94) + arg2 * 0xC);
    return arg0;
}

void fn_80375880(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_803758A0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_803758E0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80375BC0(s32 arg0, s32 arg1) {
    extern s32 lbl_80496324;
    extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
    extern void *fn_803C0CDC(void);
    extern void fn_803C0D04(void *self);
    extern void fn_803C0D24(void *self);
    extern u8 lbl_803F573C[];
    extern u8 lbl_804936F0[];
    extern u8 lbl_80493DF4[];
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_80496324 = fn_802D6A90(lbl_80493DF4, fn_803C0CDC, fn_803C0D04, fn_803C0D24, 0, lbl_803F573C, lbl_804936F0);
    }
}

void fn_80375C30(void) {
    void fn_80375BC0(s32, s32);
    fn_80375BC0(1, 0xFFFF);
}

