/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041C438[];
extern void fn_802D20E8(void *);
void fn_8033E160(void **self, s32 flags) {
    *self = lbl_8041C438;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}
