/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80494F54;
s32 fn_803321E4(void) {
    return lbl_80494F54;
}

s32 fn_80332824(s32 *self) {
    return *self;
}

s32 fn_8033282C(s32 *self) {
    return self[2];
}

s32 fn_80332834(char *self) {
    return *(s32 *)(self + 0xC);
}

