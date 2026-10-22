/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802A1E68(void);
void fn_802781E4(void) {
    extern void (*lbl_80443314[])(void);
    lbl_80443314[0]();
}

s32 *fn_80278210(s32 *arg0) {
    s32 i;
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    arg0[4] = 0;
    arg0[5] = 0;
    arg0[6] = 0;
    arg0[7] = 0;
    arg0[8] = 0;
    arg0[9] = 0;
    arg0[10] = 0;
    arg0[11] = 0;
    arg0[12] = 0;
    arg0[13] = 0;
    arg0[14] = 0;
    arg0[15] = 0;
    arg0[16] = 0;
    arg0[17] = 0;
    arg0[18] = 0;
    arg0[19] = 0;
    arg0[20] = 0;
    arg0[21] = 0;
    arg0[22] = 0;
    arg0[23] = 0;
    arg0[24] = 0;
    arg0[25] = 0;
    arg0[26] = 0;
    arg0[27] = 0;
    arg0[28] = 0;
    arg0[29] = 0;
    arg0[30] = 0;
    arg0[31] = 0;
    arg0[32] = 0;
    arg0[33] = 0;
    arg0[34] = 0;
    arg0[35] = 0;
    arg0[36] = 0;
    arg0[37] = 0;
    arg0[38] = 0;
    arg0[39] = 0;
    return arg0;
}

void fn_80278618(void) {
    fn_802A1E68();
}

void fn_80278638(void) {
    extern s32 lbl_804960E8;
    extern void fn_8028D764(void);
    extern void fn_8028D82C(void);
    extern void fn_802A1FE4(s32, void (*)(void), void (*)(void));
    fn_802A1FE4(lbl_804960E8, fn_8028D764, fn_8028D82C);
}

void fn_8027866C(void) {
    M2C_UNK fn_8028DDA0();
    M2C_UNK fn_802923AC();
    M2C_UNK fn_8029A290();
    M2C_UNK fn_802A7294();
    M2C_UNK fn_802A9880();
    M2C_UNK fn_802AADB4();
    M2C_UNK fn_802AB9F4();
    M2C_UNK fn_802B0AE4();
    M2C_UNK fn_802B1574();
    M2C_UNK fn_802B7ABC();
    M2C_UNK fn_802B9314();
    M2C_UNK fn_802BA19C();
    fn_8028DDA0();
    fn_8029A290();
    fn_802A7294();
    fn_802A9880();
    fn_802AADB4();
    fn_802AB9F4();
    fn_802B0AE4();
    fn_802B7ABC();
    fn_802B9314();
    fn_802BA19C();
    fn_802923AC();
    fn_802B1574();
}

void fn_802786B8(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern void fn_802A4B48(s32, s32 *, s32, s32, s32);
    extern void fn_802A661C(s32);
    extern s32 fn_802A6630(s32);
    extern void fn_802A6644(s32);
    extern s32 lbl_804960F0;
    s32 sp8;
    s32 *p = &sp8;

    sp8 = *arg0;
    if (sp8 != 0) {
        fn_802A661C(sp8);
    }
    fn_802A4B48(lbl_804960F0, p, arg1, arg2, arg3);
    if (*arg0 != 0 && fn_802A6630(*arg0) == 0) {
        fn_802A6644(*arg0);
    }
}

void fn_80278950(void) {
    M2C_UNK fn_802A2990(s32);
    extern s32 lbl_804960E8;
    fn_802A2990(lbl_804960E8);
}

s32 fn_80278974(void) {
    return 1;
}

void fn_80279B04(void);
void fn_80279D50(void) {
    fn_80279B04();
}

void fn_80279D00(void);
void fn_80279D70(void) {
    fn_80279D00();
}

s32 fn_8027A564(void) {
    void *fn_8027873C();
    void *temp_r3;
    void *temp_r3_2;

    temp_r3_2 = fn_8027873C();
    if (temp_r3_2 != NULL) {
        temp_r3 = M2C_FIELD(temp_r3_2, void **, 0x50);
        if (temp_r3 != NULL) {
            return M2C_FIELD(temp_r3, s32 *, 0x18);
        }
    }
    return -1;
}

void fn_8027A650(s32 arg0) {
    extern s32 lbl_80494B40;
    extern s32 lbl_804960E4;
    lbl_80494B40 = arg0;
    lbl_804960E4 = 0;
}

extern s32 lbl_80496100;
void fn_8027A680(void (*cb)(void)) {
    lbl_80496100 = cb;
}

f32 fn_8027A688(void) {
    f64 fn_80246DDC();
    return (f32) fn_80246DDC();
}

void fn_8027A79C(s32 arg0) {
    extern s32 lbl_80494B58;
    if (arg0 != 0) {
        lbl_80494B58 = arg0;
    }
}

s32 fn_8027A7D0(void) {
    extern u8 *lbl_804960E8;
    return *(s32 *)(lbl_804960E8 + 0x124C) != 0;
}

void fn_8027A7EC(u8 *arg0) {
    extern void fn_802ADFFC(s32, u16 **, void *);
    extern void fn_802BE53C(u16 **, s32);
    extern s32 lbl_80494D54;
    extern u8 *lbl_80494DA0;
    u16 *sp8;
    u8 *vt;

    vt = *(u8 **)(arg0 + 4);
    fn_802BE53C(&sp8, (*(s32 (**)(void *))(vt + 0x7C))(arg0 + *(s16 *)(vt + 0x78)));
    vt = *(u8 **)(arg0 + 4);
    (*(void (**)(void *))(vt + 0x84))(arg0 + *(s16 *)(vt + 0x80));
    fn_802ADFFC(lbl_80494D54 + 8, &sp8, arg0);
    if (--*sp8 == 0) {
        (*(void (**)(void))(lbl_80494DA0 + 4))();
    }
}

extern s32 lbl_80494B4C;
void fn_8027A894(void (*cb)(void)) {
    lbl_80494B4C = cb;
}

void fn_8027A89C(void) {
    extern s32 lbl_80494B44;
    lbl_80494B44 = 1;
}

void fn_8027A930(void) {
    M2C_UNK fn_8027A8A8(M2C_UNK, M2C_UNK);
    fn_8027A8A8(1, 0xFFFF);
}

void fn_8027A95C(void) {
    fn_8027A8A8(0, 0xFFFF);
}

