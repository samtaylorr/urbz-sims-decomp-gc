/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041C298[];
extern void fn_802D20E8(void *);
void fn_8033BD7C(void **self, s32 flags) {
    *self = lbl_8041C298;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8033BFF8(void) {

}

s32 fn_8033C4E4(void) {
    return 0;
}

s32 fn_8033C4EC(void) {
    return 0;
}

void fn_8033D214(void) {

}

