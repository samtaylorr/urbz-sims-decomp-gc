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

extern s32 lbl_804945F4;
u8 *fn_801D6A64(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_80416CF8[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_80416CF8;
    return self;
}

void fn_801D6AA0(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_80416CF8[];
    *(u8 **)(self + 4) = lbl_80416CF8;
    fn_801C7588(self);
}

s32 fn_801D6AD0(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_80436644;
    if (arg1 == 0) {
        *out = lbl_80436644;
        return 1;
    }
    return 0;
}

s32 fn_801D6B34(void) {
    return lbl_804945F4;
}

u32 fn_801D6B3C(u8 *self, s32 arg1) {
    switch (arg1) {
    case 0:
        return 0x9AC7C332;
    case 1:
        return 0x1F55BFF8;
    case 2:
        return 0xBD0882D5;
    case 3:
        return 0xD5D71397;
    default:
        return 0;
    }
}

s32 fn_801D6BA0(u8 *self, s32 arg1, Unk801D4CC0 *out, f32 *outf) {
    extern s32 fn_801C9664(u8 *, u32, s32);
    extern Unk801D4CC0 lbl_80436674;
    extern f32 lbl_803E017C[];
    if (arg1 != 0 && fn_801C9664(self, 0x4E297CC0, arg1) == 0) {
        return 0;
    }
    if (out != NULL) {
        *out = lbl_80436674;
    }
    if (outf != NULL) {
        *outf = lbl_803E017C[0];
    }
    return 1;
}

void fn_801D6CE0(void) {
    extern void fn_801D6C30(s32, s32);
    fn_801D6C30(1, 0xFFFF);
}

