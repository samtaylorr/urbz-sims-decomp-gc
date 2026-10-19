/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
s32 fn_800522E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3D0) = arg1;
    return 1;
}

void fn_800528A0(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_80052954(u32 *arg0) {
    return ((u32) *arg0 >> 1U) & 1;
}

s32 fn_800529B0(u32 *arg0) {
    return ((u32) *arg0 >> 2U) & 1;
}

s32 fn_800529BC(u32 *arg0) {
    return ((u32) *arg0 >> 3U) & 1;
}

void fn_80052AC8(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80052AFC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38C) = 1;
}

void fn_80052B08(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38C) = 0;
}

