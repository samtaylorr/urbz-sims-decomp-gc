/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_804944B0;
void fn_800F68E0(void *);
void fn_80149998(void *self, void *arg) {
    fn_800F68E0(arg);
}

s32 fn_80149BDC(void) {
    return lbl_804944B0;
}

s16 fn_80149BE4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 4);
}

void fn_8014C3F4(void) {

}

void fn_8014FDD0(void) {

}

void fn_8014FDD4(void) {

}

s32 fn_8014FDD8(void) {
    return 1;
}

s32 fn_801506AC(void) {
    return 0;
}

s32 fn_801506B4(void) {
    return 0;
}

s32 fn_80151020(s32 arg0) {
    return arg0 + 4;
}

s32 fn_80151028(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6A0);
}

s32 fn_80151030(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6D4);
}

s32 fn_80151038(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6D0);
}

s32 fn_80151040(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6D8);
}

void fn_80151734(void) {

}

void fn_80152310(void) {

}

void fn_80154BB4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2048) = (s32) M2C_FIELD(arg0, s32 *, 0x2044);
}

s32 fn_80156444(void) {
    return 0;
}

void fn_8015644C(void) {

}

void fn_80156450(void) {

}

void fn_801566DC(void) {

}

void fn_801566E0(void) {

}

void fn_801566E4(void) {

}

void fn_801566E8(void) {

}

extern s32 lbl_8049665C;
s32 fn_801579E0(void) {
    return lbl_8049665C;
}

extern s32 lbl_80496648;
s32 fn_80157A38(void) {
    return lbl_80496648;
}

s32 fn_80157A60(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x205C) - M2C_FIELD(arg0, s32 *, 0x2058)) >> 2;
}

s32 fn_80157A84(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x206C) - M2C_FIELD(arg0, s32 *, 0x2068)) >> 2;
}

s32 fn_80157A98(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x2078) + (arg1 * 0x3C);
}

s32 fn_80157AA8(void *arg0) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x207C) - M2C_FIELD(arg0, s32 *, 0x2078)) * 0xEEEEEEEF) >> 2;
}

extern s32 lbl_80495BE0;
extern void fn_800F1A60(s32, s32);
void fn_80157AEC(void) {
    fn_800F1A60((s32)&lbl_80495BE0, 2);
}

void fn_80157F24(void) {

}

void fn_80157FDC(s32 *arg0) {
    M2C_UNK fn_801A1E50(s32);
    fn_801A1E50(*arg0);
}

extern s32 lbl_80495BE8;
void fn_8015A3FC(void) {
    fn_800F1A60((s32)&lbl_80495BE8, 2);
}

extern s32 lbl_80495BF0;
void fn_8015A424(void) {
    fn_800F1A60((s32)&lbl_80495BF0, 2);
}

extern s32 lbl_80495BF8;
void fn_8015A44C(void) {
    fn_800F1A60((s32)&lbl_80495BF8, 2);
}

extern s32 lbl_80495C00;
void fn_8015A474(void) {
    fn_800F1A60((s32)&lbl_80495C00, 2);
}

extern s32 lbl_80495C08;
void fn_8015A49C(void) {
    fn_800F1A60((s32)&lbl_80495C08, 2);
}

extern s32 lbl_80495C10;
void fn_8015A4C4(void) {
    fn_800F1A60((s32)&lbl_80495C10, 2);
}

extern s32 lbl_80495C18;
void fn_8015A4EC(void) {
    fn_800F1A60((s32)&lbl_80495C18, 2);
}

extern s32 lbl_80495C20;
void fn_8015A514(void) {
    fn_800F1A60((s32)&lbl_80495C20, 2);
}

extern s32 lbl_80495C28;
void fn_8015A53C(void) {
    fn_800F1A60((s32)&lbl_80495C28, 2);
}

extern s32 lbl_80495C30;
void fn_8015A564(void) {
    fn_800F1A60((s32)&lbl_80495C30, 2);
}

void fn_801690B0(void) {

}

extern u8 lbl_803D9C80[];
void *fn_8016A870(void) {
    return lbl_803D9C80;
}

