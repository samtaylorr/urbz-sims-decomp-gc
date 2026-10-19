/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_80415560[];
extern void fn_802D20E8(void *);
void fn_801B262C(void **self, s32 flags) {
    *self = lbl_80415560;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s16 fn_801B28E4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 4);
}

s32 fn_801B2D08(void) {
    return 0;
}
