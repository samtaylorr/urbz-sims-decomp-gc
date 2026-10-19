/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_800B72E8(void) {
    return 1;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_800B9644(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_800B96B8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x15C) = arg1;
}

void fn_800B96C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x158) = arg1;
}

void fn_800BA124(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x480) = farg0;
}

s32 fn_800BB038(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x444);
}

s32 fn_800BB058(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x438);
}

void fn_800BB10C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_800BBAD4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_800BBB64(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

void fn_800BBB6C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
}

void fn_800BBC90(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

void fn_800BBC98(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
}

s32 fn_800BBD28(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

s32 fn_800BBD3C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}

s32 fn_800BBD70(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x7C);
}

s32 fn_800BBD78(s32 *self) {
    return self[1];
}

void fn_800BC03C(void) {

}

s32 fn_800BC124(void) {
    return 1;
}

