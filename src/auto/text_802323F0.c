/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { s32 w[2]; } Struct803EB1D8;
typedef struct { s32 w[5]; } Struct1A8_5;
typedef struct { s32 w[7]; } Struct1A8_7;
typedef struct { s32 v; } Struct1B8;
typedef struct { u8 b[4]; } Struct1B8b;
typedef struct { s32 w[3]; } Vec3i;

typedef struct {
    s32 unk0;
    s32 unk4;
    void *vtbl;
} Event1A8;

typedef struct {
    s32 pad[2];
    s32 data;
    void (*fn)(Event1A8 *);
} Callback1A8;

static inline void Event1A8_Init(Event1A8 *ev, void *vtbl, Callback1A8 *cb) {
    ev->vtbl = vtbl;
    ev->unk0 = 3;
    ev->unk4 = cb->data;
}
static inline void Callback1A8_Call(Callback1A8 *cb, Event1A8 *ev) {
    ev->unk4 = cb->data;
    cb->fn(ev);
}
typedef struct {
    void **first;
    void **last;
    s32 owns;
} PtrList;

static inline void PtrList_Init(PtrList *l) {
    void fn_802CB8D4(void *);
    l->last = 0;
    l->first = 0;
    l->owns = 1;
    fn_802CB8D4(l);
}

static inline s32 PtrList_IsSingle(PtrList *l) {
    return l->first != 0 && l->first == l->last;
}
typedef struct { f32 x, y, z; } Vec3f;
typedef struct { f32 x, y, z, w; } Vec4f;

static inline void Vec4f_Set(Vec4f *v, f32 x, f32 y, f32 z, f32 w) {
    v->y = y;
    v->z = z;
    v->w = w;
    v->x = x;
}

static inline void Vec3f_Set(Vec3f *v, f32 x, f32 y, f32 z) {
    v->y = y;
    v->z = z;
    v->x = x;
}

static inline Vec3f Vec3f_Make(f32 x, f32 y, f32 z) {
    Vec3f v;
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

typedef struct {
    Event1A8 ev;
    s32 unkC;
} Event1A8C;

static inline Event1A8C *Event1A8C_Ctor(Event1A8C *e, void *vtbl) {
    e->ev.vtbl = vtbl;
    e->unkC = 0;
    return e;
}

static inline void Event1A8C_Send(Event1A8C *e, void *vtbl, Callback1A8 *cb) {
    e->ev.vtbl = vtbl;
    e->unkC = 0;
    e->ev.unk0 = 0;
    e->ev.unk4 = cb->data;
    cb->fn(&e->ev);
}
typedef struct { s16 h[3]; } Elem6;
typedef struct { Elem6 *begin; Elem6 *end; } VecElem6;

static inline void Elem6_Destroy(Elem6 *first, Elem6 *last) {
    for (; first != last; first++) {
    }
}

static inline void VecElem6_Erase(VecElem6 *v, Elem6 *first, Elem6 *last) {
    Elem6_Destroy(first, last);
    v->end = first;
}

static inline void VecElem6_Clear(VecElem6 *v) {
    VecElem6_Erase(v, v->begin, v->end);
}

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

void fn_80232790(void *arg0, s32 arg1) {
    void fn_80233138(u8 *);
    void fn_80232F2C(u8 *);
    void fn_802331F4(u8 *);
    void fn_8023334C(u8 *);
    void fn_802333E4(u8 *);
    M2C_UNK fn_80234E50(void *, M2C_UNK);
    s32 var_r9;

    switch (arg1) {
    case 0:
        var_r9 = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
            var_r9 = 0;
        }
        if (var_r9 != 0) {
            fn_80233138(arg0);
        } else {
            fn_80232F2C(arg0);
        }
        break;
    case 1:
        var_r9 = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
            var_r9 = 0;
        }
        if (var_r9 != 0) {
            fn_802331F4(arg0);
        }
        break;
    case 4:
        var_r9 = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
            var_r9 = 0;
        }
        if (var_r9 != 0) {
            fn_8023334C(arg0);
        } else {
            fn_802333E4(arg0);
        }
        break;
    case 5:
        fn_80234E50(arg0 + 0x60, 1);
        break;
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
    void fn_80232528(u8 *, Struct1A8_5 *);
    void fn_80234BE8(void *);
    void fn_80232C74(u8 *, u8 *);
    extern s32 lbl_8041FC0C[];
    s16 saved[2];

    fn_80232528(arg0, arg1);
    *(s32 *)saved = *(s32 *)(arg0 + 0x1B8);
    *(Struct1A8_5 *)(arg0 + 0x1A8) = *arg1;
    *(s32 *)(arg0 + 0x1B8) = *(s32 *)saved;
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
    typedef union { s32 i; f32 f; } U1B8;
    void fn_80232C74(u8 *, u8 *);
    s32 fn_802337C8(void **, s32, s32);
    extern s32 lbl_8041FC0C[];
    U1B8 saved;

    if (arg1 != NULL) {
        saved = *(U1B8 *)(arg0 + 0x1B8);
        *(Struct1A8_7 *)(arg0 + 0x1A8) = *arg1;
        *(U1B8 *)(arg0 + 0x1B8) = saved;
        if (fn_802337C8((void **)(arg0 + 0x60), *(s32 *)(arg0 + 0x1BC), *(u8 *)(arg0 + 0x1C0)) != 0) {
            if (lbl_8041FC0C[0] != 0) {
                fn_80232C74(arg0, *(u8 **)(arg0 + 0x60));
            }
            fn_80232D2C(arg0, 0);
        }
    }
}

void fn_80232F2C(void *arg0) {
    typedef struct {
        void **first;
        void **last;
        s32 owns;
        s32 pad;
    } List3;
    extern void *lbl_8041FA38[];
    extern char *lbl_8041F770[];
    void fn_802CB8D4(void *);
    void fn_800643BC(void *, s32, void *);
    void *fn_80065AD4(void *);
    void fn_801FF614(void *, void *);
    void fn_80233024();
    List3 list;
    List3 *p = &list;
    List3 *lp;
    void *obj;
    void *vt;

    p->last = 0;
    list.first = 0;
    p->owns = 1;
    fn_802CB8D4(p);
    lp = p;
    fn_800643BC(M2C_FIELD(lbl_8041FA38[0], void **, 4), M2C_FIELD(arg0, s32 *, 0), p);
    if (list.first != 0 && list.first == lp->last) {
        obj = fn_80065AD4(*list.first);
        vt = M2C_FIELD(obj, void **, 4);
        fn_80233024(arg0,
            M2C_FIELD(vt, void *(**)(void *), 0x2EC)((char *)obj + M2C_FIELD(vt, s16 *, 0x2E8)));
    } else if (list.first != 0) {
        vt = M2C_FIELD(arg0, void **, 0x58);
        M2C_FIELD(vt, void (**)(void *), 0x74)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x70));
        fn_801FF614(((void **)(lbl_8041F770[0] + 0x12C))[M2C_FIELD(arg0, s32 *, 0)], lp);
    }
    fn_802CB8D4(lp);
}

void fn_80233024(u8 *arg0) {
    void fn_80232C74(u8 *, u8 *);
    s32 fn_80233868(void *);
    extern s32 lbl_8041FC0C[];
    extern void *lbl_80494600;
    void fn_802D1FC8(s32);
    void *fn_801D7E6C();
    void fn_801D841C(void *, u32);

    if (fn_80233868(arg0 + 0x60) != 0) {
        if (lbl_8041FC0C[0] != 0) {
            fn_80232C74(arg0, *(u8 **)(arg0 + 0x60));
        }
        fn_80232D2C(arg0, 0);
        if (lbl_80494600 == 0) {
            fn_802D1FC8(0x78);
            lbl_80494600 = fn_801D7E6C();
        }
        fn_801D841C(lbl_80494600, 0x66DEDE72);
    } else {
        if (lbl_80494600 == 0) {
            fn_802D1FC8(0x78);
            lbl_80494600 = fn_801D7E6C();
        }
        fn_801D841C(lbl_80494600, 0x6E2778B7);
    }
}

void fn_802330E0(u8 *arg0) {
    void fn_80234C90(void *);
    void fn_80232C74(u8 *, u8 *);
    extern s32 lbl_8041FC0C[];

    fn_80234C90(arg0 + 0x60);
    fn_80232D2C(arg0, 1);
    if (lbl_8041FC0C[0] != 0) {
        fn_80232C74(arg0, 0);
    }
}

void fn_80233138(u8 *arg0) {
    void fn_80232C74(u8 *, u8 *);
    s32 fn_80234AF4(void *);
    extern s32 lbl_8041FC0C[];
    extern s32 lbl_80417F18[];
    extern s32 lbl_80417CF0[];
    struct {
        s32 unk0;
        s32 unk4;
        void *vtbl;
        s32 unkC[3];
    } tmp, *p;
    struct {
        s32 unk0;
        s32 unk4;
        s32 arg;
        void (*fn)(void *);
    } *cb;
    s32 *dvt;
    s32 *h = (s32 *)(arg0 + 0x60);
    s32 ok;

    ok = 1;
    if (*h == 0) {
        ok = 0;
    }
    if (ok && fn_80234AF4(h)) {
        p = &tmp;
        p->vtbl = lbl_80417F18;
        tmp.unk0 = 0;
        cb = (void *)(arg0 + 0x1A8);
        dvt = lbl_80417CF0;
        p->unk4 = cb->arg;
        cb->fn(p);
        if (lbl_8041FC0C[0] != 0) {
            fn_80232C74(arg0, 0);
        }
        fn_80232D2C(arg0, 1);
        p->vtbl = dvt;
    }
}

void fn_8023334C(u8 *arg0) {
    void fn_80234D3C(void *);
    void fn_80232C74(u8 *, u8 *);
    extern s32 lbl_8041FC0C[];
    extern s32 lbl_80417F18[];
    extern s32 lbl_80417CF0[];
    struct {
        Event1A8 ev;
        s32 pad[2];
    } tmp;
    Event1A8 *p = &tmp.ev;
    void *vt;

    p->vtbl = lbl_80417F18;
    tmp.ev.unk0 = 1;
    vt = lbl_80417CF0;
    Callback1A8_Call((Callback1A8 *)(arg0 + 0x1A8), p);
    fn_80234D3C(arg0 + 0x60);
    fn_80232D2C(arg0, 1);
    if (lbl_8041FC0C[0] != 0) {
        fn_80232C74(arg0, 0);
    }
    p->vtbl = vt;
}

void fn_802333E4(u8 *arg0) {
    void fn_80234BE8(void *);
    extern s32 lbl_80417F18[];
    extern s32 lbl_80417CF0[];
    struct {
        Event1A8 ev;
        s32 unkC[3];
    } tmp;
    Event1A8 *p;
    s32 *dvt = lbl_80417CF0;
    Callback1A8 *cb;

    p = &tmp.ev;
    Event1A8_Init(p, lbl_80417F18, (Callback1A8 *)(arg0 + 0x1A8));
    cb = (Callback1A8 *)(arg0 + 0x1A8);
    cb->fn(p);
    fn_80234BE8(arg0 + 0x60);
    fn_80232D2C(arg0, 1);
    p->vtbl = dvt;
}

s32 fn_80233460(s32 arg0) {
    return arg0 + 0x60;
}

void fn_80233468(u8 *arg0) {
    s32 fn_80234AF4(void *);
    extern s32 lbl_80417E58[];
    extern s32 lbl_80417CF0[];
    Event1A8C tmp;
    Event1A8C *p;
    s32 *cb;
    u8 *obj = *(u8 **)(arg0 + 0x60);

    if (fn_80234AF4(arg0 + 0x60) == 1) {
        if (obj != NULL) {
            u8 *vt = *(u8 **)(obj + 4);
            (*(void (**)(void *, s32))(vt + 0x42C))(obj + *(s16 *)(vt + 0x428), 1);
        }
        p = Event1A8C_Ctor(&tmp, lbl_80417E58);
        tmp.ev.unk0 = 0;
        cb = (s32 *)(arg0 + 0x1A8);
        p->ev.unk4 = cb[2];
        ((void (*)(Event1A8 *))cb[3])(&p->ev);
        if (tmp.unkC != 0) {
            fn_80232E74(arg0, (Struct1A8_7 *)cb);
        } else {
            fn_80232D2C(arg0, 1);
        }
        p->ev.vtbl = lbl_80417CF0;
    }
}

void fn_80233538(u8 *arg0) {
    void fn_80234C90(void *);
    extern s32 lbl_80417E58[];
    extern s32 lbl_80417CF0[];
    struct {
        Event1A8 ev;
        s32 unkC;
    } tmp, *p;
    s32 *dvt = lbl_80417CF0;
    Callback1A8 *cb;

    p = &tmp;
    p->ev.vtbl = lbl_80417E58;
    p->unkC = 0;
    Event1A8_Init(&p->ev, lbl_80417E58, (Callback1A8 *)(arg0 + 0x1A8));
    cb = (Callback1A8 *)(arg0 + 0x1A8);
    cb->fn(&p->ev);
    fn_80234C90(arg0 + 0x60);
    fn_80232D2C(arg0, 1);
    p->ev.vtbl = dvt;
}

s32 *fn_802335BC(s32 *arg0) {
    struct { s32 w[6]; } tmp;
    s32 *v;
    s32 *a;

    arg0[0] = 0;
    v = arg0 + 5;
    arg0[1] = 0;
    a = arg0 + 7;
    arg0[5] = 0;
    v[1] = 0;
    a[1] = 0;
    *(u8 *)(v + 4) = 0;
    arg0[10] = 0;
    return arg0;
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

void fn_80234618(void *arg0, void *arg1) {
    extern char *lbl_80496668;
    void ***h = (void ***)arg1;

    if (*h != NULL) {
        void *obj = M2C_FIELD(**h, void **, 0x4);
        void *vt = M2C_FIELD(obj, void **, 0x4);
        char *g = lbl_80496668;
        char *ent = *(char **)g + 0x58;
        Elem6 *first;

        M2C_FIELD(ent, void (**)(void *, void *), 0x4)(g + *(s16 *)ent,
            M2C_FIELD(vt, void *(**)(void *), 0x2EC)((char *)obj + M2C_FIELD(vt, s16 *, 0x2E8)));
        first = M2C_FIELD(arg0, Elem6 **, 0x14);
        VecElem6_Erase((VecElem6 *)((char *)arg0 + 0x14), first, M2C_FIELD(arg0, Elem6 **, 0x18));
        *h = NULL;
    }
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

void fn_80234820(s32 *arg0) {
    extern s32 lbl_80494424;

    if (arg0[0] != 0) {
        char *obj = (char *)arg0[0];
        char *vt = M2C_FIELD(obj, char **, 4);
        if ((*(s32 (**)(void *))(vt + 0x174))(obj + *(s16 *)(vt + 0x170)) != 0) {
            char *obj2 = (char *)arg0[0];
            char *vt2;
            lbl_80494424 = 1;
            vt2 = M2C_FIELD(obj2, char **, 4);
            (*(void (**)(void *))(vt2 + 0xF4))(obj2 + *(s16 *)(vt2 + 0xF0));
            lbl_80494424 = 0;
        }
    }
    if (arg0[1] != 0) {
        char *obj = M2C_FIELD(*(void **)arg0[1], char **, 4);
        char *vt = M2C_FIELD(obj, char **, 4);
        if ((*(s32 (**)(void *))(vt + 0x174))(obj + *(s16 *)(vt + 0x170)) != 0) {
            char *obj2 = *M2C_FIELD(arg0[1], char ***, 4);
            char *vt2 = M2C_FIELD(obj2, char **, 4);
            (*(void (**)(void *))(vt2 + 0xF4))(obj2 + *(s16 *)(vt2 + 0xF0));
        }
    }
}

s32 fn_802348F8(s32 *arg0, s32 arg1, s32 arg2) {
    s32 fn_8022BBF8(s32, s32, s32);
    void fn_80234820(s32 *);
    s32 var_r3;

    var_r3 = 0;
    if ((s32) *arg0 != 0) {
        fn_80234820(arg0);
        var_r3 = fn_8022BBF8(*arg0, arg1, arg2);
    }
    return var_r3;
}

s32 fn_80234AF4(void *arg0) {
    extern s32 fn_8022BC94(void *);
    extern void fn_80234618(void *, void *);
    extern void *lbl_80494600;
    void fn_802D1FC8(s32);
    void *fn_801D7E6C();
    void fn_801D841C(void *, u32);
    Struct803EB1D8 t;
    s32 *q;
    void *h = M2C_FIELD(arg0, void **, 0);

    if (h != 0 && fn_8022BC94(h) == 1) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
        fn_80234618(arg0, (char *)arg0 + 4);
        if (lbl_80494600 == 0) {
            fn_802D1FC8(0x78);
            lbl_80494600 = fn_801D7E6C();
        }
        fn_801D841C(lbl_80494600, 0x80E1A9CD);
        q = t.w;
        q[1] = 0;
        t.w[0] = -1;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        q[1] <<= 4;
        t.w[0] <<= 4;
        M2C_FIELD(arg0, Struct803EB1D8 *, 0x2C) = t;
        return 1;
    }
    if (lbl_80494600 == 0) {
        fn_802D1FC8(0x78);
        lbl_80494600 = fn_801D7E6C();
    }
    fn_801D841C(lbl_80494600, 0x6E2778B7);
    return 0;
}

void fn_80234BE8(void *arg0) {
    typedef struct {
        s16 v[3];
    } Elem6;
    typedef struct {
        Elem6 *begin;
        Elem6 *end;
    } Vec6;
    Struct803EB1D8 t;
    s32 *q;
    Elem6 *b = M2C_FIELD(arg0, Elem6 **, 0x14);
    Vec6 *v = (Vec6 *)((char *)arg0 + 0x14);
    Elem6 *p = b;

    while (p != v->end) {
        p++;
    }
    v->end = b;
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
        s32 id = M2C_FIELD(arg0, s16 *, 0x10);
        lbl_80494424 = 1;
        fn_8022BF14(id, p);
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

void fn_80235828(u8 *arg0) {
    void fn_8022315C(void *);
    void fn_80089650(void *);
    extern u8 lbl_80417FD8[];
    extern f32 lbl_803EB41C[];
    extern f32 lbl_803EB420[];
    f32 zero;
    Vec3f t;

    fn_8022315C(arg0);
    zero = lbl_803EB41C[0];
    M2C_FIELD(arg0, void **, 0x58) = lbl_80417FD8;
    M2C_FIELD(arg0, f32 *, 0x60) = zero;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    fn_80089650(arg0 + 0x78);
    Vec4f_Set((Vec4f *)(arg0 + 0xA8), zero, zero, zero, lbl_803EB420[0]);
    t.x = zero;
    t.y = zero;
    t.z = zero;
    *(Vec3f *)(arg0 + 0xC4) = t;
    *(Vec3f *)(arg0 + 0xB8) = *(Vec3f *)(arg0 + 0xC4);
    Vec3f_Set((Vec3f *)(arg0 + 0xD0), zero, zero, zero);
    Vec3f_Set((Vec3f *)(arg0 + 0xDC), zero, zero, zero);
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
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

void fn_80235B7C(u32 *arg0) {
    M2C_UNK fn_80224E10(M2C_UNK, s32);
    M2C_UNK fn_80225544(void);
    extern void *fn_8008C46C(s32, u32);
    M2C_UNK fn_8008B140(void *, s32);
    void *p;

    fn_80224E10(fn_80225544(), *arg0);
    p = fn_8008C46C((s32)arg0 + 0x5C, *arg0);
    if (p != NULL) {
        fn_8008B140(p, 3);
    }
}

void fn_80235BCC(u8 *arg0) {
    extern f32 lbl_8041E804[];

    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    if (__builtin_fabsf(M2C_FIELD(arg0, f32 *, 0x34)) < lbl_8041E804[0] &&
        __builtin_fabsf(M2C_FIELD(arg0, f32 *, 0x38)) < lbl_8041E804[0]) {
        M2C_FIELD(arg0, s32 *, 0x44) = 1;
    }
    if (__builtin_fabsf(M2C_FIELD(arg0, f32 *, 0x3C)) < lbl_8041E804[0] &&
        __builtin_fabsf(M2C_FIELD(arg0, f32 *, 0x40)) < lbl_8041E804[0]) {
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
    }
}

void fn_80236E98(u8 *arg0, f32 *arg1) {
    extern f32 *fn_8022B564(s32);
    f32 *p = fn_8022B564(M2C_FIELD(arg0, s32 *, 0));
    s32 a, b;

    if (p != NULL) {
        arg1[0] = p[0];
        arg1[1] = p[1];
    }
    a = M2C_FIELD(arg0, s32 *, 0x50);
    b = M2C_FIELD(arg0, s32 *, 0x54);
    M2C_FIELD(arg1, s32 *, 0xC) = b;
    M2C_FIELD(arg1, s32 *, 0x8) = a;
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

void fn_80236F7C(char *self, s32 arg1) {
    extern const f32 lbl_803EB49C[];
    if (arg1 == 0) {
        char *vt;
        *(s32 *)(self + 0x30) = arg1;
        if (*(s32 *)(self + 0xEC) == 1) {
            *(s32 *)(self + 0xEC) = arg1;
        }
        vt = *(char **)(self + 0x58);
        (*(void (**)(void *))(vt + 0xA4))(self + *(s16 *)(vt + 0xA0));
    } else if (arg1 == 1) {
        *(s32 *)(self + 0x64) = 0;
    } else if (arg1 == 7) {
        *(f32 *)(self + 0x34) = lbl_803EB49C[0];
    } else if (arg1 == 8) {
        *(f32 *)(self + 0x38) = lbl_803EB49C[0];
    } else if (arg1 == 11) {
        *(f32 *)(self + 0x3C) = lbl_803EB49C[0];
    } else if (arg1 == 12) {
        *(f32 *)(self + 0x40) = lbl_803EB49C[0];
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

void fn_802370C0(u8 *self) {
    extern struct { u8 pad[0xD8]; u8 *arr[1]; } lbl_8041F94C;
    extern f32 lbl_803EB4A0[];
    u8 *fn_8008C46C(void *, s32);
    void fn_8008B284(u8 *, s32);
    void fn_8008C830(void *, s32, void *);
    u8 *list = self + 0x5C;
    u8 *obj = fn_8008C46C(list, *(s32 *)self);
    u8 *o;
    u8 *vt;
    u8 *r;

    if (obj != NULL) {
        fn_8008B284(obj, *(s32 *)(self + 0x6C));
        *(s32 *)(obj + 0x14C) |= 1;
        o = lbl_8041F94C.arr[*(s32 *)self];
        vt = *(u8 **)(o + 4);
        (*(void (**)(void *, s32, s32))(vt + 0x114))(o + *(s16 *)(vt + 0x110), 0x24, 0x32);
        o = lbl_8041F94C.arr[*(s32 *)self];
        vt = *(u8 **)(o + 4);
        r = (*(u8 *(**)(void *))(vt + 0x14C))(o + *(s16 *)(vt + 0x148));
        *(f32 *)(r + 0xFC) = lbl_803EB4A0[0];
        fn_8008C830(list, *(s32 *)self, list);
    }
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

