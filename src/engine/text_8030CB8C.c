/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8030DA64(void);
void fn_8030EF10(void) {
    fn_8030DA64();
}

extern void fn_802D20E8(void *);
void fn_803100F0(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

