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


extern s32 lbl_804945E0;
u8 *fn_801D5C8C(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_80416898[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_80416898;
    return self;
}

void fn_801D5CC8(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_80416898[];
    *(u8 **)(self + 4) = lbl_80416898;
    fn_801C7588(self);
}

s32 fn_801D5CF8(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_80436518;
    if (arg1 == 0) {
        *out = lbl_80436518;
        return 1;
    }
    return 0;
}

s32 fn_801D5D5C(void) {
    return lbl_804945E0;
}

u32 fn_801D5D64(u8 *self, s32 arg1) {
    switch (arg1) {
    case 0:
        return 0xAB846937;
    case 1:
        return 0xC346ECC8;
    case 2:
        return 0x78567DFB;
    case 3:
        return 0xF3D23068;
    default:
        return 0;
    }
}

s32 fn_801D5DC8(u8 *self, s32 arg1, Unk801D4CC0 *out, f32 *outf) {
    extern s32 fn_801C9664(u8 *, u32, s32);
    extern Unk801D4CC0 lbl_80436548;
    extern f32 lbl_803DFC14[];
    if (arg1 != 0 && fn_801C9664(self, 0x46CE5C59, arg1) == 0) {
        return 0;
    }
    if (out != NULL) {
        *out = lbl_80436548;
    }
    if (outf != NULL) {
        *outf = lbl_803DFC14[0];
    }
    return 1;
}

void fn_801D5F08(void) {
    extern void fn_801D5E58(s32, s32);
    fn_801D5E58(1, 0xFFFF);
}

