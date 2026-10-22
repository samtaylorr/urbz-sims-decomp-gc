/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8031F074(void *arg0) {
    M2C_UNK fn_802D8F1C(s32);
    M2C_UNK fn_8031F568();
    M2C_UNK fn_80366708(s32);
    fn_8031F568();
    fn_802D8F1C(arg0 + 8);
    fn_80366708(arg0 + 0x38C);
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
}

void fn_8031F0B8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x408) = arg1;
    M2C_FIELD(arg0, s32 *, 0x404) = 0;
}

void fn_8031F698(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_802C52EC(s32);
    M2C_UNK fn_8031F6DC(s32, s32, s32);
    fn_8031F6DC(arg0, arg1, fn_802C52EC(arg2));
}

void fn_8031F764(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_802C52EC(s32);
    M2C_UNK fn_8031F7A8(s32, s32, s32);
    fn_8031F7A8(arg0, arg1, fn_802C52EC(arg2));
}

s32 fn_8031F958(void *arg0) {
    s32 fn_803669C0(void *);
    s32 var_r0;
    s32 var_r31;

    var_r31 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        var_r0 = 1;
        if (fn_803669C0(arg0 + 0x38C) == 0) {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            var_r31 = 1;
        }
    }
    return var_r31;
}

f32 fn_8031F9B4(void *arg0) {
    extern f32 lbl_803F2EFC[];
    return M2C_FIELD(arg0, s32 *, 0x414) != 0 ? M2C_FIELD(arg0, f32 *, 0x410) : lbl_803F2EFC[0];
}

void fn_8031F9D4(void *arg0) {
    M2C_UNK fn_80338BAC(void *);
    extern f32 lbl_803F2F00[];
    extern u8 lbl_8045BA2C[];
    u8 *p;
    M2C_FIELD(arg0, s32 *, 0x414) = 0;
    M2C_FIELD(arg0, f32 *, 0x410) = lbl_803F2F00[0];
    p = lbl_8045BA2C;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x404) = 0;
    M2C_FIELD(arg0, s32 *, 0x408) = 0;
    M2C_FIELD(arg0, s32 *, 0x40C) = 0;
    if (arg0 == M2C_FIELD(p, void **, 8)) {
        fn_80338BAC(p);
    }
}

void fn_8031FA48(void) {
    M2C_UNK fn_8031F904(M2C_UNK, M2C_UNK);
    fn_8031F904(1, 0xFFFF);
}

void fn_8031FA74(void) {
    M2C_UNK fn_8031F904(M2C_UNK, M2C_UNK);
    fn_8031F904(0, 0xFFFF);
}

