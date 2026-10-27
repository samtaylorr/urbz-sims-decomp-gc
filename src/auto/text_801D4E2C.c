/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    s32 v[12];
} Unk801D4BF0;

typedef struct {
    s32 v[3];
} Unk801D4CC0;

typedef struct {
    f32 x, y, z;
} Vec801D4D50;


extern s32 lbl_804945CC;
u8 *fn_801D4E2C(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_80416438[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_80416438;
    return self;
}

void fn_801D4E68(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_80416438[];
    *(u8 **)(self + 4) = lbl_80416438;
    fn_801C7588(self);
}

s32 fn_801D4E98(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_804363EC;
    if (arg1 == 0) {
        *out = lbl_804363EC;
        return 1;
    }
    return 0;
}

s32 fn_801D4EFC(void) {
    return lbl_804945CC;
}

u32 fn_801D4F04(u8 *self, s32 arg1) {
    switch (arg1) {
    case 0:
        return 0x2A6EF8B3;
    case 1:
        return 0x6E860DB4;
    case 2:
        return 0xDF3F4791;
    case 3:
        return 0xAACCCD9E;
    default:
        return 0;
    }
}

s32 fn_801D4F68(u8 *self, s32 arg1, Unk801D4CC0 *out, f32 *outf) {
    extern s32 fn_801C9664(u8 *, u32, s32);
    extern Unk801D4CC0 lbl_8043641C;
    extern f32 lbl_803DF6A8[];
    if (arg1 != 0 && fn_801C9664(self, 0x702F468C, arg1) == 0) {
        return 0;
    }
    if (out != NULL) {
        *out = lbl_8043641C;
    }
    if (outf != NULL) {
        *outf = lbl_803DF6A8[0];
    }
    return 1;
}

void fn_801D4FF8(s32 init, s32 prio) {
    extern Vec801D4D50 lbl_804363EC[4];
    extern Vec801D4D50 lbl_8043641C;
    extern const f32 lbl_803DF6AC[];
    extern const f32 lbl_803DF6B0[];
    extern const f32 lbl_803DF6B4[];
    extern const f32 lbl_803DF6B8[];
    extern const f32 lbl_803DF6BC[];
    extern const f32 lbl_803DF6C0[];
    extern const f32 lbl_803DF6C4[];
    extern const f32 lbl_803DF6C8[];
    extern const f32 lbl_803DF6CC[];
    if (prio == 0xFFFF && init != 0) {
        Vec801D4D50 *p = lbl_804363EC;
        p->x = lbl_803DF6AC[0];
        p->y = lbl_803DF6B0[0];
        p->z = lbl_803DF6B4[0];
        p++;
        p->x = lbl_803DF6B8[0];
        p->y = lbl_803DF6BC[0];
        p->z = lbl_803DF6B4[0];
        p++;
        p->x = lbl_803DF6B8[0];
        p->y = lbl_803DF6BC[0];
        p->z = lbl_803DF6C0[0];
        p++;
        p->x = lbl_803DF6AC[0];
        p->y = lbl_803DF6B0[0];
        p->z = lbl_803DF6C0[0];
        lbl_8043641C.x = lbl_803DF6C4[0];
        lbl_8043641C.y = lbl_803DF6C8[0];
        lbl_8043641C.z = lbl_803DF6CC[0];
    }
}

void fn_801D50A8(void) {
    extern void fn_801D4FF8(s32, s32);
    fn_801D4FF8(1, 0xFFFF);
}

