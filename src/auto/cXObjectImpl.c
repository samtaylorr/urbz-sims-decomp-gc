/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80494470;
void fn_801301DC(void) {

}

extern s32 lbl_80495BB0;
extern void fn_800F1A60(s32, s32);
void fn_8013020C(void) {
    fn_800F1A60((s32)&lbl_80495BB0, 2);
}

s32 fn_80130388(void) {
    return lbl_80494470;
}

extern s32 lbl_80494474;
s32 fn_80130390(void) {
    return lbl_80494474;
}

extern s32 lbl_8049447C;
s32 fn_80130398(void) {
    return lbl_8049447C;
}

void fn_801303A0(void (*cb)(void)) {
    lbl_8049447C = cb;
}

extern s32 lbl_80494480;
s32 fn_801303A8(void) {
    return lbl_80494480;
}

void fn_801303B0(void (*cb)(void)) {
    lbl_80494480 = cb;
}

void fn_80131DA4(void) {

}

extern s32 lbl_80494478;
void fn_801325DC(void (*cb)(void)) {
    lbl_80494478 = cb;
}

s32 fn_801352DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xB0);
}

void fn_80135D6C(void) {

}

s32 fn_80137E2C(void) {
    return 0;
}

s32 fn_801392E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

void fn_801392E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
}

s32 fn_801394AC(void) {
    return 0;
}

s32 fn_801484F8(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_80148500(void) {

}

s32 fn_80148664(void) {
    return lbl_80494474;
}

s32 fn_8014866C(void) {
    return lbl_8049447C;
}

void fn_80148674(void (*cb)(void)) {
    lbl_8049447C = cb;
}

s32 fn_8014867C(void) {
    return lbl_80494480;
}

void fn_80148684(void (*cb)(void)) {
    lbl_80494480 = cb;
}

s32 fn_801489CC(void) {
    return 0;
}

void fn_801489D4(void) {

}

s32 fn_80148B5C(s32 arg0) {
    return arg0 + 0x70;
}

s32 fn_80148BAC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x58);
}

s32 fn_80148D6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

s16 fn_80148D80(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x64);
}

s32 fn_80148EBC(s32 arg0) {
    return arg0 + 0x68;
}

s32 fn_80148EE8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_80148EF0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_80148FAC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60);
}

s32 fn_80149404(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C);
}

void fn_80149468(void) {

}

