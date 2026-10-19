/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_8010A3E8(void) {
    return 0;
}

void fn_8010A3F0(void) {

}

s32 fn_8010A610(void) {
    return 0x43555253;
}

s32 fn_8010A7EC(void) {
    return 0;
}

s32 fn_8010A89C(s32 *self) {
    return self[7];
}

void fn_8010A8A4(void) {

}

s32 fn_8010B4E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

extern u8 lbl_8040E770[];
extern void fn_802D20E8(void *);
void fn_8010B568(void **self, s32 flags) {
    *self = lbl_8040E770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8010BD50(void) {
    return 0;
}

s32 fn_8010C040(s32 *self) {
    return self[2];
}

void fn_8010C048(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

s32 fn_8010C050(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_8010C058(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

s32 fn_8010C060(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void fn_8010C068(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

s32 fn_8010C070(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_8010C098(s32 *self) {
    return self[6];
}

void fn_8010C0A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

s32 fn_8010C0D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34) & 1;
}

s32 fn_8010C104(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 1U) & 1;
}

s32 fn_8010C130(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 2U) & 1;
}

s32 fn_8010C13C(void) {
    return 0;
}

s32 fn_8010C144(void) {
    return 0;
}

s32 fn_8010C14C(void) {
    return 0;
}

s32 fn_8010C154(void) {
    return 0;
}

s32 fn_8010C580(void) {
    return 0;
}

s32 fn_8010C5F8(void) {
    return 1;
}

s32 fn_8010C670(void) {
    return 0;
}

s32 fn_8010C678(void) {
    return 0;
}

s32 fn_8010C680(void) {
    return 0;
}

s32 fn_8010C688(void) {
    return 0;
}

void fn_8010CFA0(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8010D220(void) {
    return 0;
}

void fn_8010D228(void) {

}

extern s32 lbl_80494418;
void fn_8010D22C(void (*cb)(void)) {
    lbl_80494418 = cb;
}

extern s32 lbl_8049441C;
void fn_8010D234(void (*cb)(void)) {
    lbl_8049441C = cb;
}

