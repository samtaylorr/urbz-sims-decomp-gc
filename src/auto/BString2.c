/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800F0FFC(void);
void fn_800EF8B4(void) {

}

void fn_800EF8B8(void) {

}

s32 fn_800EF91C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0xC);
}

s32 fn_800EF928(s32 **arg0) {
    return **arg0;
}

s32 fn_800EF934(s32 *arg0) {
    return *arg0 + 4;
}

s32 fn_800F4150(s32, s32, s32);
s32 fn_800EFCAC(s32 arg0, s32 arg1) {
    return (u32)fn_800F4150(arg0, arg1, 0) >> 31;
}

s32 fn_800F41B8(s32, s32, s32, s32);
s32 fn_800EFCD4(s32 arg0, s32 arg1) {
    return (u32)fn_800F41B8(arg0, arg1, 0, 1) >> 31;
}

void fn_800EFD00(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EFCAC(s32, s32);
    fn_800EFCAC(arg1, arg0);
}

void fn_800EFD2C(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EFCD4(s32, s32);
    fn_800EFCD4(arg1, arg0);
}

void fn_800EFD58(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EFC28(s32, s32);
    fn_800EFC28(arg1, arg0);
}

void fn_800EFD84(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EFC68(s32, s32);
    fn_800EFC68(arg1, arg0);
}

s32 fn_800EFDB0(void) {
    s32 fn_800EFC28();
    return fn_800EFC28() ^ 1;
}

s32 fn_800EFDD4(void) {
    s32 fn_800EFC68();
    return fn_800EFC68() ^ 1;
}

s32 fn_800EFDF8(void) {
    s32 fn_800EFCAC();
    return fn_800EFCAC() ^ 1;
}

s32 fn_800EFE1C(void) {
    s32 fn_800EFCD4();
    return fn_800EFCD4() ^ 1;
}

s32 fn_800EFE40(s32 arg0, s32 arg1) {
    return fn_800EFCAC(arg1, arg0) ^ 1;
}

s32 fn_800EFE70(s32 arg0, s32 arg1) {
    return fn_800EFCD4(arg1, arg0) ^ 1;
}

s32 fn_800EFF00(void) {
    return 0;
}

void *fn_800EFF08(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC)++;
    return arg0;
}

extern void fn_800EF864(s32);
extern void fn_802D20E8(s32);
void fn_800F0658(s32 self, s32 flags) {
    fn_800EF864(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800F0698(void) {
    return 0;
}

extern void fn_800EF8BC(s32);
void fn_800F1A60(s32 self, s32 flags) {
    fn_800EF8BC(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern void fn_800F07C4(void *);
void *fn_800F1FA8(void *self) {
    fn_800F07C4(self);
    return self;
}

s32 fn_800F8120(const char *arg0);
void *fn_800F1FD8(void *arg0, const char *arg1) {
    ((void (*)(void *, const char *, s32))fn_800F07C4)(arg0, arg1, arg1 ? fn_800F8120(arg1) : 0);
    return arg0;
}

extern void fn_800F06A0(void *);
void *fn_800F22C0(void *self) {
    fn_800F06A0(self);
    return self;
}

void *fn_800F22F0(void *arg0, const char *arg1) {
    ((void (*)(void *, const char *, s32))fn_800F06A0)(arg0, arg1, arg1 ? fn_800F8120(arg1) : 0);
    return arg0;
}

extern void fn_800F095C(void *);
void *fn_800F251C(void *self) {
    fn_800F095C(self);
    return self;
}

void fn_800F34EC(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F3358(s32, s32, s32);
    fn_800F3358(arg0, arg1, fn_800F0698());
}

void fn_800F3738(void) {
    fn_800F0FFC();
}

void fn_800F1120(void);
void fn_800F38C0(void) {
    fn_800F1120();
}

void fn_800F126C(void);
void fn_800F3AB0(void) {
    fn_800F126C();
}

void fn_800F37B0(void);
void fn_800F3B28(void) {
    fn_800F37B0();
}

void fn_800F134C(void);
void fn_800F3BB4(void) {
    fn_800F134C();
}

void fn_800F3938(void);
void fn_800F3C2C(void) {
    fn_800F3938();
}

void fn_800F1450(void);
void fn_800F3CB8(void) {
    fn_800F1450();
}

void fn_800F1510(void);
void fn_800F3E30(void) {
    fn_800F1510();
}

s32 fn_800F4878(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 4);
}

s32 fn_800F4884(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 8);
}

void fn_800F4980(void) {
    M2C_UNK fn_800F4910(M2C_UNK, M2C_UNK);
    fn_800F4910(1, 0xFFFF);
}

