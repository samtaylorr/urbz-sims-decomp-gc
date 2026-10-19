/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D0C44(void);
void fn_80373A18(void) {
    fn_802D0C44();
}

extern s32 lbl_80495250;
void fn_80373AE8(void) {
    if (lbl_80495250 != 0) {
        lbl_80495250 = 0;
    }
}

void fn_80373BEC(void) {
    extern s32 lbl_8049525C;
    lbl_8049525C = 0;
}

void fn_80373E20(void) {
    extern s32 lbl_80495260;
    lbl_80495260 = 0;
}

