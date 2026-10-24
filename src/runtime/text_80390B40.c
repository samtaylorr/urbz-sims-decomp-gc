/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8049661C;

typedef struct {
    u8 *ptr;
    u32 pos;
    s8 a;
    s8 b;
} Nibbles;

void fn_803918D0(void) {
    extern void *lbl_80496610;
    u8 *p;

    M2C_FIELD(lbl_80496610, u8 *, 0x6A9) = 1;
    M2C_FIELD(lbl_80496610, u8 **, 0x69C) += 2;
    p = M2C_FIELD(lbl_80496610, u8 **, 0x69C);
    M2C_FIELD(lbl_80496610, u16 *, 0x6AA) = (p[0] << 8) | p[1];
    M2C_FIELD(lbl_80496610, u8 **, 0x69C) += 2;
    M2C_FIELD(lbl_80496610, u16 *, 0x6AC) = M2C_FIELD(lbl_80496610, u16 *, 0x6AA);
}

s32 fn_8039850C(void *arg0) {
    s32 var_r5;
    u8 *temp_r5;

    if (!(M2C_FIELD(arg0, s32 *, 4) & 0xF)) {
        M2C_FIELD(arg0, s8 *, 8) = (s8) (((u8) *M2C_FIELD(arg0, u8 **, 0) >> 4U) & 7);
        M2C_FIELD(arg0, s8 *, 9) = (s8) (*M2C_FIELD(arg0, u8 **, 0) & 0xF);
        M2C_FIELD(arg0, u8 **, 0) = (u8 *) (M2C_FIELD(arg0, u8 **, 0) + 1);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 2);
    }
    if (M2C_FIELD(arg0, s32 *, 4) & 1) {
        temp_r5 = M2C_FIELD(arg0, u8 **, 0);
        M2C_FIELD(arg0, u8 **, 0) = (u8 *) (temp_r5 + 1);
        var_r5 = (s32) (*temp_r5 << 28) >> 28;
    } else {
        var_r5 = (s32) (*M2C_FIELD(arg0, u8 **, 0) << 24) >> 28;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    return var_r5;
}

void fn_8039859C(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, u8 **, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 2;
    M2C_FIELD(arg0, s8 *, 8) = (s8) (((u8) *M2C_FIELD(arg0, u8 **, 0) >> 4U) & 7);
    M2C_FIELD(arg0, s8 *, 9) = (s8) (*M2C_FIELD(arg0, u8 **, 0) & 0xF);
    M2C_FIELD(arg0, u8 **, 0) = (u8 *) (M2C_FIELD(arg0, u8 **, 0) + 1);
}

void fn_803985D8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg1 + arg2);
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}

void fn_803985F0(void) {
    M2C_UNK fn_80251C1C(s32, s32);
    extern void *lbl_80496618;
    fn_80251C1C(M2C_FIELD(lbl_80496618, s32 *, 0), M2C_FIELD(lbl_80496618, s32 *, 4));
}

void fn_80398714(void) {
    if ((void (*)(void))lbl_8049661C != NULL) {
        ((void (*)(void))lbl_8049661C)();
    }
}

void fn_80398744(s32 arg0) {
    lbl_8049661C = arg0;
}

s32 fn_8039874C(void) {
    return lbl_8049661C;
}
