/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct Vec3i {
    s32 x, y, z;
} Vec3i;

typedef struct PtrVec {
    void **begin;
    void **end;
} PtrVec;

static inline u32 PtrVec_Size(PtrVec *v) {
    return v->end - v->begin;
}

static inline void *PtrVec_At(PtrVec *v, u32 i) {
    return v->begin[i];
}

void *fn_8008CA10(char *self) {
    extern char lbl_80409BF8[];
    void fn_8030728C(void *);
    fn_8030728C(self);
    *(char **)(self + 0x44) = lbl_80409BF8;
    *(s32 *)(self + 0x48) = 0;
    *(s32 *)(self + 0x50) = 0;
    *(s32 *)(self + 0x84) = 0;
    *(s32 *)(self + 0x68) = 0;
    *(s32 *)(self + 0x4C) = 0;
    *(s32 *)(self + 0x6C) = 0;
    *(s32 *)(self + 0x70) = 0;
    *(s32 *)(self + 0x74) = 0;
    *(s32 *)(self + 0x78) = 0;
    *(s32 *)(self + 0x7C) = 0;
    *(s32 *)(self + 0x80) = 0;
    return self;
}

void fn_8008CA7C(char *self, s32 arg1) {
    extern char lbl_80409BF8[];
    void fn_8008CC24(void *);
    void fn_80307364(void *, s32);
    *(char **)(self + 0x44) = lbl_80409BF8;
    fn_8008CC24(self);
    fn_80307364(self, arg1);
}

void fn_8008CD40(void) {
    fn_803073C4();
}

void fn_8008D5BC(void) {

}

extern s32 lbl_804941F0;
void fn_8008DCCC(void (*cb)(void)) {
    lbl_804941F0 = cb;
}

void fn_8008DCD4(void) {

}

s64 fn_8008DCD8(void *arg0) {
    s32 fn_8003E48C(void *);
    char *obj = M2C_FIELD(arg0, char **, 4);
    char *vt = *(char **)(obj + 4);
    s32 r = (*(s32 (**)(void *, s32))(vt + 0x10C))(obj + *(s16 *)(vt + 0x108), 8);
    if (M2C_FIELD(arg0, s32 *, 0x130) == r && fn_8003E48C(M2C_FIELD(arg0, void **, 8)) == 0 &&
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x668) < 0) {
        return 1;
    }
    return 2;
}

void fn_8008DD5C(void *arg0) {
    void fn_80093D00(void *arg0, void *arg1);
    if (M2C_FIELD(arg0, u32 *, 0x4D4) & 0x80000) {
        fn_80093D00(arg0, (u8 *)arg0 + 0x458);
        M2C_FIELD(arg0, u32 *, 0x4D4) &= ~0x80000;
    }
    if (M2C_FIELD(arg0, u32 *, 0x4D4) & 0x100000) {
        fn_80093D00(arg0, (u8 *)arg0 + 0x464);
        M2C_FIELD(arg0, u32 *, 0x4D4) &= ~0x100000;
    }
}

void fn_8008E170(void *arg0) {
    void fn_802EC830(void *, f32);
    if (M2C_FIELD(arg0, f32 *, 0xF8) != M2C_FIELD(arg0, f32 *, 0xF4)) {
        fn_802EC830((char *)M2C_FIELD(arg0, void **, 0x8) + 0x314, M2C_FIELD(arg0, f32 *, 0xF4));
    }
}

void fn_8008E1A8(void *arg0) {
    void fn_80095DB0(void *);
    void fn_803379C8(char *, s32);
    extern const f32 lbl_803CC5A8[];
    extern char lbl_8045B0F0[];
    extern char lbl_803CC580[];
    extern s32 lbl_804941EC;
    s32 zero = 0;

    M2C_FIELD(arg0, s32 *, 0xC0) = zero;
    M2C_FIELD(arg0, s32 *, 0xC4) = zero;
    M2C_FIELD(arg0, s32 *, 0xCC) = zero;
    M2C_FIELD(arg0, s32 *, 0xD0) = zero;
    M2C_FIELD(arg0, s32 *, 0x4D4) = zero;
    M2C_FIELD(arg0, s32 *, 0x130) = zero;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = M2C_FIELD(arg0, s32 *, 0xD4);
    M2C_FIELD(arg0, f32 *, 0x490) = lbl_803CC5A8[0];
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_803CC5A8[0];
    M2C_FIELD(arg0, f32 *, 0x480) = lbl_803CC5A8[0];
    fn_80095DB0(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        s32 n;
        fn_803379C8(lbl_8045B0F0, M2C_FIELD(arg0, s32 *, 0x2C));
        ((void (*)(const char *, ...))fn_8008D5BC)(lbl_803CC580, M2C_FIELD(arg0, s32 *, 0x2C));
        n = lbl_804941EC;
        M2C_FIELD(arg0, s32 *, 0x2C) = zero;
        lbl_804941EC = n - 1;
    }
}

void fn_8008E250(void) {

}

void fn_8008E254(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
}

void fn_8008E260(char *self) {
    char *vt = *(char **)self;
    (*(void (**)(char *))(vt + 0x3C))(self + *(s16 *)(vt + 0x38));
}

s64 fn_8008E4EC(void *self, s32 *arg1) {
    s32 fn_80337DCC(void *, s32);
    void fn_803374C8(void *, s32);
    void fn_80093A24(void *, s32 *);
    extern u8 lbl_8045B0F0[];
    extern char lbl_803CC5AC[];
    extern s32 lbl_804941EC;
    s32 id;

    if (arg1 != NULL) {
        id = *arg1;
        if (id != 0 && fn_80337DCC(lbl_8045B0F0, id) == 0) {
            ((void (*)(const char *, ...))fn_8008D5BC)(lbl_803CC5AC, id);
            M2C_FIELD(self, s32 *, 0x2C) = id;
            fn_80093A24(self, arg1);
            fn_803374C8(lbl_8045B0F0, id);
            lbl_804941EC++;
            return 2;
        }
    }
    return 1;
}

void fn_8008F240(void) {

}

s32 fn_8008F83C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) != 0;
}

s32 fn_8008F854(void) {
    return 1;
}

s32 fn_8008F85C(void) {
    return 0;
}

s32 fn_8008F864(void) {
    return 1;
}

void fn_8008F86C(void) {

}

void fn_8008F870(void) {

}

void fn_8008F874(void) {

}

void fn_8008F878(void) {

}

s32 fn_8008F87C(void *arg0, s32 *arg1) {
    void *fn_8024839C(void *dst, const void *src, u32 n);
    s32 **vec = (s32 **)(arg0 + 0xD4);
    s32 ret = 0;
    if ((u32)((char *)vec[1] - (char *)vec[0]) >> 2) {
        s32 *dst;
        s32 *src;
        s32 *end;
        *arg1 = *vec[0];
        dst = M2C_FIELD(arg0, s32 **, 0xD4);
        end = vec[1];
        src = dst + 1;
        if (end != src) {
            u32 n = (char *)end - (char *)src;
            dst = (s32 *)((char *)fn_8024839C(dst, src, n) + n);
        }
        vec[1] = dst;
        ret = 1;
    }
    return ret;
}

void fn_8008FEE0(void) {

}

void fn_8008FEE4(void) {

}

s32 fn_8008FEE8(void *arg0, void *arg1) {
    void *obj = M2C_FIELD(arg0, void **, 4);
    void *vt = M2C_FIELD(obj, void **, 4);
    return (M2C_FIELD(vt, s32 (**)(void *), 0x1D4)(obj + M2C_FIELD(vt, s16 *, 0x1D0)) == 0 && M2C_FIELD(arg1, s32 *, 4) != 0) ? M2C_FIELD(arg1, s32 *, 4) : M2C_FIELD(arg1, s32 *, 0);
}

s32 fn_80090108(void *arg0, void *arg1) {
    s32 fn_8008FEE8(void *arg0, void *arg1);
    s32 fn_80337008(void *, s32);
    extern u8 lbl_8045B82C[];
    s32 s = fn_8008FEE8(arg0, arg1);
    if (s != 0) {
        return !!fn_80337008(lbl_8045B82C, s);
    }
    return 0;
}

u32 fn_80090244(void *arg0) {
    void *a = M2C_FIELD(arg0, void **, 4);
    void *b = M2C_FIELD(a, void **, 0);
    void *c = M2C_FIELD(b, void **, 4);
    s16 offset = M2C_FIELD(c, s16 *, 0x308);
    void *func = M2C_FIELD(c, void **, 0x30C);
    void *result = ((void *(*)(void *))func)((u8 *)b + offset);
    return *(u32 *)((u8 *)result + 4);
}

u32 fn_80090284(void *arg0) {
    void *a = M2C_FIELD(arg0, void **, 4);
    void *b = M2C_FIELD(a, void **, 0);
    void *c = M2C_FIELD(b, void **, 4);
    s16 offset = M2C_FIELD(c, s16 *, 0x308);
    void *func = M2C_FIELD(c, void **, 0x30C);
    void *result = ((void *(*)(void *))func)((u8 *)b + offset);
    return *(u32 *)result;
}

void fn_800906B8(void *arg0, f32 *arg1, f32 *arg2, f32 arg3) {
    void fn_80098880(void *, f32);
    void fn_80090F90(void *, f32, f32, f32);
    if (!(M2C_FIELD(arg0, u32 *, 0x4D4) & 0x20)) {
        fn_80098880(arg0, *arg2);
        fn_80090F90(arg0, arg3, *arg1, *arg2);
    }
}

void fn_8009121C(void *arg0, s32 arg1) {
    void fn_80091434(void *, s32, f32 *);
    f32 v[2];
    f32 *p = v;

    v[0] = M2C_FIELD(arg0, f32 *, 0xEC);
    p[1] = M2C_FIELD(arg0, f32 *, 0xF0);
    fn_80091434(arg0, arg1, p);
}

void fn_800913A8(void *arg0, u32 *flags, f32 a, f32 b, f32 c) {
    extern f32 lbl_803CC7A4[];
    extern f32 lbl_803CC7A8[];
    char **vec = M2C_FIELD(arg0, char ***, 0xC);
    s32 idx = M2C_FIELD(arg0, s32 *, 0x14);
    s32 n = ((vec[1] - vec[0]) >> 3) - 2;

    if (idx < n) {
        *flags &= ~4;
    } else if (idx > n) {
        if (M2C_FIELD(arg0, u8 *, 0x495) != 1) {
            *flags |= 4;
        }
    } else {
        f32 t = -b / c;
        f32 d = b * c;
        d += c * c * t * lbl_803CC7A4[0];
        if (a / d < lbl_803CC7A8[0]) {
            if (M2C_FIELD(arg0, u8 *, 0x495) != 1) {
                *flags |= 4;
            }
        } else {
            *flags &= ~4;
        }
    }
}

void fn_80091980(void *arg0) {
    M2C_UNK fn_8000CD30(s32);
    void *var_r30;
    void *var_r30_2;
    void *var_r31;
    void *var_r31_2;

    var_r30 = M2C_FIELD(arg0, void **, 0x458);
    if (var_r30 != NULL) {
        do {
            var_r31 = *M2C_FIELD(var_r30, void ***, 0x1C);
            if (var_r31 != NULL) {
                do {
                    fn_8000CD30(M2C_FIELD(var_r31, s32 *, 0x1C));
                    var_r31 = M2C_FIELD(var_r31, void **, 0x10);
                } while (var_r31 != NULL);
            }
            var_r30 = M2C_FIELD(var_r30, void **, 0x10);
        } while (var_r30 != NULL);
    }
    var_r30_2 = M2C_FIELD(arg0, void **, 0x464);
    if (var_r30_2 != NULL) {
        do {
            var_r31_2 = *M2C_FIELD(var_r30_2, void ***, 0x1C);
            if (var_r31_2 != NULL) {
                do {
                    fn_8000CD30(M2C_FIELD(var_r31_2, s32 *, 0x1C));
                    var_r31_2 = M2C_FIELD(var_r31_2, void **, 0x10);
                } while (var_r31_2 != NULL);
            }
            var_r30_2 = M2C_FIELD(var_r30_2, void **, 0x10);
        } while (var_r30_2 != NULL);
    }
}

void fn_800934F0(void *arg0) {
    M2C_UNK fn_802ED144(s32);
    fn_802ED144(M2C_FIELD(arg0, s32 *, 8) + 0x314);
}

void fn_80093518(void *arg0, s32 arg1, void *arg2, f32 *arg3) {
    typedef struct {
        s32 unk0;
        void *unk4;
        f32 x, y, z;
    } Args;
    s32 fn_802CD440(void *, s32, s32 *);
    void fn_80093BC8(void *, Args *);
    Args args;
    s32 tmp;

    if (arg2 != NULL) {
        tmp = 0;
        if (fn_802CD440((u8 *)arg0 + 0x458, arg1, &tmp) == 0) {
            args.unk0 = arg1;
            args.unk4 = arg2;
            args.x = arg3[0];
            args.y = arg3[1];
            args.z = arg3[2];
            fn_80093BC8(arg0, &args);
        }
    }
}

s32 fn_80093598(void) {
    return 0;
}

void fn_800935A0(void *arg0, f32 *a, f32 *out) {
    extern const f32 lbl_803CC900[];
    extern const f32 lbl_803CC904[];
    out[0] = a[1] * lbl_803CC900[0];
    out[1] = a[0] * lbl_803CC900[0];
    out[2] = lbl_803CC904[0];
}

void fn_80093A24(void *arg0, void *arg1) {
    void fn_80093AA8(void *, void *);
    s32 n;
    s32 i;

    n = 0;
    if (M2C_FIELD(arg1, s32 **, 8) != NULL) {
        n = M2C_FIELD(arg1, s32 **, 8)[-1];
    }
    for (i = 0; i < n; i++) {
        u8 *e = (u8 *)M2C_FIELD(arg1, s32 **, 8) + i * 0xC;
        if (*(s32 *)(e + 4) == 10 && *(void **)(e + 8) != NULL) {
            fn_80093AA8(arg0, *(void **)(e + 8));
        }
    }
}

void fn_80093AA8(void *arg0, void *arg1) {
    extern u8 lbl_8045BBA0[];
    M2C_UNK fn_80337008(void *, s32);
    s32 n;
    s32 i;

    n = 0;
    if (M2C_FIELD(arg1, s32 **, 0) != NULL) {
        n = M2C_FIELD(arg1, s32 **, 0)[-1];
    }
    for (i = 0; i < n; i++) {
        u8 *e = (u8 *)M2C_FIELD(arg1, s32 **, 0) + i * 0x20;
        if (*(s32 *)e != 0) {
            fn_80337008(lbl_8045BBA0, *(s32 *)e);
        }
    }
}

void fn_80093B1C(s32 arg0, void *arg1) {
    typedef struct {
        s32 unk0;
        void *unk4;
        f32 x, y, z;
    } Args;
    void fn_80093BC8(s32, Args *);
    u8 *rec;
    s32 n;
    s32 i;
    Args args;

    if (M2C_FIELD(arg1, void **, 0) == NULL) {
        return;
    }
    n = ((s32 *)M2C_FIELD(arg1, void **, 0))[-1];
    if (n <= 0) {
        return;
    }
    for (i = 0; i < n; i++) {
        rec = (u8 *)M2C_FIELD(arg1, void **, 0) + i * 0x20;
        if (M2C_FIELD(rec, void **, 0) != NULL && M2C_FIELD(rec, s32 *, 0x1c) > 0) {
            args.unk0 = M2C_FIELD(rec, s32 *, 0x1c);
            args.unk4 = M2C_FIELD(rec, void **, 0);
            args.x = M2C_FIELD(rec, f32 *, 0x4);
            args.y = M2C_FIELD(rec, f32 *, 0x8);
            args.z = M2C_FIELD(rec, f32 *, 0xc);
            fn_80093BC8(arg0, &args);
        }
    }
}

void fn_80093D00(void *arg0, void *arg1) {
    void fn_80093DC0(void *, void *);
    void *var_r30;
    void *var_r31;

    var_r30 = M2C_FIELD(arg1, void **, 0);
    if (var_r30 != NULL) {
        do {
            var_r31 = *M2C_FIELD(var_r30, void ***, 0x1C);
            if (var_r31 != NULL) {
                do {
                    M2C_FIELD(M2C_FIELD(var_r31, void **, 0x1C), s32 *, 0x28) = 0;
                    var_r31 = M2C_FIELD(var_r31, void **, 0x10);
                } while (var_r31 != NULL);
            }
            var_r30 = M2C_FIELD(var_r30, void **, 0x10);
        } while (var_r30 != NULL);
    }
    fn_80093DC0(arg0, arg1);
}

void fn_80093D60(void *arg0, void *arg1) {
    void fn_80093DC0(void *, void *);
    void *var_r30;
    void *var_r31;

    var_r30 = M2C_FIELD(arg1, void **, 0);
    if (var_r30 != NULL) {
        do {
            var_r31 = *M2C_FIELD(var_r30, void ***, 0x1C);
            if (var_r31 != NULL) {
                do {
                    M2C_FIELD(M2C_FIELD(var_r31, void **, 0x1C), s32 *, 0x28) = 1;
                    var_r31 = M2C_FIELD(var_r31, void **, 0x10);
                } while (var_r31 != NULL);
            }
            var_r30 = M2C_FIELD(var_r30, void **, 0x10);
        } while (var_r30 != NULL);
    }
    fn_80093DC0(arg0, arg1);
}

void fn_80093E94(s32 arg0) {
    extern u8 **lbl_8049665C;
    void fn_80093EE8(s32, void *);
    u8 *vt;
    void *p;

    vt = *lbl_8049665C;
    p = (*(void *(**)(void *))(vt + 0x1CC))((u8 *)lbl_8049665C + *(s16 *)(vt + 0x1C8));
    if (p != NULL) {
        fn_80093EE8(arg0, p);
    }
}

void fn_80094038(s32 arg0) {
    extern u8 **lbl_8049665C;
    void fn_8009408C(s32, void *);
    u8 *vt;
    void *p;

    vt = *lbl_8049665C;
    p = (*(void *(**)(void *))(vt + 0x1D4))((u8 *)lbl_8049665C + *(s16 *)(vt + 0x1D0));
    if (p != NULL) {
        fn_8009408C(arg0, p);
    }
}

void fn_8009408C(s32 arg0, f32 *arg1) {
    extern u8 **lbl_80495050;
    u8 *vt;

    vt = *lbl_80495050;
    (*(void (**)(void *, f32, f32, f32, f32))(vt + 0x194))((u8 *)lbl_80495050 + *(s16 *)(vt + 0x190), arg1[0], arg1[1], arg1[2], arg1[3]);
}

void fn_800940D4(s32 arg0) {
    extern u8 **lbl_8049665C;
    void fn_80094128(s32, void *);
    u8 *vt;
    void *p;

    vt = *lbl_8049665C;
    p = (*(void *(**)(void *))(vt + 0x1DC))((u8 *)lbl_8049665C + *(s16 *)(vt + 0x1D8));
    if (p != NULL) {
        fn_80094128(arg0, p);
    }
}

void fn_80094128(s32 arg0, f32 *arg1) {
    extern s32 lbl_80495050;
    extern void fn_802EED94(s32, f32, f32, f32, f32);
    fn_802EED94(lbl_80495050, arg1[0], arg1[1], arg1[2], arg1[3]);
}

void fn_8009415C(void) {
    fn_80091BE8();
}

void fn_800945A0(void *arg0) {
    extern f32 lbl_803CC9A4[];
    u32 flags = M2C_FIELD(arg0, u32 *, 0x4D4);
    f32 f = lbl_803CC9A4[0];
    s32 v = M2C_FIELD(arg0, s32 *, 0xD4);
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = v;
    M2C_FIELD(arg0, f32 *, 0xC8) = f;
    M2C_FIELD(arg0, u32 *, 0x4D4) = flags & ~0x800;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
}

extern f32 lbl_803CC9A4[];
static inline s32 Field334_IsSet(void *obj) {
    return M2C_FIELD(obj, s32 *, 0x334) != 0;
}
static inline s32 Field314_Get(void *arg0) {
    s32 set = Field334_IsSet(M2C_FIELD(arg0, void **, 8));
    if (set) {
        return (s32)M2C_FIELD(arg0, void **, 8) + 0x314;
    }
    return (s32)M2C_FIELD(arg0, void **, 8) + 0x314;
}
extern void fn_802EC15C(s32, s32, s32);
extern void fn_802ED00C(s32, s32, s32);
void fn_80094F44(void *arg0, s32 arg1, s32 arg2) {
    extern void fn_802EC15C(s32, s32, s32);
    fn_802EC15C(Field314_Get(arg0), arg2, arg1);
}

s32 fn_80095A44(void) {
    return 1;
}

void fn_80095A4C(void *arg0, Vec3i *arg1, Vec3i *arg2, s32 arg3) {
    *arg1 = *(Vec3i *)((u8 *)arg0 + 0x134);
    *arg2 = *(Vec3i *)((u8 *)arg0 + 0x140);
    fn_802ED00C((s32)M2C_FIELD(arg0, void **, 8) + 0x314, M2C_FIELD(arg0, s32 *, 0x4C4), arg3);
}

void fn_80095AB8(void *arg0, s32 arg1, Vec3i *arg2) {
    switch (arg1) {
    case 2:
        *arg2 = *(Vec3i *)((u8 *)arg0 + 0x158);
        break;
    case 1:
        *arg2 = *(Vec3i *)((u8 *)arg0 + 0x14C);
        break;
    case 0:
        *arg2 = *(Vec3i *)((u8 *)arg0 + 0x134);
        break;
    }
}

void fn_80095DB0(void *arg0) {
    extern char lbl_8045B82C[];
    void fn_803379C8(char *, s32);
    void fn_802D20E8(void *);
    u32 i;

    for (i = 0; i < PtrVec_Size((PtrVec *)((u8 *)arg0 + 0x170)); i++) {
        fn_803379C8(lbl_8045B82C, **(s32 **)((u32)i * 4 + M2C_FIELD(arg0, u32 *, 0x170)));
        fn_802D20E8(*(void **)((u32)i * 4 + M2C_FIELD(arg0, u32 *, 0x170)));
    }
    M2C_FIELD(arg0, void ***, 0x174) = M2C_FIELD(arg0, void ***, 0x170);
}

void fn_800969B0(void) {

}

void fn_800969B4(s32 arg0, s32 arg1) {
    M2C_UNK fn_80248784(s32, s32);
    s32 var_r29;
    s32 var_r30;
    s32 var_r31;

    var_r30 = arg0 + 0x258;
    var_r31 = arg0 + 0x1D8;
    var_r29 = 4;
    do {
        fn_80248784(var_r31, var_r30);
        var_r30 += 0x80;
        var_r31 += 0x80;
        var_r29 -= 1;
    } while (var_r29 != 0);
    fn_80248784(arg0 + 0x3D8, arg1);
}

void fn_80096DA4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x114) = arg1;
}

void fn_80096DAC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x118) = arg1;
}

void fn_80096DB4(void *arg0) {
    s32 temp_r9;
    s32 var_r0;
    s32 var_r10;
    void *temp_r11;

    var_r10 = 1;
    temp_r11 = M2C_FIELD(arg0, void **, 8) + 0x314;
    temp_r9 = M2C_FIELD(temp_r11, s32 *, 4);
    if (temp_r9 >= 0) {
        var_r0 = M2C_FIELD(temp_r11, s32 *, 0x40) + (temp_r9 * 0xB0);
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        var_r10 = 0;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x374) = var_r10;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_80248488(void *, s32, u32);

static inline void *AllocAligned(u32 size) {
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

void *fn_80097A7C(u32 size) {
    void *p = AllocAligned(size);

    fn_80248488(p, 0, size);
    return p;
}

void fn_80097B40(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80097B74(void *arg0, s32 arg1) {
    if (arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0x4D4) = (s32) (M2C_FIELD(arg0, s32 *, 0x4D4) | 0x40);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4D4) = (s32) (M2C_FIELD(arg0, s32 *, 0x4D4) & 0xFFFFFFBF);
}

s32 fn_80097B9C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x4D4) >> 6U) & 1;
}

void fn_80097BA8(void *arg0) {
    f32 fn_80097C84();
    M2C_FIELD(arg0, f32 *, 0x34) = fn_80097C84();
}

s32 fn_80097BD8(s32 arg0) {
    return arg0 + 0x188;
}

f32 fn_80097BF8(void *arg0, f32 farg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0xFC);
    M2C_FIELD(arg0, f32 *, 0xFC) = farg0;
    return temp_f0;
}

f32 fn_80097C08(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xFC);
}

void fn_80097C20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C4) = arg1;
}

void fn_80097C28(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C8) = arg1;
}

void fn_80097C30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4CC) = arg1;
}

void fn_80097C38(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4D0) = arg1;
}

s32 fn_80097C50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C4);
}

s32 fn_80097C58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C8);
}

s32 fn_80097C60(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4CC);
}

s32 fn_80097C68(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4D0);
}

void fn_80097F38(void *arg0) {
    M2C_UNK fn_802E6030(s32, M2C_UNK);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4D4);
    if (temp_r0 & 0x4000) {
        M2C_FIELD(arg0, s32 *, 0x4D4) = (s32) (temp_r0 & 0xFFFFBFFF);
        fn_802E6030(M2C_FIELD(arg0, s32 *, 8) + 0x314, 0x80);
    }
}

void fn_800983AC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 5;
}

s32 fn_8009A418(void *arg0) {
    s32 fn_802EC568(s32, M2C_UNK);
    s32 temp_r9;
    s32 var_r30;
    s32 var_r9;
    void *temp_r11;
    void *temp_r3;
    void *temp_r9_2;

    var_r30 = 0;
    if (fn_802EC568(M2C_FIELD(arg0, s32 *, 8) + 0x314, 0x30) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x4D4) & 0x40) {
            temp_r11 = M2C_FIELD(arg0, s32 *, 8) + 0x314;
            temp_r9 = M2C_FIELD(temp_r11, s32 *, 4);
            if (temp_r9 != -1) {
                var_r9 = M2C_FIELD(((temp_r9 * 0xB0) + M2C_FIELD(temp_r11, s32 *, 0x40)), s32 *, 0x30);
            } else {
                var_r9 = 0;
            }
            if (var_r9 & 0x20) {
                temp_r3 = M2C_FIELD(arg0, void **, 4);
                temp_r9_2 = M2C_FIELD(temp_r3, void **, 4);
                if (M2C_FIELD(temp_r9_2, s32 (**)(void *, M2C_UNK), 0xAC)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0xA8), 0) > 0) {
                    goto block_7;
                }
            }
        }
    } else {
block_7:
        var_r30 = 1;
    }
    return var_r30;
}

s32 fn_8009A6CC(void *arg0) {
    s32 temp_r9;
    s32 var_r11;
    void *temp_r3;
    void *var_r3;

    var_r11 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) != 4) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 8) + 0x314;
        temp_r9 = M2C_FIELD(temp_r3, s32 *, 4);
        if (temp_r9 >= 0) {
            var_r3 = M2C_FIELD(temp_r3, s32 *, 0x40) + (temp_r9 * 0xB0);
        } else {
            var_r3 = NULL;
        }
        if ((var_r3 == NULL) || (M2C_FIELD(var_r3, s32 *, 8) & 0x200)) {
            goto block_6;
        }
    } else {
block_6:
        var_r11 = 0;
    }
    return var_r11;
}

void fn_8009A724(void) {
    M2C_UNK fn_80097A3C(M2C_UNK, M2C_UNK);
    fn_80097A3C(1, 0xFFFF);
}

