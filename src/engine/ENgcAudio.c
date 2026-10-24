/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041C298[];
extern void fn_802D20E8(void *);
void fn_8033BD7C(void **self, s32 flags) {
    *self = lbl_8041C298;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8033BFF8(void) {

}

s32 fn_8033C4E4(void) {
    return 0;
}

s32 fn_8033C4EC(void) {
    return 0;
}

f32 fn_8033CA64(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 4);
}

f32 fn_8033CB30(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 8);
}

void fn_8033CB94(void) {
    M2C_UNK fn_8035DFE0(s32);
    M2C_UNK fn_8035F938(s32);
    M2C_UNK fn_80385FA8();
    extern s32 lbl_80494F98;
    extern s32 lbl_80494FA8;
    extern s32 lbl_80494FAC;
    if ((s32) lbl_80494F98 != 0) {
        fn_80385FA8();
        fn_8035F938(lbl_80494FA8);
        fn_8035DFE0(lbl_80494FAC);
    }
}

void *fn_8033CBD0(void) {
    void *fn_802D1FC8(M2C_UNK);
    M2C_UNK fn_803BE5CC();
    void *temp_r3;

    temp_r3 = fn_802D1FC8(0x20);
    M2C_FIELD(temp_r3, s32 *, 8) = -1;
    fn_803BE5CC();
    return temp_r3;
}

void fn_8033D098(void *arg0, void *arg1, s32 *arg2) {
    M2C_UNK fn_8035EA90(s32, s32, s32);
    M2C_UNK fn_8035EB9C(s32, s32, s32);
    extern s32 lbl_80494F98;
    extern s32 lbl_80494FAC;

    if (lbl_80494F98 != 0 && arg1 != NULL) {
        if (M2C_FIELD(arg1, s32 *, 0x1C) == 0) {
            fn_8035EA90(lbl_80494FAC, M2C_FIELD(arg1, s32 *, 8), *arg2);
            fn_8035EB9C(lbl_80494FAC, M2C_FIELD(arg1, s32 *, 8), *(arg2 + 1));
        }
    }
}

s32 fn_8033D104(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

void fn_8033D10C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}

void fn_8033D114(s32 arg0, s32 arg1) {
    M2C_UNK fn_8033BDB0(void *);
    M2C_UNK fn_8033BE20(void *, s32);
    extern u8 lbl_8045BC60[];

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8033BDB0(lbl_8045BC60);
        } else {
            fn_8033BE20(lbl_8045BC60, 2);
        }
    }
}

void **fn_8033D168(void **self) {
    *self = lbl_8041C298;
    return self;
}

s32 fn_8033D17C(void **arg0, f32 arg1) {
    extern f32 lbl_803F3EC8[];
    extern f32 lbl_803F3ECC[];
    void *vt;
    s32 clamped;
    f32 v;

    clamped = 0;
    vt = *arg0;
    v = ((f32 (*)(void *))M2C_FIELD(vt, void **, 0x6C))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x68)) + arg1;
    if (v > lbl_803F3EC8[0]) {
        v = lbl_803F3EC8[0];
        clamped = 1;
    } else if (v < lbl_803F3ECC[0]) {
        v = lbl_803F3ECC[0];
        clamped = 1;
    }
    vt = *arg0;
    ((void (*)(void *, f32))M2C_FIELD(vt, void **, 0x64))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x60), v);
    return clamped;
}

void fn_8033D214(void) {

}

void fn_8033D218(void) {

}

void fn_8033D21C(void) {

}

void fn_8033D220(void) {
    void fn_8033D114(s32, s32);
    fn_8033D114(1, 0xFFFF);
}

extern u8 lbl_8045BC60[];
M2C_UNK fn_8033BDB0(void *);
M2C_UNK fn_8033BE20(void *, s32);
void fn_8033D24C(void) {
    void fn_8033D114(s32, s32);
    fn_8033D114(0, 0xFFFF);
}

