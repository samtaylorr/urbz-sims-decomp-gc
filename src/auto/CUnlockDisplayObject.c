/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } Vec3f;

s32 fn_800B72E8(void) {
    return 1;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_80248488(void *, s32, u32);

typedef struct { f32 x, y, z; } CUnlockVec3;

static inline void CUnlockVec3_Set(CUnlockVec3 *v, f32 x, f32 y, f32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}

static inline void *CUnlockDisplayObject_AllocAligned(u32 size) {
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

void *fn_800B9580(u32 size) {
    void *p = CUnlockDisplayObject_AllocAligned(size);

    fn_80248488(p, 0, size);
    return p;
}

void fn_800B9644(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_800B9678(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)obj[0x11];
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 8), 3);
    }
}

void fn_800B96B8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x15C) = arg1;
}

void fn_800B96C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x158) = arg1;
}

void fn_800B9970(void *arg0, s32 arg1) {
    extern u8 lbl_8040A748[];
    extern void fn_800B9ABC(void *);
    extern void fn_80309AE0(void *, s32);

    M2C_FIELD(arg0, void **, 0x4C0) = lbl_8040A748;
    fn_800B9ABC(arg0);
    fn_80309AE0(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), arg0);
    }
}

void fn_800B9ABC(void *arg0) {
    void *temp_r31;
    void *temp_r9;
    void *var_r11;

    var_r11 = M2C_FIELD(arg0, void **, 0x44C);
    if (var_r11 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r11, void **, 0);
            if (var_r11 != NULL) {
                temp_r9 = M2C_FIELD(var_r11, void **, 0x84);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
            }
            var_r11 = temp_r31;
        } while (var_r11 != NULL);
    }
    M2C_FIELD(arg0, void **, 0x44C) = NULL;
}

void fn_800B9EF0(void *arg0) {
    M2C_UNK fn_800B99CC();
    M2C_FIELD(arg0, s32 *, 0x434) = 3;
    fn_800B99CC();
}

void fn_800BA0C4(void *arg0, f32 farg0) {
    if (!(farg0 >= M2C_FIELD(arg0, f32 *, 0x458))) {
        M2C_FIELD(arg0, f32 *, 0x450) = farg0;
    }
}

void fn_800BA0DC(void *arg0, f32 farg0) {
    if (!(farg0 >= M2C_FIELD(arg0, f32 *, 0x45C))) {
        M2C_FIELD(arg0, f32 *, 0x454) = farg0;
    }
}

void fn_800BA0F4(void *arg0, f32 farg0) {
    if (farg0 <= M2C_FIELD(arg0, f32 *, 0x450)) {
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x458) = farg0;
}

void fn_800BA10C(void *arg0, f32 farg0) {
    if (!(farg0 <= M2C_FIELD(arg0, f32 *, 0x454))) {
        M2C_FIELD(arg0, f32 *, 0x45C) = farg0;
    }
}

void fn_800BA124(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x480) = farg0;
}

void fn_800BA12C(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x484) = farg0;
    M2C_FIELD(arg0, f32 *, 0x488) = farg1;
    M2C_FIELD(arg0, f32 *, 0x48C) = farg2;
}

void fn_800BACA4(void *arg0, s32 arg1, f32 x, f32 y, f32 z) {
    if (arg1 <= 2) {
        CUnlockVec3 v;
        if (arg1 + 1 > M2C_FIELD(arg0, s32 *, 0x428)) {
            M2C_FIELD(arg0, s32 *, 0x428) = arg1 + 1;
        }
        CUnlockVec3_Set(&v, x, y, z);
        ((CUnlockVec3 *)((char *)arg0 + 0x360))[arg1 * 2] = v;
    }
}

void fn_800BAD00(void *arg0, f32 x, f32 y, f32 z) {
    CUnlockVec3 v;
    CUnlockVec3_Set(&v, x, y, z);
    M2C_FIELD(arg0, CUnlockVec3 *, 0x350) = v;
}

s32 fn_800BAD38(u8 *self) {
    void **n;
    s32 res = 1;

    for (n = *(void ***)(self + 0x44C); n != NULL; n = (void **)*n) {
        res = (res != 0 && *(s32 *)((u8 *)n + 0x7C) != 0);
    }
    return res;
}

s32 fn_800BAD74(u8 *self) {
    s32 fn_8032C268(s32);
    s32 fn_800BBAD4(void *);
    void **n;
    s32 res = 0;

    for (n = *(void ***)(self + 0x44C); n != NULL; n = (void **)*n) {
        res = (res != 0 || fn_8032C268(fn_800BBAD4(n)) != 0);
    }
    return res;
}

void fn_800BADDC(void *arg0, s32 arg1) {
    M2C_UNK fn_800BBADC(M2C_UNK *, s32);
    M2C_UNK *var_r31;

    var_r31 = M2C_FIELD(arg0, M2C_UNK **, 0x44C);
    if (var_r31 != NULL) {
        do {
            fn_800BBADC(var_r31, arg1);
            var_r31 = *var_r31;
        } while (var_r31 != NULL);
    }
}

void fn_800BAE28(u8 *self, f32 *vec, s32 val, s32 idx) {
    typedef struct { f32 x, y, z; } UnlockVec;
    extern f32 lbl_803CF948[];
    void fn_8025FB2C(f32 *, f32 *);
    s32 *arr;

    if (idx > 2) {
        return;
    }
    if (idx + 1 > *(s32 *)(self + 0x428)) {
        *(s32 *)(self + 0x428) = idx + 1;
    }
    arr = (s32 *)(self + 0x490);
    arr[idx] = val;
    if (vec[0] != lbl_803CF948[0] || vec[1] != lbl_803CF948[0] || vec[2] != lbl_803CF948[0]) {
        fn_8025FB2C(vec, vec);
    }
    ((UnlockVec *)(self + 0x49C))[idx] = *(UnlockVec *)vec;
}

void fn_800BAEDC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x428) = 0;
}

s32 fn_800BB038(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x444);
}

void fn_800BB040(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x440) = 1;
}

void fn_800BB04C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x440) = 0;
}

s32 fn_800BB058(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x438);
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
void *fn_800BB060(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8((void *)size);
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

void fn_800BB10C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_800BBAB0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) != 0 && M2C_FIELD(arg0, s32 *, 0x78) == 0;
}

s32 fn_800BBAD4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void fn_800BBADC(void *arg0, s32 arg1) {
    void *p;

    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x74) != 0) {
        if (({ char *o = M2C_FIELD(arg0, char **, 0x1C); char *v = *(char **)o; (*(s32 (**)(char *))(v + 0xFC))(o + *(s16 *)(v + 0xF8)); }) != 0) {
            p = M2C_FIELD(arg0, void **, 0x1C);
            M2C_FIELD(*(void **)p, void (**)(void *, s32), 0x104)((u8 *)p + M2C_FIELD(*(void **)p, s16 *, 0x100), arg1);
            M2C_FIELD(arg0, s32 *, 0x18) = -1;
        }
    }
}

s32 fn_800BBB64(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

void fn_800BBB6C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
}

void fn_800BBB74(void *arg0, s32 arg1) {
    s32 var_r9;

    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    var_r9 = 0;
    if ((arg1 == 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x34) == 0)) {
        var_r9 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x80) = var_r9;
}

void fn_800BBB9C(void *arg0, s32 arg1) {
    s32 var_r9;

    var_r9 = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x30) == 0) || (arg1 == 0)) {
        var_r9 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x80) = var_r9;
}

void fn_800BBBC4(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x3C) = *arg1;
}

f32 *fn_800BBBE4(f32 *out, u8 *obj) {
    f32 *p = (f32 *)(obj + 0x3C);
    out[0] = p[0];
    out[1] = p[1];
    out[2] = p[2];
    return out;
}

void fn_800BBC08(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x48) = *arg1;
}

f32 *fn_800BBC28(f32 *out, u8 *obj) {
    f32 *p = (f32 *)(obj + 0x48);
    out[0] = p[0];
    out[1] = p[1];
    out[2] = p[2];
    return out;
}

void fn_800BBC4C(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x54) = *arg1;
}

f32 *fn_800BBC6C(f32 *out, u8 *obj) {
    f32 *p = (f32 *)(obj + 0x54);
    out[0] = p[0];
    out[1] = p[1];
    out[2] = p[2];
    return out;
}

void fn_800BBC90(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

void fn_800BBC98(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
}

void fn_800BBCA0(u8 *arg0, void *arg1) {
    s64 *src = arg1;
    s64 *dst = *(s64 **)(arg0 + 0x24);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    dst[6] = src[6];
    dst[7] = src[7];
}

s32 fn_800BBD28(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

void fn_800BBD30(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x70) = 1;
}

s32 fn_800BBD3C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}

f32 fn_800BBD44(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x28);
}

f32 *fn_800BBD4C(f32 *out, u8 *obj) {
    f32 *p = (f32 *)(obj + 0x60);
    out[0] = p[0];
    out[1] = p[1];
    out[2] = p[2];
    return out;
}

s32 fn_800BBD70(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x7C);
}

s32 fn_800BBD78(s32 *self) {
    return self[1];
}

void *fn_800BBD80(u8 *self) {
    extern u8 lbl_8040A790[];
    extern void fn_800BB140(void *);
    extern void fn_801C9904(void *);
    fn_800BB140(self);
    *(u8 **)(self + 0x84) = lbl_8040A790;
    fn_801C9904(self + 0x90);
    *(s32 *)(self + 0x10) = 0;
    *(s32 *)(self + 0x4) = 2;
    *(s32 *)(self + 0x178) = 0;
    *(s32 *)(self + 0x88) = 0;
    *(s32 *)(self + 0x8C) = 0;
    return self;
}

void fn_800BBDE0(void *self, s32 flags) {
    extern u8 lbl_8040A790[];
    extern void fn_800BB31C(void *, s32);
    void *p;

    M2C_FIELD(self, u8 **, 0x84) = lbl_8040A790;
    p = M2C_FIELD(self, void **, 0x8C);
    M2C_FIELD(self, s32 *, 0x10) = 0;
    if (p != NULL) {
        M2C_FIELD(*(void **)p, void (**)(void *, s32), 0x34)((u8 *)p + M2C_FIELD(*(void **)p, s16 *, 0x30), 3);
        M2C_FIELD(self, void **, 0x8C) = NULL;
    }
    fn_800BB31C(self, flags);
}

s32 fn_800BBFC8(void *arg0) {
    s32 fn_8003E48C(s32);
    M2C_UNK fn_8003E4A8(s32);
    s32 var_r30;

    var_r30 = 1;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x8C) == 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x10) == 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x34) == 0)) {
        var_r30 = 0;
    }
    fn_8003E4A8(M2C_FIELD(arg0, s32 *, 0x8C));
    if (fn_8003E48C(M2C_FIELD(arg0, s32 *, 0x8C)) != 0) {
        var_r30 = 0;
    }
    return var_r30;
}

void fn_800BC03C(void) {

}

s32 fn_800BC118(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x178), s32 *, 0x80);
}

s32 fn_800BC124(void) {
    return 1;
}

void fn_800BEF10(void) {
    M2C_UNK fn_800BEED8(M2C_UNK, M2C_UNK);
    fn_800BEED8(1, 0xFFFF);
}

