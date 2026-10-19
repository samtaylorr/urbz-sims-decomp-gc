/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_804945D0;
u8 *fn_801D50D4(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_80416518[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_80416518;
    return self;
}

void fn_801D5110(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_80416518[];
    *(u8 **)(self + 4) = lbl_80416518;
    fn_801C7588(self);
}

s32 fn_801D51A4(void) {
    return lbl_804945D0;
}

void fn_801D53D8(void) {
    M2C_UNK fn_801D5328(M2C_UNK, M2C_UNK);
    fn_801D5328(1, 0xFFFF);
}

