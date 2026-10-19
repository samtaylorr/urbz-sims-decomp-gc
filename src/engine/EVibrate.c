/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80314E68(void);
extern void fn_802D20E8(void *);
void *fn_80314CC0(void *arg0) {
    M2C_UNK fn_80248488(M2C_UNK *, M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_8049670C;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    fn_80248488(arg0 + 8, 0, 0x88);
    fn_80248488(&lbl_8049670C, 0, 6);
    return arg0;
}

void fn_80314D18(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_80314DA4(s32 *arg0) {
    *arg0 = 0;
}

s32 fn_80314DB0(s32 *self) {
    return *self;
}

void fn_80314E34(void) {
    fn_80314E68();
}

s32 fn_80315430(void) {
    return 1;
}

void fn_80316EFC(void *arg0, s32 arg1) {
    M2C_UNK fn_80316A58();
    if (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x9C)) {
        M2C_FIELD(arg0, s32 *, 0x9C) = arg1;
        fn_80316A58();
    }
}

void fn_80317390(void) {
    M2C_UNK fn_80317224(M2C_UNK, M2C_UNK);
    fn_80317224(1, 0xFFFF);
}

