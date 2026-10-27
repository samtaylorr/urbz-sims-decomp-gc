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


extern s32 lbl_804945E4;
u8 *fn_801D5F34(u8 *self) {
    extern void fn_801C72DC(u8 *);
    extern u8 lbl_80416978[];
    fn_801C72DC(self);
    *(u8 **)(self + 4) = lbl_80416978;
    return self;
}

void fn_801D5F70(u8 *self) {
    extern void fn_801C7588(u8 *);
    extern u8 lbl_80416978[];
    *(u8 **)(self + 4) = lbl_80416978;
    fn_801C7588(self);
}

s32 fn_801D5FA0(u8 *self, s32 arg1, Unk801D4BF0 *out) {
    extern Unk801D4BF0 lbl_80436554;
    if (arg1 == 0) {
        *out = lbl_80436554;
        return 1;
    }
    return 0;
}

s32 fn_801D6004(void) {
    return lbl_804945E4;
}

u32 fn_801D600C(u8 *self, s32 arg1) {
    switch (arg1) {
    case 0:
        return 0xAFE5D090;
    case 1:
        return 0x98374A6B;
    case 2:
        return 0xD75EC344;
    case 3:
        return 0xBC56B39C;
    default:
        return 0;
    }
}

s32 fn_801D6180(void) {
    return 0;
}

s32 fn_801D6188(void) {
    return 0;
}

void fn_801D6190(s32 init, s32 prio) {
    extern Vec801D4D50 lbl_80436554[4];
    extern Vec801D4D50 lbl_80436584;
    extern const f32 lbl_803DFD30[];
    extern const f32 lbl_803DFD34[];
    extern const f32 lbl_803DFD38[];
    extern const f32 lbl_803DFD3C[];
    extern const f32 lbl_803DFD40[];
    extern const f32 lbl_803DFD44[];
    extern const f32 lbl_803DFD48[];
    extern const f32 lbl_803DFD4C[];
    extern const f32 lbl_803DFD50[];
    if (prio == 0xFFFF && init != 0) {
        Vec801D4D50 *p = lbl_80436554;
        p->x = lbl_803DFD30[0];
        p->y = lbl_803DFD34[0];
        p->z = lbl_803DFD38[0];
        p++;
        p->x = lbl_803DFD3C[0];
        p->y = lbl_803DFD40[0];
        p->z = lbl_803DFD38[0];
        p++;
        p->x = lbl_803DFD3C[0];
        p->y = lbl_803DFD40[0];
        p->z = lbl_803DFD44[0];
        p++;
        p->x = lbl_803DFD30[0];
        p->y = lbl_803DFD34[0];
        p->z = lbl_803DFD44[0];
        lbl_80436584.x = lbl_803DFD48[0];
        lbl_80436584.y = lbl_803DFD4C[0];
        lbl_80436584.z = lbl_803DFD50[0];
    }
}

void fn_801D6240(void) {
    extern void fn_801D6190(s32, s32);
    fn_801D6190(1, 0xFFFF);
}

