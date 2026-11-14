/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041DC30[];
void fn_802D8BEC(void *);

s32 fn_8036F364(void *);
s32 fn_8036F3A4(void *);
s32 fn_802486DC(char *, char *);

static inline void *ETexture_FindByName(void *list, char *name) {
    s32 found = 0;
    u8 *cur;

    fn_8036F364(list);
    if ((cur = M2C_FIELD(list, u8 **, 0x90) = M2C_FIELD(list, u8 **, 0x88)) != NULL) {
        do {
            if (fn_802486DC((char *)(cur + 0x10), name) == 0) {
                found = 1;
            } else {
                M2C_FIELD(list, u8 **, 0x90) = *M2C_FIELD(list, u8 ***, 0x90);
            }
            if (found) {
                break;
            }
        } while ((cur = M2C_FIELD(list, u8 **, 0x90)) != NULL);
    }
    fn_8036F3A4(list);
    return cur;
}

static inline void *ETexture_FindByKey(void *list, s32 key) {
    s32 found = 0;
    u8 *cur;

    fn_8036F364(list);
    if ((cur = M2C_FIELD(list, u8 **, 0x90) = M2C_FIELD(list, u8 **, 0x88)) != NULL) {
        do {
            if (M2C_FIELD(cur, s32 *, 8) == key) {
                found = 1;
            } else {
                M2C_FIELD(list, u8 **, 0x90) = *M2C_FIELD(list, u8 ***, 0x90);
            }
            if (found) {
                break;
            }
        } while ((cur = M2C_FIELD(list, u8 **, 0x90)) != NULL);
    }
    fn_8036F3A4(list);
    return cur;
}
void fn_8036ECE0(u8 *self) {
    typedef struct { s16 delta; s16 pad; void *pfn; } Ent;
    extern u8 *lbl_80495050;
    u8 *obj;
    u8 *r;
    Ent *vt = *(Ent **)(self + 8);
    if (((s32 (*)(void *))vt[5].pfn)(self + vt[5].delta) == 0) {
        obj = lbl_80495050;
        vt = *(Ent **)obj;
        r = ((u8 *(*)(void *, s32))vt[13].pfn)(obj + vt[13].delta, 0);
        vt = *(Ent **)(r + 0x68);
        ((void (*)(void *, void *))vt[73].pfn)(r + vt[73].delta, self);
        obj = lbl_80495050;
        vt = *(Ent **)obj;
        ((void (*)(void *, void *))vt[14].pfn)(obj + vt[14].delta, r);
    }
}

s32 fn_8036ED88(void) {
    return 0;
}

void fn_8036ED90(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}

void fn_8036ED9C(void) {

}

void fn_8036EDA0(void) {

}

s32 fn_8036EDA4(void) {
    return 1;
}

void fn_8036EDAC(void *arg0, s32 arg1) {
    extern u8 lbl_8041DBE8[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_8041DBE8;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void *fn_8036EDE0(void *arg0) {
    extern u8 lbl_8041DBE8[];
    M2C_FIELD(arg0, void **, 8) = lbl_8041DBE8;
    return arg0;
}

void *fn_8036EDF4(void *arg0) {
    M2C_UNK fn_802D8B34();
    fn_802D8B34();
    M2C_FIELD(arg0, M2C_UNK **, 0x338) = &lbl_8041DC30;
    return arg0;
}

void fn_8036EE30(u8 *self) {
    *(u8 **)(self + 0x338) = lbl_8041DC30;
    fn_802D8BEC(self);
}

s32 fn_8036EE60(void) {
    return 0;
}

s32 *fn_8036EE68(s32 *self) {
    typedef struct { f32 x, y, z; } V3;
    typedef struct { s32 w, h, fmt; V3 v; s32 a, b; u8 *vt; } Tex;
    extern u8 lbl_8041DC58[];
    extern f32 lbl_803F53D0[];
    Tex *p = (Tex *)self;
    V3 t;
    s32 a, b, c;
    s32 *d;
    p->h = 0x40;
    p->w = 0x40;
    p->vt = lbl_8041DC58;
    p->fmt = 3;
    p->a = 1;
    p->b = 1;
    t.x = t.y = t.z = lbl_803F53D0[0];
    d = (s32 *)&p->v;
    a = ((s32 *)&t)[0];
    b = ((s32 *)&t)[1];
    c = ((s32 *)&t)[2];
    d[0] = a;
    d[1] = b;
    d[2] = c;
    p->h = -1;
    p->w = -1;
    return self;
}

extern u8 lbl_8041DC58[];
void fn_802D20E8(void *);
void fn_8036EEE0(void *self, s32 flags) {
    M2C_FIELD(self, u8 **, 0x20) = lbl_8041DC58;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8036EF14(void *arg0, void *arg1) {
    struct Blk { s32 v[8]; };
    *(struct Blk *)arg0 = *(struct Blk *)arg1;
    return 1;
}

s32 fn_8036EF74(s32 *self) {
    return *self;
}

s32 fn_8036EF7C(s32 *self) {
    return self[1];
}

void fn_8036EF84(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

s32 fn_8036EF8C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    return 1;
}

void fn_8036EFA4(void *arg0, void *arg1) {
    extern f32 lbl_803F53E0[];
    s32 a = M2C_FIELD(arg0, s32 *, 0) - 1;
    s32 b = M2C_FIELD(arg0, s32 *, 4) - 1;
    f32 z = lbl_803F53E0[0];
    M2C_FIELD(arg1, f32 *, 0) = z;
    M2C_FIELD(arg1, f32 *, 8) = a;
    M2C_FIELD(arg1, f32 *, 4) = z;
    M2C_FIELD(arg1, f32 *, 0xC) = b;
}

s32 fn_8036F018(s32 *self) {
    return self[2];
}

void *fn_8036F020(u8 *self) {
    extern u8 lbl_8041DCC8[];
    *(u8 **)(self + 0x24) = lbl_8041DCC8;
    *(s32 *)(self + 0x0) = 0;
    *(s32 *)(self + 0x4) = 0;
    *(s32 *)(self + 0x8) = 0;
    *(s16 *)(self + 0x12) = 0x40;
    *(s16 *)(self + 0x10) = 0x40;
    self[0x18] = 1;
    self[0x19] = 0;
    self[0x1A] = 0x20;
    self[0x1B] = 0;
    *(s16 *)(self + 0x14) = 0;
    *(s16 *)(self + 0x16) = 0;
    *(s32 *)(self + 0x1C) = 0;
    *(u32 *)(self + 0x20) = 0x900DBEEF;
    return self;
}

void fn_8036F080(void *arg0, s32 arg1) {
    void fn_80338184(void *, void *);
    extern u8 lbl_8041DCC8[];
    extern u8 lbl_8045BAE8[];
    M2C_FIELD(arg0, s32 *, 0x20) = 0xDEADBEEF;
    M2C_FIELD(arg0, void **, 0x24) = lbl_8041DCC8;
    if (arg1 & 1) {
        fn_80338184(lbl_8045BAE8, arg0);
    }
}

s32 fn_8036F0D0(void *arg0, void *arg1) {
    struct Blk { s32 v[8]; };
    *(struct Blk *)arg0 = *(struct Blk *)arg1;
    return 1;
}

void fn_8036F130(void) {

}

void fn_8036F134(void) {

}

void fn_8036F138(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_8036F168(u32 size, void *p);
void *fn_8036F168(u32 size, void *p) {
    return p;
}

void fn_8036F170(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

u8 fn_8036F19C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x18);
}

u8 fn_8036F1A4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A);
}

u16 fn_8036F1AC(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x10);
}

u16 fn_8036F1B4(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x12);
}

u8 fn_8036F1BC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x19);
}

u8 fn_8036F1C4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1B);
}

u16 fn_8036F1CC(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x14);
}

s32 fn_8036F1D4(s32 *self) {
    return self[2];
}

s32 fn_8036F1DC(void) {
    return 1;
}

void fn_8036F1E4(void) {

}

void fn_8036F1E8(void) {

}

void fn_8036F1EC(void) {

}

s32 fn_8036F1F0(void) {
    return 0;
}

s32 fn_8036F1F8(void) {
    return 0;
}

void fn_8036F200(char *self) {
    char *vt = *(char **)(self + 0x24);
    (*(void (**)(char *))(vt + 0x4C))(self + *(s16 *)(vt + 0x48));
}

void fn_8036F234(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFC);
}

void fn_8036F244(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFF7F);
}

void fn_8036F254(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x80);
}

void fn_8036F264(void) {
    extern void fn_80378278(const char *, ...);
    extern char lbl_803F543C[];
    fn_80378278(lbl_803F543C);
}

s32 fn_8036F290(void *arg0) {
    return M2C_FIELD(arg0, u32 *, 0x20) == 0x900DBEEF;
}

s32 fn_8036F2AC(void *arg0, void *arg1) {
    extern void fn_8036F958(void *, void *, void *, s32);
    extern s32 lbl_80495238;
    extern s32 lbl_8049523C;
    extern s32 lbl_80495240;
    extern u8 lbl_803F5448[];
    extern u8 lbl_803F544C[];
    fn_8036F958(&lbl_80495238, lbl_803F5448, arg0, 0x98);
    if (lbl_80495238 == 0) {
        return -1;
    }
    fn_8036F958(&lbl_8049523C, lbl_803F544C, arg1, 0x34);
    if (lbl_8049523C == 0) {
        return -1;
    }
    lbl_80495240 = 0;
    return 0;
}

s32 fn_8036F334(void) {
    M2C_UNK fn_8036FA90(M2C_UNK *);
    extern M2C_UNK lbl_80495238;
    extern M2C_UNK lbl_8049523C;
    fn_8036FA90(&lbl_80495238);
    fn_8036FA90(&lbl_8049523C);
    return 0;
}

s32 fn_8036F364(void *arg0) {
    extern s32 lbl_80495240;
    extern s32 lbl_80475658[];
    if (lbl_80495240 > 7) {
        return -1;
    }
    lbl_80475658[lbl_80495240++] = M2C_FIELD(arg0, s32 *, 0x90);
    return 0;
}

s32 fn_8036F3A4(void *arg0) {
    extern s32 lbl_80495240;
    extern s32 lbl_80475658[];
    if (lbl_80495240 == 0) {
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = lbl_80475658[--lbl_80495240];
    return 0;
}

s32 fn_8036F3E0(void **arg0, char *arg1, s32 arg2) {
    void *fn_8036FACC(s32);
    void fn_80248784(char *, char *);
    extern s32 lbl_80495238;
    u8 *p;
    if ((p = fn_8036FACC(lbl_80495238)) == NULL) {
        return -2;
    }
    ETexture_Clear(p, 0x98);
    fn_80248784((char *)(p + 4), arg1);
    M2C_FIELD(p, s32 *, 0x94) = arg2;
    M2C_FIELD(p, s32 *, 0x88) = 0;
    M2C_FIELD(p, s32 *, 0x8C) = 0;
    M2C_FIELD(p, s32 *, 0x90) = 0;
    *arg0 = p;
    return 0;
}

void fn_8036F45C(void **arg0) {
    s32 fn_8036F364(void *);
    void fn_8036F5E4(void *, void *);
    s32 fn_8036F3A4(void *);
    s32 fn_8036FB28(void *, void *);
    extern s32 lbl_80495238;
    void *n;
    fn_8036F364(*arg0);
    M2C_FIELD(*arg0, void **, 0x90) = M2C_FIELD(*arg0, void **, 0x88);
    while ((n = M2C_FIELD(*arg0, void **, 0x90)) != NULL) {
        M2C_FIELD(*arg0, void **, 0x90) = *(void **)M2C_FIELD(*arg0, void **, 0x90);
        fn_8036F5E4(*arg0, n);
    }
    fn_8036F3A4(*arg0);
    fn_8036FB28((void *)lbl_80495238, *arg0);
    *arg0 = NULL;
}

void *fn_8036F4EC(void *arg0, char *arg1, s32 arg2, s32 arg3) {
    void *fn_8036FACC(s32);
    void fn_80248488(void *, s32, s32);
    void fn_80248784(void *, char *);
    void fn_8036F7DC(void *, void *, s32);
    extern s32 lbl_8049523C;
    u8 *p = fn_8036FACC(lbl_8049523C);
    if (p == NULL) {
        return NULL;
    }
    fn_80248488(p, 0, 0x34);
    fn_80248784(p + 0x10, arg1);
    M2C_FIELD(p, s32 *, 8) = arg2;
    fn_8036F7DC(arg0, p, arg3);
    return p;
}

s32 fn_8036F568(void *arg0, s32 arg1) {
    void *fn_8036F6E4(void *, s32, s32);
    void fn_8036F5E4(void *, void *);
    void *node;

    node = ((void *(*)(void *, s32))fn_8036F6E4)(arg0, arg1);
    if (node == NULL) {
        return -1;
    }
    fn_8036F5E4(arg0, node);
    return 0;
}

s32 fn_8036F5AC(void *arg0, s32 arg1) {
    void *fn_8036F6E4(void *, s32, s32);
    s32 var_r0;
    void *temp_r3;

    temp_r3 = fn_8036F6E4(arg0, arg1, 0);
    var_r0 = 0;
    if (temp_r3 != NULL) {
        var_r0 = M2C_FIELD(temp_r3, s32 *, 8);
    }
    return var_r0;
}

void fn_8036F5E4(void *arg0, void *arg1) {
    void fn_8036F65C(void *, void *);
    s32 fn_8036FB28(void *, void *);
    extern void *lbl_8049523C;
    void (*cb)(void *);

    fn_8036F65C(arg0, arg1);
    cb = M2C_FIELD(arg0, void (**)(void *), 0x94);
    if (cb != NULL && M2C_FIELD(arg1, s32 *, 8) != 0 && ((u32)M2C_FIELD(arg1, s32 *, 0xC) >> 30) == 0) {
        cb((u8 *)arg1 + 8);
    }
    if (M2C_FIELD(arg1, s32 *, 0xC) >= 0) {
        fn_8036FB28(lbl_8049523C, arg1);
    }
}

void fn_8036F65C(void *arg0, void **arg1) {
    void **t;

    if (arg1 == M2C_FIELD(arg0, void ***, 0x88)) {
        M2C_FIELD(arg0, void **, 0x88) = arg1[0];
        if (M2C_FIELD(arg0, void **, 0x88) == NULL) {
            M2C_FIELD(arg0, void **, 0x8C) = NULL;
        }
    } else if (arg1 == M2C_FIELD(arg0, void ***, 0x8C)) {
        M2C_FIELD(arg0, void **, 0x8C) = arg1[1];
    }
    t = arg1[1];
    if (t != NULL) {
        t[0] = arg1[0];
    }
    t = arg1[0];
    if (t != NULL) {
        t[1] = arg1[1];
    }
    if (--M2C_FIELD(arg0, s32 *, 0x84) < 0) {
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
    }
    arg1[0] = NULL;
    arg1[1] = NULL;
}

void *fn_8036F6E4(void *arg0, char *name, s32 key) {
    s32 fn_8036F364(void *);
    s32 fn_8036F3A4(void *);
    s32 fn_802486DC(char *, char *);
    s32 found;
    u8 *cur;

    if (name != NULL) {
        found = 0;
        fn_8036F364(arg0);
        if ((cur = M2C_FIELD(arg0, u8 **, 0x90) = M2C_FIELD(arg0, u8 **, 0x88)) != NULL) {
            do {
                if (fn_802486DC((char *)(cur + 0x10), name) == 0) {
                    found = 1;
                } else {
                    M2C_FIELD(arg0, u8 **, 0x90) = *M2C_FIELD(arg0, u8 ***, 0x90);
                }
                if (found) {
                    break;
                }
            } while ((cur = M2C_FIELD(arg0, u8 **, 0x90)) != NULL);
        }
    } else {
        if (key == 0) {
            return NULL;
        }
        found = 0;
        fn_8036F364(arg0);
        if ((cur = M2C_FIELD(arg0, u8 **, 0x90) = M2C_FIELD(arg0, u8 **, 0x88)) != NULL) {
            do {
                if (M2C_FIELD(cur, s32 *, 8) == key) {
                    found = 1;
                } else {
                    M2C_FIELD(arg0, u8 **, 0x90) = *M2C_FIELD(arg0, u8 ***, 0x90);
                }
                if (found) {
                    break;
                }
            } while ((cur = M2C_FIELD(arg0, u8 **, 0x90)) != NULL);
        }
    }
    fn_8036F3A4(arg0);
    return cur;
}

void fn_8036F8E4(void *arg0) {
    s32 fn_8036F364(void *);
    s32 fn_8036F3A4(void *);
    void fn_8036F65C(void *, void **);
    s32 fn_8036FB28(void *, void *);
    extern void *lbl_8049523C;
    void **node;
    fn_8036F364(arg0);
    M2C_FIELD(arg0, void **, 0x90) = M2C_FIELD(arg0, void **, 0x88);
    node = M2C_FIELD(arg0, void **, 0x88);
    while (node != NULL) {
        M2C_FIELD(arg0, void **, 0x90) = *M2C_FIELD(arg0, void ***, 0x90);
        fn_8036F65C(arg0, node);
        fn_8036FB28(lbl_8049523C, node);
        node = M2C_FIELD(arg0, void **, 0x90);
    }
    fn_8036F3A4(arg0);
}

void fn_8036FA90(void **arg0) {
    extern void *fn_802D0AB8();
    void fn_802D1A00(void *, void *);
    fn_802D1A00(fn_802D0AB8(), *arg0);
    *arg0 = 0;
}

void *fn_8036FACC(s32 arg0) {
    u8 *pool = (u8 *)arg0;
    u8 *node;
    u8 *head;
    if (pool == NULL) {
        return NULL;
    }
    node = M2C_FIELD(pool, u8 **, 0xC);
    if (node == NULL) {
        return NULL;
    }
    M2C_FIELD(pool, u8 **, 0xC) = M2C_FIELD(node, u8 **, 0);
    M2C_FIELD(node, u8 **, 4) = NULL;
    M2C_FIELD(node, u8 **, 0) = M2C_FIELD(pool, u8 **, 0x10);
    head = M2C_FIELD(pool, u8 **, 0x10);
    if (head != NULL) {
        M2C_FIELD(head, u8 **, 4) = node;
    }
    M2C_FIELD(pool, u8 **, 0x10) = node;
    M2C_FIELD(pool, s32 *, 8)++;
    return node + 8;
}

s32 fn_8036FB28(void *arg0, void *arg1) {
    void **temp_r9;
    void *temp_r10;
    void *temp_r9_2;

    temp_r10 = arg1 - 8;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) == 0) {
        return -1;
    }
    if (temp_r10 == (void *) M2C_FIELD(arg0, void **, 0x10)) {
        M2C_FIELD(arg0, void **, 0x10) = (void *) M2C_FIELD(arg1, void **, -8);
    }
    temp_r9 = M2C_FIELD(temp_r10, void ***, 4);
    if (temp_r9 != NULL) {
        *temp_r9 = M2C_FIELD(arg1, void **, -8);
    }
    temp_r9_2 = M2C_FIELD(arg1, void **, -8);
    if (temp_r9_2 != NULL) {
        M2C_FIELD(temp_r9_2, void ***, 4) = (void **) M2C_FIELD(temp_r10, void ***, 4);
    }
    M2C_FIELD(temp_r10, void ***, 4) = NULL;
    M2C_FIELD(arg1, void **, -8) = (void *) M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(arg0, void **, 0xC) = temp_r10;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
    return 0;
}

s32 fn_8036FBA8(void *arg0, s32 arg1) {
    return (M2C_FIELD(arg0, s32 *, 0x7C) & (1 << arg1)) != 0;
}

s32 fn_8036FBC8(void *arg0, s32 arg1) {
    return (M2C_FIELD(arg0, s32 *, 0x80) & (1 << arg1)) != 0;
}

M2C_UNK fn_8036FBE8(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x7C) |= 1 << arg1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x7C) &= ~(1 << arg1);
}

M2C_UNK fn_8036FC20(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x80) |= 1 << arg1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x80) &= ~(1 << arg1);
}

void fn_8036FC58(void *arg0, s32 arg1) {
    extern f32 lbl_803F547C[];
    s32 var_r31;
    s32 var_ctr;
    s32 temp_r0;
    void *var_r9;
    f32 temp_f0;

    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    temp_f0 = lbl_803F547C[0];
    var_r9 = arg0 + 0x68;
    var_ctr = 2;
    do {
        M2C_FIELD(var_r9, f32 *, -0x2C) = temp_f0;
        M2C_FIELD(var_r9, f32 *, -0x30) = temp_f0;
        M2C_FIELD(var_r9, f32 *, -0x3C) = temp_f0;
        M2C_FIELD(var_r9, f32 *, -0x40) = temp_f0;
        M2C_FIELD(var_r9, f32 *, -0xC) = temp_f0;
        M2C_FIELD(var_r9, f32 *, -0x10) = temp_f0;
        M2C_FIELD(var_r9, f32 *, -0x1C) = temp_f0;
        M2C_FIELD(var_r9, f32 *, -0x20) = temp_f0;
        M2C_FIELD(var_r9, s32 *, 4) = 0;
        M2C_FIELD(var_r9, s32 *, 0) = 0;
        var_r9 += 8;
        var_ctr -= 1;
    } while (var_ctr != 0);
    temp_r0 = 0;
    if (arg1 == 0) {
        temp_r0 = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x14) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    var_r31 = 0;
    do {
        fn_8036FC20(arg0, var_r31, 0);
        fn_8036FBE8(arg0, var_r31, 0);
        var_r31 += 1;
    } while (var_r31 <= 0x1F);
}

void fn_8036FD3C(void *arg0, s32 arg1) {
    extern f32 lbl_803F5480[];
    s32 i;
    s32 j;
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xC) = M2C_FIELD(arg0, s32 *, 0x8);
    M2C_FIELD(arg0, s32 *, 0x14) = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x1C) = M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x8) = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            M2C_FIELD(arg0, f32 *, 0x38 + i * 8 + j * 4) = M2C_FIELD(arg0, f32 *, 0x28 + i * 8 + j * 4);
            M2C_FIELD(arg0, f32 *, 0x58 + i * 8 + j * 4) = M2C_FIELD(arg0, f32 *, 0x48 + i * 8 + j * 4);
            M2C_FIELD(arg0, f32 *, 0x48 + i * 8 + j * 4) = lbl_803F5480[0];
            M2C_FIELD(arg0, s32 *, 0x68 + i * 8 + j * 4) = 0;
        }
    }
    temp_r0 = 0;
    if (arg1 == 0) {
        temp_r0 = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = temp_r0;
    for (i = 0; i < 32; i++) {
        fn_8036FC20(arg0, i, 0);
        fn_8036FBE8(arg0, i, 0);
    }
}

void fn_8036FE3C(void *arg0, void *arg1) {
    s32 fn_8036FBA8(void *, s32);
    s32 fn_8036FBC8(void *, s32);
    M2C_UNK fn_8036FBE8(void *, s32, s32);
    M2C_UNK fn_8036FC20(void *, s32, s32);
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r9;
    s32 var_ctr;
    s32 var_r31;
    void *var_r10;
    void *var_r11;

    var_ctr = 2;
    var_r10 = arg0 + 0x6C;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    var_r11 = arg1 + 0x6C;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    do {
        M2C_FIELD(var_r10, f32 *, -0x44) = (f32) M2C_FIELD(var_r11, f32 *, -0x44);
        M2C_FIELD(var_r10, f32 *, -0x40) = (f32) M2C_FIELD(var_r11, f32 *, -0x40);
        M2C_FIELD(var_r10, f32 *, -0x34) = (f32) M2C_FIELD(var_r11, f32 *, -0x34);
        M2C_FIELD(var_r10, f32 *, -0x30) = (f32) M2C_FIELD(var_r11, f32 *, -0x30);
        M2C_FIELD(var_r10, f32 *, -0x24) = (f32) M2C_FIELD(var_r11, f32 *, -0x24);
        M2C_FIELD(var_r10, f32 *, -0x20) = (f32) M2C_FIELD(var_r11, f32 *, -0x20);
        M2C_FIELD(var_r10, f32 *, -0x14) = (f32) M2C_FIELD(var_r11, f32 *, -0x14);
        M2C_FIELD(var_r10, f32 *, -0x10) = (f32) M2C_FIELD(var_r11, f32 *, -0x10);
        M2C_FIELD(var_r10, s32 *, -4) = (s32) M2C_FIELD(var_r11, s32 *, -4);
        temp_r9 = M2C_FIELD(var_r11, s32 *, 0);
        var_r11 += 8;
        M2C_FIELD(var_r10, s32 *, 0) = temp_r9;
        var_r10 += 8;
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_r31 = 0;
    do {
        fn_8036FC20(arg0, var_r31, fn_8036FBC8(arg1, var_r31));
        temp_r5 = fn_8036FBA8(arg1, var_r31);
        temp_r4 = var_r31;
        var_r31 += 1;
        fn_8036FBE8(arg0, temp_r4, temp_r5);
    } while (var_r31 <= 0x1F);
}

void *fn_8036FF6C(void *arg0) {
    extern u8 lbl_8041DD60[];
    M2C_FIELD(arg0, void **, 4) = lbl_8041DD60;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return arg0;
}

void fn_8036FF88(void) {

}

void fn_8036FF8C(void) {

}

void fn_8036FF90(void) {

}

s32 fn_8036FF94(void) {
    return 0;
}

s32 fn_8036FF9C(void) {
    return 0;
}

s32 fn_8036FFA4(void) {
    return 0;
}

s32 fn_8036FFAC(void) {
    return 0;
}

void fn_8036FFB4(void) {

}

s32 fn_8036FFB8(s32 *self) {
    return *self;
}

s32 fn_8036FFC0(s32 *p) {
    if (*p != 0) {
        return 0;
    }
    *p = 1;
    return 1;
}

s32 fn_8036FFE8(s32 *p) {
    if (*p == 0) {
        return 0;
    }
    *p = 0;
    return 1;
}

void fn_802D2FD0(void);
void fn_80370010(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80370030(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80370070(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_803701E8(void *self, s32 flags) {
    extern u8 lbl_8041DDC8[];
    extern u8 lbl_8041DE50[];
    extern u8 lbl_80419678[];
    extern u8 lbl_8045B0F0[];
    extern s32 lbl_80495244;
    void fn_803BFB20(void *, s32);
    void fn_803BFA34(void *, s32);
    void fn_803BF948(void *, s32);
    void fn_802DDC18(void *);
    void fn_8031E910(void *, s32);
    void fn_80338184(void *, s32);
    u8 *p;
    s32 count;

    count = lbl_80495244;
    M2C_FIELD(self, void **, 0) = lbl_8041DDC8;
    lbl_80495244 = count - 1;
    fn_803BFB20((u8 *)self + 0x90, 2);
    p = (u8 *)self + 0x58;
    M2C_FIELD(p, void **, 0x10) = lbl_8041DE50;
    fn_802DDC18(p);
    M2C_FIELD(p, void **, 0x10) = lbl_80419678;
    fn_802DDC18(p);
    fn_803BFA34((u8 *)self + 0x4C, 2);
    fn_803BF948((u8 *)self + 0x3C, 2);
    fn_8031E910(self, 0);
    if (flags & 1) {
        fn_80338184(lbl_8045B0F0, (s32)self);
    }
}

s32 fn_803702A0(u32 arg0) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if ((u8)arg0 > 0x20) {
            return 1;
        }
        arg0 >>= 8;
    }
    return 0;
}

s32 fn_80370428(s32 *arr, u8 *data) {
    void *fn_802482F8(void *, const void *, u32);
    void fn_803BFDA0(void *, s32, s32);
    u8 *start = data;
    s32 n;
    s32 i;

    fn_802482F8(&n, data, 4);
    data += 4;
    fn_803BFDA0(arr, n, 0);
    for (i = 0; i < n; i++) {
        fn_802482F8((u8 *)*arr + i * 4, data, 4);
        data += 4;
    }
    return data - start;
}

M2C_UNK fn_80370E68(s32 arg0, s32 arg1) {
    extern s32 lbl_80496308;
    extern u8 lbl_80493DCC[];
    extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
    extern void fn_80370ED8(void);
    extern void fn_80370F00(void *);
    extern void fn_80370F2C(void *);
    extern u8 lbl_803F54B0[];
    extern u8 lbl_80493858[];
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_80496308 = fn_802D6A90(lbl_80493DCC, fn_80370ED8, fn_80370F00, fn_80370F2C, 1, lbl_803F54B0, lbl_80493858);
    }
}

void fn_80370ED8(void) {
    M2C_UNK fn_803700B0();
    M2C_UNK fn_8037104C(M2C_UNK);
    fn_8037104C(0x9C);
    fn_803700B0();
}

void fn_80370F00(void *self) {
    void *fn_8037107C(u32 size, void *p);
    M2C_UNK fn_803700B0(void *);
    fn_803700B0(fn_8037107C(0x9C, self));
}

extern void fn_803701E8(void *, s32);
void *fn_802482F8(void *, const void *, u32);
void fn_803BFDA0(void *, s32, s32);
void fn_80370F2C(void *self) {
    fn_803701E8(self, 2);
}

void fn_80370F50(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493DCC[];
void *fn_80370F90(void) {
    return lbl_80493DCC;
}

extern s32 lbl_80493DD8[];
s32 fn_80370F9C(void) {
    return lbl_80493DD8[0];
}

extern s32 lbl_80493DDC[];
s32 fn_80370FA8(void) {
    return lbl_80493DDC[0];
}

extern u16 lbl_80493DE0[];
u16 fn_80370FB4(void) {
    return lbl_80493DE0[0];
}

void *fn_80370FC0(void) {
    return lbl_80493DCC;
}

extern u16 lbl_80493DE2[];
u16 fn_80370FCC(void) {
    return lbl_80493DE2[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80370ED8(void);
extern void fn_80370F00();
extern void fn_80370F2C();
extern u8 lbl_803F54B0[];
extern u8 lbl_80493858[];
void fn_80370FD8(s32 arg0) {
    fn_802D6A90(lbl_80493DCC, fn_80370ED8, fn_80370F00, fn_80370F2C, arg0, lbl_803F54B0, lbl_80493858);
}

void fn_802D2430(void);
void fn_8037102C(void) {
    fn_802D2430();
}

void fn_8037104C(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045B0F0[];
    fn_80338000(lbl_8045B0F0, arg0, 4);
}

void *fn_8037107C(u32 size, void *p);
void *fn_8037107C(u32 size, void *p) {
    return p;
}

void fn_80371084(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045B0F0[];
    fn_80338184(lbl_8045B0F0, arg0);
}

void fn_803710B0(void) {
    M2C_UNK fn_80370E68(M2C_UNK, M2C_UNK);
    fn_80370E68(1, 0xFFFF);
}

