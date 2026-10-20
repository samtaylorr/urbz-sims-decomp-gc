/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_804945C8;

typedef struct {
    s32 v[12];
} Unk801D4BF0;

typedef struct {
    s32 v[3];
} Unk801D4CC0;

typedef struct {
    f32 x, y, z;
} Vec801D4D50;

u8 *fn_801D4B84(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_80416358[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_80416358;
    return self;
}

void fn_801D4BC0(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_80416358[];
    *(u8 **)(self + 4) = lbl_80416358;
    fn_801C7588(self);
}

s32 fn_801D4BF0(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_804363B0;
    if (arg1 == 0) {
        *out = lbl_804363B0;
        return 1;
    }
    return 0;
}

s32 fn_801D4C54(void) {
    return lbl_804945C8;
}

u32 fn_801D4C5C(u8 *self, s32 arg1) {
    switch (arg1) {
    case 0:
        return 0x0AD63ACB;
    case 1:
        return 0xA8B8ADD0;
    case 2:
        return 0xED4691AB;
    case 3:
        return 0xE0D5567F;
    default:
        return 0;
    }
}

s32 fn_801D4CC0(u8 *self, s32 arg1, Unk801D4CC0 *out, f32 *outf) {
    extern s32 fn_801C9664(u8 *, u32, s32);
    extern Unk801D4CC0 lbl_804363E0;
    extern f32 lbl_803DF590[];
    if (arg1 != 0 && fn_801C9664(self, 0x4DB60C30, arg1) == 0) {
        return 0;
    }
    if (out != NULL) {
        *out = lbl_804363E0;
    }
    if (outf != NULL) {
        *outf = lbl_803DF590[0];
    }
    return 1;
}

void fn_801D4E00(void) {
    M2C_UNK fn_801D4D50(M2C_UNK, M2C_UNK);
    fn_801D4D50(1, 0xFFFF);
}

