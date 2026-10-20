/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80247D48(void);
void fn_80242320(s32 arg0) {
    fn_802422DC();
    *(s32 *)0xCC006008 = 0x12000000;
    *(s32 *)0xCC00600C = 0;
    *(s32 *)0xCC006010 = 0x20;
    *(s32 *)0xCC006018 = 0x20;
    *(s32 *)0xCC006014 = arg0;
    *(s32 *)0xCC00601C = 3;
    fn_802422FC();
}

void fn_802423A8(void) {
    M2C_UNK fn_802422DC();
    M2C_UNK fn_802422FC();
    fn_802422DC();
    *(s32 *)0xCC006008 = 0;
    *(s32 *)0xCC00601C = 1;
    fn_802422FC();
}

void fn_80245AB8(s32 arg0) {
    M2C_UNK fn_80245A30(s32, s32);
    extern s32 lbl_80494988;
    fn_80245A30(lbl_80494988, arg0);
}

s32 fn_80245C8C(void) {
    return 0;
}

s32 fn_80247C34(void) {
    extern s32 lbl_80494988;
    s32 *p = (s32 *)(lbl_80494988 + 0x58);
    *p = *p * 0x41C64E6D + 0x3039;
    return *p & 0x7FFFFFFF;
}

void fn_80247C58(void) {
    extern char lbl_803EBB7C[];
    s32 fn_802530CC();
    fn_802530CC(0, 0, lbl_803EBB7C, (char *)__builtin_return_address(0) - 4);
}

void fn_80248078(void) {
    fn_80247D48();
}

void fn_8024928C(void *arg0) {
    M2C_UNK fn_802492BC(s16, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_802492BC(M2C_FIELD(arg0, s16 *, 0xE), 0, 0, 2);
}

extern s32 lbl_80494988;
s32 fn_8024BEAC(void) {
    return lbl_80494988;
}

extern u8 lbl_803EBED4[];
void *fn_8024C068(void) {
    return lbl_803EBED4;
}

void fn_8024C074(s32 arg0, s32 arg1) {
    M2C_UNK fn_8024BEB4(s32, s32, s32);
    fn_8024BEB4(lbl_80494988, arg0, arg1);
}

void fn_8024D324(void);
void fn_8024CE64(void) {
    fn_8024D324();
}

void fn_8024D754(s32 arg0, s32 arg1) {
    M2C_UNK fn_8024D668(s32, s32, s32);
    fn_8024D668(lbl_80494988, arg0, arg1);
}

void fn_8024D7AC(void) {
    M2C_UNK fn_8024D784(s32);
    extern s32 lbl_80494988;
    fn_8024D784(lbl_80494988);
}

void fn_8024DE44(void *arg0) {
    M2C_UNK fn_8024DE6C(s32, s16);
    fn_8024DE6C(M2C_FIELD(arg0, s32 *, 0x5C), M2C_FIELD(arg0, s16 *, 0xE));
}

void fn_8024DE6C(s32 *arg0, s32 arg1) {
    s32 fn_80375D28(s32);
    extern s32 lbl_804966F8;
    lbl_804966F8 = 0;
    if ((fn_80375D28(arg1) == -1) && ((s32) lbl_804966F8 != 0)) {
        *arg0 = lbl_804966F8;
    }
}

void fn_8024F99C(void);
void fn_8024EF20(void) {
    fn_8024F99C();
}

void fn_8024F8BC(void) {
    extern char lbl_803EC0BC[];
    s32 fn_802530CC();
    fn_802530CC(0, 0, lbl_803EC0BC);
}

void fn_8024F8F0(void) {
    extern char lbl_803EC110[];
    s32 fn_802530CC();
    fn_802530CC(0, 0, lbl_803EC110);
}

void fn_8024F924(void) {
    extern char lbl_803EC168[];
    s32 fn_802530CC();
    fn_802530CC(0, 0, lbl_803EC168);
}

void fn_8024F958(void) {
    extern char lbl_803EC1C0[];
    s32 fn_802530CC();
    fn_802530CC(0, 0, lbl_803EC1C0);
}

void fn_8024F98C(void) {
    void fn_80246D2C(void) __attribute__((noreturn));
    fn_80246D2C();
}

void fn_8024F99C(void) {
    extern void (*lbl_803F7AD0[])(void);
    lbl_803F7AD0[0]();
}

s32 fn_8024F9C8(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_802486DC(s32, s32);
    if (fn_802486DC(arg0, arg1) == 0) {
        return arg2;
    }
    return 0;
}

void fn_8024FA04(void) {

}

