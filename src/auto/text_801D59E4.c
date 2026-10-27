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


extern s32 lbl_804945DC;
u8 *fn_801D59E4(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_804167B8[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_804167B8;
    return self;
}

void fn_801D5A20(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_804167B8[];
    *(u8 **)(self + 4) = lbl_804167B8;
    fn_801C7588(self);
}

s32 fn_801D5A50(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_804364DC;
    if (arg1 == 0) {
        *out = lbl_804364DC;
        return 1;
    }
    return 0;
}

s32 fn_801D5AB4(void) {
    return lbl_804945DC;
}

void fn_801D5BB0(s32 init, s32 prio) {
    extern Vec801D4D50 lbl_804364DC[4];
    extern Vec801D4D50 lbl_8043650C;
    extern const f32 lbl_803DFB00[];
    extern const f32 lbl_803DFB04[];
    extern const f32 lbl_803DFB08[];
    extern const f32 lbl_803DFB0C[];
    extern const f32 lbl_803DFB10[];
    extern const f32 lbl_803DFB14[];
    extern const f32 lbl_803DFB18[];
    extern const f32 lbl_803DFB1C[];
    extern const f32 lbl_803DFB20[];
    if (prio == 0xFFFF && init != 0) {
        Vec801D4D50 *p = lbl_804364DC;
        p->x = lbl_803DFB00[0];
        p->y = lbl_803DFB04[0];
        p->z = lbl_803DFB08[0];
        p++;
        p->x = lbl_803DFB0C[0];
        p->y = lbl_803DFB10[0];
        p->z = lbl_803DFB08[0];
        p++;
        p->x = lbl_803DFB0C[0];
        p->y = lbl_803DFB10[0];
        p->z = lbl_803DFB14[0];
        p++;
        p->x = lbl_803DFB00[0];
        p->y = lbl_803DFB04[0];
        p->z = lbl_803DFB14[0];
        lbl_8043650C.x = lbl_803DFB18[0];
        lbl_8043650C.y = lbl_803DFB1C[0];
        lbl_8043650C.z = lbl_803DFB20[0];
    }
}

void fn_801D5C60(void) {
    extern void fn_801D5BB0(s32, s32);
    fn_801D5BB0(1, 0xFFFF);
}

