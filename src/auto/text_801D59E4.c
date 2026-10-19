/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_804945DC;
u8 *fn_801D59E4(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_804167B8[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_804167B8;
    return self;
}

void fn_801D5A20(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_804167B8[];
    *(u8 **)(self + 4) = lbl_804167B8;
    fn_801C7588(self);
}

s32 fn_801D5AB4(void) {
    return lbl_804945DC;
}

void fn_801D5C60(void) {
    M2C_UNK fn_801D5BB0(M2C_UNK, M2C_UNK);
    fn_801D5BB0(1, 0xFFFF);
}

