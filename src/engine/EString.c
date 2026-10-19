/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_802D32A0(void) {
    return 0;
}

extern u8 lbl_80419540[];
extern void fn_802D20E8(void *);
void fn_802D6A28(void **self, s32 flags) {
    *self = lbl_80419540;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

