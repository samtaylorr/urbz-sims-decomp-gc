/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { s32 w[2]; } Struct803EB1D8;
typedef struct { s32 w[5]; } Struct1A8_5;
typedef struct { s32 w[7]; } Struct1A8_7;
typedef struct { s32 v; } Struct1B8;
typedef struct { u8 b[4]; } Struct1B8b;
typedef struct { s32 w[3]; } Vec3i;

extern void *fn_8022554C(void *);
extern void fn_802303F0(void *, void *);
void *fn_802323F0(void *arg0) {
    M2C_UNK fn_8022315C(void *);
    M2C_UNK fn_802335BC(void *);
    extern f32 lbl_803EB174[];
    extern f32 lbl_803EB178[];
    extern char lbl_80417F30[];
    f32 *v;
    f32 zero;
    f32 one;

    fn_8022315C(arg0);
    M2C_FIELD(arg0, char **, 0x58) = lbl_80417F30;
    fn_802335BC((char *)arg0 + 0x60);
    zero = lbl_803EB174[0];
    one = lbl_803EB178[0];
    v = (f32 *)((char *)arg0 + 0x94);
    v[2] = zero;
    v[1] = zero;
    M2C_FIELD(arg0, f32 *, 0x94) = zero;
    M2C_FIELD(arg0, f32 *, 0xA0) = one;
    M2C_FIELD(arg0, s32 *, 0xA4) = 1;
    return arg0;
}

void fn_80232460(void *arg0, s32 arg1) {
    M2C_UNK fn_802335F4(void *, s32);
    M2C_UNK fn_802D20E8(void *);
    extern char lbl_80417D08[];
    extern char lbl_80417F30[];

    M2C_FIELD(arg0, char **, 0x58) = lbl_80417F30;
    fn_802335F4((char *)arg0 + 0x60, 2);
    M2C_FIELD(arg0, char **, 0x58) = lbl_80417D08;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_802324C0(void *arg0) {
    fn_802303F0(fn_8022554C(arg0), arg0);
}

extern void fn_80230448(void *, void *);
void fn_802324F4(void *arg0) {
    fn_80230448(fn_8022554C(arg0), arg0);
}

void fn_802326A4(s32 *arg0) {
    M2C_UNK fn_80224E10(M2C_UNK, s32);
    M2C_UNK fn_80225544(void);
    M2C_UNK fn_8022D25C(s32);

    fn_8022D25C(*arg0);
    fn_80224E10(fn_80225544(), *arg0);
}

void fn_802326E0(void) {

}

void fn_802326E4(void *arg0, s32 arg1) {
    M2C_UNK fn_80233468();
    M2C_UNK fn_80233538();
    M2C_UNK fn_80234E50(void *, M2C_UNK);
    s32 var_r9;
    s32 var_r9_2;

    switch (arg1) {                                 /* irregular */
    case 0:
        var_r9 = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
            var_r9 = 0;
        }
        if (var_r9 != 0) {
            fn_80233468();
            return;
        }
        return;
    case 4:
        var_r9_2 = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
            var_r9_2 = 0;
        }
        if (var_r9_2 != 0) {
            fn_80233538();
            return;
        }
        break;
    case 5:
        fn_80234E50(arg0 + 0x60, 1);
        return;
    case 6:
        fn_80234E50(arg0 + 0x60, 0);
        break;
    }
}

void fn_80232878(void *arg0, s32 arg1, f32 farg0) {
    switch (arg1) {                                 /* irregular */
    case 7:
        M2C_FIELD(arg0, f32 *, 0x34) = farg0;
        return;
    case 8:
        M2C_FIELD(arg0, f32 *, 0x38) = farg0;
        return;
    case 11:
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        return;
    case 12:
        M2C_FIELD(arg0, f32 *, 0x40) = farg0;
        return;
    }
}

void fn_802328C4(void *arg0, s32 arg1) {
    extern f32 lbl_803EB1C8[];

    switch (arg1) {
    case 7:
        M2C_FIELD(arg0, f32 *, 0x34) = lbl_803EB1C8[0];
        return;
    case 8:
        M2C_FIELD(arg0, f32 *, 0x38) = lbl_803EB1C8[0];
        return;
    case 11:
        M2C_FIELD(arg0, f32 *, 0x3C) = lbl_803EB1C8[0];
        return;
    case 12:
        M2C_FIELD(arg0, f32 *, 0x40) = lbl_803EB1C8[0];
        return;
    }
}

void fn_80232930(s32 arg0, s32 arg1) {
    M2C_UNK fn_80230468(s32, s32);
    fn_80230468(arg1, arg0);
}

void fn_8023295C(s32 arg0, s32 arg1) {
    M2C_UNK fn_802304C4(s32, s32);
    fn_802304C4(arg1, arg0);
}

void fn_80232C74(u8 *arg0, u8 *arg1) {
    void fn_8016CCF4();
    void fn_800C3B48(s32, s32, void *);
    void fn_80248808(void *);
    void fn_80248784(void *, s32);
    extern s32 lbl_803EB1D8[];
    extern s32 lbl_80494680;

    if (arg1 != NULL) {
        u8 *vt = *(u8 **)(arg1 + 4);
        void *res = (*(void *(**)(void *))(vt + 0x32C))(arg1 + *(s16 *)(vt + 0x328));
        if (res != NULL) {
            s32 *handle;
            fn_8016CCF4(&handle, res);
            fn_800C3B48(handle != NULL ? *handle : 0, -1, arg0 + 0xA8);
            fn_80248808(arg0 + 0xA8);
        } else {
            s32 a = lbl_803EB1D8[0];
            s32 b = lbl_803EB1D8[1];
            *(s32 *)(arg0 + 0xA8) = a;
            *(s32 *)(arg0 + 0xAC) = b;
        }
    } else {
        fn_80248784(arg0 + 0xA8, lbl_80494680);
    }
}

void fn_80232D2C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xA4) = arg1;
}

s32 fn_80232D34(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}

void fn_80232D3C(u8 *arg0) {
    extern u8 lbl_803EB1E0[];
    fn_802324C0(arg0);
    *(void **)(arg0 + 0x5C) = lbl_803EB1E0;
}

void fn_80232D74(u8 *arg0, Struct1A8_5 *arg1) {
    void fn_80234BE8(void *);
    void fn_80232C74(u8 *, u8 *);
    extern s32 lbl_8041FC0C[];
    Struct1B8b saved;

    fn_80232528();
    saved = *(Struct1B8b *)(arg0 + 0x1B8);
    *(Struct1A8_5 *)(arg0 + 0x1A8) = *arg1;
    *(Struct1B8b *)(arg0 + 0x1B8) = saved;
    fn_80234BE8(arg0 + 0x60);
    if (lbl_8041FC0C[0] != 0) {
        fn_80232C74(arg0, 0);
    }
}

void fn_80232E00(u8 *arg0) {
    extern u8 lbl_803EB1F4[];
    fn_802324C0(arg0);
    *(void **)(arg0 + 0x5C) = lbl_803EB1F4;
}

void fn_80232E38(s32 arg0, s32 arg1) {
    M2C_UNK fn_80232528();
    M2C_UNK fn_80232E74(s32, s32);
    fn_80232528();
    fn_80232E74(arg0, arg1);
}

void fn_80232E74(u8 *arg0, Struct1A8_7 *arg1) {
    void fn_80232C74(u8 *, u8 *);
    s32 fn_802337C8(void **, s32, s32);
    extern s32 lbl_8041FC0C[];
    Struct1B8 saved;

    if (arg1 != NULL) {
        saved = *(Struct1B8 *)(arg0 + 0x1B8);
        *(Struct1A8_7 *)(arg0 + 0x1A8) = *arg1;
        *(Struct1B8 *)(arg0 + 0x1B8) = saved;
        if (fn_802337C8((void **)(arg0 + 0x60), *(s32 *)(arg0 + 0x1BC), *(u8 *)(arg0 + 0x1C0)) != 0) {
            if (lbl_8041FC0C[0] != 0) {
                fn_80232C74(arg0, *(u8 **)(arg0 + 0x60));
            }
            fn_80232D2C(arg0, 0);
        }
    }
}

void fn_802333E4(u8 *arg0) {
    void fn_80234BE8(void *);
    extern s32 lbl_80417F18[];
    extern s32 lbl_80417CF0[];
    struct {
        s32 unk0;
        s32 unk4;
        void *vtbl;
    } tmp, *p;
    s32 *cb;

    p = &tmp;
    p->vtbl = lbl_80417F18;
    tmp.unk0 = 3;
    cb = (s32 *)(arg0 + 0x1A8);
    p->unk4 = cb[2];
    ((void (*)(void *))cb[3])(p);
    fn_80234BE8(arg0 + 0x60);
    fn_80232D2C(arg0, 1);
    p->vtbl = lbl_80417CF0;
}

s32 fn_80233460(s32 arg0) {
    return arg0 + 0x60;
}

void fn_80233538(u8 *arg0) {
    void fn_80234C90(void *);
    extern s32 lbl_80417E58[];
    extern s32 lbl_80417CF0[];
    struct {
        s32 unk0;
        s32 unk4;
        void *vtbl;
        s32 unkC;
    } tmp, *p;
    s32 *cb;

    p = &tmp;
    p->vtbl = lbl_80417E58;
    p->unkC = 0;
    tmp.unk0 = 3;
    cb = (s32 *)(arg0 + 0x1A8);
    p->unk4 = cb[2];
    ((void (*)(void *))cb[3])(p);
    fn_80234C90(arg0 + 0x60);
    fn_80232D2C(arg0, 1);
    p->vtbl = lbl_80417CF0;
}

void fn_802335BC(s32 *arg0) {
    struct { s32 a, b, c, d; } tmp;
    s32 *v = arg0 + 5;
    s32 *a = arg0 + 7;

    arg0[0] = 0;
    arg0[1] = 0;
    v[0] = 0;
    v[1] = 0;
    a[1] = 0;
    *(u8 *)(v + 4) = 0;
    arg0[10] = 0;
}

void fn_802335F4(void *arg0, s32 flags) {
    typedef struct { u8 b[6]; } Elem6;
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    Elem6 **v = (Elem6 **)((u8 *)arg0 + 0x14);
    Elem6 *p;

    for (p = v[0]; p != v[1]; p++) {
    }
    if (v[0] != 0) {
        u32 size = (u32)((v[3] - v[0]) * sizeof(Elem6));
        if (size > 0x80) {
            fn_802D20E8(v[0]);
        } else {
            fn_803997AC(v[0], size);
        }
    }
    if (flags & 1) {
        fn_802D20E8(arg0);
    }
}

s32 fn_802337C8(void **arg0, s32 arg1, s32 arg2) {
    void *fn_8022AF24(s32);
    M2C_UNK fn_8023368C(void **, void *, s32);
    M2C_UNK fn_8023397C(void **, s32, void *);
    s32 var_r3;
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;

    var_r3 = 0;
    if ((void *) *arg0 == NULL) {
        temp_r3 = fn_8022AF24(arg1);
        *arg0 = temp_r3;
        if (temp_r3 != NULL) {
            fn_8023368C(arg0, temp_r3, arg2);
            temp_r11 = *arg0;
            temp_r9 = M2C_FIELD(temp_r11, void **, 4);
            fn_8023397C(arg0, M2C_FIELD(temp_r9, s32 (**)(void *), 0x30C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x308)), *arg0);
        }
        var_r3 = 1;
        if ((void *) *arg0 == NULL) {
            var_r3 = 0;
        }
    }
    return var_r3;
}

s32 fn_802346C8(void *arg0, void *arg1) {
    void *obj;
    void *vt;

    if (arg1 == NULL) {
        return 0;
    }
    obj = M2C_FIELD(arg1, void **, 0x4);
    vt = M2C_FIELD(obj, void **, 0x4);
    M2C_FIELD(vt, void (**)(void *), 0xC)((char *)obj + M2C_FIELD(vt, s16 *, 0x8));
    return 1;
}

s32 fn_802348F8(s32 *arg0, s32 arg1, s32 arg2) {
    s32 fn_8022BBF8(s32, s32, s32);
    M2C_UNK fn_80234820(s32 *);
    s32 var_r3;

    var_r3 = 0;
    if ((s32) *arg0 != 0) {
        fn_80234820(arg0);
        var_r3 = fn_8022BBF8(*arg0, arg1, arg2);
    }
    return var_r3;
}

void fn_80234BE8(void *arg0) {
    Struct803EB1D8 t;
    s32 *q;
    char *b = M2C_FIELD(arg0, char **, 0x14);
    char *p = b;
    char **v = (char **)((char *)arg0 + 0x14);

    while (p != v[1]) {
        p += 6;
    }
    v[1] = b;
    q = t.w;
    q[1] = 0;
    t.w[0] = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    q[1] <<= 4;
    t.w[0] <<= 4;
    M2C_FIELD(arg0, Struct803EB1D8 *, 0x2C) = t;
}

s32 fn_80234C5C(void **arg0) {
    extern s32 fn_8022B070(void *);
    void *p = *arg0;
    return p != 0 ? fn_8022B070(p) : 0;
}

s32 fn_80234C90(void *arg0) {
    extern s32 fn_8022AFB8(void *);
    extern void fn_80234618(void *, void *);
    extern s32 lbl_80494424;
    Struct803EB1D8 t;
    s32 *q;
    s32 r = 0;
    void *h = M2C_FIELD(arg0, void **, 0);

    if (h != 0) {
        lbl_80494424 = 1;
        r = fn_8022AFB8(h);
        q = t.w;
        q[1] = 0;
        t.w[0] = -1;
        lbl_80494424 = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s32 *, 0) = 0;
        q[1] <<= 4;
        t.w[0] <<= 4;
        M2C_FIELD(arg0, Struct803EB1D8 *, 0x2C) = t;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        fn_80234618(arg0, (char *)arg0 + 4);
    }
    return r;
}

void fn_80234D3C(void *arg0) {
    extern void fn_80234DCC(void *);
    extern void fn_80235470(void *);
    extern void fn_80234618(void *, void *);
    Struct803EB1D8 t;
    s32 *q;

    fn_80234DCC(arg0);
    fn_80235470(arg0);
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        fn_80234618(arg0, (char *)arg0 + 4);
    }
    q = t.w;
    q[1] = 0;
    t.w[0] = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    q[1] <<= 4;
    t.w[0] <<= 4;
    M2C_FIELD(arg0, Struct803EB1D8 *, 0x2C) = t;
}

void fn_80234DCC(void *arg0) {
    extern s32 lbl_80494424;
    extern void fn_8022BF14(s32, void *);
    void *p = M2C_FIELD(arg0, void **, 0x0);

    if (p != NULL) {
        lbl_80494424 = 1;
        fn_8022BF14(M2C_FIELD(arg0, s16 *, 0x10), p);
        lbl_80494424 = 0;
    }
}

void fn_80234E0C(void *arg0, s32 arg1) {
    extern s32 lbl_80494424;
    extern void fn_8022BF14(s32, void *);
    void *p = M2C_FIELD(arg0, void **, 0x0);

    if (p != NULL) {
        lbl_80494424 = 1;
        fn_8022BF14(arg1, p);
        lbl_80494424 = 0;
    }
}

void fn_8023570C(void **arg0, s32 arg1) {
    void fn_8022C228(void *, s32);
    u8 *obj;
    u8 *vt;

    obj = *arg0;
    if (obj != NULL) {
        vt = *(u8 **)(obj + 4);
        fn_8022C228((*(void *(**)(void *))(vt + 0x4D4))(obj + *(s16 *)(vt + 0x4D0)), arg1);
    }
}

s32 fn_80235760(s32 arg0) {
    return arg0 + 0xA8;
}

void *fn_802323F0(void *);
void fn_80232460(void *, s32);

void *fn_80235768(void *arg0) {
    extern u8 lbl_80417758[];
    extern u8 lbl_80417E70[];
    fn_802323F0(arg0);
    M2C_FIELD(arg0, void **, 0x58) = lbl_80417E70;
    M2C_FIELD(arg0, void **, 0x1B8) = lbl_80417758;
    M2C_FIELD(arg0, s32 *, 0x1A8) = 1;
    return arg0;
}

void fn_802357B8(void *arg0) {
    extern u8 lbl_80417770[];
    extern u8 lbl_80417E70[];
    M2C_FIELD(arg0, void **, 0x58) = lbl_80417E70;
    M2C_FIELD(arg0, void **, 0x1B8) = lbl_80417770;
    ((void (*)(void *))fn_80232460)(arg0);
}

void fn_802357F0(void *arg0) {
    extern u8 lbl_80417770[];
    extern u8 lbl_80417DB0[];
    M2C_FIELD(arg0, void **, 0x58) = lbl_80417DB0;
    M2C_FIELD(arg0, void **, 0x1B8) = lbl_80417770;
    ((void (*)(void *))fn_80232460)(arg0);
}

void fn_80235914(void *arg0, s32 arg1) {
    void fn_80089698(void *, s32);
    void fn_802D20E8(void *);
    extern u8 lbl_80417D08[];
    extern u8 lbl_80417FD8[];
    M2C_FIELD(arg0, void **, 0x58) = lbl_80417FD8;
    fn_80089698((u8 *)arg0 + 0x78, 2);
    M2C_FIELD(arg0, void **, 0x58) = lbl_80417D08;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

extern void fn_80230708(void *, void *);
void fn_80235974(void *arg0) {
    fn_80230708(fn_8022554C(arg0), arg0);
}

extern void fn_80230710(void *, void *);
void fn_802359A8(void *arg0) {
    fn_80230710(fn_8022554C(arg0), arg0);
}

void fn_80236EF4(s32 arg0, s32 arg1) {
    M2C_UNK fn_80230718(s32, s32);
    fn_80230718(arg1, arg0);
}

void fn_80236F20(s32 arg0, s32 arg1) {
    M2C_UNK fn_80230774(s32, s32);
    fn_80230774(arg1, arg0);
}

void fn_80236F4C(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 1;
        return;
    }
    if ((arg1 == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0xEC) != 1)) {
        M2C_FIELD(arg0, s32 *, 0x64) = arg1;
    }
}

void fn_80237044(void *arg0, s32 arg1, f32 arg2) {
    if (arg1 == 7) {
        M2C_FIELD(arg0, f32 *, 0x34) = arg2;
    } else if (arg1 == 8) {
        M2C_FIELD(arg0, f32 *, 0x38) = arg2;
    } else if (arg1 == 0xB) {
        M2C_FIELD(arg0, f32 *, 0x3C) = arg2;
    } else if (arg1 == 0xC) {
        M2C_FIELD(arg0, f32 *, 0x40) = arg2;
    }
}

void fn_80237084(void *arg0) {
    M2C_UNK fn_80223348(void *);
    fn_80223348(arg0);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
}

void fn_80237190(void *arg0, Vec3i *arg1) {
    extern void *fn_8008C46C(s32, u32);
    M2C_UNK fn_8008B140(void *, s32);
    M2C_UNK fn_800101C0(s32, Vec3i *);
    void *p;
    M2C_FIELD(arg0, s32 *, 0x68) = 1;
    p = fn_8008C46C((s32)arg0 + 0x5C, M2C_FIELD(arg0, u32 *, 0));
    if (p != NULL) {
        *(Vec3i *)((char *)p + 0x110) = *arg1;
        *(Vec3i *)p = *arg1;
        fn_8008B140(p, 0);
    }
    *(Vec3i *)((char *)arg0 + 8) = *arg1;
    fn_800101C0(M2C_FIELD(arg0, s32 *, 4), arg1);
}

void fn_8023739C(void *arg0) {
    extern f32 lbl_8041E80C[];
    f32 z = lbl_8041E80C[0];
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, f32 *, 0x60) = z;
}

f32 fn_802373B4(void *arg0) {
    extern f32 fn_8022338C(void *);
    extern void *fn_8008C46C(s32, u32);
    extern f32 lbl_803EB4A8[];
    f32 f = fn_8022338C(arg0);
    if (fn_8008C46C((s32)arg0 + 0x5C, M2C_FIELD(arg0, u32 *, 0)) == NULL) {
        f = lbl_803EB4A8[0];
    }
    return f;
}

s32 fn_8023788C(s32 *arg0) {
    extern char lbl_8041F94C[];
    s32 fn_80049B6C(char *);
    void *fn_80225508(void);
    s32 fn_80225458(void *, s32, s32);
    s32 ret = 1;

    if (fn_80049B6C(lbl_8041F94C) != 0) {
        s32 r;
        if (*arg0 == 1) {
            r = fn_80225458(fn_80225508(), 0, 0);
        } else {
            r = fn_80225458(fn_80225508(), 1, 0);
        }
        if (r == 0) {
            ret = 0;
        }
    }
    return ret;
}

s32 fn_8023790C(s32 *arg0) {
    extern char *lbl_80496648;
    extern const f32 lbl_803EB4BC[];
    s32 fn_8023788C(s32 *);
    char *obj = lbl_80496648;
    void *vt = *(void **) obj;

    if (M2C_FIELD(vt, f32 (**)(void *), 0x14)(obj + M2C_FIELD(vt, s16 *, 0x10)) == lbl_803EB4BC[0]
        && fn_8023788C(arg0) != 0) {
        return 1;
    }
    return 0;
}

s32 fn_80237978(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xEC);
}

M2C_UNK fn_80237980(M2C_UNK arg0, M2C_UNK arg1) {
    extern const f32 lbl_803EB4C0[];
    extern f32 lbl_80436A5C[];
    if (arg1 == 0xFFFF && arg0 != 0) {
        f32 f = lbl_803EB4C0[0];
        lbl_80436A5C[2] = f;
        lbl_80436A5C[1] = f;
        lbl_80436A5C[0] = f;
    }
}

void fn_802379B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
}

void fn_802379C4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
}

s32 fn_802379CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}

void fn_802379D4(void) {
    M2C_UNK fn_80237980(M2C_UNK, M2C_UNK);
    fn_80237980(1, 0xFFFF);
}

