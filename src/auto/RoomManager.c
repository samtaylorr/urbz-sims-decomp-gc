/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80494538;
s32 fn_8018EE50(void) {
    return 1;
}

s32 fn_8018FA7C(s32 *self) {
    return self[2];
}

s32 fn_8018FD00(s32 *self) {
    return *self;
}

s32 fn_8018FD18(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_80192C7C(void) {
    return lbl_80494538;
}
