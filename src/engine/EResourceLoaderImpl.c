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

void fn_8031CC10(s32 arg0) {
    M2C_UNK fn_803669E4(s32);
    fn_803669E4(arg0 + 0x37C);
}

void fn_8031CC34(s32 arg0) {
    M2C_UNK fn_803669C0(s32);
    fn_803669C0(arg0 + 0x37C);
}

void fn_802D8F90();
void fn_8031CFE8(char *self) {
    extern void fn_802D8F90(void *);
    fn_802D8F90(self + 8);
}

void fn_8031D080(void) {

}

void fn_8031E778(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3EC) = arg1;
}

void fn_8031E780(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3F0) = 1;
}

