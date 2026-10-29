/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct RMMapNode {
    s32 color;
    struct RMMapNode *parent;
    struct RMMapNode *left;
    struct RMMapNode *right;
    s32 key;
    void *value;
} RMMapNode;

typedef struct {
    RMMapNode *node;
} RMMapIter;

void **fn_8039AB24(void **node);

static inline s32 RMMapIter_NotEqual(RMMapIter a, RMMapIter b) {
    return a.node != b.node;
}

static inline s32 RMMapIter_NotEqualP(const RMMapIter *a, const RMMapIter *b) {
    return a->node != b->node;
}

static inline RMMapIter RMMap_Begin(char *map) {
    RMMapIter r;
    r.node = (*(RMMapNode **)(map + 4))->left;
    return r;
}

static inline RMMapIter RMMap_End(char *map) {
    RMMapIter r;
    r.node = *(RMMapNode **)(map + 4);
    return r;
}

typedef struct RMMapNode16 {
    s32 color;
    struct RMMapNode16 *parent;
    struct RMMapNode16 *left;
    struct RMMapNode16 *right;
    u16 key;
    void *value;
} RMMapNode16;

typedef struct {
    RMMapNode16 *node;
} RMMapIter16;

static inline RMMapIter16 RMMap16_end(char *self) {
    RMMapIter16 it;
    it.node = *(RMMapNode16 **)(self + 4);
    return it;
}

static inline s32 RMMapIter16_NotEqual(RMMapIter16 a, RMMapIter16 b) {
    return a.node != b.node;
}

static inline s32 RMMapIter16_Ne(const RMMapIter16 *a, const RMMapIter16 *b) {
    return a->node != b->node;
}

static inline s32 RMMapIter_Ne(const RMMapIter *a, const RMMapIter *b) {
    return a->node != b->node;
}

static inline RMMapIter16 RMMap16_find(char *self, const u16 *k) {
    RMMapNode16 *end = *(RMMapNode16 **)(self + 4);
    RMMapNode16 *y = end;
    RMMapNode16 *x = end->parent;
    RMMapIter16 it;
    while (x != NULL) {
        if (!(x->key < *k)) {
            y = x;
            x = x->left;
        } else {
            x = x->right;
        }
    }
    if (y == end || *k < y->key) {
        y = end;
    }
    it.node = y;
    return it;
}

static inline void RMMap16_EndP(RMMapIter16 *out, char *self) {
    out->node = *(RMMapNode16 **)(self + 4);
}

static inline RMMapIter16 RMMap16_find3(char *self, const u16 *k) {
    RMMapNode16 *y = *(RMMapNode16 **)(self + 4);
    RMMapNode16 *x = y->parent;
    RMMapNode16 *j;
    RMMapIter16 it;
    while (x != NULL) {
        if (!(x->key < *k)) {
            y = x;
            x = x->left;
        } else {
            x = x->right;
        }
    }
    j = *(RMMapNode16 **)(self + 4);
    if (y == j || *k < y->key) {
        y = j;
    }
    it.node = y;
    return it;
}

static inline void RMMapIter_Inc(RMMapIter *it) {
    it->node = (RMMapNode *)fn_8039AB24((void **)it->node);
}

static inline void RMMap_BeginP(RMMapIter *out, char *map) {
    out->node = (*(RMMapNode **)(map + 4))->left;
}

static inline void RMMap_EndP(RMMapIter *out, char *map) {
    out->node = *(RMMapNode **)(map + 4);
}

extern s32 lbl_80494538;
void fn_8018FA84(void *arg0, s32 arg1);
void fn_8018EDE0(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

void fn_8018EE20(s32 arg0, s32 arg1) {
    M2C_UNK fn_8018D8DC(s32, s32, M2C_UNK);
    fn_8018D8DC(arg1, arg0, 1);
}

s32 fn_8018EE50(void) {
    return 1;
}

s32 fn_8018F304(void *arg0, s32 arg1, s32 arg2) {
    s32 ***fn_8018F2C4(void *, s32);
    s32 ***r = fn_8018F2C4(arg0, arg1);
    s32 *a = **r;
    return a[arg2];
}

void fn_8018F664(char *self, char *arg1, s32 n) {
    void fn_8018D8DC(char *, char *, s32);
    void fn_803A9AD8(char *, s32, char *, s32);
    if (n > 0) {
        fn_8018D8DC(arg1, self + 0x10, 1);
    }
    fn_803A9AD8(self, *(s32 *)self, arg1, n);
}

void fn_8018F6BC(char *self) {
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    while (*(s32 **)(self + 4) != *(s32 **)(self + 8)) {
        s32 **v = (s32 **)(self + 4);
        s32 **e = (s32 **)v[1];
        s32 *p = *--e;
        v[1] = (s32 *)e;
        if (p != NULL) {
            s32 *q;
            for (q = (s32 *)p[0]; q != (s32 *)p[1]; q++) {
            }
            if (p[0] != 0) {
                u32 size = (u32)(p[3] - p[0]) & ~3;
                if (size > 0x80) {
                    fn_802D20E8((void *)p[0]);
                } else {
                    fn_803997AC((void *)p[0], size);
                }
            }
            fn_802D20E8(p);
        }
    }
}

void fn_8018F770(void *arg0, s32 flags) {
    extern u8 lbl_80414018[];
    extern u8 lbl_80414088[];
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    void fn_8018F6BC(char *);
    s32 *v;
    s32 *self = arg0;
    self[0] = (s32)lbl_80414018;
    fn_8018F6BC((char *)self);
    v = self + 1;
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8((void *)v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    self[0] = (s32)lbl_80414088;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8018F7F8(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 4)) >> 2;
}

s32 fn_8018F80C(void *arg0, s32 i) {
    if (i >= 0 && (u32)i < (u32)((M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 4)) >> 2)) {
        return *(s32 *)(((s32 *)M2C_FIELD(arg0, s32 *, 4))[i] + 0x10);
    }
    return 0;
}

void *fn_8018F844(void *arg0) {
    extern u8 lbl_80414018[];
    volatile s32 z;
    char *p = (char *)arg0 + 0xC;
    M2C_FIELD(arg0, u8 **, 0x0) = lbl_80414018;
    M2C_FIELD(arg0, s32 *, 0x4) = 0;
    M2C_FIELD(arg0, s32 *, 0x8) = 0;
    *(volatile s32 *)(p + 4) = 0;
    return arg0;
}

void fn_8018F874(void *arg0) {
    extern void *lbl_80494534;
    M2C_FIELD(arg0, void **, 4) = (void *) lbl_80494534;
    lbl_80494534 = arg0;
}

void fn_8018F884(void *node) {
    extern void *lbl_80494534;
    void **pp = &lbl_80494534;
    while (*pp != NULL) {
        if (*pp == node) {
            *pp = *(void **)((char *)*pp + 4);
            return;
        }
        pp = (void **)((char *)*pp + 4);
    }
}

void *fn_8018F8C0(void *arg0) {
    extern u8 lbl_804140F8[];
    M2C_FIELD(arg0, u8 **, 0x10) = lbl_804140F8;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    fn_8018F874(arg0);
    fn_8018FA84(arg0, 0);
    return arg0;
}

void fn_8018F914(void *arg0, s32 arg1) {
    void fn_8018F884(void *);
    void fn_802D20E8(void *);
    extern u8 lbl_804140F8[];
    M2C_FIELD(arg0, u8 **, 0x10) = lbl_804140F8;
    fn_8018F884(arg0);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8018F960(s32 *arg0, s32 id) {
    extern void *lbl_80494534;
    s32 *it;
again:
    for (it = lbl_80494534; it != NULL; it = (s32 *)it[1]) {
        if (it != arg0 && it[0] == id) {
            id++;
            goto again;
        }
    }
    *arg0 = id;
}

void fn_8018F99C(s32 *arg0, const char *name) {
    extern void *lbl_80494534;
    s32 hash = 0;
    s32 shift = 0;
    s32 *it;
    for (; *name != 0; name++) {
        char c = *name;
        if ((u32)(c - 'a') <= 25) {
            c -= 0x20;
        }
        hash ^= c << shift;
        if (shift > 24) {
            hash ^= (u32)c >> (32 - shift);
        }
        shift += 3;
        shift %= 32;
    }
again:
    for (it = lbl_80494534; it != NULL; it = (s32 *)it[1]) {
        if (it != arg0 && it[0] == hash) {
            hash++;
            goto again;
        }
    }
    *arg0 = hash;
}

void *fn_8018FA48(s32 id) {
    extern void *lbl_80494534;
    void *it;
    for (it = lbl_80494534; it != NULL; it = *(void **)((char *)it + 4)) {
        if (*(s32 *)it == id) return it;
    }
    return NULL;
}

s32 fn_8018FA7C(s32 *self) {
    return self[2];
}

void fn_8018FA84(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void fn_8018FA8C(char *self, char *arg1) {
    void *fn_802D0AB8(void);
    void fn_802D1A00(void *, void *);
    char *vt = *(char **)(self + 0x10);

    (*(void (**)(char *, char *))(vt + 0xDC))(self + *(s16 *)(vt + 0xD8), arg1);
    if (fn_8018FA7C((s32 *)self) == 0 && arg1 != NULL) {
        if (*(s32 *)(arg1 + 8) != 0) {
            fn_802D1A00(fn_802D0AB8(), *(void **)(arg1 + 4));
        }
        fn_802D1A00(fn_802D0AB8(), arg1);
    }
}

s32 fn_8018FBF4(char *self, s32 arg1) {
    char *vt = *(char **)(self + 0x10);
    s32 out;
    (*(void (**)(char *, s32, s32 *))(vt + 0xB4))(self + *(s16 *)(vt + 0xB0), arg1, &out);
    return 0;
}

void fn_8018FC30(char *self, void *a, void *b, void *c, s32 unused0, s32 unused1, void *e) {
    void *fn_800F687C(void *, void *, s32);
    u8 tmpbuf[0x48];
    u8 *p = tmpbuf;
    char *vt;

    fn_800F687C(p, p + 8, 0x40);
    vt = *(char **)(self + 0x10);
    (*(void (**)(char *, void *, void *, void *, void *, void *))(vt + 0xFC))(
        self + *(s16 *)(vt + 0xF8), a, b, c, p, e);
}

s32 fn_8018FCA8(char *self, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 ret;
    if (arg3 == 0) {
        char *vt = *(char **)(self + 0x10);
        ret = (*(s32 (**)(void *, s32, s32, s32))(vt + 0x84))(self + *(s16 *)(vt + 0x80), arg1, arg2, arg4);
    } else {
        fn_8018FA84(self, -0x5b);
        ret = 0;
    }
    return ret;
}

s32 fn_8018FD00(s32 *self) {
    return *self;
}

void *fn_8018FD08(void *self, s32 id) {
    if (id == 0x10) {
        return self;
    }
    return NULL;
}

s32 fn_8018FD18(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_8018FD20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

M2C_UNK *fn_8018FD28(void) {
    extern M2C_UNK lbl_80495CC0;
    return &lbl_80495CC0;
}

void *fn_8019020C(char *self) {
    extern RMMapNode *fn_80399BE8(s32);
    char *map2 = self + 0x10;
    RMMapIter tmp[8];
    RMMapNode *hdr;
    RMMapNode *hdr2;

    *(RMMapNode **)(self + 4) = NULL;
    hdr = fn_80399BE8(0x18);
    *(s32 *)(self + 8) = 0;
    *(RMMapNode **)(self + 4) = hdr;
    *(s8 *)(self + 0xC) = 0;
    hdr->color = 0;
    (*(RMMapNode **)(self + 4))->parent = NULL;
    (*(RMMapNode **)(self + 4))->left = *(RMMapNode **)(self + 4);
    (*(RMMapNode **)(self + 4))->right = *(RMMapNode **)(self + 4);

    *(RMMapNode **)(map2 + 4) = NULL;
    hdr2 = fn_80399BE8(0x24);
    *(s32 *)(map2 + 8) = 0;
    *(RMMapNode **)(map2 + 4) = hdr2;
    *(s8 *)(map2 + 0xC) = 0;
    hdr2->color = 0;
    (*(RMMapNode **)(map2 + 4))->parent = NULL;
    (*(RMMapNode **)(map2 + 4))->left = *(RMMapNode **)(map2 + 4);
    (*(RMMapNode **)(map2 + 4))->right = *(RMMapNode **)(map2 + 4);

    *(s32 *)(self + 0x20) = 0;
    *(f32 *)(self + 0x28) = 0.0f;
    *(s32 *)(self + 0x24) = 0;
    *(f32 *)(self + 0x2C) = 0.0f;
    lbl_80494538 = (s32)self;
    return self;
}

void fn_80190474(char *self, u32 id) {
    volatile u8 buf[0x18];
    RMMapNode16 *b;
    *(u16 *)((u8 *)buf + 8) = (u16)id;
    b = RMMap16_find3(self, (const u16 *)((u8 *)buf + 8)).node;
    *(RMMapNode16 **)((u8 *)buf + 0) = b;
    RMMap16_EndP((RMMapIter16 *)((u8 *)buf + 0x10), self);
    if (RMMapIter16_Ne((RMMapIter16 *)((u8 *)buf + 0), (RMMapIter16 *)((u8 *)buf + 0x10))) {
        *(s32 *)((char *)b->value + 0x80) = 1;
        *(s32 *)(self + 0x20) = 1;
    }
}

void fn_80190510(char *self, u32 id) {
    volatile u8 buf[0x18];
    RMMapNode16 *b;
    *(u16 *)((u8 *)buf + 8) = (u16)id;
    b = RMMap16_find3(self, (const u16 *)((u8 *)buf + 8)).node;
    *(RMMapNode16 **)((u8 *)buf + 0) = b;
    RMMap16_EndP((RMMapIter16 *)((u8 *)buf + 0x10), self);
    if (RMMapIter16_Ne((RMMapIter16 *)((u8 *)buf + 0), (RMMapIter16 *)((u8 *)buf + 0x10))) {
        *(s32 *)((char *)b->value + 0x80) = 1;
        *(s32 *)(self + 0x20) = 1;
    }
}

void fn_801905AC(char *self) {
    u8 buf[16];
    RMMapNode *b;

    *(RMMapNode **)(buf + 0) = NULL;
    b = (*(RMMapNode **)(self + 4))->left;
    *(RMMapNode **)(buf + 8) = b;
    *(RMMapNode **)(buf + 0) = b;
    for (; RMMap_EndP((RMMapIter *)(buf + 8), self),
           RMMapIter_NotEqualP((RMMapIter *)(buf + 0), (RMMapIter *)(buf + 8));
         RMMapIter_Inc((RMMapIter *)(buf + 0))) {
        char *room = (*(RMMapNode **)(buf + 0))->value;
        if (*(s32 *)(room + 0x34) != 0) {
            *(s32 *)(room + 0x80) = 1;
        }
    }
    *(s32 *)(self + 0x20) = 1;
}

void fn_80190640(char *self) {
    u8 buf[16];
    RMMapNode *b;

    *(RMMapNode **)(buf + 0) = NULL;
    b = (*(RMMapNode **)(self + 4))->left;
    *(RMMapNode **)(buf + 8) = b;
    *(RMMapNode **)(buf + 0) = b;
    for (; RMMap_EndP((RMMapIter *)(buf + 8), self),
           RMMapIter_NotEqualP((RMMapIter *)(buf + 0), (RMMapIter *)(buf + 8));
         RMMapIter_Inc((RMMapIter *)(buf + 0))) {
        char *room = (*(RMMapNode **)(buf + 0))->value;
        if (*(s32 *)(room + 0x34) != 0) {
            *(s32 *)(room + 0x80) = 1;
        }
    }
    *(s32 *)(self + 0x20) = 1;
}

void fn_801909E4(char *self) {
    extern void *fn_800F5248(void *, const char *);
    extern void *fn_800F52EC(void *, u16);
    extern void fn_8019268C(void *);
    extern s32 lbl_80495A90;
    extern char lbl_803DAF60[];
    extern char lbl_803DAF74[];
    extern char lbl_803DAF88[];
    RMMapIter it;
    RMMapIter tmp;

    it.node = NULL;
    fn_800F5248(&lbl_80495A90, lbl_803DAF60);
    tmp.node = (*(RMMapNode **)(self + 4))->left;
    it = tmp;
    for (; tmp.node = *(RMMapNode **)(self + 4), RMMapIter_Ne(&it, &tmp);
         it.node = (RMMapNode *)fn_8039AB24((void **)it.node)) {
        char *room = it.node->value;
        if (*(s32 *)(room + 0x34) != 0) {
            fn_800F5248(fn_800F52EC(fn_800F5248(&lbl_80495A90, lbl_803DAF74), *(u16 *)room), lbl_803DAF88);
            fn_8019268C(room);
        }
    }
}

u16 *fn_80190AA4(s32 self, u16 id) {
    RMMapIter16 it;
    RMMapIter16 end;
    if (id > 0xFFFA) {
        return NULL;
    }
    it = RMMap16_find((char *)self, &id);
    end.node = *(RMMapNode16 **)(self + 4);
    if (RMMapIter16_NotEqual(it, end)) {
        return it.node->value;
    }
    return NULL;
}

extern void fn_801906D4(char *self);
void fn_80190CB0(char *self) {
    extern void **lbl_80496688;
    if (*(s32 *)(self + 0x20) != 0) {
        fn_801906D4(self);
        {
            char *vt = (char *)*lbl_80496688;
            (*(void (**)(void *))(vt + 0x74))((char *)lbl_80496688 + *(s16 *)(vt + 0x70));
        }
    }
}

void fn_80191460(void) {

}

f32 fn_80191464(void) {
    extern char *lbl_80496648;
    extern char *lbl_804966E8;
    extern const f32 lbl_803DAF8C[];
    extern const f32 lbl_803DAF90[];
    extern const f32 lbl_803DAF94[];
    char *vt = *(char **)lbl_80496648;
    f32 f;
    switch ((*(s32 (**)(void *))(vt + 0xF4))(lbl_80496648 + *(s16 *)(vt + 0xF0))) {
    case 2:
        f = lbl_803DAF8C[0];
        break;
    case 0:
    default:
        f = lbl_803DAF90[0];
        break;
    case 1:
    case 3:
        f = lbl_803DAF94[0];
        break;
    }
    return *(f32 *)(lbl_804966E8 + 0xC) * f;
}

void fn_801914E4(char *self) {
    u8 buf[16];
    RMMapNode *b;

    *(RMMapNode **)(buf + 0) = NULL;
    b = (*(RMMapNode **)(self + 4))->left;
    *(RMMapNode **)(buf + 8) = b;
    *(RMMapNode **)(buf + 0) = b;
    for (; RMMap_EndP((RMMapIter *)(buf + 8), self),
           RMMapIter_NotEqualP((RMMapIter *)(buf + 0), (RMMapIter *)(buf + 8));
         RMMapIter_Inc((RMMapIter *)(buf + 0))) {
        char **vec = (char **)((char *)(*(RMMapNode **)(buf + 0))->value + 0x24);
        char *begin = vec[0];
        char *end = vec[1];
        char *p;
        for (p = begin; p != end; p += 0x14) {
        }
        vec[1] = begin;
    }
}

void *fn_80191B94(void *arg0) {
    M2C_UNK fn_801AD7B0(u16, void *);
    void *temp_r31;

    temp_r31 = arg0 + 0x24;
    if (((u32) ((M2C_FIELD(temp_r31, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0x24)) * 0xCCCCCCCD) >> 2U) == 0) {
        fn_801AD7B0(M2C_FIELD(arg0, u16 *, 0), temp_r31);
    }
    return temp_r31;
}

s32 fn_80191F6C(s32 arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r9;

    var_r9 = 0;
    if ((arg0 == 1) || (arg0 == 7) || (arg0 == 8) || (arg0 == 9)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        if ((arg0 == 3) || (arg0 == 5) || (arg0 == 6) || (arg0 == 0xF) || (arg0 == 0x17)) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if ((var_r0_2 != 0) || (arg0 == 0x16)) {
            goto block_16;
        }
    } else {
block_16:
        var_r9 = 1;
    }
    return var_r9;
}

s32 fn_80192788(void *arg0) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x48);
    return (s32) (temp_r3 + (temp_r3 >> 0x1FU)) >> 1;
}

void fn_8019279C(void *arg0, s32 arg1) {
    M2C_UNK fn_80191B04();
    M2C_UNK fn_803AA148(s32, s32);
    fn_80191B04();
    fn_803AA148(arg0 + 4, arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    M2C_FIELD(arg0, s32 *, 0x80) = 1;
}

s32 fn_801927E4(void *arg0, s32 arg1) {
    s32 fn_80105644(s32, s32);
    s32 var_r31;
    void *temp_r30;

    temp_r30 = arg0 + 4;
    var_r31 = M2C_FIELD(arg0, s32 *, 4);
    if (var_r31 != (s32) M2C_FIELD(temp_r30, s32 *, 4)) {
loop_1:
        if (fn_80105644(var_r31, arg1) != 0) {
            return 1;
        }
        var_r31 += 3;
        if (var_r31 == (s32) M2C_FIELD(temp_r30, s32 *, 4)) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return 0;
}

s32 fn_80192B04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

s32 fn_80192C7C(void) {
    return lbl_80494538;
}

u16 fn_80192C84(u16 arg0) {
    u16 *fn_80190AA4(s32, u16);
    extern s32 lbl_80496654;
    s32 temp_r31;
    u16 *temp_r3;
    u16 *temp_r3_2;

    temp_r31 = lbl_80496654;
    temp_r3_2 = fn_80190AA4(temp_r31, arg0);
    if (temp_r3_2 != NULL) {
        temp_r3 = fn_80190AA4(temp_r31, M2C_FIELD(temp_r3_2, u16 *, 2));
        if (temp_r3 != NULL) {
            return *temp_r3;
        }
    }
    return arg0;
}

void fn_80192D70(void) {
    M2C_UNK fn_80192CE4(M2C_UNK, M2C_UNK);
    fn_80192CE4(1, 0xFFFF);
}

