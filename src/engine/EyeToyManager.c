/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D0B3C(void);
s32 fn_8033909C(void) {
    return 0;
}

s32 fn_803390A4(void) {
    return 0;
}

extern s32 lbl_80494F80;
s32 fn_80339258(void) {
    s32 temp_r3;

    temp_r3 = lbl_80494F80;
    lbl_80494F80 = 0;
    return temp_r3;
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

void fn_8033740C(void);
void fn_8033BCE4(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_8033BD04(void) {
    fn_80337430();
}

