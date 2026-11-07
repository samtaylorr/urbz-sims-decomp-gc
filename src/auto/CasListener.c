/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    void *node;
    u8 inserted;
    u8 pad[3];
} CasPair;

typedef struct { f32 x, y, z; } CasListenerVec3;

typedef struct {
    u32 small[2][32][8];
    u32 pad[2];
    u32 big[2][16][32];
} CasFlags;

static inline s32 CasFlags_Test(u32 *words, u32 idx) {
    return (words[idx >> 5] & (1 << (idx & 31))) != 0;
}

static inline void CasFlags_Set(u32 *words, u32 idx, s32 on) {
    u32 mask = 1 << (idx & 31);

    idx >>= 5;
    if (on) {
        words[idx] |= mask;
    } else {
        words[idx] &= ~mask;
    }
}

static inline void CasBuf_Free(char **buf) {
    void fn_802D20E8(void *, u32);
    void fn_803997AC(void *, u32);
    char *p = buf[0];
    u32 size = buf[3] - p;

    if (p != NULL) {
        if (size > 0x80) {
            fn_802D20E8(p, size);
        } else {
            fn_803997AC(p, size);
        }
    }
}

typedef struct {
    void *node;
} CasMapIter;

static inline void CasMapIter_Inc(CasMapIter *it) {
    extern void *fn_8039AB24(void *);
    it->node = fn_8039AB24(it->node);
}

static inline s32 CasMapIter_NotEqual(const CasMapIter *a, void *b) {
    return a->node != b;
}

typedef struct CasListNode {
    struct CasListNode *next;
    struct CasListNode *prev;
    s32 value;
} CasListNode;

typedef struct {
    CasListNode *node;
} CasListIter;

static inline s32 CasListIter_NotEqual(const CasListIter *a, const CasListIter *b) {
    return a->node != b->node;
}

static inline void *CasSlot_Init(s32 *p) {
    p[1] = 0;
    return p;
}

static inline void *CasSlot_InitBoth(s32 *p) {
    p[0] = 0;
    p[1] = 0;
    return p;
}

static inline CasListIter CasList_End(void *self) {
    CasListIter r;
    r.node = M2C_FIELD(self, CasListNode **, 4);
    return r;
}

static inline CasListIter CasList_Begin(void *self) {
    CasListIter r;
    r.node = M2C_FIELD(self, CasListNode **, 4)->next;
    return r;
}

static inline s32 CasArr_Size(u32 **a) {
    return a != NULL ? ((s32 *)a)[-1] : 0;
}

static inline s32 CasNode_Valid(void *n) {
    return n != NULL;
}

static inline CasPair CasMap_Insert(s32 map, void **key) {
    extern CasPair fn_803ADC94(s32, void **);
    return fn_803ADC94(map, key);
}

typedef struct {
    u8 pad[0x808];
    u32 bits[2][16][32];
} CasBits;

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

void fn_801B7944(void *self) {
    void fn_8031EA2C(void *);
    void *fn_803ACFB8(void *);
    void *fn_802D0AB8();
    void fn_802D1A00(void *, void *);
    void fn_802CB8D4(void *);
    char *list;
    void *node;
    void *next;
    void *obj;

    if (M2C_FIELD(self, void **, 0x10) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0x10));
        M2C_FIELD(self, void **, 0x10) = NULL;
    }
    list = (char *)self + 0x58;
    for (node = M2C_FIELD(list, void **, 4); CasNode_Valid(node); node = next) {
        next = M2C_FIELD(node, void **, 4);
        obj = M2C_FIELD(node, void **, 0);
        if (M2C_FIELD(list, s32 *, 8) != 0 && obj != NULL) {
            fn_803ACFB8(obj);
            fn_802D1A00(fn_802D0AB8(), obj);
        }
    }
    fn_802CB8D4(list);
}

void fn_801B7C94(void *arg0, s32 arg1) {

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

s32 fn_801B7C98(void *arg0, void *arg1, s32 arg2) {
    typedef struct { s16 delta; s16 idx; s32 (*fn)(void *); } VtEnt;
    extern u8 *lbl_80496658;
    extern void fn_80151110(void *);
    CasIter iter;
    VtEnt *e;
    CasVtEnt2 *e2;

    e = (VtEnt *)(*(u8 **)lbl_80496658 + 0xE8);
    if ((e->fn(lbl_80496658 + e->delta) & 0x21) != 1) {
        return 0;
    }
    if (arg2 != 0) {
        register CasIter *it asm("r30") = &iter;
        register CasIter *p asm("r31");
        u8 *cur;
        CasIter_begin(it, arg1);
        cur = it->cur;
        p = it;
        if (cur != NULL) {
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

s32 fn_801B7D68(void *arg0, s32 idx) {
    extern void *lbl_8041FA48[];
    void *p;
    s32 n = 0;

    arg0 = lbl_8041FA48[0];
    p = *(void **)arg0;
    if (p != NULL) {
        n = ((s32 *)p)[-1];
    }
    if (idx < n - 1) {
        p = ((void **)p)[idx];
        return (f32)*(u32 *)p * 0.8f;
    }
    return 0;
}

s32 fn_801B7EC8(void *arg0, s32 idx) {
    extern void *lbl_8041FA48[];
    s32 n = 0;

    arg0 = lbl_8041FA48[0];
    arg0 = *(void **)arg0;
    if (arg0 != NULL) {
        n = ((s32 *)arg0)[-1];
    }
    if (idx < n) {
        arg0 = ((void **)arg0)[idx];
        return *(s32 *)arg0;
    }
    return 0;
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

void fn_801B85A4(void *arg0, void *arg1) {
    void fn_801B8614(void *, void *, s32 *, s32 *, s32 *, s32 *);
    void *o;
    void *vt;
    s32 a, b, c, d;

    o = M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), void **, 0x20);
    vt = M2C_FIELD(o, void **, 0xF0);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x14)((char *)o + M2C_FIELD(vt, s16 *, 0x10), arg0, 0);
    fn_801B8614(M2C_FIELD(arg1, void **, 0x18), arg0, &a, &b, &c, &d);
}

void fn_801B8614(void) {

}

void fn_801B8618(void) {

}

void *fn_801B861C(void *self) {
    extern u8 lbl_80415BE8[];
    extern u8 lbl_80415C38[];
    void fn_801BD670(void *);
    void *fn_802D1FC8(s32);
    char *p;
    void *obj;
    u8 pad[5];

    fn_801BD670(self);
    M2C_FIELD(self, s32 *, 0x28) = 0;
    M2C_FIELD(self, s32 *, 0x2C) = 0;
    M2C_FIELD(self, u8 **, 8) = lbl_80415BE8;
    p = (char *)self + 0x30;
    M2C_FIELD(p, s32 *, 4) = 0;
    obj = fn_802D1FC8(0x14);
    M2C_FIELD(self, void **, 0xC) = obj;
    M2C_FIELD(obj, u8 **, 0) = lbl_80415C38;
    M2C_FIELD(self, s32 *, 0x10) = 0;
    M2C_FIELD(self, s32 *, 0x14) = 0;
    M2C_FIELD(self, s32 *, 0x18) = 0;
    return self;
}

void fn_801B8690(void *self, s32 flags) {
    extern u8 lbl_80415BE8[];
    void fn_801BD690(void *, s32);
    void fn_802D20E8(void *, u32);
    void fn_803997AC(void *, u32);
    void *p;
    char *v;
    u32 size;

    M2C_FIELD(self, u8 **, 8) = lbl_80415BE8;
    p = M2C_FIELD(self, void **, 0xC);
    if (p != NULL) {
        M2C_FIELD(*(void **)p, void (**)(void *, s32), 0xC)((u8 *)p + M2C_FIELD(*(void **)p, s16 *, 8), 3);
    }
    v = (char *)self + 0x28;
    if (M2C_FIELD(v, char **, 0) != NULL) {
        size = (M2C_FIELD(v, char **, 0xC) - M2C_FIELD(v, char **, 0)) & ~1;
        if (size > 0x80) {
            fn_802D20E8(M2C_FIELD(v, void **, 0), size);
        } else {
            fn_803997AC(M2C_FIELD(v, void **, 0), size);
        }
    }
    fn_801BD690(self, flags);
}

s32 fn_801B872C(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801B8734(char *arg0, char *arg1) {
    void fn_801BA350(char *, s32);
    void fn_801B9D9C(char *, s32);
    fn_801BA350(arg0, 0);
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
    if (arg1 != NULL) {
        char *vt = *(char **)(arg1 + 4);
        s16 v = (*(s16 (**)(void *))(vt + 0x2EC))(arg1 + *(s16 *)(vt + 0x2E8));
        M2C_FIELD(arg0, s16 *, 0x38) = v;
        fn_801B9D9C(arg0, v);
    }
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

void fn_801B9CE0(void *arg0, s32 arg1) {
    s32 fn_8016CC44(s32);
    void *fn_80107CBC(void *, s32, s32, s32);
    s32 fn_8015125C(s32, s32);
    extern void *lbl_8049665C;
    extern void *lbl_80496668;
    s32 r30;
    void *p;
    s32 k;
    void *o;
    void *vt;

    o = lbl_8049665C;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    vt = M2C_FIELD(o, void **, 0);
    r30 = M2C_FIELD(vt, s32 (**)(void *, s32), 0x84)((char *)o + M2C_FIELD(vt, s16 *, 0x80), 0x437);
    k = fn_8016CC44(arg1);
    p = fn_80107CBC(lbl_80496668, k, r30, 1);
    o = lbl_80496668;
    vt = M2C_FIELD(o, void **, 0);
    p = M2C_FIELD(vt, void *(**)(void *, void *), 0x94)((char *)o + M2C_FIELD(vt, s16 *, 0x90), p);
    if (p != NULL) {
        k = fn_8015125C(M2C_FIELD(p, s32 *, 0), 4);
    } else {
        k = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = k;
}

s32 fn_801BA094(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) != 0;
}

s32 fn_801BA0AC(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x4);
        return M2C_FIELD(temp_r9, s32 (**)(void *), 0x44)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x40));
    }
    return 0;
}

s32 fn_801BA274(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) == 0;
}

void *fn_801BB264(void *arg0) {
    void fn_801BD670(void *);
    void *fn_802D1FC8(s32);
    void fn_801BB5F4(void *);
    extern char lbl_80415C50[];
    extern char lbl_80415CA0[];
    void *p;

    fn_801BD670(arg0);
    M2C_FIELD(arg0, void **, 0x8) = lbl_80415C50;
    p = fn_802D1FC8(0x14);
    M2C_FIELD(p, void **, 0) = lbl_80415CA0;
    M2C_FIELD(arg0, void **, 0xC) = p;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    fn_801BB5F4(arg0);
    return arg0;
}

void fn_801BB2CC(void *self, s32 flags) {
    extern u8 lbl_80415C50[];
    void fn_801BB658(void *);
    void fn_801BD690(void *, s32);
    void *p;

    M2C_FIELD(self, u8 **, 8) = lbl_80415C50;
    fn_801BB658(self);
    p = M2C_FIELD(self, void **, 0xC);
    if (p != NULL) {
        M2C_FIELD(*(void **)p, void (**)(void *, s32), 0xC)((u8 *)p + M2C_FIELD(*(void **)p, s16 *, 8), 3);
    }
    fn_801BD690(self, flags);
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

void fn_801BB5F4(void *self) {
    extern void *lbl_80494FCC;
    extern s32 fn_801BFD60(void *);
    extern void *fn_8033390C(void *, s32);
    extern s32 fn_803114D0(void *, s32, void *, s32);
    extern u8 lbl_803DCB08[];
    void *mgr;
    if (M2C_FIELD(self, s32 *, 0x10) == 0) {
        mgr = lbl_80494FCC;
        M2C_FIELD(self, s32 *, 0x10) = fn_803114D0(fn_8033390C(mgr, fn_801BFD60(M2C_FIELD(self, void **, 0))), 0x40, lbl_803DCB08, 0x64);
    }
}

void fn_801BB658(void *self) {
    extern void *lbl_80494FCC;
    extern s32 fn_801BFD60(void *);
    extern void *fn_8033390C(void *, s32);
    extern void fn_803115C0(void *, s32);
    void *mgr;
    if (M2C_FIELD(self, s32 *, 0x10) != 0) {
        mgr = lbl_80494FCC;
        fn_803115C0(fn_8033390C(mgr, fn_801BFD60(M2C_FIELD(self, void **, 0))), M2C_FIELD(self, s32 *, 0x10));
        M2C_FIELD(self, s32 *, 0x10) = 0;
    }
}

void *fn_801BB6B4(void *self) {
    extern u8 lbl_80415CB8[];
    extern u8 lbl_80415D08[];
    void fn_801BD670(void *);
    void *fn_802D1FC8(s32);
    void *p;

    fn_801BD670(self);
    M2C_FIELD(self, u8 **, 8) = lbl_80415CB8;
    p = fn_802D1FC8(0x14);
    M2C_FIELD(self, void **, 0xC) = p;
    *(u8 **)p = lbl_80415D08;
    return self;
}

void fn_801BB708(void *self, s32 flags) {
    extern u8 lbl_80415CB8[];
    void fn_801BD690(void *, s32);
    void *p;

    M2C_FIELD(self, u8 **, 8) = lbl_80415CB8;
    p = M2C_FIELD(self, void **, 0xC);
    if (p != NULL) {
        M2C_FIELD(*(void **)p, void (**)(void *, s32), 0xC)((u8 *)p + M2C_FIELD(*(void **)p, s16 *, 8), 3);
    }
    fn_801BD690(self, flags);
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

void fn_801BB8FC(void **self) {
    void fn_80044A38(void *);
    if (M2C_FIELD(*self, void **, 0x2C) != NULL) {
        fn_80044A38(M2C_FIELD(*self, void **, 0x2C));
    }
}

void fn_801BB92C(void) {

}

s32 fn_801BB930(void) {
    return 0;
}

void fn_801BB9FC(void *self, s32 flags) {
    extern u8 lbl_80415D20[];
    extern void fn_8031EA2C(void *);
    void fn_801BD690(void *, s32);
    void *p;

    M2C_FIELD(self, u8 **, 8) = lbl_80415D20;
    p = M2C_FIELD(self, void **, 0xC);
    if (p != NULL) {
        M2C_FIELD(*(void **)p, void (**)(void *, s32), 0xC)((u8 *)p + M2C_FIELD(*(void **)p, s16 *, 8), 3);
    }
    if (M2C_FIELD(self, void **, 0x14) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0x14));
        M2C_FIELD(self, void **, 0x14) = NULL;
    }
    if (M2C_FIELD(self, void **, 0x18) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0x18));
        M2C_FIELD(self, void **, 0x18) = NULL;
    }
    if (M2C_FIELD(self, void **, 0x1C) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0x1C));
        M2C_FIELD(self, void **, 0x1C) = NULL;
    }
    fn_801BD690(self, flags);
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

static inline void CasListener_ReleaseSound(void *self) {
    extern void fn_8031EA2C(void *);
    if (M2C_FIELD(self, void **, 0x20) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0x20));
        M2C_FIELD(self, void **, 0x20) = NULL;
    }
}

void fn_801BBFD4(void *self) {
    extern void fn_8031EA2C(void *);
    if (M2C_FIELD(self, void **, 0x20) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0x20));
        M2C_FIELD(self, void **, 0x20) = NULL;
    }
}

void fn_801BC014(u8 *self, s32 *arg1) {
    extern void fn_8031EA2C(void *);
    extern void *fn_8033740C(void *, void *, s32, s32);
    extern u8 lbl_8045BA40[];
    *(s32 *)(self + 0x10) = 0;
    if (*(void **)(self + 0x20) != NULL) {
        fn_8031EA2C(*(void **)(self + 0x20));
        *(void **)(self + 0x20) = NULL;
    }
    *(s32 **)(self + 0x24) = arg1;
    *(s32 *)(self + 0x30) = arg1[0];
    *(void **)(self + 0x20) = fn_8033740C(lbl_8045BA40, (void *)arg1[2], 0, 0);
}

s32 fn_801BC084(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) & 1;
}

s32 fn_801BC090(void *arg0) {
    s32 fn_801BFD7C(s32);
    s32 fn_801BF884(s32, s32, s32);
    s32 fn_801BCF54(void *);
    extern const f32 lbl_803DD000[];
    s32 n;

    if (fn_801BF884(fn_801BFD7C(M2C_FIELD(arg0, s32 *, 0)), 0x17, M2C_FIELD(arg0, s32 *, 4)) != 0 ||
        !(M2C_FIELD(arg0, s32 *, 0x10) & 4)) {
        return M2C_FIELD(arg0, s32 *, 0x60) * M2C_FIELD(arg0, s32 *, 0x30);
    }
    n = fn_801BCF54(arg0);
    M2C_FIELD(arg0, s32 *, 0x58) = n;
    return (f32)n * lbl_803DD000[0];
}

void *fn_801BD670(void *arg0, s32 arg1) {
    extern u8 lbl_80415D88[];
    M2C_FIELD(arg0, u8 **, 8) = lbl_80415D88;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}

void fn_801BD690(void *arg0, s32 flags) {
    extern u8 lbl_80415D88[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(arg0, u8 **, 8) = lbl_80415D88;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    if (flags & 1) {
        fn_802D20E8(arg0);
    }
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
    extern u8 *lbl_80496654;
    extern s32 fn_801A08DC(void *, s32);
    extern void fn_801A0858(void *, s32);
    u8 *obj = lbl_80496658;
    s32 ret;
    u8 buf[0x38];
    u16 *a;
    s32 b;
    s32 c;
    s32 d;

    {
        VtEnt *e = (VtEnt *)(*(u8 **)obj + 0xD8);
        ret = e->fn(obj + e->delta, arg0);
    }
    if (lbl_80496654 == NULL) {
        return 0;
    }
    if (ret == 0xFFFB) {
        ((void *(*)(void *, s32, u16 **, void *, void *, void *))fn_801910C8)(lbl_80496654, arg0, &a, &b, &c, &d);
        {
            VtEnt2 *e = (VtEnt2 *)(*(u8 **)obj + 0xA8);
            e->fn(buf, obj + e->delta, arg0);
        }
        if (fn_801A08DC(buf, 0x20) == 0) {
            fn_801A08DC(buf, 0x10);
            ret = *a;
        } else {
            ret = *a;
        }
        fn_801A0858(buf, 2);
    }
    return ret;
}

f32 fn_801BECA0(f32 *p, s32 arg1) {
    f32 fn_80242ACC(f32);
    extern const f32 lbl_803DD1B8[];
    extern const f32 lbl_803DD1BC[];
    extern const f32 lbl_803DD1C0[];
    extern const f32 lbl_803DD1C4[];
    f32 v[2];
    f32 d;
    f32 r;

    v[0] = lbl_803DD1B8[0];
    v[1] = lbl_803DD1BC[0];
    d = v[0] * p[0] + v[1] * p[1];
    if (!(d >= lbl_803DD1BC[0])) {
        d = -d;
    }
    if (p[1] * p[0] >= lbl_803DD1BC[0]) {
        r = fn_80242ACC(d);
    } else {
        r = fn_80242ACC(d) + lbl_803DD1C0[0];
    }
    if (arg1 == 0) {
        r += lbl_803DD1C4[0];
    }
    return r;
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
    void fn_801C0124(void *);
    fn_801C0124(M2C_FIELD(arg0, void **, 0x48));
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

void fn_801BFDF8(void *self, s32 arg1) {
    u8 *obj = (u8 *)fn_801BFD84(self);
    CasVtEnt2 *ent = (CasVtEnt2 *)(M2C_FIELD(obj, u8 **, 8) + 0x30);
    ent->fn(obj + ent->delta, arg1);
}

void fn_801BFE40(void *self, s32 arg1) {
    u8 *obj = (u8 *)fn_801BFD84(self);
    CasVtEnt2 *ent = (CasVtEnt2 *)(M2C_FIELD(obj, u8 **, 8) + 0x28);
    ent->fn(obj + ent->delta, arg1);
}

void fn_801BFE88(void *self, s32 arg1, s32 arg2) {
    extern void fn_801C02C4(void *, s32);
    u8 *obj;
    CasVtEnt2 *ent;

    fn_801C02C4(self, 5);
    obj = M2C_FIELD(self, u8 **, 0x14);
    ent = (CasVtEnt2 *)(M2C_FIELD(obj, u8 **, 8) + 0x40);
    ent->fn(obj + ent->delta, arg2);
    fn_801B9CE0(M2C_FIELD(self, void **, 0x14), arg1);
}

void fn_801BFEEC(void *self, s32 arg1, s32 arg2) {
    extern void fn_801C02C4(void *, s32);
    extern void fn_801C096C(void *, s32, s32);
    fn_801C02C4(self, 3);
    fn_801C096C(M2C_FIELD(self, void **, 0xC), arg1, arg2);
}

void fn_801BFF34(void *self, s32 arg1) {
    extern void fn_801C02C4(void *, s32);
    fn_801C02C4(self, 2);
    fn_801B7C94(M2C_FIELD(self, void **, 8), arg1);
}

void fn_801BFF74(void *self, void *arg1) {
    extern void fn_801C02C4(void *, s32);
    fn_801C02C4(self, 4);
    fn_801BC014(M2C_FIELD(self, void **, 0x10), arg1);
}

void fn_801C0120(void) {

}

void fn_801C0124(void *self) {
    u8 *obj = (u8 *)fn_801BFD84(self);
    u8 *vt = M2C_FIELD(obj, u8 **, 8);
    (*(void (**)(void *))(vt + 0x1C))(obj + *(s16 *)(vt + 0x18));
    if ((u8 *)fn_801BFD84(self) == obj) {
        u8 *o2 = (u8 *)fn_801BFD84(self);
        u8 *vt2 = M2C_FIELD(o2, u8 **, 8);
        (*(void (**)(void *))(vt2 + 0x24))(o2 + *(s16 *)(vt2 + 0x20));
    }
}

void fn_801C019C(void) {

}

s32 fn_801C02BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

void fn_801C02C4(void *self, s32 arg1) {
    if (M2C_FIELD(self, s32 *, 0x24) != arg1) {
        u8 *obj = (u8 *)fn_801BFD84(self);
        u8 *vt = M2C_FIELD(obj, u8 **, 8);
        (*(void (**)(void *))(vt + 0x3C))(obj + *(s16 *)(vt + 0x38));
        M2C_FIELD(self, s32 *, 0x24) = arg1;
    }
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

void *fn_801C3804(void *self) {
    void *fn_80399BE8(s32);
    CasListNode *n;
    s32 alloc[3];

    M2C_FIELD(self, CasListNode **, 4) = NULL;
    n = fn_80399BE8(0xC);
    n->next = n;
    n->prev = n;
    M2C_FIELD(self, CasListNode **, 4) = n;
    return self;
}

void fn_801C3850(void *self, s32 arg1) {
    extern void fn_803AD18C(void *);
    extern void fn_803997AC(void *, s32);
    extern void fn_802D20E8(void *);
    CasListIter end;
    CasListIter it;

    end = CasList_End(self);
    it = CasList_Begin(self);
    while (CasListIter_NotEqual(&it, &end)) {
        it.node = it.node->next;
    }
    fn_803AD18C(self);
    if (M2C_FIELD(self, void **, 4) != NULL) {
        fn_803997AC(M2C_FIELD(self, void **, 4), 0xC);
    }
    if (arg1 & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_801C38E4(void *self) {
    CasListIter begin;
    CasListIter end;
    CasListIter it;
    s32 n;
    s32 ret;

    end = CasList_End(self);
    n = 0;
    it = CasList_Begin(self);
    while (CasListIter_NotEqual(&it, &end)) {
        it.node = it.node->next;
        n++;
    }
    if (n != 0) {
        begin = CasList_Begin(self);
        ret = 1;
        if (begin.node->value != 1) {
            ret = 0;
        }
        return ret;
    }
    return 0;
}

void *fn_801C4040(void *self) {
    extern void fn_803ABFA8(void *);
    s32 *p1;
    s32 *p2;
    s32 *p3;
    s32 *p4;
    s32 pad[3];

    fn_803ABFA8(self);
    p1 = (s32 *)((u8 *)self + 0x14);
    M2C_FIELD(self, s32 *, 0x10) = 0;
    p2 = (s32 *)((u8 *)self + 0x1C);
    p1[0] = 0;
    p3 = (s32 *)((u8 *)self + 0x24);
    p1[1] = 0;
    p4 = (s32 *)((u8 *)self + 0x2C);
    p2[1] = 0;
    p3[0] = 0;
    p3[1] = 0;
    p4[1] = 0;
    return self;
}

void *fn_801C40A0(void *self, s32 arg) {
    void fn_803ABFA8(void *, s32);
    void fn_801C4170(void *, s32);
    fn_803ABFA8(self, arg);
    M2C_FIELD(self, s32 *, 0x14) = 0;
    M2C_FIELD(self, s32 *, 0x18) = 0;
    CasSlot_Init((s32 *)((u8 *)self + 0x1C));
    CasSlot_InitBoth((s32 *)((u8 *)self + 0x24));
    CasSlot_Init((s32 *)((u8 *)self + 0x2C));
    fn_801C4170(self, arg);
    return self;
}

void *fn_801C4108(void *self) {
    void fn_803AD1F8(void *);
    void fn_801C4668(void *);
    s32 pad[2];
    fn_803AD1F8(self);
    M2C_FIELD(self, s32 *, 0x10) = 0;
    CasSlot_InitBoth((s32 *)((u8 *)self + 0x14));
    CasSlot_Init((s32 *)((u8 *)self + 0x1C));
    CasSlot_InitBoth((s32 *)((u8 *)self + 0x24));
    CasSlot_Init((s32 *)((u8 *)self + 0x2C));
    fn_801C4668(self);
    return self;
}

void fn_801C43AC(char *self) {
    char **vec;
    char **vec2;
    char *begin;
    char *end;
    char *it;

    M2C_FIELD(self, s32 *, 0x10) = 0;
    vec = (char **)(self + 0x14);
    begin = vec[0];
    end = vec[1];
    vec2 = (char **)(self + 0x24);
    for (it = begin; it != end; it += 0x10) {
        CasBuf_Free((char **)it);
    }
    vec[1] = begin;
    vec2[1] = M2C_FIELD(self, char **, 0x24);
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

s32 fn_801C5998(CasFlags *self, s32 which, s32 row, u32 idx) {
    s32 sel;
    u32 word;

    if (idx > 0xFF) {
        return 0;
    }
    sel = 0;
    if (which != 0) {
        sel = 1;
    }
    word = self->small[sel][row][idx >> 5];
    if (word & (1 << (idx & 31))) {
        return 1;
    }
    return 0;
}

s32 fn_801C59F0(CasFlags *self, s32 which, s32 row, u32 idx) {
    s32 sel;
    u32 word;

    if (idx > 0x3FF) {
        return 0;
    }
    sel = 0;
    if (which != 0) {
        sel = 1;
    }
    word = self->big[sel][row][idx >> 5];
    if (word & (1 << (idx & 31))) {
        return 1;
    }
    return 0;
}

void fn_801C5A4C(CasFlags *self, s32 which, s32 row, u32 idx, s32 on) {
    s32 sel;
    u32 mask;
    u32 bit;

    if (idx > 0xFF) {
        return;
    }
    sel = 0;
    if (which != 0) {
        sel = 1;
    }
    bit = idx & 31;
    mask = 1 << bit;
    idx >>= 5;
    if (on) {
        self->small[sel][row][idx] |= mask;
    } else {
        self->small[sel][row][idx] &= ~mask;
    }
}

void fn_801C5AC4(CasBits *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    s32 idx;
    u32 word;
    u32 mask;

    if (arg3 > 0x3FF) {
        return;
    }
    idx = 0;
    if (arg1 != 0) {
        idx = 1;
    }
    word = arg3 >> 5;
    mask = 1 << (arg3 & 0x1F);
    if (arg4 != 0) {
        arg0->bits[idx][arg2][word] |= mask;
    } else {
        arg0->bits[idx][arg2][word] &= ~mask;
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
    copy = ({ CasMap_Insert(arg0, &key); });
    temp_r9 = M2C_FIELD(arg1, void **, 4);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0x1C)((u8 *)arg1 + M2C_FIELD(temp_r9, s16 *, 0x18), arg0);
}

void fn_801C6200(void *self) {
    M2C_UNK fn_803ADB34(void *, s32);
    CasMapIter it;
    s32 more;
    void *temp_r9;
    void *temp_r11;
    void *temp_r9_2;

    it.node = NULL;
    it.node = M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 8);
    while ((more = CasMapIter_NotEqual(&it, M2C_FIELD(self, void **, 4))) != 0) {
        char *obj = M2C_FIELD(it.node, char **, 0x10);
        void *vt = M2C_FIELD(obj, void **, 4);
        M2C_FIELD(vt, void (**)(void *, s32), 0x1C)(obj + M2C_FIELD(vt, s16 *, 0x18), 0);
        CasMapIter_Inc(&it);
    }
    if (M2C_FIELD(self, s32 *, 8) != 0) {
        fn_803ADB34(self, M2C_FIELD(M2C_FIELD(self, void **, 4), s32 *, 4));
        temp_r9 = M2C_FIELD(self, void **, 4);
        M2C_FIELD(temp_r9, void **, 8) = temp_r9;
        temp_r11 = M2C_FIELD(self, void **, 4);
        M2C_FIELD(temp_r11, s32 *, 4) = more;
        temp_r9_2 = M2C_FIELD(self, void **, 4);
        M2C_FIELD(temp_r9_2, void **, 0xC) = temp_r9_2;
        M2C_FIELD(self, s32 *, 8) = more;
    }
}

s32 fn_801C62C0(s32 *self) {
    return self[2];
}

void fn_801C62C8(void *self, void *arg1) {
    CasMapIter it;
    void *vt;

    it.node = NULL;
    vt = M2C_FIELD(arg1, void **, 4);
    M2C_FIELD(vt, void (**)(void *), 0x14)((char *)arg1 + M2C_FIELD(vt, s16 *, 0x10));
    it.node = M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 8);
    while (CasMapIter_NotEqual(&it, M2C_FIELD(self, void **, 4))) {
        char *obj = M2C_FIELD(it.node, char **, 0x10);
        void *vt2 = M2C_FIELD(obj, void **, 4);
        M2C_FIELD(vt2, void (**)(void *, void *), 0x14)(obj + M2C_FIELD(vt2, s16 *, 0x10), arg1);
        CasMapIter_Inc(&it);
    }
}

s32 fn_801C6370(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r3 != 0) {
        return temp_r3 + 8;
    }
    return 0;
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

void fn_801C65D4(void *self) {
    char *obj = M2C_FIELD(self, char **, 0x14);
    if (obj != NULL) {
        char *vt = M2C_FIELD(obj, char **, 4);
        (*(void (**)(void *))(vt + 0x6C))(obj + *(s16 *)(vt + 0x68));
    }
}

s32 fn_801C6614(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 4);
        return M2C_FIELD(temp_r9, s32 (**)(void *), 0x84)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x80));
    }
    return 0;
}

s32 fn_801C665C(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 fn_801CEEA0(void *);
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r0 != NULL) {
        *arg3 = fn_801CEEA0(temp_r0);
        return 1;
    }
    return 0;
}

s32 fn_801C66A4(void *arg0) {
    extern const f32 lbl_803DDF64[];
    s32 fn_801D3270(void *);
    void *p;

    p = M2C_FIELD(arg0, void **, 0x14);
    if (p == NULL || M2C_FIELD(arg0, void **, 0x18) == NULL) {
        return 1;
    }
    if (fn_801D3270(p) != 0) {
        return 0;
    }
    return !(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), f32 *, 0x498) < lbl_803DDF64[0]);
}

void *fn_801C6720(void *arg0) {
    extern const f32 lbl_803DE0D8[];
    extern char lbl_80415F90[];
    s32 z = 0;
    M2C_FIELD(arg0, char **, 4) = lbl_80415F90;
    M2C_FIELD(arg0, s32 *, 0) = z;
    M2C_FIELD(arg0, s32 *, 8) = z;
    M2C_FIELD(arg0, s32 *, 0xC) = z;
    M2C_FIELD(arg0, s32 *, 0x10) = z;
    M2C_FIELD(arg0, u8 *, 0x18) = z;
    M2C_FIELD(arg0, f32 *, 0x14) = lbl_803DE0D8[0];
    M2C_FIELD(arg0, u8 *, 0x38) = z;
    return arg0;
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

s32 fn_801C7210(void *arg0, u32 arg1, void *arg2) {
    extern u8 *lbl_8049440C;
    void fn_8039AC6C(void *, void *, s32, s32);
    void *r;

    if (arg1 > (*(u32 (**)(u8 *, s32))(*(u8 **)(lbl_8049440C + 0x10) + 0x7C))(lbl_8049440C + *(s16 *)(*(u8 **)(lbl_8049440C + 0x10) + 0x78), 0x55736572)) {
        return 0;
    }
    r = (*(void *(**)(u8 *, s32, s32, s32))(*(u8 **)(lbl_8049440C + 0x10) + 0x94))(lbl_8049440C + *(s16 *)(*(u8 **)(lbl_8049440C + 0x10) + 0x90), 0x55736572, (s16)arg1, 0);
    if (r == NULL) {
        return 0;
    }
    fn_8039AC6C(arg2, r, 0x55736572, 0);
    return 1;
}

s32 fn_801C72C0(void *arg0) {
    extern const f32 lbl_803DE1C0[];
    return M2C_FIELD(arg0, f32 *, 0x14) > lbl_803DE1C0[0];
}

void fn_801C7A44(void *arg0, s32 arg1) {
    void fn_801C601C(s32, s32);
    if (arg1 == 0 && M2C_FIELD(arg0, s32 *, 0x4BC) != 0) {
        fn_801C601C(M2C_FIELD(arg0, s32 *, 0x0), M2C_FIELD(arg0, s32 *, 0x4BC));
    }
    M2C_FIELD(arg0, s32 *, 0x0) = arg1;
}

void fn_801C8640(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x4A4) = farg0;
    M2C_FIELD(arg0, f32 *, 0x4F4) = farg1;
    M2C_FIELD(arg0, f32 *, 0x4F8) = farg2;
}

void fn_801C8880(void *arg0, s32 arg1) {
    s32 fn_8032D5C8(s32, void *);
    s32 fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803DE330[];
    u8 *name = lbl_803DE330;
    s32 *dst = &M2C_FIELD(arg0, s32 *, 0x478);
    s32 key;
    s32 p;

    key = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x47C), name);
    p = fn_8032D6E8(M2C_FIELD(arg0, s32 *, 0x47C), key, arg1);
    if (dst != NULL) {
        *dst = p;
    }
}

s32 fn_801C8F4C(void *arg0, u32 arg1) {
    switch (arg1) {
    case 0:
    case 4 ... 18:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
    case 19 ... 28:
        return 3;
    default:
        return 1;
    }
}

s32 fn_801C94E8(void) {
    return 1;
}

extern s32 lbl_804945C0;
s32 fn_801C95CC(void) {
    return lbl_804945C0;
}

void fn_801C95D4(void *arg0, s32 arg1) {
    extern const f32 lbl_803DE3A8[];
    void fn_801C88DC(void *, s32, f32);
    u32 v;
    s32 a;

    if (arg1 != 0) {
        v = M2C_FIELD(arg0, u32 *, 0x49C);
        a = 0;
        switch (v) {
        case 4:
        case 5:
        case 6:
            break;
        default:
            a = v;
            break;
        }
        M2C_FIELD(arg0, u32 *, 0x4FC) = v;
        fn_801C88DC(arg0, a, lbl_803DE3A8[0]);
        M2C_FIELD(arg0, s32 *, 0x500) = 1;
    } else if (M2C_FIELD(arg0, s32 *, 0x500) != 0) {
        fn_801C88DC(arg0, M2C_FIELD(arg0, s32 *, 0x4FC), lbl_803DE3A8[0]);
    }
}

void fn_801C97B0(s32 arg0, s32 arg1) {
    extern const f32 lbl_803DE3AC[];
    extern const f32 lbl_803DE3B0[];
    extern const f32 lbl_803DE3B4[];
    extern const f32 lbl_803DE3B8[];
    extern const f32 lbl_803DE3BC[];
    extern const f32 lbl_803DE3C0[];
    extern f32 lbl_80436260[];
    extern f32 lbl_8043626C[];
    extern f32 lbl_80436278[];
    extern f32 lbl_80436284[];
    extern f32 lbl_80436290[];

    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_80436260[0] = lbl_803DE3AC[0];
        lbl_80436260[1] = lbl_803DE3AC[0];
        lbl_80436260[2] = lbl_803DE3B0[0];
        lbl_8043626C[0] = lbl_803DE3B4[0];
        lbl_8043626C[1] = lbl_803DE3AC[0];
        lbl_8043626C[2] = lbl_803DE3B0[0];
        lbl_80436278[0] = lbl_803DE3B8[0];
        lbl_80436278[1] = lbl_803DE3AC[0];
        lbl_80436278[2] = lbl_803DE3B0[0];
        lbl_80436284[0] = lbl_803DE3BC[0];
        lbl_80436284[1] = lbl_803DE3C0[0];
        lbl_80436284[2] = lbl_803DE3BC[0];
        lbl_80436290[0] = lbl_803DE3BC[0];
        lbl_80436290[1] = lbl_803DE3BC[0];
        lbl_80436290[2] = lbl_803DE3BC[0];
    }
}

void fn_801C9870(void *arg0, CasListenerVec3 *arg1, CasListenerVec3 *arg2) {
    *arg1 = M2C_FIELD(arg0, CasListenerVec3 *, 0x480);
    *arg2 = M2C_FIELD(arg0, CasListenerVec3 *, 0x48C);
}

s32 fn_801C98AC(void *arg0) {
    extern const f32 lbl_803DE3C4[];
    return M2C_FIELD(arg0, f32 *, 0x498) < lbl_803DE3C4[0];
}

u8 *fn_801C98C8(u8 *self) {
    return self + 8;
}

s32 fn_801C98D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x504);
}

void fn_801C98D8(void) {
    void fn_801C97B0(s32, s32);
    fn_801C97B0(1, 0xFFFF);
}

