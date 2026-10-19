/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80495930;
extern f32 lbl_803CE168[];
extern f32 lbl_80494320;
extern f32 lbl_80495924;
extern f32 lbl_80495928;
extern s32 lbl_80495934;
extern s32 lbl_80495810;
extern s32 lbl_8045B438[];
extern void fn_800A9720(void);
void fn_8003E5E0(s32, s32);
extern u8 *lbl_80496668;
extern u8 *lbl_804961A4;
void fn_800AA018(void);
extern void fn_800A9980(void *);
extern void fn_803349A8(void *, s32);

s32 fn_800A4754(void) {
    M2C_UNK fn_802CA9A8();
    s32 fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494310;
    s32 temp_r30;

    if ((s32) lbl_80494310 == 0) {
        temp_r30 = fn_802D1FC8(0x1C);
        fn_802CA9A8();
        lbl_80494310 = temp_r30;
    }
    return lbl_80494310;
}

s32 fn_800A4964(void) {
    return 1;
}

s32 fn_800A496C(void) {
    return 1;
}

void fn_800A51BC(void) {

}

s32 fn_800A51C0(void) {
    return 0xD6000;
}

s32 fn_800A6154(void) {
    return 0;
}

void fn_800A617C(void *arg0, s32 *arg1) {
    *arg1 = (M2C_FIELD(arg0, u8 *, 0) << 0x18) | (M2C_FIELD(arg0, u8 *, 1) << 0x10) | (M2C_FIELD(arg0, u8 *, 2) << 8) | M2C_FIELD(arg0, u8 *, 3);
}

void fn_800A7388(void *arg0, s32 *arg1) {
    *arg1 = (M2C_FIELD(arg0, u8 *, 0) << 0x18) | (M2C_FIELD(arg0, u8 *, 1) << 0x10) | (M2C_FIELD(arg0, u8 *, 2) << 8) | M2C_FIELD(arg0, u8 *, 3);
}

s32 *fn_800A73B8(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

extern void fn_802D20E8(void *);
void fn_800A73CC(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800A9624(void) {

}

void fn_800A96DC(f32 x) {
    lbl_80494320 = x;
    if (x == lbl_803CE168[0]) {
        lbl_80495924 = lbl_80495928;
        lbl_80495930 = lbl_80495934;
    }
    fn_800A9720();
}

f32 fn_800A9910(void) {
    extern f32 lbl_80495920;
    return lbl_80495920;
}

f32 fn_800A9918(void) {
    extern f32 lbl_80495924;
    return lbl_80495924;
}

extern s32 lbl_8049592C;
s32 fn_800A9920(void) {
    return lbl_8049592C;
}

s32 fn_800A9928(void) {
    return lbl_80495930;
}

extern s32 lbl_8049627C;
s32 fn_800A9930(void) {
    return lbl_8049627C;
}

s32 fn_800A9938(void) {
    return (u32)(lbl_80495810 - 1) <= 2;
}

void *fn_800A9950(void *self) {
    fn_800A9980(self);
    return self;
}

void fn_800A9BAC(s32 *self, s32 arg1) {
    self[0x42] = arg1;
    fn_803349A8(lbl_8045B438, arg1);
}

void fn_800A9C30(void *arg0) {
    M2C_UNK fn_80334CF8(M2C_UNK *, s32);
    fn_80334CF8(&lbl_8045B438, M2C_FIELD(arg0, s32 *, 0x108));
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
}

void fn_800A9C70(void) {

}

s32 fn_800A9C74(void) {
    return 0;
}

void fn_800A9C7C(void) {

}

void fn_800A9C80(void) {

}

extern void fn_800A9CC4(s32);
void fn_800A9C84(s32 self, s32 flags) {
    fn_800A9CC4(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800A9F14(void *self, u8 *arg1) {
    u8 *vt = *(u8 **)(arg1 + 4);
    (*(void (**)(void *, s32, s32))(vt + 0x1AC))(arg1 + *(s16 *)(vt + 0x1A8), 0x22, 0);
}

void fn_800A9F54(void *self, u8 **arg1) {
    u8 *obj = *arg1;
    u8 *vt = *(u8 **)(obj + 4);
    (*(void (**)(void *, s32, s32))(vt + 0x1AC))(obj + *(s16 *)(vt + 0x1A8), 0x22, 0);
    fn_8003E5E0(*(s32 *)(**(u8 ***)arg1 + 0x18), 1);
}

void fn_800AA000(void) {
    extern s32 lbl_8049664C;
    lbl_8049664C = 0;
}

void fn_800AA00C(void) {
    extern s32 lbl_8049664C;
    lbl_8049664C = 1;
}

void fn_800AA018(void) {
    u8 *obj = lbl_80496668;
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *))(vt + 0x6C))(obj + *(s16 *)(vt + 0x68));
    fn_800AA00C();
}

s32 fn_800AA584(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return 0;
}

s32 fn_800AA638(void) {
    return 1;
}

s32 fn_800AA730(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 1U) & 1;
}

s32 fn_800AA73C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 2U) & 1;
}

s32 fn_800AA748(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 3U) & 1;
}

s32 fn_800AA754(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 7U) & 1;
}

s32 fn_800AA760(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 4U) & 1;
}

s32 fn_800AA76C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 5U) & 1;
}

s32 fn_800AA778(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 6U) & 1;
}

void fn_800AA784(void) {

}

void fn_800AA788(void) {

}

void fn_800AAE10(void) {

}

void fn_800AAE74(void) {

}

s32 fn_800AB030(void) {
    return 0;
}

s32 fn_800AB038(void) {
    return 0;
}

void fn_800AB040(void) {

}

void fn_800AB044(void) {

}

void fn_800AB5B4(void) {

}

void fn_800AB5F8(void) {

}

s32 fn_800AB76C(void) {
    return 0;
}

f32 fn_800AB854(void) {
    f32 fn_800AB814();
    extern f32 lbl_804966AC;
    return fn_800AB814() - lbl_804966AC;
}

f32 fn_800AB8A8(void) {
    f32 fn_800AB814();
    extern f32 lbl_804966B0;
    return fn_800AB814() - lbl_804966B0;
}

void fn_800ABD50(void) {

}

