/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void fn_802EA51C(void *, s32, s32, s32, s32, f32);
extern f32 lbl_803C73BC[];
extern void fn_80050C6C(void *);
extern void fn_80052468(void *);
extern u8 lbl_8041F94C[];
extern s32 fn_8004E8F0(void *, s32);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
void fn_80052238(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x384) = (s32) (M2C_FIELD(arg0, s32 *, 0x384) | arg1);
}

s32 fn_80052248(void *arg0) {
    s32 temp_r3;
    s32 var_r9;

    var_r9 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x380) != 4) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x3BC);
        var_r9 = 0;
        if ((temp_r3 != 0x92D8AE4A) && (temp_r3 != 0x6BCF6EE9)) {
            var_r9 = 1;
        }
    }
    return var_r9;
}

s32 fn_800522A8(void *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x38C) == 0 && M2C_FIELD(arg0, s32 *, 0x388) != 0) {
        var_r9 = (u32) (M2C_FIELD(arg0, s32 *, 0x380) - 5) < 3;
    }
    return var_r9;
}

s32 fn_800522E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3D0) = arg1;
    return 1;
}

void fn_800523DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3BC) = arg1;
    if (arg1 == 0x92D8AE4A || arg1 == 0x30AA9779 || arg1 == 0x6BCF6EE9) {
        fn_802EA51C(M2C_FIELD(arg0, void **, 0x390), 1, M2C_FIELD(arg0, s32 *, 0x3BC), -1, 0, lbl_803C73BC[0]);
    }
    fn_80050C6C(arg0);
    fn_80052468(arg0);
}

void fn_80052720(u8 *arg0, s32 arg1) {
    extern s32 lbl_8041FC68[];
    extern u8 *lbl_80494FA4;
    u8 *a;
    u8 *b;
    s32 off;

    if (lbl_8041FC68[0] != 0) {
        off = arg1 * 4;
        a = arg0 + 0x400;
        if (*(s32 *)(a + off) != 0) {
            b = arg0 + 0x404;
            if (*(s32 *)(b + off) != 0) {
                char *vt;
                u8 *obj = lbl_80494FA4;
                *(s32 *)(b + off) = 0;
                vt = *(char **)obj;
                M2C_FIELD(vt, void (**)(void *, s32), 0xA4)(obj + M2C_FIELD(vt, s16 *, 0xA0), *(s32 *)(a + off));
            }
        }
    }
}

void fn_80052798(s32 arg0, s32 arg1) {
    extern f32 lbl_803C73D4[];
    extern f32 lbl_803C73D8[];
    extern f32 lbl_803C73DC[];
    extern f32 lbl_8041FE00[];
    extern f32 lbl_8041FDF4[];

    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_8041FDF4[0] = lbl_803C73D4[0];
        lbl_8041FDF4[1] = lbl_803C73D8[0];
        lbl_8041FDF4[2] = lbl_803C73DC[0];
        lbl_8041FE00[0] = lbl_803C73D4[0];
        lbl_8041FE00[1] = lbl_803C73D8[0];
        lbl_8041FE00[2] = lbl_803C73DC[0];
    }
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
void *fn_800527F4(u32 size) {
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

void fn_800528A0(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_800528D4(s32 *arg0) {
    *arg0 |= 1;
}

void fn_800528E4(s32 *arg0) {
    *arg0 |= 2;
}

void fn_800528F4(s32 *arg0) {
    *arg0 |= 4;
}

void fn_80052904(s32 *arg0) {
    *arg0 |= 8;
}

void fn_80052914(s32 *arg0) {
    *arg0 &= 0xFFFFFFFE;
}

void fn_80052924(s32 *arg0) {
    *arg0 &= 0xFFFFFFFD;
}

void fn_80052934(s32 *arg0) {
    *arg0 &= 0xFFFFFFFB;
}

void fn_80052944(s32 *arg0) {
    *arg0 &= 0xFFFFFFF7;
}

s32 fn_80052954(u32 *arg0) {
    return ((u32) *arg0 >> 1U) & 1;
}

s32 fn_80052960(s32 *arg0) {
    extern u8 lbl_8041F94C[];
    s32 fn_8004E8F0(void *, s32);
    s32 r;

    if (fn_8004E8F0(lbl_8041F94C, 4) != 0) {
        r = 1;
    } else {
        r = *arg0 & 1;
    }
    return r;
}

s32 fn_800529B0(u32 *arg0) {
    return ((u32) *arg0 >> 2U) & 1;
}

s32 fn_800529BC(u32 *arg0) {
    return ((u32) *arg0 >> 3U) & 1;
}

s32 fn_800529C8(s32 *arg0) {
    s32 t;
    s32 ret;

    t = fn_8004E8F0(lbl_8041F94C, 4);
    ret = 1;
    if (t == 0 && *arg0 == 0) {
        ret = 0;
    }
    return ret;
}

extern void fn_802EA51C(void *, s32, s32, s32, s32, f32);
extern f32 lbl_803C73BC[];
extern void fn_80050C6C(void *);
extern void fn_80052468(void *);
extern s32 fn_8004E8F0(void *, s32);
void *fn_80052A1C(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8((void *) size);
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)(void)) fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void fn_80052AC8(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80052AFC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38C) = 1;
}

void fn_80052B08(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38C) = 0;
}

void fn_80052B14(void) {
    void fn_80052798(s32, s32);
    fn_80052798(1, 0xFFFF);
}

