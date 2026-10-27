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

extern s32 lbl_804945EC;
u8 *fn_801D6514(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_80416B38[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_80416B38;
    return self;
}

void fn_801D6550(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_80416B38[];
    *(u8 **)(self + 4) = lbl_80416B38;
    fn_801C7588(self);
}

s32 fn_801D6580(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_804365CC;
    if (arg1 == 0) {
        *out = lbl_804365CC;
        return 1;
    }
    return 0;
}

s32 fn_801D65E4(void) {
    return lbl_804945EC;
}

u32 fn_801D65EC(u8 *self, s32 arg1) {
    switch (arg1) {
    case 0:
        return 0xA4D039D8;
    case 1:
        return 0x48168CC9;
    case 2:
        return 0x968E96A1;
    case 3:
        return 0x845E509E;
    default:
        return 0;
    }
}

s32 fn_801D6650(u8 *self, s32 arg1, Unk801D4CC0 *out, f32 *outf) {
    extern s32 fn_801C9664(u8 *, u32, s32);
    extern Unk801D4CC0 lbl_804365FC;
    extern f32 lbl_803DFF54[];
    if (arg1 != 0 && fn_801C9664(self, 0xB394A42F, arg1) == 0) {
        return 0;
    }
    if (out != NULL) {
        *out = lbl_804365FC;
    }
    if (outf != NULL) {
        *outf = lbl_803DFF54[0];
    }
    return 1;
}

void fn_801D6790(void) {
    extern void fn_801D66E0(s32, s32);
    fn_801D66E0(1, 0xFFFF);
}

