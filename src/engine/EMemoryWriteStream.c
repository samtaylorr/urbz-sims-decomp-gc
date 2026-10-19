/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_80375760(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
}

void fn_80375768(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
}

void fn_80375770(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
}

void fn_80375778(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x8C) = arg1;
}

void fn_803757C4(void) {

}

s32 fn_803757C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

s32 fn_803757D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_803757D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

s32 fn_803757E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

void fn_803757E8(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x84);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x88);
    *arg3 = M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_80375804(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84) * M2C_FIELD(arg0, s32 *, 0x88) * M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_8037583C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

void fn_80375880(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_803758A0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_803758E0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

