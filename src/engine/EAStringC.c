/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

static inline s32 fn_StackPeek(s32 *stack, s32 i) {
    return ((s32 *)stack[2])[stack[0] - i - 1];
}

extern s32 lbl_80496130;

extern void *lbl_80494B48;
extern void *lbl_80494D98;

static inline void *AptNumber_New(f32 value) {
    extern u8 lbl_80418D70[];
    extern u8 lbl_804190F0[];
    extern void *fn_802BB9B4(s32);
    extern void fn_802B7124(void *, s32);
    extern void fn_802B710C(void *, s32);
    extern void fn_802B7138(void *, s32);
    extern void fn_802B7158(void *, s32);
    extern void fn_802B7178(void *, s32);
    extern void fn_802B71C8(void *);
    extern void fn_803B76C8(void *, void *);

    if (lbl_80494D98 != NULL) {
        void *obj = lbl_80494D98;
        void *pool = lbl_80494B48;
        s32 count = M2C_FIELD(pool, s32 *, 4);
        s32 cap = M2C_FIELD(pool, s32 *, 0);
        lbl_80494D98 = M2C_FIELD(obj, void **, 8);
        if (count >= cap) {
            M2C_FIELD(obj, u32 *, 0) &= ~0x40000000;
        } else {
            M2C_FIELD(pool, void ***, 8)[count] = obj;
            M2C_FIELD(pool, s32 *, 4) = count + 1;
        }
        M2C_FIELD(obj, f32 *, 8) = value;
        return obj;
    } else {
        void *obj = fn_802BB9B4(0xC);
        M2C_FIELD(obj, void **, 4) = lbl_80418D70;
        fn_802B7124(obj, 6);
        fn_802B710C(obj, 0);
        fn_802B7138(obj, 1);
        fn_802B7158(obj, 0);
        fn_802B7178(obj, 0);
        fn_802B71C8(obj);
        fn_803B76C8(lbl_80494B48, obj);
        M2C_FIELD(obj, f32 *, 8) = value;
        M2C_FIELD(obj, void **, 4) = lbl_804190F0;
        return obj;
    }
}

s32 fn_802999D4();
void fn_80290C24(s32 arg0) {
    M2C_UNK fn_802A14A0(s32);
    fn_802A14A0(arg0 + 0x24);
}

void fn_80291DEC(void *arg0, s32 arg1) {
    typedef struct { f32 m[6]; } AptMtx23;
    extern AptMtx23 lbl_804445F0;
    extern s32 lbl_8049613C;
    void fn_802AF0D0(void *, void *, void *);
    void fn_802AF000(s32);
    void fn_802AF1CC(s32, void *);
    void fn_80291DA0(void *, s32);
    void fn_802AF050(s32);
    void *p;
    AptMtx23 m;

    p = M2C_FIELD(arg0, void **, 0x4C);
    m = lbl_804445F0;
    while (p != NULL) {
        fn_802AF0D0(&m, (char *)p + 0x10, &m);
        p = M2C_FIELD(p, void **, 0x4C);
    }
    fn_802AF000(lbl_8049613C);
    fn_802AF1CC(lbl_8049613C, &m);
    fn_80291DA0(arg0, arg1);
    fn_802AF050(lbl_8049613C);
}

void fn_80291EA4(void *arg0, f32 *arg1, f32 *arg2) {
    typedef struct { f32 m[6]; } AptMtx23;
    extern AptMtx23 lbl_804445F0;
    void fn_802AF0D0(void *, void *, void *);
    AptMtx23 m;
    void *p;

    m = lbl_804445F0;
    for (p = arg0; p != NULL; p = M2C_FIELD(p, void **, 0x4C)) {
        fn_802AF0D0(&m, (char *)p + 0x10, &m);
    }
    if (arg1 != NULL) {
        *arg1 = m.m[4];
    }
    if (arg2 != NULL) {
        *arg2 = m.m[5];
    }
}

f32 fn_80291F50(f32 x) {
    extern f32 lbl_803ECA14[];
    extern f32 lbl_803ECA18[];
    extern f32 lbl_803ECA1C[];
    f32 fn_80242F38(f32, f32);
    x = fn_80242F38(x, lbl_803ECA14[0]);
    if (!(x < lbl_803ECA18[0])) {
        x -= lbl_803ECA14[0];
    }
    if (!(x >= lbl_803ECA1C[0])) {
        x += lbl_803ECA14[0];
    }
    return x;
}

f32 fn_802921A0(void *arg0, s32 arg1) {
    return *(M2C_FIELD(arg0, f32 **, 0x48) + arg1);
}

void fn_802927E8(void *self, void *arg1) {
    M2C_UNK fn_802922B8(void *, void *, s32);
    fn_802922B8(self, arg1, 0);
}

void fn_8029280C(void *self, void *arg1) {
    M2C_UNK fn_802922B8(void *, void *, s32);
    fn_802922B8(self, arg1, 1);
}

s32 fn_80292CBC(void *self) {
    extern void fn_802A0890(s32, void *);
    extern void fn_802BE53C(u16 **, char *);
    extern void fn_802A5EE0(s32, u16 **, u16 **);
    extern char lbl_803ECA4C[];
    extern char lbl_803EC8D8[];
    extern s32 lbl_804960F4;
    extern struct { void *unk0; void (*free)(void *); } *lbl_80494DA0;
    void *obj;
    u16 *name[2];
    u16 *str;
    s32 mgr;
    u16 *p;

    obj = M2C_FIELD(self, void **, 0x4C);
    if (obj != NULL) {
        fn_802A0890(M2C_FIELD(obj, s32 *, 0x50) + 0x24, self);
    } else {
        fn_802BE53C(name, lbl_803ECA4C);
        mgr = lbl_804960F4;
        fn_802BE53C(&str, lbl_803EC8D8);
        fn_802A5EE0(mgr, &str, name);
        p = str;
        if (--*p == 0) {
            lbl_80494DA0->free(p);
        }
    }
    return lbl_80496130;
}

s32 fn_80292D68(s32 arg0, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern s32 fn_802B490C(s32);
    extern void fn_8027D504(void *, s32, s32, s32, s32, s32, s32);
    s32 a;
    s32 b;
    s32 c;

    a = fn_StackPeek(lbl_804433C4, 0);
    b = fn_StackPeek(lbl_804433C4, 1);
    if (arg1 > 2) {
        c = fn_StackPeek(lbl_804433C4, 2);
    } else {
        c = 0;
    }
    fn_8027D504(lbl_804433C4, arg0, 0, arg0, a, fn_802B490C(b) + 0x4000, c);
    return lbl_80496130;
}

s32 fn_80292E08(s32 arg0) {
    extern void fn_8027DA94(s32, s32, s32, void **);
    extern void fn_802A0980(s32, void *);
    void *obj;
    u32 flags;
    s32 enabled;

    obj = NULL;
    fn_8027DA94(arg0, 0, arg0, &obj);
    if (obj != NULL) {
        flags = *(u32 *)obj;
        enabled = 0;
        if ((s32)(flags & 0x3F) > 0xB) {
            if ((s32)(flags & 0x3F) <= 0x13) {
                enabled = (flags >> 15) & 1;
            }
        }
        if (enabled != 0) {
            fn_802A0980(M2C_FIELD(M2C_FIELD(obj, void **, 0x4C), s32 *, 0x50) + 0x24, obj);
        }
    }
    return lbl_80496130;
}

s32 fn_80292E88(s32 arg0) {
    extern void fn_8027DA94(s32, s32, s32, void **);
    extern void fn_802A0980(s32, void *);
    void *obj;
    u32 flags;
    s32 enabled;

    obj = NULL;
    fn_8027DA94(arg0, 0, arg0, &obj);
    if (obj != NULL) {
        flags = *(u32 *)obj;
        enabled = 0;
        if ((s32)(flags & 0x3F) > 0xB) {
            if ((s32)(flags & 0x3F) <= 0x13) {
                enabled = (flags >> 15) & 1;
            }
        }
        if (enabled != 0) {
            fn_802A0980(M2C_FIELD(M2C_FIELD(obj, void **, 0x4C), s32 *, 0x50) + 0x24, obj);
        }
    }
    return lbl_80496130;
}

void *fn_802943D4(void *self) {
    extern u16 lbl_803FCE5C[];
    extern void **lbl_80494DA0;
    extern s32 fn_802B70DC(void *);
    extern s32 fn_802B72D4(void *);
    extern void fn_802BC17C(u16 **, s32);
    extern s32 (*lbl_804433A0[])(s32, s32);
    u16 *p[4];
    u16 *q;
    void *res;
    u32 flags;
    s32 type;
    s32 isObj;
    f32 value;

    p[0] = lbl_803FCE5C;
    lbl_803FCE5C[0]++;
    flags = M2C_FIELD(self, u32 *, 0);
    isObj = 0;
    type = flags & 0x3F;
    if (type > 11) {
        if (type <= 19) {
            isObj = (flags >> 15) & 1;
        }
    }
    if (isObj) {
        s32 ok = 0;
        if (fn_802B70DC(self) == 0x12) {
            ok = fn_802B72D4(self) == 0;
        }
        if (ok) {
            fn_802BC17C(p, M2C_FIELD(M2C_FIELD(self, void **, 0x50), s32 *, 0x34) + 4);
        }
    }
    value = 0.0f;
    {
        s32 ok = 0;
        if (fn_802B70DC(self) == 0x12) {
            ok = fn_802B72D4(self) == 0;
        }
        if (ok) {
            value = (f32)lbl_804433A0[0]((s32)p[0] + 8, 0);
        }
    }
    res = AptNumber_New(value);
    q = p[0];
    if (--*q == 0) {
        ((void (*)(void *))lbl_80494DA0[1])(q);
    }
    return res;
}

void *fn_802945F8(void *self) {
    extern u16 lbl_803FCE5C[];
    extern void **lbl_80494DA0;
    extern s32 fn_802B70DC(void *);
    extern s32 fn_802B72D4(void *);
    extern void fn_802BC17C(u16 **, s32);
    extern s32 (*lbl_804433A4[])(s32, s32);
    u16 *p[4];
    u16 *q;
    void *res;
    u32 flags;
    s32 type;
    s32 isObj;
    f32 value;

    p[0] = lbl_803FCE5C;
    lbl_803FCE5C[0]++;
    flags = M2C_FIELD(self, u32 *, 0);
    isObj = 0;
    type = flags & 0x3F;
    if (type > 11) {
        if (type <= 19) {
            isObj = (flags >> 15) & 1;
        }
    }
    if (isObj) {
        s32 ok = 0;
        if (fn_802B70DC(self) == 0x12) {
            ok = fn_802B72D4(self) == 0;
        }
        if (ok) {
            fn_802BC17C(p, M2C_FIELD(M2C_FIELD(self, void **, 0x50), s32 *, 0x34) + 4);
        }
    }
    value = 0.0f;
    {
        s32 ok = 0;
        if (fn_802B70DC(self) == 0x12) {
            ok = fn_802B72D4(self) == 0;
        }
        if (ok) {
            value = (f32)lbl_804433A4[0]((s32)p[0] + 8, 0);
        }
    }
    res = AptNumber_New(value);
    q = p[0];
    if (--*q == 0) {
        ((void (*)(void *))lbl_80494DA0[1])(q);
    }
    return res;
}

void fn_80298018(s32 arg0) {
    M2C_UNK fn_802A14A0(s32);
    fn_802A14A0(arg0 + 0x20);
}

void *fn_802982AC(void *arg0) {
    extern void fn_802A0A08(void *);
    extern u8 lbl_80418600[];
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, void **, 0x14) = lbl_80418600;
    fn_802A0A08((u8 *)arg0 + 0x20);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return arg0;
}

void fn_80298308(void) {
    extern void (*lbl_80443310[])(void);
    lbl_80443310[0]();
}

void fn_80298334(void) {
    extern void (*lbl_80443318[])(void);
    lbl_80443318[0]();
}

void fn_80298360(void) {
    extern void (*lbl_80443310[])(void);
    lbl_80443310[0]();
}

void fn_8029838C(void) {
    extern void (*lbl_80443314[])(void);
    lbl_80443314[0]();
}

void fn_80298EC4(void *arg0) {
    extern s32 fn_802B70DC(void *);
    extern s32 fn_802B72D4(void *);
    extern void fn_8028D580(s32, void *);
    s32 found;
    s32 ok;
    s32 ok2;

    found = 0;
    ok = 0;
    if (fn_802B70DC(arg0) == 0xD) {
        ok = fn_802B72D4(arg0) == 0;
    }
    if (ok) {
        found = 1;
    } else {
        ok2 = 0;
        if (fn_802B70DC(arg0) == 0x12) {
            ok2 = fn_802B72D4(arg0) == 0;
        }
        if (ok2) {
            found = 1;
        }
    }
    if (found != 0) {
        fn_8028D580(M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s32 *, 8) + 8, arg0);
    }
}

s32 fn_80298FF4(void *arg0);
s32 fn_80298F64(void *arg0, void *arg1) {
    extern s32 fn_80299018(void *, s32);
    s32 n;
    s32 i;
    s32 v;

    n = fn_80298FF4(arg0);
    if (arg0 == arg1 || n == 0) {
        return 0;
    }
    for (i = 1; i <= n; i++) {
        v = fn_80299018(arg0, i);
        if (v > fn_80299018(arg1, i)) {
            return 1;
        }
    }
    return 0;
}

s32 fn_80298FF4(void *arg0) {
    void *p;
    s32 n;

    p = M2C_FIELD(arg0, void **, 0x4C);
    n = 0;
    while (p != NULL) {
        p = M2C_FIELD(p, void **, 0x4C);
        n++;
    }
    return n;
}

s32 fn_802999D4(void *arg0) {
    extern s32 fn_802B70DC(void *);
    extern s32 fn_802B72D4(void *);
    s32 empty;
    void *p;

    empty = 0;
    if (fn_802B70DC(arg0) == 0x13) {
        empty = fn_802B72D4(arg0) == 0;
    }
    if (empty) {
        return 0;
    }
    p = M2C_FIELD(arg0, void **, 0x50);
    if (p != NULL && p != (void *)0xBAADF00D) {
        return M2C_FIELD(p, s32 *, 0xC);
    }
    return 0;
}

void fn_80299A50(void *arg0) {
    extern s32 fn_802999D4(void *);
    fn_802999D4(arg0);
}

s32 fn_80299A70(void *arg0) {
    extern s32 fn_802999D4(void *);
    return fn_802999D4(arg0) != 0;
}

void fn_80299AA0(void *arg0, s32 arg1, s32 arg2) {
    extern void fn_80295358(s32, s32);
    fn_80295358(arg1, arg2);
}

void fn_80299AC8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern void fn_8029481C(s32, s32, s32);
    fn_8029481C(arg1, arg2, arg3);
}

void fn_80299AF4(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    *arg0 = (temp_r0 & 0xF000FFFF) | ((temp_r0 & 0x0FFF0000) + 0x10000);
}

void fn_80299B6C(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x60) & 0xFFFFFFFE;
    M2C_FIELD(arg0, s32 *, 0x60) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (temp_r0 | 1);
    }
}

s32 fn_80299B8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60) & 1;
}

s32 fn_80299C74(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C7C(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C84(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C8C(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C94(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C9C(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299CA4(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299CAC(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299CB4(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299FA8(void *arg0, s32 arg1) {
    extern s32 fn_802B70DC(void *);
    extern s32 fn_802B72D4(void *);
    s32 found;
    s32 ok;
    s32 ok2;

    found = 0;
    ok = 0;
    if (fn_802B70DC(arg0) == 0xD) {
        if (arg1 != 0 || fn_802B72D4(arg0) == 0) {
            ok = 1;
        }
    }
    if (ok) {
        found = 1;
    } else {
        ok2 = 0;
        if (fn_802B70DC(arg0) == 0x12) {
            if (arg1 != 0 || fn_802B72D4(arg0) == 0) {
                ok2 = 1;
            }
        }
        if (ok2) {
            found = 1;
        }
    }
    return found;
}

s32 fn_8029A04C(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_8029A094(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void *);

    fn_802A1EF0((void *)arg0);
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_8029A0DC(void) {
    return 0;
}

void fn_8029A0E4(void) {

}

s32 fn_8029A0E8(void) {
    return 1;
}

s32 fn_8029A908(void *arg0, s32 year) {
    s32 ret = 0;

    if ((year & 3) == 0) {
        if (year % 100 != 0) {
            return 1;
        }
        ret = !(year % 400);
    }
    return ret;
}

s32 fn_8029A95C(void *arg0, s32 year) {
    s32 fn_8029A908(void *, s32);

    if (fn_8029A908(arg0, year) == 0) {
        return 365;
    }
    return 366;
}

s32 fn_8029A98C(void *arg0, s32 month, s32 year) {
    s32 fn_8029A908(void *, s32);
    s32 days = 31;

    switch (month) {
    case 0:
    case 2:
    case 4:
    case 6:
    case 7:
    case 9:
    case 11:
        days = 31;
        break;
    case 1:
        days = fn_8029A908(arg0, year) ? 29 : 28;
        break;
    case 3:
    case 5:
    case 8:
    case 10:
        days = 30;
        break;
    }
    return days;
}

void *fn_8029B8C0(void) {
    extern void *lbl_80494D9C;
    extern u8 lbl_80418D70[];
    extern u8 lbl_80419170[];
    extern void *fn_802BBD14(s32);
    extern void fn_802B7124(void *, s32);
    extern void fn_802B710C(void *, s32);
    extern void fn_802B7138(void *, s32);
    extern void fn_802B7158(void *, s32);
    extern void fn_802B7178(void *, s32);
    extern void fn_802B71C8(void *);
    extern void fn_803B76C8(void *, void *);

    if (lbl_80494D9C != NULL) {
        void *obj = lbl_80494D9C;
        void *pool = lbl_80494B48;
        s32 count = M2C_FIELD(pool, s32 *, 4);
        s32 cap = M2C_FIELD(pool, s32 *, 0);
        lbl_80494D9C = M2C_FIELD(obj, void **, 8);
        if (count >= cap) {
            M2C_FIELD(obj, u32 *, 0) &= ~0x40000000;
        } else {
            M2C_FIELD(pool, void ***, 8)[count] = obj;
            M2C_FIELD(pool, s32 *, 4) = count + 1;
        }
        M2C_FIELD(obj, void **, 8) = NULL;
        return obj;
    } else {
        void *obj = fn_802BBD14(0xC);
        M2C_FIELD(obj, void **, 4) = lbl_80418D70;
        fn_802B7124(obj, 7);
        fn_802B710C(obj, 0);
        fn_802B7138(obj, 1);
        fn_802B7158(obj, 0);
        fn_802B7178(obj, 0);
        fn_802B71C8(obj);
        fn_803B76C8(lbl_80494B48, obj);
        M2C_FIELD(obj, void **, 8) = NULL;
        M2C_FIELD(obj, void **, 4) = lbl_80419170;
        return obj;
    }
}

void *fn_8029CCAC(void) {
    extern void *lbl_80494D9C;
    extern u8 lbl_80418D70[];
    extern u8 lbl_80419170[];
    extern void *fn_802BBD14(s32);
    extern void fn_802B7124(void *, s32);
    extern void fn_802B710C(void *, s32);
    extern void fn_802B7138(void *, s32);
    extern void fn_802B7158(void *, s32);
    extern void fn_802B7178(void *, s32);
    extern void fn_802B71C8(void *);
    extern void fn_803B76C8(void *, void *);

    if (lbl_80494D9C != NULL) {
        void *obj = lbl_80494D9C;
        void *pool = lbl_80494B48;
        s32 count = M2C_FIELD(pool, s32 *, 4);
        s32 cap = M2C_FIELD(pool, s32 *, 0);
        lbl_80494D9C = M2C_FIELD(obj, void **, 8);
        if (count >= cap) {
            M2C_FIELD(obj, u32 *, 0) &= ~0x40000000;
        } else {
            M2C_FIELD(pool, void ***, 8)[count] = obj;
            M2C_FIELD(pool, s32 *, 4) = count + 1;
        }
        M2C_FIELD(obj, void **, 8) = NULL;
        return obj;
    } else {
        void *obj = fn_802BBD14(0xC);
        M2C_FIELD(obj, void **, 4) = lbl_80418D70;
        fn_802B7124(obj, 7);
        fn_802B710C(obj, 0);
        fn_802B7138(obj, 1);
        fn_802B7158(obj, 0);
        fn_802B7178(obj, 0);
        fn_802B71C8(obj);
        fn_803B76C8(lbl_80494B48, obj);
        M2C_FIELD(obj, void **, 8) = NULL;
        M2C_FIELD(obj, void **, 4) = lbl_80419170;
        return obj;
    }
}

extern s32 lbl_80496130;
s32 fn_8029D95C(void) {
    return lbl_80496130;
}

s32 fn_8029F43C(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_8029F484(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void *);

    fn_802A1EF0((void *)arg0);
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_8029F4CC(void) {
    return 0;
}

void fn_8029F4D4(void) {

}

void fn_8029F4D8(void *arg0, s32 arg1) {
    extern char lbl_804189F0[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_804189F0;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x68);
    }
}

s32 fn_8029F660(void **arg0) {
    s32 var_r9;
    void *var_r3;

    var_r3 = *arg0;
    var_r9 = 0;
    if (var_r3 != NULL) {
        do {
            var_r3 = M2C_FIELD(var_r3, void **, 0x58);
            var_r9 += 1;
        } while (var_r3 != NULL);
    }
    return var_r9;
}

void *fn_8029F688(void **arg0, s32 arg1) {
    void *p = *arg0;
    while (p != NULL) {
        if (arg1 == 0) {
            return p;
        }
        p = M2C_FIELD(p, void **, 0x58);
        arg1--;
    }
    return NULL;
}

void *fn_8029F6B4(void *arg0, void *arg1, void *arg2) {
    u8 *vt;
    void *next = M2C_FIELD(arg1, void **, 0x58);
    vt = M2C_FIELD(arg2, u8 **, 4);
    M2C_FIELD(arg2, void **, 0x54) = arg1;
    M2C_FIELD(arg2, void **, 0x58) = next;
    (*(void (**)(void *))(vt + 0xC))((u8 *)arg2 + *(s16 *)(vt + 8));
    if (M2C_FIELD(arg2, void **, 0x58) != NULL) {
        M2C_FIELD(M2C_FIELD(arg2, void **, 0x58), void **, 0x54) = arg2;
    }
    M2C_FIELD(M2C_FIELD(arg2, void **, 0x54), void **, 0x58) = arg2;
    return arg2;
}

void fn_8029F834(s32 arg0, void *arg1, void *arg2) {
    extern void fn_8029F550(s32, void *, s32, s32 *, void **);
    s32 sp8;
    void *spC;
    fn_8029F550(arg0, arg1, 0, &sp8, &spC);
    M2C_FIELD(fn_8029F6B4((void *)arg0, (void *)sp8, arg2), void **, 8) = arg1;
}

s32 fn_8029F888(s32 arg0, s32 arg1) {
    M2C_UNK fn_8029F550(s32, s32, s32, s32 *, s32 *);
    s32 fn_8029F8BC(s32);
    s32 sp8;
    s32 spC;

    fn_8029F550(arg0, arg1, 0, &sp8, &spC);
    return fn_8029F8BC(spC);
}

void *fn_8029F8BC(void *arg0) {
    void *temp_r11;
    void *temp_r11_2;

    temp_r11 = M2C_FIELD(arg0, void **, 0x54);
    if (temp_r11 != NULL) {
        M2C_FIELD(temp_r11, void **, 0x58) = (void *) M2C_FIELD(arg0, void **, 0x58);
    }
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x58);
    if (temp_r11_2 != NULL) {
        M2C_FIELD(temp_r11_2, void **, 0x54) = (void *) M2C_FIELD(arg0, void **, 0x54);
    }
    M2C_FIELD(arg0, void **, 0x54) = NULL;
    M2C_FIELD(arg0, void **, 0x58) = NULL;
    return arg0;
}

void fn_802A0890(s32 arg0, void *arg1) {
    extern u8 lbl_803FCE5C[];
    extern void *fn_802AE360(void *, void *);
    extern void fn_802AE1D0(void *, void *);
    extern void fn_80299280(void *);
    if (arg1 != NULL && !((M2C_FIELD(arg1, s32 *, 0) ^ 0x8000) & 0x8000)) {
        void *obj = M2C_FIELD(arg1, void **, 0x4C);
        if (obj != NULL) {
            char *vt = M2C_FIELD(obj, char **, 4);
            void *key = (char *)arg1 + 0xC;
            void *r = M2C_FIELD(vt, void *(**)(void *), 0x3C)((char *)obj + M2C_FIELD(vt, s16 *, 0x38));
            if (M2C_FIELD(arg1, u8 **, 0xC) != lbl_803FCE5C && r != NULL) {
                if (fn_802AE360(r, key) == arg1) {
                    fn_802AE1D0(r, key);
                }
            }
        }
        fn_80299280(arg1);
    }
}

void fn_802A0938(s32 arg0, void *arg1) {
    extern void fn_8029F550(s32, void *, s32, s32 *, void **);
    s32 sp8;
    void *spC;
    fn_8029F550(M2C_FIELD(arg0, s32 *, 0), arg1, 0, &sp8, &spC);
    fn_802A0890(arg0, spC);
}

void fn_802A0980(s32 arg0, void *arg1) {
    void *node = fn_8029F550_Find(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg1, void **, 8));
    if (M2C_FIELD(node, s32 *, 8) > 0x3FFF) {
        fn_802A0890(arg0, node);
    }
}

void fn_802A09E4(s32 arg0, void *arg1) {
    fn_802A0938(arg0, M2C_FIELD(arg1, void **, 0));
}

void fn_802A0B40(void ***arg0, s32 arg1) {
    M2C_UNK fn_802A1420();
    M2C_UNK fn_803B79BC(void **, M2C_UNK);
    M2C_UNK fn_802D20E8(void *);
    void **temp_r31;
    void *temp_r11;
    void *temp_r9;

    fn_802A1420();
    temp_r31 = *arg0;
    if (temp_r31 != NULL) {
        M2C_FIELD(*temp_r31, s32 *, 0x50) = 0;
        temp_r11 = *temp_r31;
        temp_r9 = M2C_FIELD(temp_r11, void **, 4);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x18));
        fn_803B79BC(temp_r31, 4);
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_802A0BC0(void *arg0, void *arg1, s32 arg2) {
    M2C_UNK fn_802AEDE4(void *);
    M2C_UNK fn_802AEED0(void *, void *);
    M2C_UNK fn_802AF000(void *);
    s32 fn_802B70DC(void *);
    s32 fn_802B72D4(void *);
    M2C_UNK fn_80291164(void *, s32);
    M2C_UNK fn_802AF1CC(void *, void *);
    M2C_UNK fn_80291534(void *, void *, s32, s32);
    M2C_UNK fn_802AF050(void *);
    M2C_UNK fn_802AEE5C(void *);
    s32 var_r29;

    fn_802AEDE4(arg0);
    var_r29 = 0;
    fn_802AEED0(arg0, (char *)arg1 + 0x28);
    fn_802AF000(arg0);
    if (fn_802B70DC(arg1) == 0xF) {
        var_r29 = fn_802B72D4(arg1) == 0;
    }
    if (var_r29 != 0) {
        fn_80291164(arg1, M2C_FIELD(arg1, s32 *, 0x4C));
    }
    fn_802AF1CC(arg0, (char *)arg1 + 0x10);
    fn_80291534(arg1, arg0, 0, arg2);
    fn_802AF050(arg0);
    fn_802AEE5C(arg0);
}

void fn_802A0FD4(void ***arg0) {
    M2C_UNK fn_8029142C(void *);
    void *var_r31;
    s32 sp[0x24];

    var_r31 = M2C_FIELD(**arg0, void **, 0x58);
    sp[0x20] = 0;
    if (var_r31 != NULL) {
        do {
            fn_8029142C(var_r31);
            var_r31 = M2C_FIELD(var_r31, void **, 0x58);
        } while (var_r31 != NULL);
    }
}

void fn_802A14A0(void ***arg0) {
    M2C_UNK fn_802A1420();
    M2C_UNK fn_803B79BC(void **, M2C_UNK);
    void **temp_r31;
    void *temp_r11;
    void *temp_r9;

    fn_802A1420();
    temp_r31 = *arg0;
    if (temp_r31 != NULL) {
        M2C_FIELD(*temp_r31, s32 *, 0x50) = 0;
        temp_r11 = *temp_r31;
        temp_r9 = M2C_FIELD(temp_r11, void **, 4);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x18));
        fn_803B79BC(temp_r31, 4);
    }
    *arg0 = NULL;
}

s32 fn_802A1514(s32 *self) {
    return *self;
}

void fn_802A151C(s32 *self, s32 value) {
    *self = value;
}

void fn_802A1E68(void) {
    extern s32 lbl_80494C90;
    extern s32 lbl_80493530[];
    s32 *p;
    s32 i;

    lbl_80494C90 = 0;
    p = lbl_80493530;
    for (i = 0x10; i != 0; i--) {
        p[2] = 0;
        p[0] = 0;
        p[1] = 0;
        p += 3;
    }
}

void fn_802A1E98(s32 arg0) {
    extern s32 lbl_80494C8C;
    s32 *node;

    node = (s32 *)fn_802A2014(arg0);
    if (lbl_80494C8C != 0) {
        *(s32 *)fn_802A2014(lbl_80494C8C) = arg0;
    }
    node[0] = 0;
    node[1] = lbl_80494C8C;
    lbl_80494C8C = arg0;
}

s32 fn_802A1F64(void *arg0) {
    void *vt;

    if (arg0 == NULL) {
        return 0;
    }
    vt = M2C_FIELD(arg0, void **, 4);
    return M2C_FIELD(vt, s32 (**)(void *), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30));
}

void *fn_802A1FA8(void *arg0) {
    if (fn_802A1F64(arg0) != 0) {
        return arg0;
    }
    return NULL;
}

void fn_802A1FE4(s32 arg0, s32 arg1, s32 arg2) {
    extern s32 lbl_80493530[][3];
    extern s32 lbl_80494C90;
    s32 n = lbl_80494C90;
    lbl_80494C90 = n + 1;
    lbl_80493530[n][0] = arg0;
    lbl_80493530[n][1] = arg1;
    lbl_80493530[n][2] = arg2;
}

s32 fn_802A2014(s32 arg0) {
    return arg0 - 8;
}

s32 fn_802A201C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, -4);
}

s32 fn_802A2024(void *arg0) {
    return M2C_FIELD(arg0, s32 *, -8);
}

void fn_802A204C(void);
void fn_802A202C(void) {
    fn_802A204C();
}

void fn_802A21B0(void *arg0) {
    s32 i;
    s32 count;
    u8 *vt;
    void *child;

    i = 0;
    M2C_FIELD(arg0, s32 *, 0) |= 0x4000;
    vt = M2C_FIELD(arg0, u8 **, 4);
    count = (*(s32 (**)(void *))(vt + 0x24))((u8 *)arg0 + *(s16 *)(vt + 0x20));
    for (; i < count; i++) {
        vt = M2C_FIELD(arg0, u8 **, 4);
        child = (*(void *(**)(void *, s32))(vt + 0x2C))((u8 *)arg0 + *(s16 *)(vt + 0x28), i);
        if (child != NULL && !(M2C_FIELD(child, s32 *, 0) & 0x4000)) {
            fn_802A21B0(child);
        }
    }
}

void fn_802A224C(void **arg0) {
    s32 i;
    s32 count;
    void *obj;
    void *child;

    i = 0;
    obj = arg0[0];
    count = ((s32 (*)(void *))arg0[1])(obj);
    for (; i < count; i++) {
        child = ((void *(*)(void *, s32))arg0[2])(obj, i);
        if (child != NULL && !(M2C_FIELD(child, s32 *, 0) & 0x4000)) {
            fn_802A21B0(child);
        }
    }
}

s32 fn_802A2784(s32 arg0) {
    s32 var_r0;

    var_r0 = 0;
    if (arg0 & 8) {
        var_r0 = 0x800;
    }
    if (arg0 & 4) {
        var_r0 |= 0x400;
    }
    if (arg0 & 0x40) {
        var_r0 |= 0x1000;
    }
    if (arg0 & 1) {
        var_r0 |= 0x2000;
    }
    if (arg0 & 2) {
        var_r0 |= 0x4000;
    }
    if (arg0 & 0x20) {
        var_r0 |= 0x8000;
    }
    if (arg0 & 0x10) {
        var_r0 |= 0x10000;
    }
    return var_r0;
}

void fn_802A2AE4(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(arg0, f32 *, 4)) + M2C_FIELD(arg1, f32 *, 0x10));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 0xC) * M2C_FIELD(arg0, f32 *, 4)) + M2C_FIELD(arg1, f32 *, 0x14));
}

s32 fn_802A4354(void) {
    return 1;
}

void fn_802A463C(void *self, s32 **arg1) {
    void fn_802A6754(s32 **);
    extern s32 fn_802A661C(s32 *);
    extern s32 fn_802A6630(s32 *);
    extern void fn_802A6644(void *);
    s32 *p;
    s32 **pp = &p;

    *pp = *arg1;
    if (*pp != NULL) {
        fn_802A661C(*pp);
    }
    fn_802A6754(pp);
    if (*arg1 != NULL && fn_802A6630(*arg1) == 0) {
        fn_802A6644(*arg1);
    }
}

void **fn_802A46A4(void **ret) {
    void fn_802A43E0(s32 **);
    extern s32 fn_802A661C(s32 *);
    extern s32 fn_802A6630(s32 *);
    extern void fn_802A6644(void *);
    s32 *p;
    s32 valid;

    fn_802A43E0(&p);
    valid = p != NULL;
    if (valid && p[2] == 4) {
        *ret = p;
        if (*ret != NULL) {
            fn_802A661C(*ret);
        }
        if (p != NULL && fn_802A6630(p) == 0) {
            fn_802A6644(p);
        }
    } else {
        *ret = NULL;
        if (p != NULL && fn_802A6630(p) == 0) {
            fn_802A6644(p);
        }
    }
    return ret;
}

s32 fn_802A661C(s32 *arg0) {
    return ++*arg0;
}

s32 fn_802A6630(s32 *arg0) {
    return --*arg0;
}

void fn_802A6644(void *arg0) {
    void fn_802A452C(s32, void *);
    void fn_8028B198(s32, s32);
    void fn_803B6F94(void *, s32);
    void fn_803B7DCC(void *, s32);
    extern s32 lbl_804960F0;
    extern void (*lbl_80443334[])(s32);

    if (arg0 != NULL) {
        fn_802A452C(lbl_804960F0, arg0);
        if ((u32)(M2C_FIELD(arg0, s32 *, 8) - 3) <= 1U) {
            fn_8028B198(M2C_FIELD(arg0, s32 *, 0x10) + 8, M2C_FIELD(arg0, s32 *, 0xC));
            lbl_80443334[0](M2C_FIELD(arg0, s32 *, 0x14));
        }
        fn_803B6F94((u8 *)arg0 + 4, 2);
        fn_803B7DCC(arg0, 0x18);
    }
}

s32 fn_802A66C8(s32 *arg0) {
    return ++*arg0;
}

s32 fn_802A66DC(s32 *arg0) {
    return --*arg0;
}

void fn_802A66F0(void *arg0) {
    extern void (*lbl_80443318[])(void *, s32);

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 **, 4) != NULL && fn_802A6630(M2C_FIELD(arg0, s32 **, 4)) == 0) {
            fn_802A6644(M2C_FIELD(arg0, s32 **, 4));
        }
        lbl_80443318[0](arg0, 0x10);
    }
}

void fn_802A6DE4(void) {
    void fn_802A6CE0();
    extern s32 lbl_804966FC;

    lbl_804966FC += 0x60;
    fn_802A6CE0();
}

void fn_802A6E10(s32 arg0) {
    M2C_UNK fn_802A6CE0();
    s32 fn_802D2058(M2C_UNK);
    extern s32 lbl_804966FC;
    extern s32 lbl_80496700;
    extern s32 lbl_80496704;
    s32 temp_r3;

    temp_r3 = fn_802D2058(0x4000);
    lbl_80496700 = temp_r3;
    lbl_80496704 = temp_r3 + arg0;
    lbl_804966FC = temp_r3;
    fn_802A6CE0();
}

void fn_802A6E54(void) {
    void fn_802D211C(s32);
    extern s32 lbl_80496700;

    if (lbl_80496700 != 0) {
        fn_802D211C(lbl_80496700);
    }
    lbl_80496700 = 0;
}

static inline void *fn_802A8240_new(f32 value) {
    extern u8 lbl_80418D70[];
    extern u8 lbl_804190F0[];
    extern void *fn_802BB9B4(s32);
    extern void fn_802B7124(void *, s32);
    extern void fn_802B710C(void *, s32);
    extern void fn_802B7138(void *, s32);
    extern void fn_802B7158(void *, s32);
    extern void fn_802B7178(void *, s32);
    extern void fn_802B71C8(void *);
    extern void fn_803B76C8(void *, void *);

    if (lbl_80494D98 != NULL) {
        void *obj = lbl_80494D98;
        void *pool = lbl_80494B48;
        s32 count = M2C_FIELD(pool, s32 *, 4);
        s32 cap = M2C_FIELD(pool, s32 *, 0);
        lbl_80494D98 = M2C_FIELD(obj, void **, 8);
        if (count >= cap) {
            M2C_FIELD(obj, u32 *, 0) &= ~0x40000000;
        } else {
            M2C_FIELD(pool, void ***, 8)[count] = obj;
            M2C_FIELD(pool, s32 *, 4) = count + 1;
        }
        M2C_FIELD(obj, f32 *, 8) = value;
        return obj;
    } else {
        void *obj = fn_802BB9B4(0xC);
        M2C_FIELD(obj, void **, 4) = lbl_80418D70;
        fn_802B7124(obj, 6);
        fn_802B710C(obj, 0);
        fn_802B7138(obj, 1);
        fn_802B7158(obj, 0);
        fn_802B7178(obj, 0);
        fn_802B71C8(obj);
        fn_803B76C8(lbl_80494B48, obj);
        M2C_FIELD(obj, f32 *, 8) = value;
        M2C_FIELD(obj, void **, 4) = lbl_804190F0;
        return obj;
    }
}

static inline void *fn_802A8240_newInt(s32 value) {
    return fn_802A8240_new((f32)value);
}

void *fn_802A8240(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern f32 fn_80243694(f32);
    f32 fn_802B4998(void *);
    struct { u8 c[6]; } tmp;

    if (arg1 < 1) {
        return (void *)lbl_80496130;
    }
    return fn_802A8240_new(fn_80243694(fn_802B4998((void *)fn_StackPeek(lbl_804433C4, 0))));
}

void *fn_802A8370(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern f32 fn_802434CC(f32);
    f32 fn_802B4998(void *);
    struct { u8 c[6]; } tmp;

    if (arg1 < 1) {
        return (void *)lbl_80496130;
    }
    return fn_802A8240_new(fn_802434CC(fn_802B4998((void *)fn_StackPeek(lbl_804433C4, 0))));
}

void *fn_802A84A0(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern f32 fn_80242D18(f32, f32);
    f32 fn_802B4998(void *);
    struct { u8 c[6]; } tmp;
    void *x;
    void *y;

    if (arg1 < 2) {
        return (void *)lbl_80496130;
    }
    x = (void *)fn_StackPeek(lbl_804433C4, 0);
    y = (void *)fn_StackPeek(lbl_804433C4, 1);
    return fn_802A8240_new(fn_80242D18(fn_802B4998(x), fn_802B4998(y)));
}

void *fn_802A8B50(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern f32 fn_80242ACC(f32);
    f32 fn_802B4998(void *);
    struct { u8 c[6]; } tmp;

    if (arg1 < 1) {
        return (void *)lbl_80496130;
    }
    return fn_802A8240_new(fn_80242ACC(fn_802B4998((void *)fn_StackPeek(lbl_804433C4, 0))));
}

void *fn_802A8C80(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern f32 fn_80377164(f32);
    f32 fn_802B4998(void *);
    struct { u8 c[6]; } tmp;

    if (arg1 < 1) {
        return (void *)lbl_80496130;
    }
    return fn_802A8240_new(fn_80377164(fn_802B4998((void *)fn_StackPeek(lbl_804433C4, 0))));
}

void *fn_802A8DB0(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern f32 fn_802431F8(f32);
    f32 fn_802B4998(void *);
    struct { u8 c[6]; } tmp;

    if (arg1 < 1) {
        return (void *)lbl_80496130;
    }
    return fn_802A8240_new(fn_802431F8(fn_802B4998((void *)fn_StackPeek(lbl_804433C4, 0))));
}

void *fn_802A8EE0(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern f32 fn_80243408(f32);
    f32 fn_802B4998(void *);
    struct { u8 c[6]; } tmp;

    if (arg1 < 1) {
        return (void *)lbl_80496130;
    }
    return fn_802A8240_new(fn_80243408(fn_802B4998((void *)fn_StackPeek(lbl_804433C4, 0))));
}

void *fn_802A9010(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern f32 fn_80377390(f32);
    f32 fn_802B4998(void *);
    struct { u8 c[6]; } tmp;

    if (arg1 < 1) {
        return (void *)lbl_80496130;
    }
    return fn_802A8240_new(fn_80377390(fn_802B4998((void *)fn_StackPeek(lbl_804433C4, 0))));
}

void *fn_802A9140(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern f32 fn_802435CC(f32);
    f32 fn_802B4998(void *);
    struct { u8 c[6]; } tmp;

    if (arg1 < 1) {
        return (void *)lbl_80496130;
    }
    return fn_802A8240_new(fn_802435CC(fn_802B4998((void *)fn_StackPeek(lbl_804433C4, 0))));
}

void *fn_802A9270(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern f32 fn_803775BC(f32);
    f32 fn_802B4998(void *);
    struct { u8 c[6]; } tmp;

    if (arg1 < 1) {
        return (void *)lbl_80496130;
    }
    return fn_802A8240_new(fn_803775BC(fn_802B4998((void *)fn_StackPeek(lbl_804433C4, 0))));
}

void *fn_802A93A0(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern f32 fn_8037783C(f32, f32);
    f32 fn_802B4998(void *);
    struct { u8 c[6]; } tmp;
    void *x;
    void *y;

    if (arg1 < 2) {
        return (void *)lbl_80496130;
    }
    x = (void *)fn_StackPeek(lbl_804433C4, 0);
    y = (void *)fn_StackPeek(lbl_804433C4, 1);
    return fn_802A8240_new(fn_8037783C(fn_802B4998(x), fn_802B4998(y)));
}

void *fn_802A9620(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern f32 fn_80243100(f32);
    f32 fn_802B4998(void *);
    struct { u8 c[6]; } tmp;

    if (arg1 < 1) {
        return (void *)lbl_80496130;
    }
    return fn_802A8240_new(fn_80243100(fn_802B4998((void *)fn_StackPeek(lbl_804433C4, 0))));
}

void *fn_802A9750(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern f32 fn_80243770(f32);
    f32 fn_802B4998(void *);
    struct { u8 c[6]; } tmp;

    if (arg1 < 1) {
        return (void *)lbl_80496130;
    }
    return fn_802A8240_new(fn_80243770(fn_802B4998((void *)fn_StackPeek(lbl_804433C4, 0))));
}

void fn_802A9880(void) {
    extern u8 *lbl_80494CDC;
    extern u8 *lbl_80494CE0;
    extern u8 *lbl_80494CE4;
    extern u8 *lbl_80494CE8;
    extern u8 *lbl_80494CEC;
    extern u8 *lbl_80494CF0;
    if (lbl_80494CDC != NULL) {
        u8 *vt = *(u8 **)(lbl_80494CDC + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494CDC + *(s16 *)(vt + 0x10));
        lbl_80494CDC = NULL;
    }
    if (lbl_80494CE4 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494CE4 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494CE4 + *(s16 *)(vt + 0x10));
        lbl_80494CE4 = NULL;
    }
    if (lbl_80494CE8 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494CE8 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494CE8 + *(s16 *)(vt + 0x10));
        lbl_80494CE8 = NULL;
    }
    if (lbl_80494CEC != NULL) {
        u8 *vt = *(u8 **)(lbl_80494CEC + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494CEC + *(s16 *)(vt + 0x10));
        lbl_80494CEC = NULL;
    }
    if (lbl_80494CF0 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494CF0 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494CF0 + *(s16 *)(vt + 0x10));
        lbl_80494CF0 = NULL;
    }
    if (lbl_80494CE0 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494CE0 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494CE0 + *(s16 *)(vt + 0x10));
        lbl_80494CE0 = NULL;
    }
}

void fn_802AADB4(void) {
    extern char *lbl_80494CF4;
    extern char *lbl_80494CF8;
    char *a;
    char *vt;

    a = lbl_80494CF4;
    if (a != 0) {
        vt = M2C_FIELD(a, char **, 4);
        (*(void (**)(void *))(vt + 0x14))(a + *(s16 *)(vt + 0x10));
        lbl_80494CF4 = 0;
    }
    a = lbl_80494CF8;
    if (a != 0) {
        vt = M2C_FIELD(a, char **, 4);
        (*(void (**)(void *))(vt + 0x14))(a + *(s16 *)(vt + 0x10));
        lbl_80494CF8 = 0;
    }
}

void *fn_802AB32C(void *arg0, void *arg1, void **arg2) {
    extern char lbl_803ED934[];
    extern void *lbl_80496148;
    extern s32 fn_802486DC(void *, char *);

    if (fn_802486DC((u8 *)*arg2 + 8, lbl_803ED934) == 0) {
        return lbl_80496148;
    }
    return 0;
}

void fn_802AB97C(void *arg0, s32 arg1) {
    extern char lbl_804189F0[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_804189F0;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x28);
    }
}

void fn_802AB9F4(void) {
    extern u8 *lbl_80494CFC;
    extern u8 *lbl_80494D10;
    extern u8 *lbl_80494D00;
    extern u8 *lbl_80494D04;
    extern u8 *lbl_80494D08;
    extern u8 *lbl_80494D0C;
    if (lbl_80494CFC != NULL) {
        u8 *vt = *(u8 **)(lbl_80494CFC + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494CFC + *(s16 *)(vt + 0x10));
        lbl_80494CFC = NULL;
    }
    if (lbl_80494D00 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D00 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D00 + *(s16 *)(vt + 0x10));
        lbl_80494D00 = NULL;
    }
    if (lbl_80494D04 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D04 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D04 + *(s16 *)(vt + 0x10));
        lbl_80494D04 = NULL;
    }
    if (lbl_80494D08 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D08 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D08 + *(s16 *)(vt + 0x10));
        lbl_80494D08 = NULL;
    }
    if (lbl_80494D0C != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D0C + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D0C + *(s16 *)(vt + 0x10));
        lbl_80494D0C = NULL;
    }
    if (lbl_80494D10 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D10 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D10 + *(s16 *)(vt + 0x10));
        lbl_80494D10 = NULL;
    }
}

void *fn_802AC720(void) {
    extern s32 (*lbl_804433A0[])(s32, s32);
    struct { u8 c[6]; } tmp;

    return fn_802A8240_new((f32)lbl_804433A0[0](0, 3));
}

void *fn_802AC858(void) {
    extern s32 (*lbl_804433A4[])(s32, s32);
    struct { u8 c[6]; } tmp;

    return fn_802A8240_new((f32)lbl_804433A4[0](0, 3));
}

void *fn_802ACAA4(void *arg0, s32 arg1, s32 arg2) {
    extern char lbl_804189F0[];
    extern void fn_802B6FA8(void *, s32);
    extern void fn_802ADDD8(void *, s32);
    fn_802B6FA8(arg0, arg1);
    M2C_FIELD(arg0, void **, 4) = lbl_804189F0;
    fn_802ADDD8((u8 *)arg0 + 8, arg2);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return arg0;
}

void fn_802ACAF8(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18) & 0xFFFFFFFE;
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_r0 | 1);
    }
}

s32 fn_802ACB18(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) & 1;
}

void fn_802ACB24(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18) & 0xFFFFFFFD;
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_r0 | 2);
    }
}

s32 fn_802ACB44(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) & 2;
}

void fn_802AEA9C();
void fn_802ACB50(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802AEABC();
void fn_802ACB74(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

void fn_802ADE44();
void fn_802ACB98(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

s32 fn_802ACBBC(void) {
    return 1;
}

void fn_802ADFFC();
void fn_802ACBC4(char *self) {
    extern void fn_802ADFFC(void *);
    fn_802ADFFC(self + 8);
}

void fn_802AE360();
void fn_802ACBE8(char *self) {
    extern void fn_802AE360(void *);
    fn_802AE360(self + 8);
}

void fn_803B72E0();
void fn_802ACC0C(char *self) {
    extern void fn_803B72E0(void *);
    fn_803B72E0(self + 8);
}

void fn_803B739C();
void fn_802ACC30(char *self) {
    extern void fn_803B739C(void *);
    fn_803B739C(self + 8);
}

u8 *fn_802ACC54(u8 *self) {
    return self + 8;
}

u8 *fn_802ACC5C(u8 *self) {
    return self + 8;
}

s32 fn_802ACC64(void) {
    return 1;
}

s32 fn_802ACC6C(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802ACCB4(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void *);

    fn_802A1EF0((void *)arg0);
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802ACCFC(void) {
    return 0;
}

void fn_802ACD04(void) {

}

void fn_802ACD08(void *arg0, s32 arg1) {
    extern char lbl_804189F0[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_804189F0;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x24);
    }
}

void *fn_802ACD80(void *arg0) {
    extern char lbl_80418970[];
    extern void fn_802B6FA8(void *, s32);
    extern void fn_802ADDD8(void *, s32);
    extern void fn_802B7178(s32 *, s32);
    extern void fn_802B710C(s32 *, s32);
    fn_802B6FA8(arg0, 0x17);
    M2C_FIELD(arg0, void **, 4) = lbl_80418970;
    fn_802ADDD8(&M2C_FIELD(arg0, s32 *, 8), 8);
    fn_802B7178(arg0, 1);
    fn_802B710C(arg0, 0xFFF);
    return arg0;
}

void fn_802ACDE4(void) {

}

void fn_802ACDE8(void) {

}

void fn_802ACDEC(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_802ACE10(u8 *self) {
    return self + 8;
}

u8 *fn_802ACE18(u8 *self) {
    return self + 8;
}

s32 fn_802ACE20(void) {
    return 1;
}

s32 fn_802ACE28(void) {
    return 1;
}

void fn_802ACE30(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802ACE54(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

s32 fn_802ACE78(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802ACEC0(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void *);

    fn_802A1EF0((void *)arg0);
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802ACF08(void) {
    return 0;
}

void fn_802ACF10(void) {

}

void fn_802ACF14(void *arg0, s32 arg1) {
    extern char lbl_80418970[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_80418970;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x20);
    }
}

void *fn_802ACF8C(void *arg0) {
    extern char lbl_804188F0[];
    extern void fn_802B6FA8(void *, s32);
    extern void fn_802ADDD8(s32 *, s32);
    extern void fn_802B7178(s32 *, s32);
    extern void fn_802B710C(s32 *, s32);
    fn_802B6FA8(arg0, 0x18);
    ((void **)arg0)[1] = lbl_804188F0;
    fn_802ADDD8((s32 *)arg0 + 2, 8);
    fn_802B7178(arg0, 1);
    fn_802B710C(arg0, 0xFFF);
    return arg0;
}

void fn_802ACFF0(void) {

}

void fn_802ACFF4(void) {

}

void fn_802ACFF8(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_802AD01C(u8 *self) {
    return self + 8;
}

u8 *fn_802AD024(u8 *self) {
    return self + 8;
}

s32 fn_802AD02C(void) {
    return 1;
}

s32 fn_802AD034(void) {
    return 1;
}

void fn_802AD03C(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802AD060(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

s32 fn_802AD084(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802AD0CC(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void *);

    fn_802A1EF0((void *)arg0);
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802AD114(void) {
    return 0;
}

void fn_802AD11C(void) {

}

void fn_802AD120(void *arg0, s32 arg1) {
    extern char lbl_804188F0[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_804188F0;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x20);
    }
}

void fn_802AD1FC(void) {

}

void fn_802AD200(void) {

}

void fn_802AD204(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_802AD228(u8 *self) {
    return self + 8;
}

u8 *fn_802AD230(u8 *self) {
    return self + 8;
}

s32 fn_802AD238(void) {
    return 1;
}

s32 fn_802AD240(void) {
    return 1;
}

void fn_802AD248(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802AD26C(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

s32 fn_802AD290(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802AD2D8(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void *);

    fn_802A1EF0((void *)arg0);
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802AD320(void) {
    return 0;
}

void fn_802AD328(void) {

}

void fn_802AD32C(void *arg0, s32 arg1) {
    extern char lbl_80418870[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_80418870;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x20);
    }
}

s32 fn_802AD408(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802AD450(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void *);

    fn_802A1EF0((void *)arg0);
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802AD498(void) {
    return 0;
}

void fn_802AD4A0(void) {

}

void fn_802ADD10(u8 *self, s32 arg1, s32 arg2) {
    extern void *lbl_804960E8;
    extern s32 lbl_80494B3C;
    extern void fn_8028CEF8(void *, void *, s32, s32);
    s32 i;

    for (i = 0; i < ((s32 *)(*(u8 **)(self + 4) + arg2 * 8))[0]; i++) {
        s32 *item = (*(s32 ***)(*(u8 **)(self + 4) + arg2 * 8 + 4))[i];
        if (*item == 1) {
            fn_8028CEF8(lbl_804960E8, item + 1, arg1, lbl_80494B3C);
        }
    }
}

s32 fn_802ADDA0(u8 *self) {
    extern s32 fn_802B490C(s32);
    s32 r;

    r = ((s32 (*)(s32))fn_802AE360)(*(s32 *)(self + 8));
    if (r == 0) {
        return -1;
    }
    return fn_802B490C(r);
}

s32 *fn_802ADDD8(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = 0;
    self[2] = 0;
    self[3] = 0;
    return self;
}

void fn_802ADDF4(void *arg0, s32 arg1) {
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802AE5EC(void *);

    fn_802AE5EC(arg0);
    if (arg1 & 1) {
        lbl_80443318[0](arg0, 0x10);
    }
}

void fn_802AE440(void);
void fn_802AE5EC(void) {
    fn_802AE440();
}

extern s32 lbl_80494D14;
extern u32 *lbl_80496108;
extern u32 lbl_8044342C[];
u32 fn_802AEB5C(void);
u32 fn_802AECCC(void) {
    u32 y;

    if (--lbl_80494D14 < 0) {
        return fn_802AEB5C();
    }
    y = *lbl_80496108++;
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return y;
}

void fn_802AED48(u32 seed) {
    u32 *p;
    s32 i;

    seed |= 1;
    lbl_8044342C[0] = seed;
    lbl_80494D14 = 0;
    p = &lbl_8044342C[1];
    for (i = 623; i != 0; i--) {
        seed *= 69069;
        *p++ = seed;
    }
}

extern f32 lbl_803EDBB8[];
extern f32 lbl_803EDBBC[];
void *fn_802AED88(f32 *m) {
    f32 zero = lbl_803EDBB8[0];
    f32 one = lbl_803EDBBC[0];
    m[4] = one;
    m[5] = one;
    m[6] = one;
    m[7] = one;
    m[9] = one;
    m[10] = one;
    m[12] = one;
    m[13] = one;
    m[0] = zero;
    m[1] = zero;
    m[2] = zero;
    m[3] = zero;
    m[8] = zero;
    m[11] = zero;
    M2C_FIELD(m, s32 *, 0x3B8) = 0;
    M2C_FIELD(m, s32 *, 0x3BC) = 0;
    return m;
}

void fn_802AEDE4(u8 *self) {
    typedef struct { s32 v[8]; } AptXform;
    s32 *depth = (s32 *)(self + 0x3B8);
    s32 n = *depth;
    ((AptXform *)(self + 0x38))[n++] = *(AptXform *)self;
    *depth = n;
}

void fn_802AF384(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x20) = farg0;
    M2C_FIELD(arg0, f32 *, 0x24) = farg1;
}

s32 fn_802AF390(s32 arg0) {
    return arg0 + 0x10;
}

s32 fn_802AF398(s32 arg0) {
    return arg0 + 0x28;
}

void fn_802AF3A0(void *arg0, void *arg1, void *arg2, f32 farg0) {
    f32 temp_f13;
    f32 temp_f13_10;
    f32 temp_f13_11;
    f32 temp_f13_12;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f13_4;
    f32 temp_f13_5;
    f32 temp_f13_6;
    f32 temp_f13_7;
    f32 temp_f13_8;
    f32 temp_f13_9;

    temp_f13 = M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg2, f32 *, 0x20) = (f32) (((M2C_FIELD(arg1, f32 *, 0x20) - temp_f13) * farg0) + temp_f13);
    temp_f13_2 = M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg2, f32 *, 0x24) = (f32) (((M2C_FIELD(arg1, f32 *, 0x24) - temp_f13_2) * farg0) + temp_f13_2);
    temp_f13_3 = M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg2, f32 *, 0x10) = (f32) (((M2C_FIELD(arg1, f32 *, 0x10) - temp_f13_3) * farg0) + temp_f13_3);
    temp_f13_4 = M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(arg2, f32 *, 0x1C) = (f32) (((M2C_FIELD(arg1, f32 *, 0x1C) - temp_f13_4) * farg0) + temp_f13_4);
    temp_f13_5 = M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(arg2, f32 *, 0x28) = (f32) (((M2C_FIELD(arg1, f32 *, 0x28) - temp_f13_5) * farg0) + temp_f13_5);
    temp_f13_6 = M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD(arg2, f32 *, 0x2C) = (f32) (((M2C_FIELD(arg1, f32 *, 0x2C) - temp_f13_6) * farg0) + temp_f13_6);
    temp_f13_7 = M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg2, f32 *, 0x30) = (f32) (((M2C_FIELD(arg1, f32 *, 0x30) - temp_f13_7) * farg0) + temp_f13_7);
    temp_f13_8 = M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg2, f32 *, 0x34) = (f32) (((M2C_FIELD(arg1, f32 *, 0x34) - temp_f13_8) * farg0) + temp_f13_8);
    temp_f13_9 = M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg2, f32 *, 0x38) = (f32) (((M2C_FIELD(arg1, f32 *, 0x38) - temp_f13_9) * farg0) + temp_f13_9);
    temp_f13_10 = M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(arg2, f32 *, 0x3C) = (f32) (((M2C_FIELD(arg1, f32 *, 0x3C) - temp_f13_10) * farg0) + temp_f13_10);
    temp_f13_11 = M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(arg2, f32 *, 0x40) = (f32) (((M2C_FIELD(arg1, f32 *, 0x40) - temp_f13_11) * farg0) + temp_f13_11);
    temp_f13_12 = M2C_FIELD(arg0, f32 *, 0x44);
    M2C_FIELD(arg2, f32 *, 0x44) = (f32) (((M2C_FIELD(arg1, f32 *, 0x44) - temp_f13_12) * farg0) + temp_f13_12);
}

s32 fn_802AF678(void *arg0) {
    extern f32 fn_802921A0(void *, s32);
    extern f32 lbl_803EDED8[];
    return fn_802921A0(arg0, 0xB) >= lbl_803EDED8[0];
}

s32 fn_802AF6B4(void *arg0) {
    extern s32 fn_802B70DC(void *);
    extern s32 fn_802B72D4(void *);
    s32 found;
    s32 ok;
    s32 ok2;

    found = 0;
    ok = 0;
    if (fn_802B70DC(arg0) == 0xD) {
        ok = fn_802B72D4(arg0) == 0;
    }
    if (ok) {
        found = 1;
    } else {
        ok2 = 0;
        if (fn_802B70DC(arg0) == 0x12) {
            ok2 = fn_802B72D4(arg0) == 0;
        }
        if (ok2) {
            found = 1;
        }
    }
    if (found != 0) {
        return (M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), u32 *, 0x1C) >> 6) & 1;
    }
    return 0;
}

void fn_802AFF78(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((M2C_FIELD(arg2, f32 *, 0x10) * M2C_FIELD(arg1, f32 *, 0)) + M2C_FIELD(arg1, f32 *, 0x10));
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) ((M2C_FIELD(arg2, f32 *, 0x14) * M2C_FIELD(arg1, f32 *, 4)) + M2C_FIELD(arg1, f32 *, 0x14));
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) ((M2C_FIELD(arg2, f32 *, 0x18) * M2C_FIELD(arg1, f32 *, 8)) + M2C_FIELD(arg1, f32 *, 0x18));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) ((M2C_FIELD(arg2, f32 *, 0x1C) * M2C_FIELD(arg1, f32 *, 0xC)) + M2C_FIELD(arg1, f32 *, 0x1C));
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg2, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg2, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg2, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (M2C_FIELD(arg2, f32 *, 0xC) * M2C_FIELD(arg1, f32 *, 0xC));
}

void fn_802B0084(s32 arg0, s32 arg1) {
    M2C_UNK fn_802B000C(M2C_UNK, s32, s32);
    fn_802B000C(0, arg0, arg1);
}

void fn_802B0904(void *self) {
    M2C_UNK fn_802B0694(void *, s32, s32);
    fn_802B0694(self, 0, 1);
}

void fn_8027873C(void);
void fn_802B092C(void) {
    fn_8027873C();
}

s32 fn_802B094C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) + 8;
}

s32 fn_802B0958(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

void *fn_802B0A68(void *self, void *arg1) {
    extern u8 lbl_804189F0[];
    extern u8 lbl_80418A70[];
    extern void fn_802B6FA8(void *, s32);
    fn_802B6FA8(self, 0x15);
    M2C_FIELD(self, u8 **, 4) = lbl_804189F0;
    fn_802ADDD8((s32 *)self + 2, 8);
    M2C_FIELD(self, u8 **, 4) = lbl_80418A70;
    M2C_FIELD(self, s32 *, 0x18) = 0;
    M2C_FIELD(self, s32 *, 0x20) = 0;
    M2C_FIELD(self, s32 *, 0x1C) = *(s32 *)(*(u8 **)(*(u8 **)((u8 *)arg1 + 0x50) + 8) + 4);
    M2C_FIELD(self, s32 *, 0x24) = 0;
    return self;
}

void fn_802B0AE4(void) {
    extern u8 *lbl_80494D18;
    extern u8 *lbl_80494D20;
    extern u8 *lbl_80494D1C;
    if (lbl_80494D18 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D18 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D18 + *(s16 *)(vt + 0x10));
        lbl_80494D18 = NULL;
    }
    if (lbl_80494D20 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D20 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D20 + *(s16 *)(vt + 0x10));
        lbl_80494D20 = NULL;
    }
    if (lbl_80494D1C != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D1C + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D1C + *(s16 *)(vt + 0x10));
        lbl_80494D1C = NULL;
    }
}

s32 fn_802B0CC0(void *self) {
    extern void (*lbl_8044336C[])(s32, s32);
    extern s32 lbl_80496130;
    u32 flags;
    s32 on = 0;
    flags = *(u32 *)self;
    if ((flags & 0x3F) == 0x15) {
        on = (flags >> 15) & 1;
    }
    if (on != 0 && M2C_FIELD(self, s32 *, 0x20) != 0) {
        lbl_8044336C[0](M2C_FIELD(self, s32 *, 0x20), M2C_FIELD(self, s32 *, 0x24));
    }
    return lbl_80496130;
}

s32 fn_802B0D24(void) {
    return lbl_80496130;
}

s32 fn_802B0F90(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802B0FD8(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void *);

    fn_802A1EF0((void *)arg0);
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802B1020(void) {
    return 0;
}

void fn_802B1028(void) {

}

void fn_802B102C(void *arg0, s32 arg1) {
    extern char lbl_804189F0[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_804189F0;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x30);
    }
}

void *fn_802B138C(void *arg0) {
    extern char lbl_80418AF0[];
    extern char lbl_80418D70[];
    extern u16 lbl_803FCE5C[];
    extern void *lbl_80494B48;
    extern void fn_802B7124(void *, s32);
    extern void fn_802B710C(void *, s32);
    extern void fn_802B7138(void *, s32);
    extern void fn_802B7158(void *, s32);
    extern void fn_802B7178(void *, s32);
    extern void fn_802B71C8(void *);
    extern void fn_803B76C8(void *, void *);

    M2C_FIELD(arg0, void **, 4) = lbl_80418D70;
    fn_802B7124(arg0, 1);
    fn_802B710C(arg0, 0);
    fn_802B7138(arg0, 1);
    fn_802B7158(arg0, 0);
    fn_802B7178(arg0, 0);
    fn_802B71C8(arg0);
    fn_803B76C8(lbl_80494B48, arg0);
    M2C_FIELD(arg0, void **, 4) = lbl_80418AF0;
    M2C_FIELD(arg0, u16 **, 8) = lbl_803FCE5C;
    lbl_803FCE5C[0]++;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    return arg0;
}

void fn_802B143C(void *arg0, s32 arg1) {
    extern char lbl_80418AF0[];
    extern char lbl_80418D70[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void (**lbl_80494DA0)(void *);
    u16 *ref;

    M2C_FIELD(arg0, void **, 4) = lbl_80418AF0;
    ref = M2C_FIELD(arg0, u16 **, 8);
    if (--*ref == 0) {
        lbl_80494DA0[1](ref);
    }
    M2C_FIELD(arg0, void **, 4) = lbl_80418D70;
    if (arg1 & 1) {
        lbl_80443318[0](arg0, 0x10);
    }
}

void fn_802B14CC(void *arg0) {
    extern s32 fn_802BC640(void *, s32);
    extern void fn_803B8C04(void *);
    extern void *lbl_80494DAC;
    u8 *str;

    str = (u8 *)arg0 + 8;
    M2C_FIELD(arg0, void **, 0xC) = lbl_80494DAC;
    lbl_80494DAC = arg0;
    if (fn_802BC640(str, 0x21) != 0) {
        fn_803B8C04(str);
    }
}

void fn_802B1520(void *arg0) {
    extern s32 fn_802BC640(void *, s32);
    extern void fn_803B8C04(void *);
    extern void *lbl_80494DAC;
    u8 *str;

    str = (u8 *)arg0 + 8;
    M2C_FIELD(arg0, void **, 0xC) = lbl_80494DAC;
    lbl_80494DAC = arg0;
    if (fn_802BC640(str, 0x21) != 0) {
        fn_803B8C04(str);
    }
}

s32 fn_802B201C(void) {
    return lbl_80496130;
}

void *fn_802B2CF0(void *arg0) {
    extern u16 lbl_803FCE5C[];
    extern void **lbl_80494DA0;
    extern void *lbl_80494DAC;
    extern void *lbl_80494B48;
    extern void fn_802B4ADC(void *, u16 **);
    extern void fn_802BDE90(u16 **);
    extern s32 fn_803B6F0C(void *);
    extern void fn_802BC600(void *, s32);
    extern void *fn_802B3C24(s32);
    extern void *fn_802B138C(void *);
    u16 *p;
    void *obj;
    void *res;
    u16 *q;

    p = lbl_803FCE5C;
    lbl_803FCE5C[0]++;
    fn_802B4ADC(arg0, &p);
    fn_802BDE90(&p);
    obj = lbl_80494DAC;
    if (obj != 0) {
        s32 *pool = lbl_80494B48;
        s32 n = pool[1];
        s32 cap = pool[0];
        u8 *str;
        lbl_80494DAC = M2C_FIELD(obj, void **, 0xC);
        if (n >= cap) {
            M2C_FIELD(obj, u32 *, 0) &= ~0x40000000;
        } else {
            ((void **)pool[2])[n] = obj;
            pool[1] = n + 1;
        }
        str = (u8 *)obj + 8;
        if (fn_803B6F0C(str) == 0) {
            fn_802BC600(str, 0);
        }
        res = obj;
    } else {
        res = fn_802B138C(fn_802B3C24(0x10));
    }
    (*p)++;
    q = M2C_FIELD(res, u16 **, 8);
    if (--*q == 0) {
        ((void (*)(void *)) lbl_80494DA0[1])(q);
    }
    M2C_FIELD(res, u16 **, 8) = p;
    q = p;
    if (--*q == 0) {
        ((void (*)(void *)) lbl_80494DA0[1])(q);
    }
    return res;
}

void *fn_802B2E38(void *arg0) {
    extern u16 lbl_803FCE5C[];
    extern void **lbl_80494DA0;
    extern void *lbl_80494DAC;
    extern void *lbl_80494B48;
    extern void fn_802B4ADC(void *, u16 **);
    extern void fn_802BE050(u16 **);
    extern s32 fn_803B6F0C(void *);
    extern void fn_802BC600(void *, s32);
    extern void *fn_802B3C24(s32);
    extern void *fn_802B138C(void *);
    u16 *p;
    void *obj;
    void *res;
    u16 *q;

    p = lbl_803FCE5C;
    lbl_803FCE5C[0]++;
    fn_802B4ADC(arg0, &p);
    fn_802BE050(&p);
    obj = lbl_80494DAC;
    if (obj != 0) {
        s32 *pool = lbl_80494B48;
        s32 n = pool[1];
        s32 cap = pool[0];
        u8 *str;
        lbl_80494DAC = M2C_FIELD(obj, void **, 0xC);
        if (n >= cap) {
            M2C_FIELD(obj, u32 *, 0) &= ~0x40000000;
        } else {
            ((void **)pool[2])[n] = obj;
            pool[1] = n + 1;
        }
        str = (u8 *)obj + 8;
        if (fn_803B6F0C(str) == 0) {
            fn_802BC600(str, 0);
        }
        res = obj;
    } else {
        res = fn_802B138C(fn_802B3C24(0x10));
    }
    (*p)++;
    q = M2C_FIELD(res, u16 **, 8);
    if (--*q == 0) {
        ((void (*)(void *)) lbl_80494DA0[1])(q);
    }
    M2C_FIELD(res, u16 **, 8) = p;
    q = p;
    if (--*q == 0) {
        ((void (*)(void *)) lbl_80494DA0[1])(q);
    }
    return res;
}

void fn_803B6FFC();
void fn_802B3A50(char *self) {
    extern void fn_803B6FFC(void *);
    fn_803B6FFC(self + 8);
}

void fn_802BC17C();
void fn_802B3ABC(char *self) {
    extern void fn_802BC17C(void *);
    fn_802BC17C(self + 8);
}

void fn_802BC36C();
void fn_802B3AE0(char *self) {
    extern void fn_802BC36C(void *);
    fn_802BC36C(self + 8);
}

u8 *fn_802B3B04(u8 *self) {
    return self + 8;
}

void fn_802B3B0C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

s32 fn_802B3B14(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_802B3B1C(void) {
    return 0;
}

s32 fn_802B3B24(void) {
    return 0;
}

void *fn_802B3B2C(void) {
    extern void *lbl_80494DAC;
    extern void *lbl_80494B48;
    extern s32 fn_803B6F0C(void *);
    extern void fn_802BC600(void *, s32);
    extern void *fn_802B3C24(s32);
    extern void *fn_802B138C(void *);
    void *obj;
    u8 *str;

    obj = lbl_80494DAC;
    if (obj != 0) {
        s32 *pool = lbl_80494B48;
        s32 n = pool[1];
        s32 cap = pool[0];
        lbl_80494DAC = M2C_FIELD(obj, void **, 0xC);
        if (n >= cap) {
            M2C_FIELD(obj, u32 *, 0) &= ~0x40000000;
        } else {
            ((void **)pool[2])[n] = obj;
            pool[1] = n + 1;
        }
        str = (u8 *)obj + 8;
        if (fn_803B6F0C(str) == 0) {
            fn_802BC600(str, 0);
        }
        return obj;
    }
    return fn_802B138C(fn_802B3C24(0x10));
}

void fn_802B3BD0(void *arg0) {
    extern s32 fn_802BC640(void *, s32);
    extern void fn_803B8C04(void *);
    extern void *lbl_80494DAC;
    u8 *str;

    str = (u8 *)arg0 + 8;
    M2C_FIELD(arg0, void **, 0xC) = lbl_80494DAC;
    lbl_80494DAC = arg0;
    if (fn_802BC640(str, 0x21) != 0) {
        fn_803B8C04(str);
    }
}

void *fn_802B3C24(s32 size) {
    extern void *(*lbl_80443310[])(s32);
    return lbl_80443310[0](size);
}

void fn_802B3C50(void *p, s32 size) {
    extern void (*lbl_80443318[])(void *, s32);
    lbl_80443318[0](p, size);
}

void *fn_802B3C7C(s32 size) {
    extern void *(*lbl_80443310[])(s32);
    return lbl_80443310[0](size);
}

extern void (*lbl_80443314[])(void);
void fn_802B3CA8(void) {
    lbl_80443314[0]();
}

s32 fn_802B461C(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802B4664(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void *);

    fn_802A1EF0((void *)arg0);
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802B46AC(void) {
    return 0;
}

void fn_802B46B4(void) {

}

void fn_802B46B8(void *arg0, s32 arg1) {
    extern char lbl_80418B70[];
    extern char lbl_804189F0[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_803B6F94(void *, s32);
    extern void fn_802A1EF0(void *);
    u8 *sub;

    M2C_FIELD(arg0, void **, 0x14) = lbl_80418B70;
    sub = (u8 *)arg0 + 0x10;
    M2C_FIELD(sub, void **, 4) = lbl_804189F0;
    fn_802ADDF4(sub + 8, 2);
    fn_802B709C(sub, 0);
    fn_803B6F94(arg0, 2);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x34);
    }
}

s32 fn_802B490C(void *arg0) {
    extern s32 fn_80246E00(s32);
    s32 flags = M2C_FIELD(arg0, s32 *, 0);

    if (!((flags ^ 0x8000) & 0x8000)) {
        switch (flags & 0x3F) {
        case 1:
            return fn_80246E00(M2C_FIELD(arg0, s32 *, 8) + 8);
        case 5:
        case 7:
            return M2C_FIELD(arg0, s32 *, 8);
        case 6:
            return (s32)M2C_FIELD(arg0, f32 *, 8);
        }
    }
    return 0;
}

f32 fn_802B4998(void *arg0) {
    extern f32 fn_8027A688(s32);
    s32 flags = M2C_FIELD(arg0, s32 *, 0);

    if (!((flags ^ 0x8000) & 0x8000)) {
        switch (flags & 0x3F) {
        case 1:
            return fn_8027A688(M2C_FIELD(arg0, s32 *, 8) + 8);
        case 5:
            return (f32)M2C_FIELD(arg0, u32 *, 8);
        case 7:
            return (f32)M2C_FIELD(arg0, s32 *, 8);
        case 6:
            return M2C_FIELD(arg0, f32 *, 8);
        }
    }
    return 0.0f;
}

void fn_802B4A58(void *arg0, void *arg1) {
    extern u16 lbl_803FCE5C[];
    extern void **lbl_80494DA0;
    extern void fn_802B4ADC(void *, u16 **);
    extern void fn_80248784(void *, void *);
    u16 *p;
    u16 *q;

    p = lbl_803FCE5C;
    lbl_803FCE5C[0]++;
    fn_802B4ADC(arg0, &p);
    fn_80248784(arg1, (u8 *) p + 8);
    q = p;
    if (--*q == 0) {
        ((void (*)(void *)) lbl_80494DA0[1])(q);
    }
}

s32 fn_802B4E80(void) {
    return lbl_80496130;
}

s32 fn_802B4E88(void) {
    extern void *lbl_80496144;
    void *p = lbl_80496144;
    return p != 0 ? ((s32 (*)(void *))fn_802AEA9C)(p) : 0;
}

s32 fn_802B4EBC(void) {
    extern void *lbl_80496144;
    void *p = lbl_80496144;
    return p != 0 ? ((s32 (*)(void *))fn_802AEABC)(p) : 0;
}

void fn_802B6E08(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    *arg0 = (temp_r0 & 0xF000FFFF) | ((temp_r0 & 0x0FFF0000) + 0x10000);
}

s32 fn_802B6F38(void) {
    return 0;
}

s32 fn_802B6F40(void) {
    return 0;
}

s32 fn_802B6F48(void) {
    return 0;
}

s32 fn_802B6F50(void) {
    return 0;
}

s32 fn_802B6F58(void) {
    return 0;
}

void fn_802B6F60(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)obj[1];
        (*(void (**)(void *, s32))(vt + 0x64))((char *)obj + *(s16 *)(vt + 0x60), 3);
    }
}

void fn_802B6FA0(void) {

}

void fn_802B6FA4(void) {

}

void *fn_802B6FA8(void *arg0, s32 arg1) {
    extern char lbl_80418D70[];
    extern void *lbl_80494B48;
    extern void fn_803B76C8(void *, void *);
    extern void fn_802B7124(void *, s32);
    extern void fn_802B710C(void *, s32);
    extern void fn_802B7138(void *, s32);
    extern void fn_802B7158(void *, s32);
    extern void fn_802B7178(void *, s32);
    extern void fn_802B71C8(void *);

    M2C_FIELD(arg0, void **, 4) = lbl_80418D70;
    fn_802B7124(arg0, arg1);
    fn_802B710C(arg0, 0);
    fn_802B7138(arg0, 1);
    fn_802B7158(arg0, 0);
    fn_802B7178(arg0, 0);
    fn_802B71C8(arg0);
    fn_803B76C8(lbl_80494B48, arg0);
    return arg0;
}

void *fn_802B7028(void *arg0, s32 arg1) {
    extern char lbl_80418D70[];
    extern void fn_802B7124(void *, s32);
    extern void fn_802B710C(void *, s32);
    extern void fn_802B7138(void *, s32);
    extern void fn_802B7158(void *, s32);
    extern void fn_802B7178(void *, s32);
    extern void fn_802B71D8(void *);

    M2C_FIELD(arg0, void **, 4) = lbl_80418D70;
    fn_802B7124(arg0, arg1);
    fn_802B710C(arg0, 0);
    fn_802B7138(arg0, 1);
    fn_802B7158(arg0, 0);
    fn_802B7178(arg0, 0);
    fn_802B71D8(arg0);
    return arg0;
}

extern void fn_802D20E8(void *);
void fn_802B709C(void *self, s32 flags) {
    extern u8 lbl_80418D70[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(self, void **, 4) = lbl_80418D70;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

u32 fn_802B70D0(void *arg0) {
    struct Bits { u32 a : 4; u32 b : 12; u32 c : 16; };
    return ((struct Bits *)arg0)->b;
}

s32 fn_802B70DC(s32 *arg0) {
    return *arg0 & 0x3F;
}

s32 fn_802B70E8(u32 *arg0) {
    return ((u32) *arg0 >> 0xEU) & 1;
}

u8 fn_802B70F4(u32 *arg0) {
    return (u8) ((u32) *arg0 >> 6U);
}

s32 fn_802B7100(s32 *arg0) {
    return *arg0 & 0x8000;
}

void fn_802B710C(s32 *arg0, s32 arg1) {
    *arg0 = (*arg0 & 0xF000FFFF) | (arg1 << 0x10);
}

void fn_802B7124(s32 *arg0, s32 arg1) {
    *arg0 = (*arg0 & 0xFFFFFFC0) | arg1;
}

void fn_802B7138(s32 *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = *arg0 & 0xFFFF7FFF;
    *arg0 = temp_r0;
    if (arg1 != 0) {
        *arg0 = temp_r0 | 0x8000;
    }
}

void fn_802B7158(s32 *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = *arg0 & 0xFFFFBFFF;
    *arg0 = temp_r0;
    if (arg1 != 0) {
        *arg0 = temp_r0 | 0x4000;
    }
}

void fn_802B7178(s32 *arg0, s32 arg1) {
    if (arg1 == 0) {
        *arg0 &= 0xFFFFC03F;
        return;
    }
    *arg0 = (*arg0 & 0xFFFFC03F) | (arg1 << 6);
}

void fn_802B71A8(s32 *arg0) {
    *arg0 += 0x40;
}

void fn_802B71B8(s32 *arg0) {
    *arg0 -= 0x40;
}

void fn_802B71C8(s32 *arg0) {
    *arg0 |= 0x40000000;
}

void fn_802B71D8(s32 *arg0) {
    *arg0 &= 0xBFFFFFFF;
}

s32 fn_802B71E8(u32 *arg0) {
    return ((u32) *arg0 >> 0x1EU) & 1;
}

void fn_802B71F4(void) {

}

void fn_802B71F8(void) {

}

void fn_802B71FC(void) {

}

void fn_802B7200(void) {

}

void fn_802B7204(void) {

}

void fn_802B7208(void) {

}

void fn_802B720C(void) {

}

void fn_802B7210(void) {

}

void fn_802B7214(void) {

}

void fn_802B7218(void) {

}

void fn_802B721C(void) {

}

void fn_802B7220(void) {

}

void fn_802B7224(void) {

}

void fn_802B7228(void) {

}

void fn_802B722C(void) {

}

void fn_802B7230(void) {

}

void fn_802B7234(void) {

}

void fn_802B7238(void) {

}

void fn_802B723C(void) {

}

s32 fn_802B7240(s32 arg0) {
    return arg0 - 0x10;
}

void fn_802B7248(void) {

}

void fn_802B724C(void) {

}

void fn_802B7250(void) {

}

void fn_802B7254(void) {

}

void fn_802B7258(void) {

}

s32 fn_802B725C(u32 *arg0) {
    return (*arg0 & 0x3F) == 0x20;
}

s32 fn_802B7274(u32 *arg0) {
    return (*arg0 & 0x3F) == 0x21;
}

s32 fn_802B728C(u32 *arg0) {
    return (*arg0 & 0x3F) == 0x22;
}

s32 fn_802B72A4(u32 *arg0) {
    return (*arg0 & 0x3F) == 0x23;
}

s32 fn_802B72BC(u32 *arg0) {
    return (*arg0 & 0x3F) == 3;
}

s32 fn_802B72D4(u32 *arg0) {
    return (*arg0 & 0x8000) ? 1 : 0;
}

s32 fn_802B72E8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 8) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7308(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 1) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7328(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 5) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7348(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 7) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7368(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 4) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7388(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 6) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B73A8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 9) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B73C8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0xA) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B73E8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0xB) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7408(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x14) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7428(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x16) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7448(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x15) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7468(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x18) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7488(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x1F) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B74A8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x17) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B74C8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x1A) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B74E8(u32 *arg0, s32 arg1) {
    u32 flags = *arg0;
    s32 type = flags & 0x3F;
    s32 ret = 0;

    if (type > 0xB) {
        if (type <= 0x13) {
            if (arg1 != 0 || !((flags ^ 0x8000) & 0x8000)) {
                ret = 1;
            }
        }
    }
    return ret;
}

s32 fn_802B7520(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x1B) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7540(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x1C) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7560(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x1D) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7580(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x24) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B75A0(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x1E) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

u32 *fn_802B75C0(void *arg0, void *arg1, s32 arg2) {
    extern char *lbl_80494D54;
    extern char *lbl_80494D58;
    u32 *r;

    r = ((u32 *(*)(void *, s32))fn_802AE360)(lbl_80494D54 + 8, arg2);
    if (r == NULL || ((*r ^ 0x8000) & 0x8000)) {
        r = ((u32 *(*)(void *, s32))fn_802AE360)(lbl_80494D58 + 8, arg2);
    }
    return r;
}

void fn_802B76E0(void) {

}

void fn_802B76E4(void) {

}

void fn_802B76E8(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_802B770C(u8 *self) {
    return self + 8;
}

u8 *fn_802B7714(u8 *self) {
    return self + 8;
}

s32 fn_802B771C(void) {
    return 1;
}

s32 fn_802B7724(void) {
    return 1;
}

void fn_802B772C(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802B7750(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

s32 fn_802B7774(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802B77BC(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void *);

    fn_802A1EF0((void *)arg0);
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802B7804(void) {
    return 0;
}

void fn_802B780C(void) {

}

void fn_802B7810(void *arg0, s32 arg1) {
    extern char lbl_80418DF0[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_80418DF0;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x20);
    }
}

void fn_802B7888(char *self) {
    extern void fn_802ADFFC(void *);
    fn_802ADFFC(self + 8);
}

void fn_802B78AC(char *self) {
    extern void fn_802AE360(void *);
    fn_802AE360(self + 8);
}

void fn_802B7ABC(void) {
    extern u8 *lbl_80494D5C;
    extern u8 *lbl_80494D60;
    extern u8 *lbl_80494D64;
    extern u8 *lbl_80494D68;
    if (lbl_80494D5C != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D5C + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D5C + *(s16 *)(vt + 0x10));
        lbl_80494D5C = NULL;
    }
    if (lbl_80494D60 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D60 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D60 + *(s16 *)(vt + 0x10));
        lbl_80494D60 = NULL;
    }
    if (lbl_80494D64 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D64 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D64 + *(s16 *)(vt + 0x10));
        lbl_80494D64 = NULL;
    }
    if (lbl_80494D68 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D68 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D68 + *(s16 *)(vt + 0x10));
        lbl_80494D68 = NULL;
    }
}

s32 fn_802B8CE0(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802B8D28(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void *);

    fn_802A1EF0((void *)arg0);
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802B8D70(void) {
    return 0;
}

void fn_802B8D78(void) {

}

void fn_802B8F3C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}

s32 fn_802B90B4(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802B90BC(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802B9104(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void *);

    fn_802A1EF0((void *)arg0);
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802B914C(void) {
    return 0;
}

void fn_802B9154(void) {

}

void fn_802B9314(void) {
    extern u8 *lbl_80494D6C;
    extern u8 *lbl_80494D70;
    extern u8 *lbl_80494D74;
    extern u8 *lbl_80494D78;
    if (lbl_80494D6C != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D6C + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D6C + *(s16 *)(vt + 0x10));
        lbl_80494D6C = NULL;
    }
    if (lbl_80494D70 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D70 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D70 + *(s16 *)(vt + 0x10));
        lbl_80494D70 = NULL;
    }
    if (lbl_80494D74 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D74 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D74 + *(s16 *)(vt + 0x10));
        lbl_80494D74 = NULL;
    }
    if (lbl_80494D78 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D78 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D78 + *(s16 *)(vt + 0x10));
        lbl_80494D78 = NULL;
    }
}

s32 fn_802BA008(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802BA050(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802BA098(void) {
    return 0;
}

void fn_802BA0A0(void) {

}

void fn_802BA10C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

void fn_802BA19C(void) {
    extern u8 *lbl_80494D7C;
    extern u8 *lbl_80494D90;
    extern u8 *lbl_80494D80;
    extern u8 *lbl_80494D84;
    extern u8 *lbl_80494D88;
    extern u8 *lbl_80494D8C;
    if (lbl_80494D7C != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D7C + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D7C + *(s16 *)(vt + 0x10));
        lbl_80494D7C = NULL;
    }
    if (lbl_80494D80 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D80 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D80 + *(s16 *)(vt + 0x10));
        lbl_80494D80 = NULL;
    }
    if (lbl_80494D84 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D84 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D84 + *(s16 *)(vt + 0x10));
        lbl_80494D84 = NULL;
    }
    if (lbl_80494D88 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D88 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D88 + *(s16 *)(vt + 0x10));
        lbl_80494D88 = NULL;
    }
    if (lbl_80494D8C != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D8C + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D8C + *(s16 *)(vt + 0x10));
        lbl_80494D8C = NULL;
    }
    if (lbl_80494D90 != NULL) {
        u8 *vt = *(u8 **)(lbl_80494D90 + 4);
        (*(void (**)(void *))(vt + 0x14))(lbl_80494D90 + *(s16 *)(vt + 0x10));
        lbl_80494D90 = NULL;
    }
}

s32 fn_802BAFDC(void) {
    return lbl_80496130;
}

s32 fn_802BAFE4(void) {
    return lbl_80496130;
}

s32 fn_802BB1A8(void) {
    return lbl_80496130;
}

s32 fn_802BB1B0(void) {
    return lbl_80496130;
}

s32 fn_802BB2FC(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802BB344(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802BB38C(void) {
    return 0;
}

void fn_802BB394(void) {

}

void fn_802BB398(void) {
    extern void *lbl_80494D94;
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;

    if ((void *) lbl_80494D94 != NULL) {
        do {
            temp_r9 = M2C_FIELD(lbl_80494D94, void **, 4);
            temp_r31 = M2C_FIELD(lbl_80494D94, void **, 8);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x74)(lbl_80494D94 + M2C_FIELD(temp_r9, s16 *, 0x70));
            if ((void *) lbl_80494D94 != NULL) {
                temp_r9_2 = M2C_FIELD(lbl_80494D94, void **, 4);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x64)(lbl_80494D94 + M2C_FIELD(temp_r9_2, s16 *, 0x60), 3);
            }
            lbl_80494D94 = temp_r31;
        } while (temp_r31 != NULL);
    }
}

void fn_802BB41C(void *arg0) {
    extern void *lbl_80494D94;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D94;
    lbl_80494D94 = arg0;
}

void fn_802BB42C(void *arg0) {
    extern void *lbl_80494D94;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D94;
    lbl_80494D94 = arg0;
}

s32 fn_802BB43C(void) {
    return 0;
}

s32 fn_802BB444(void) {
    return 0;
}

void fn_802BB44C(void *arg0, s32 arg1) {
    extern char lbl_80419070[];
    extern void fn_802B709C(void *, s32);
    extern void fn_802BB674(void *, s32);
    M2C_FIELD(arg0, void **, 4) = lbl_80419070;
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802BB674(arg0, 0xC);
    }
}

void *fn_802BB4A0(void *arg0, s32 arg1) {
    extern char lbl_80418D70[];
    extern char lbl_80419070[];
    extern void *lbl_80494B48;
    extern void fn_803B76C8(void *, void *);

    M2C_FIELD(arg0, void **, 4) = lbl_80418D70;
    fn_802B7124(arg0, 5);
    fn_802B710C(arg0, 0);
    fn_802B7138(arg0, 1);
    fn_802B7158(arg0, 0);
    fn_802B7178(arg0, 0);
    fn_802B71C8(arg0);
    fn_803B76C8(lbl_80494B48, arg0);
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, void **, 4) = lbl_80419070;
    return arg0;
}

void fn_802BB630(void *arg0) {
    extern void *lbl_80494D94;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D94;
    lbl_80494D94 = arg0;
}

s32 fn_802BB640(s32 *self) {
    return self[2];
}

void fn_802BB648(void) {
    extern void (*lbl_80443310[])(void);
    lbl_80443310[0]();
}

void fn_802BB674(void) {
    extern void (*lbl_80443318[])(void);
    lbl_80443318[0]();
}

void fn_802BB6A0(void) {
    extern void (*lbl_80443310[])(void);
    lbl_80443310[0]();
}

void fn_802BB6CC(void) {
    lbl_80443314[0]();
}

void fn_802BB6F8(void) {
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;

    if ((void *) lbl_80494D98 != NULL) {
        do {
            temp_r9 = M2C_FIELD(lbl_80494D98, void **, 4);
            temp_r31 = M2C_FIELD(lbl_80494D98, void **, 8);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x74)(lbl_80494D98 + M2C_FIELD(temp_r9, s16 *, 0x70));
            if ((void *) lbl_80494D98 != NULL) {
                temp_r9_2 = M2C_FIELD(lbl_80494D98, void **, 4);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x64)(lbl_80494D98 + M2C_FIELD(temp_r9_2, s16 *, 0x60), 3);
            }
            lbl_80494D98 = temp_r31;
        } while (temp_r31 != NULL);
    }
}

void fn_802BB77C(void *arg0) {
    extern void *lbl_80494D98;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D98;
    lbl_80494D98 = arg0;
}

void fn_802BB78C(void *arg0) {
    extern void *lbl_80494D98;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D98;
    lbl_80494D98 = arg0;
}

s32 fn_802BB79C(void) {
    return 0;
}

s32 fn_802BB7A4(void) {
    return 0;
}

void fn_802BB7AC(void *arg0, s32 arg1) {
    extern char lbl_804190F0[];
    extern void fn_802B709C(void *, s32);
    extern void fn_802BB9E0(void *, s32);
    M2C_FIELD(arg0, void **, 4) = lbl_804190F0;
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802BB9E0(arg0, 0xC);
    }
}

void fn_802BB99C(void *arg0) {
    extern void *lbl_80494D98;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D98;
    lbl_80494D98 = arg0;
}

f32 fn_802BB9AC(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 8);
}

void fn_802BB9B4(void) {
    extern void (*lbl_80443310[])(void);
    lbl_80443310[0]();
}

void fn_802BB9E0(void) {
    extern void (*lbl_80443318[])(void);
    lbl_80443318[0]();
}

void fn_802BBA0C(void) {
    extern void (*lbl_80443310[])(void);
    lbl_80443310[0]();
}

void fn_802BBA38(void) {
    lbl_80443314[0]();
}

void fn_802BBA64(void) {
    extern void *lbl_80494D9C;
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;

    if ((void *) lbl_80494D9C != NULL) {
        do {
            temp_r9 = M2C_FIELD(lbl_80494D9C, void **, 4);
            temp_r31 = M2C_FIELD(lbl_80494D9C, void **, 8);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x74)(lbl_80494D9C + M2C_FIELD(temp_r9, s16 *, 0x70));
            if ((void *) lbl_80494D9C != NULL) {
                temp_r9_2 = M2C_FIELD(lbl_80494D9C, void **, 4);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x64)(lbl_80494D9C + M2C_FIELD(temp_r9_2, s16 *, 0x60), 3);
            }
            lbl_80494D9C = temp_r31;
        } while (temp_r31 != NULL);
    }
}

void fn_802BBAE8(void *arg0) {
    extern void *lbl_80494D9C;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D9C;
    lbl_80494D9C = arg0;
}

void fn_802BBAF8(void *arg0) {
    extern void *lbl_80494D9C;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D9C;
    lbl_80494D9C = arg0;
}

s32 fn_802BBB08(void) {
    return 0;
}

s32 fn_802BBB10(void) {
    return 0;
}

void fn_802BBB18(void *arg0, s32 arg1) {
    extern char lbl_80419170[];
    extern void fn_802B709C(void *, s32);
    extern void fn_802BBD40(void *, s32);
    M2C_FIELD(arg0, void **, 4) = lbl_80419170;
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802BBD40(arg0, 0xC);
    }
}

void fn_802BBCFC(void *arg0) {
    extern void *lbl_80494D9C;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D9C;
    lbl_80494D9C = arg0;
}

s32 fn_802BBD0C(s32 *self) {
    return self[2];
}

void fn_802BBD14(void) {
    extern void (*lbl_80443310[])(void);
    lbl_80443310[0]();
}

void fn_802BBD40(void) {
    extern void (*lbl_80443318[])(void);
    lbl_80443318[0]();
}

void fn_802BBD6C(void) {
    extern void (*lbl_80443310[])(void);
    lbl_80443310[0]();
}

void fn_802BBD98(void) {
    lbl_80443314[0]();
}

void **fn_802BC580(void **self, void **other) {
    extern void fn_802BC600(void **, u32);
    extern void fn_802482F8();
    struct Buf { u16 ref; u16 len; u16 cap; u16 flags; char data[1]; };
    u32 len;
    char *dst;

    len = ((struct Buf *)*other)->len;
    fn_802BC600(self, len);
    dst = ((struct Buf *)*self)->data;
    fn_802482F8(dst, ((struct Buf *)*other)->data, len), dst[len] = 0;
    ((struct Buf *)*self)->len = len;
    ((struct Buf *)*self)->flags = ((struct Buf *)*other)->flags;
    return self;
}

void fn_802BC600(void **self, u32 n) {
    extern void fn_802BE3D0(void **, u32, s32, u32, s32, u32);
    u32 len;

    len = M2C_FIELD(*self, u16 *, 2);
    if (len > n) {
        len = n;
    }
    fn_802BE3D0(self, n, 0, len, 1, len);
}

s32 fn_802BC640(void **arg0, u32 arg1) {
    return arg1 < (u16) M2C_FIELD(*arg0, u16 *, 4);
}

void **fn_802BC658(void **self, char *s, u32 max) {
    extern void fn_802BE3D0(void **, u32, s32, u32, s32, u32);
    extern void fn_802482F8();
    struct Buf { u16 ref; u16 len; s32 cap; char data[1]; };
    u32 count;
    u32 len;
    char *p;
    char *dst;

    count = 0;
    p = s;
    while (count < max && *p++ != 0) {
        count++;
    }
    if (count != 0) {
        len = ((struct Buf *)*self)->len;
        fn_802BE3D0(self, len + count, 0, len, 1, len + count);
        dst = ((struct Buf *)*self)->data;
        fn_802482F8(dst + len, s, count);
    }
    return self;
}

s32 fn_802BC93C(void **self, s32 c, s32 start) {
    extern char *fn_80248B28(char *, s32);
    struct Buf { u16 ref; u16 len; s32 cap; char data[1]; };
    char *p;
    char *data;
    s32 i;

    if (start < ((struct Buf *)*self)->len) {
        i = start;
        if (i < 0) {
            i = 0;
        }
        data = ((struct Buf *)*self)->data;
        p = fn_80248B28(data + i, c);
        if (p != 0) {
            goto found;
        }
    }
    return -1;
found:
    {
        char *base = ((struct Buf *)*self)->data;
        return p - base;
    }
}

s32 fn_802BC9A8(void **self, s32 c, s32 start) {
    extern char *fn_80248640(char *, s32);
    struct Buf { u16 ref; u16 len; s32 cap; char data[1]; };
    char *p;
    char *data;
    s32 i;

    if (start < ((struct Buf *)*self)->len) {
        i = start;
        if (i < 0) {
            i = 0;
        }
        data = ((struct Buf *)*self)->data;
        p = fn_80248640(data + i, c);
        if (p != 0) {
            goto found;
        }
    }
    return -1;
found:
    {
        char *base = ((struct Buf *)*self)->data;
        return p - base;
    }
}

s32 fn_802BCA14(void) {
    return 0;
}

s32 fn_802BCA1C(void) {
    return 0;
}

void fn_802BCB74(void **self, s32 c) {
    extern void fn_802BCBCC(void **, char *, char *);
    char buf[2] = "*";

    buf[0] = c;
    fn_802BCBCC(self, buf, "");
}

s32 fn_802BCBBC(void) {
    return 0;
}

s32 fn_802BCBC4(void) {
    return 0;
}

s32 fn_802BCD9C(void **self, char *set, s32 c) {
    extern char *fn_80248640(char *, char *);
    struct Buf { u16 ref; u16 len; s32 cap; char data[1]; };
    char *p;

    p = ((struct Buf *)*self)->data;
    while ((p = fn_80248640(p, set)) != 0) {
        *p++ = c;
    }
    return 0;
}

void **fn_802BD16C(void **self) {
    extern void fn_802BE3D0(void **, u32, s32, u32, s32, u32);
    extern const u8 lbl_803EBA39[];
    struct Buf { u16 ref; u16 len; s32 cap; char data[1]; };
    s32 len;
    s32 i;
    char *p;

    len = ((struct Buf *)*self)->len;
    fn_802BE3D0(self, len, 0, len, 1, len);
    p = ((struct Buf *)*self)->data;
    for (i = 0; i < len; i++) {
        s32 ch = *p;
        if (ch[lbl_803EBA39] & 1) {
            ch += 0x20;
        }
        *p = ch;
        p++;
    }
    return self;
}

void fn_802BD608(s32 arg0, s32 arg1) {
    M2C_UNK fn_802BD324();
    M2C_UNK fn_802BD494(s32, s32);
    fn_802BD324();
    fn_802BD494(arg0, arg1);
}

void fn_802BE5FC(u8 **arg0) {
    u32 hash;
    s8 *p;
    s32 c;
    u16 h;

    hash = 0x811C9DC5;
    p = (s8 *)(*arg0 + 8);
    c = *p++;
    while (c != 0) {
        if ((u32)(c - 'A') <= 25) {
            c += 0x20;
        }
        hash ^= c;
        hash *= 0x01000193;
        c = *p++;
    }
    h = hash;
    if (h == 0) {
        h = 0x4567;
    }
    *(u16 *)(*arg0 + 6) = h;
}

u8 **fn_802C4024(const char *arg0) {
    extern s32 fn_80248808(const char *);
    extern s32 fn_8027A6AC(void *, const char *);
    extern u8 *lbl_80444628[];
    s32 len;
    s32 i;
    u8 *e;

    len = fn_80248808(arg0);
    for (i = 0; i <= 0xAF; i++) {
        e = lbl_80444628[i];
        if (*(u16 *)(e + 2) == len) {
            if (fn_8027A6AC(e + 8, arg0) == 0) {
                return lbl_80444628 + i;
            }
        }
    }
    return NULL;
}

void fn_802C43BC(void) {
    extern void *lbl_80494DAC;
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;

    if ((void *) lbl_80494DAC != NULL) {
        do {
            temp_r9 = M2C_FIELD(lbl_80494DAC, void **, 4);
            temp_r31 = M2C_FIELD(lbl_80494DAC, void **, 0xC);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x74)(lbl_80494DAC + M2C_FIELD(temp_r9, s16 *, 0x70));
            if ((void *) lbl_80494DAC != NULL) {
                temp_r9_2 = M2C_FIELD(lbl_80494DAC, void **, 4);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x64)(lbl_80494DAC + M2C_FIELD(temp_r9_2, s16 *, 0x60), 3);
            }
            lbl_80494DAC = temp_r31;
        } while (temp_r31 != NULL);
    }
}

s32 fn_802C4440(void) {
    extern s32 fn_8027A6AC(void *, void *);
    extern u8 *lbl_80444628[];
    extern u8 lbl_803FCE5C[];
    s32 i;
    u8 *a;
    u8 *b;
    s32 cmp;

    for (i = 0; i <= 0xAF; i++) {
        a = *(lbl_80444628 + i);
        if (a == lbl_803FCE5C) {
            return 0;
        }
        if (i + 1 <= 0xAF) {
            b = *(lbl_80444628 + 1 + i);
            if (a == b) {
                cmp = 0;
            } else {
                cmp = fn_8027A6AC(a + 8, b + 8);
            }
            if (cmp >= 0) {
                return 0;
            }
        }
    }
    return 1;
}

void fn_802C45A0(void) {
    M2C_UNK fn_802C44DC(M2C_UNK, M2C_UNK);
    fn_802C44DC(1, 0xFFFF);
}

void fn_802C45CC(void) {
    M2C_UNK fn_802C44DC(M2C_UNK, M2C_UNK);
    fn_802C44DC(0, 0xFFFF);
}

