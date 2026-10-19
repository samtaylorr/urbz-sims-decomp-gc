/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80495C94;
extern void fn_800F1A60(s32, s32);
void fn_80176558(void) {
    fn_800F1A60((s32)&lbl_80495C94, 2);
}

M2C_UNK *fn_80177154(void) {
    extern M2C_UNK lbl_80495CA0;
    return &lbl_80495CA0;
}

s32 fn_80181314(void) {
    return 0x50455253;
}

s32 fn_80181A20(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5FC) ^ 1;
}

void fn_80182220(void) {

}

s32 fn_80183B60(void **arg0) {
    return ((u32) M2C_FIELD(*arg0, u32 *, 0x84) >> 1U) & 1;
}

void fn_80185868(void) {

}

void fn_8018586C(void) {

}

void fn_80185870(void) {

}

s32 fn_80185874(void) {
    return 0;
}

void fn_8018587C(void) {

}

void fn_80185880(void) {

}

void fn_80185884(void) {

}

void fn_80185DA8(void ***arg0, s32 arg1) {
    M2C_FIELD(**arg0, s32 *, 4) = arg1;
}

void fn_80185DB8(void) {

}

void fn_80185E00(void) {

}

void fn_80185E04(void) {

}

u8 *fn_80185E9C(u8 *self) {
    return self + 8;
}

s16 fn_80185EA4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 8);
}

s32 fn_80185F00(s32 arg0) {
    return arg0 + 0x4C0;
}

s32 fn_80185F08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4BC);
}

u16 fn_80185F10(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x4E4);
}

s32 fn_80185FDC(void **arg0) {
    return M2C_FIELD(M2C_FIELD(*arg0, void **, 0x8C), s32 *, 0x8C);
}

s32 fn_80185FFC(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x90) & 1;
}

s32 fn_80186008(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x9C) & 1;
}

s32 fn_80186014(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x9C) >> 1U) & 1;
}

s16 fn_80186020(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x9C);
}

s32 fn_80186028(s32 arg0) {
    return arg0 + 0xA8;
}

s32 fn_80186030(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4D0);
}

s32 fn_80186038(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4F8);
}

s32 fn_80186040(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4FC);
}

void fn_80186048(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4FC) = arg1;
}

s32 fn_80186050(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x500);
}

void fn_80186058(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x500) = arg1;
}

s32 fn_80186060(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x508);
}

s32 fn_80186068(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x504);
}

s32 fn_80186070(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x50C);
}

s32 fn_80186078(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x510);
}

void fn_801860A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x5F8) = arg1;
}

s32 fn_801860A8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x600);
}

void fn_801860B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x600) = arg1;
}

s32 fn_801860B8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x604);
}

void fn_801860C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x604) = arg1;
}

void fn_801860C8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x604) = 0;
}

