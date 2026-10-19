/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_801CF874(void *arg0) {
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x150);
    if (temp_r9 == 0) {
        M2C_FIELD(arg0, s32 *, 0x158) = temp_r9;
        M2C_FIELD(arg0, s32 *, 0x154) = 1;
    }
}

void fn_801CF890(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x150) != 0) {
        M2C_FIELD(arg0, s32 *, 0x158) = 1;
        M2C_FIELD(arg0, s32 *, 0x154) = 0;
    }
}

void fn_801D3954(void) {

}

void fn_801D3958(void) {

}

void fn_801D395C(void) {

}

u8 *fn_801D494C(u8 *self) {
    return self + 8;
}

