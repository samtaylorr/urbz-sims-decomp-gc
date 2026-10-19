/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void fn_802D20E8(void *);
void fn_800F521C(void) {

}

void fn_800F5220(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}
