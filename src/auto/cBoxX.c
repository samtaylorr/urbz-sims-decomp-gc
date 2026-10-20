/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_800FE02C(s32 arg0, s32 arg1, s32 arg2) {
    extern s32 lbl_804943E4;
    extern s32 lbl_80495AD0;
    extern s32 lbl_80495AD4;
    extern s32 lbl_80495AD8;
    lbl_80495AD4 = arg0;
    lbl_804943E4 = 1;
    lbl_80495AD0 = arg1;
    lbl_80495AD8 = arg2;
    return 1;
}

s32 fn_800FE178(s32 arg0, s32 arg1, s32 *arg2) {
    s32 fn_800FB988(s32);
    s32 var_r3;

    var_r3 = 0;
    if (arg1 <= 0x14) {
        *arg2 = fn_800FB988(arg0);
        var_r3 = 1;
    }
    return var_r3;
}

void fn_800FE830(s32 arg0) {
    M2C_UNK fn_80101EF8(s32);
    extern s32 lbl_804943F0;
    if ((s32) lbl_804943F0 != 0) {
        fn_80101EF8(arg0 + 0x4C);
    }
}

void fn_80100534(s32 arg0, s32 arg1) {
    M2C_UNK fn_803A0874(s32, s32 *);
    s32 sp8;

    sp8 = arg1;
    fn_803A0874(arg0 + 0x3C, &sp8);
}

void fn_80100D9C(s32 arg0) {
    M2C_UNK fn_80100F68(s32);
    M2C_UNK fn_80100E14(s32);
    fn_80100EDC();
    fn_80100E14(arg0);
    fn_80100F68(arg0);
}

void fn_80100DD8(s32 arg0) {
    M2C_UNK fn_80100FB4(s32);
    M2C_UNK fn_80100E74(s32);
    fn_80100F1C();
    fn_80100E74(arg0);
    fn_80100FB4(arg0);
}

void fn_80100EDC(void *arg0) {
    M2C_UNK fn_800F97E8(s32, M2C_UNK);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x78);
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (M2C_FIELD(arg0, s32 *, 0x88) + 1);
    if (temp_r0 != 0) {
        fn_800F97E8(temp_r0, 1);
    }
}

void fn_8010120C(void) {
    extern void *lbl_80494FA4;
    void *vt;

    vt = *(void **)lbl_80494FA4;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x4C))((char *)lbl_80494FA4 + M2C_FIELD(vt, s16 *, 0x48));
}

void fn_80101300(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 1;
}

void fn_80101310(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 1;
}

void fn_80101320(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
}

void fn_80101330(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
}

void fn_80101C10(void *arg0) {
    u32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, u32 *, 0x28) + 1;
    M2C_FIELD(arg0, u32 *, 0x28) = temp_r9;
    if (temp_r9 > 0x2BU) {
        M2C_FIELD(arg0, u32 *, 0x28) = 0U;
    }
}

void fn_80101C30(void *arg0) {
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x28) - 1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r9;
    if (temp_r9 < 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0x2B;
    }
}

void fn_80102088(void) {
    M2C_UNK fn_80102010(M2C_UNK, M2C_UNK);
    fn_80102010(1, 0xFFFF);
}

