/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    s32 v[12];
} Unk801D4BF0;

typedef struct {
    f32 x, y, z;
} Vec801D4D50;


extern s32 lbl_804945D0;
u8 *fn_801D50D4(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_80416518[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_80416518;
    return self;
}

void fn_801D5110(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_80416518[];
    *(u8 **)(self + 4) = lbl_80416518;
    fn_801C7588(self);
}

s32 fn_801D5140(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_80436428;
    if (arg1 == 0) {
        *out = lbl_80436428;
        return 1;
    }
    return 0;
}

s32 fn_801D51A4(void) {
    return lbl_804945D0;
}

u32 fn_801D51AC(u8 *self, s32 arg1) {
    switch (arg1) {
    case 0:
        return 0xF213DAB0;
    case 1:
        return 0x45CDD1A9;
    case 2:
        return 0x20B9C82B;
    case 3:
        return 0xC9E1EA9B;
    }
    return 0;
}

void fn_801D5328(s32 init, s32 prio) {
    extern Vec801D4D50 lbl_80436428[4];
    extern Vec801D4D50 lbl_80436458;
    extern const f32 lbl_803DF7C0[];
    extern const f32 lbl_803DF7C4[];
    extern const f32 lbl_803DF7C8[];
    extern const f32 lbl_803DF7CC[];
    extern const f32 lbl_803DF7D0[];
    extern const f32 lbl_803DF7D4[];
    extern const f32 lbl_803DF7D8[];
    extern const f32 lbl_803DF7DC[];
    extern const f32 lbl_803DF7E0[];
    if (prio == 0xFFFF && init != 0) {
        Vec801D4D50 *p = lbl_80436428;
        p->x = lbl_803DF7C0[0];
        p->y = lbl_803DF7C4[0];
        p->z = lbl_803DF7C8[0];
        p++;
        p->x = lbl_803DF7CC[0];
        p->y = lbl_803DF7D0[0];
        p->z = lbl_803DF7C8[0];
        p++;
        p->x = lbl_803DF7CC[0];
        p->y = lbl_803DF7D0[0];
        p->z = lbl_803DF7D4[0];
        p++;
        p->x = lbl_803DF7C0[0];
        p->y = lbl_803DF7C4[0];
        p->z = lbl_803DF7D4[0];
        lbl_80436458.x = lbl_803DF7D8[0];
        lbl_80436458.y = lbl_803DF7DC[0];
        lbl_80436458.z = lbl_803DF7E0[0];
    }
}

void fn_801D53D8(void) {
    fn_801D5328(1, 0xFFFF);
}

