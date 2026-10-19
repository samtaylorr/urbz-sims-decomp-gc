/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041CFA8[];
void fn_802D8BEC(void *);
void fn_803BEC14(u8 *self) {
    *(u8 **)(self + 0x338) = lbl_8041CFA8;
    fn_802D8BEC(self);
}
