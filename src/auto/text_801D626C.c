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


extern s32 lbl_804945E8;
u8 *fn_801D626C(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_80416A58[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_80416A58;
    return self;
}

void fn_801D62A8(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_80416A58[];
    *(u8 **)(self + 4) = lbl_80416A58;
    fn_801C7588(self);
}

s32 fn_801D62D8(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_80436590;
    if (arg1 == 0) {
        *out = lbl_80436590;
        return 1;
    }
    return 0;
}

s32 fn_801D633C(void) {
    return lbl_804945E8;
}

u32 fn_801D6344(u8 *self, s32 arg1) {
    switch (arg1) {
    case 0:
        return 0xFB0E7866;
    case 1:
        return 0x309E230F;
    case 2:
        return 0x19E8F2E9;
    case 3:
        return 0xF621BFB4;
    default:
        return 0;
    }
}

s32 fn_801D63A8(u8 *self, s32 arg1, Unk801D4CC0 *out, f32 *outf) {
    extern s32 fn_801C9664(u8 *, u32, s32);
    extern Unk801D4CC0 lbl_804365C0;
    extern f32 lbl_803DFE40[];
    if (arg1 != 0 && fn_801C9664(self, 0x4E29688A, arg1) == 0) {
        return 0;
    }
    if (out != NULL) {
        *out = lbl_804365C0;
    }
    if (outf != NULL) {
        *outf = lbl_803DFE40[0];
    }
    return 1;
}

void fn_801D6438(s32 init, s32 prio) {
    extern Vec801D4D50 lbl_80436590[4];
    extern Vec801D4D50 lbl_804365C0;
    extern const f32 lbl_803DFE44[];
    extern const f32 lbl_803DFE48[];
    extern const f32 lbl_803DFE4C[];
    extern const f32 lbl_803DFE50[];
    extern const f32 lbl_803DFE54[];
    extern const f32 lbl_803DFE58[];
    extern const f32 lbl_803DFE5C[];
    extern const f32 lbl_803DFE60[];
    extern const f32 lbl_803DFE64[];
    if (prio == 0xFFFF && init != 0) {
        Vec801D4D50 *p = lbl_80436590;
        p->x = lbl_803DFE44[0];
        p->y = lbl_803DFE48[0];
        p->z = lbl_803DFE4C[0];
        p++;
        p->x = lbl_803DFE50[0];
        p->y = lbl_803DFE54[0];
        p->z = lbl_803DFE4C[0];
        p++;
        p->x = lbl_803DFE50[0];
        p->y = lbl_803DFE54[0];
        p->z = lbl_803DFE58[0];
        p++;
        p->x = lbl_803DFE44[0];
        p->y = lbl_803DFE48[0];
        p->z = lbl_803DFE58[0];
        lbl_804365C0.x = lbl_803DFE5C[0];
        lbl_804365C0.y = lbl_803DFE60[0];
        lbl_804365C0.z = lbl_803DFE64[0];
    }
}

void fn_801D64E8(void) {
    extern void fn_801D6438(s32, s32);
    fn_801D6438(1, 0xFFFF);
}

