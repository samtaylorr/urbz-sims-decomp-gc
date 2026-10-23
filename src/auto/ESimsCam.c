/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } Vec3f;

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void fn_802D20E8(void *);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_80248488(void *, s32, u32);

static inline void *ESimsCam_AllocAligned(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void fn_8000D48C(void *arg0) {
    f32 temp_f13;

    temp_f13 = M2C_FIELD(arg0, f32 *, 4);
    if (M2C_FIELD(arg0, f32 *, 8) < temp_f13) {
        M2C_FIELD(arg0, f32 *, 8) = temp_f13;
    }
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) M2C_FIELD(arg0, f32 *, 4);
}

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

f32 fn_8000DB6C(void *arg0) {
    f32 temp_f13;
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 8);
    temp_f13 = M2C_FIELD(temp_r9, f32 *, 4);
    return (M2C_FIELD(arg0, f32 *, 0x458) - temp_f13) / (M2C_FIELD(temp_r9, f32 *, 8) - temp_f13);
}

f32 fn_8000DBD8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 0x30);
}

void fn_800108B8(void) {

}

f32 fn_800111A4(void *arg0) {
    f32 temp_f11;
    f32 temp_f12;
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 8);
    temp_f11 = M2C_FIELD(temp_r9, f32 *, 4);
    temp_f12 = M2C_FIELD(temp_r9, f32 *, 0x20);
    return (((M2C_FIELD(arg0, f32 *, 0x458) - temp_f11) / (M2C_FIELD(temp_r9, f32 *, 8) - temp_f11)) * (M2C_FIELD(temp_r9, f32 *, 0x24) - temp_f12)) + temp_f12;
}

void fn_800113C4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x580) = arg1;
    M2C_FIELD(arg0, s32 *, 0x584) = arg2;
    M2C_FIELD(arg0, s32 *, 0x588) = arg3;
    if (arg4 != 0) {
        M2C_FIELD(arg0, s32 *, 0x47C) = 1;
    }
}

s32 fn_80011F24(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x58C) = arg1;
    return 1;
}

s32 fn_80011F30(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x58C);
}

s32 fn_80011F38(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x58C) = 0;
    return 1;
}

void fn_80012108(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80012148();
    if (((arg1 != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x168) != arg1)) || (arg2 != 0)) {
        M2C_FIELD(arg0, s32 *, 0x168) = arg1;
        fn_80012148();
    }
}

void fn_80014164(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s32 *, 0x238) ^ 1) & 1) {
        M2C_FIELD(arg0, s32 *, 0x22C) = arg1;
    }
}

s32 fn_800148B8(void *arg0) {
    s32 fn_80049B6C(void *);
    extern u8 lbl_8041F94C[];
    s32 ret;

    ret = 0;
    if (M2C_FIELD(arg0, s32 *, 0x164) == 1) {
        ret = fn_80049B6C(lbl_8041F94C) == 0;
    }
    return ret;
}

void fn_80014A9C(void) {

}

void *fn_80014B68(void *arg0) {
    M2C_UNK fn_802E1BF4(void *);
    M2C_UNK fn_802E55C0(void *);
    extern u8 lbl_80406C80[];
    s32 var_ctr;
    s32 var_ctr_2;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, u8 **, 4) = lbl_80406C80;
    fn_802E1BF4(arg0 + 0x18);
    var_ctr = 4;
    do {
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_ctr_2 = 4;
    do {
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
    fn_802E55C0(arg0 + 0x4F4);
    return arg0;
}

void *fn_80014BD0(u32 size) {
    void *p = ESimsCam_AllocAligned(size);

    fn_80248488(p, 0, size);
    return p;
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

void fn_80014CEC(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x44C) = *arg1;
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

void fn_80014D74(void) {
    M2C_UNK fn_80014AA0(M2C_UNK, M2C_UNK);
    fn_80014AA0(1, 0xFFFF);
}

void fn_80014DA0(void) {
    void fn_80014AA0(s32, s32);
    fn_80014AA0(0, 0xFFFF);
}

