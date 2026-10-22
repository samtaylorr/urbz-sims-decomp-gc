/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80495004;
void fn_8033E768(void) {
    extern s32 lbl_80495040;
    lbl_80495040 = 1;
}

extern u8 lbl_8041C570[];
void fn_8033E7C4(void **self) {
    M2C_UNK fn_802E0CA0(void **);
    *self = lbl_8041C570;
    fn_802E0CA0(self);
}

void fn_8033E7F4(void *arg0) {
    M2C_UNK fn_802E0D34();
    M2C_FIELD(arg0, s32 *, 8) = 0;
    fn_802E0D34();
}

void fn_8033EA4C(void) {

}

void fn_8033EA90(void) {
    M2C_UNK fn_8033EB00();
    extern s32 lbl_80494FF8;
    lbl_80494FF8 = 1;
    fn_8033EB00();
}

void fn_8033EAB8(void) {

}

void fn_8033EABC(void) {

}

void fn_8033EAC0(void) {
    M2C_UNK fn_80256608(void (*)());
    s32 fn_8025667C();
    extern s32 lbl_80494FFC;
    if (fn_8025667C() != 0) {
        lbl_80494FFC = 1;
        return;
    }
    fn_80256608(fn_8033EAC0);
}

s32 fn_8033EC8C(void) {
    return lbl_80495004;
}

void fn_8033F2B8(s32 arg0, s32 arg1, s32 arg2) {
    extern s32 lbl_80495024;
    extern s32 lbl_80495028;
    extern s32 lbl_8049502C;
    lbl_80495024 = arg0;
    lbl_80495028 = arg1;
    lbl_8049502C = arg2;
}

extern u8 lbl_8045D260[];
extern u32 lbl_80496284;
void fn_8033E774(void *);
char *fn_8037A798(char *, s32 *);
void fn_8033F94C(s32, s32);
void fn_8033F9C0(void) {
    fn_8033F94C(1, 0xFFFF);
}

void fn_8033F9EC(void) {
    fn_8033F94C(0, 0xFFFF);
}

