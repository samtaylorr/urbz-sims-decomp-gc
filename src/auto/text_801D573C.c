/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_804945D8;
u8 *fn_801D573C(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_804166D8[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_804166D8;
    return self;
}

void fn_801D5778(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_804166D8[];
    *(u8 **)(self + 4) = lbl_804166D8;
    fn_801C7588(self);
}

s32 fn_801D580C(void) {
    return lbl_804945D8;
}

void fn_801D59B8(void) {
    M2C_UNK fn_801D5908(M2C_UNK, M2C_UNK);
    fn_801D5908(1, 0xFFFF);
}

