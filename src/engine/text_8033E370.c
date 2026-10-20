/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041BDE8[];
void fn_802D20E8(void *);
void fn_8033E3B0(void *self, s32 flags) {
    M2C_FIELD(self, u8 **, 0x20) = lbl_8041BDE8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8033E484(void) {

}

void fn_8033E710(void) {
    M2C_UNK fn_8033E6BC(M2C_UNK, M2C_UNK);
    fn_8033E6BC(1, 0xFFFF);
}

