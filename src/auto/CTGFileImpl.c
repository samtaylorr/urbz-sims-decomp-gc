/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8040A890[];
extern void fn_802D20E8(void *);
void fn_800C3E20(void **self, s32 flags) {
    *self = lbl_8040A890;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800C3F6C(void) {
    return 0;
}

s32 fn_800C3FAC(void) {
    return 0;
}

s32 fn_800C4040(void) {
    return 0;
}

s32 fn_800C4048(void) {
    return 0;
}

s32 fn_800C4050(void) {
    return 1;
}

void fn_800C43D8(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800C4400(void) {
    return 1;
}

s32 fn_800C4548(void) {
    return 1;
}

s32 fn_800C4550(void) {
    return 1;
}

s32 fn_800C4558(void) {
    return 1;
}

s32 fn_800C4560(void) {
    return 1;
}

