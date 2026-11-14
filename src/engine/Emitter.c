/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } EmitterVec3;

static inline void EmitterVec3_Set(EmitterVec3 *v, f32 x, f32 y, f32 z) {
    v->z = z;
    v->y = y;
    v->x = x;
}

void fn_8030AA98(void *arg0);
extern void *lbl_80494FDC;
void fn_80325C50(s32 arg0, void *arg1);
extern char lbl_8041B020[];
extern f32 lbl_803F1F64[];
void fn_802F04BC(void *arg0);
extern const f32 lbl_803F2088[];
extern const f32 lbl_803F208C[];
extern const f32 lbl_803F2090[];
extern void *lbl_80494EC4;
void fn_8030C0E8(void *arg0);
s32 fn_8030AA04(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_8030AB88(void *arg0, s32 arg1);
void fn_8030B800(void);
void fn_8030B280(void);
s32 fn_8030AA04(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    extern s32 fn_8030F650(void *);
    extern f32 lbl_803F1F5C[];
    extern f32 lbl_803F1F60[];
    EmitterVec3 v;
    s32 r;
    s32 ret;
    f32 f;

    r = fn_8030F650((u8 *)arg0 + 0x8C);
    EmitterVec3_Set(&v, lbl_803F1F60[0], lbl_803F1F60[0], lbl_803F1F60[0]);
    M2C_FIELD(arg0, f32 *, 0x68) = f = lbl_803F1F5C[0];
    M2C_FIELD(arg0, f32 *, 0x6C) = f;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    *(EmitterVec3 *)((u8 *)arg0 + 0x90) = v;
    ret = 0;
    if (r < 0) {
        ret = -1;
    }
    return ret;
}

void fn_8030AA98(void *arg0) {
    extern void fn_8030F818(void *);
    if (M2C_FIELD(arg0, s32 *, 0x8C) != 0) {
        fn_8030F818((u8 *)arg0 + 0x8C);
    }
}

void fn_8030AAC8(void *arg0, void *arg1, s32 arg2) {
    extern void fn_8030F8EC(void *, s32);
    extern void fn_803256E0(s32, void *, s32);
    s32 p = M2C_FIELD(arg0, s32 *, 0x8C);
    if (p != 0) {
        fn_8030F8EC(arg1, p);
        if (arg2 != 0) {
            fn_803256E0(M2C_FIELD(lbl_80494FDC, s32 *, 0x30), arg0, 0);
        }
    }
}

void fn_8030AB24(void *arg0, void *arg1, s32 arg2) {
    extern void fn_8030F938(void *, s32);
    s32 p = M2C_FIELD(arg0, s32 *, 0x8C);
    s32 mgr;
    if (p != 0) {
        fn_8030F938(arg1, p);
        if (arg2 != 0) {
            mgr = M2C_FIELD(lbl_80494FDC, s32 *, 0x30);
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                fn_80325C50(mgr, arg0);
            }
        }
    }
}

void fn_8030AB88(void *arg0, s32 arg1) {
    f32 *dst = M2C_FIELD(arg0, f32 **, 0x8C);
    f32 *p;

    if (dst != NULL) {
        p = (f32 *)arg1;
        dst[2] = *p++;
        dst[3] = *p++;
        dst[4] = *p++;
        dst[5] = *p++;
        dst[6] = *p++;
        dst[7] = *p++;
        dst[8] = *p++;
        dst[9] = *p++;
        dst[10] = *p++;
        dst[11] = *p++;
        dst[12] = *p++;
        dst[13] = *p++;
        dst[14] = *p++;
        dst[15] = *p++;
        dst[16] = *p++;
        dst[17] = *p;
    }
}

void fn_8030AC1C(void *arg0, u32 arg1, s32 arg2) {
    u32 *p;
    s32 mgr;

    p = M2C_FIELD(arg0, u32 **, 0x8C);
    if (p != NULL) {
        if (arg2 != 0) {
            p[0] |= arg1;
        } else {
            p[0] &= ~arg1;
        }
        if ((arg1 & 0x4000) && arg2 != 0) {
            mgr = M2C_FIELD(lbl_80494FDC, s32 *, 0x30);
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                fn_80325C50(mgr, arg0);
            }
        }
    }
}

s32 fn_8030AC90(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x8C);
    if (p == NULL) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(p, void **, 4), s32 *, 0x84);
}

s32 fn_8030ACB0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

void *fn_8030ACB8(void *arg0) {
    s32 *p;
    f32 f;

    fn_802F04BC(arg0);
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, char **, 0) = lbl_8041B020;
    p = (s32 *)((u8 *)arg0 + 0x9C);
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;
    p[10] = 0;
    f = lbl_803F1F64[0];
    p[13] = 0;
    ((f32 *)p)[11] = f;
    ((f32 *)p)[12] = f;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    return arg0;
}

extern void *lbl_80494FDC;
void fn_80325C50(s32 arg0, void *arg1);
extern char lbl_8041B020[];
extern f32 lbl_803F1F64[];
void fn_802F04BC(void *arg0);
void fn_802F05AC(void *arg0, s32 arg1);
void fn_8030AD40(void *arg0, s32 arg1) {
    u32 *p;

    M2C_FIELD(arg0, char **, 0) = lbl_8041B020;
    p = M2C_FIELD(arg0, u32 **, 0x8C);
    if (p != NULL && !(p[0] & 0x4000)) {
        fn_8030AA98(arg0);
    }
    fn_802F05AC(arg0, arg1);
}

void fn_8030ADA0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp8, s32 arg_spC) {
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg0, void **, 0x8C);
    if (temp_r11 != NULL) {
        if (arg1 != 0xFFFF) {
            M2C_FIELD(temp_r11, s32 *, 0x90) = arg1;
        }
        if (arg3 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0x98) = arg3;
        }
        if (arg5 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0xA0) = arg5;
        }
        if (arg4 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0x9C) = arg4;
        }
        if (arg6 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0xA4) = arg6;
        }
        if (arg7 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0xA8) = arg7;
        }
        if (arg2 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0x94) = arg2;
        }
        if (arg_spC != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0xB0) = arg_spC;
        }
        if (arg_sp8 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0xAC) = arg_sp8;
        }
    }
}

void fn_8030AE60(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, void **, 0x8C) != NULL) {
        fn_8030ADA0(arg0, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, arg1, arg2, 0, 0);
    }
}

void fn_8030AEC8(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, void **, 0x8C) != NULL) {
        fn_8030ADA0(arg0, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, arg1, arg2);
    }
}

void fn_8030AF3C(void *arg0) {
    void fn_8030F5B8(void *);

    if (M2C_FIELD(arg0, void **, 0x8C) != NULL) {
        fn_8030F5B8(M2C_FIELD(arg0, void **, 0x8C));
    }
}

void fn_8030AF68(void *arg0, void *arg1) {
    typedef struct { f32 x, y, z; } Vec3f;

    M2C_FIELD(arg0, Vec3f *, 0x90) = *(Vec3f *)arg1;
}

void fn_8030AF88(void *arg0, f32 farg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), f32 *, 0xBC) = farg0;
}

void fn_8030AF94(void *arg0, void *arg1) {
    extern f32 lbl_80494E0C;
    void fn_8030F350(void *, f32);
    void *e = M2C_FIELD(M2C_FIELD(arg1, void **, 0x24), void **, 0x8C);

    if (e != NULL) {
        fn_8030F350(e, lbl_80494E0C);
    }
}

s32 fn_8030AFC8(void) {
    return 0;
}

void fn_8030AFD0(void *arg0) {
    void fn_802F14E0(void *, void *);
    void *e = M2C_FIELD(arg0, void **, 0x8C);
    void *m;

    if (e != NULL) {
        M2C_FIELD(arg0, void **, 0xC0) = arg0;
        M2C_FIELD(arg0, void **, 0xB0) = fn_8030AF94;
        if (!(M2C_FIELD(e, u32 *, 0) & 0x02200000)) {
            m = M2C_FIELD(e, void **, 0x80);
            M2C_FIELD(arg0, s32 *, 0x9C) = M2C_FIELD(M2C_FIELD(m, void **, 0x20), u32 *, 4) & 0x3E00;
            if ((M2C_FIELD(arg0, s32 *, 0xA0) = M2C_FIELD(M2C_FIELD(m, void **, 0x20), s16 *, 2)) != 0) {
                M2C_FIELD(arg0, void **, 0xA4) = (char *)arg0 + 0x90;
            } else {
                M2C_FIELD(arg0, void **, 0xA4) = (char *)e + 0x38;
            }
        } else {
            M2C_FIELD(arg0, void **, 0xA4) = (char *)e + 0x38;
        }
        fn_802F14E0(arg0, (char *)arg0 + 0x9C);
    }
}

void fn_8030C0E8(void *arg0) {
    extern void *lbl_80494ED4;
    extern void *lbl_80494ED0;
    extern const f32 lbl_803F2080[];

    if (M2C_FIELD(arg0, s32 *, 0xB4) == 0) {
        M2C_FIELD(M2C_FIELD(lbl_80494ED4, void **, 0x68), void (**)(void *, void *), 0x28C)(M2C_FIELD(M2C_FIELD(lbl_80494ED4, void **, 0x68), s16 *, 0x288) + (u8 *)lbl_80494ED4, lbl_80494ED0);
    }
    M2C_FIELD(M2C_FIELD(lbl_80494ED4, void **, 0x68), void (**)(void *, s32, s32, s32, s32), 0x1BC)((u8 *)lbl_80494ED4 + M2C_FIELD(M2C_FIELD(lbl_80494ED4, void **, 0x68), s16 *, 0x1B8), 1, 2, 0, 0);
    M2C_FIELD(M2C_FIELD(lbl_80494ED4, void **, 0x68), void (**)(void *, void *, f32, s32), 0xF4)((u8 *)lbl_80494ED4 + M2C_FIELD(M2C_FIELD(lbl_80494ED4, void **, 0x68), s16 *, 0xF0), (u8 *)lbl_80494EC4 + 0xA0, lbl_803F2080[0], 0);
}

extern void *lbl_80494ED0;
extern const f32 lbl_803F2080[];
extern const f32 lbl_803F2084[];
void fn_8030C18C(void *arg0) {
    void *g = lbl_80494EC4;

    M2C_FIELD(arg0, f32 *, 0x38) = M2C_FIELD(g, f32 *, 0x110);
    M2C_FIELD(arg0, f32 *, 0x3C) = M2C_FIELD(g, f32 *, 0x114);
    M2C_FIELD(arg0, f32 *, 0x40) = M2C_FIELD(g, f32 *, 0x118) + lbl_803F2084[0];
    fn_8030C0E8(arg0);
}

void fn_8030C1D8(void *arg0) {
    void *g = lbl_80494EC4;
    f32 z, a, b;

    z = lbl_803F2088[0];
    M2C_FIELD(arg0, f32 *, 0x38) = M2C_FIELD(g, f32 *, 0x280);
    M2C_FIELD(arg0, f32 *, 0x3C) = M2C_FIELD(g, f32 *, 0x284);
    a = lbl_803F208C[0];
    M2C_FIELD(arg0, f32 *, 0x40) = z;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), f32 *, 0xD4) = a;
    b = lbl_803F2090[0];
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), f32 *, 0xD0) = a;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), f32 *, 0x110) = b;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), f32 *, 0x10C) = b;
    fn_8030C0E8(arg0);
}

s32 fn_8030C24C(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 id;
    s32 p;

    id = fn_8030AA04(arg0, arg1, arg2, (s32)arg3, 0, 0, 0, 0);
    if (id != -1) {
        fn_8030ADA0(arg0, (s32)fn_8030B800, (s32)fn_8030B280, (s32)fn_8030C0E8, 0, fn_8030ACB0(arg0), 0, 0, 0, 0);
        p = fn_8030ACB0(arg0);
        M2C_FIELD(p, s32 *, 0x80) = M2C_FIELD(arg3, s32 *, 0x16C);
        fn_8030AB88(arg0, M2C_FIELD(p, s32 *, 0x88));
    }
    return id;
}

void fn_8030C18C(void *arg0);
s32 fn_8030C300(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 id;
    u32 *p;

    id = fn_8030C24C(arg0, arg1, arg2, arg3);
    if (id != -1) {
        fn_8030ADA0(arg0, (s32)fn_8030B800, (s32)fn_8030B280, (s32)fn_8030C18C, 0, fn_8030ACB0(arg0), NULL, 0, 0, 0);
        p = (u32 *)fn_8030ACB0(arg0);
        M2C_FIELD(M2C_FIELD(p, void **, 0x88), u32 *, 0x108) |= 0x1000000;
        M2C_FIELD(M2C_FIELD(p, void **, 0x88), u32 *, 0x108) |= 0x100000;
        M2C_FIELD(M2C_FIELD(p, void **, 0x88), u32 *, 0x108) &= ~0x30;
        p[0] &= ~0x2000;
        return id;
    }
    return id;
}

s32 fn_8030C3C8(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 id;
    u32 *p;

    id = fn_8030C24C(arg0, arg1, arg2, arg3);
    if (id != -1) {
        fn_8030ADA0(arg0, (s32)fn_8030B800, (s32)fn_8030B280, (s32)fn_8030C1D8, 0, fn_8030ACB0(arg0), NULL, 0, 0, 0);
        p = (u32 *)fn_8030ACB0(arg0);
        M2C_FIELD(M2C_FIELD(p, void **, 0x88), u32 *, 0x108) |= 0x1000000;
        M2C_FIELD(M2C_FIELD(p, void **, 0x88), u32 *, 0x108) |= 0x100000;
        M2C_FIELD(M2C_FIELD(p, void **, 0x88), u32 *, 0x108) &= ~0x30;
        p[0] &= ~0x2000;
        return id;
    }
    return id;
}

void fn_8030C490(void *arg0) {
    fn_8030AA98(arg0);
}

extern void *lbl_80494EC4;
void fn_8030C0E8(void *arg0);
s32 fn_8030AA04(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_8030AB88(void *arg0, s32 arg1);
void fn_8030B800(void);
void fn_8030B280(void);
extern void *lbl_80494ED4;
extern f32 lbl_803F2094[];
void fn_8030C598(void) {
    void *vt = M2C_FIELD(lbl_80494ED4, void **, 0x68);
    M2C_FIELD(vt, void (**)(void *, f32), 0x254)((u8 *)lbl_80494ED4 + M2C_FIELD(vt, s16 *, 0x250), lbl_803F2094[0]);
}

void fn_8030C5D8(void);
void fn_8030C4B0(void);
s32 fn_8030C7BC(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 id;
    s32 p;

    id = fn_8030AA04(arg0, arg1, arg2, (s32)arg3, (s32)fn_8030C5D8, 0, 0, 0);
    if (id != -1) {
        fn_8030ADA0(arg0, (s32)fn_8030C5D8, (s32)fn_8030C4B0, (s32)fn_8030C598, 0, fn_8030ACB0(arg0), 0, 0, 0, 0);
        p = fn_8030ACB0(arg0);
        M2C_FIELD(p, s32 *, 0x80) = M2C_FIELD(arg3, s32 *, 0x16C);
        fn_8030AB88(arg0, M2C_FIELD(p, s32 *, 0x88));
        M2C_FIELD(M2C_FIELD(p, void **, 0x88), u32 *, 0x108) |= 0x200000;
        return id;
    }
    return id;
}

void fn_8030C880(void);
s32 fn_8030CA7C(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 id;
    s32 p;

    id = fn_8030AA04(arg0, arg1, arg2, (s32)arg3, (s32)fn_8030C880, 0, 0, 0);
    if (id != -1) {
        fn_8030ADA0(arg0, (s32)fn_8030C880, (s32)fn_8030C4B0, (s32)fn_8030C598, 0, fn_8030ACB0(arg0), 0, 0, 0, 0);
        p = fn_8030ACB0(arg0);
        M2C_FIELD(p, s32 *, 0x80) = (s32)((u8 *)arg3 + 0x16C);
        fn_8030AB88(arg0, M2C_FIELD(p, s32 *, 0x88));
        M2C_FIELD(M2C_FIELD(p, void **, 0x88), u32 *, 0x108) |= 0x2000000;
        M2C_FIELD(M2C_FIELD(p, void **, 0x88), u32 *, 0x108) |= 0x800;
        M2C_FIELD(M2C_FIELD(p, void **, 0x88), s32 *, 0x104) = M2C_FIELD(arg3, s32 *, 0x168);
        return id;
    }
    return id;
}

void fn_8030CB5C(s32 arg0, s32 arg1) {

}

void fn_8030CB60(void) {
    fn_8030CB5C(1, 0xFFFF);
}

