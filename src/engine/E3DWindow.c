/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

static inline s32 fn_802E5F90_flags(void *arg0, s32 idx) {
    if (idx != -1) {
        return M2C_FIELD(M2C_FIELD(arg0, char **, 0x40) + idx * 0xB0, s32 *, 0x30);
    }
    return 0;
}

static inline s32 fn_802E5EC4_inline(void *arg0, s32 arg1) {
    s32 i;

    if (arg1 & 0x103F) {
        if (fn_802E5F90_flags(arg0, M2C_FIELD(arg0, s32 *, 4)) & arg1) {
            return M2C_FIELD(arg0, s32 *, 4);
        }
    }
    for (i = M2C_FIELD(arg0, s32 *, 0x34); i < M2C_FIELD(arg0, s32 *, 0x3C); i++) {
        if ((arg1 >> i) & 1) {
            return i;
        }
    }
    return -1;
}

static inline void *fn_802E5F90_inline(void *arg0, s32 arg1) {
    s32 i;

    if (arg1 & 0x103F) {
        if (fn_802E5F90_flags(arg0, M2C_FIELD(arg0, s32 *, 4)) & arg1) {
            return M2C_FIELD(arg0, char **, 0x40) + M2C_FIELD(arg0, s32 *, 4) * 0xB0;
        }
        return NULL;
    }
    for (i = M2C_FIELD(arg0, s32 *, 0x34); i < M2C_FIELD(arg0, s32 *, 0x3C); i++) {
        if ((arg1 >> i) & 1) {
            return M2C_FIELD(arg0, char **, 0x40) + i * 0xB0;
        }
    }
    return NULL;
}

static inline void *fn_802E5F90_inline1000(void *arg0, s32 arg1) {
    s32 i;

    if (arg1 & 0x103F) {
        if (fn_802E5F90_flags(arg0, M2C_FIELD(arg0, s32 *, 4)) & 0x1000) {
            return M2C_FIELD(arg0, char **, 0x40) + M2C_FIELD(arg0, s32 *, 4) * 0xB0;
        }
        return NULL;
    }
    for (i = M2C_FIELD(arg0, s32 *, 0x34); i < M2C_FIELD(arg0, s32 *, 0x3C); i++) {
        if ((arg1 >> i) & 1) {
            return M2C_FIELD(arg0, char **, 0x40) + i * 0xB0;
        }
    }
    return NULL;
}

typedef struct { f32 x, y, z; } E3DVec3;

static inline E3DVec3 E3DVec3_make(f32 x, f32 y, f32 z) {
    E3DVec3 r;
    r.x = x;
    r.z = z;
    r.y = y;
    return r;
}

static inline E3DVec3 E3DVec3_splat(f32 s) {
    return E3DVec3_make(s, s, s);
}

void fn_802ED364(void *arg0, void *arg1, s32 arg2);
void fn_802EAF44(void *arg0, void *arg1, s32 arg2, f32 arg3);

typedef struct { f32 x, y, z, w; } E3DRect;
typedef struct { s64 v[8]; } E3DMtx64;

static inline E3DRect *E3DRect_Copy(E3DRect *d, const E3DRect *s) {
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    d->w = s->w;
    return d;
}

static inline E3DMtx64 *E3DMtx64_Copy(E3DMtx64 *d, const E3DMtx64 *s) {
    d->v[0] = s->v[0];
    d->v[1] = s->v[1];
    d->v[2] = s->v[2];
    d->v[3] = s->v[3];
    d->v[4] = s->v[4];
    d->v[5] = s->v[5];
    d->v[6] = s->v[6];
    d->v[7] = s->v[7];
    return d;
}

void fn_802E2390();
void fn_802E2108(void *self, s64 *src) {
    extern void fn_802C8A34(void *, s64 *);
    extern void fn_802E3CB4(void *);
    s64 *dst = (s64 *)((char *)self + 0xA0);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    dst[6] = src[6];
    dst[7] = src[7];
    fn_802C8A34((char *)self + 0xE0, src);
    fn_802E3CB4(self);
}

void fn_802E21C8(void *arg0, void *arg1) {
    extern void fn_802C8A34(void *);
    extern void fn_802E3CB4(void *);
    s64 *src = (s64 *)arg1;
    s64 *dst = (s64 *)((char *)arg0 + 0xE0);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    dst[6] = src[6];
    dst[7] = src[7];
    fn_802C8A34((char *)arg0 + 0xA0);
    fn_802E3CB4(arg0);
}

void fn_802E2288(s32 arg0) {
    M2C_UNK fn_802C8A34(s32, s32);
    M2C_UNK fn_802C98D8(s32);
    M2C_UNK fn_802E3CB4(s32);
    s32 temp_r29;

    temp_r29 = arg0 + 0xE0;
    fn_802C98D8(temp_r29);
    fn_802C8A34(arg0 + 0xA0, temp_r29);
    fn_802E3CB4(arg0);
}

void fn_802E22D0(void *arg0, f32 *arg1) {
    extern void fn_8030A460(void *);
    void fn_802E232C(void *);
    f32 *dst = (f32 *)((char *)arg0 + 0x220);
    dst[0] = arg1[0];
    dst[1] = arg1[1];
    dst[2] = arg1[2];
    dst[3] = arg1[3];
    fn_8030A460(arg0);
    fn_802E232C(arg0);
}

void fn_802E232C(arg0)
    void *arg0;
{
    extern void fn_802E2460(void *);
    M2C_FIELD(arg0, f32 *, 0x230) = M2C_FIELD(arg0, f32 *, 0x220) * M2C_FIELD(arg0, f32 *, 0) + M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0x234) = M2C_FIELD(arg0, f32 *, 0x224) * M2C_FIELD(arg0, f32 *, 0x14) + M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x238) = M2C_FIELD(arg0, f32 *, 0x228) * M2C_FIELD(arg0, f32 *, 0) + M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0x23C) = M2C_FIELD(arg0, f32 *, 0x22C) * M2C_FIELD(arg0, f32 *, 0x14) + M2C_FIELD(arg0, f32 *, 0x34);
    fn_802E2460(arg0);
}

void fn_802E2390(arg0)
    void *arg0;
{
    extern void fn_802E2460(void *);
    f32 temp_f10;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;

    temp_f8 = M2C_FIELD(arg0, f32 *, 0x30);
    temp_f7 = M2C_FIELD(arg0, f32 *, 0x34);
    temp_f10 = M2C_FIELD(arg0, f32 *, 0);
    temp_f9 = M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x220) = (M2C_FIELD(arg0, f32 *, 0x230) - temp_f8) / temp_f10;
    M2C_FIELD(arg0, f32 *, 0x224) = (M2C_FIELD(arg0, f32 *, 0x234) - temp_f7) / temp_f9;
    M2C_FIELD(arg0, f32 *, 0x228) = (M2C_FIELD(arg0, f32 *, 0x238) - temp_f8) / temp_f10;
    M2C_FIELD(arg0, f32 *, 0x22C) = (M2C_FIELD(arg0, f32 *, 0x23C) - temp_f7) / temp_f9;
    fn_802E2460(arg0);
}

void fn_802E2404(u8 *arg0, u8 *arg1, f32 *arg2) {
    extern const f32 lbl_803F0820[];
    s32 i;

    for (i = 0; i < 3; i++) {
        if (arg2[i] >= lbl_803F0820[0]) {
            arg0[i] = i * 4;
            arg1[i] = i * 4 + 0xC;
        } else {
            arg0[i] = i * 4 + 0xC;
            arg1[i] = i * 4;
        }
    }
}

void fn_802E3DB0(void *arg0) {
    void fn_802C829C(void *, void *, void *);
    void fn_802E2460(void *);
    fn_802C829C((char *)arg0 + 0x120, (char *)arg0 + 0xA0, (char *)arg0 + 0x160);
    fn_802E2460(arg0);
}

void fn_802E3ED4(void) {
    fn_802E2390();
}

void fn_802E232C();
void fn_802E3EF4(void) {
    fn_802E232C();
}

void fn_802E4608(void *arg0, f32 *arg1, f32 *arg2) {
    extern f32 lbl_803F0890[];
    f32 a = M2C_FIELD(arg0, f32 *, 0x188);
    f32 b = M2C_FIELD(arg0, f32 *, 0x198);
    f32 one = lbl_803F0890[0];
    *arg1 = -(a * b + b) / (one - a * a);
    *arg2 = b / (a + one);
}

void fn_802E463C(void *arg0, f32 *arg1, f32 *arg2) {
    extern f32 lbl_803F0894[];
    f32 one = lbl_803F0894[0];
    *arg2 = one / M2C_FIELD(arg0, f32 *, 0x174);
    *arg1 = one / M2C_FIELD(arg0, f32 *, 0x160);
}

void fn_802E4660(void *arg0, s32 arg1) {
    M2C_UNK fn_802E2460();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x31C) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x31C) = arg1;
        fn_802E2460();
    }
}

s32 fn_802E5498(s32 arg0) {
    return arg0 + 0x280;
}

s32 fn_802E54A0(s32 arg0) {
    return arg0 + 0x290;
}

s32 fn_802E54A8(s32 arg0) {
    return arg0 + 0xA0;
}

s32 fn_802E54B0(s32 arg0) {
    return arg0 + 0x160;
}

s32 fn_802E54B8(s32 arg0) {
    return arg0 + 0x1E0;
}

void fn_802E54C0(void) {

}

void fn_802E56A0(void *arg0, s32 arg1) {
    void fn_802E5700(void *);
    void fn_802CB8D4(void *);
    void fn_8031EA2C(void *);
    void fn_802D20E8(void *);

    fn_802E5700(arg0);
    fn_802CB8D4((char *)arg0 + 0x44);
    if (M2C_FIELD(arg0, void **, 0x20) != 0) {
        fn_8031EA2C(M2C_FIELD(arg0, void **, 0x20));
        M2C_FIELD(arg0, void **, 0x20) = 0;
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_802E5E58(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_802E58E4(s32, s32, s32, s32);
    s32 fn_80337F14(s32);
    fn_802E58E4(arg0, fn_80337F14(arg1), arg2, arg3);
}

void fn_802E5700(void);
void fn_802E5EA4(void) {
    fn_802E5700();
}

s32 fn_802E5EC4(void *arg0, s32 arg1) {
    s32 idx = fn_802E5EC4_inline(arg0, arg1);
    if (idx == -1) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(arg0, char **, 0x40) + idx * 0xB0, s32 *, 0xA8) == 1;
}

void fn_802E5F6C(void *arg0, void *arg1) {
    if (arg1 != NULL && M2C_FIELD(arg1, s32 *, 0xA8) == 1) {
        M2C_FIELD(arg1, s32 *, 0x30) |= 0x08000000;
    }
}

void fn_802E5F6C(void *arg0, void *arg1);
void fn_802E5F90(void *arg0, s32 arg1) {
    fn_802E5F6C(arg0, fn_802E5F90_inline(arg0, arg1));
}

void fn_802E6030(void *arg0, s32 arg1) {
    void *win = fn_802E5F90_inline(arg0, arg1);
    if (win != NULL && M2C_FIELD(win, s32 *, 0xA8) == 1) {
        M2C_FIELD(win, s32 *, 0x30) &= ~0x08000000;
    }
}

void fn_802E60D4(void *arg0, f32 *arg1, void *arg2, void *arg3) {
    extern void fn_802C8814(void *, void *);
    extern void fn_802C8F84(void *, f32);
    extern void fn_802C910C(void *, f32);
    extern void fn_802C9294(void *, f32);
    extern void fn_802C9368(void *, void *);
    extern const f32 lbl_803F09A8[];

    fn_802C8814(arg3, arg2);
    if (arg1[0] != lbl_803F09A8[0]) {
        fn_802C8F84(arg3, arg1[0]);
    }
    if (arg1[1] != lbl_803F09A8[0]) {
        fn_802C910C(arg3, arg1[1]);
    }
    if (arg1[2] != lbl_803F09A8[0]) {
        fn_802C9294(arg3, arg1[2]);
    }
    fn_802C9368(arg3, arg0);
}

void fn_802E66F8(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    M2C_UNK fn_802CB69C(s32, void *);
    void *fn_802D1FC8(M2C_UNK);
    void *temp_r3;

    temp_r3 = fn_802D1FC8(0xC);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0) = arg1;
        M2C_FIELD(temp_r3, f32 *, 4) = farg0;
        M2C_FIELD(temp_r3, f32 *, 8) = farg1;
        fn_802CB69C(arg0, temp_r3);
    }
}

f32 fn_802E711C(void *arg0, void *arg1, void *arg2) {
    extern const f32 lbl_803F09E0[];
    f32 a = M2C_FIELD(M2C_FIELD(arg1, void **, 0x7C), s32 *, 0x20) - 1;
    f32 b = M2C_FIELD(M2C_FIELD(arg2, void **, 0x7C), s32 *, 0x20) - 1;
    f32 t = M2C_FIELD(arg2, f32 *, 0x40) / b + M2C_FIELD(arg1, f32 *, 0x78);
    while (t > lbl_803F09E0[0]) {
        t -= lbl_803F09E0[0];
    }
    return t * a;
}

f32 fn_802E71B4(void *arg0, void *arg1, s32 arg2) {
    void fn_802E730C(void *, void *, f32 *, s32);
    f32 fn_8025FC40(f32 *);
    f32 v[3];
    fn_802E730C(arg0, arg1, v, arg2);
    return fn_8025FC40(v);
}

f32 fn_802E7618(void *arg0, void *arg1) {
    extern const f32 lbl_803F0A04[];
    f32 fn_802E751C(void *, void *);
    f32 a = ((f32 (*)(void *, void *))fn_802E71B4)(arg0, arg1);
    f32 b = fn_802E751C(arg0, arg1);
    if (b == lbl_803F0A04[0]) {
        return lbl_803F0A04[0];
    }
    return a / b;
}

s32 fn_802E767C(void *arg0) {
    s32 idx = M2C_FIELD(arg0, s32 *, 4);
    u32 i;
    if (idx != -1) {
        s32 valid = M2C_FIELD(M2C_FIELD(arg0, char **, 0x40) + idx * 0xB0, void **, 0x7C) != NULL;
        if (valid) {
            return idx;
        }
    }
    for (i = 0; i < M2C_FIELD(arg0, u32 *, 0x6C); i++) {
        s32 j = M2C_FIELD(arg0, s8 **, 0x70)[i];
        char *win = M2C_FIELD(arg0, char **, 0x40) + j * 0xB0;
        if (M2C_FIELD(win, s32 *, 0xA8) != 0) {
            s32 valid = M2C_FIELD(win, void **, 0x7C) != NULL;
            if (valid) {
                return j;
            }
        }
    }
    return -1;
}

void fn_802E7720(void *arg0) {
    s32 temp_r0;
    s32 var_ctr;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r0 > 0) {
        var_ctr = temp_r0;
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}

s32 fn_802E7738(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    extern f32 lbl_803F0A08[];
    void fn_802E86DC(void *, void *);
    s32 ret = 0;
    s32 has;
    s32 a3;

    if (!(M2C_FIELD(arg1, u32 *, 0x30) & 0x08000000)) {
        if (M2C_FIELD(arg1, s32 *, 0xA8) == 1 && (has = M2C_FIELD(arg1, s32 *, 0x7C) != 0, has) &&
            M2C_FIELD(arg1, f32 *, 0x50) > lbl_803F0A08[0]) {
            ret = 1;
            fn_802E86DC(arg0, arg1);
        } else if (M2C_FIELD(arg1, void **, 0x28) != 0) {
            a3 = arg3;
            M2C_FIELD(arg1, void (**)(s32, void *, s32, s32, s32), 0x28)(
                M2C_FIELD(arg1, s32 *, 0x2C), arg1, a3, M2C_FIELD(arg0, s32 *, 0x20),
                M2C_FIELD(arg0, s32 *, 8));
        }
    }
    return ret;
}

void fn_802E7C44(void *arg0, s32 arg1, s32 arg2) {
    extern u8 lbl_80459FB0[];
    void fn_802E77F0(void *, s32);
    char *fn_8036375C(void *, s32, s32);
    void fn_802C8A34(void *, void *);
    void *p;
    s32 has;
    char *src;
    char *dst;
    s32 n;
    u8 *g;

    fn_802E77F0(arg0, arg1);
    if (M2C_FIELD(arg0, s32 *, 0x30) != arg2) {
        M2C_FIELD(arg0, s32 *, 0x30) = arg2;
        p = M2C_FIELD(arg0, void **, 0x20);
        has = p != 0;
        n = 0;
        if (has) {
            n = M2C_FIELD(p, s32 *, 0x24);
        }
        g = lbl_80459FB0;
        dst = fn_8036375C(g + (M2C_FIELD(g, s32 *, 0x2C) * 0x14 + 4), n << 6, 0x10);
        M2C_FIELD(arg0, char **, 0x10) = dst;
        src = M2C_FIELD(arg0, char **, 0xC);
        while (n != 0) {
            n--;
            fn_802C8A34(dst, src);
            dst += 0x40;
            src += 0x40;
        }
    }
}

void fn_802E7D04(void *arg0, s32 arg1) {
    extern s32 lbl_80494DFC;
    void fn_802E7C44(void *, s32, s32);
    s32 v = lbl_80494DFC;
    if (M2C_FIELD(arg0, s32 *, 0x24) != v && M2C_FIELD(arg0, s32 *, 0x2C) != v) {
        fn_802E7C44(arg0, arg1, v - 1);
    }
}

void fn_802E80D0(void *arg0, void *arg1) {
    f32 *out = (f32 *)((char *)arg1 + 0x14);
    s32 i;
    f32 *src;

    i = 0;
    src = (f32 *)((char *)arg0 + 0x80);
    do {
        if (M2C_FIELD(arg0, s32 *, 8) & (1 << i)) {
            *out = *src;
        }
        out++;
        src++;
        i++;
    } while (i < 3);
}

void fn_802E8E7C(void *arg0) {
    M2C_UNK fn_802E8EB0();
    extern s32 lbl_80494DFC;
    fn_802E8EB0();
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) lbl_80494DFC;
}

void fn_802E9CD4(u8 *self) {
    extern void fn_802E9D34(u8 *, u8 *);
    s32 i;

    for (i = 0; i < *(s32 *)(self + 0x3C); i++) {
        fn_802E9D34(self, *(u8 **)(self + 0x40) + i * 0xB0);
    }
}

void fn_802E9D34(void *arg0, void *arg1);
void fn_802EA264(void *arg0, s32 arg1) {
    fn_802E9D34(arg0, fn_802E5F90_inline(arg0, arg1));
}

s32 fn_802EA45C(void *arg0, s32 arg1) {
    void *win = fn_802E5F90_inline(arg0, arg1);
    if (win != NULL && M2C_FIELD(win, s32 *, 0xA8) == 1) {
        void *p = M2C_FIELD(win, void **, 0x7C);
        s32 valid = p != NULL;
        if (valid) {
            return M2C_FIELD(p, s32 *, 0x8);
        }
    }
    return 0;
}

void fn_802EAD40(void *arg0, s32 arg1, s32 arg2) {
    extern const f32 lbl_803F0A6C[];
    s32 fn_80337F14(s32);
    void fn_802EA51C(void *, s32, s32, s32, s32, f32);
    fn_802EA51C(arg0, arg1, fn_80337F14(arg2), -1, 0, lbl_803F0A6C[0]);
}

s32 fn_802EAD94(void *arg0, s32 arg1) {
    void *win = fn_802E5F90_inline(arg0, arg1);
    if (win != NULL && M2C_FIELD(win, s32 *, 0xA8) == 1) {
        void *p = M2C_FIELD(win, void **, 0x7C);
        s32 valid = p != NULL;
        if (valid) {
            return M2C_FIELD(p, s32 *, 0x18);
        }
    }
    return 0;
}

void fn_802EAF44(void *arg0, void *arg1, s32 arg2, f32 arg3) {
    extern const f32 lbl_803F0A78[];
    extern const f32 lbl_803F0A7C[];
    extern const f32 lbl_803F0A80[];
    if (arg3 < lbl_803F0A78[0]) {
        arg3 = lbl_803F0A78[0];
    }
    if (arg3 > lbl_803F0A7C[0]) {
        arg3 = lbl_803F0A7C[0];
    }
    if (!(arg3 >= lbl_803F0A78[0])) {
        arg3 = lbl_803F0A78[0];
    }
    if (arg2 != 0) {
        M2C_FIELD(arg1, f32 *, 0x60) = arg3;
        M2C_FIELD(arg1, u8 *, 0xA0) = 0;
        M2C_FIELD(arg1, f32 *, 0x64) = arg3;
    }
    M2C_FIELD(arg1, f32 *, 0x50) = arg3;
    if (arg3 != lbl_803F0A78[0]) {
        fn_802ED364(arg0, arg1, 1);
        M2C_FIELD(arg1, f32 *, 0x48) = lbl_803F0A80[0];
    } else {
        fn_802ED364(arg0, arg1, 0);
    }
}

void fn_802EAFF0(void *arg0, f32 arg1) {
    s32 i;
    for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x3C); i++) {
        char *win = (char *)(i * 0xB0) + M2C_FIELD(arg0, s32 *, 0x40);
        if (M2C_FIELD(win, s32 *, 0xA8) == 1) {
            ((void (*)(void *, void *, f32, s32))fn_802EAF44)(arg0, win, arg1, 1);
        }
    }
}

f32 fn_802EB070(void *arg0, s32 arg1) {
    extern const f32 lbl_803F0A84[];
    void *win = fn_802E5F90_inline(arg0, arg1);
    if (win != NULL && M2C_FIELD(win, s32 *, 0xA8) == 1 && M2C_FIELD(win, u8 *, 0xA0) != 0) {
        return M2C_FIELD(win, f32 *, 0x64);
    }
    return lbl_803F0A84[0];
}

f32 fn_802EB124(void *arg0, s32 arg1) {
    extern const f32 lbl_803F0A88[];
    void *win = fn_802E5F90_inline(arg0, arg1);
    if (win != NULL && M2C_FIELD(win, s32 *, 0xA8) == 1) {
        return M2C_FIELD(win, f32 *, 0x50);
    }
    return lbl_803F0A88[0];
}

f32 fn_802EB1CC(void *arg0, s32 arg1) {
    extern const f32 lbl_803F0A8C[];
    void *win = fn_802E5F90_inline(arg0, arg1);
    if (win != NULL && M2C_FIELD(win, s32 *, 0xA8) == 1) {
        return M2C_FIELD(win, f32 *, 0x4C);
    }
    return lbl_803F0A8C[0];
}

void fn_802EB484(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4);
void fn_802EB384(void *arg0, void *arg1, f32 arg2) {
    if (arg1 != NULL && M2C_FIELD(arg1, s32 *, 0xA8) == 1) {
        switch (M2C_FIELD(arg1, u8 *, 0xE)) {
        case 0:
            fn_802EAF44(arg0, arg1, 1, arg2);
            break;
        case 1:
        case 2:
            fn_802EB484(arg0, arg1, arg2, M2C_FIELD(arg1, f32 *, 0x1C), M2C_FIELD(arg1, f32 *, 0x20));
            break;
        }
    }
}

void fn_802EB3E4(void *arg0, s32 arg1, f32 arg2) {
    fn_802EB384(arg0, fn_802E5F90_inline(arg0, arg1), arg2);
}

void fn_802EB484(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4) {
    extern const f32 lbl_803F0A98[];
    if (arg1 != NULL && M2C_FIELD(arg1, s32 *, 0xA8) == 1 && arg2 != M2C_FIELD(arg1, f32 *, 0x64)) {
        M2C_FIELD(arg1, u8 *, 0xA0) = 2;
        M2C_FIELD(arg1, f32 *, 0x64) = arg2;
        M2C_FIELD(arg1, f32 *, 0x54) = arg3;
        M2C_FIELD(arg1, f32 *, 0x58) = arg4;
        M2C_FIELD(arg1, f32 *, 0x68) = arg3;
        if (arg2 != lbl_803F0A98[0]) {
            fn_802ED364(arg0, arg1, 1);
        }
    }
}

void fn_802EB484(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4);
void fn_802EB4F0(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    fn_802EB484(arg0, fn_802E5F90_inline(arg0, arg1), arg2, arg3, arg4);
}

void fn_802EB650(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
void fn_802EB590(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    fn_802EB650(arg0, arg1, arg2, arg3, arg4, arg5);
}

void fn_802ED364(void *arg0, void *arg1, s32 arg2);
void fn_802EAF44(void *arg0, void *arg1, s32 arg2, f32 arg3);
void fn_802EB5B0(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    fn_802EB590(arg0, fn_802E5F90_inline(arg0, arg1), arg2, arg3, arg4, arg5);
}

void fn_802EB650(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    extern const f32 lbl_803F0A9C[];
    f32 diff;
    if (arg1 != NULL && M2C_FIELD(arg1, s32 *, 0xA8) == 1 && arg2 != M2C_FIELD(arg1, f32 *, 0x64)) {
        diff = M2C_FIELD(arg1, f32 *, 0x50) - arg2;
        M2C_FIELD(arg1, u8 *, 0xA0) = 1;
        M2C_FIELD(arg1, f32 *, 0x6C) = arg4;
        M2C_FIELD(arg1, f32 *, 0x70) = arg5;
        M2C_FIELD(arg1, f32 *, 0x60) = M2C_FIELD(arg1, f32 *, 0x50);
        M2C_FIELD(arg1, f32 *, 0x64) = arg2;
        M2C_FIELD(arg1, f32 *, 0x5C) = lbl_803F0A9C[0];
        if (diff >= lbl_803F0A9C[0]) {
            arg3 *= diff;
        } else {
            arg3 *= -diff;
        }
        if (arg3 == lbl_803F0A9C[0]) {
            fn_802EAF44(arg0, arg1, 1, arg2);
        } else {
            M2C_FIELD(arg1, f32 *, 0x68) = arg3;
            if (arg2 != lbl_803F0A9C[0]) {
                fn_802ED364(arg0, arg1, 1);
            }
        }
    }
}

void fn_802EB708(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    extern const f32 lbl_803F0AA0[];
    fn_802EB650(arg0, fn_802E5F90_inline(arg0, arg1), arg3, arg4, arg5, lbl_803F0AA0[0]);
}

void fn_802EC15C(void *arg0, void *arg1, s32 arg2) {
    if (arg1 != NULL && M2C_FIELD(arg1, s32 *, 0xA8) == 1) {
        M2C_FIELD(arg1, s32 *, 0x9C) = arg2;
    }
}

void fn_802EC178(void *arg0, s32 arg1, s32 arg2) {
    void *win = fn_802E5F90_inline(arg0, arg1);
    if (win != NULL && M2C_FIELD(win, s32 *, 0xA8) == 1) {
        M2C_FIELD(win, s32 *, 0x9C) = arg2;
    }
}

s32 fn_802EC214(void *arg0, s32 arg1) {
    void *win = fn_802E5F90_inline(arg0, arg1);
    if (win != NULL && M2C_FIELD(win, s32 *, 0xA8) == 1) {
        void *p = M2C_FIELD(win, void **, 0x7C);
        s32 valid = p != NULL;
        if (valid) {
            return M2C_FIELD(p, s32 *, 0x20);
        }
    }
    return 0;
}

f32 fn_802EC2D4(void *arg0, s32 arg1) {
    extern const f32 lbl_803F0AD4[];
    void *win = fn_802E5F90_inline(arg0, arg1);
    if (win != NULL && M2C_FIELD(win, s32 *, 0xA8) == 1) {
        return M2C_FIELD(win, f32 *, 0x40);
    }
    return lbl_803F0AD4[0];
}

void fn_802EC460(void *arg0, void *arg1, f32 arg2, s32 arg3) {
    extern s32 lbl_80494DFC;
    if (arg1 != NULL && M2C_FIELD(arg1, s32 *, 0xA8) == 1) {
        void *p = M2C_FIELD(arg1, void **, 0x7C);
        M2C_FIELD(arg1, f32 *, 0x40) = arg2 * (f32)(M2C_FIELD(p, s32 *, 0x20) - 1);
        if (arg3 != 0) {
            M2C_FIELD(arg1, s32 *, 0x38) = lbl_80494DFC;
        }
    }
}

void fn_802EC460(void *arg0, void *arg1, f32 arg2, s32 arg3);
void fn_802EC4C8(void *arg0, s32 arg1, f32 arg2, s32 arg3) {
    fn_802EC460(arg0, fn_802E5F90_inline(arg0, arg1), arg2, arg3);
}

s32 fn_802EC568(void *arg0, s32 arg1) {
    void *win = fn_802E5F90_inline1000(arg0, arg1);
    if (win != NULL && (M2C_FIELD(win, s32 *, 0x30) & arg1) && M2C_FIELD(win, s32 *, 0xA8) == 1) {
        return M2C_FIELD(win, s32 *, 0xA4);
    }
    return 1;
}

void fn_802EC618(void *arg0, s32 arg1) {
    void *win = fn_802E5F90_inline(arg0, arg1);
    if (win != NULL && M2C_FIELD(win, s32 *, 0xA8) == 1) {
        M2C_FIELD(win, s32 *, 0xA4) = 0;
    }
}

void *fn_802EC6B8(void *arg0, s32 arg1) {
    void *win = fn_802E5F90_inline(arg0, arg1);
    if (win != NULL) {
        return win;
    }
    return NULL;
}

void fn_802EC74C(void *arg0, void *arg1, f32 arg2) {
    extern const f32 lbl_803F0AF0[];
    if (arg1 != NULL && M2C_FIELD(arg1, s32 *, 0xA8) == 1) {
        if (arg2 < lbl_803F0AF0[0]) {
            M2C_FIELD(arg1, u32 *, 0x30) |= 0x4000000;
        } else {
            M2C_FIELD(arg1, u32 *, 0x30) &= ~0x4000000;
        }
        M2C_FIELD(arg1, f32 *, 0x4C) = arg2;
    }
}

void fn_802EC74C(void *arg0, void *arg1, f32 arg2);
void fn_802EC790(void *arg0, s32 arg1, f32 arg2) {
    fn_802EC74C(arg0, fn_802E5F90_inline(arg0, arg1), arg2);
}

void fn_802EC830(void *arg0, f32 arg1) {
    extern const f32 lbl_803F0AF4[];
    s32 i;
    for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x3C); i++) {
        char *w = (char *)(i * 0xB0) + M2C_FIELD(arg0, s32 *, 0x40);
        if ((M2C_FIELD(w, u32 *, 0x30) & 0x4000000) ? !(arg1 > lbl_803F0AF4[0]) : (arg1 > lbl_803F0AF4[0])) {
            M2C_FIELD(w, f32 *, 0x4C) = arg1;
        } else {
            M2C_FIELD(w, f32 *, 0x4C) = -arg1;
        }
    }
}

s32 fn_802EC898(void *arg0, void *arg1) {
    typedef struct { E3DVec3 a; E3DVec3 b; } E3DVec3Pair;
    extern void *lbl_80494EC4;
    extern const f32 lbl_803F0AF8[];
    void fn_802E7F64(void *, void *, E3DVec3Pair *, s32);
    s32 fn_802E34F0(void *, E3DVec3Pair *);
    void *g = lbl_80494EC4;
    s32 ret;
    E3DVec3Pair v;

    if (g == NULL) {
        ret = 0;
    } else {
        E3DVec3 t = E3DVec3_make(lbl_803F0AF8[0], lbl_803F0AF8[0], lbl_803F0AF8[0]);
        v.b = t;
        v.a = v.b;
        fn_802E7F64(arg0, arg1, &v, 0);
        ret = fn_802E34F0(g, &v);
    }
    return ret;
}

void fn_802ECD34(void *arg0, void *arg1, void *arg2, void *arg3) {
    extern s32 lbl_80494DFC;
    void fn_802E77F0(void *, void *, s32);
    void fn_8032AB10(void *, void *, void *, void *, s32);
    s32 *p;
    s32 has;
    void *c;
    void *e;

    if (M2C_FIELD(arg0, s32 *, 0x60) != 0) {
        fn_802E77F0(arg0, arg3, lbl_80494DFC);
        p = M2C_FIELD(arg0, s32 **, 0x20);
        e = M2C_FIELD(arg0, void **, 0x8);
        c = M2C_FIELD(arg0, void **, 0xC);
        has = p != 0;
        if (has) {
            p = (s32 *)p[0x24 / 4];
        } else {
            p = 0;
        }
        fn_8032AB10(arg2, arg1, c, e, (s32)p);
    }
}

void *fn_802ECFAC(void *arg0, s32 arg1) {
    extern s32 lbl_804961C0;
    extern u8 lbl_80452768[];
    extern void fn_802C876C(void *);

    if (M2C_FIELD(arg0, void **, 0xC) != NULL) {
        return M2C_FIELD(arg0, u8 **, 0xC) + arg1 * 64;
    }
    if (lbl_804961C0 == 0) {
        lbl_804961C0 = 1;
    }
    fn_802C876C(lbl_80452768);
    return lbl_80452768;
}

void fn_802ED2F4(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        *(s32 *)(M2C_FIELD(arg0, u8 **, 8) + arg1 * 0x44) |= 0x10;
        return;
    }
    *(s32 *)(M2C_FIELD(arg0, u8 **, 8) + arg1 * 0x44) &= ~0x10;
}

void fn_802ED32C(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 == 0) {
        *(s32 *)(M2C_FIELD(arg0, u8 **, 8) + arg1 * 0x44) |= 0x8;
        return;
    }
    *(s32 *)(M2C_FIELD(arg0, u8 **, 8) + arg1 * 0x44) &= ~0x8;
}

void fn_802ED5B4(f32 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6) {
    extern const f32 lbl_803F0B10[];
    extern const f32 lbl_803F0B14[];
    f32 p = arg1 * arg2;
    f32 v;

    *arg3 = arg0;
    *arg4 = arg0 * arg1;
    if (p == lbl_803F0B10[0]) {
        v = lbl_803F0B14[0];
    } else {
        v = arg0 * (p - arg2) / (p - lbl_803F0B10[0]);
    }
    *arg5 = v;
    *arg6 = arg0 * p;
}

void fn_802ED6F4(void) {
    M2C_UNK fn_802ED604(M2C_UNK, M2C_UNK);
    fn_802ED604(1, 0xFFFF);
}

