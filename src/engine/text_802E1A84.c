/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_802E1B38(void) {
    return 1;
}

extern s32 lbl_80494E48;
void fn_802E1B40(void (*cb)(void)) {
    lbl_80494E48 = cb;
}

void fn_802E1B9C(void) {
    M2C_UNK fn_802E1B48(M2C_UNK, M2C_UNK);
    fn_802E1B48(1, 0xFFFF);
}

