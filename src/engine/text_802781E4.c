/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802A1E68(void);
void fn_80278618(void) {
    fn_802A1E68();
}

void fn_80278950(void) {
    M2C_UNK fn_802A2990(s32);
    extern s32 lbl_804960E8;
    fn_802A2990(lbl_804960E8);
}

s32 fn_80278974(void) {
    return 1;
}

void fn_80279B04(void);
void fn_80279D50(void) {
    fn_80279B04();
}

void fn_80279D00(void);
void fn_80279D70(void) {
    fn_80279D00();
}

void fn_8027A650(s32 arg0) {
    extern s32 lbl_80494B40;
    extern s32 lbl_804960E4;
    lbl_80494B40 = arg0;
    lbl_804960E4 = 0;
}

extern s32 lbl_80496100;
void fn_8027A680(void (*cb)(void)) {
    lbl_80496100 = cb;
}

f32 fn_8027A688(void) {
    f64 fn_80246DDC();
    return (f32) fn_80246DDC();
}

void fn_8027A79C(s32 arg0) {
    extern s32 lbl_80494B58;
    if (arg0 != 0) {
        lbl_80494B58 = arg0;
    }
}

extern s32 lbl_80494B4C;
void fn_8027A894(void (*cb)(void)) {
    lbl_80494B4C = cb;
}

void fn_8027A89C(void) {
    extern s32 lbl_80494B44;
    lbl_80494B44 = 1;
}

