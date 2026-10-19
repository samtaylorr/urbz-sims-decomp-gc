/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8000C8E0(void) {
    M2C_UNK fn_8010C96C(s32, M2C_UNK);
    M2C_UNK fn_8010CD4C(s32);
    extern s32 lbl_80496644;
    fn_8010C96C(lbl_80496644, 1);
    fn_8010CD4C(lbl_80496644);
}

void fn_8000CA20(s32 arg0, s32 arg1) {
    extern s32 lbl_8049664C;
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        lbl_8049664C = 1;
    }
}

void fn_8000CA44(void) {
    fn_8000CA20(1, 0xFFFF);
}

void fn_8000CA70(void) {
    fn_8000CA20(0, 0xFFFF);
}

