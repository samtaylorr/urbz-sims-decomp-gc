/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8028B998(s32 arg0) {
    M2C_UNK fn_802A1420(s32);
    fn_802A1420(arg0 + 0x24);
}

void fn_8028D540(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x127C) = arg1;
}

s32 fn_80290008(s32 arg0) {
    return arg0 & 0xFFFFFFFE;
}

s32 fn_80290010(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_80290180(void) {
    return 0;
}

void fn_80290188(void) {

}

