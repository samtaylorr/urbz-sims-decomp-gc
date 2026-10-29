/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s32 a;
    s32 b;
} FamilyPair;

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} FamilyQuad;

typedef struct {
    s32 *begin;
    s32 *end;
} FamilyVec;

s32 *fn_8010C464(s32 (*first)[2], s32 (*last)[2], s32 key);
s32 fn_8010C3F8(void *arg0, void *arg1, s32 arg2);
void fn_801B3908(void *, s32);
void fn_801B3910(void *, u16);

static inline void FamilyImpl_SetId(void *p, s32 a, u16 b) {
    fn_801B3908(p, a);
    fn_801B3910(p, b);
}

void fn_80106008(s32 *arg0) {
    M2C_UNK fn_8011AA6C(s32);
    fn_8011AA6C(*arg0);
}

s32 fn_8010A3E8(void) {
    return 0;
}

void fn_8010A3F0(void) {

}

void fn_8010A578(u8 **self) {
    void *fn_8015125C(void *, s32);
    u8 *child;
    u8 *n;
    void *p;

    child = *(u8 **)(*self + 0xC);
    p = child != NULL ? fn_8015125C(***(void ****)(child + 4), 9) : NULL;
    if (p == NULL) {
        p = self;
    }
    while (p != NULL) {
        n = *(u8 **)(*(u8 **)p + 8);
        p = n != NULL ? fn_8015125C(***(void ****)(n + 4), 9) : NULL;
    }
}

s32 fn_8010A610(void) {
    return 0x43555253;
}

s32 fn_8010A7EC(void) {
    return 0;
}

s32 fn_8010A7F4(void *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 8) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xC) != 0)) {
        var_r9 = 1;
    }
    return var_r9;
}

s32 fn_8010A81C(u8 *self) {
    u8 *p = *(u8 **)(self + 8);
    return p != NULL ? *(s32 *)(p + 4) : 0;
}

void fn_8010A834(void *arg0) {
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r30;
    void *temp_r30_2;

    temp_r29 = M2C_FIELD(arg0, void **, 4);
    temp_r30 = M2C_FIELD(temp_r29, void **, 4);
    temp_r30_2 = temp_r30 + 0x50;
    temp_r29_2 = temp_r29 + M2C_FIELD(temp_r30, s16 *, 0x50);
    M2C_FIELD(temp_r30_2, M2C_UNK (**)(void *, s32), 4)(temp_r29_2, fn_8010A7EC());
}

FamilyPair fn_8010A884(u8 *self) {
    return *(FamilyPair *)(self + 0x14);
}

s32 fn_8010A89C(s32 *self) {
    return self[7];
}

void fn_8010A8A4(void) {

}

void fn_8010AB34(u8 *self) {
    void fn_801F5304(void *);
    extern u8 lbl_8040E5D0[];
    *(u8 **)(self + 0x7C) = lbl_8040E5D0;
    fn_801F5304(self);
}

void fn_8010AB64(void *arg0, s32 arg1) {
    extern s16 lbl_804944C4;
    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
    }
    lbl_804944C4 = 1;
}

s32 fn_8010B4E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

void fn_8010B528(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

extern u8 lbl_8040E770[];
extern void fn_802D20E8(void *);
void fn_8010B568(void **self, s32 flags) {
    *self = lbl_8040E770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8010B9A0(s32 arg0, s32 arg1) {
    s32 fn_800F3304(s32);
    M2C_UNK fn_800F7148(s32, s32);
    fn_800F7148(arg1, fn_800F3304(arg0 + 4));
}

s32 fn_8010B9DC(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(arg0, s32 *, 0x24)) >> 2;
}

void fn_8010BAC4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

s32 fn_8010BC60(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_803A1354(void *, s32, s32, s16, s32);
    struct { s32 *begin; s32 *end; } *v = (void *)((u8 *)arg0 + 0x24);
    s32 *first = v->begin;
    s32 *p;

    for (p = first; p != v->end; p++) {
    }
    v->end = first;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    return fn_803A1354(arg0, arg1, 0x46414D49, arg2, arg3) == 0;
}

s32 fn_8010BCC8(void *arg0, s32 arg1) {
    s32 fn_803A13B8(void *, s32, s32, s32, s32);
    if (M2C_FIELD(arg0, s32 *, 8) == -1) {
        return 0;
    }
    return fn_803A13B8(arg0, arg1, 0x46414D49, M2C_FIELD(arg0, s16 *, 0xA), 0xE) == 0;
}

void fn_8010BD14(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F22F0(s32, s32);
    s32 fn_800F7138(s32);
    fn_800F22F0(arg0 + 4, fn_800F7138(arg1));
}

s32 fn_8010BD50(void) {
    return 0;
}

void fn_8010BF14(u8 *self, s32 key) {
    FamilyVec *v = (FamilyVec *)(self + 0x24);
    s32 *it;

    for (it = v->begin; it != v->end; it++) {
        if (*it == key) {
            FamilyVec *w = (FamilyVec *)(self + 0x24);
            s32 *src = it + 1;
            if (src != w->end) {
                s32 *s = src;
                s32 *d = it;
                s32 n;
                for (n = w->end - s; n > 0; n--) {
                    *d++ = *s++;
                }
            }
            w->end--;
            return;
        }
    }
}

void fn_8010BF98(s32 arg0, s32 arg1) {
    M2C_UNK fn_8018D8DC(s32, s32, M2C_UNK);
    fn_8018D8DC(arg1, arg0, 1);
}

void fn_8010BFC8(u8 **self, void *arg1) {
    extern char lbl_803D6D94[];
    void fn_800F7028(void *, char *, s32);
    void fn_800F7494(void *, void *);
    u8 *vt = *self;
    (*(void (**)(void *))(vt + 0x74))((u8 *)self + *(s16 *)(vt + 0x70));
    fn_800F7028(arg1, lbl_803D6D94, -1);
    fn_800F7494(arg1, self[2]);
}

void **fn_8010C02C(void **self) {
    *self = lbl_8040E770;
    return self;
}

s32 fn_8010C040(s32 *self) {
    return self[2];
}

void fn_8010C048(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

s32 fn_8010C050(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_8010C058(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

s32 fn_8010C060(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void fn_8010C068(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

s32 fn_8010C070(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void fn_8010C078(void *arg0, s32 arg1) {
    if (arg1 <= 0xF423F) {
        M2C_FIELD(arg0, s32 *, 0x14) = arg1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0xF423F;
}

s32 fn_8010C098(s32 *self) {
    return self[6];
}

void fn_8010C0A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

void fn_8010C0A8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}

void fn_8010C0B8(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x34) & 0xFFFFFFFE;
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r0 | 1);
    }
}

s32 fn_8010C0D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34) & 1;
}

void fn_8010C0E4(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x34) & 0xFFFFFFFD;
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r0 | 2);
    }
}

s32 fn_8010C104(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 1U) & 1;
}

void fn_8010C110(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x34) & 0xFFFFFFFB;
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r0 | 4);
    }
}

s32 fn_8010C130(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 2U) & 1;
}

s32 fn_8010C13C(void) {
    return 0;
}

s32 fn_8010C144(void) {
    return 0;
}

s32 fn_8010C14C(void) {
    return 0;
}

s32 fn_8010C154(void) {
    return 0;
}

void fn_8010C15C(void) {
    M2C_UNK fn_8010C214();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_8010C214();
}

void fn_8010C184(void) {
    M2C_UNK fn_8010C214();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_8010C214();
}

void fn_8010C1AC(void) {
    M2C_UNK fn_8010C214();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_8010C214();
}

void fn_8010C1D4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x64))((char *)obj + *(s16 *)(vt + 0x60), 3);
    }
}

extern u8 lbl_8040E8B8[];
void *fn_8010C214(void **self) {
    extern u8 lbl_8040E8B8[];
    void fn_801B3814(void *, s32, s32);
    *self = lbl_8040E8B8;
    fn_801B3814(self + 1, -1, 0);
    self[3] = 0;
    self[4] = 0;
    return self;
}

extern u8 lbl_8040E940[];
void fn_8010C268(void **self, s32 flags) {
    self[3] = 0;
    *self = lbl_8040E940;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

f32 fn_8010C2A4(void *arg0, s32 key, f32 def) {
    u8 *t;
    u8 *p;
    s32 n;
    f32 *r;

    t = M2C_FIELD(arg0, u8 **, 0xC);
    if (t != NULL) {
        p = *(u8 **)t;
        n = 0;
        if (p != NULL) {
            n = *(s32 *)(p - 4);
        }
        r = (f32 *)fn_8010C464((s32 (*)[2])p, (s32 (*)[2])(p + n * 8), key);
        if (r != NULL) {
            def = *r;
        }
    }
    return def;
}

s32 fn_8010C30C(void *arg0, s32 key) {
    u8 *t;
    u8 *p;
    s32 n;
    s32 result = 0;

    t = M2C_FIELD(arg0, u8 **, 0xC);
    if (t != NULL) {
        p = *(u8 **)t;
        n = 0;
        if (p != NULL) {
            n = *(s32 *)(p - 4);
        }
        if (fn_8010C464((s32 (*)[2])p, (s32 (*)[2])(p + n * 8), key) != NULL) {
            result = 1;
        }
    }
    return result;
}

s32 fn_8010C374(void *arg0, s32 arg1, s32 arg2) {
    extern u8 *lbl_8049665C;
    void fn_801B3908(void *, s32);
    void fn_801B3910(void *, u16);
    s32 result;

    result = fn_8010C3F8(arg0, (*(void *(**)(u8 *))(*(u8 **)lbl_8049665C + 0x3C))(lbl_8049665C + *(s16 *)(*(u8 **)lbl_8049665C + 0x38)), arg2);
    if (result == 0) {
        void *p = (u8 *)arg0 + 4;
        s32 a = arg1;
        u16 b = arg2;
        fn_801B3908(p, a);
        fn_801B3910(p, b);
    }
    return result;
}

s32 fn_8010C3F8(void *arg0, void *arg1, s32 arg2) {
    s32 fn_803A1484(void *, void *);
    u8 *p;
    s32 n;
    void *t;

    if (arg1 != NULL) {
        t = M2C_FIELD(arg1, void **, 0xC);
        if (t != NULL) {
            p = M2C_FIELD(t, u8 **, 0x30);
            n = 0;
            if (p != NULL) {
                n = *(s32 *)(p - 4);
            }
            M2C_FIELD(arg0, s32 *, 0xC) = fn_803A1484(p, p + n * 8);
            return 0;
        }
    }
    return -0x62;
}

s32 *fn_8010C464(s32 (*first)[2], s32 (*last)[2], s32 key) {
    s32 fn_802486DC(s32, s32);
    s32 n;
    s32 c;
    s32 (*mid)[2];

    for (;;) {
        n = last - first;
        if (n <= 0) {
            return NULL;
        }
        if (n == 1) {
            if (fn_802486DC((*first)[1], key) == 0) {
                return *first;
            }
            return NULL;
        }
        mid = first + n / 2;
        c = fn_802486DC(key, (*mid)[1]);
        if (c == 0) {
            return *mid;
        }
        if (c > 0) {
            first = mid + 1;
        } else {
            last = mid;
        }
    }
}

void *fn_8010C508(void *arg0, u8 *arg1) {
    void fn_801B3824(void *, void *);
    fn_801B3824(arg0, arg1 + 4);
    return arg0;
}

s32 fn_8010C53C(u8 **arg0, u8 *arg1) {
    u8 *vt = *arg0;
    return (*(s32 (**)(void *, s32, s16))(vt + 0x7C))((u8 *)arg0 + *(s16 *)(vt + 0x78), *(s32 *)arg1, *(s16 *)(arg1 + 4)) == 0;
}

s32 fn_8010C580(void) {
    return 0;
}

s32 fn_8010C588(void **arg0, s32 arg1, void ***arg2) {
    if (arg2 != NULL && (arg1 == 1 || arg1 == 0x2BEC8A06)) {
        char *vt = (char *)*arg0;
        (*(void (**)(void *))(vt + 0x14))((char *)arg0 + *(s16 *)(vt + 0x10));
        *arg2 = arg0;
        return 1;
    }
    return 0;
}

s32 fn_8010C5F8(void) {
    return 1;
}

s32 fn_8010C600(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_8010C614(void *arg0) {
    s32 var_r3;
    void *temp_r9;

    var_r3 = M2C_FIELD(arg0, s32 *, 0x10) - 1;
    M2C_FIELD(arg0, s32 *, 0x10) = var_r3;
    if (var_r3 == 0) {
        if (arg0 != NULL) {
            temp_r9 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_r9, void (**)(void *, s32), 0x64)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x60), 3);
        }
        return 0;
    }
    return var_r3;
}

s32 fn_8010C670(void) {
    return 0;
}

s32 fn_8010C678(void) {
    return 0;
}

s32 fn_8010C680(void) {
    return 0;
}

s32 fn_8010C688(void) {
    return 0;
}

void fn_8010C690(s32 arg0) {
    extern s32 lbl_80494404;
    extern s32 lbl_80495ADC;
    extern s32 lbl_80496644;
    void fn_8010C96C(s32, s32);
    s32 fn_8010C9E8(s32);
    if (lbl_80495ADC != 0) {
        if (arg0 != 0) {
            lbl_80494404 = fn_8010C9E8(lbl_80496644);
            fn_8010C96C(lbl_80496644, 5);
        } else {
            fn_8010C96C(lbl_80496644, lbl_80494404);
        }
    }
}

FamilyQuad *fn_8010C6E8(FamilyQuad *q) {
    q->a = 0;
    q->b = 0;
    q->c = 0;
    q->d = 0;
    return q;
}

void fn_8010C704(void *arg0, s32 arg1) {
    extern s32 lbl_80495AFC;
    void fn_802D20E8(void *);
    void **obj;

    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        obj = M2C_FIELD(arg0, void ***, 4);
        if (obj != NULL) {
            char *vt = (char *)*obj;
            (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 8), 3);
        }
        lbl_80495AFC = 0;
        M2C_FIELD(arg0, void ***, 4) = NULL;
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8010C858(s32 arg0) {
    extern s32 lbl_80495ADC;
    void fn_800FE620(s32);
    u8 *self = (u8 *)arg0;
    if (*(s32 *)(self + 8) != 0 && *(s32 *)self != 0) {
        s32 mgr = lbl_80495ADC;
        *(s32 *)self = 0;
        if (mgr != 0) {
            u8 *obj;
            fn_800FE620(mgr);
            obj = (u8 *)lbl_80495ADC;
            if (obj != NULL) {
                u8 *vt = *(u8 **)(obj + 0x8C);
                (*(void (**)(void *, s32))(vt + 0xC))(obj + *(s16 *)(vt + 8), 3);
            }
            lbl_80495ADC = 0;
        }
    }
}

void fn_8010C8DC(void *arg0) {
    extern u8 *lbl_80495ADC;
    void fn_800FE830(void *);
    u8 *mgr;
    u8 *vt;
    u8 *obj;
    u8 *vt2;

    if (M2C_FIELD(arg0, s32 *, 0) != 0 && M2C_FIELD(arg0, s32 *, 8) != 0) {
        fn_800FE830(lbl_80495ADC);
        if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
            mgr = lbl_80495ADC;
            vt = M2C_FIELD(mgr, u8 **, 0x8C);
            M2C_FIELD(vt, void (**)(void *, s32), 0x14)(mgr + M2C_FIELD(vt, s16 *, 0x10), 0);
            obj = M2C_FIELD(arg0, u8 **, 4);
            vt2 = M2C_FIELD(obj, u8 **, 0);
            M2C_FIELD(vt2, void (**)(void *), 0x1C)(obj + M2C_FIELD(vt2, s16 *, 0x18));
        }
    }
}

void fn_8010C96C(void *arg0, s32 arg1) {
    extern u8 *lbl_80495ADC;
    extern u8 *lbl_80494DF0;
    void fn_80101340(void *, s32);
    void fn_800FF588(void *, s32, s32, s32, s32);

    if (M2C_FIELD(arg0, s32 *, 8) != 0 && M2C_FIELD(arg0, s32 *, 0) != 0 && lbl_80495ADC != NULL
        && M2C_FIELD(lbl_80494DF0, s32 *, 0x450) == 0) {
        if (arg1 == 5) {
            fn_80101340(lbl_80495ADC + 0x4C, 5);
        } else {
            fn_800FF588(lbl_80495ADC, 0x24, arg1, 0, 0);
        }
    }
}

s32 fn_8010C9E8(void) {
    extern void *lbl_80495ADC;
    if ((void *) lbl_80495ADC != NULL) {
        return M2C_FIELD(lbl_80495ADC, s32 *, 0x4C);
    }
    return 3;
}

void fn_8010CA00(void *arg0, s32 arg1) {
    extern s32 lbl_80495ADC;
    void fn_800FF588(s32, s32, s32, s32, s32);
    if (M2C_FIELD(arg0, s32 *, 0) != 0 && M2C_FIELD(arg0, s32 *, 8) != 0) {
        fn_800FF588(lbl_80495ADC, 0x22, arg1, 0, 0);
    }
}

void fn_8010CA4C(void *arg0, s32 arg1) {
    extern s32 lbl_80495ADC;
    void fn_800FF588(s32, s32, s32, s32, s32);
    if (M2C_FIELD(arg0, s32 *, 0) != 0 && M2C_FIELD(arg0, s32 *, 8) != 0) {
        fn_800FF588(lbl_80495ADC, 0x23, arg1, 0, 0);
    }
}

void fn_8010CA98(void *arg0) {
    extern s32 lbl_80495ADC;
    void fn_800FF588(s32, s32, s32, s32, s32);
    if (M2C_FIELD(arg0, s32 *, 0) != 0 && M2C_FIELD(arg0, s32 *, 8) != 0) {
        fn_800FF588(lbl_80495ADC, 0x14, 0, 0, 0);
    }
}

s32 fn_8010CAE4(void *arg0, void *arg1, s32 arg2) {
    extern s32 lbl_80495ADC;
    s32 fn_800FF538(s32, void *, s32);
    if (M2C_FIELD(arg0, s32 *, 0) == 0 || M2C_FIELD(arg0, s32 *, 8) == 0) {
        return 1;
    }
    if (arg1 != NULL && arg2 != -2 && fn_800FF538(lbl_80495ADC, arg1, arg2) != 0) {
        return 1;
    }
    return 0;
}

s32 fn_8010CB48(void *arg0, s32 arg1, s32 arg2) {
    extern u8 *lbl_8049665C;
    void *obj;
    obj = (*(void *(**)(u8 *))(*(u8 **)lbl_8049665C + 0x1B4))(lbl_8049665C + *(s16 *)(*(u8 **)lbl_8049665C + 0x1B0));
    if (obj == NULL) {
        return 0;
    }
    return fn_8010CAE4(arg0, obj, arg2);
}

void fn_8010CBA8(void *arg0, s32 arg1) {
    extern s32 lbl_80495ADC;
    void fn_800FF588(s32, s32, s32, s32, s32);
    if (M2C_FIELD(arg0, s32 *, 0) != 0 && M2C_FIELD(arg0, s32 *, 8) != 0) {
        fn_800FF588(lbl_80495ADC, 0x17, 0, arg1, 0);
    }
}

void fn_8010CBF4(void *arg0) {
    extern s32 lbl_80495ADC;
    void fn_800FF588(s32, s32, s32, s32, s32);
    void fn_8010CDD4(void *);
    if (M2C_FIELD(arg0, s32 *, 0) != 0 && M2C_FIELD(arg0, s32 *, 8) != 0) {
        if (lbl_80495ADC != 0) {
            fn_800FF588(lbl_80495ADC, 0x6B, 0, 0, 0);
        }
        fn_8010CDD4(arg0);
    }
}

void fn_8010CD4C(void *arg0) {
    extern s32 lbl_80495ADC;
    void fn_800FF588(s32, s32, s32, s32, s32);
    void fn_8010CDD4(void *);
    if (M2C_FIELD(arg0, s32 *, 0) != 0 && M2C_FIELD(arg0, s32 *, 8) != 0) {
        if (lbl_80495ADC != 0) {
            fn_800FF588(lbl_80495ADC, 0x6A, 0, 0, 0);
            fn_800FF588(lbl_80495ADC, 0x16, 0, 0, 0);
        }
        fn_8010CDD4(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void fn_8010CDD4(void *arg0) {
    extern s32 lbl_80495ADC;
    void fn_800FF588(s32, s32, s32, s32, s32);
    if (M2C_FIELD(arg0, s32 *, 0) != 0 && M2C_FIELD(arg0, s32 *, 8) != 0) {
        fn_800FF588(lbl_80495ADC, 0x21, 0, 0, 0);
    }
}

void fn_8010CE20(void *arg0) {
    extern s32 lbl_80495ADC;
    void fn_800FF588(s32, s32, s32, s32, s32);
    if (M2C_FIELD(arg0, s32 *, 0) != 0 && M2C_FIELD(arg0, s32 *, 8) != 0) {
        fn_800FF588(lbl_80495ADC, 0x21, 0, 0, 0);
    }
}

s8 fn_8010CE6C(void) {
    extern char *lbl_8041FAD0[];
    return lbl_8041FAD0[0][0x1C];
}

s8 fn_8010CE80(void) {
    extern char *lbl_8041FAD0[];
    return lbl_8041FAD0[0][0x1D];
}

void fn_8010CFA0(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8010CFD4(void *self, s32 flags) {
    extern s32 lbl_80494408;
    lbl_80494408 = 0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8010D168(void) {
    void fn_801021BC(s32);
    void fn_8010C858(s32);
    void fn_8010FD90(s32);
    void fn_80123188(s32);
    void fn_80149B1C(s32);
    extern char *lbl_8049440C;
    extern s32 lbl_80496644;
    extern s32 lbl_80496650;
    extern s32 lbl_8049665C;
    extern s32 lbl_80496688;
    extern s32 lbl_80496698;

    if (lbl_80496644 != 0) {
        fn_8010C858(lbl_80496644);
        if (lbl_80496644 != 0) {
            fn_8010C704((void *)lbl_80496644, 3);
        }
        lbl_80496644 = 0;
    }
    fn_8010FD90(lbl_80496688);
    lbl_80496688 = 0;
    fn_80123188(lbl_80496650);
    lbl_80496650 = 0;
    if (lbl_8049440C != NULL) {
        char *vt = *(char **)(lbl_8049440C + 0x10);
        (*(void (**)(void *, s32))(vt + 0xC))(lbl_8049440C + *(s16 *)(vt + 8), 3);
    }
    lbl_8049440C = NULL;
    fn_80149B1C(lbl_8049665C);
    lbl_8049665C = 0;
    if (lbl_80496698 != 0) {
        fn_801021BC(lbl_80496698);
        lbl_80496698 = 0;
    }
}

s32 fn_8010D220(void) {
    return 0;
}

void fn_8010D228(void) {

}

extern s32 lbl_80494418;
void fn_8010D22C(void (*cb)(void)) {
    lbl_80494418 = cb;
}

extern s32 lbl_8049441C;
void fn_8010D234(void (*cb)(void)) {
    lbl_8049441C = cb;
}

void fn_8010D23C(s32 arg0, s32 arg1) {
    extern u8 lbl_80434B90[];
    void fn_8010CF68(void *);
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8010CF68(lbl_80434B90);
        } else {
            fn_8010CFA0(lbl_80434B90, 2);
        }
    }
}

void fn_8010D290(void) {
    void fn_8010D23C(s32, s32);
    fn_8010D23C(1, 0xFFFF);
}

void fn_8010D2BC(void) {
    void fn_8010D23C(s32, s32);
    fn_8010D23C(0, 0xFFFF);
}

