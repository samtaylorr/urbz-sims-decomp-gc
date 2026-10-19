/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041B4F0[];
extern void fn_802D20E8(void *);
void fn_8031C768(void **self, s32 flags) {
    *self = lbl_8041B4F0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802D8F90();
void fn_8031CFE8(char *self) {
    extern void fn_802D8F90(void *);
    fn_802D8F90(self + 8);
}

