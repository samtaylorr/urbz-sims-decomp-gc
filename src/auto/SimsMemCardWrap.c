/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80495930;
extern f32 lbl_803CE168[];
extern f32 lbl_80494320;
extern f32 lbl_80495924;
extern f32 lbl_80495928;
extern s32 lbl_80495934;
extern s32 lbl_80495810;
extern s32 lbl_8045B438[];
extern void fn_800A9720(void);
extern void fn_800A9980(void *);
extern void fn_803349A8(void *);

s32 fn_800A4964(void) {
    return 1;
}

s32 fn_800A496C(void) {
    return 1;
}

s32 fn_800A6154(void) {
    return 0;
}

extern void fn_802D20E8(void *);
void fn_800A73CC(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800A96DC(f32 x) {
    lbl_80494320 = x;
    if (x == lbl_803CE168[0]) {
        lbl_80495924 = lbl_80495928;
        lbl_80495930 = lbl_80495934;
    }
    fn_800A9720();
}

extern s32 lbl_8049592C;
s32 fn_800A9920(void) {
    return lbl_8049592C;
}

s32 fn_800A9928(void) {
    return lbl_80495930;
}

extern s32 lbl_8049627C;
s32 fn_800A9930(void) {
    return lbl_8049627C;
}

s32 fn_800A9938(void) {
    return (u32)(lbl_80495810 - 1) <= 2;
}

void *fn_800A9950(void *self) {
    fn_800A9980(self);
    return self;
}

void fn_800A9BAC(s32 *self, s32 arg1) {
    self[0x42] = arg1;
    fn_803349A8(lbl_8045B438);
}

s32 fn_800A9C74(void) {
    return 0;
}

s32 fn_800AA638(void) {
    return 1;
}

s32 fn_800AB030(void) {
    return 0;
}

s32 fn_800AB038(void) {
    return 0;
}

s32 fn_800AB76C(void) {
    return 0;
}

