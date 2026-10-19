/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_8022554C(void *);
extern void fn_802303F0(void *, void *);
void fn_802324C0(void *arg0) {
    fn_802303F0(fn_8022554C(arg0), arg0);
}

extern void fn_80230448(void *, void *);
void fn_802324F4(void *arg0) {
    fn_80230448(fn_8022554C(arg0), arg0);
}

void fn_802326E0(void) {

}

void fn_80232930(s32 arg0, s32 arg1) {
    M2C_UNK fn_80230468(s32, s32);
    fn_80230468(arg1, arg0);
}

void fn_8023295C(s32 arg0, s32 arg1) {
    M2C_UNK fn_802304C4(s32, s32);
    fn_802304C4(arg1, arg0);
}

void fn_80232D2C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xA4) = arg1;
}

s32 fn_80232D34(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}

void fn_80232E38(s32 arg0, s32 arg1) {
    M2C_UNK fn_80232528();
    M2C_UNK fn_80232E74(s32, s32);
    fn_80232528();
    fn_80232E74(arg0, arg1);
}

s32 fn_80233460(s32 arg0) {
    return arg0 + 0x60;
}

s32 fn_80235760(s32 arg0) {
    return arg0 + 0xA8;
}

extern void fn_80230708(void *, void *);
void fn_80235974(void *arg0) {
    fn_80230708(fn_8022554C(arg0), arg0);
}

extern void fn_80230710(void *, void *);
void fn_802359A8(void *arg0) {
    fn_80230710(fn_8022554C(arg0), arg0);
}

void fn_80236EF4(s32 arg0, s32 arg1) {
    M2C_UNK fn_80230718(s32, s32);
    fn_80230718(arg1, arg0);
}

void fn_80236F20(s32 arg0, s32 arg1) {
    M2C_UNK fn_80230774(s32, s32);
    fn_80230774(arg1, arg0);
}

void fn_80236F4C(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 1;
        return;
    }
    if ((arg1 == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0xEC) != 1)) {
        M2C_FIELD(arg0, s32 *, 0x64) = arg1;
    }
}

s32 fn_80237978(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xEC);
}

void fn_802379B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
}

void fn_802379C4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
}

s32 fn_802379CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}

void fn_802379D4(void) {
    M2C_UNK fn_80237980(M2C_UNK, M2C_UNK);
    fn_80237980(1, 0xFFFF);
}

