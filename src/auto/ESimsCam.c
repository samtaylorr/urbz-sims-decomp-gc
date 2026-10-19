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

f32 fn_8000DBD8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 0x30);
}

void fn_800108B8(void) {

}

s32 fn_80011F30(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x58C);
}

void fn_80014A9C(void) {

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

s32 fn_80014CDC(s32 arg0) {
    return arg0 + 0x434;
}

s32 fn_80014CE4(s32 arg0) {
    return arg0 + 0x434;
}

s32 fn_80014D0C(s32 arg0) {
    return arg0 + 0x18;
}

f32 fn_80014D14(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x458);
}

f32 fn_80014D1C(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x460);
}

void fn_80014D24(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x460) = farg0;
}

s32 fn_80014D2C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

f32 fn_80014D34(char *self) {
    return *(f32 *)(self + 0x45C);
}

s32 fn_80014D3C(char *self) {
    return *(s32 *)(self + 0x3D4);
}

s32 fn_80014D44(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_80014D4C(char *self, s32 value) {
    *(s32 *)(self + 0x578) = value;
}

s32 fn_80014D54(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x578);
}

void fn_80014D5C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x56C) = arg1;
}

u16 fn_80014D64(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x570);
}

s32 fn_80014D6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x574);
}

