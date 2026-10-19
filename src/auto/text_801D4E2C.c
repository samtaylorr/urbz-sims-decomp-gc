/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_804945CC;
u8 *fn_801D4E2C(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_80416438[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_80416438;
    return self;
}

void fn_801D4E68(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_80416438[];
    *(u8 **)(self + 4) = lbl_80416438;
    fn_801C7588(self);
}

s32 fn_801D4EFC(void) {
    return lbl_804945CC;
}

void fn_801D50A8(void) {
    M2C_UNK fn_801D4FF8(M2C_UNK, M2C_UNK);
    fn_801D4FF8(1, 0xFFFF);
}

