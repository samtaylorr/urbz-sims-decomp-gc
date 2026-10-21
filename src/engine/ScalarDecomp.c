/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8036375C(void *);
void fn_802CB634(void *);
void fn_802D23C0(void *, u32, s32, s32);
void fn_802CA9A8(void *);
void fn_802CAA00(void *, s32);
void fn_8036BB88(s32 arg0, s32 arg1);
extern u8 lbl_8047551C[];
extern u8 lbl_80475558[];

void fn_8036A91C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}

s32 fn_8036A98C(s32 *self) {
    return self[2];
}

s32 fn_8036ACBC(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x18) * M2C_FIELD(arg0, s16 *, 0x1C)) + 0x63;
}

s32 fn_8036BC0C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

void fn_8036BC14(void *self) {
    fn_8036375C(self);
}

void fn_8036BC34(void *self) {
    fn_802CB634(self);
}

void fn_8036BC54(char *self) {
    fn_8036375C(self + 0x14);
}

s32 fn_8036BC9C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

void fn_8036BCFC(void) {
    fn_8036BB88(1, 0xFFFF);
}

