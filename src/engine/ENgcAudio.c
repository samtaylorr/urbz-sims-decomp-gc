/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041C298[];
extern void fn_802D20E8(void *);
void fn_8033BD7C(void **self, s32 flags) {
    *self = lbl_8041C298;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8033BFF8(void) {

}

s32 fn_8033C4E4(void) {
    return 0;
}

s32 fn_8033C4EC(void) {
    return 0;
}

f32 fn_8033CA64(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 4);
}

f32 fn_8033CB30(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 8);
}

void fn_8033CB94(void) {
    M2C_UNK fn_8035DFE0(s32);
    M2C_UNK fn_8035F938(s32);
    M2C_UNK fn_80385FA8();
    extern s32 lbl_80494F98;
    extern s32 lbl_80494FA8;
    extern s32 lbl_80494FAC;
    if ((s32) lbl_80494F98 != 0) {
        fn_80385FA8();
        fn_8035F938(lbl_80494FA8);
        fn_8035DFE0(lbl_80494FAC);
    }
}

void *fn_8033CBD0(void) {
    void *fn_802D1FC8(M2C_UNK);
    M2C_UNK fn_803BE5CC();
    void *temp_r3;

    temp_r3 = fn_802D1FC8(0x20);
    M2C_FIELD(temp_r3, s32 *, 8) = -1;
    fn_803BE5CC();
    return temp_r3;
}

s32 fn_8033D104(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

void fn_8033D10C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}

void **fn_8033D168(void **self) {
    *self = lbl_8041C298;
    return self;
}

void fn_8033D214(void) {

}

void fn_8033D218(void) {

}

void fn_8033D21C(void) {

}

void fn_8033D220(void) {
    M2C_UNK fn_8033D114(M2C_UNK, M2C_UNK);
    fn_8033D114(1, 0xFFFF);
}

extern u8 lbl_8045BC60[];
M2C_UNK fn_8033BDB0(void *);
M2C_UNK fn_8033BE20(void *, s32);
void fn_8033D24C(void) {
    M2C_UNK fn_8033D114(s32, s32);
    fn_8033D114(0, 0xFFFF);
}

