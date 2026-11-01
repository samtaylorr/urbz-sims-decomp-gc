/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } Vec3f;

typedef struct { s32 a; s32 b; } IMSub;
typedef struct { s32 a; s32 b; IMSub c; } IMSlot;

static inline IMSub *IMSub_Init(IMSub *s) {
    s->b = 0;
    return s;
}

static inline IMSlot *IMSlot_Init(IMSlot *s) {
    s->a = 0;
    s->b = 0;
    IMSub_Init(&s->c);
    return s;
}

static inline u32 IMSlot_Size(IMSlot *s) {
    return (s32 *) s->b - (s32 *) s->a;
}

typedef struct { s32 a; s32 b; s32 ctx; void (*fn)(void *); } IMCallback;

static inline s32 *IMEvent_Init(s32 *e) {
    extern void *fn_803B67A0(void *);
    fn_803B67A0(e);
    return e;
}

static inline s32 *IMTimer_Init(s32 *p) {
    extern s32 lbl_804176F8[];
    p[4] = (s32) lbl_804176F8;
    p[0] = 3;
    p[5] = 0;
    p[8] = 0;
    return p;
}

extern void *fn_8022554C(void *);
extern void fn_8022F404(void *, void *);
void *fn_80237A00(void *arg0) {
    extern void fn_8022315C(void *);
    extern s32 lbl_80417710[];
    extern s32 lbl_80418088[];
    s32 *p;

    fn_8022315C(arg0);
    M2C_FIELD(arg0, s32 **, 0x58) = lbl_80418088;
    IMSlot_Init((IMSlot *) ((u8 *) arg0 + 0x74));
    IMSlot_Init((IMSlot *) ((u8 *) arg0 + 0x84));
    IMSlot_Init((IMSlot *) ((u8 *) arg0 + 0x94));
    IMSlot_Init((IMSlot *) ((u8 *) arg0 + 0xA4));
    p = (s32 *) ((u8 *) arg0 + 0xDC);
    p[4] = (s32) lbl_80417710;
    p[0] = 2;
    p[5] = 0;
    p[6] = 0;
    p[9] = 0;
    return arg0;
}

void fn_80237C24(void *arg0) {
    extern void fn_8022EE0C(void *, void *);
    extern f32 lbl_803EB610[];
    extern f32 lbl_803EB614[];
    f32 x, y;
    fn_8022EE0C(fn_8022554C(arg0), arg0);
    x = lbl_803EB610[0];
    y = lbl_803EB614[0];
    M2C_FIELD(arg0, f32 *, 0x50) = x;
    M2C_FIELD(arg0, f32 *, 0x54) = y;
}

void fn_80237C70(void *arg0) {
    fn_8022F404(fn_8022554C(arg0), arg0);
}

s32 fn_80237F80(void *arg0) {
    extern void fn_8022D25C(s32);
    extern void *fn_80225544(void);
    extern void *fn_80224E10(void *, s32);
    extern s32 fn_80232298(void *, void *);
    extern s32 fn_80227D54(s32, u32);
    s32 ret;

    fn_8022D25C(M2C_FIELD(arg0, s32 *, 0));
    ret = (s32) fn_80224E10(fn_80225544(), M2C_FIELD(arg0, s32 *, 0));
    if (M2C_FIELD(arg0, s32 *, 0xF0) != 0) {
        ret = fn_80232298(fn_8022554C((void *) ret), arg0);
        if (ret != 0) {
            ret = fn_80227D54(ret, 0x9B0C648D);
        }
    }
    return ret;
}

M2C_UNK fn_80237FE8(void *self) {
    M2C_UNK fn_8023800C(void *, s32);
    return fn_8023800C(self, 3);
}

void fn_80239684(void *arg0) {
    M2C_UNK fn_80237FE8();
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0xC0);
    temp_r0 = temp_r9 & 1;
    if (temp_r0 != 0) {
        temp_r0_2 = temp_r9 & ~0x45;
        M2C_FIELD(arg0, s32 *, 0xC0) = temp_r0_2;
        if (!(temp_r9 & 0x200)) {
            M2C_FIELD(arg0, s32 *, 0xC0) = (s32) (temp_r0_2 & 0xFFFFFFF7);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xC0) = temp_r0;
        fn_80237FE8();
    }
}

void fn_802396D4(s32 arg0) {
    M2C_UNK fn_8022A394(s32, s32, M2C_UNK);
    fn_8022A394(arg0 + 8, arg0 + 0x20, 2);
}

void fn_802399F8(void *arg0) {
    extern f32 lbl_803EB67C[];

    if (M2C_FIELD(arg0, f32 *, 0x34) != lbl_803EB67C[0] || M2C_FIELD(arg0, f32 *, 0x38) != lbl_803EB67C[0]) {
        if (M2C_FIELD(arg0, u32 *, 0xC0) & 0x400) {
            M2C_FIELD(arg0, u32 *, 0xC0) &= ~0x800;
        } else {
            M2C_FIELD(arg0, u32 *, 0xC0) |= 0xC00;
        }
    } else {
        M2C_FIELD(arg0, u32 *, 0xC0) &= ~0xC00;
    }
}

void fn_80239A4C(void *arg0) {
    IMSlot *slot = (IMSlot *) ((u8 *) arg0 + 0xA4);
    u32 i;

    for (i = 0; i < IMSlot_Size(slot); i++) {
        M2C_FIELD(((void **) slot->a)[i], s32 *, 0x378) = 0;
    }
    slot->b = slot->a;
}

void fn_80239DB8(void *arg0, s32 arg1) {
    extern f32 lbl_803EB688[];

    switch (arg1) {
    case 7:
        M2C_FIELD(arg0, f32 *, 0x34) = lbl_803EB688[0];
        return;
    case 8:
        M2C_FIELD(arg0, f32 *, 0x38) = lbl_803EB688[0];
        return;
    case 11:
        M2C_FIELD(arg0, f32 *, 0x3C) = lbl_803EB688[0];
        return;
    case 12:
        M2C_FIELD(arg0, f32 *, 0x40) = lbl_803EB688[0];
        return;
    case 2:
        M2C_FIELD(arg0, u32 *, 0xC0) &= ~0x10;
        return;
    }
}

void fn_80239E3C(void *arg0, s32 arg1, f32 farg0) {
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

s32 fn_80239E88(void *arg0) {
    s32 flags = M2C_FIELD(arg0, s32 *, 0xC0);
    if (flags & 0x80) {
        return (flags & 0x4) ? 2 : 0;
    }
    return 0;
}

void fn_80239EB0(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022F424(s32, s32);
    fn_8022F424(arg1, arg0);
}

void fn_80239EDC(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022F480(s32, s32);
    fn_8022F480(arg1, arg0);
}

s32 fn_8023B830(void) {
    typedef struct { s16 delta; s16 idx; void (*fn)(void *, s32); } VtEnt;
    extern u8 *lbl_80496658;
    extern u8 *lbl_80496654;
    extern s32 fn_80192850(void *);
    extern void *fn_8039AB24(void *);
    s32 count;
    u8 *list;
    void *node;
    s32 more;

    count = 0;
    {
        VtEnt *e = (VtEnt *)(*(u8 **)lbl_80496658 + 0x100);
        e->fn(lbl_80496658 + e->delta, 0);
    }
    list = lbl_80496654;
    node = M2C_FIELD(M2C_FIELD(list, void **, 4), void **, 8);
    for (;;) {
        more = 1;
        if (node == M2C_FIELD(list, void **, 4)) {
            more = 0;
        }
        if (!more) {
            break;
        }
        {
            void *d = M2C_FIELD(node, void **, 0x14);
            if (M2C_FIELD(d, s32 *, 0x34) != 0 && fn_80192850(d) == 0) {
                count++;
            }
        }
        node = fn_8039AB24(node);
    }
    return count < 20;
}

void fn_8023C194(void *arg0, s32 arg1) {
    extern void *fn_803B67A0(void *);
    extern void fn_803B6674(void *, s32);
    s32 buf[18];
    s32 *e = buf;
    s32 *p;

    fn_803B67A0(e);
    e[4] = arg1;
    e[0] = 5;
    p = (s32 *) ((u8 *) arg0 + 0xDC);
    e[1] = p[2];
    ((void (*)(void *)) p[3])(e);
    fn_803B6674(e, 2);
}

s32 fn_8023C200(void *arg0) {
    s32 ret = 0;
    if (M2C_FIELD(arg0, s32 *, 0xC0) & 1) {
        ret = 1;
    }
    return ret;
}

s32 fn_8023C218(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 7U) & 1;
}

s32 fn_8023C224(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 4U) & 1;
}

s32 fn_8023C230(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 2U) & 1;
}

s32 fn_8023C23C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 3U) & 1;
}

s32 fn_8023C248(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 8U) & 1;
}

s32 fn_8023C254(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 9U) & 1;
}

s32 fn_8023C260(void *arg0) {
    return (M2C_FIELD(arg0, u32 *, 0xC0) & 0x100) ? *M2C_FIELD(arg0, s32 **, 0xD4) : 0;
}

void fn_8023C280(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x5C) = *arg1;
}

void fn_8023C2A0(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x68) = *arg1;
}

s32 fn_8023C2C0(s32 arg0) {
    return arg0 + 0x5C;
}

s32 fn_8023C2C8(s32 arg0) {
    return arg0 + 0x68;
}

f32 fn_8023C2D0(void) {
    extern f32 lbl_80496760;
    return lbl_80496760;
}

f32 fn_8023C2D8(void *arg0) {
    extern f32 lbl_80496764;
    extern f32 lbl_80496768;
    return (M2C_FIELD(arg0, u32 *, 0xC0) & 0x100) ? lbl_80496768 : lbl_80496764;
}

void fn_8023C2F0(void) {

}

void *fn_8023C2F4(void *arg0) {
    extern void fn_8022315C(void *);
    extern s32 lbl_80418148[];
    extern s32 lbl_804176F8[];
    s32 *p;
    s32 pad[2];

    fn_8022315C(arg0);
    M2C_FIELD(arg0, s32 **, 0x58) = lbl_80418148;
    IMSlot_Init((IMSlot *) ((u8 *) arg0 + 0x98));
    p = (s32 *) ((u8 *) arg0 + 0xA8);
    p[4] = (s32) lbl_804176F8;
    p[0] = 3;
    p[5] = 0;
    p[8] = 0;
    return arg0;
}

void fn_8023C410(void *arg0) {
    extern void fn_8022E7B4(void *, void *);
    extern f32 lbl_803EB7D0[];
    extern f32 lbl_803EB7D4[];
    f32 x, y;
    fn_8022E7B4(fn_8022554C(arg0), arg0);
    x = lbl_803EB7D0[0];
    y = lbl_803EB7D4[0];
    M2C_FIELD(arg0, f32 *, 0x50) = x;
    M2C_FIELD(arg0, f32 *, 0x54) = y;
}

extern void fn_8022E84C(void *, void *);
void fn_8023C45C(void *arg0) {
    fn_8022E84C(fn_8022554C(arg0), arg0);
}

void fn_8023C71C(s32 *arg0) {
    M2C_UNK fn_80224E10(M2C_UNK, s32);
    M2C_UNK fn_80225544(void);
    M2C_UNK fn_8022D25C(s32);

    fn_8022D25C(*arg0);
    fn_80224E10(fn_80225544(), *arg0);
}

M2C_UNK fn_8023C758(void *self) {
    M2C_UNK fn_8023C77C(void *, s32);
    return fn_8023C77C(self, 3);
}

void fn_8023CC30(void *arg0) {
    extern char lbl_803EB848[];
    extern void *lbl_80494600;
    M2C_UNK fn_802D1FC8(M2C_UNK);
    void *fn_801D7E6C();
    void fn_801D841C(void *, u32);
    M2C_UNK fn_8023C77C(void *, s32);

    M2C_FIELD(arg0, u32 *, 0x84) = 0;
    ((void (*)(const char *, ...))fn_8023C2F0)(lbl_803EB848);
    if (lbl_80494600 == 0) {
        fn_802D1FC8(0x78);
        lbl_80494600 = fn_801D7E6C();
    }
    fn_801D841C(lbl_80494600, 0x64AC15);
    fn_8023C77C(arg0, 4);
}

void fn_8023CCA8(void *arg0) {
    extern char lbl_803EB854[];
    extern char lbl_803EB878[];

    if (M2C_FIELD(arg0, u32 *, 0x84) & 1) {
        M2C_FIELD(arg0, u32 *, 0x84) &= ~0x41;
        ((void (*)(const char *, ...))fn_8023C2F0)(lbl_803EB854);
    } else {
        M2C_FIELD(arg0, u32 *, 0x84) = 0;
        ((void (*)(const char *, ...))fn_8023C2F0)(lbl_803EB878);
    }
    fn_8023C758(arg0);
}

void fn_8023D260(void *arg0) {
    extern f32 lbl_803EB88C[];

    if (M2C_FIELD(arg0, f32 *, 0x34) != lbl_803EB88C[0] || M2C_FIELD(arg0, f32 *, 0x38) != lbl_803EB88C[0]) {
        if (M2C_FIELD(arg0, u32 *, 0x84) & 0x100) {
            M2C_FIELD(arg0, u32 *, 0x84) &= ~0x200;
        } else {
            M2C_FIELD(arg0, u32 *, 0x84) |= 0x300;
        }
    } else {
        M2C_FIELD(arg0, u32 *, 0x84) &= ~0x300;
    }
}

void fn_8023D840(void *arg0, s32 arg1, f32 farg0) {
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

void fn_8023D88C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022E86C(s32, s32);
    fn_8022E86C(arg1, arg0);
}

void fn_8023D8B8(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022E8C8(s32, s32);
    fn_8022E8C8(arg1, arg0);
}

s32 fn_8023E77C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 8);
}

void fn_8023E850(s32 arg0, s32 arg1) {
    extern f32 lbl_803EB900[];
    extern f32 lbl_803EB904[];
    extern f32 lbl_80495DC4;
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_80495DC4 = lbl_803EB900[0] * lbl_803EB904[0];
    }
}

s32 fn_8023E884(void *arg0) {
    s32 ret = 0;
    if (M2C_FIELD(arg0, s32 *, 0x84) & 1) {
        ret = 1;
    }
    return ret;
}

s32 fn_8023E89C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x84) >> 7U) & 1;
}

s32 fn_8023E8A8(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x84) >> 4U) & 1;
}

s32 fn_8023E8B4(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x84) >> 2U) & 1;
}

s32 fn_8023E8C0(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x84) >> 3U) & 1;
}

f32 fn_8023E8CC(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x80);
}

void fn_8023E8D4(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x5C) = *arg1;
}

void fn_8023E8F4(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x68) = *arg1;
}

void fn_8023E914(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x74) = *arg1;
}

s32 fn_8023E934(s32 arg0) {
    return arg0 + 0x5C;
}

s32 fn_8023E93C(s32 arg0) {
    return arg0 + 0x68;
}

s32 fn_8023E944(s32 arg0) {
    return arg0 + 0x74;
}

f32 fn_8023E94C(void) {
    extern f32 lbl_80496770;
    return lbl_80496770;
}

f32 fn_8023E954(void) {
    extern f32 lbl_80496774;
    return lbl_80496774;
}

void fn_8023E95C(u8 *arg0, Vec3f *arg1) {
    if (!(*(s32 *)(arg0 + 0x84) & 0x1000)) {
        *(Vec3f *)(arg0 + 0x74) = *arg1;
        *(s32 *)(arg0 + 0x84) |= 0x1000;
    }
}

void fn_8023EA08(void) {
    void fn_8023E850(s32, s32);
    fn_8023E850(1, 0xFFFF);
}

