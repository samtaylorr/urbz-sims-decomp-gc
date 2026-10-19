/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    s32 v[12];
} Unk801D4BF0;


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

s32 fn_801D4E98(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_804363EC;
    if (arg1 == 0) {
        *out = lbl_804363EC;
        return 1;
    }
    return 0;
}

s32 fn_801D4EFC(void) {
    return lbl_804945CC;
}

void fn_801D50A8(void) {
    M2C_UNK fn_801D4FF8(M2C_UNK, M2C_UNK);
    fn_801D4FF8(1, 0xFFFF);
}

