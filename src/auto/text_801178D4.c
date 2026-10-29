/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

M2C_UNK *fn_801178D4(void) {
    extern M2C_UNK lbl_80495B10;
    return &lbl_80495B10;
}

void fn_80117DE4(f32 *arg0) {
    extern s32 lbl_8049443C;
    if (lbl_8049443C == 0) {
        char *obj = (char *)fn_801178D4();
        char *vt = *(char **)obj;
        (*(void (**)(void *))(vt + 0x1C))(obj + *(s16 *)(vt + 0x18));
    }
    Fill16(Fill16(arg0));
    *(s32 *)(arg0 + 32) = 0;
}

M2C_UNK fn_80118138(M2C_UNK arg0, M2C_UNK arg1) {
    void fn_80149BC8(void *, s32);
    extern char lbl_8040F0B0[];
    extern void *lbl_80495B10;
    if (arg1 == 0xFFFF && arg0 != 0) {
        fn_80149BC8(&lbl_80495B10, 1);
        lbl_80495B10 = lbl_8040F0B0;
    }
}

void *fn_80118184(void *arg0) {
    void fn_80149BC8(void *, s32);
    extern char lbl_8040F0B0[];
    fn_80149BC8(arg0, 1);
    *(void **)arg0 = lbl_8040F0B0;
    return arg0;
}

void fn_801181C4(void) {
    M2C_UNK fn_80118138(M2C_UNK, M2C_UNK);
    fn_80118138(1, 0xFFFF);
}

