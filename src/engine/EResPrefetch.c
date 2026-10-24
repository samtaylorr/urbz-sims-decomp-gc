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

M2C_UNK fn_8031F6DC(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_802D1FC8(s32);
    M2C_UNK fn_8031F608(s32);
    M2C_UNK fn_80366760(s32, void *, s32);
    extern void **lbl_80496220;
    void *temp_r30;
    void *temp_r9;

    fn_8031F608(arg0);
    temp_r30 = fn_802D1FC8(0x14);
    temp_r9 = *lbl_80496220;
    M2C_FIELD(temp_r30, s32 *, 0xC) = M2C_FIELD(temp_r9, s32 (**)(void *, s32), 0xAC)((char *)lbl_80496220 + M2C_FIELD(temp_r9, s16 *, 0xA8), arg1);
    M2C_FIELD(temp_r30, s32 *, 0) = 1;
    M2C_FIELD(temp_r30, s32 *, 4) = arg2;
    M2C_FIELD(temp_r30, s32 *, 0x10) = 0;
    fn_80366760(arg0 + 0x38C, temp_r30, 1);
}

void fn_8031F764(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_802C52EC(s32);
    M2C_UNK fn_8031F7A8(s32, s32, s32);
    fn_8031F7A8(arg0, arg1, fn_802C52EC(arg2));
}

s32 fn_8031F8A0(void *arg0) {
    extern void *lbl_8045BA34[];
    s32 ok;
    s32 result;
    u32 a;
    u32 b;

    ok = arg0 == lbl_8045BA34[0] && M2C_FIELD(arg0, s32 *, 0x414) == 0;
    result = 0;
    if (ok) {
        a = M2C_FIELD(arg0, u32 *, 0x3F0);
        b = M2C_FIELD(arg0, u32 *, 0x400);
        if (a < b ? M2C_FIELD(arg0, u32 *, 0x404) == a : M2C_FIELD(arg0, u32 *, 0x404) == b) {
            result = 1;
        }
    }
    return result;
}

M2C_UNK fn_8031F904(s32 arg0, s32 arg1) {
    M2C_UNK fn_8031EE78(void *);
    M2C_UNK fn_8031EF04(void *, s32);
    extern u8 lbl_8045A638[];
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8031EE78(lbl_8045A638);
        } else {
            fn_8031EF04(lbl_8045A638, 2);
        }
    }
}

s32 fn_8031F958(void *arg0) {
    s32 fn_803669C0(void *);
    s32 var_r31;

    var_r31 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        s32 ok = fn_803669C0(arg0 + 0x38C) != 0;
        if (ok) {
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
    extern struct { s32 unk0; s32 unk4; void *unk8; } lbl_8045BA2C;
    M2C_UNK fn_80338BAC(void *, void *);
    extern f32 lbl_803F2F00[];
    M2C_FIELD(arg0, f32 *, 0x410) = lbl_803F2F00[0];
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
    M2C_FIELD(arg0, s32 *, 0x414) = 0;
    if (arg0 == lbl_8045BA2C.unk8) {
        fn_80338BAC(&lbl_8045BA2C, arg0);
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

