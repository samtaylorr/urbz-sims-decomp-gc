/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8030DA64(void);
void fn_8030EF10(void) {
    fn_8030DA64();
}

void fn_8030FA1C(s32 *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        *arg0 |= arg1;
        return;
    }
    *arg0 &= ~arg1;
}

s32 fn_8030FA44(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x84);
}

s32 fn_8030FE2C(void) {
    extern void *lbl_80494EEC;
    return M2C_FIELD(lbl_80494EEC, s32 *, 8);
}

extern void fn_802D20E8(void *);
void fn_803100F0(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8031020C(void) {
    M2C_UNK fn_803101B8(M2C_UNK, M2C_UNK);
    fn_803101B8(1, 0xFFFF);
}

