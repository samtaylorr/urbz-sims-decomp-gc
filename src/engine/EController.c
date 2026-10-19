/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80310528(void *arg0) {
    M2C_UNK fn_8036FC58(s32);
    fn_8036FC58(M2C_FIELD(arg0, s32 *, 0x200));
}

s32 fn_8031054C(u32 *arg0, u32 *arg1) {
    u32 temp_r0;
    u32 temp_r9;

    temp_r9 = *arg0;
    temp_r0 = *arg1;
    if (temp_r9 >= temp_r0) {
        return temp_r9 > temp_r0;
    }
    return -1;
}

void fn_803105B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

void fn_80310728(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 0x20) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 0x18) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1FC), s32 *, 0x20) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1FC), s32 *, 0x18) = 0;
}

s32 fn_80310750(void) {
    return 0;
}

s32 fn_80310A48(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x1E4) = farg0;
    return 1;
}

s32 fn_80310AB8(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x1E8) = farg0;
    return 1;
}

void fn_80310C98(void *arg0) {
    M2C_UNK fn_8036FD3C(s32);
    fn_8036FD3C(M2C_FIELD(arg0, s32 *, 0x1FC));
}

s32 fn_80310FE4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1AC);
}

void fn_80310FEC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1AC) = arg1;
}

void fn_80310FF4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1B0) = arg1;
}

void fn_803112BC(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 0x78) = 1;
}

s32 fn_80311350(u32 *arg0, u32 *arg1) {
    u32 temp_r0;
    u32 temp_r9;

    temp_r9 = *arg0;
    temp_r0 = *arg1;
    if (temp_r9 >= temp_r0) {
        return temp_r9 > temp_r0;
    }
    return -1;
}

s32 fn_80311990();
void fn_803112CC(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80311404(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_80311990(void *arg0);
s32 fn_803119D4(arg0, arg1)
    void *arg0;
    s32 arg1;
{
    s32 result;
    s32 i;

    if (arg1 == -1) {
        return 0;
    }
    result = 0;
    for (i = fn_80311990(arg0) + 1; i <= M2C_FIELD(arg0, s32 *, 8); i++) {
        result |= M2C_FIELD(arg0, s32 *, i * 0xC + 0x14);
    }
    return result;
}

s32 fn_80311A4C(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 8) & ~fn_803119D4();
}

s32 fn_80311A84(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 0x10) & ~fn_803119D4();
}

s32 fn_80311ABC(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 0x18) & ~fn_803119D4();
}

s32 fn_80311AF4(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 0x20) & ~fn_803119D4();
}

s32 fn_80311B2C(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x1B4) & ~fn_803119D4();
}

s32 fn_80311B60(s32 *self) {
    return *self;
}

s32 fn_80311B68(s32 *self) {
    return self[1];
}

s32 fn_80311B70(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 4) >> 1U) & 1;
}

void fn_80311B7C(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311A4C(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A4C(arg0, arg2), 0);
}

void fn_80311D5C(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311A4C(arg0, arg2), 0, arg1);
}

void fn_80311310(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80311DA4(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311A4C(arg0, arg2), 0, arg1);
}

void fn_8031202C(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311A4C(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A4C(arg0, arg2), 1);
}

void fn_803120EC(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311AF4(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A84(arg0, arg2), 1);
}

void fn_8031214C(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311A84(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A84(arg0, arg2), 1);
}

void fn_803121AC(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311B2C(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A4C(arg0, arg2), 1);
}

void fn_8031220C(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311A4C(arg0, arg2), 1, arg1);
}

void fn_80312254(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311A4C(arg0, arg2), 1, arg1);
}

void fn_8031229C(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311A84(arg0, arg2), 1, arg1);
}

void fn_803122E4(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311A84(arg0, arg2), 1, arg1);
}

void fn_803123BC(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311AF4(arg0, arg2), 1, arg1);
}

void fn_80312404(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311AF4(arg0, arg2), 1, arg1);
}

void fn_8031244C(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311B2C(arg0, arg2), 1, arg1);
}

void fn_80312494(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311B2C(arg0, arg2), 1, arg1);
}

void fn_8031254C(void *arg0, void *arg1) {
    void *temp_r10;
    void *temp_r9;

    temp_r10 = arg0 + 0xC;
    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(temp_r10, void **, 4);
    temp_r9 = M2C_FIELD(temp_r10, void **, 4);
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, void **, 4) = arg1;
    } else {
        M2C_FIELD(arg0, void **, 0xC) = arg1;
    }
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(temp_r10, void **, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 1);
}

void fn_80312DA8(void) {
    M2C_UNK fn_80312D20(M2C_UNK, M2C_UNK);
    fn_80312D20(1, 0xFFFF);
}

