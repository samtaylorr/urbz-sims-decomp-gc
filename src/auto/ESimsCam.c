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

char *fn_8000CA9C(char *self, s32 arg1, s32 arg2, char *arg3) {
    extern u8 lbl_8045BBA0[];
    extern void fn_803374C8(void *);
    void fn_8000CB1C(char *);

    *(s32 *)(self + 0x4) = *(s32 *)(arg3 + 0x0);
    ((f32 *)(self + 0x10))[0] = *(f32 *)(arg3 + 0x8);
    ((f32 *)(self + 0x10))[1] = *(f32 *)(arg3 + 0xC);
    ((f32 *)(self + 0x10))[2] = *(f32 *)(arg3 + 0x10);
    *(s32 *)(self + 0x0) = arg2;
    *(s32 *)(self + 0x28) = 0;
    *(s32 *)(self + 0x24) = 0;
    *(s32 *)(self + 0x20) = 0;
    *(s32 *)(self + 0x1C) = arg1;
    fn_803374C8(lbl_8045BBA0);
    fn_8000CB1C(self);
    return self;
}

void fn_8000D458(void *self, s32 flags) {
    extern u8 lbl_80406CC8[];
    M2C_FIELD(self, void **, 0x18C) = lbl_80406CC8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
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

s32 *fn_8000D4B4(s32 *self, s32 value) {
    self[0] = 0;
    self[1] = value;
    return self;
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

void fn_8000D664(s32 *self) {
    void fn_8000D7E4(s32 *);
    void fn_8000D558(s32 *);
    switch (*self) {
    case 1:
        fn_8000D7E4(self);
        break;
    case 0:
    default:
        fn_8000D558(self);
        break;
    }
}

void fn_8000DAD4(void *arg0, s32 flags) {
    extern u8 lbl_80406C80[];
    extern u8 lbl_80406CE0[];
    void fn_802E5EA4(void *);
    void fn_802E56A0(void *, s32);
    void fn_80309AE0(void *, s32);
    struct {
        u8 pad0[0x4];
        void *vt;
        s32 unk8;
        u8 pad1[0x4F4 - 0xC];
        u8 unk4F4[0x57C - 0x4F4];
        void *unk57C;
    } *self = arg0;

    self->vt = lbl_80406C80;
    if (self->unk57C != NULL) {
        fn_8000D4C8(self->unk57C, 3);
    }
    fn_802E5EA4(self->unk4F4);
    self->unk8 = 0;
    fn_802E56A0(self->unk4F4, 2);
    fn_80309AE0((u8 *)self + 0x18, 0);
    self->vt = lbl_80406CE0;
    if (flags & 1) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), self);
    }
}

f32 fn_8000DB6C(void *arg0) {
    f32 temp_f13;
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 8);
    temp_f13 = M2C_FIELD(temp_r9, f32 *, 4);
    return (M2C_FIELD(arg0, f32 *, 0x458) - temp_f13) / (M2C_FIELD(temp_r9, f32 *, 8) - temp_f13);
}

f32 fn_8000DB8C(void *arg0) {
    extern const f32 lbl_803C1EF4[];
    f32 t;
    void *temp_r11;

    t = fn_8000DB6C(arg0);
    temp_r11 = M2C_FIELD(arg0, void **, 8);
    return M2C_FIELD(temp_r11, f32 *, 0x38) * t + M2C_FIELD(temp_r11, f32 *, 0x34) * (lbl_803C1EF4[0] - t);
}

f32 fn_8000DBD8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 0x30);
}

f32 fn_8000DBE4(void *arg0) {
    extern const f32 lbl_803C1EF8[];
    f32 t;
    void *temp_r11;

    t = fn_8000DB6C(arg0);
    temp_r11 = M2C_FIELD(arg0, void **, 8);
    return M2C_FIELD(temp_r11, f32 *, 0x2C) * t + M2C_FIELD(temp_r11, f32 *, 0x28) * (lbl_803C1EF8[0] - t);
}

void fn_8000DC30(void *arg0, f32 arg1) {
    f32 temp_f11;
    f32 temp_f13;
    f32 temp_f10;
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 8);
    temp_f11 = M2C_FIELD(temp_r9, f32 *, 0x28);
    temp_f10 = M2C_FIELD(temp_r9, f32 *, 4);
    temp_f13 = M2C_FIELD(temp_r9, f32 *, 0x2C) - temp_f11;
    M2C_FIELD(arg0, f32 *, 0x458) = ((arg1 - temp_f11) * (M2C_FIELD(temp_r9, f32 *, 8) - temp_f10) + temp_f10 * temp_f13) / temp_f13;
}

void fn_8000DC64(void *arg0) {
    s32 fn_80049B6C(void *);
    void fn_800108BC(void *, void *);
    void fn_802E22D0(void *, f32 *);
    extern u8 lbl_8041F94C[];
    extern const f32 lbl_803C1EFC[];
    extern const f32 lbl_803C1F00[];
    f32 buf[4];
    f32 *v;
    f32 zero;
    f32 one;

    if (fn_80049B6C(lbl_8041F94C) != 0) {
        fn_800108BC(arg0, (u8 *)arg0 + 0x18);
        zero = lbl_803C1EFC[0];
        one = lbl_803C1F00[0];
        v = buf;
        buf[0] = zero;
        v[1] = zero;
        v[2] = one;
        v[3] = one;
        fn_802E22D0((u8 *)arg0 + 0x18, v);
    }
}

void fn_8000DCE0(char *self) {
    extern f32 lbl_803C1F04;
    extern s32 lbl_8041FBC4[];
    extern s32 lbl_80493F20;
    void fn_8000F5AC(char *, f32);

    *(s32 *)(self + 0x578) = 0;
    *(s32 *)(self + 0x588) = 0;
    *(s32 *)(self + 0x47C) = 0;
    *(s32 *)(self + 0x3E0) = 0;
    *(s32 *)(self + 0x584) = 0;
    *(s32 *)(self + 0x580) = 0;
    fn_8000F5AC(self, lbl_803C1F04);
    if (lbl_8041FBC4[0] != 0) {
        lbl_80493F20 = 1;
    }
    *(s32 *)(self + 0x49C) = -1;
    *(s32 *)(self + 0x3DC) = 0;
    *(s32 *)(self + 0x3D4) = lbl_80493F20;
    *(s32 *)(self + 0x3D8) = lbl_80493F20;
}

void fn_8000DD64(void *arg0) {
    extern const f32 lbl_803C1F08[];
    void *fn_8000CF8C(void *);
    void fn_8000F5AC(void *, f32);
    u8 buf[0x190];
    void *cam;

    M2C_FIELD(arg0, s32 *, 0x578) = 0;
    cam = fn_8000CF8C(buf);
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 0x2C) = M2C_FIELD(buf, f32 *, 0x2C);
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 0x28) = M2C_FIELD(buf, f32 *, 0x28);
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 0x38) = M2C_FIELD(buf, f32 *, 0x38);
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 0x34) = M2C_FIELD(buf, f32 *, 0x34);
    fn_8000F5AC(arg0, lbl_803C1F08[0]);
    fn_8000D458(buf, 2);
}

void fn_8000E7A8(void *arg0, f32 arg1) {
    extern const f32 lbl_803C1F30[];
    extern const f32 lbl_803C1F34[];
    f32 v;
    f32 r;

    v = M2C_FIELD(arg0, f32 *, 0x45C) += arg1;
    if (v < lbl_803C1F30[0]) {
        r = lbl_803C1F34[0];
    } else if (v > lbl_803C1F34[0]) {
        r = lbl_803C1F30[0];
    } else {
        r = v;
    }
    M2C_FIELD(arg0, f32 *, 0x45C) = r;
}

void fn_8000E7F0(void *arg0, f32 arg1) {
    void *t;
    f32 v;
    f32 min;
    f32 max;
    f32 r;

    t = M2C_FIELD(arg0, void **, 8);
    max = M2C_FIELD(t, f32 *, 8);
    v = M2C_FIELD(arg0, f32 *, 0x458) - arg1;
    M2C_FIELD(arg0, f32 *, 0x458) = v;
    r = M2C_FIELD(t, f32 *, 4);
    if (v < r) {
    } else {
        r = max;
        if (!(v > max)) {
            r = v;
        }
    }
    M2C_FIELD(arg0, f32 *, 0x458) = r;
    t = M2C_FIELD(arg0, void **, 8);
    min = M2C_FIELD(t, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x460) = (r - min) / (max - min);
    M2C_FIELD(arg0, f32 *, 0x460) *= M2C_FIELD(t, f32 *, 0x10) - M2C_FIELD(t, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x460) += M2C_FIELD(t, f32 *, 0xC);
}

void fn_8000E860(void *arg0, f32 arg1) {
    extern const f32 lbl_803C1F38[];

    M2C_FIELD(arg0, f32 *, 0x458) = arg1;
    fn_8000E7F0(arg0, lbl_803C1F38[0]);
}

void fn_8000F53C(char *self) {
    extern u8 lbl_8041F94C[];
    s32 fn_800120DC(void *);
    void fn_800108BC(char *, char *);
    void *p;

    p = ((void **)(lbl_8041F94C + 0x160))[*(s32 *)(self + 0xC)];
    if (p != NULL && fn_800120DC(p) != 0) {
        fn_800108BC(self, self + 0x18);
    } else {
        fn_800108BC(self, self + 0x18);
    }
}

void fn_8000FCF8(char *self, Vec3 *a, Vec3 *b, Vec3 *c) {
    *a = *(Vec3 *)(self + 0x428);
    *b = *(Vec3 *)(self + 0x44C);
    *c = *(Vec3 *)(self + 0x434);
}

void fn_800101C0(char *self, Vec3 *pos) {
    void fn_8000F238(char *, Vec3 *, Vec3 *);
    void fn_80010038(char *, Vec3 *, Vec3 *, Vec3 *);
    Vec3 tmp;

    *(Vec3 *)(self + 0x44C) = *pos;
    fn_8000F238(self, &tmp, (Vec3 *)(self + 0x44C));
    fn_80010038(self, &tmp, pos, (Vec3 *)(self + 0x434));
}

s32 fn_80010228(char *self, Vec3 *pos) {
    s32 fn_8001025C(char *, Vec3 *, f32, f32, f32, f32);
    char *p = *(char **)(self + 0x8);
    return fn_8001025C(self, pos, *(f32 *)(p + 0x68), *(f32 *)(p + 0x6C), *(f32 *)(p + 0x70), *(f32 *)(p + 0x74));
}

s32 fn_8001025C(char *self, Vec3 *pos, f32 minX, f32 minY, f32 maxX, f32 maxY) {
    extern void fn_802E4030(void *, Vec3 *, f32 *);
    f32 out[3];
    s32 flags;

    fn_802E4030(self + 0x18, pos, out);
    flags = 0;
    if (out[0] < minX) {
        flags = 1;
    }
    if (out[0] > maxX) {
        flags |= 2;
    }
    if (out[1] < minY) {
        flags |= 4;
    }
    if (out[1] > maxY) {
        flags |= 8;
    }
    return flags;
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

f32 fn_800111D4(void *arg0) {
    extern f32 lbl_8041E7B8[];
    void *temp_r9;
    f32 lo;
    f32 t;
    f32 a;

    temp_r9 = M2C_FIELD(arg0, void **, 8);
    lo = M2C_FIELD(temp_r9, f32 *, 4);
    a = lbl_8041E7B8[0x90 / 4];
    t = (M2C_FIELD(arg0, f32 *, 0x458) - lo) / (M2C_FIELD(temp_r9, f32 *, 8) - lo);
    return (lbl_8041E7B8[0x94 / 4] - a) * t + a;
}

f32 fn_8001120C(void *arg0) {
    extern f32 lbl_8041E7B8[];
    void *temp_r9;
    f32 lo;
    f32 t;

    temp_r9 = M2C_FIELD(arg0, void **, 8);
    lo = M2C_FIELD(temp_r9, f32 *, 4);
    t = (M2C_FIELD(arg0, f32 *, 0x458) - lo) / (M2C_FIELD(temp_r9, f32 *, 8) - lo);
    return t * (lbl_8041E7B8[0x9C / 4] - lbl_8041E7B8[0x98 / 4]) + lbl_8041E7B8[0x98 / 4];
}

void fn_80011244(void *arg0, Vec3f *out, void **arg2) {
    extern f32 lbl_803C200C[];
    typedef struct { s16 delta; s16 index; char *(*func)(void *); } VtEnt;
    typedef struct { s16 delta; s16 index; void (*func)(void *, void *); } VtEnt2;
    char *obj;
    Vec3f v;
    Vec3f *pv;
    f32 m[4][4];

    pv = &v;
    pv->x = lbl_803C200C[0];
    pv->y = lbl_803C200C[0];
    pv->z = lbl_803C200C[0];
    *out = v;
    if (arg2 != NULL) {
        obj = ((VtEnt *)(*(char **)((char *)*arg2 + 0x1C) + 0x88))->func((char *)*arg2 + ((VtEnt *)(*(char **)((char *)*arg2 + 0x1C) + 0x88))->delta);
        if (obj != NULL) {
            ((VtEnt2 *)(*(char **)obj + 0xF0))->func(obj + ((VtEnt2 *)(*(char **)obj + 0xF0))->delta, m);
            *out = *(Vec3f *)m[3];
        }
    }
}

void fn_800113C4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x580) = arg1;
    M2C_FIELD(arg0, s32 *, 0x584) = arg2;
    M2C_FIELD(arg0, s32 *, 0x588) = arg3;
    if (arg4 != 0) {
        M2C_FIELD(arg0, s32 *, 0x47C) = 1;
    }
}

void fn_800113E4(void *arg0, s32 arg1) {
    extern s32 lbl_8041E7B8[];
    extern void fn_80319798(void *, s32, u32);
    if (lbl_8041E7B8[0x78 / 4] != 0) {
        fn_80319798((u8 *)arg0 + 0x368, arg1, 0x40800000);
    }
    if (lbl_8041E7B8[0xA4 / 4] != 0) {
        fn_80319798((u8 *)arg0 + 0x398, arg1, 0x40000080);
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

void *fn_80011F48(void *arg0) {
    extern void fn_802E55C0(void *);
    extern void fn_802C876C(void *);
    extern void fn_80013B14(void *, u32);
    extern void fn_80012020(void *);
    fn_802E55C0((u8 *)arg0 + 0x19C);
    fn_802C876C((u8 *)arg0 + 0x120);
    M2C_FIELD(arg0, s32 *, 0x168) = 0;
    M2C_FIELD(arg0, s32 *, 0x23C) = 0;
    fn_80013B14(arg0, 0xFEACE9CB);
    fn_80012020(arg0);
    return arg0;
}

void fn_80011FA8(void *arg0, s32 arg1) {
    extern void fn_802E5EA4(void *);
    extern void fn_8031EA2C(void *);
    extern void fn_80012020(void *);
    extern void fn_802E56A0(void *, s32);
    void *p = (u8 *)arg0 + 0x19c;
    M2C_FIELD(arg0, s32 *, 0x168) = 0;
    fn_802E5EA4(p);
    if (M2C_FIELD(arg0, void **, 0x214) != 0) {
        fn_8031EA2C(M2C_FIELD(arg0, void **, 0x214));
    }
    fn_80012020(arg0);
    fn_802E56A0(p, 2);
    if (arg1 & 1) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), arg0);
    }
}

void fn_80012020(void *arg0) {
    extern void fn_800124A8(void *);
    extern void fn_802C876C(void *);
    extern void fn_80014860(void *, s32);
    extern f32 lbl_803C20A4[];
    f32 zero;
    M2C_FIELD(arg0, u32 *, 0x238) &= ~1;
    fn_800124A8(arg0);
    zero = lbl_803C20A4[0];
    M2C_FIELD(arg0, s32 *, 0x160) = 0;
    M2C_FIELD(arg0, s32 *, 0x168) = 0;
    M2C_FIELD(arg0, f32 *, 0x188) = zero;
    M2C_FIELD(arg0, f32 *, 0x184) = zero;
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    M2C_FIELD(arg0, s32 *, 0x214) = 0;
    fn_802C876C((u8 *)arg0 + 0x80);
    M2C_FIELD(arg0, f32 *, 0x248) = zero;
    M2C_FIELD(arg0, s32 *, 0x238) = 0;
    M2C_FIELD(arg0, f32 *, 0x194) = zero;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11c) = 0;
    M2C_FIELD(arg0, s32 *, 0x198) = 0;
    M2C_FIELD(arg0, s32 *, 0x218) = 0;
    M2C_FIELD(arg0, f32 *, 0x21c) = zero;
    M2C_FIELD(arg0, f32 *, 0x220) = zero;
    M2C_FIELD(arg0, f32 *, 0x224) = zero;
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
    M2C_FIELD(arg0, s32 *, 0x28c) = 0;
    M2C_FIELD(arg0, f32 *, 0x244) = zero;
    M2C_FIELD(arg0, s32 *, 0x228) = 1;
    M2C_FIELD(arg0, s32 *, 0x22c) = 1;
    fn_80014860(arg0, 0);
}

s32 fn_800120DC(void *arg0) {
    s32 ret = 0;
    if (M2C_FIELD(arg0, s32 *, 0x160) != 0) {
        ret = 1;
    }
    return ret;
}

s32 fn_800120F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x160) == 1;
}

void fn_80012108(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80012148();
    if (((arg1 != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x168) != arg1)) || (arg2 != 0)) {
        M2C_FIELD(arg0, s32 *, 0x168) = arg1;
        fn_80012148();
    }
}

s32 fn_80013450(void *arg0, f32 arg1, s32 arg2, s32 arg3) {
    extern const f32 lbl_803C2118[];
    void fn_800134E4(void *);
    void fn_800130BC(void *, f32, s32);
    void fn_80012408(void *);

    if (M2C_FIELD(arg0, void **, 0x168) == NULL || !((M2C_FIELD(arg0, s32 *, 0x238) ^ 1) & 1)) {
        return 0;
    }
    fn_800134E4(arg0);
    M2C_FIELD(arg0, s32 *, 0x234) = arg3;
    fn_800130BC(arg0, arg1, arg2);
    M2C_FIELD(arg0, f32 *, 0x224) = lbl_803C2118[0];
    fn_80012408(arg0);
    return 1;
}

void fn_80013AB4(void *arg0, f32 arg1) {
    extern const f32 lbl_803C212C[];
    void fn_8000DC30(void *, f32);
    void *temp_r9;

    arg1 *= lbl_803C212C[0];
    temp_r9 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x168), void **, 8);
    if (arg1 > M2C_FIELD(temp_r9, f32 *, 0x2C)) {
        M2C_FIELD(temp_r9, f32 *, 0x2C) = arg1;
    }
    temp_r9 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x168), void **, 8);
    if (arg1 < M2C_FIELD(temp_r9, f32 *, 0x28)) {
        M2C_FIELD(temp_r9, f32 *, 0x28) = arg1;
    }
    fn_8000DC30(M2C_FIELD(arg0, void **, 0x168), arg1);
}

void fn_80013B14(void *arg0, s32 arg1) {
    void fn_802E58E4(void *, s32, s32, s32);
    fn_802E58E4((char *)arg0 + 0x19C, arg1, 2, 0);
}

s32 fn_80013DC8(void *arg0, s32 *arg1) {
    s32 fn_80013B40(void *, s32);
    s32 ret;

    if (fn_80013B40(arg0, *arg1) != 0) {
        M2C_FIELD(arg0, s32 **, 0x218) = arg1;
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}

void fn_80014164(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s32 *, 0x238) ^ 1) & 1) {
        M2C_FIELD(arg0, s32 *, 0x22C) = arg1;
    }
}

char *fn_80014348(char *self, void *key) {
    extern s32 fn_8024851C(char *, void *);
    char *p;
    s32 i;

    p = NULL;
    if (*(char **)(self + 0x214) != NULL) {
        for (i = 0; i < *(s32 *)(*(char **)(self + 0x214) + 0x24); i++) {
            p = *(char **)(*(char **)(self + 0x214) + 0x20) + i * 0x58;
            if (fn_8024851C(p, key) == 0) {
                break;
            }
            p = NULL;
        }
    }
    return p;
}

void fn_80014694(void *arg0, Vec3f *arg1) {
    extern void *lbl_80495050;
    extern const f32 lbl_803C216C[];
    void fn_802EEDA8(void *, f32 *, f32 *, f32 *, f32 *);
    typedef struct { f32 v[4]; } Col;

    fn_802EEDA8(lbl_80495050, (f32 *)((u8 *)arg0 + 0x24C), (f32 *)((u8 *)arg0 + 0x250), (f32 *)((u8 *)arg0 + 0x254), (f32 *)((u8 *)arg0 + 0x258));
    *(Col *)((u8 *)arg0 + 0x25C) = *(Col *)arg1;
    M2C_FIELD(arg0, f32 *, 0x244) = lbl_803C216C[0];
    M2C_FIELD(arg0, u32 *, 0x28C) |= 1;
}

void fn_80014714(void *arg0) {
    extern u8 *lbl_80495050;
    extern const f32 lbl_803C2170[];
    extern const f32 lbl_803C2174[];
    f32 t;
    f32 one;
    u8 *vt;

    one = lbl_803C2174[0];
    t = M2C_FIELD(arg0, f32 *, 0x244) * lbl_803C2170[0];
    if (t >= one) {
        M2C_FIELD(arg0, u32 *, 0x28C) &= ~1;
        t = one;
    }
    vt = *(u8 **)lbl_80495050;
    (*(void (**)(void *, f32, f32, f32, f32))(vt + 0x194))(lbl_80495050 + *(s16 *)(vt + 0x190),
        (one - t) * M2C_FIELD(arg0, f32 *, 0x24C) + t * M2C_FIELD(arg0, f32 *, 0x25C),
        (one - t) * M2C_FIELD(arg0, f32 *, 0x250) + t * M2C_FIELD(arg0, f32 *, 0x260),
        (one - t) * M2C_FIELD(arg0, f32 *, 0x254) + t * M2C_FIELD(arg0, f32 *, 0x264),
        (one - t) * M2C_FIELD(arg0, f32 *, 0x258) + t * M2C_FIELD(arg0, f32 *, 0x268));
}

void fn_800147C4(void *arg0) {
    extern void *lbl_80495050;
    extern const f32 lbl_803C2178[];
    extern const f32 lbl_803C217C[];
    void fn_802EED94(void *, f32, f32, f32, f32);
    f32 t;
    f32 one;

    one = lbl_803C217C[0];
    t = M2C_FIELD(arg0, f32 *, 0x248) * lbl_803C2178[0];
    if (t >= one) {
        M2C_FIELD(arg0, u32 *, 0x28C) &= ~2;
        t = one;
    }
    fn_802EED94(lbl_80495050,
        (one - t) * M2C_FIELD(arg0, f32 *, 0x26C) + t * M2C_FIELD(arg0, f32 *, 0x27C),
        (one - t) * M2C_FIELD(arg0, f32 *, 0x270) + t * M2C_FIELD(arg0, f32 *, 0x280),
        (one - t) * M2C_FIELD(arg0, f32 *, 0x274) + t * M2C_FIELD(arg0, f32 *, 0x284),
        (one - t) * M2C_FIELD(arg0, f32 *, 0x278) + t * M2C_FIELD(arg0, f32 *, 0x288));
}

void fn_80014860(void *arg0, s32 arg1) {
    s32 fn_80049B6C(void *);
    extern u8 lbl_8041F94C[];

    if (arg1 == 1 && fn_80049B6C(lbl_8041F94C) == 0) {
        M2C_FIELD(arg0, s32 *, 0x164) = arg1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x164) = 0;
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

