/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_802DFEEC(void) {
    return 0;
}

s32 fn_802DFF58(void) {
    return 1;
}

s32 fn_802DFF60(void) {
    return 0;
}

extern u8 lbl_80419848[];
extern void fn_802D20E8(void *);
void fn_802DFF84(void **self, s32 flags) {
    *self = lbl_80419848;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802E01B8(void) {

}

void fn_802D8F90();
void fn_802E03E4(char *self) {
    extern void fn_802D8F90(void *);
    fn_802D8F90(self + 8);
}

