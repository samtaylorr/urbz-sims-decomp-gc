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


extern s32 lbl_804945D8;
u8 *fn_801D573C(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_804166D8[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_804166D8;
    return self;
}

void fn_801D5778(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_804166D8[];
    *(u8 **)(self + 4) = lbl_804166D8;
    fn_801C7588(self);
}

s32 fn_801D57A8(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_804364A0;
    if (arg1 == 0) {
        *out = lbl_804364A0;
        return 1;
    }
    return 0;
}

s32 fn_801D580C(void) {
    return lbl_804945D8;
}

s32 fn_801D5878(u8 *self, s32 arg1, Unk801D4CC0 *out, f32 *outf) {
    extern s32 fn_801C9664(u8 *, u32, s32);
    extern Unk801D4CC0 lbl_804364D0;
    extern f32 lbl_803DF9E8[];
    if (arg1 != 0 && fn_801C9664(self, 0x4DEB3722, arg1) == 0) {
        return 0;
    }
    if (out != NULL) {
        *out = lbl_804364D0;
    }
    if (outf != NULL) {
        *outf = lbl_803DF9E8[0];
    }
    return 1;
}

void fn_801D5908(s32 init, s32 prio) {
    extern Vec801D4D50 lbl_804364A0[4];
    extern Vec801D4D50 lbl_804364D0;
    extern const f32 lbl_803DF9EC[];
    extern const f32 lbl_803DF9F0[];
    extern const f32 lbl_803DF9F4[];
    extern const f32 lbl_803DF9F8[];
    extern const f32 lbl_803DF9FC[];
    extern const f32 lbl_803DFA00[];
    extern const f32 lbl_803DFA04[];
    extern const f32 lbl_803DFA08[];
    extern const f32 lbl_803DFA0C[];
    if (prio == 0xFFFF && init != 0) {
        Vec801D4D50 *p = lbl_804364A0;
        p->x = lbl_803DF9EC[0];
        p->y = lbl_803DF9F0[0];
        p->z = lbl_803DF9F4[0];
        p++;
        p->x = lbl_803DF9F8[0];
        p->y = lbl_803DF9FC[0];
        p->z = lbl_803DF9F4[0];
        p++;
        p->x = lbl_803DF9F8[0];
        p->y = lbl_803DF9FC[0];
        p->z = lbl_803DFA00[0];
        p++;
        p->x = lbl_803DF9EC[0];
        p->y = lbl_803DF9F0[0];
        p->z = lbl_803DFA00[0];
        lbl_804364D0.x = lbl_803DFA04[0];
        lbl_804364D0.y = lbl_803DFA08[0];
        lbl_804364D0.z = lbl_803DFA0C[0];
    }
}

void fn_801D59B8(void) {
    extern void fn_801D5908(s32, s32);
    fn_801D5908(1, 0xFFFF);
}

