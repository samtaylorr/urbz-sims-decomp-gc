/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80494F5C;
void fn_8033372C(void) {

}

s32 fn_80333D60(void) {
    return 4;
}

s32 fn_803347A4(s32 arg0) {
    return 1 << arg0;
}

void fn_8033480C(void) {

}

f32 fn_80334A58(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xA8);
}

void fn_80334B04(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xA8) = farg0;
}

void fn_80334EC4(void (*cb)(void)) {
    lbl_80494F5C = cb;
}

s32 fn_80334ECC(void) {
    return lbl_80494F5C;
}
