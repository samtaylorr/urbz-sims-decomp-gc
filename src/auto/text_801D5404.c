/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    s32 v[3];
} Unk801D4CC0;
typedef struct {
    s32 v[58];
} Unk801D5210;

typedef struct {
    s32 v[12];
} Unk801D4BF0;

typedef struct {
    f32 x, y, z;
} Vec801D4D50;


extern s32 lbl_804945D4;
u8 *fn_801D5404(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_804165F8[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_804165F8;
    return self;
}

void fn_801D5440(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_804165F8[];
    *(u8 **)(self + 4) = lbl_804165F8;
    fn_801C7588(self);
}

s32 fn_801D5470(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_80436464;
    if (arg1 == 0) {
        *out = lbl_80436464;
        return 1;
    }
    return 0;
}

s32 fn_801D54D4(void) {
    return lbl_804945D4;
}

u32 fn_801D54DC(u8 *self, s32 arg1) {
    switch (arg1) {
    case 0:
        return 0x404AEFEB;
    case 1:
        return 0x4C80B446;
    case 2:
        return 0xDB900C27;
    case 3:
        return 0xF95D5817;
    default:
        return 0;
    }
}

s32 fn_801D5540(u8 *self, u8 *arg1, Unk801D4CC0 *out, f32 *outf) {
    extern Unk801D5210 fn_801C9A9C(s32);
    extern Unk801D4CC0 lbl_80436494;
    extern f32 lbl_803DF8D4[];
    if (arg1 != NULL) {
        *(Unk801D5210 *)arg1 = fn_801C9A9C(0);
        arg1[0x85] = 3;
        arg1[0x87] = 0;
        arg1[0x88] = 2;
        arg1[0x89] = 1;
        arg1[0x8B] = 1;
        arg1[0x8C] = 2;
    }
    if (out != NULL) {
        *out = lbl_80436494;
    }
    if (outf != NULL) {
        *outf = lbl_803DF8D4[0];
    }
    return 1;
}

s32 fn_801D5650(void) {
    return 0;
}

s32 fn_801D5658(void) {
    return 0;
}

void fn_801D5660(s32 init, s32 prio) {
    extern Vec801D4D50 lbl_80436464[4];
    extern Vec801D4D50 lbl_80436494;
    extern const f32 lbl_803DF8D8[];
    extern const f32 lbl_803DF8DC[];
    extern const f32 lbl_803DF8E0[];
    extern const f32 lbl_803DF8E4[];
    extern const f32 lbl_803DF8E8[];
    extern const f32 lbl_803DF8EC[];
    extern const f32 lbl_803DF8F0[];
    extern const f32 lbl_803DF8F4[];
    extern const f32 lbl_803DF8F8[];
    if (prio == 0xFFFF && init != 0) {
        Vec801D4D50 *p = lbl_80436464;
        p->x = lbl_803DF8D8[0];
        p->y = lbl_803DF8DC[0];
        p->z = lbl_803DF8E0[0];
        p++;
        p->x = lbl_803DF8E4[0];
        p->y = lbl_803DF8E8[0];
        p->z = lbl_803DF8E0[0];
        p++;
        p->x = lbl_803DF8E4[0];
        p->y = lbl_803DF8E8[0];
        p->z = lbl_803DF8EC[0];
        p++;
        p->x = lbl_803DF8D8[0];
        p->y = lbl_803DF8DC[0];
        p->z = lbl_803DF8EC[0];
        lbl_80436494.x = lbl_803DF8F0[0];
        lbl_80436494.y = lbl_803DF8F4[0];
        lbl_80436494.z = lbl_803DF8F8[0];
    }
}

void fn_801D5710(void) {
    extern void fn_801D5660(s32, s32);
    fn_801D5660(1, 0xFFFF);
}

