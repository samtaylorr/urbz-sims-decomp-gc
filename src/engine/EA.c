/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80258544(void);
s32 fn_802D82B4(void) {
    return 0;
}

void fn_802D8328(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

s32 fn_802D8458(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_802D8460(s32 *self) {
    return self[2];
}

void fn_802D8580(void *arg0) {
    M2C_UNK fn_802D8424(s32);
    fn_802D8424(M2C_FIELD(arg0, s32 *, 4));
}

void fn_802D8AAC(void *arg0) {
    M2C_UNK fn_80240ED8(s32);
    fn_80240ED8(M2C_FIELD(arg0, s32 *, 0x2C));
}

s32 fn_802D8B14(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 fn_802D8B1C(void) {
    return 1;
}

s32 fn_802D8B24(void) {
    return 0;
}

s32 fn_802D8B2C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

void fn_802D8EF8(void *arg0) {
    M2C_UNK fn_80259354(s32);
    fn_80259354(M2C_FIELD(arg0, s32 *, 0x318));
}

void fn_802D8FFC(void) {
    M2C_UNK fn_802D8FCC();
    M2C_UNK fn_802D9124();
    fn_802D9124();
    fn_802D8FCC();
}

s32 fn_802D9020(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x31C);
}

s32 fn_802D9028(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x320);
}

void fn_802D9110(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x32C) = arg1;
}

s32 fn_802D9118(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x32C);
}

void fn_802D9120(void) {

}

void fn_802D9124(void) {
    fn_80258544();
}

extern void fn_8025AEB4(void *);
void *fn_802D91E0(void *self) {
    fn_8025AEB4(self);
    return self;
}

void fn_802D9210(void) {

}

s32 fn_802D9278(char *self) {
    return *(s32 *)(self + 0xC);
}

extern void fn_802D96A8(s32);
extern void fn_802D20E8(s32);
void fn_802D94C0(s32 self, s32 flags) {
    fn_802D96A8(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802D9A0C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4C4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C8) = arg2;
}

void fn_802D9A18(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4BC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C0) = arg2;
}

void fn_802D9A24(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4D8) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4DC) = arg2;
}

void fn_802D9A30(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s8 *, 0x484) = arg1;
    M2C_FIELD(arg0, s8 *, 0x485) = arg2;
}

s32 fn_802D9A3C(void) {
    return 0x1000;
}

void fn_802D9DE4(void) {

}

s32 fn_802D9E3C(void) {
    return 1;
}

void fn_802DB018(void);
void fn_802DAFB0(void) {
    fn_802DB018();
}

void fn_802DAFD0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4D0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4D4) = arg2;
}

void fn_802D21E0(void *);
void fn_802DD5B0(void *self, void *arg) {
    fn_802D21E0(arg);
}

void fn_802DDDC8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((arg1 + 0x1F) & 0xFFFFFFE0);
}

u32 fn_802DE1B0(void *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 4) + 0x1F) >> 5U;
}

void fn_802DE598(void) {

}

s32 fn_802DEC58(s32 *self) {
    return self[1];
}

void fn_802DDC6C(void);
void fn_802DEDAC(void) {
    fn_802DDC6C();
}

s32 fn_802DEDDC(void) {
    s32 fn_802DE2F8();
    return fn_802DE2F8() ^ 1;
}

s32 fn_802DEE00(s32 *self) {
    return *self;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_802DF214(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_802DF304(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802DF30C(void) {
    return 0;
}

s32 fn_802DF338(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802DF340(void) {
    return 0;
}

s32 fn_802DF348(s32 *self) {
    return self[7];
}

s32 fn_802DF350(void) {
    return 0;
}

void fn_802DFB30(void) {

}

void fn_802DFB34(void) {

}

s32 fn_802DFB38(void) {
    return 0;
}

void fn_802DFB40(void) {

}

