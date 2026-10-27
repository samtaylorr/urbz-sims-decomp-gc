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


extern s32 lbl_804945F0;
u8 *fn_801D67BC(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_80416C18[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_80416C18;
    return self;
}

void fn_801D67F8(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_80416C18[];
    *(u8 **)(self + 4) = lbl_80416C18;
    fn_801C7588(self);
}

s32 fn_801D6828(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_80436608;
    if (arg1 == 0) {
        *out = lbl_80436608;
        return 1;
    }
    return 0;
}

s32 fn_801D688C(void) {
    return lbl_804945F0;
}

u32 fn_801D6894(u8 *self, s32 arg1) {
    switch (arg1) {
    case 0:
        return 0xF72C10DD;
    case 1:
        return 0x3F6FE991;
    case 2:
        return 0xE8DB58A0;
    case 3:
        return 0xE199F03D;
    default:
        return 0;
    }
}

s32 fn_801D68F8(u8 *self, s32 arg1, Unk801D4CC0 *out, f32 *outf) {
    extern s32 fn_801C9664(u8 *, u32, s32);
    extern Unk801D4CC0 lbl_80436638;
    extern f32 lbl_803E0068[];
    if (arg1 != 0 && fn_801C9664(self, 0x4DC4FFAF, arg1) == 0) {
        return 0;
    }
    if (out != NULL) {
        *out = lbl_80436638;
    }
    if (outf != NULL) {
        *outf = lbl_803E0068[0];
    }
    return 1;
}

void fn_801D6988(s32 init, s32 prio) {
    extern Vec801D4D50 lbl_80436608[4];
    extern Vec801D4D50 lbl_80436638;
    extern const f32 lbl_803E006C[];
    extern const f32 lbl_803E0070[];
    extern const f32 lbl_803E0074[];
    extern const f32 lbl_803E0078[];
    extern const f32 lbl_803E007C[];
    extern const f32 lbl_803E0080[];
    extern const f32 lbl_803E0084[];
    extern const f32 lbl_803E0088[];
    extern const f32 lbl_803E008C[];
    if (prio == 0xFFFF && init != 0) {
        Vec801D4D50 *p = lbl_80436608;
        p->x = lbl_803E006C[0];
        p->y = lbl_803E0070[0];
        p->z = lbl_803E0074[0];
        p++;
        p->x = lbl_803E0078[0];
        p->y = lbl_803E007C[0];
        p->z = lbl_803E0074[0];
        p++;
        p->x = lbl_803E0078[0];
        p->y = lbl_803E007C[0];
        p->z = lbl_803E0080[0];
        p++;
        p->x = lbl_803E006C[0];
        p->y = lbl_803E0070[0];
        p->z = lbl_803E0080[0];
        lbl_80436638.x = lbl_803E0084[0];
        lbl_80436638.y = lbl_803E0088[0];
        lbl_80436638.z = lbl_803E008C[0];
    }
}

void fn_801D6A38(void) {
    extern void fn_801D6988(s32, s32);
    fn_801D6988(1, 0xFFFF);
}

