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

s32 fn_80290038(void *arg0, s32 arg1) {
    return (*(s32 **)((u8 *)arg0 + 0x1C))[arg1] & ~1;
}

void fn_8029004C(void *arg0, s32 arg1, u8 *arg2) {
    u8 *old;
    u8 *vt;
    u32 p;

    vt = *(u8 **)(arg2 + 4);
    old = (u8 *)((*(u32 **)((u8 *)arg0 + 0x1C))[arg1] & ~1);
    (*(void (**)(u8 *))(vt + 0xC))(arg2 + *(s16 *)(vt + 0x8));
    if (old != NULL) {
        vt = *(u8 **)(old + 4);
        (*(void (**)(u8 *))(vt + 0x14))(old + *(s16 *)(vt + 0x10));
    }
    p = (u32)arg2;
    vt = *(u8 **)(arg2 + 4);
    if ((*(s32 (**)(u8 *))(vt + 0x34))(arg2 + *(s16 *)(vt + 0x30)) == 1) {
        p |= 1;
    }
    (*(u32 **)((u8 *)arg0 + 0x1C))[arg1] = p;
}

s32 fn_802900F0(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_80290138(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_80290180(void) {
    return 0;
}

void fn_80290188(void) {

}

void fn_8029018C(void) {
    M2C_UNK fn_8028FF8C(M2C_UNK, M2C_UNK);
    fn_8028FF8C(1, 0xFFFF);
}

