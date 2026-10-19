/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    s32 v[12];
} Unk801D4BF0;


extern s32 lbl_804945D4;
u8 *fn_801D5404(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_804165F8[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_804165F8;
    return self;
}

void fn_801D5440(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_804165F8[];
    *(u8 **)(self + 4) = lbl_804165F8;
    fn_801C7588(self);
}

s32 fn_801D5470(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_80436464;
    if (arg1 == 0) {
        *out = lbl_80436464;
        return 1;
    }
    return 0;
}

s32 fn_801D54D4(void) {
    return lbl_804945D4;
}

s32 fn_801D5650(void) {
    return 0;
}

s32 fn_801D5658(void) {
    return 0;
}

void fn_801D5710(void) {
    M2C_UNK fn_801D5660(M2C_UNK, M2C_UNK);
    fn_801D5660(1, 0xFFFF);
}

