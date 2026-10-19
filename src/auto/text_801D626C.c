/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    s32 v[12];
} Unk801D4BF0;


extern s32 lbl_804945E8;
u8 *fn_801D626C(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_80416A58[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_80416A58;
    return self;
}

void fn_801D62A8(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_80416A58[];
    *(u8 **)(self + 4) = lbl_80416A58;
    fn_801C7588(self);
}

s32 fn_801D62D8(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_80436590;
    if (arg1 == 0) {
        *out = lbl_80436590;
        return 1;
    }
    return 0;
}

s32 fn_801D633C(void) {
    return lbl_804945E8;
}

void fn_801D64E8(void) {
    M2C_UNK fn_801D6438(M2C_UNK, M2C_UNK);
    fn_801D6438(1, 0xFFFF);
}

