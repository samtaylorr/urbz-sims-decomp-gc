/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8040D690[];
extern void fn_802D20E8(void *);
void fn_801020E0(void **self, s32 flags) {
    *self = lbl_8040D690;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_801051C0(void) {
    return 0;
}

s32 fn_80105314(s32 *self) {
    return self[1];
}

