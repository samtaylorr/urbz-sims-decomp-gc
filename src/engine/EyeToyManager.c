/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D0B3C(void);
s32 fn_8033909C(void) {
    return 0;
}

s32 fn_803390A4(void) {
    return 0;
}

s32 fn_803390C4(s32 arg0) {
    extern s32 lbl_80494F74;
    if (arg0 != -1) {
        fn_8033930C();
        lbl_80494F74 -= 1;
    }
    return 1;
}

void fn_8033915C(s32 arg0) {
    if (arg0 != -1) {
        fn_8033930C();
    }
}

void fn_80339184(s32 arg0) {
    if (arg0 != -1) {
        fn_8033930C();
    }
}

void fn_8033921C(s32 arg0) {
    if (arg0 != -1) {
        fn_8033930C();
    }
}

extern s32 lbl_80494F80;
s32 fn_80339258(void) {
    s32 temp_r3;

    temp_r3 = lbl_80494F80;
    lbl_80494F80 = 0;
    return temp_r3;
}

void fn_80339268(s32 arg0, s32 *arg1, s32 *arg2) {
    if (arg0 != -1) {
        fn_8033930C();
    }
    *arg1 = 0;
    *arg2 = 0;
}

void fn_803392AC(s32 arg0) {
    if (arg0 != -1) {
        fn_8033930C();
    }
}

s32 fn_8033930C(s32 arg0) {
    extern s32 lbl_80494F78;
    return lbl_80494F78 + arg0;
}

void fn_80339318(void) {

}

void fn_8033931C(void) {

}

void fn_80339320(void) {

}

void *fn_80339348(void *arg0) {
    M2C_UNK fn_802CA9A8();
    fn_802CA9A8();
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return arg0;
}

s32 fn_8033983C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

void fn_80339954(s32 arg0, s32 arg1) {
    extern s32 lbl_80494F8C;
    M2C_FIELD(((arg0 * 0x24) + lbl_80494F8C), s32 *, 4) = arg1;
}

extern s32 lbl_80494F88;
s32 fn_8033A73C(void) {
    return lbl_80494F88;
}

void fn_8033A744(void) {

}

void fn_8033BBCC(void) {
    fn_802D0B3C();
}

void fn_8033BC4C(s32 arg0) {
    void fn_80337AEC(void *, s32);
    extern u8 lbl_8045BBA0[];
    fn_80337AEC(lbl_8045BBA0, arg0);
}

void fn_8033740C(void);
void fn_8033BCE4(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_8033BD04(void) {
    fn_80337430();
}

void fn_8033BD24(void) {
    M2C_UNK fn_8033BC78(M2C_UNK, M2C_UNK);
    fn_8033BC78(1, 0xFFFF);
}

