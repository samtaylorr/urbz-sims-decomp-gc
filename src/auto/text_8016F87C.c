/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void **fn_8039AB24(void **node);

typedef struct XMapIter {
    void **node;
} XMapIter;

static inline XMapIter XMap_Begin(char *map) {
    XMapIter it;
    it.node = (*(void ***)(map + 4))[2];
    return it;
}

static inline XMapIter XMap_End(char *map) {
    XMapIter it;
    it.node = *(void ***)(map + 4);
    return it;
}

static inline XMapIter XMapIter_PostInc(XMapIter *it) {
    XMapIter old = *it;
    it->node = fn_8039AB24(it->node);
    return old;
}

static inline s32 XMapIter_NotEqual(XMapIter *a, XMapIter *b) {
    return a->node != b->node;
}

s32 *fn_8016F87C(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

s32 *fn_8016F890(s32 *arg0, s32 arg1) {
    arg0[0] = arg1;
    arg0[1] = 0;
    return arg0;
}

s32 *fn_8016F8A4(s32 *arg0, s32 *arg1) {
    arg0[0] = arg1[0];
    arg0[1] = arg1[1];
    return arg0;
}

s32 *fn_8016F8BC(s32 *arg0, s32 arg1) {
    arg0[0] = arg1;
    arg0[1] = 0;
    return arg0;
}

s32 *fn_8016F8D0(s32 *arg0, s32 *arg1) {
    arg0[0] = arg1[0];
    arg0[1] = arg1[1];
    return arg0;
}

s32 *fn_8016F8E8(s32 *arg0) {
    arg0[1]--;
    return arg0;
}

s32 *fn_8016F8FC(s32 *arg0, s32 arg1) {
    arg0[1] += arg1;
    return arg0;
}

void *fn_8016F910(void *arg0) {
    char **arr;
    char *p;
    s32 n;
    s32 idx;
    s32 last;

    arr = M2C_FIELD(arg0, char ***, 0);
    n = 0;
    p = *arr;
    if (p != NULL) {
        n = M2C_FIELD(p, s32 *, -4);
    }
    idx = M2C_FIELD(arg0, s32 *, 4);
    if (idx < n) {
        M2C_FIELD(arg0, s32 *, 4) = idx + 1;
        return *arr + (idx << 4);
    }
    last = 0;
    if (p != NULL) {
        last = M2C_FIELD(p, s32 *, -4);
    }
    return p + ((last - 1) << 4);
}

s32 fn_8016F968(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0) != 0;
}

void fn_8016F980(void *arg0) {
    s32 var_r11;
    void *temp_r9;

    var_r11 = 0;
    temp_r9 = *M2C_FIELD(arg0, void ***, 0);
    if (temp_r9 != NULL) {
        var_r11 = M2C_FIELD(temp_r9, s32 *, -4);
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (var_r11 - 1);
}

void fn_8016F9A4(void *arg0, char *arg1) {
    extern void *fn_800F5248(void *, const char *);
    extern void *fn_800F5330(void *, s32);
    extern char lbl_803DA17C[];
    extern char lbl_803DA190[];
    extern s32 lbl_80495A90;
    void *vt;

    fn_800F5248(fn_800F5330(fn_800F5248(&lbl_80495A90, lbl_803DA17C), M2C_FIELD(arg0, s32 *, 4)), lbl_803DA190);
    fn_800F5248(fn_800F5248(&lbl_80495A90, arg1), lbl_803DA190);
    vt = M2C_FIELD(arg0, void **, 0xBC);
    M2C_FIELD(vt, void (**)(void *), 0xEC)((char *)arg0 + M2C_FIELD(vt, s16 *, 0xE8));
}

void fn_8016FA20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}

void fn_8016FA28(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32, s32), 0x20)(arg1, arg2);
}

s32 fn_8016FA58(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
    return 1;
}

void fn_8016FA64(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32, s32, s32), 0x34)(arg1, arg2, arg3);
}

void *fn_8016FD88(void *arg0, s32 arg1) {
    extern void fn_80174B98(void *, s32, s32);
    extern char lbl_804121A0[];
    extern char lbl_804122E8[];
    u32 hash = 0xE49EC7F7;
    M2C_FIELD(arg0, char **, 0xBC) = lbl_804122E8;
    M2C_FIELD(arg0, u32 *, 0) = 0xABADCAFE;
    M2C_FIELD(arg0, u32 *, 8) = hash;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    fn_80174B98((char *)arg0 + 0x18, 0x1F, 0x11);
    M2C_FIELD(arg0, s32 *, 0xC0) = arg1;
    M2C_FIELD(arg0, char **, 0xBC) = lbl_804121A0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0x400;
    return arg0;
}

s32 fn_8016FE18(void) {
    return 1;
}

void fn_80170714(void *arg0, s32 arg1, s32 arg2) {
    s32 *vals = (s32 *)((char *)arg0 + 0x5C);
    s32 *p = &vals[10];
    p[arg1] = arg2;
}

s32 fn_80170728(void *arg0, s32 arg1) {
    s32 (*vals)[10] = (s32 (*)[10])((char *)arg0 + 0x5C);
    return vals[1][arg1];
}

extern u8 lbl_80434F64[];
void fn_80174B18(u8 *arg);
void fn_8017073C(void) {
    fn_80174B18(lbl_80434F64);
}

s32 fn_80170764(void) {
    return 0;
}

s32 fn_8017076C(void) {
    return 0;
}

s32 fn_80170868(void *self, void *obj) {
    void fn_801708F4(void *, void *);
    void *fn_80399BE8(u32);
    u8 buf[24];
    void *vt;
    void **head;
    void **prev;
    void **node;

    fn_801708F4(self, obj);
    vt = M2C_FIELD(obj, void **, 0xBC);
    M2C_FIELD(vt, void (**)(), 0x16C)(buf + 0x10, (char *)obj + M2C_FIELD(vt, s16 *, 0x168));
    *(void **)(buf + 8) = M2C_FIELD(self, void **, 8);
    node = fn_80399BE8(0xC);
    node[2] = *(void **)(buf + 0x10);
    head = *(void ***)(buf + 8);
    prev = head[1];
    node[0] = head;
    node[1] = prev;
    prev[0] = node;
    head[1] = node;
    *(void ***)(buf + 0) = node;
    return 1;
}

s32 fn_80170E8C(void *self) {
    void **fn_8039AB24(void **node);
    u8 buf[32];
    s32 max;
    char *map;
    void **node;
    s32 more;

    map = (char *)self + 0x44;
    max = 0;
    *(void ***)(buf + 0) = M2C_FIELD(map, void ***, 4);
    *(void ***)(buf + 8) = M2C_FIELD(M2C_FIELD(map, void ***, 4), void ***, 8);
    for (;;) {
        more = 1;
        if (*(void ***)(buf + 8) == *(void ***)(buf + 0)) {
            more = 0;
        }
        if (!more) {
            break;
        }
        node = *(void ***)(buf + 8);
        if (max < M2C_FIELD(node, s32 *, 0x14)) {
            max = M2C_FIELD(node, s32 *, 0x14);
        }
        *(void ***)(buf + 0x18) = node;
        *(void ***)(buf + 8) = fn_8039AB24(node);
        *(void ***)(buf + 0x10) = *(void ***)(buf + 0x18);
    }
    return max;
}

s32 fn_801710CC(char *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        void *vt = M2C_FIELD(arg0, void **, 0xBC);
        M2C_FIELD(vt, void (**)(void *), 0xAC)(arg0 + M2C_FIELD(vt, s16 *, 0xA8));
    }
    return ++M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80171124(char *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 1) {
        void *vt = M2C_FIELD(arg0, void **, 0xBC);
        M2C_FIELD(vt, void (**)(void *), 0xA4)(arg0 + M2C_FIELD(vt, s16 *, 0xA0));
        if (arg0 != NULL) {
            vt = M2C_FIELD(arg0, void **, 0xBC);
            M2C_FIELD(vt, void (**)(void *, s32), 0x14)(arg0 + M2C_FIELD(vt, s16 *, 0x10), 3);
        }
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x10)--;
}

s32 fn_80171678(char *arg0) {
    s32 fn_80171818(char *);
    void fn_80174E84(s32 *, s32);
    s32 tmp;
    fn_80171818(arg0);
    fn_80174E84(&tmp, M2C_FIELD(arg0, s32 *, 0x328));
    M2C_FIELD(arg0, s32 *, 0xC8) = tmp;
    return 1;
}

s32 fn_801716BC(char *arg0) {
    s32 fn_801718C8(char *);
    s32 fn_80174BFC(s32 *);
    s32 fn_80174C90(s32 *);
    void *vt = M2C_FIELD(arg0, void **, 0xBC);
    M2C_FIELD(vt, void (**)(void *), 0x12C)(arg0 + M2C_FIELD(vt, s16 *, 0x128));
    fn_801718C8(arg0);
    fn_80174BFC((s32 *)(arg0 + 0x28C));
    fn_80174C90((s32 *)(arg0 + 0x1E0));
    return 1;
}

s32 fn_80171718(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x328), s32 *, 0x18);
}

s32 fn_80171724(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x328) + 0x10;
}

s32 fn_80171818(char *arg0) {
    s32 fn_80174B98(s32 *, s32, s32);
    s32 fn_80174C24(s32 *, s32, s32);
    s32 fn_801749B4(void *, s32, s32);
    s32 *fn_80174E84(s32 *, s32);
    extern char lbl_80435040[];
    extern char lbl_804350DC[];
    extern u8 lbl_80434F64[];
    char *a = arg0 + 0x18;
    char *b = arg0 + 0xD0;
    char *c = arg0 + 0x17C;
    s32 tmp;
    s32 *unused;
    fn_80174B98((s32 *)a, 0x1F, 0x11);
    fn_80174C24((s32 *)b, 9, 0x32);
    fn_801749B4(c, 0xC, 1);
    M2C_FIELD(a, char **, 0x10) = b;
    M2C_FIELD(a, char **, 0x14) = lbl_80435040;
    M2C_FIELD(b, char **, 0x14) = lbl_804350DC;
    M2C_FIELD(b, char **, 0x10) = c;
    M2C_FIELD(c, char **, 0x14) = 0;
    M2C_FIELD(c, u8 **, 0x10) = lbl_80434F64;
    unused = fn_80174E84(&tmp, 0);
    M2C_FIELD(arg0, s32 *, 0xC8) = tmp;
    return 1;
}

s32 fn_801718C8(char *arg0) {
    s32 fn_80174BFC(s32 *);
    s32 fn_80174C90(s32 *);
    s32 fn_80174A44(s32 *);
    char *obj;
    char *vt;
    fn_80174BFC((s32 *)(arg0 + 0x18));
    fn_80174C90((s32 *)(arg0 + 0xD0));
    fn_80174A44((s32 *)(arg0 + 0x17C));
    obj = M2C_FIELD(arg0, char **, 0x1DC);
    if (obj != NULL) {
        vt = M2C_FIELD(obj, char **, 0xBC);
        M2C_FIELD(vt, void (**)(void *), 0xA4)(obj + M2C_FIELD(vt, s16 *, 0xA0));
        obj = M2C_FIELD(arg0, char **, 0x1DC);
        if (obj != NULL) {
            vt = M2C_FIELD(obj, char **, 0xBC);
            M2C_FIELD(vt, void (**)(void *, s32), 0x14)(obj + M2C_FIELD(vt, s16 *, 0x10), 3);
        }
        M2C_FIELD(arg0, char **, 0x1DC) = NULL;
    }
    return 1;
}

s32 fn_80171960(void) {
    return 1;
}

s32 fn_80171F6C(char *self) {
    char *vt;
    vt = M2C_FIELD(self, char **, 0xBC);
    M2C_FIELD(vt, void (**)(void *), 0x8C)(self + M2C_FIELD(vt, s16 *, 0x88));
    vt = M2C_FIELD(self, char **, 0xBC);
    M2C_FIELD(vt, void (**)(void *), 0xDC)(self + M2C_FIELD(vt, s16 *, 0xD8));
    return 1;
}

s32 fn_80171FC8(char *arg0) {
    extern s32 lbl_80495C90;
    void fn_801708F4(void *, void *);
    void *vt;
    M2C_FIELD(arg0, s32 *, 0x1C4) = 1;
    vt = M2C_FIELD(arg0, void **, 0xBC);
    if (M2C_FIELD(vt, s32 (**)(void *), 0x54)(arg0 + M2C_FIELD(vt, s16 *, 0x50)) != 0) {
        char *sub = M2C_FIELD(arg0, char **, 0x1DC);
        if (sub != NULL) {
            vt = M2C_FIELD(sub, void **, 0xBC);
            M2C_FIELD(vt, void (**)(void *), 0xD4)(sub + M2C_FIELD(vt, s16 *, 0xD0));
        }
        fn_801708F4((void *)lbl_80495C90, arg0);
    }
    return 1;
}

s32 fn_8017204C(char *self) {
    extern s32 lbl_80495C90;
    char *vt;
    char *obj;
    char *g;
    M2C_FIELD(self, s32 *, 0x1C4) = 0;
    vt = M2C_FIELD(self, char **, 0xBC);
    if (M2C_FIELD(vt, s32 (**)(void *), 0x54)(self + M2C_FIELD(vt, s16 *, 0x50)) != 0) {
        obj = M2C_FIELD(self, char **, 0x1DC);
        if (obj != NULL) {
            vt = M2C_FIELD(obj, char **, 0xBC);
            M2C_FIELD(vt, void (**)(void *), 0xDC)(obj + M2C_FIELD(vt, s16 *, 0xD8));
        }
        g = (char *)lbl_80495C90;
        M2C_FIELD(self, s32 *, 0x19C) = M2C_FIELD(g, s32 *, 0x14);
        fn_80170868(g, self);
    }
    return 1;
}

s32 fn_80172204(char *self) {
    char *vt;
    char *obj;
    obj = M2C_FIELD(self, char **, 0x1DC);
    if (obj != NULL) {
        vt = M2C_FIELD(obj, char **, 0xBC);
        if (M2C_FIELD(vt, s32 (**)(void *), 0x54)(obj + M2C_FIELD(vt, s16 *, 0x50)) != 0) {
            vt = M2C_FIELD(M2C_FIELD(self, char **, 0x1DC), char **, 0xBC);
            M2C_FIELD(vt, void (**)(void *), 0xEC)(M2C_FIELD(self, char **, 0x1DC) + M2C_FIELD(vt, s16 *, 0xE8));
        }
    }
    return 1;
}

s32 fn_8017233C(char *self) {
    s32 fn_801727DC(void *);
    char *vt;
    if (M2C_FIELD(self, s32 *, 0x1C0) == 0) {
        vt = M2C_FIELD(self, char **, 0xBC);
        M2C_FIELD(vt, void (**)(void *, s32, s32, s32), 0x84)(self + M2C_FIELD(vt, s16 *, 0x80), 0, 0, 0);
    }
    vt = M2C_FIELD(self, char **, 0xBC);
    if (M2C_FIELD(vt, s32 (**)(void *), 0x5C)(self + M2C_FIELD(vt, s16 *, 0x58)) != 0) {
        return fn_801727DC(self);
    }
    vt = M2C_FIELD(self, char **, 0xBC);
    return M2C_FIELD(vt, s32 (**)(void *), 0xD4)(self + M2C_FIELD(vt, s16 *, 0xD0));
}

void fn_80172464(s32 arg0) {
    M2C_UNK fn_80174A98(s32);
    fn_80174A98(arg0 + 0x18);
}

s32 fn_80172758(char *obj, s32 idx) {
    char *vt = *(char **)(obj + 0xbc);
    s32 **p = (*(s32 **(**)(void *))(vt + 0x194))(obj + *(s16 *)(vt + 0x190));
    s32 n;
    s32 m;
    s32 off;
    if (idx < 0) {
        idx = 0;
    }
    n = 0;
    if (*p != NULL) {
        n = (*p)[-1];
    }
    if (idx >= n) {
        m = 0;
        if (*p != NULL) {
            m = (*p)[-1];
        }
        idx = m - 1;
    }
    off = idx << 2;
    return *(s32 *)((char *)*p + off);
}

void fn_801737C8(char *arg0, s32 a, s32 b) {
    M2C_FIELD(arg0, s32 *, 0x1C8) = a == b;
    M2C_FIELD(arg0, s32 *, 0x1CC) = a > b;
    M2C_FIELD(arg0, s32 *, 0x1D0) = a < b;
}

s32 fn_80173AC8(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x1DC);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0xBC);
        return M2C_FIELD(temp_r9, s32 (**)(void *), 0x14C)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x148));
    }
    return 1;
}

s32 fn_80173B10(char *arg0) {
    char *obj;
    void *vt;
    s32 t;

    if (M2C_FIELD(arg0, void **, 0x1DC) == NULL) {
        return 0;
    }
    obj = M2C_FIELD(arg0, char **, 0xC0);
    t = M2C_FIELD(arg0, s32 *, 0x44);
    vt = M2C_FIELD(obj, void **, 0xBC);
    t += M2C_FIELD(vt, s32 (**)(void *, s32), 0x74)(obj + M2C_FIELD(vt, s16 *, 0x70), 0x15);
    obj = M2C_FIELD(arg0, char **, 0x1DC);
    vt = M2C_FIELD(obj, void **, 0xBC);
    M2C_FIELD(vt, void (**)(void *, s32), 0xC4)(obj + M2C_FIELD(vt, s16 *, 0xC0), t - 0xE10);
    return 1;
}

void fn_80173B98(char *self, s32 a1) {
    void *vt = M2C_FIELD(self, void **, 0xBC);
    M2C_FIELD(vt, void (**)(void *, s32, s32, s32), 0x6C)(self + M2C_FIELD(vt, s16 *, 0x68), 0x13, a1, 0);
}

void fn_80173BD8(char *self, s32 a1) {
    void *vt = M2C_FIELD(self, void **, 0xBC);
    M2C_FIELD(vt, void (**)(void *, s32, s32, s32), 0x6C)(self + M2C_FIELD(vt, s16 *, 0x68), 0x15, a1, 0);
}

void fn_80173C18(char *self, s32 a1) {
    void *vt = M2C_FIELD(self, void **, 0xBC);
    M2C_FIELD(vt, void (**)(void *, s32, s32, s32), 0x6C)(self + M2C_FIELD(vt, s16 *, 0x68), 0x14, a1, 0);
}

s32 fn_80173DE0(char *arg0) {
    s32 fn_80173C58(char *);
    char *obj;
    char *e;
    void *vt;

    obj = M2C_FIELD(arg0, char **, 0x1DC);
    if (obj == NULL) {
        return 0;
    }
    e = M2C_FIELD(obj, char **, 0xBC) + 0xB8;
    (*(void (**)(void *, s32))(e + 4))(obj + *(s16 *)e, fn_80173C58(arg0));
    vt = M2C_FIELD(obj, void **, 0xBC);
    M2C_FIELD(vt, void (**)(void *, s32), 0xCC)(obj + M2C_FIELD(vt, s16 *, 0xC8), M2C_FIELD(arg0, s32 *, 0x40));
    return 1;
}

s32 fn_80173E64(void) {
    return 1;
}

s32 fn_80173E6C(void) {
    return 1;
}

s32 fn_80173E74(void) {
    return 1;
}

s32 fn_80173E7C(void) {
    return 1;
}

void fn_80173F54(void *arg0, s32 arg1) {
    extern char lbl_80412038[];
    extern char lbl_804122E8[];
    extern void fn_80174314(void *);
    extern void fn_80174950(void *, s32);
    extern void fn_801763D0(void *);
    M2C_FIELD(arg0, void **, 0xBC) = lbl_80412038;
    fn_80174314(arg0);
    M2C_FIELD(arg0, void **, 0xBC) = lbl_804122E8;
    fn_80174950((char *)arg0 + 0x18, 2);
    if (arg1 & 1) {
        fn_801763D0(arg0);
    }
}

void fn_80173FB8(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0xC8);
    u8 *vt = *(u8 **)(obj + 0xBC);
    (*(void (**)(void *))(vt + 0xBC))(obj + *(s16 *)(vt + 0xB8));
}

void fn_80173FF0(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0xC8);
    u8 *vt = *(u8 **)(obj + 0xBC);
    (*(void (**)(void *))(vt + 0xC4))(obj + *(s16 *)(vt + 0xC0));
}

void fn_80174028(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0xC8);
    u8 *vt = *(u8 **)(obj + 0xBC);
    (*(void (**)(void *))(vt + 0xCC))(obj + *(s16 *)(vt + 0xC8));
}

void fn_80174060(char *self) {
    char *obj = *(char **)(self + 0xC8);
    char *vt = *(char **)(obj + 0xBC);
    (*(void (**)(char *))(vt + 0xF4))(obj + *(s16 *)(vt + 0xF0));
}

void fn_80174098(char *arg0) {
    char *obj = M2C_FIELD(arg0, char **, 0xC8);
    void *vt = M2C_FIELD(obj, void **, 0xBC);
    M2C_FIELD(vt, void (**)(void *), 0xFC)(obj + M2C_FIELD(vt, s16 *, 0xF8));
}

s32 fn_801740D0(char *self) {
    extern void fn_80174B98(void *, s32, s32);
    extern char lbl_80435040[];
    char *p = self + 0x18;
    fn_80174B98(p, 0x1F, 0x11);
    M2C_FIELD(p, s32 *, 0x10) = 0;
    M2C_FIELD(p, char **, 0x14) = lbl_80435040;
    return 1;
}

s32 fn_80174120(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0xE0);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0);
        return M2C_FIELD(temp_r9, s32 (**)(void *), 0x2C)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x28));
    }
    return 0;
}

s32 fn_80174290(char *self) {
    char *obj;
    if (M2C_FIELD(self, s32 *, 0xCC) != 0) {
        char *vt = *(char **)(self + 0xBC);
        M2C_FIELD(self, s32 *, 0xCC) = 1;
        (*(void (**)(char *))(vt + 0x10C))(self + *(s16 *)(vt + 0x108));
    }
    if (*(char **)(self + 0xE0) != NULL) {
        register char *p asm("r3");
        char *vt2;
        obj = *(char **)(self + 0xE0);
        vt2 = *(char **)obj;
        p = obj + *(s16 *)(vt2 + 0x18);
        (*(void (**)(char *))(vt2 + 0x1C))(p);
    }
    *(char **)(self + 0xE0) = NULL;
    return 1;
}

s32 fn_80174314(char *arg0) {
    void fn_80174BFC(void *);
    void *vt = M2C_FIELD(arg0, void **, 0xBC);
    M2C_FIELD(vt, void (**)(void *), 0x14C)(arg0 + M2C_FIELD(vt, s16 *, 0x148));
    fn_80174BFC(arg0 + 0x18);
    return 0;
}

s32 fn_80174360(char *arg0) {
    char *obj;
    void *vt;

    if (++M2C_FIELD(arg0, s32 *, 0xCC) == 1) {
        obj = M2C_FIELD(arg0, char **, 0xE0);
        vt = M2C_FIELD(obj, void **, 0);
        M2C_FIELD(vt, void (**)(void *), 0x4C)(obj + M2C_FIELD(vt, s16 *, 0x48));
    }
    return 1;
}

s32 fn_801743B0(char *arg0) {
    if (--M2C_FIELD(arg0, s32 *, 0xCC) == 0) {
        char *obj = M2C_FIELD(arg0, char **, 0xE0);
        char *vt = *(char **)obj;
        (*(void (**)(void *))(vt + 0x54))(obj + *(s16 *)(vt + 0x50));
    }
    return 1;
}

s32 fn_80174400(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) + 1);
    return 1;
}

s32 fn_80174418(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) - 1);
    return 1;
}

void *fn_80174468(void *arg0, s32 arg1);
void *fn_80174430(s32 arg0) {
    extern void *fn_802D1FC8(s32);
    return fn_80174468(fn_802D1FC8(0xC8), arg0);
}

void *fn_80174468(void *arg0, s32 arg1) {
    extern void *fn_80174B98(void *, s32, s32);
    extern void *fn_801745FC(void *, s32);
    extern char lbl_80411ED0[];
    extern char lbl_804122E8[];
    u32 hash = 0xA3CD9627;
    M2C_FIELD(arg0, char **, 0xBC) = lbl_804122E8;
    M2C_FIELD(arg0, u32 *, 0) = 0xABADCAFE;
    M2C_FIELD(arg0, u32 *, 8) = hash;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    fn_80174B98((char *)arg0 + 0x18, 0x1F, 0x11);
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, char **, 0xBC) = lbl_80411ED0;
    M2C_FIELD(arg0, u32 *, 8) = 0xA3CD96B7;
    fn_801745FC(arg0, arg1);
    return arg0;
}

void fn_8017450C(void *arg0, s32 arg1) {
    extern char lbl_80411ED0[];
    extern char lbl_804122E8[];
    extern void fn_801745C4(void *);
    extern void fn_80174950(void *, s32);
    extern void fn_802D20E8(void *);
    M2C_FIELD(arg0, char **, 0xBC) = lbl_80411ED0;
    fn_801745C4(arg0);
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, char **, 0xBC) = lbl_804122E8;
    fn_80174950((char *)arg0 + 0x18, 2);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

s32 fn_8017457C(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0xC4);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0);
        return M2C_FIELD(temp_r9, s32 (**)(void *), 0x64)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x60));
    }
    return 0;
}

s32 fn_801745C4(void *arg0) {
    void *vt = M2C_FIELD(arg0, void **, 0xBC);
    M2C_FIELD(vt, void (**)(void *), 0xEC)((char *)arg0 + M2C_FIELD(vt, s16 *, 0xE8));
    return 1;
}

s32 fn_801746D0(void) {
    return 1;
}

void fn_801746D8(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, void **, 0xC4) == NULL) {
        u8 *vt = M2C_FIELD(arg0, u8 **, 0xBC);
        (*(void (**)(void *, void *))(vt + 0x154))((u8 *)arg0 + *(s16 *)(vt + 0x150), M2C_FIELD(arg0, void **, 0xC0));
    }
    {
        u8 *obj = M2C_FIELD(arg0, u8 **, 0xC4);
        u8 *vt = *(u8 **)obj;
        (*(void (**)(void *, s32))(vt + 0x7C))(obj + *(s16 *)(vt + 0x78), arg1);
    }
}

void fn_8017474C(void *arg0) {
    u8 *obj = M2C_FIELD(arg0, u8 **, 0xC0);
    u8 *vt = M2C_FIELD(obj, u8 **, 0xBC);
    (*(void (**)(void *))(vt + 0x15C))(obj + *(s16 *)(vt + 0x158));
}

void fn_80174784(char *self) {
    char *obj;
    char *vt;
    obj = M2C_FIELD(self, char **, 0xC4);
    vt = *(char **)obj;
    M2C_FIELD(vt, void (**)(void *, s32), 0x94)(obj + M2C_FIELD(vt, s16 *, 0x90), 0);
    obj = M2C_FIELD(self, char **, 0xC4);
    vt = *(char **)obj;
    M2C_FIELD(vt, void (**)(void *), 0x24)(obj + M2C_FIELD(vt, s16 *, 0x20));
}

s32 fn_801747E8(char *self) {
    char *obj = M2C_FIELD(self, char **, 0xC4);
    if (obj != NULL) {
        char *vt = *(char **)obj;
        M2C_FIELD(vt, void (**)(void *), 0x1C)(obj + M2C_FIELD(vt, s16 *, 0x18));
        M2C_FIELD(self, char **, 0xC4) = NULL;
    }
    return 1;
}

s32 fn_80174840(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0xC4);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0);
        return M2C_FIELD(temp_r9, s32 (**)(void *), 0x2C)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x28));
    }
    return 0;
}

s32 fn_80174888(void *arg0) {
    void *obj;
    void *vt;

    obj = M2C_FIELD(arg0, void **, 0xC0);
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0xBC);
        obj = M2C_FIELD(vt, void *(**)(void *), 0x15C)((char *)obj + M2C_FIELD(vt, s16 *, 0x158));
        if (obj != NULL) {
            vt = M2C_FIELD(obj, void **, 0);
            M2C_FIELD(vt, void (**)(void *), 0x3C)((char *)obj + M2C_FIELD(vt, s16 *, 0x38));
        }
    }
    return 1;
}

s32 fn_801748EC(void *arg0) {
    void *obj;
    void *vt;

    obj = M2C_FIELD(arg0, void **, 0xC0);
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0xBC);
        obj = M2C_FIELD(vt, void *(**)(void *), 0x15C)((char *)obj + M2C_FIELD(vt, s16 *, 0x158));
        if (obj != NULL) {
            vt = M2C_FIELD(obj, void **, 0);
            M2C_FIELD(vt, void (**)(void *), 0x44)((char *)obj + M2C_FIELD(vt, s16 *, 0x40));
        }
    }
    return 1;
}

void fn_80174950(void *arg0, s32 arg1) {
    void fn_802D20E8(void *);
    void fn_802D211C(void *);

    if (M2C_FIELD(arg0, void **, 0) != 0 && M2C_FIELD(arg0, void **, 0x18) != 0 && M2C_FIELD(arg0, void **, 0xC) != 0) {
        fn_802D211C(M2C_FIELD(arg0, void **, 0xC));
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

s32 fn_801749B4(s32 *self, s32 count, s32 arg2) {
    extern s32 *fn_802D2058(s32);
    s32 i;
    if (self[0] == 0) {
        self[2] = arg2;
        self[1] = count;
        self[3] = (s32)fn_802D2058(count << 2);
        self[6] = 1;
        for (i = 0; i < self[1]; i++) {
            ((s32 *)self[3])[i] = 0;
        }
    }
    self[0] = 1;
    return 1;
}

s32 fn_80174A44(s32 *self) {
    extern void fn_802D211C(s32);
    if (self[6] != 0 && self[3] != 0) {
        fn_802D211C(self[3]);
    }
    self[3] = 0;
    self[0] = 0;
    return 1;
}

s32 fn_80174B98(s32 *self, s32 count, s32 arg2) {
    s32 i;
    if (self[0] == 0) {
        self[2] = arg2;
        self[3] = (s32)(self + 7);
        self[6] = 0;
        self[1] = count;
        for (i = 0; i < self[1]; i++) {
            ((s32 *)self[3])[i] = 0x80000000;
        }
    }
    self[0] = 1;
    return 1;
}

s32 fn_80174BFC(s32 *self) {
    if (self[0] == 0) return 1;
    self[0] = 0;
    return 1;
}

s32 fn_80174C24(s32 *self, s32 count, s32 arg2) {
    s32 i;
    if (self[0] == 0) {
        self[2] = arg2;
        self[3] = (s32)(self + 7);
        self[6] = 0;
        self[42] = (s32)(self + 17);
        self[1] = count;
        for (i = 0; i < self[1]; i++) {
            ((s32 *)self[3])[i] = 0x80000000;
        }
    }
    self[0] = 1;
    return 1;
}

s32 fn_80174C90(s32 *arg0) {
    *arg0 = 0;
    return 1;
}

s32 fn_80174CA0(s32 *self, s32 count, s32 arg2) {
    s32 i;
    if (self[0] == 0) {
        self[2] = arg2;
        self[3] = (s32)(self + 7);
        self[6] = 0;
        self[1] = count;
        for (i = 0; i < self[1]; i++) {
            ((s32 *)self[3])[i] = 0x80000000;
        }
    }
    self[0] = 1;
    return 1;
}

s32 fn_80174D04(s32 *arg0) {
    *arg0 = 0;
    return 1;
}

void fn_80174E10(void *arg0) {
    extern s32 lbl_80495C90;
    M2C_UNK fn_801759A4(s32, s32, s32);
    fn_801759A4(M2C_FIELD(lbl_80495C90, s32 *, 0x58), M2C_FIELD(arg0, s32 *, 0), 1);
}

s32 fn_80174E40(u32 *arg0, u32 *arg1) {
    return (u32) *arg0 < (u32) *arg1;
}

void fn_80174E58(void *arg0) {
    extern s32 lbl_80495C90;
    M2C_UNK fn_80175ACC(s32, s32);
    fn_80175ACC(M2C_FIELD(lbl_80495C90, s32 *, 0x58), M2C_FIELD(arg0, s32 *, 0));
}

void fn_80174E84(s32 *self, s32 value) {
    *self = value;
}

void *fn_80174E8C(void *arg0) {
    M2C_UNK fn_80248488(void *, s32, s32);
    char *a = (char *)arg0 + 0x104;
    char *b = (char *)arg0 + 0x110;
    M2C_FIELD(a, s32 *, 4) = 0;
    M2C_FIELD(a, s32 *, 8) = 0;
    M2C_FIELD(b, s32 *, 4) = 0;
    M2C_FIELD(b, s32 *, 8) = 0;
    fn_80248488(arg0, 0, 0x100);
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    return arg0;
}

void fn_80174EE4(void *arg0, s32 arg1) {
    extern void fn_80174FD4(void *);
    extern void *fn_802D0AB8(void);
    extern void fn_802D1A00(void *, void *);
    extern void fn_802D20E8(void *);
    char *list1 = (char *)arg0 + 0x110;
    char *list2;
    void *n;

    fn_80174FD4(arg0);
    while ((n = M2C_FIELD(list1, void **, 4)) != NULL) {
        M2C_FIELD(list1, void **, 4) = *(void **)n;
        fn_802D1A00(fn_802D0AB8(), n);
    }
    M2C_FIELD(list1, void **, 8) = NULL;
    list2 = (char *)arg0 + 0x104;
    while ((n = M2C_FIELD(list2, void **, 4)) != NULL) {
        M2C_FIELD(list2, void **, 4) = *(void **)n;
        fn_802D1A00(fn_802D0AB8(), n);
    }
    M2C_FIELD(list2, void **, 8) = NULL;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_80175678(void **arg0) {
    u8 *p = (u8 *)arg0;
    u8 *end = p + 0xFC;
    do {
        void *r11 = *(void **)p;
        p += 4;
        if (r11 != 0) {
            u8 *r9 = *(u8 **)((u8 *)r11 + 0xBC);
            s16 offset = *(s16 *)(r9 + 0xE8);
            void (*method)(void *) = *(void (**)(void *))(r9 + 0xEC);
            method((u8 *)r11 + offset);
        }
    } while ((s32)p <= (s32)end);
}

void fn_80175B08(void) {
    s32 var_ctr;

    var_ctr = 0x40;
    do {
        var_ctr -= 1;
    } while (var_ctr != 0);
}

s32 fn_80175BCC(s32 arg0, s32 arg1) {
    if (arg1 == 0x12) {
        return arg0;
    }
    return 0;
}

void fn_802D20E8(void *);
void fn_80175C48(void *arg0, s32 arg1) {
    extern char lbl_804122E8[];
    extern void fn_80174950(void *, s32);
    extern void fn_802D20E8(void *);

    M2C_FIELD(arg0, char **, 0xBC) = lbl_804122E8;
    fn_80174950((char *)arg0 + 0x18, 2);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

s32 fn_80175C9C(s32 *self) {
    return self[2];
}

s32 fn_80175CA4(s32 *self) {
    return self[1];
}

s32 fn_80175CAC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
    return 1;
}

s32 fn_80175CB8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xAC);
}

s32 fn_80175CC0(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_80175CC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void fn_80175CD0(void) {

}

s32 fn_80175CD4(void) {
    return 1;
}

s32 fn_80175CDC(void) {
    return 0;
}

s32 fn_80175CE4(void) {
    return 0;
}

s32 fn_80175CEC(s32 arg0) {
    return arg0 + 0x18;
}

void fn_80175CF4(s32 arg0) {
    fn_80174B18(arg0 + 0x18);
}

void fn_80175D18(s32 arg0) {
    M2C_UNK fn_80174A98(s32);
    fn_80174A98(arg0 + 0x18);
}

s32 fn_80175D3C(void) {
    return 0;
}

s32 fn_80175D44(void) {
    return 0;
}

s32 fn_80175D4C(void) {
    return 0;
}

s32 fn_80175D54(void) {
    return 0;
}

s32 fn_80175D5C(void) {
    return 1;
}

s32 fn_80175D64(void) {
    return 1;
}

s32 fn_80175D6C(void) {
    return 0x10;
}

s32 fn_80175D74(void) {
    return 0x40;
}

s32 fn_80175D7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80175D84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC4);
}

s32 fn_80175D8C(void) {
    return 1;
}

s32 fn_80175D94(void) {
    return 1;
}

s32 fn_80175D9C(void) {
    return 1;
}

s32 fn_80175DA4(void) {
    return 1;
}

s32 fn_80175DAC(void) {
    return 1;
}

s32 fn_80175DB4(void) {
    return 1;
}

s32 fn_80175DBC(void) {
    return 1;
}

s32 fn_80175DC4(void) {
    return 1;
}

s32 fn_80175DCC(void) {
    return 1;
}

s32 fn_80175DD4(void) {
    return 1;
}

s32 fn_80175DDC(void) {
    return 1;
}

s32 fn_80175DE4(void) {
    return 1;
}

s32 fn_80175DEC(void) {
    return 1;
}

s32 fn_80175DF4(void) {
    return 1;
}

s32 fn_80175DFC(void) {
    return 1;
}

s32 fn_80175E04(void) {
    return 1;
}

s32 fn_80175E0C(void) {
    return 1;
}

s32 fn_80175E14(void) {
    return 1;
}

extern s32 lbl_80495C90;
s32 fn_80175E1C(void) {
    return lbl_80495C90;
}

s32 fn_80175E24(s32 arg0, s32 arg1) {
    s32 var_r0;

    if (arg1 != 0x13) {
        var_r0 = 0;
        if (arg1 == 0x12) {
            var_r0 = arg0;
        }
        return var_r0;
    }
    return arg0;
}

s32 fn_80175E44(void) {
    return 0;
}

s32 fn_80175E4C(void) {
    return 1;
}

s32 fn_80175E54(void) {
    return 1;
}

s32 fn_80175E5C(void) {
    return 1;
}

s32 fn_80175E64(void) {
    return 1;
}

s32 fn_80175E6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xE0);
}

s32 fn_80175E74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xD4);
}

s32 fn_80175E7C(void *arg0, s32 arg1, s32 arg2) {
    extern void *fn_80175EA0(void *, s32, s32);
    return M2C_FIELD(fn_80175EA0(arg0, arg1, arg2), s32 *, 0);
}

s32 fn_80175EA0(void) {
    return lbl_80495C90;
}

s32 fn_80175EA8(void) {
    return 1;
}

void fn_80175EB0(char *self) {
    char *vt = *(char **)(self + 0xBC);
    (*(void (**)(char *, s32))(vt + 0x144))(self + *(s16 *)(vt + 0x140), 0);
}

void fn_80175EE8(char *self) {
    char *vt = *(char **)(self + 0xBC);
    (*(void (**)(char *, s32))(vt + 0x14C))(self + *(s16 *)(vt + 0x148), 0);
}

void fn_80175F20(char *self) {
    char *vt = *(char **)(self + 0xBC);
    (*(void (**)(char *))(vt + 0xE4))(self + *(s16 *)(vt + 0xE0));
}

s32 fn_80175F54(void) {
    return 1;
}

s32 fn_80175F5C(void) {
    return 1;
}

s32 fn_80175F64(void) {
    return 1;
}

s32 fn_80175F6C(void) {
    return 1;
}

s32 fn_80175F74(void) {
    return 1;
}

s32 fn_80175F7C(void) {
    return 1;
}

s32 fn_80175F84(void) {
    return 0;
}

s32 fn_80175F8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xB4);
}

s32 fn_80175F94(char *self) {
    char *obj = *(char **)(self + 0xC0);
    s32 result = 0;
    if (obj != NULL) {
        char *vt = *(char **)(obj + 0xBC);
        if ((*(s32 (**)(char *))(vt + 0xB4))(obj + *(s16 *)(vt + 0xB0)) != 0) {
            result = 1;
        }
    }
    return result;
}

void fn_80175FF0(void *arg0, s32 arg1) {
    extern char lbl_80411D20[];
    extern char lbl_804122E8[];
    extern void fn_80174950(void *, s32);
    extern void fn_802D20E8(void *);
    M2C_FIELD(arg0, char **, 0xBC) = lbl_80411D20;
    fn_80174950((u8 *)arg0 + 0x17C, 2);
    fn_80174950((u8 *)arg0 + 0xD0, 2);
    M2C_FIELD(arg0, char **, 0xBC) = lbl_804122E8;
    fn_80174950((u8 *)arg0 + 0x18, 2);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

s32 fn_80176068(void) {
    return 1;
}

s32 fn_80176070(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C0);
}

s32 fn_80176078(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C4) != 0;
}

s32 fn_80176090(void) {
    return 0;
}

s32 fn_80176098(void) {
    return 0;
}

s32 fn_801760B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1DC);
}

s32 fn_801760B8(void) {
    return lbl_80495C90;
}

s32 fn_801760C0(void) {
    return M2C_FIELD(lbl_80495C90, s32 *, 0);
}

s32 fn_801760CC(void) {
    return lbl_80495C90 + 0x10;
}

s32 fn_801760D8(void) {
    return M2C_FIELD(lbl_80495C90, s32 *, 0x14);
}

void fn_801760E4(char *self) {
    char *vt = *(char **)(self + 0xBC);
    (*(void (**)(char *))(vt + 0xE4))(self + *(s16 *)(vt + 0xE0));
}

void fn_80176118(char *self) {
    char *vt = *(char **)(self + 0xBC);
    (*(void (**)(char *))(vt + 0xE4))(self + *(s16 *)(vt + 0xE0));
}

s32 *fn_8017614C(s32 *arg0, char *arg1) {
    fn_8016F8A4(arg0, (s32 *)(arg1 + 0x1A0));
    return arg0;
}

void fn_80176180(s32 arg0) {
    void *fn_8016F910(void *);
    fn_8016F910((char *)arg0 + 0x1A0);
}

s32 fn_801761A4(s32 arg0, s32 arg1) {
    extern char lbl_803DA090[];
    if (arg1 > 0x7F) {
        fn_8016FA28((void *)lbl_80495C90, arg0, (s32)lbl_803DA090);
        return 1;
    }
    return arg1;
}

void fn_801761EC(void *arg0, s32 arg1) {
    extern void fn_80174950(void *, s32);
    extern void fn_801764D4(void *);
    extern char lbl_80411B68[];
    extern char lbl_80411D20[];
    extern char lbl_804122E8[];

    M2C_FIELD(arg0, char **, 0xBC) = lbl_80411B68;
    fn_80174950((char *)arg0 + 0x28C, 2);
    fn_80174950((char *)arg0 + 0x1E0, 2);
    M2C_FIELD(arg0, char **, 0xBC) = lbl_80411D20;
    fn_80174950((char *)arg0 + 0x17C, 2);
    fn_80174950((char *)arg0 + 0xD0, 2);
    M2C_FIELD(arg0, char **, 0xBC) = lbl_804122E8;
    fn_80174950((char *)arg0 + 0x18, 2);
    if (arg1 & 1) {
        fn_801764D4(arg0);
    }
}

s32 fn_80176288(s32 arg0) {
    return arg0 + 0x1E0;
}

s32 fn_80176290(s32 arg0) {
    return arg0 + 0x28C;
}

void fn_80176298(s32 arg0) {
    M2C_UNK fn_80174A98(s32);
    fn_80174A98(arg0 + 0x28C);
}

s32 fn_801762BC(void) {
    return 1;
}

s32 fn_801762C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x32C);
}

s32 fn_801762CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x330);
}

s32 fn_801762D4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x334);
}

s32 fn_801762DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x328);
}

u8 fn_801762E4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x340);
}

u8 fn_801762EC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x341);
}

void fn_801763D0(M2C_UNK *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(lbl_80495C90, s32 *, 0x58) + 0x110;
    *arg0 = M2C_FIELD(temp_r9, M2C_UNK **, 8);
    M2C_FIELD(temp_r9, M2C_UNK **, 8) = arg0;
}

void fn_801764D4(void *arg0) {
    M2C_UNK fn_80174F84(s32, void *);
    fn_80174F84(M2C_FIELD(lbl_80495C90, s32 *, 0x58), arg0);
}

void fn_80176500(void) {
    M2C_UNK fn_80175B18(M2C_UNK, M2C_UNK);
    fn_80175B18(1, 0xFFFF);
}

void fn_8017652C(void) {
    M2C_UNK fn_80175B18(M2C_UNK, M2C_UNK);
    fn_80175B18(0, 0xFFFF);
}

