/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_802E1B38(void) {
    return 1;
}

extern s32 lbl_80494E48;
void fn_802E1B40(void (*cb)(void)) {
    lbl_80494E48 = cb;
}

M2C_UNK fn_802E1B48(M2C_UNK arg0, M2C_UNK arg1) {
    void fn_802D8B34(u8 *);
    void fn_802D8BEC(u8 *, s32);
    extern u8 lbl_80452428[];
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_802D8B34(lbl_80452428);
        } else {
            fn_802D8BEC(lbl_80452428, 2);
        }
    }
}

void fn_802E1B9C(void) {
    M2C_UNK fn_802E1B48(M2C_UNK, M2C_UNK);
    fn_802E1B48(1, 0xFFFF);
}

void fn_802E1BC8(void) {
    M2C_UNK fn_802E1B48(M2C_UNK, M2C_UNK);
    fn_802E1B48(0, 0xFFFF);
}

