/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8031F074(void *arg0) {
    M2C_UNK fn_802D8F1C(s32);
    M2C_UNK fn_8031F568();
    M2C_UNK fn_80366708(s32);
    fn_8031F568();
    fn_802D8F1C(arg0 + 8);
    fn_80366708(arg0 + 0x38C);
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
}

void fn_8031F0B8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x408) = arg1;
    M2C_FIELD(arg0, s32 *, 0x404) = 0;
}

void fn_8031F698(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_802C52EC(s32);
    M2C_UNK fn_8031F6DC(s32, s32, s32);
    fn_8031F6DC(arg0, arg1, fn_802C52EC(arg2));
}

void fn_8031FA48(void) {
    M2C_UNK fn_8031F904(M2C_UNK, M2C_UNK);
    fn_8031F904(1, 0xFFFF);
}

