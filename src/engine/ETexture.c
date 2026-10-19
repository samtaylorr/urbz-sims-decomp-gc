/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041DC30[];
void fn_802D8BEC(void *);
s32 fn_8036ED88(void) {
    return 0;
}

void fn_8036EE30(u8 *self) {
    *(u8 **)(self + 0x338) = lbl_8041DC30;
    fn_802D8BEC(self);
}

s32 fn_8036EE60(void) {
    return 0;
}

s32 fn_8036F1F0(void) {
    return 0;
}

s32 fn_8036F1F8(void) {
    return 0;
}

s32 fn_8036FF94(void) {
    return 0;
}

s32 fn_8036FF9C(void) {
    return 0;
}

s32 fn_8036FFA4(void) {
    return 0;
}

s32 fn_8036FFAC(void) {
    return 0;
}

void fn_802D2FD0(void);
void fn_80370010(void) {
    fn_802D2FD0();
}

void fn_802D2430(void);
void fn_8037102C(void) {
    fn_802D2430();
}

