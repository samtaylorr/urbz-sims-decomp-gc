/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80314E68(void);
extern void fn_802D20E8(void *);
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

