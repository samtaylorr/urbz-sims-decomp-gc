/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_803757C4(void) {

}

s32 fn_803757C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

s32 fn_803757D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_803757E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
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

