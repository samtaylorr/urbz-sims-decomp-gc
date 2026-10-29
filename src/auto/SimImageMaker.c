/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { s32 w[0xE0 / 4]; } SimImgBlockE0;
typedef struct { f32 x, y, z; } SimImgVec3;

void fn_8009CC04(u32 arg0, u8 *arg1) {
    u8 a = arg0 >> 24;
    u8 r = arg0 >> 16;
    u8 g = arg0 >> 8;
    u8 b = arg0;
    arg1[0] = a;
    arg1[1] = r;
    arg1[2] = g;
    arg1[3] = b;
}

void fn_8009CC24(void *arg0, s32 *arg1) {
    *arg1 = (M2C_FIELD(arg0, u8 *, 0) << 0x18) | (M2C_FIELD(arg0, u8 *, 1) << 0x10) | (M2C_FIELD(arg0, u8 *, 2) << 8) | M2C_FIELD(arg0, u8 *, 3);
}

u32 fn_8009CC54(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    u32 b = (arg0 & 0xFF) + (arg1 & 0xFF) + (arg2 & 0xFF) + (arg3 & 0xFF);
    u32 g = ((arg0 >> 8) & 0xFF) + ((arg1 >> 8) & 0xFF) + ((arg2 >> 8) & 0xFF) + ((arg3 >> 8) & 0xFF);
    u32 r = ((arg0 >> 16) & 0xFF) + ((arg1 >> 16) & 0xFF) + ((arg2 >> 16) & 0xFF) + ((arg3 >> 16) & 0xFF);
    u32 a = (arg0 >> 24) + (arg1 >> 24) + (arg2 >> 24) + (arg3 >> 24);
    return (b >> 2) | ((g << 6) & 0x1FF00) | ((r << 14) & 0x1FF0000) | ((a >> 2) << 24);
}

void *fn_8009CCE4(void *arg0) {
    M2C_UNK fn_8009CD8C(void *);
    M2C_UNK fn_802E55C0(s32);
    s32 var_ctr;
    s32 var_ctr_2;

    fn_802E55C0(arg0 + 0xC);
    var_ctr = 3;
    do {
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_ctr_2 = 4;
    do {
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
    M2C_FIELD(arg0, s32 *, 0x1F4) = 0;
    fn_8009CD8C(arg0);
    return arg0;
}

void fn_8009CD40(s32 arg0, s32 arg1) {
    void fn_8009CD8C(s32);
    void fn_802D20E8(s32);
    void fn_802E56A0(s32, s32);
    fn_8009CD8C(arg0);
    fn_802E56A0(arg0 + 0xC, 2);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8009D0F8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
}

void fn_8009D100(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
}

void fn_8009D108(void *arg0, s32 arg1, s32 arg2) {
    struct { char pad[0x8C]; s32 arr[1]; } *self = arg0;
    if (arg1 <= 0x16) {
        self->arr[arg1] = arg2;
    }
}

void fn_8009D120(s32 *self, s32 a, s32 b, s32 c) {
    self[2] = c;
    self[0] = a;
    self[1] = b;
}

void fn_8009D130(char *self, SimImgBlockE0 *src) {
    *(SimImgBlockE0 *)(self + 0xE8) = *src;
}

void fn_8009D18C(char *self, s32 a, SimImgVec3 *b, SimImgVec3 *c, SimImgVec3 *d, f32 f) {
    *(s32 *)(self + 0x1F0) = a;
    *(SimImgVec3 *)(self + 0x1C8) = *b;
    *(SimImgVec3 *)(self + 0x1D4) = *c;
    *(SimImgVec3 *)(self + 0x1E0) = *d;
    *(f32 *)(self + 0x1EC) = f;
}

void fn_8009D1EC(char *self, void *name) {
    extern void fn_8031EA2C(void *);
    extern void *fn_8033740C(void *, void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    if (*(void **)(self + 0x1F4) != NULL) {
        fn_8031EA2C(*(void **)(self + 0x1F4));
        *(void **)(self + 0x1F4) = NULL;
    }
    if (name != NULL) {
        *(void **)(self + 0x1F4) = fn_8033740C(lbl_8045BAE8, name, 0, 0);
    }
}

void fn_8009E9A8(void) {
    M2C_UNK fn_8009E964(M2C_UNK, M2C_UNK);
    fn_8009E964(1, 0xFFFF);
}

