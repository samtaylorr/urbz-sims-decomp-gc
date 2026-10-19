/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void fn_800ABE24(s32);
extern void fn_802D20E8(s32);
void fn_800ABD94(s32 self, s32 flags) {
    fn_800ABE24(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800ACA14(void) {

}

void fn_800ACA18(void) {

}

void fn_800ACA1C(void) {

}

void fn_800ACBE8(void) {

}

void fn_800ADBEC(void) {

}

s32 fn_800AEB28(void) {
    return 1;
}

void fn_800AFD2C(void) {

}

void fn_800B1DCC(void) {

}

s32 fn_800B2708(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x360);
}

s32 fn_800B2EF4(char *self) {
    return *(s32 *)(self + 0xC);
}

s16 fn_800B2EFC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x10);
}

s32 fn_800B2F04(s32 arg0) {
    return arg0 + 0x10;
}

s32 fn_800B2F0C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s16 fn_800B2F14(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x18);
}

s32 fn_800B2F1C(s32 arg0) {
    return arg0 + 0x18;
}

s32 fn_800B2F3C(s32 arg0) {
    return arg0 + 0x1A;
}

s32 fn_800B2F44(s32 arg0) {
    return arg0 + 0x1C;
}

s32 fn_800B2F4C(s32 *self) {
    return self[1];
}

s32 fn_800B2F54(s32 *self) {
    return self[2];
}

u16 fn_800B2F5C(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x1E);
}

s32 fn_800B2FC4(char *self) {
    return *(s32 *)(self + 0xC);
}

