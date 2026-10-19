/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80364F1C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

s32 fn_80364F28(s32 *self) {
    return self[7];
}

void fn_8036727C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

void fn_803672B8(void) {

}

s32 fn_803672BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

s32 fn_803672C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

s32 fn_80367610(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x18) * M2C_FIELD(arg0, s16 *, 0x1C)) + 0x23;
}

