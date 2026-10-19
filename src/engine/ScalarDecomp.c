/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8036375C(void);
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

void fn_8036BC14(void) {
    fn_8036375C();
}

void fn_802CB634(void);
void fn_8036BC34(void) {
    fn_802CB634();
}

s32 fn_8036BC9C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

