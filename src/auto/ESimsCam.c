/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void fn_802D20E8(void *);
void fn_8000D4C8(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8000D4F0(s32 *self, s32 value) {
    *self = value;
}

s32 fn_8000D4F8(s32 *self) {
    return *self;
}

void fn_8000D500(char *self, Vec3 *a, Vec3 *b, Vec3 *c) {
    *(Vec3 *)(self + 0x8) = *a;
    *(Vec3 *)(self + 0x14) = *b;
    *(Vec3 *)(self + 0x20) = *c;
}

void fn_80014C94(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80014CC8(void) {
}

char *fn_80014CCC(char *self) {
    return self + 0x428;
}

char *fn_80014CD4(char *self) {
    return self + 0x44C;
}

s32 fn_80014D3C(char *self) {
    return *(s32 *)(self + 0x3D4);
}

s32 fn_80014D44(char *self) {
    return *(s32 *)(self + 0xC);
}

