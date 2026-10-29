/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    void *node;
    u8 inserted;
    u8 pad[3];
} CasPair;

void fn_803074F0(void);
s32 fn_801B68E8(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801B7920(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xC);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 4) != 0) {
        M2C_FIELD(temp_r9, s32 *, 4) = 0;
    }
}

void fn_801B793C(void) {

}

void fn_801B7940(void) {

}

void fn_801B7C94(void) {

}

typedef struct { s16 delta; s16 idx; s32 (*fn)(void *, s32); } CasVtEnt2;

extern u8 *lbl_80496654;
extern void fn_801910C8(void *, s32, u16 **, void *, void *, void *);
typedef struct { void *a; u8 *cur; s32 b; s32 c; } CasIter;

static inline CasIter *CasIter_begin(CasIter *p, void *list) {
    extern void fn_80151048(void *, void *, s32);
    fn_80151048(p, list, 0);
    return p;
}

static inline u8 *CasIter_cur(CasIter *it) {
    return it->cur;
}

s32 fn_801B7C98(void *arg0, void *arg1, s32 arg2) {
    typedef struct { s16 delta; s16 idx; s32 (*fn)(void *); } VtEnt;
    extern u8 *lbl_80496658;
    extern void fn_80151110(void *);
    CasIter iter;
    CasIter *p;
    VtEnt *e;
    CasVtEnt2 *e2;

    e = (VtEnt *)(*(u8 **)lbl_80496658 + 0xE8);
    if ((e->fn(lbl_80496658 + e->delta) & 0x21) != 1) {
        return 0;
    }
    if (arg2 != 0) {
        CasIter_begin(&iter, arg1);
        if (iter.cur != NULL) {
            p = &iter;
            do {
                e2 = (CasVtEnt2 *)(*(u8 **)(p->cur + 4) + 0x220);
                if ((e2->fn(p->cur + e2->delta, 0x2A) ^ 1) & 1) {
                    return 0;
                }
                fn_80151110(p);
            } while (p->cur != NULL);
        }
    }
    return 1;
}

extern s32 fn_801A09E0(void *);
extern s32 fn_801A08DC(void *, s32);
extern s8 fn_80105B78(void *);
extern s8 fn_80105B84(void *);
extern void fn_80105574(s8 *, s32, s32, s8);
extern void fn_801055FC(void *, s32);
extern s32 fn_801927E4(void *, void *);
void fn_801B7F04(void *self, void *room, void *pos, void *obj, s32 *out1, s32 *out2) {
    typedef struct { s8 x; s8 y; s8 z; } Tile;
    Tile tile;
    s32 a;
    s32 b;

    *out1 = 0;
    *out2 = 0;
    if (fn_801A09E0(obj) != 0) {
        fn_80105574((s8 *)&tile, fn_80105B78(pos) - 1, fn_80105B84(pos), 1);
        a = fn_801927E4(room, &tile);
        fn_801055FC(&tile, 2);
        fn_80105574((s8 *)&tile, fn_80105B78(pos) + 1, fn_80105B84(pos), 1);
        b = fn_801927E4(room, &tile);
        fn_801055FC(&tile, 2);
        if (a != 0) {
            if (fn_801A08DC(obj, 0x10) != 0) {
                *out1 = 2;
            } else {
                *out1 = 1;
            }
        }
        if (b != 0) {
            if (fn_801A08DC(obj, 0x10) != 0) {
                *out2 = 4;
            } else {
                *out2 = 3;
            }
        }
    }
}

void fn_801B8424(void) {

}

void fn_801B8614(void) {

}

void fn_801B8618(void) {

}

s32 fn_801B872C(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801B9CB8(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xC);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 4) != 0) {
        M2C_FIELD(temp_r9, s32 *, 4) = 0;
    }
}

void fn_801B9CD4(void) {

}

void fn_801B9CD8(void) {

}

void fn_801B9CDC(void) {

}

s32 fn_801BA094(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) != 0;
}

s32 fn_801BB33C(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801BB5CC(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xC);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 4) != 0) {
        M2C_FIELD(temp_r9, s32 *, 4) = 0;
    }
}

void fn_801BB5E8(void) {

}

void fn_801BB5EC(void) {

}

void fn_801BB5F0(void) {

}

s32 fn_801BB774(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801BB8D8(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xC);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 4) != 0) {
        M2C_FIELD(temp_r9, s32 *, 4) = 0;
    }
}

void fn_801BB8F4(void) {

}

void fn_801BB8F8(void) {

}

void fn_801BB92C(void) {

}

s32 fn_801BB930(void) {
    return 0;
}

s32 fn_801BBAB0(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801BBFB0(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xC);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 4) != 0) {
        M2C_FIELD(temp_r9, s32 *, 4) = 0;
    }
}

void fn_801BBFCC(void) {

}

void fn_801BBFD0(void) {

}

s32 fn_801BC084(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) & 1;
}

s32 fn_801BD6CC(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return temp_r0;
}

s32 fn_801BD6DC(s32 arg0) {
    typedef struct { s16 delta; s16 idx; s32 (*fn)(void *, s32); } VtEnt;
    typedef struct { s16 delta; s16 idx; void (*fn)(void *, void *, s32); } VtEnt2;
    extern u8 *lbl_80496658;
    extern void fn_801910C8(void *, s32, u16 **, void *, void *, void *);
    extern s32 fn_801A08DC(void *, s32);
    extern void fn_801A0858(void *, s32);
    u16 *a;
    s32 b;
    s32 c;
    s32 d;
    u8 buf[0x38];
    s32 ret;
    u8 *obj = lbl_80496658;

    {
        VtEnt *e = (VtEnt *)(*(u8 **)obj + 0xD8);
        ret = e->fn(obj + e->delta, arg0);
    }
    if (lbl_80496654 == NULL) {
        return 0;
    }
    if (ret == 0xFFFB) {
        s32 id = arg0;
        fn_801910C8(lbl_80496654, id, &a, &b, &c, &d);
        {
            VtEnt2 *e = (VtEnt2 *)(*(u8 **)obj + 0xA8);
            e->fn(buf, obj + e->delta, arg0);
        }
        if (fn_801A08DC(buf, 0x20) == 0) {
            fn_801A08DC(buf, 0x10);
        }
        ret = *a;
        fn_801A0858(buf, 2);
    }
    return ret;
}

void *fn_801BF5A4(void *arg0, s32 arg1) {
    extern u8 lbl_80415E78[];
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 4) = lbl_80415E78;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return arg0;
}

void fn_801BF5C4(void *self, s32 flags) {
    extern u8 lbl_80406CE0[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(self, void **, 4) = lbl_80406CE0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_801BF5F8(void *arg0, s32 arg1) {
    extern void fn_801BFFB4(s32, s32);
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    fn_801BFFB4(M2C_FIELD(arg0, s32 *, 8), arg1);
}

void fn_801BF628(void) {

}

void *fn_801BF62C(void *arg0, s32 arg1, s32 arg2) {
    extern void fn_8030728C(void *);
    extern u8 lbl_80415DF0[];
    fn_8030728C(arg0);
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x38) = arg2;
    M2C_FIELD(arg0, void **, 0x44) = lbl_80415DF0;
    return arg0;
}

void fn_801BF678(void *arg0) {
    extern void fn_80307364(void *);
    extern u8 lbl_80415DF0[];
    M2C_FIELD(arg0, void **, 0x44) = lbl_80415DF0;
    fn_80307364(arg0);
}

void fn_801BF6A8(void *arg0) {
    M2C_UNK fn_801C0124(s32);
    fn_801C0124(M2C_FIELD(arg0, s32 *, 0x48));
}

void fn_801BF6CC(void *arg0) {
    M2C_UNK fn_801C019C(s32);
    fn_801C019C(M2C_FIELD(arg0, s32 *, 0x48));
}

void fn_801BF6F0(void *arg0) {
    M2C_UNK fn_801C01A0(s32);
    fn_801C01A0(M2C_FIELD(arg0, s32 *, 0x48));
}

void fn_801BF714(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | arg1);
}

void fn_801BF724(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) & ~arg1);
}

void fn_801BF734(void *arg0, s32 arg1, s32 arg2) {
    void *vt;

    vt = M2C_FIELD(arg0, void **, 0x44);
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x54))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x50));
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) |= arg1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) &= ~arg1;
    }
}

void fn_801BF79C(void) {
    fn_803074F0();
}

s32 fn_801BF7BC(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 1U) & 1;
}

void fn_801BF7C8(void) {
    typedef struct { s16 delta; s16 idx; void (*fn)(void *); } VtEnt;
    typedef struct { u8 pad[0x44]; VtEnt *vt; } Obj;
    extern Obj *lbl_8041FA44[];
    Obj *obj = lbl_8041FA44[0];
    VtEnt *e = (VtEnt *)((u8 *)obj->vt + 0x38);
    e->fn((u8 *)obj + e->delta);
}

void fn_801BF804(void *arg0, s32 arg1, s32 arg2) {
    extern void fn_80311404(void *, s32, s32, s32, s32);
    extern s32 fn_80311A4C(void *, s32);
    extern s32 fn_80311ABC(void *, s32);
    extern void *fn_803338D0(void *, s32);
    extern s32 fn_803338F0(void *, s32);
    extern void *lbl_80494FCC;
    void *mgr;
    void *res;
    s32 a;

    mgr = lbl_80494FCC;
    res = fn_803338D0(mgr, fn_803338F0(mgr, M2C_FIELD(arg0, s32 *, 0x38)));
    a = fn_80311ABC(res, arg2);
    fn_80311404(res, arg1, a, fn_80311A4C(res, arg2), 0);
}

void fn_801BF884(void *arg0, s32 arg1, s32 arg2) {
    extern void fn_80311404(void *, s32, s32, s32, s32);
    extern s32 fn_80311A4C(void *, s32);
    extern s32 fn_80311A4C(void *, s32);
    extern void *fn_803338D0(void *, s32);
    extern s32 fn_803338F0(void *, s32);
    extern void *lbl_80494FCC;
    void *mgr;
    void *res;
    s32 a;

    mgr = lbl_80494FCC;
    res = fn_803338D0(mgr, fn_803338F0(mgr, M2C_FIELD(arg0, s32 *, 0x38)));
    a = fn_80311A4C(res, arg2);
    fn_80311404(res, arg1, a, fn_80311A4C(res, arg2), 0);
}

void fn_801BF904(void *arg0, s32 arg1, s32 arg2) {
    extern void fn_80311404(void *, s32, s32, s32, s32);
    extern s32 fn_80311A4C(void *, s32);
    extern s32 fn_80311ABC(void *, s32);
    extern void *fn_803338D0(void *, s32);
    extern s32 fn_803338F0(void *, s32);
    extern void *lbl_80494FCC;
    void *mgr;
    void *res;
    s32 a;

    mgr = lbl_80494FCC;
    res = fn_803338D0(mgr, fn_803338F0(mgr, M2C_FIELD(arg0, s32 *, 0x38)));
    a = fn_80311ABC(res, arg2);
    fn_80311404(res, arg1, a, fn_80311A4C(res, arg2), 1);
}

void fn_801BF984(void *arg0, s32 arg1, s32 arg2) {
    extern void fn_80311404(void *, s32, s32, s32, s32);
    extern s32 fn_80311A84(void *, s32);
    extern s32 fn_80311AF4(void *, s32);
    extern void *fn_803338D0(void *, s32);
    extern s32 fn_803338F0(void *, s32);
    extern void *lbl_80494FCC;
    void *mgr;
    void *res;
    s32 a;

    mgr = lbl_80494FCC;
    res = fn_803338D0(mgr, fn_803338F0(mgr, M2C_FIELD(arg0, s32 *, 0x38)));
    a = fn_80311AF4(res, arg2);
    fn_80311404(res, arg1, a, fn_80311A84(res, arg2), 1);
}

void fn_801BFA04(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern void fn_80310FFC(void *, s32, s32, s32);
    extern void *fn_803338D0(void *, s32);
    extern s32 fn_803338F0(void *, s32);
    extern void *lbl_80494FCC;
    void *mgr;

    mgr = lbl_80494FCC;
    fn_80310FFC(fn_803338D0(mgr, fn_803338F0(mgr, M2C_FIELD(arg0, s32 *, 0x38))), arg1, arg2, arg3);
}

void fn_801BFA64(void *arg0, s32 arg1, s32 arg2) {
    extern void fn_803110C8(void *, s32, s32, s32);
    extern void *fn_803338D0(void *, s32);
    extern s32 fn_803338F0(void *, s32);
    extern void *lbl_80494FCC;
    void *mgr;

    mgr = lbl_80494FCC;
    fn_803110C8(fn_803338D0(mgr, fn_803338F0(mgr, M2C_FIELD(arg0, s32 *, 0x38))), arg1, arg2, 0);
}

s32 fn_801BFD60(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x38);
}

s32 fn_801BFD6C(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_801BFD74(s32 *self) {
    return self[6];
}

s32 fn_801BFD7C(s32 *self) {
    return self[7];
}

s32 fn_801BFD84(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {                              /* irregular */
    case 0:
        return M2C_FIELD(arg0, s32 *, 0);
    case 1:
        return M2C_FIELD(arg0, s32 *, 4);
    case 2:
        return M2C_FIELD(arg0, s32 *, 8);
    case 3:
        return M2C_FIELD(arg0, s32 *, 0xC);
    case 4:
        return M2C_FIELD(arg0, s32 *, 0x10);
    case 5:
        return M2C_FIELD(arg0, s32 *, 0x14);
    default:
        return M2C_FIELD(arg0, s32 *, 0);
    }
}

void fn_801C0120(void) {

}

void fn_801C019C(void) {

}

s32 fn_801C02BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

s32 fn_801C031C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_801C04DC(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801C0880(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xC);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 4) != 0) {
        M2C_FIELD(temp_r9, s32 *, 4) = 0;
    }
}

void fn_801C089C(void) {

}

void fn_801C08A0(void **arg0) {
    extern s32 fn_80049B6C(void *);
    extern u8 lbl_8041F94C[];
    if (fn_801BFD60(*arg0) != 1 || fn_80049B6C(lbl_8041F94C) != 0) {
        if (fn_801BF7BC((void *)fn_801BFD7C(*arg0)) != 0) {
            fn_801BFD6C(*arg0);
        }
    }
}

void fn_801C0908(void *arg0) {
    extern s32 fn_801051C8(s32, s32);
    extern void fn_8031EA2C(void *);
    s32 on = 1;
    fn_801051C8(0x91, 0);
    fn_801051C8(0xFC, 0);
    fn_801051C8(0xEC, on);
    if (M2C_FIELD(arg0, void **, 0x2C) != NULL) {
        fn_8031EA2C(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, void **, 0x2C) = NULL;
    }
}

s32 fn_801C0A50(s32 *self) {
    return self[7];
}

s32 fn_801C0A58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) & 1;
}

s32 fn_801C0C98(void *arg0, s32 arg1) {
    extern u8 *lbl_8041FA50[];
    void **arr;
    s32 count;
    s32 i;

    arr = *(void ***)lbl_8041FA50[0];
    count = 0;
    if (arr != NULL) {
        count = ((s32 *)arr)[-1];
    }
    for (i = 0; i < count; i++) {
        void *e = *arr++;
        if (arg1 == M2C_FIELD(e, s32 *, 0xC)) {
            return M2C_FIELD(e, s32 *, 4);
        }
    }
    return 10;
}

s32 fn_801C1F88(void) {
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

s32 fn_801C375C(void) {
    s32 fn_802D1FC8(M2C_UNK);
    extern s32 lbl_8049459C;
    if ((s32) lbl_8049459C == 0) {
        lbl_8049459C = fn_802D1FC8(1);
    }
    return lbl_8049459C;
}

s32 fn_801C3794(void) {
    s32 fn_802D1FC8(M2C_UNK);
    extern s32 lbl_804945A0;
    if ((s32) lbl_804945A0 == 0) {
        lbl_804945A0 = fn_802D1FC8(1);
    }
    return lbl_804945A0;
}

s32 fn_801C37CC(void) {
    s32 fn_802D1FC8(M2C_UNK);
    extern s32 lbl_804945A4;
    if ((s32) lbl_804945A4 == 0) {
        lbl_804945A4 = fn_802D1FC8(1);
    }
    return lbl_804945A4;
}

void fn_801C465C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

extern void fn_801C5778(void *);
void *fn_801C5720(void *self) {
    fn_801C5778(self);
    return self;
}

extern void fn_802D20E8(void *);
void fn_801C5750(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_801C5CBC(void *self, s32 flags) {
    extern u8 lbl_80415F08[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(self, void **, 4) = lbl_80415F08;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void *fn_801C5DEC(void *arg0) {
    extern u8 lbl_80415F28[];
    M2C_FIELD(arg0, void **, 4) = lbl_80415F28;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return arg0;
}

void fn_801C5E08(void *self, s32 flags) {
    extern u8 lbl_80415F28[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(self, void **, 4) = lbl_80415F28;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_801C5E3C(s32 *self, s32 value) {
    *self = value;
}

s32 fn_801C5E44(s32 *self) {
    return *self;
}

void fn_801C5E4C(void) {

}

void fn_801C5E50(void) {

}

void fn_801C5E54(void) {

}

void fn_801C5E58(void) {

}

void fn_801C5E5C(void) {

}

void fn_801C5E60(void) {

}

void fn_801C5E64(void) {

}

void fn_801C5E68(void) {

}

void *fn_801C5E6C(void *arg0) {
    s32 *fn_80399BE8(M2C_UNK);
    M2C_UNK fn_803ADB34(void *, s32);
    s32 *temp_r3;
    s32 *temp_r9_3;
    s32 *temp_r9_2;
    s32 *temp_r11;
    s32 *temp_r9;
    s32 alloc[3];

    M2C_FIELD(arg0, s32 **, 4) = NULL;
    temp_r3 = fn_80399BE8(0x14);
    M2C_FIELD(arg0, s32 **, 4) = temp_r3;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    *temp_r3 = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 **, 4), s32 *, 4) = 0;
    temp_r9 = M2C_FIELD(arg0, s32 **, 4);
    M2C_FIELD(temp_r9, s32 **, 8) = temp_r9;
    temp_r11 = M2C_FIELD(arg0, s32 **, 4);
    M2C_FIELD(temp_r11, s32 **, 0xC) = temp_r11;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        fn_803ADB34(arg0, M2C_FIELD(M2C_FIELD(arg0, s32 **, 4), s32 *, 4));
        temp_r9_2 = M2C_FIELD(arg0, s32 **, 4);
        M2C_FIELD(temp_r9_2, s32 **, 8) = temp_r9_2;
        M2C_FIELD(M2C_FIELD(arg0, s32 **, 4), s32 *, 4) = 0;
        temp_r9_3 = M2C_FIELD(arg0, s32 **, 4);
        M2C_FIELD(temp_r9_3, s32 **, 0xC) = temp_r9_3;
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    return arg0;
}

void fn_801C5F20(void *arg0, s32 arg1) {
    M2C_UNK fn_801C6200(void *);
    M2C_UNK fn_803997AC(void *, s32);
    M2C_UNK fn_803ADB34(void *, s32);
    void *temp_r9;
    void *temp_r9_2;

    fn_801C6200(arg0);
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        fn_803ADB34(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4));
        temp_r9 = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_r9, void **, 8) = temp_r9;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4) = 0;
        temp_r9_2 = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_r9_2, void **, 0xC) = temp_r9_2;
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    if (M2C_FIELD(arg0, void **, 4) != NULL) {
        fn_803997AC(M2C_FIELD(arg0, void **, 4), 0x14);
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

extern CasPair fn_803ADC94(s32, void **);
void fn_801C5FB0(s32 arg0, void *arg1) {
    CasPair copy;
    void *key;
    void *temp_r9;

    key = arg1;
    copy = fn_803ADC94(arg0, &key);
    temp_r9 = M2C_FIELD(arg1, void **, 4);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0x1C)((u8 *)arg1 + M2C_FIELD(temp_r9, s16 *, 0x18), arg0);
}

s32 fn_801C62C0(s32 *self) {
    return self[2];
}

s32 fn_801C638C(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r3 != 0) {
        return temp_r3 + 8;
    }
    return 0;
}

void fn_801C63A8(void *arg0, s32 arg1, s32 arg2, void **arg3) {
    char *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, char **, 0x18);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 4);
        M2C_FIELD(temp_r9, void (**)(void *, s32, s32, void **), 0x7C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x78), arg1, arg2, arg3);
    } else if (arg3 != NULL) {
        *arg3 = temp_r11;
    }
}

s32 fn_801C63F8(void *arg0) {
    s32 fn_801CE7E4(s32);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 == 0) {
        return 0;
    }
    return fn_801CE7E4(temp_r0);
}

s32 fn_801C642C(void *arg0) {
    s32 fn_801CE808(s32);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 == 0) {
        return 0;
    }
    return fn_801CE808(temp_r0);
}

f32 fn_801C6460(void *arg0) {
    f32 fn_801CE82C(void *);
    extern const f32 lbl_803DDF5C[];
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r3 != NULL) {
        return fn_801CE82C(temp_r3);
    }
    return lbl_803DDF5C[0];
}

f32 fn_801C6498(void *arg0) {
    f32 fn_801CE850(void *);
    extern const f32 lbl_803DDF60[];
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r3 != NULL) {
        return fn_801CE850(temp_r3);
    }
    return lbl_803DDF60[0];
}

s32 fn_801C64D0(void *arg0) {
    s32 fn_801CE874(s32);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 == 0) {
        return 0;
    }
    return fn_801CE874(temp_r0);
}

s32 fn_801C6504(void *arg0) {
    s32 fn_801CE898(s32);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 == 0) {
        return 0;
    }
    return fn_801CE898(temp_r0);
}

s32 fn_801C6538(void *arg0) {
    s32 fn_801CEEFC(s32);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 == 0) {
        return 0;
    }
    return fn_801CEEFC(temp_r0);
}

s32 fn_801C656C(void *arg0) {
    s32 fn_801CF0E8(s32);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 == 0) {
        return 0;
    }
    return fn_801CF0E8(temp_r0);
}

s32 fn_801C65A0(void *arg0) {
    s32 fn_801CEE38(s32);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 == 0) {
        return 0;
    }
    return fn_801CEE38(temp_r0);
}

void fn_801C675C(void *self, s32 flags) {
    extern u8 lbl_80415F28[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(self, void **, 4) = lbl_80415F28;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_801C6790(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

s32 fn_801C94E8(void) {
    return 1;
}

extern s32 lbl_804945C0;
s32 fn_801C95CC(void) {
    return lbl_804945C0;
}

u8 *fn_801C98C8(u8 *self) {
    return self + 8;
}

s32 fn_801C98D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x504);
}

void fn_801C98D8(void) {
    M2C_UNK fn_801C97B0(M2C_UNK, M2C_UNK);
    fn_801C97B0(1, 0xFFFF);
}

