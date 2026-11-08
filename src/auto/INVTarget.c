/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800C3B48(void);
void fn_80200044(void *, u8 *, s32, s32);
void fn_801FFFDC(void *, u8 *, s32, void *);
void fn_802000A8(void *, u8 *, s32, u16);

typedef struct { s32 *p; } INVHandle;
void fn_800F1B80(void *, void *);

static inline void INV_setStr(void *dst, void *key) {
    INVHandle fn_8004C168();
    extern u8 lbl_8041F94C[];
    INVHandle h = fn_8004C168(lbl_8041F94C, key);
    fn_800F1B80(dst, h.p != NULL ? (void *)*h.p : NULL);
}

static inline void INV_setStrT(void *dst, void *tbl, void *key) {
    INVHandle fn_8004C168();
    INVHandle h = fn_8004C168(tbl, key);
    fn_800F1B80(dst, h.p != NULL ? (void *)*h.p : NULL);
}

static inline void *INV_getStr(void *key) {
    INVHandle fn_8004C168();
    extern u8 lbl_8041F94C[];
    INVHandle h = fn_8004C168(lbl_8041F94C, key);
    return h.p != NULL ? (void *)*h.p : NULL;
}

typedef struct { char **begin; char **end; } INVPtrVec;
static inline u32 INVPtrVec_size(INVPtrVec *v) { return v->end - v->begin; }
static inline char *INVPtrVec_at(INVPtrVec *v, u32 i) { return v->begin[i]; }

typedef struct { s16 delta; s16 idx; s32 (*fn)(void *, s32); } CasVtEnt2;
typedef struct { void *a; u8 *cur; s32 b; s32 c; } CasIter;

static inline CasIter *CasIter_begin(CasIter *p, void *list) {
    extern void fn_80151048(void *, void *, s32);
    fn_80151048(p, list, 0);
    return p;
}

typedef struct INVNode {
    struct INVNode *prev;
    struct INVNode *next;
    s32 unk8;
    s32 unkC;
    void *unk10;
} INVNode;

typedef struct INVNodeList {
    INVNode *head;
    INVNode *tail;
    INVNode *free;
    void *unkC;
} INVNodeList;

typedef struct INVCountPair {
    s32 key;
    s32 count;
} INVCountPair;

typedef struct INVCountVec {
    INVCountPair *start;
    INVCountPair *finish;
    s32 unk8;
    INVCountPair *eos;
} INVCountVec;

static inline const u32 *INVCount_max(const u32 *a, const u32 *b) {
    return (*a < *b) ? b : a;
}

static inline INVCountPair *INVCount_copy(INVCountPair *first, INVCountPair *last, INVCountPair *result) {
    for (; first != last; first++) {
        *result = *first;
        result++;
    }
    return result;
}

static inline INVCountPair *INVCount_fill_n(INVCountPair *first, u32 n, const INVCountPair *x) {
    for (; n > 0; n--) {
        *first = *x;
        first++;
    }
    return first;
}

static inline void *INVCount_alloc_bytes(u32 bytes) {
    void *fn_802D1FC8(s32);
    void *fn_80399BE8(u32);

    if (bytes > 0x80) {
        return fn_802D1FC8(bytes);
    }
    return fn_80399BE8(bytes);
}

static inline INVCountPair *INVCount_allocate(u32 n) {
    void *fn_802D1FC8(s32);
    void *fn_80399BE8(u32);

    return n != 0 ? (INVCountPair *)INVCount_alloc_bytes(n * sizeof(INVCountPair)) : NULL;
}

static inline void INVCount_deallocate(INVCountPair *p, u32 n) {
    void fn_802D20E8(void *);
    void fn_803997AC(void *, u32);

    if (p != NULL) {
        u32 bytes = n * sizeof(INVCountPair);
        if (bytes > 0x80) {
            fn_802D20E8(p);
        } else {
            fn_803997AC(p, bytes);
        }
    }
}

static inline void INVCount_construct(INVCountPair *p, const INVCountPair *x) {
    *p = *x;
}

static inline INVCountPair *INVCount_end(INVCountVec *v) {
    return v->finish;
}

static inline u32 INVCount_size(INVCountVec *v) {
    return v->finish - v->start;
}

static inline void INVCount_set(INVCountVec *v, INVCountPair *s, INVCountPair *f, INVCountPair *e) {
    v->start = s;
    v->finish = f;
    v->eos = e;
}

static inline void INVCount_insert_overflow(INVCountVec *v, INVCountPair *pos, const INVCountPair *x, u32 n) {
    void *fn_802D1FC8(s32);
    void *fn_80399BE8(u32);
    void fn_802D20E8(void *);
    void fn_803997AC(void *, u32);
    u32 old_size = INVCount_size(v);
    u32 len = old_size + *INVCount_max(&old_size, &n);
    INVCountPair *new_start = INVCount_allocate(len);
    INVCountPair *new_finish = new_start;

    new_finish = INVCount_copy(v->start, pos, new_finish);
    if (n == 1) {
        *new_finish = *x;
        new_finish++;
    } else {
        new_finish = INVCount_fill_n(new_finish, n, x);
    }
    {
        INVCountPair *q;
        for (q = v->start; q != v->finish; q++) {
        }
    }
    INVCount_deallocate(v->start, v->eos - v->start);
    INVCount_set(v, new_start, new_finish, new_start + len);
}

static inline void INVCount_push_back(INVCountVec *v, const INVCountPair *x) {
    if (v->finish != v->eos) {
        INVCount_construct(v->finish, x);
        v->finish++;
    } else {
        INVCount_insert_overflow(v, v->finish, x, 1);
    }
}

M2C_UNK fn_801D7A14(void **arg0, void *arg1);
s32 fn_801DFF98(void **arg0, s32 arg1);
s32 fn_801F8708(s32, s32);
void fn_801E1338(s32, s32, s32, s32, s32, s32, s32);
void fn_801E1254(s32, s32, s32, s32, s32);
s32 fn_801F9614(s32 arg0, s32 arg1);

typedef struct {
    s32 a;
    s32 b;
} INVPair;
extern char lbl_803E56B8[];
extern void fn_80245AB8(char *);
extern void fn_80246D2C(void) __attribute__((noreturn));
void fn_801D7110(s32, u32, s32, s32, s32);

static inline INVPair *INVPairVec_At(INVPair **v, u32 i) {
    if (i >= (u32)(v[1] - v[0])) {
        fn_80245AB8(lbl_803E56B8);
        fn_80246D2C();
    }
    return &v[0][i];
}

static inline void INVTarget_Send(void *self, u32 msg, s32 val) {
    if (M2C_FIELD(self, s32 *, 0) != 0 && M2C_FIELD(self, s32 *, 0x1C) != 0) {
        fn_801D7110(M2C_FIELD(self, s32 *, 0x1C), msg, val, M2C_FIELD(self, s32 *, 0x7C), 0);
    }
}

static inline s32 INVList_IsNotEmpty(void *list) {
    s32 r = 0;
    if (M2C_FIELD(list, s32 *, 8) != 0 || M2C_FIELD(list, s32 *, 0) != 0) {
        r = 1;
    }
    return r;
}
void *fn_801D7224(void **arg0, s32 arg1);
void *fn_801D7224(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = arg0[0];
    while (var_r31 != NULL && M2C_FIELD(var_r31, s32 *, 8) != arg1 && fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) != 0) {
        var_r31 = M2C_FIELD(var_r31, void **, 4);
    }
    if (var_r31 != NULL && var_r31 != arg0[0]) {
        if (var_r31 == arg0[1]) {
            arg0[1] = M2C_FIELD(var_r31, void **, 0);
        } else {
            M2C_FIELD(M2C_FIELD(var_r31, void **, 4), void **, 0) = M2C_FIELD(var_r31, void **, 0);
        }
        M2C_FIELD(M2C_FIELD(var_r31, void **, 0), void **, 4) = M2C_FIELD(var_r31, void **, 4);
        M2C_FIELD(var_r31, void **, 0) = NULL;
        M2C_FIELD(var_r31, void **, 4) = arg0[0];
        M2C_FIELD(arg0[0], void **, 0) = var_r31;
        arg0[0] = var_r31;
    }
    return var_r31;
}

s32 fn_801D72DC(void **arg0, s32 arg1) {
    M2C_UNK fn_801D6FD0(void **, void *);
    void *node;

    node = fn_801D7224(arg0, arg1);
    if (node != NULL) {
        fn_801D6FD0(arg0, node);
        return 1;
    }
    return 0;
}

s32 fn_801D7320(void **arg0, s32 arg1) {
    M2C_UNK fn_801D6FD0(void **, void *);
    s32 var_r3;
    void *temp_r31;
    void *var_r4;

    var_r4 = *arg0;
    var_r3 = 0;
    if (var_r4 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r4, void **, 4);
            if (M2C_FIELD(var_r4, s32 *, 0x14) == arg1) {
                fn_801D6FD0(arg0, var_r4);
                var_r3 = 1;
            }
            var_r4 = temp_r31;
        } while (var_r4 != NULL);
    }
    return var_r3;
}

s32 fn_801D7380(void **arg0, s32 arg1) {
    return fn_801D7224(arg0, arg1) != 0;
}

s32 fn_801D7550(void) {
    s32 fn_801D6D0C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_804945F8;
    if ((s32) lbl_804945F8 == 0) {
        fn_802D1FC8(0x10);
        lbl_804945F8 = fn_801D6D0C();
    }
    return lbl_804945F8;
}

void fn_801D758C(void) {
    extern char *lbl_804945F8;
    if (lbl_804945F8 != NULL) {
        char *vt = M2C_FIELD(lbl_804945F8, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_804945F8 + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_804945F8 = NULL;
    }
}

void *fn_801D7BE0(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = arg0[0];
    while (var_r31 != NULL && M2C_FIELD(var_r31, s32 *, 8) != arg1 && fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) != 0) {
        var_r31 = M2C_FIELD(var_r31, void **, 4);
    }
    if (var_r31 != NULL && var_r31 != arg0[0]) {
        if (var_r31 == arg0[1]) {
            arg0[1] = M2C_FIELD(var_r31, void **, 0);
        } else {
            M2C_FIELD(M2C_FIELD(var_r31, void **, 4), void **, 0) = M2C_FIELD(var_r31, void **, 0);
        }
        M2C_FIELD(M2C_FIELD(var_r31, void **, 0), void **, 4) = M2C_FIELD(var_r31, void **, 4);
        M2C_FIELD(var_r31, void **, 0) = NULL;
        M2C_FIELD(var_r31, void **, 4) = arg0[0];
        M2C_FIELD(arg0[0], void **, 0) = var_r31;
        arg0[0] = var_r31;
    }
    return var_r31;
}

s32 fn_801D7C98(void **arg0, s32 arg1) {
    void *node;

    node = fn_801D7BE0(arg0, arg1);
    if (node != NULL) {
        fn_801D7A14(arg0, node);
        return 1;
    }
    return 0;
}

s32 fn_801D7CDC(void *arg0, s32 arg1) {
    s32 var_r3;
    void *temp_r31;
    void *var_r4;

    var_r4 = *(void **)arg0;
    var_r3 = 0;
    if (var_r4 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r4, void **, 4);
            if (M2C_FIELD(var_r4, s32 *, 0x18) == arg1) {
                fn_801D7A14((void **)arg0, var_r4);
                var_r3 = 1;
            }
            var_r4 = temp_r31;
        } while (var_r4 != NULL);
    }
    return var_r3;
}

void *fn_801D7BE0(void **arg0, s32 arg1);
s32 fn_801D7CDC(void *arg0, s32 arg1);
M2C_UNK fn_801D7A14(void **arg0, void *arg1);

s32 fn_801D7D3C(void *arg0) {
    return ((s32 (*)(void *))fn_801D7BE0)(arg0) != 0;
}

void fn_801D7D6C(void **arg0) {
    M2C_UNK fn_800B9F18(s32);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            fn_800B9F18(M2C_FIELD(var_r31, s32 *, 0x1C));
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
}

s32 fn_801D7DB0(void **arg0, s32 arg1) {
    void *node = fn_801D7BE0(arg0, arg1);
    if (node != NULL) {
        return M2C_FIELD(node, s32 *, 0x1C);
    }
    return 0;
}

s32 fn_801D7DE4(void) {
    s32 fn_801D75D8();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_804945FC;
    if ((s32) lbl_804945FC == 0) {
        fn_802D1FC8(0x20);
        lbl_804945FC = fn_801D75D8();
    }
    return lbl_804945FC;
}

M2C_UNK fn_801D8080(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **node;
    void **next;
    void *head;

    node = arg0[2];
    next = node[1];
    arg0[2] = next;
    if (next != NULL) {
        next[0] = NULL;
    }
    head = arg0[0];
    if (head == NULL) {
        arg0[0] = node;
        node[0] = head;
        arg0[1] = node;
        node[1] = head;
    } else {
        ((void **)arg0[1])[1] = node;
        node[0] = arg0[1];
        arg0[1] = node;
        node[1] = NULL;
    }
    node[2] = (void *)arg1;
    node[3] = (void *)arg2;
    node[4] = (void *)arg3;
}

M2C_UNK fn_801D80E8(void **arg0, void *arg1p) {
    INVNodeList *list = (INVNodeList *)arg0;
    INVNode *node = arg1p;

    if (node->prev != NULL) {
        node->prev->next = node->next;
    }
    if (node->next != NULL) {
        node->next->prev = node->prev;
    }
    if (list->head == node) {
        list->head = node->next;
    }
    if (list->tail == node) {
        list->tail = node->prev;
    }
    node->prev = NULL;
    node->next = NULL;
    if (list->free == NULL) {
        list->free = node;
    } else {
        node->next = list->free;
        list->free->prev = node;
        list->free = node;
    }
    list->free->unk8 = 0;
    list->free->unkC = 0;
    list->free->unk10 = 0;
}

s32 fn_801D8180(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_802486DC(s32, s32);
    M2C_UNK fn_801D8080(void **, s32, s32, s32);
    M2C_UNK fn_801D80E8(void **, void *);
    s32 found;
    void *var_r31;

    if (arg0[2] != NULL) {
        var_r31 = arg0[0];
        found = 0;
        if (var_r31 != NULL) {
            do {
                if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                    fn_801D80E8(arg0, var_r31);
                    found = 1;
                }
                var_r31 = M2C_FIELD(var_r31, void **, 4);
            } while (var_r31 != NULL && found == 0);
        }
        fn_801D8080(arg0, arg1, arg2, arg3);
        return 1;
    }
    return 0;
}

s32 fn_801D8228(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    M2C_UNK fn_801D80E8(void **, void *);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            if (M2C_FIELD(var_r31, s32 *, 8) == arg1 || fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                fn_801D80E8(arg0, var_r31);
                return 1;
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
    return 0;
}

s32 fn_801D82A0(void **arg0, s32 arg1) {
    M2C_UNK fn_801D80E8(void **, void *);
    s32 var_r3;
    void *temp_r31;
    void *var_r4;

    var_r4 = *arg0;
    var_r3 = 0;
    if (var_r4 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r4, void **, 4);
            if (M2C_FIELD(var_r4, s32 *, 0x10) == arg1) {
                fn_801D80E8(arg0, var_r4);
                var_r3 = 1;
            }
            var_r4 = temp_r31;
        } while (var_r4 != NULL);
    }
    return var_r3;
}

s32 fn_801D8300(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
loop_1:
        if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
            return 1;
        }
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        if (var_r31 == NULL) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return 0;
}

s32 fn_801D8360(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = arg0[0];
    if (var_r31 != NULL) {
        do {
            if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                if (var_r31 != arg0[0]) {
                    if (var_r31 == arg0[1]) {
                        arg0[1] = M2C_FIELD(var_r31, void **, 0);
                    } else {
                        M2C_FIELD(M2C_FIELD(var_r31, void **, 4), void **, 0) = M2C_FIELD(var_r31, void **, 0);
                    }
                    M2C_FIELD(M2C_FIELD(var_r31, void **, 0), void **, 4) = M2C_FIELD(var_r31, void **, 4);
                    M2C_FIELD(var_r31, void **, 0) = NULL;
                    M2C_FIELD(var_r31, void **, 4) = arg0[0];
                    M2C_FIELD(arg0[0], void **, 0) = var_r31;
                    arg0[0] = var_r31;
                }
                return M2C_FIELD(var_r31, s32 *, 0xC);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
    return 0;
}

void fn_801D8508(s32 arg0) {
    M2C_UNK fn_801D854C(s32, s32);
    s32 var_r31;

    var_r31 = 0;
    do {
        fn_801D854C(arg0, var_r31);
        var_r31 += 1;
    } while (var_r31 <= 4);
}

void fn_801D86F4(u8 *arg0, s32 arg1) {
    void fn_803379C8(s32, s32);
    extern s32 lbl_8041FC68[];
    extern u8 *lbl_80494FA4;
    extern s32 lbl_8049627C;
    u8 *a;
    u8 *b;
    s32 off;

    if (lbl_8041FC68[0] != 0) {
        off = arg1 * 4;
        a = arg0 + 0x10;
        if (*(s32 *)(a + off) != 0) {
            b = arg0 + 0x38;
            if (*(s32 *)(b + off) != 0) {
                char *vt;
                u8 *c;
                fn_803379C8(lbl_8049627C, *(s32 *)(b + off));
                *(s32 *)(b + off) = 0;
                c = arg0 + 0x24;
                *(s32 *)(c + off) = 0;
                vt = *(char **)lbl_80494FA4;
                M2C_FIELD(vt, void (**)(void *, s32), 0xA4)(lbl_80494FA4 + M2C_FIELD(vt, s16 *, 0xA0), *(s32 *)(a + off));
            }
        }
    }
}

s32 fn_801D8788(void) {
    s32 fn_801D7E6C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494600;
    if ((s32) lbl_80494600 == 0) {
        fn_802D1FC8(0x78);
        lbl_80494600 = fn_801D7E6C();
    }
    return lbl_80494600;
}

void fn_801D87C4(void) {
    extern char *lbl_80494600;
    if (lbl_80494600 != NULL) {
        char *vt = M2C_FIELD(lbl_80494600, char **, 0x74);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_80494600 + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_80494600 = NULL;
    }
}

s32 fn_801D8810(void **arg0) {
    void *fn_802D1FC8(s32);
    extern char lbl_80416EC8[];
    extern char lbl_80416EE0[];
    INVNodeList *list = (INVNodeList *)arg0;
    s32 i;
    INVNode *prev;
    INVNode *node;
    INVNode *free;

    list->unkC = lbl_80416EC8;
    list->head = NULL;
    list->tail = NULL;
    list->free = NULL;
    prev = NULL;
    for (i = 0; i < 200; i++) {
        node = fn_802D1FC8(0x14);
        free = list->free;
        node->unk10 = lbl_80416EE0;
        node->prev = NULL;
        node->next = NULL;
        node->unk8 = 0;
        node->unkC = 0;
        if (free == NULL) {
            list->free = node;
        } else {
            prev->next = node;
            node->prev = prev;
        }
        prev = node;
    }
    return (s32)arg0;
}

void fn_801D88B0(void *arg0, s32 arg1) {
    extern u8 lbl_80416EC8[];
    void fn_802D20E8(void *);
    char *p;
    char *next;

    M2C_FIELD(arg0, void **, 0xC) = lbl_80416EC8;
    p = M2C_FIELD(arg0, char **, 8);
    if (M2C_FIELD(arg0, char **, 0) != NULL) {
        M2C_FIELD(M2C_FIELD(arg0, char **, 4), char **, 4) = p;
        M2C_FIELD(M2C_FIELD(arg0, char **, 8), char **, 0) = M2C_FIELD(arg0, char **, 4);
        p = M2C_FIELD(arg0, char **, 0);
    }
    do {
        next = M2C_FIELD(p, char **, 4);
        if (p != NULL) {
            char *vt = M2C_FIELD(p, char **, 0x10);
            M2C_FIELD(vt, void (**)(void *, s32), 0xC)(p + M2C_FIELD(vt, s16 *, 8), 3);
        }
        p = next;
    } while (p != NULL);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

M2C_UNK fn_801D8950(void **arg0, s32 arg1, s32 arg2) {
    void **node;
    void **next;
    void *head;

    node = arg0[2];
    next = node[1];
    arg0[2] = next;
    if (next != NULL) {
        next[0] = NULL;
    }
    head = arg0[0];
    if (head == NULL) {
        arg0[0] = node;
        node[0] = head;
        arg0[1] = node;
        node[1] = head;
    } else {
        ((void **)arg0[1])[1] = node;
        node[0] = arg0[1];
        arg0[1] = node;
        node[1] = NULL;
    }
    node[2] = (void *)arg1;
    node[3] = (void *)arg2;
}

s32 fn_801D89B4(void **arg0, void *arg1) {
    INVNodeList *list = (INVNodeList *)arg0;
    INVNode *node = arg1;

    if (node->prev != NULL) {
        node->prev->next = node->next;
    }
    if (node->next != NULL) {
        node->next->prev = node->prev;
    }
    if (list->head == node) {
        list->head = node->next;
    }
    if (list->tail == node) {
        list->tail = node->prev;
    }
    node->prev = NULL;
    node->next = NULL;
    if (list->free == NULL) {
        list->free = node;
    } else {
        node->next = list->free;
        list->free->prev = node;
        list->free = node;
    }
    list->free->unk8 = 0;
    list->free->unkC = 0;
}

s32 fn_801D8A44(void **arg0, s32 arg1, s32 arg2) {
    s32 fn_802486DC(s32, s32);
    M2C_UNK fn_801D8950(void **, s32, s32);
    void *var_r31;

    if (arg0[2] != NULL) {
        var_r31 = arg0[0];
        if (var_r31 != NULL) {
            do {
                if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                    return 0;
                }
                var_r31 = M2C_FIELD(var_r31, void **, 4);
            } while (var_r31 != NULL);
        }
        fn_801D8950(arg0, arg1, arg2);
        return 1;
    }
    return 0;
}

s32 fn_801D8AC8(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    M2C_UNK fn_801D89B4(void **, void *);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            if (M2C_FIELD(var_r31, s32 *, 8) == arg1 || fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                fn_801D89B4(arg0, var_r31);
                return 1;
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
    return 0;
}

s32 fn_801D8B40(void *arg0, void *arg1) {
    s32 var_r3;
    void *temp_r31;
    void *var_r4;

    var_r4 = *(void **)arg0;
    var_r3 = 0;
    if (var_r4 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r4, void **, 4);
            if (M2C_FIELD(var_r4, void **, 0xC) == arg1) {
                fn_801D89B4(arg0, var_r4);
                var_r3 = 1;
            }
            var_r4 = temp_r31;
        } while (var_r4 != NULL);
    }
    return var_r3;
}

s32 fn_801D8BA0(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
loop_1:
        if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
            return 1;
        }
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        if (var_r31 == NULL) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return 0;
}

extern char lbl_803E0370[];
s32 fn_801D8C00(void **arg0, s32 arg1, s32 arg2) {
    s32 fn_802486DC(s32, s32);
    void fn_80248B28(s32, char *);
    void *var_r31;
    void *obj;

    var_r31 = arg0[0];
    if (var_r31 != NULL) {
        do {
            if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                if (var_r31 != arg0[0]) {
                    if (var_r31 == arg0[1]) {
                        arg0[1] = M2C_FIELD(var_r31, void **, 0);
                    } else {
                        M2C_FIELD(M2C_FIELD(var_r31, void **, 4), void **, 0) = M2C_FIELD(var_r31, void **, 0);
                    }
                    M2C_FIELD(M2C_FIELD(var_r31, void **, 0), void **, 4) = M2C_FIELD(var_r31, void **, 4);
                    M2C_FIELD(var_r31, void **, 0) = NULL;
                    M2C_FIELD(var_r31, void **, 4) = arg0[0];
                    M2C_FIELD(arg0[0], void **, 0) = var_r31;
                    arg0[0] = var_r31;
                }
                obj = M2C_FIELD(var_r31, void **, 0xC);
                return M2C_FIELD(obj, s32 (**)(void *, s32), 0xC)(obj, arg2);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
    fn_80248B28(arg1, lbl_803E0370);
    return 0;
}

s32 fn_801D8CE4(void **arg0) {
    void *fn_802D1FC8(s32);
    extern char lbl_80416E98[];
    extern char lbl_80416EB0[];
    INVNodeList *list = (INVNodeList *)arg0;
    INVNode *prev;
    s32 i;
    INVNode *node;
    INVNode *free;

    list->unkC = lbl_80416E98;
    list->head = NULL;
    list->tail = NULL;
    list->free = NULL;
    prev = NULL;
    for (i = 0; i < 100; i++) {
        node = fn_802D1FC8(0x14);
        free = list->free;
        node->unk10 = lbl_80416EB0;
        node->prev = NULL;
        node->next = NULL;
        node->unk8 = 0;
        node->unkC = 0;
        if (free == NULL) {
            list->free = node;
        } else {
            prev->next = node;
            node->prev = prev;
        }
        prev = node;
    }
    return (s32)arg0;
}

void fn_801D8D84(void *arg0, s32 arg1) {
    extern u8 lbl_80416E98[];
    void fn_802D20E8(void *);
    char *p;
    char *next;

    M2C_FIELD(arg0, void **, 0xC) = lbl_80416E98;
    p = M2C_FIELD(arg0, char **, 8);
    if (M2C_FIELD(arg0, char **, 0) != NULL) {
        M2C_FIELD(M2C_FIELD(arg0, char **, 4), char **, 4) = p;
        M2C_FIELD(M2C_FIELD(arg0, char **, 8), char **, 0) = M2C_FIELD(arg0, char **, 4);
        p = M2C_FIELD(arg0, char **, 0);
    }
    do {
        next = M2C_FIELD(p, char **, 4);
        if (p != NULL) {
            char *vt = M2C_FIELD(p, char **, 0x10);
            M2C_FIELD(vt, void (**)(void *, s32), 0xC)(p + M2C_FIELD(vt, s16 *, 8), 3);
        }
        p = next;
    } while (p != NULL);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

M2C_UNK fn_801D8E24(void **arg0, s32 arg1, s32 arg2) {
    void **node;
    void **next;
    void *head;

    node = arg0[2];
    next = node[1];
    arg0[2] = next;
    if (next != NULL) {
        next[0] = NULL;
    }
    head = arg0[0];
    if (head == NULL) {
        arg0[0] = node;
        node[0] = head;
        arg0[1] = node;
        node[1] = head;
    } else {
        ((void **)arg0[1])[1] = node;
        node[0] = arg0[1];
        arg0[1] = node;
        node[1] = NULL;
    }
    node[2] = (void *)arg1;
    node[3] = (void *)arg2;
}

s32 fn_801D8E88(void **arg0, void *arg1) {
    INVNodeList *list = (INVNodeList *)arg0;
    INVNode *node = arg1;

    if (node->prev != NULL) {
        node->prev->next = node->next;
    }
    if (node->next != NULL) {
        node->next->prev = node->prev;
    }
    if (list->head == node) {
        list->head = node->next;
    }
    if (list->tail == node) {
        list->tail = node->prev;
    }
    node->prev = NULL;
    node->next = NULL;
    if (list->free == NULL) {
        list->free = node;
    } else {
        node->next = list->free;
        list->free->prev = node;
        list->free = node;
    }
    list->free->unk8 = 0;
    list->free->unkC = 0;
}

s32 fn_801D8F18(void **arg0, s32 arg1, s32 arg2) {
    s32 fn_802486DC(s32, s32);
    M2C_UNK fn_801D8E24(void **, s32, s32);
    void *var_r31;

    if (arg0[2] != NULL) {
        var_r31 = arg0[0];
        if (var_r31 != NULL) {
            do {
                if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                    return 0;
                }
                var_r31 = M2C_FIELD(var_r31, void **, 4);
            } while (var_r31 != NULL);
        }
        fn_801D8E24(arg0, arg1, arg2);
        return 1;
    }
    return 0;
}

s32 fn_801D8F9C(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    M2C_UNK fn_801D8E88(void **, void *);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            if (M2C_FIELD(var_r31, s32 *, 8) == arg1 || fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                fn_801D8E88(arg0, var_r31);
                return 1;
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
    return 0;
}

s32 fn_801D9014(void *arg0, void *arg1) {
    s32 var_r3;
    void *temp_r31;
    void *var_r4;

    var_r4 = *(void **)arg0;
    var_r3 = 0;
    if (var_r4 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r4, void **, 4);
            if (M2C_FIELD(var_r4, void **, 0xC) == arg1) {
                fn_801D8E88(arg0, var_r4);
                var_r3 = 1;
            }
            var_r4 = temp_r31;
        } while (var_r4 != NULL);
    }
    return var_r3;
}

s32 fn_801D9074(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
loop_1:
        if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
            return 1;
        }
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        if (var_r31 == NULL) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return 0;
}

s32 fn_801D91AC(void **arg0) {
    void *fn_802D1FC8(s32);
    extern char lbl_80416E68[];
    extern char lbl_80416E80[];
    INVNodeList *list = (INVNodeList *)arg0;
    INVNode *prev;
    s32 i;
    INVNode *node;
    INVNode *free;

    list->unkC = lbl_80416E68;
    list->head = NULL;
    list->tail = NULL;
    list->free = NULL;
    prev = NULL;
    for (i = 0; i < 100; i++) {
        node = fn_802D1FC8(0x14);
        free = list->free;
        node->unk10 = lbl_80416E80;
        node->prev = NULL;
        node->next = NULL;
        node->unk8 = 0;
        node->unkC = 0;
        if (free == NULL) {
            list->free = node;
        } else {
            prev->next = node;
            node->prev = prev;
        }
        prev = node;
    }
    return (s32)arg0;
}

void fn_801D924C(void *arg0, s32 arg1) {
    extern u8 lbl_80416E68[];
    void fn_802D20E8(void *);
    char *p;
    char *next;

    M2C_FIELD(arg0, void **, 0xC) = lbl_80416E68;
    p = M2C_FIELD(arg0, char **, 8);
    if (M2C_FIELD(arg0, char **, 0) != NULL) {
        M2C_FIELD(M2C_FIELD(arg0, char **, 4), char **, 4) = p;
        M2C_FIELD(M2C_FIELD(arg0, char **, 8), char **, 0) = M2C_FIELD(arg0, char **, 4);
        p = M2C_FIELD(arg0, char **, 0);
    }
    do {
        next = M2C_FIELD(p, char **, 4);
        if (p != NULL) {
            char *vt = M2C_FIELD(p, char **, 0x10);
            M2C_FIELD(vt, void (**)(void *, s32), 0xC)(p + M2C_FIELD(vt, s16 *, 8), 3);
        }
        p = next;
    } while (p != NULL);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

M2C_UNK fn_801D92EC(void **arg0, s32 arg1, s32 arg2) {
    void **node;
    void **next;
    void *head;

    node = arg0[2];
    next = node[1];
    arg0[2] = next;
    if (next != NULL) {
        next[0] = NULL;
    }
    head = arg0[0];
    if (head == NULL) {
        arg0[0] = node;
        node[0] = head;
        arg0[1] = node;
        node[1] = head;
    } else {
        ((void **)arg0[1])[1] = node;
        node[0] = arg0[1];
        arg0[1] = node;
        node[1] = NULL;
    }
    node[2] = (void *)arg1;
    node[3] = (void *)arg2;
}

s32 fn_801D9350(void **arg0, void *arg1) {
    INVNodeList *list = (INVNodeList *)arg0;
    INVNode *node = arg1;

    if (node->prev != NULL) {
        node->prev->next = node->next;
    }
    if (node->next != NULL) {
        node->next->prev = node->prev;
    }
    if (list->head == node) {
        list->head = node->next;
    }
    if (list->tail == node) {
        list->tail = node->prev;
    }
    node->prev = NULL;
    node->next = NULL;
    if (list->free == NULL) {
        list->free = node;
    } else {
        node->next = list->free;
        list->free->prev = node;
        list->free = node;
    }
    list->free->unk8 = 0;
    list->free->unkC = 0;
}

s32 fn_801D93E0(void **arg0, s32 arg1, s32 arg2) {
    s32 fn_802486DC(s32, s32);
    M2C_UNK fn_801D92EC(void **, s32, s32);
    void *var_r31;

    if (arg0[2] != NULL) {
        var_r31 = arg0[0];
        if (var_r31 != NULL) {
            do {
                if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                    return 0;
                }
                var_r31 = M2C_FIELD(var_r31, void **, 4);
            } while (var_r31 != NULL);
        }
        fn_801D92EC(arg0, arg1, arg2);
        return 1;
    }
    return 0;
}

s32 fn_801D9464(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    M2C_UNK fn_801D9350(void **, void *);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            if (M2C_FIELD(var_r31, s32 *, 8) == arg1 || fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                fn_801D9350(arg0, var_r31);
                return 1;
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
    return 0;
}

s32 fn_801D94DC(void *arg0, void *arg1) {
    s32 var_r3;
    void *temp_r31;
    void *var_r4;

    var_r4 = *(void **)arg0;
    var_r3 = 0;
    if (var_r4 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r4, void **, 4);
            if (M2C_FIELD(var_r4, void **, 0xC) == arg1) {
                fn_801D9350(arg0, var_r4);
                var_r3 = 1;
            }
            var_r4 = temp_r31;
        } while (var_r4 != NULL);
    }
    return var_r3;
}

s32 fn_801D953C(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
loop_1:
        if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
            return 1;
        }
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        if (var_r31 == NULL) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return 0;
}

s32 fn_801D959C(void **arg0, s32 arg1, s32 arg2) {
    s32 fn_802486DC(s32, s32);
    void fn_80248B28(s32, char *);
    void *var_r31;
    void *obj;

    var_r31 = arg0[0];
    if (var_r31 != NULL) {
        do {
            if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                if (var_r31 != arg0[0]) {
                    if (var_r31 == arg0[1]) {
                        arg0[1] = M2C_FIELD(var_r31, void **, 0);
                    } else {
                        M2C_FIELD(M2C_FIELD(var_r31, void **, 4), void **, 0) = M2C_FIELD(var_r31, void **, 0);
                    }
                    M2C_FIELD(M2C_FIELD(var_r31, void **, 0), void **, 4) = M2C_FIELD(var_r31, void **, 4);
                    M2C_FIELD(var_r31, void **, 0) = NULL;
                    M2C_FIELD(var_r31, void **, 4) = arg0[0];
                    M2C_FIELD(arg0[0], void **, 0) = var_r31;
                    arg0[0] = var_r31;
                }
                obj = M2C_FIELD(var_r31, void **, 0xC);
                return M2C_FIELD(obj, s32 (**)(void *, s32), 0xC)(obj, arg2);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
    fn_80248B28(arg1, lbl_803E0370);
    return 0;
}

s32 fn_801D9680(void) {
    s32 fn_801D8810();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494604;
    if ((s32) lbl_80494604 == 0) {
        fn_802D1FC8(0x10);
        lbl_80494604 = fn_801D8810();
    }
    return lbl_80494604;
}

void fn_801D96BC(void) {
    extern char *lbl_80494604;
    if (lbl_80494604 != NULL) {
        char *vt = M2C_FIELD(lbl_80494604, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_80494604 + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_80494604 = NULL;
    }
}

s32 fn_801D9708(void) {
    s32 fn_801D8CE4();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494608;
    if ((s32) lbl_80494608 == 0) {
        fn_802D1FC8(0x10);
        lbl_80494608 = fn_801D8CE4();
    }
    return lbl_80494608;
}

void fn_801D9744(void) {
    extern char *lbl_80494608;
    if (lbl_80494608 != NULL) {
        char *vt = M2C_FIELD(lbl_80494608, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_80494608 + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_80494608 = NULL;
    }
}

s32 fn_801D9790(void) {
    s32 fn_801D91AC();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_8049460C;
    if ((s32) lbl_8049460C == 0) {
        fn_802D1FC8(0x10);
        lbl_8049460C = fn_801D91AC();
    }
    return lbl_8049460C;
}

void fn_801D97CC(void) {
    extern char *lbl_8049460C;
    if (lbl_8049460C != NULL) {
        char *vt = M2C_FIELD(lbl_8049460C, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_8049460C + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_8049460C = NULL;
    }
}

void fn_801DB8B8(void *arg0, s32 arg1) {
    extern s32 fn_801D7CDC(void *, s32);
    extern s32 fn_801D8B40(void *, void *);
    extern s32 fn_801D9014(void *, void *);
    extern s32 fn_801D94DC(void *, void *);
    extern s32 fn_801DC030(void *, void *);
    extern s32 fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80416EF8[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80416EF8;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

s32 fn_801DBD24(void **arg0) {
    void *fn_802D1FC8(s32);
    extern char lbl_80416F78[];
    extern char lbl_80416F90[];
    INVNodeList *list = (INVNodeList *)arg0;
    INVNode *prev;
    s32 i;
    INVNode *node;
    INVNode *free;

    list->unkC = lbl_80416F78;
    list->head = NULL;
    list->tail = NULL;
    list->free = NULL;
    prev = NULL;
    for (i = 0; i < 64; i++) {
        node = fn_802D1FC8(0x18);
        free = list->free;
        M2C_FIELD(node, char **, 0x14) = lbl_80416F90;
        node->prev = NULL;
        node->next = NULL;
        node->unk8 = 0x4B;
        node->unkC = 0;
        node->unk10 = 0;
        if (free == NULL) {
            list->free = node;
        } else {
            prev->next = node;
            node->prev = prev;
        }
        prev = node;
    }
    return (s32)arg0;
}

void fn_801DBDCC(void *arg0, s32 arg1) {
    extern u8 lbl_80416F78[];
    void fn_802D20E8(void *);
    char *p;
    char *next;

    M2C_FIELD(arg0, void **, 0xC) = lbl_80416F78;
    p = M2C_FIELD(arg0, char **, 8);
    if (M2C_FIELD(arg0, char **, 0) != NULL) {
        M2C_FIELD(M2C_FIELD(arg0, char **, 4), char **, 4) = p;
        M2C_FIELD(M2C_FIELD(arg0, char **, 8), char **, 0) = M2C_FIELD(arg0, char **, 4);
        p = M2C_FIELD(arg0, char **, 0);
    }
    do {
        next = M2C_FIELD(p, char **, 4);
        if (p != NULL) {
            char *vt = M2C_FIELD(p, char **, 0x14);
            M2C_FIELD(vt, void (**)(void *, s32), 0xC)(p + M2C_FIELD(vt, s16 *, 8), 3);
        }
        p = next;
    } while (p != NULL);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_801DBF38(void **arg0, void *arg1p) {
    INVNodeList *list = (INVNodeList *)arg0;
    INVNode *node = arg1p;

    if (node->prev != NULL) {
        node->prev->next = node->next;
    }
    if (node->next != NULL) {
        node->next->prev = node->prev;
    }
    if (list->head == node) {
        list->head = node->next;
    }
    if (list->tail == node) {
        list->tail = node->prev;
    }
    node->prev = NULL;
    node->next = NULL;
    if (list->free == NULL) {
        list->free = node;
    } else {
        node->next = list->free;
        list->free->prev = node;
        list->free = node;
    }
    list->free->unk8 = 0x4B;
    list->free->unkC = 0;
    list->free->unk10 = 0;
}

s32 fn_801DBFD4(void **arg0, s32 arg1, s32 arg2) {
    void fn_801DBE6C(void **, s32, s32);
    void *it;

    if (arg0[2] != NULL) {
        for (it = arg0[0]; it != NULL; it = M2C_FIELD(it, void **, 4)) {
            if (M2C_FIELD(it, s32 *, 0xC) == arg2) {
                return 0;
            }
        }
        fn_801DBE6C(arg0, arg1, arg2);
        return 1;
    }
    return 0;
}

s32 fn_801DC030(void *arg0, void *arg1) {
    void *next;
    void *var_r4;

    var_r4 = *(void **)arg0;
    if (var_r4 != NULL) {
        do {
            next = M2C_FIELD(var_r4, void **, 4);
            if (M2C_FIELD(var_r4, void **, 0xC) == arg1) {
                fn_801DBF38(arg0, var_r4);
                return 1;
            }
            var_r4 = next;
        } while (var_r4 != NULL);
    }
    return 0;
}

s32 fn_801DC084(void **arg0, s32 arg1) {
    void fn_801DBF38(void **, void *);
    s32 fn_802486DC(s32, s32);
    s32 var_r28;
    void *temp_r30;
    void *var_r31;

    var_r31 = *arg0;
    var_r28 = 0;
    if (var_r31 != NULL) {
        do {
            temp_r30 = M2C_FIELD(var_r31, void **, 4);
            if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 0x10), arg1) == 0) {
                fn_801DBF38(arg0, var_r31);
                var_r28 = 1;
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
    return var_r28;
}

s32 fn_801DC0F4(void **arg0, s32 arg1) {
    void *it;
    void *next;

    for (it = *arg0; it != NULL; it = next) {
        next = M2C_FIELD(it, void **, 4);
        if (M2C_FIELD(it, s32 *, 0xC) == arg1) {
            return 1;
        }
    }
    return 0;
}

void fn_801DC128(void **arg0, s32 arg1) {
    void *temp_r31;
    void *temp_r9;
    void *var_r3;

    var_r3 = *arg0;
    if (var_r3 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r3, void **, 4);
            if ((s32) M2C_FIELD(var_r3, s32 *, 8) > 0x32) {
                temp_r9 = M2C_FIELD(var_r3, void **, 0xC);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0xC)(temp_r9, arg1);
            }
            var_r3 = temp_r31;
        } while (var_r3 != NULL);
    }
}

void fn_801DC18C(void **arg0, s32 arg1) {
    void *temp_r31;
    void *temp_r9;
    void *var_r3;

    var_r3 = *arg0;
    if (var_r3 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r3, void **, 4);
            if ((s32) M2C_FIELD(var_r3, s32 *, 8) <= 0x32) {
                temp_r9 = M2C_FIELD(var_r3, void **, 0xC);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0xC)(temp_r9, arg1);
            }
            var_r3 = temp_r31;
        } while (var_r3 != NULL);
    }
}

s32 fn_801DC1F0(void) {
    s32 fn_801DBD24();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494614;
    if ((s32) lbl_80494614 == 0) {
        fn_802D1FC8(0x10);
        lbl_80494614 = fn_801DBD24();
    }
    return lbl_80494614;
}

void fn_801DC22C(void) {
    extern char *lbl_80494614;
    if (lbl_80494614 != NULL) {
        char *vt = M2C_FIELD(lbl_80494614, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_80494614 + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_80494614 = NULL;
    }
}

void fn_801DC704(void *arg0, s32 arg1) {
    extern s32 fn_801D7CDC(void *, s32);
    extern s32 fn_801D8B40(void *, void *);
    extern s32 fn_801D9014(void *, void *);
    extern s32 fn_801D94DC(void *, void *);
    extern s32 fn_801DC030(void *, void *);
    extern s32 fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80416FA8[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80416FA8;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

s32 fn_801DCC6C(void *arg0) {
    s32 var_r11;

    var_r11 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) == (s32) M2C_FIELD(arg0, s32 *, 0x88)) {
        var_r11 = 0;
    }
    return var_r11;
}

s32 fn_801DCC8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

void fn_801DCC94(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
}

void fn_801DD0E0(void *arg0, s32 arg1) {
    extern s32 fn_801D7CDC(void *, s32);
    extern s32 fn_801D8B40(void *, void *);
    extern s32 fn_801D9014(void *, void *);
    extern s32 fn_801D94DC(void *, void *);
    extern s32 fn_801DC030(void *, void *);
    extern s32 fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80416FE8[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80416FE8;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_801DE594(void *arg0, s32 arg1) {
    extern s32 fn_801D7CDC(void *, s32);
    extern s32 fn_801D8B40(void *, void *);
    extern s32 fn_801D9014(void *, void *);
    extern s32 fn_801D94DC(void *, void *);
    extern s32 fn_801DC030(void *, void *);
    extern s32 fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80417108[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80417108;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_801DECDC(void *arg0, s32 arg1) {
    extern s32 fn_801D7CDC(void *, s32);
    extern s32 fn_801D8B40(void *, void *);
    extern s32 fn_801D9014(void *, void *);
    extern s32 fn_801D94DC(void *, void *);
    extern s32 fn_801DC030(void *, void *);
    extern s32 fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_804170C8[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_804170C8;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_801DEFA8(void) {
    extern void *fn_801DF04C(void *);
    extern void fn_801DF0DC(void);
    extern void fn_801DF3F8(void *);
    extern void *fn_802D1FC8(s32);
    extern void *lbl_80494618;
    if (lbl_80494618 == 0) {
        lbl_80494618 = fn_802D1FC8(0xFC);
        lbl_80494618 = fn_801DF04C(lbl_80494618);
        fn_801DF0DC();
        fn_801DF3F8(lbl_80494618);
    }
}

void fn_801DEFF0(void) {
    extern void fn_801DF44C(u8 *);
    extern u8 *lbl_80494618;
    if (lbl_80494618 != 0) {
        u8 *obj;
        fn_801DF44C(lbl_80494618);
        obj = lbl_80494618;
        if (obj != 0) {
            u8 *vt = *(u8 **)(obj + 0xF8);
            (*(void (**)(void *, s32))(vt + 0xc))(obj + *(s16 *)(vt + 8), 3);
        }
        lbl_80494618 = 0;
    }
}

u8 *fn_801DF04C(u8 *self) {
    extern u8 lbl_804170B0[];
    extern f32 lbl_803E1348[];
    extern f32 lbl_803E134C[];
    s32 i;
    f32 *p;

    *(u8 **)(self + 0xF8) = lbl_804170B0;
    p = (f32 *)(self + 0xA0);
    for (i = 20; --i != -1; p++) {
        ((s32 *)p)[-20] = 0;
        *p = lbl_803E1348[0];
    }
    *(s32 *)(self + 0xF0) = 0;
    *(s32 *)(self + 0xF4) = 3;
    *(f32 *)(self + 0xB4) = lbl_803E134C[0];
    return self;
}

void fn_801DF0A8(u8 *self, s32 flags) {
    extern u8 lbl_804170B0[];
    extern void fn_802D20E8(void *);
    *(u8 **)(self + 0xF8) = lbl_804170B0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_801DF3F8(void *self) {
    extern u8 lbl_8045BA40[];
    void fn_803374C8(void *, s32);
    s32 i;

    for (i = 0; i < 20; i++) {
        fn_803374C8(lbl_8045BA40, ((s32 *)self)[i]);
    }
    *(s32 *)((u8 *)self + 0xF0) = 1;
}

void fn_801DF44C(u8 *self) {
    extern u8 lbl_8045BA40[];
    void fn_803379C8(void *, s32);
    s32 i;

    for (i = 0; i < 20; i++) {
        fn_803379C8(lbl_8045BA40, ((s32 *)self)[i]);
    }
    *(s32 *)(self + 0xF0) = 0;
}

s32 fn_801DF4A0(s32 arg0) {
    extern void *fn_80336E08(void *, void *);
    extern u8 lbl_8045BA40[];
    extern struct { void *names[20]; void *objs[20]; } *lbl_80494618;

    if (lbl_80494618 == 0) {
        return 0;
    }
    if (lbl_80494618->objs[arg0] == 0) {
        lbl_80494618->objs[arg0] = fn_80336E08(lbl_8045BA40, lbl_80494618->names[arg0]);
    }
    return (s32)lbl_80494618->objs[arg0];
}

f32 fn_801DF514(s32 arg0) {
    extern struct { u8 pad[0xA0]; f32 vals[1]; } *lbl_80494618;
    extern f32 lbl_803E1350[];

    return lbl_80494618 != 0 ? lbl_80494618->vals[arg0] : lbl_803E1350[0];
}

s32 fn_801DF724(void **arg0) {
    void *fn_802D1FC8(s32);
    extern char lbl_80417148[];
    extern char lbl_80417160[];
    INVNodeList *list = (INVNodeList *)arg0;
    INVNode *prev;
    s32 i;
    INVNode *node;
    INVNode *free;

    list->unkC = lbl_80417148;
    list->head = NULL;
    list->tail = NULL;
    list->free = NULL;
    prev = NULL;
    for (i = 0; i < 64; i++) {
        node = fn_802D1FC8(0x18);
        free = list->free;
        M2C_FIELD(node, char **, 0x14) = lbl_80417160;
        node->prev = NULL;
        node->next = NULL;
        node->unk8 = 0x4B;
        node->unkC = 0;
        node->unk10 = 0;
        if (free == NULL) {
            list->free = node;
        } else {
            prev->next = node;
            node->prev = prev;
        }
        prev = node;
    }
    return (s32)arg0;
}

void fn_801DF7CC(void *arg0, s32 arg1) {
    extern u8 lbl_80417148[];
    void fn_802D20E8(void *);
    char *p;
    char *next;

    M2C_FIELD(arg0, void **, 0xC) = lbl_80417148;
    p = M2C_FIELD(arg0, char **, 8);
    if (M2C_FIELD(arg0, char **, 0) != NULL) {
        M2C_FIELD(M2C_FIELD(arg0, char **, 4), char **, 4) = p;
        M2C_FIELD(M2C_FIELD(arg0, char **, 8), char **, 0) = M2C_FIELD(arg0, char **, 4);
        p = M2C_FIELD(arg0, char **, 0);
    }
    do {
        next = M2C_FIELD(p, char **, 4);
        if (p != NULL) {
            char *vt = M2C_FIELD(p, char **, 0x14);
            M2C_FIELD(vt, void (**)(void *, s32), 0xC)(p + M2C_FIELD(vt, s16 *, 8), 3);
        }
        p = next;
    } while (p != NULL);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

M2C_UNK fn_801DF938(void **arg0, void *arg1p) {
    INVNodeList *list = (INVNodeList *)arg0;
    INVNode *node = arg1p;

    if (node->prev != NULL) {
        node->prev->next = node->next;
    }
    if (node->next != NULL) {
        node->next->prev = node->prev;
    }
    if (list->head == node) {
        list->head = node->next;
    }
    if (list->tail == node) {
        list->tail = node->prev;
    }
    node->prev = NULL;
    node->next = NULL;
    if (list->free == NULL) {
        list->free = node;
    } else {
        node->next = list->free;
        list->free->prev = node;
        list->free = node;
    }
    list->free->unk8 = 0x4B;
    list->free->unkC = 0;
    list->free->unk10 = 0;
}

s32 fn_801DF9D4(void **arg0, s32 arg1, s32 arg2) {
    void fn_801DF86C(void **, s32, s32);
    void *it;

    if (arg0[2] != NULL) {
        for (it = arg0[0]; it != NULL; it = M2C_FIELD(it, void **, 4)) {
            if (M2C_FIELD(it, s32 *, 0xC) == arg2) {
                return 0;
            }
        }
        fn_801DF86C(arg0, arg1, arg2);
        return 1;
    }
    return 0;
}

s32 fn_801DFA30(void *arg0, void *arg1) {
    M2C_UNK fn_801DF938(void **, void *);
    void *next;
    void *var_r4;

    var_r4 = *(void **)arg0;
    if (var_r4 != NULL) {
        do {
            next = M2C_FIELD(var_r4, void **, 4);
            if (M2C_FIELD(var_r4, void **, 0xC) == arg1) {
                fn_801DF938(arg0, var_r4);
                return 1;
            }
            var_r4 = next;
        } while (var_r4 != NULL);
    }
    return 0;
}

s32 fn_801DFA84(void **arg0, s32 arg1) {
    M2C_UNK fn_801DF938(void **, void *);
    s32 fn_802486DC(s32, s32);
    s32 var_r28;
    void *temp_r30;
    void *var_r31;

    var_r31 = *arg0;
    var_r28 = 0;
    if (var_r31 != NULL) {
        do {
            temp_r30 = M2C_FIELD(var_r31, void **, 4);
            if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 0x10), arg1) == 0) {
                fn_801DF938(arg0, var_r31);
                var_r28 = 1;
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
    return var_r28;
}

s32 fn_801DFAF4(void **arg0, s32 arg1) {
    void *it;
    void *next;

    for (it = *arg0; it != NULL; it = next) {
        next = M2C_FIELD(it, void **, 4);
        if (M2C_FIELD(it, s32 *, 0xC) == arg1) {
            return 1;
        }
    }
    return 0;
}

void fn_801DFB28(void **arg0) {
    void *temp_r9;
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            if ((s32) M2C_FIELD(var_r31, s32 *, 8) > 0x32) {
                temp_r9 = M2C_FIELD(var_r31, void **, 0xC);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xC)(temp_r9);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
}

void fn_801DFB84(void **arg0) {
    void *temp_r9;
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            if ((s32) M2C_FIELD(var_r31, s32 *, 8) <= 0x32) {
                temp_r9 = M2C_FIELD(var_r31, void **, 0xC);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xC)(temp_r9);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
}

s32 fn_801DFBE0(void) {
    s32 fn_801DF724();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_8049461C;
    if ((s32) lbl_8049461C == 0) {
        fn_802D1FC8(0x10);
        lbl_8049461C = fn_801DF724();
    }
    return lbl_8049461C;
}

void fn_801DFC1C(void) {
    extern char *lbl_8049461C;
    if (lbl_8049461C != NULL) {
        char *vt = M2C_FIELD(lbl_8049461C, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_8049461C + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_8049461C = NULL;
    }
}

void fn_801DFD0C(void *arg0, s32 arg1) {
    extern u8 lbl_80417178[];
    void fn_802D20E8(void *);
    char *p;
    char *next;

    M2C_FIELD(arg0, void **, 0xC) = lbl_80417178;
    p = M2C_FIELD(arg0, char **, 8);
    if (M2C_FIELD(arg0, char **, 0) != NULL) {
        M2C_FIELD(M2C_FIELD(arg0, char **, 4), char **, 4) = p;
        M2C_FIELD(M2C_FIELD(arg0, char **, 8), char **, 0) = M2C_FIELD(arg0, char **, 4);
        p = M2C_FIELD(arg0, char **, 0);
    }
    do {
        next = M2C_FIELD(p, char **, 4);
        if (p != NULL) {
            char *vt = M2C_FIELD(p, char **, 0x14);
            M2C_FIELD(vt, void (**)(void *, s32), 0xC)(p + M2C_FIELD(vt, s16 *, 8), 3);
        }
        p = next;
    } while (p != NULL);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_801DFDAC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r10;
    M2C_UNK *temp_r9;

    temp_r10 = M2C_FIELD(arg0, s32 **, 8);
    temp_r9 = M2C_FIELD(temp_r10, s32 **, 4);
    M2C_FIELD(arg0, s32 **, 8) = temp_r9;
    if (temp_r9 != NULL) {
        *temp_r9 = 0;
    }
    M2C_FIELD(temp_r10, s32 *, 8) = arg1;
    M2C_FIELD(temp_r10, s32 *, 0xC) = arg2;
    M2C_FIELD(temp_r10, s32 *, 0x10) = arg3;
    temp_r0 = M2C_FIELD(arg0, s32 **, 0);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg0, s32 **, 0) = temp_r10;
        M2C_FIELD(temp_r10, M2C_UNK **, 0) = temp_r0;
        M2C_FIELD(arg0, M2C_UNK **, 4) = temp_r10;
        M2C_FIELD(temp_r10, M2C_UNK **, 4) = temp_r0;
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 4), M2C_UNK **, 4) = temp_r10;
    M2C_FIELD(temp_r10, M2C_UNK **, 0) = M2C_FIELD(arg0, M2C_UNK **, 4);
    M2C_FIELD(arg0, M2C_UNK **, 4) = temp_r10;
    M2C_FIELD(temp_r10, M2C_UNK **, 4) = NULL;
}

void *fn_801E0008(void **arg0, s32 arg1);
s32 fn_801DFF54(void **arg0, s32 arg1) {
    M2C_UNK fn_801DFE14(void **, void *);
    void *node;

    node = fn_801E0008(arg0, arg1);
    if (node != NULL) {
        fn_801DFE14(arg0, node);
        return 1;
    }
    return 0;
}

s32 fn_801DFF98(void **arg0, s32 arg1) {
    M2C_UNK fn_801DFE14(void **, void *);
    s32 fn_802486DC(s32, s32);
    s32 var_r28;
    void *temp_r30;
    void *var_r31;

    var_r31 = *arg0;
    var_r28 = 0;
    if (var_r31 != NULL) {
        do {
            temp_r30 = M2C_FIELD(var_r31, void **, 4);
            if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 0x10), arg1) == 0) {
                fn_801DFE14(arg0, var_r31);
                var_r28 = 1;
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
    return var_r28;
}

void *fn_801E0008(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = arg0[0];
    while (var_r31 != NULL && M2C_FIELD(var_r31, s32 *, 8) != arg1 && fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) != 0) {
        var_r31 = M2C_FIELD(var_r31, void **, 4);
    }
    return var_r31;
}

void fn_801E0064(void **arg0, s32 arg1, s32 arg2) {
    extern char lbl_80436A04[];
    void *var_r3;
    void *obj;

    var_r3 = fn_801E0008(arg0, arg2);
    if (var_r3 != NULL) {
        if (var_r3 != arg0[0]) {
            if (var_r3 == arg0[1]) {
                arg0[1] = M2C_FIELD(var_r3, void **, 0);
            } else {
                M2C_FIELD(M2C_FIELD(var_r3, void **, 4), void **, 0) = M2C_FIELD(var_r3, void **, 0);
            }
            M2C_FIELD(M2C_FIELD(var_r3, void **, 0), void **, 4) = M2C_FIELD(var_r3, void **, 4);
            M2C_FIELD(var_r3, void **, 0) = NULL;
            M2C_FIELD(var_r3, void **, 4) = arg0[0];
            M2C_FIELD(arg0[0], void **, 0) = var_r3;
            arg0[0] = var_r3;
        }
        obj = M2C_FIELD(var_r3, void **, 0xC);
        M2C_FIELD(obj, void (**)(void *, s32, char *), 0xC)(obj, arg1, lbl_80436A04);
    }
}

s32 fn_801E0118(void) {
    s32 fn_801DFC68();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494620;
    if ((s32) lbl_80494620 == 0) {
        fn_802D1FC8(0x10);
        lbl_80494620 = fn_801DFC68();
    }
    return lbl_80494620;
}

void fn_801E0154(void) {
    extern char *lbl_80494620;
    if (lbl_80494620 != NULL) {
        char *vt = M2C_FIELD(lbl_80494620, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_80494620 + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_80494620 = NULL;
    }
}

void *fn_801E01A0(u8 *self) {
    void fn_80116904(void *);
    void fn_800F160C(void *);
    fn_80116904(self + 4);
    fn_800F160C(self + 0x5C);
    *(s32 *)(self + 0x0) = 0;
    *(s32 *)(self + 0x60) = 0;
    *(s32 *)(self + 0x64) = 0;
    *(s32 *)(self + 0x68) = 0;
    *(s32 *)(self + 0x6C) = 0;
    *(s32 *)(self + 0x70) = 0;
    *(s32 *)(self + 0x74) = 0;
    return self;
}

void fn_801E0308(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x74) = (void *) M2C_FIELD(arg0, void **, 0x74);
    M2C_FIELD(arg0, void **, 0x74) = arg1;
}

void fn_801E0318(void *arg0, void *arg1) {
    void *fn_801E0428(void *);
    void *fn_801E0430(void *);
    void fn_801E0308(void *, void *);
    void *p = M2C_FIELD(arg0, void **, 0x70);
    if (p == NULL) {
        M2C_FIELD(arg0, void **, 0x70) = arg1;
    } else {
        while (fn_801E0430(p) != NULL) {
            p = fn_801E0428(p);
        }
        fn_801E0308(p, arg1);
    }
}

void *fn_801E0380(void *arg0, s32 arg1) {
    for (; arg1 != 0; arg1--) {
        arg0 = M2C_FIELD(arg0, void **, 0x74);
    }
    return arg0;
}

void fn_801E0398(void *arg0) {
    void fn_800BF4D8(void *);
    void fn_801E01FC(void *, s32);
    void fn_8031EA2C(void *);
    if (M2C_FIELD(arg0, void **, 0x60) != NULL) {
        fn_800BF4D8(M2C_FIELD(arg0, void **, 0x60));
        M2C_FIELD(arg0, void **, 0x60) = NULL;
    }
    if (M2C_FIELD(arg0, void **, 0x74) != NULL) {
        fn_801E01FC(M2C_FIELD(arg0, void **, 0x74), 3);
        M2C_FIELD(arg0, void **, 0x74) = NULL;
    }
    if (M2C_FIELD(arg0, void **, 0x70) != NULL) {
        fn_801E01FC(M2C_FIELD(arg0, void **, 0x70), 3);
        M2C_FIELD(arg0, void **, 0x70) = NULL;
    }
    if (M2C_FIELD(arg0, void **, 0x68) != NULL) {
        fn_8031EA2C(M2C_FIELD(arg0, void **, 0x68));
        M2C_FIELD(arg0, void **, 0x68) = NULL;
    }
}

s32 fn_801E0428(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

s32 fn_801E0430(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

s32 fn_801E0438(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

void fn_801E1338(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    struct T { u8 pad[0xE4]; void *arr[1]; };
    void *fn_802D1FC8(s32);
    s32 fn_801E0254(void *, s32, s32, s32, s32, s32, s32);
    void fn_801E0318(void *, void *);
    void *obj;

    obj = fn_801E01A0(fn_802D1FC8(0x78));
    fn_801E0254(obj, arg1, arg2, arg3, arg4, arg5, arg6);
    fn_801E0318(((struct T *)arg0)->arr[M2C_FIELD(arg0, u8 *, 0x114)], obj);
}

void fn_801E13BC(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x114) = (u8) (M2C_FIELD(arg0, u8 *, 0x114) - 1);
}

void fn_801E1868(void *arg0) {
    void fn_801E18A0(void *);

    if (M2C_FIELD(arg0, u8 *, 0x69) == 4) {
        M2C_FIELD(arg0, u8 *, 0x69) = 9;
        fn_801E18A0(arg0);
    }
}

void *fn_801E1A84(void *arg0) {
    extern struct { u8 pad[0xD8]; u8 *arr[1]; } lbl_8041F94C;
    u8 *obj = lbl_8041F94C.arr[M2C_FIELD(arg0, u8 *, 0x11C)];

    if (obj != NULL && (*(s32 (**)(u8 *))(*(u8 **)(obj + 4) + 0x29C))(obj + *(s16 *)(*(u8 **)(obj + 4) + 0x298)) == 0) {
        obj = NULL;
    }
    return obj;
}

void fn_801E1EE4(void *arg0) {
    struct Pair { s32 a; s32 b; };
    void *fn_8033390C(void *, s32);
    s32 fn_803114D0(void *, s32, char *, s32);
    void fn_80311800(void *, s32, struct Pair *, s32);
    extern void *lbl_80494FCC;
    extern char lbl_803E19B8[];
    extern struct Pair lbl_803E19CC[];
    void *t;
    s32 r;

    if (M2C_FIELD(arg0, s32 *, 0x30C) == 0) {
        t = fn_8033390C(lbl_80494FCC, M2C_FIELD(arg0, u8 *, 0x315));
        r = fn_803114D0(t, 0, lbl_803E19B8, 0x64);
        {
            struct Pair tmp = lbl_803E19CC[0];
            fn_80311800(t, M2C_FIELD(arg0, s32 *, 0x30C) = r, &tmp, 2);
        }
    }
}

void fn_801E2140(void *arg0) {
    M2C_UNK fn_801E2180();
    M2C_UNK fn_801E2674();
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x314);
    switch ((s32) temp_r0) {                        /* irregular */
    case 1:
        fn_801E2674();
        return;
    case 2:
        fn_801E2180();
        return;
    }
}

s32 fn_801E613C(void *arg0, s32 arg1, s32 arg2) {
    struct {
        u8 pad[0x564];
        s32 list[(0xEC4 - 0x564) / 4];
        u32 n;
    } *p = arg0;
    u32 i;
    s32 j;
    if (p->n == 0) {
        return -1;
    }
    if (p->n == 1) {
        return p->list[0];
    }
    for (i = 0; i < p->n; i++) {
        if (p->list[i] == arg1) {
            break;
        }
    }
    if (i == p->n) {
        return p->list[0];
    }
    j = 0;
    if (arg2 != 0) {
        if (i != p->n - 1) {
            j = i + 1;
        }
    } else {
        if (i == 0) {
            j = p->n - 1;
        } else {
            j = i - 1;
        }
    }
    return p->list[j];
}

void fn_801EA6A0(char *arg0, s32 arg1) {
    void fn_801CE250(void *, s32);
    void fn_801EA190(void *, s32);
    void fn_801CF8B0(void *, s32);
    void fn_801C6A20(void *, s32);
    extern s32 lbl_8049462C;
    extern s32 lbl_8041FC60[];
    char *obj;
    char *vt;
    if (*(s32 *)(arg0 + 0xF38) == 0) {
        return;
    }
    obj = *(char **)(arg0 + 0x500);
    lbl_8049462C = 0;
    if (obj == NULL) {
        return;
    }
    vt = *(char **)(obj + 4);
    (*(void (**)(void *))(vt + 0x6C))(obj + *(s16 *)(vt + 0x68));
    fn_801CE250(arg0 + 0x37C, arg1);
    if (lbl_8041FC60[0] != 0) {
        fn_801EA190(arg0, arg1);
        fn_801CF8B0(arg0 + 0x37C, arg1);
    }
    fn_801C6A20(arg0 + 0x504, arg1);
}

void fn_801EA748(void) {
    extern void *lbl_80494630;
    if ((void *) lbl_80494630 != NULL) {
        M2C_FIELD(lbl_80494630, s32 *, 0xB0) = 1;
    }
}

f32 fn_801EA760(s32 arg0) {
    f32 fn_8004387C(s32);
    extern f32 lbl_803E29F0[];
    extern f32 lbl_803E29F4[];
    f32 t = fn_8004387C(arg0);
    if (t == lbl_803E29F0[0]) {
        return lbl_803E29F4[0];
    }
    return t;
}

void fn_801EA898(s32 arg0) {
    void (*cb)(f32) = *(void (**)(f32))(arg0 + 0xA8);
    if (cb != NULL) {
        *(s32 *)(arg0 + 0x88) -= 1;
        cb(*(f32 *)(arg0 + 0xA4));
    }
}

void fn_801EFE08(char *self, char *name, void *arg2) {
    s32 fn_801F0834(char *);
    s32 i;
    s32 id = fn_801F0834(name);
    for (i = 0; i < INVPtrVec_size((INVPtrVec *)(self + 0xD4)); i++) {
        char *obj = INVPtrVec_at((INVPtrVec *)(self + 0xD4), i);
        if (id == M2C_FIELD(obj, s32 *, 0x4)) {
            char *vt = M2C_FIELD(obj, char **, 0x8);
            M2C_FIELD(vt, void (**)(void *, void *), 0x14)(obj + M2C_FIELD(vt, s16 *, 0x10), arg2);
            return;
        }
    }
}

char *fn_801EFEB0(char *self, char *name) {
    s32 fn_801F0834(char *);
    char *fn_800BF3FC(s32);
    u32 i;
    s32 id = fn_801F0834(name);
    char *buf = fn_800BF3FC(0x20);
    buf[0] = 0;
    for (i = 0; i < INVPtrVec_size((INVPtrVec *)(self + 0xC4)); i++) {
        char *obj = INVPtrVec_at((INVPtrVec *)(self + 0xC4), i);
        if (id == M2C_FIELD(obj, s32 *, 0x4)) {
            char *vt = M2C_FIELD(obj, char **, 0x8);
            M2C_FIELD(vt, void (**)(void *, char *), 0x14)(obj + M2C_FIELD(vt, s16 *, 0x10), buf);
            return buf;
        }
    }
    return buf;
}

void fn_801EFF70(void *self) {
    extern f32 lbl_803E2FD0[];
    void fn_80042C88(f32);
    void fn_80042D38(void);
    f32 f = lbl_803E2FD0[0];
    M2C_FIELD(self, s32 *, 0xC0) = 1;
    fn_80042C88(f);
    fn_80042D38();
}

void *fn_801F0148(void **self, char *name, void *arg2) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804173B0[];
    extern char lbl_803E2FF0[];
    s32 fn_801F0834(char *);
    s32 fn_80245BB4();
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804173B0;
    fn_80245BB4(&self[3], lbl_803E2FF0, arg2);
    return self;
}

void *fn_801F01B8(void **self, char *name, s32 mask) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804173F0[];
    s32 fn_801F0834(char *);
    s32 fn_80248808(char *);
    char *end;
    self[0] = name;
    self[2] = lbl_80417510;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804173F0;
    end = name + fn_80248808(name);
    self[3] = (void *)(((1 << ((end[-2] - '0') * 10 + (end[-1] - '0'))) & mask) != 0);
    return self;
}

void fn_801F0258(void *arg0, char *arg1) {
    struct Str7 { char s[7]; };
    extern char lbl_803E2FF4[];
    *(struct Str7 *)arg1 = *(struct Str7 *)lbl_803E2FF4;
}

void fn_801F027C(void *arg0, s32 arg1) {
    M2C_UNK fn_80248784(s32, s32);
    extern char lbl_803E2FFC[];
    extern char lbl_803E3000[];
    char *s;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        s = lbl_803E2FFC;
    } else {
        s = lbl_803E3000;
    }
    fn_80248784(arg1, (s32)s);
}

void fn_801F02C0(void *arg0, s32 arg1) {
    M2C_UNK fn_80248784(s32, s32);
    fn_80248784(arg1, M2C_FIELD(arg0, s32 *, 0xC));
}

void fn_801F02EC(s32 arg0, s32 arg1) {
    M2C_UNK fn_80248784(s32, s32);
    fn_80248784(arg1, arg0 + 0xC);
}

void fn_801F0318(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E3004[];
    fn_80245BB4(arg1, lbl_803E3004, M2C_FIELD(arg0, f64 (**)(), 0xC)());
}

void fn_801F0490(void) {

}

void fn_801F0494(void) {

}

void fn_801F0498(void) {

}

void fn_801F060C(void *arg0, s32 arg1) {
    void fn_80245C94(s32, char *, ...);
    void fn_800439BC(f32);
    void fn_80043A58(f32);
    void fn_80043950(f32);
    void fn_8004384C(void);
    extern u8 *lbl_80494630;
    extern char lbl_803E2FF0[];
    extern f32 lbl_803E300C[];
    fn_80245C94(arg1, lbl_803E2FF0, lbl_80494630 + 0x98);
    if (*(s32 *)(lbl_80494630 + 0x98) == 1) {
        fn_800439BC(lbl_803E300C[0]);
        fn_80043A58(lbl_803E300C[0]);
        fn_80043950(lbl_803E300C[0]);
        fn_8004384C();
    }
}

void fn_801F067C(void *arg0, s32 arg1) {
    void fn_80245C94(s32, char *, ...);
    void fn_80043390(s32);
    extern u8 *lbl_80494630;
    extern char lbl_803E2FF0[];
    fn_80245C94(arg1, lbl_803E2FF0, lbl_80494630 + 0x94);
    fn_80043390(*(s32 *)(lbl_80494630 + 0x94) - 1);
}

void fn_801F06C4(void *arg0, s32 arg1) {
    void fn_80245C94(s32, char *, ...);
    void fn_80043374(s32);
    extern u8 *lbl_80494630;
    extern char lbl_803E2FF0[];
    fn_80245C94(arg1, lbl_803E2FF0, lbl_80494630 + 0x90);
    fn_80043374(*(s32 *)(lbl_80494630 + 0x90) - 1);
}

void fn_801F070C(void *arg0, s32 arg1) {
    void fn_80245C94(s32, char *, ...);
    extern u8 *lbl_80494630;
    extern char lbl_803E2FF0[];
    fn_80245C94(arg1, lbl_803E2FF0, lbl_80494630 + 0x8C);
}

void fn_801F0744(void *arg0, s32 arg1) {
    f64 fn_80246DDC(s32);
    M2C_FIELD(arg0, M2C_UNK (**)(f32), 0xC)((f32) fn_80246DDC(arg1));
}

void fn_801F0784(void) {
    void fn_801EA898(s32);
    extern s32 lbl_80494630;
    fn_801EA898(lbl_80494630);
}

void fn_801F07A8(void *arg0, char *arg1) {
    u8 *fn_8004380C(s32);
    void *fn_802482F8(void *, s32, s32);
    extern u8 *lbl_80494630;
    u8 *obj;
    u8 *vt;
    u8 sp8[8];

    if (*arg1 == '0' && M2C_FIELD(lbl_80494630, s32 *, 0xB4) != 0) {
        obj = fn_8004380C(M2C_FIELD(lbl_80494630, s32 *, 0x8C));
        vt = *(u8 **)(obj + 0x24);
        fn_802482F8((*(void *(**)(void *, s32, void *, void *))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), 0, sp8, sp8),
                    M2C_FIELD(lbl_80494630, s32 *, 0xB4),
                    *(u16 *)(obj + 0x10) * *(u16 *)(obj + 0x12) * 2);
    }
}

s32 fn_801F0834(char *s) {
    s32 sum = 0;
    s32 i;
    for (i = 0; s[i] != 0; i++) {
        sum += s[i];
    }
    return sum;
}

void fn_801F086C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
}

void *fn_801F0874(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804174F0[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804174F0;
    return self;
}

void *fn_801F08C8(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804174D0[];
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804174D0;
    return self;
}

void *fn_801F091C(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804174B0[];
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804174B0;
    return self;
}

void *fn_801F0970(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417490[];
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417490;
    return self;
}

void *fn_801F09C4(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417470[];
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417470;
    return self;
}

void *fn_801F0A18(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417450[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417450;
    return self;
}

void *fn_801F0A6C(void **self, char *name, void *arg2) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417430[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[3] = arg2;
    self[2] = lbl_80417430;
    return self;
}

void *fn_801F0AC8(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417410[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417410;
    return self;
}

void *fn_801F0B1C(void **self, char *name, void *arg2) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804173D0[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[3] = arg2;
    self[2] = lbl_804173D0;
    return self;
}

void *fn_801F0B78(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417390[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417390;
    return self;
}

void *fn_801F0BCC(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417370[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417370;
    return self;
}

void *fn_801F0C20(void **self, char *name, void *arg2) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417350[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[3] = arg2;
    self[2] = lbl_80417350;
    return self;
}

void *fn_801F0C7C(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417330[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417330;
    return self;
}

void *fn_801F0CD0(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417310[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417310;
    return self;
}

void *fn_801F0D24(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804172F0[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804172F0;
    return self;
}

void *fn_801F0D78(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804172D0[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804172D0;
    return self;
}

void *fn_801F0DCC(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804172B0[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804172B0;
    return self;
}

void fn_801F388C(void) {

}

void fn_801F3890(void) {

}

void fn_801F501C(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xD4);
    if (temp_r9 != NULL) {
        M2C_FIELD(arg0, void **, 0xD4) = NULL;
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xC)(temp_r9);
    }
}

void fn_801F5060(void *arg0) {
    void *temp_r0;
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg0, void **, 0xD8);
    if (temp_r11 != NULL) {
        temp_r0 = M2C_FIELD(arg0, void **, 0xA8);
        if (temp_r0 != NULL) {
            M2C_FIELD(arg0, void **, 0xD8) = NULL;
            M2C_FIELD(temp_r11, M2C_UNK (**)(void *), 0xC)(temp_r11);
            return;
        }
        M2C_FIELD(arg0, void **, 0xD8) = temp_r0;
    }
}

void fn_801F5304(void *arg0, s32 arg1) {
    extern void fn_800F1A60(void *, s32);
    extern void fn_8031EA2C(void *);
    extern void fn_802D20E8(void *);
    extern char lbl_80417628[];
    void *self = arg0;
    M2C_FIELD(self, char **, 0x7C) = lbl_80417628;
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        fn_8031EA2C(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    }
    fn_800F1A60((char *)arg0 + 0x38, 2);
    fn_800F1A60((char *)arg0 + 0x34, 2);
    fn_800F1A60((char *)arg0 + 0x30, 2);
    fn_800F1A60((char *)arg0 + 0x2C, 2);
    fn_800F1A60((char *)arg0 + 0x28, 2);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

M2C_UNK fn_801F53A0(void *arg0) {
    extern void fn_801F49B0(void *, void *);
    extern void *lbl_8041FAC8[];
    fn_801F49B0(lbl_8041FAC8[0], arg0);
}

void fn_801F53CC(void *arg0, s32 arg1) {
    M2C_UNK fn_801F50B8(void *, s32);
    extern void *lbl_8041FAC8[];
    fn_801F50B8(lbl_8041FAC8[0], arg1);
}

M2C_UNK fn_801F53F4(void *arg0) {
    extern void fn_801F4BEC(void *, void *);
    extern void *lbl_8041FAC8[];
    fn_801F4BEC(lbl_8041FAC8[0], arg0);
}

M2C_UNK fn_801F5420(s32 arg0) {
    extern void fn_800F2868(void *, s32, s32);
    extern void fn_801F4D1C(void *);
    extern void *lbl_8041FAC8[];
    char *self = (char *)arg0;
    fn_800F2868(self + 0x28, 0, -1);
    fn_800F2868(self + 0x30, 0, -1);
    fn_800F2868(self + 0x34, 0, -1);
    fn_800F2868(self + 0x38, 0, -1);
    fn_801F4D1C(lbl_8041FAC8[0]);
}

void fn_801F55A4(void) {

}

void fn_801F55A8(void) {

}

void fn_801F55AC(void) {

}

s32 fn_801F55B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xF8);
}

s32 fn_801F55B8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xE4);
}

void fn_801F55C0(void) {
    fn_800C3B48();
}

u8 fn_801F55E0(s32 arg0) {
    extern u8 lbl_80496744[8];
    u8 i = arg0 + 1;
    u8 r = 0;
    if (i <= 7) {
        r = lbl_80496744[i];
    }
    return r;
}

void fn_801F730C(s32 arg0, u8 *arg1) {
    M2C_UNK fn_801F7370(s32, u8, u8 *);
    s32 fn_80245988(s8);
    u8 *var_r31;
    u8 temp_r9;
    u8 var_r30;

    var_r31 = arg1;
    var_r30 = 0;
    if (fn_80245988((s8) *var_r31) != 0) {
        temp_r9 = *var_r31;
        var_r31 += 1;
        var_r30 = temp_r9 - 0x30;
    }
    fn_801F7370(arg0, var_r30, var_r31);
}

void fn_801F788C(s32 arg0, u8 *arg1) {
    M2C_UNK fn_801F78F0(s32, u8, u8 *);
    s32 fn_80245988(s8);
    u8 *var_r31;
    u8 temp_r9;
    u8 var_r30;

    var_r31 = arg1;
    var_r30 = 0;
    if (fn_80245988((s8) *var_r31) != 0) {
        temp_r9 = *var_r31;
        var_r31 += 1;
        var_r30 = temp_r9 - 0x30;
    }
    fn_801F78F0(arg0, var_r30, var_r31);
}

void fn_801F8274(void *arg0) {
    void fn_8000AA68(s32, void *, s32, s32, s32, ...);
    extern s32 lbl_804956BC;
    extern char lbl_803E48A0[];
    if (!(fn_801F55E0(M2C_FIELD(arg0, u8 *, 0xEF)) & 1) && M2C_FIELD(arg0, s32 *, 0xE8) != 0 &&
        M2C_FIELD(arg0, u8 *, 0xEC) == 2) {
        fn_8000AA68(lbl_804956BC, lbl_803E48A0, 0, 0, 0);
    }
}

void fn_801F82E4(s32 arg0, s32 arg1) {
    void fn_801F8FD4(s32, s32, s32);
    struct { u8 pad[0xED]; u8 state[1]; } *p = (void *)arg0;
    p->state[arg1] = 2;
    fn_801F8FD4(arg0, arg1, 1);
}

void fn_801F8314(s32 arg0, s32 arg1) {
    void fn_801F83C8(s32, s32);
    struct { u8 pad[0xED]; u8 state[1]; } *p = (void *)arg0;
    p->state[arg1] = 0;
    fn_801F83C8(arg0, arg1);
}

void fn_801F8340(s32 arg0, s32 arg1) {
    void fn_801F8FD4(s32, s32, s32);
    void fn_801E1868(void *);
    void fn_801E2BB4(void *);
    struct { u8 pad[0xED]; u8 state[1]; } *p = (void *)arg0;
    fn_801E1868((u8 *)arg0 + (arg1 * 0x124 + 0x734));
    if (fn_801F8708(arg0, arg1) == 0) {
        fn_801E2BB4((u8 *)arg0 + (arg1 * 0x318 + 0x104));
        fn_801F8FD4(arg0, arg1, 0);
    }
    p->state[arg1] = 1;
}

void fn_801F83BC(void) {

}

void fn_801F83C0(void) {

}

void fn_801F83C4(void) {

}

void fn_801F94C4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    fn_801F9614(arg0, arg1);
    fn_801E1254((s32)((u8 *)arg0 + (arg1 * 0x124 + 0x734)), arg2, arg3, arg4, arg5);
}

void fn_801F9524(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    fn_801F9614(arg0, arg1);
    fn_801E1338((s32)((u8 *)arg0 + (arg1 * 0x124 + 0x734)), arg2, arg3, arg4, arg5, arg6, arg8);
}

void fn_801F9594(s32 arg0, s32 arg1) {
    fn_801F9614(arg0, arg1);
    fn_801E13BC((u8 *)arg0 + (arg1 * 0x124 + 0x734));
}

void fn_801F95D4(s32 arg0, s32 arg1) {
    void fn_801E14D4(void *);
    fn_801F9614(arg0, arg1);
    fn_801E14D4((u8 *)arg0 + (arg1 * 0x124 + 0x734));
}

s32 fn_801F8708(s32, s32);
void fn_801E1338(s32, s32, s32, s32, s32, s32, s32);
void fn_801E1254(s32, s32, s32, s32, s32);
s32 fn_801F9614(s32 arg0, s32 arg1);
s32 fn_801F9614(s32 arg0, s32 arg1) {
    u8 *flags = (u8 *)arg0 + 0xEF;
    s32 ret = 0;
    if (!(fn_801F55E0(flags[arg1]) & 2)) {
        u8 *p = (u8 *)(arg1 * 0x124 + arg0 + 0x734);
        s32 ok = 0;
        if (*(s32 *)(p + 8) != 0) {
            ok = *(u8 *)(p + 0x69) == 1;
        }
        if (ok && fn_801F8708(arg0, arg1) != 0) {
            ret = 1;
        }
    }
    return ret;
}

void fn_801F96A8(s32 arg0, s32 arg1) {
    void fn_801E1868(void *);
    fn_801E1868((u8 *)arg0 + (arg1 * 0x124 + 0x734));
}

void fn_801F97E4(s32 arg0, s32 arg1, s32 arg2) {
    void fn_801E2A24(void *, s32);
    if (INVSlot_IsUsed(arg0, arg1)) {
        fn_801E2A24((u8 *)arg0 + (arg1 * 0x318 + 0x104), arg2);
    }
}

void fn_801E14D4(void *);
void fn_801E1868(void *);
void fn_801E2A24(void *, s32);
void fn_801E2BB4(void *);
void fn_801F983C(s32 arg0, s32 arg1) {
    void fn_801E2BB4(void *);
    s32 ok = 1;
    if (*(s32 *)((u8 *)arg0 + (arg1 * 0x318 + 0x104) + 4) == 0) {
        ok = 0;
    }
    if (ok) {
        fn_801E2BB4((u8 *)arg0 + (arg1 * 0x318 + 0x104));
    }
}

void fn_801F9D38(s32 arg0) {
    M2C_UNK fn_801F9AE0(s32);
    fn_801F9C80();
    fn_801F9AE0(arg0);
}

u8 fn_801F9D6C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xDC);
}

s32 fn_801FA3B8(void *arg0, s32 arg1, s32 arg2, s16 *arg3) {
    M2C_UNK fn_8016A87C(s32);
    *arg3 = arg1;
    fn_8016A87C(arg1);
    return 1;
}

s32 fn_801FA3E4(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8016A87C(s32);
    fn_8016A87C(arg2);
    return 1;
}

s32 fn_801FA40C(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_801F81FC(void *);
    M2C_UNK fn_801FA2D0(void *, s32, s32, s32);
    switch (arg2) {
    case 0:
        fn_801F81FC(arg0);
        break;
    case 1:
        fn_801F8274(arg0);
        break;
    case 2:
        fn_801FA2D0(arg0, 0, 0, arg1);
        break;
    }
    return 1;
}

s32 fn_801FA470(void *arg0, s32 arg1, s32 arg2) {
    struct Range {
        u16 lo;
        u16 hi;
    };
    struct Target {
        u8 pad0[0x8A];
        struct Range range[6];
        u8 padA2[2];
        s32 unkA4;
        u8 pct[2][6];
        s16 vals[2][6];
        u8 padCC[0x35];
        u8 row;
    } *self = arg0;
    s32 pct;
    s32 v;

    if (arg1 == 5 && self->unkA4 != 0) {
        return 0;
    }
    if ((u16)arg1 > 5) {
        return 0;
    }
    self->vals[self->row][arg1] = arg2;
    pct = ((arg2 - (s16)self->range[arg1].lo) * 100) / (s16)(self->range[arg1].hi - self->range[arg1].lo);
    if (pct >= 0) {
        v = pct;
        if (v > 100) {
            v = 100;
        }
    } else {
        v = 0;
    }
    self->pct[self->row][arg1] = v;
    return 1;
}

s32 fn_801FA518(void *arg0, u32 arg1, s16 arg2, s16 arg3) {
    struct {
        u8 pad[0x8A];
        struct {
            s16 min;
            s16 max;
        } range[5];
    } *p = arg0;
    if (arg1 > 4) {
        return 0;
    }
    if (arg2 >= arg3) {
        return 0;
    }
    p->range[arg1].min = arg2;
    p->range[arg1].max = arg3;
    return 1;
}

s32 fn_801FA8FC(void *arg0, s32 arg1, u16 *arg2) {
    s32 fn_801FA6BC(void *);
    struct {
        u8 pad[0xA4];
        s32 unkA4;
        u8 table[14][6];
        u8 pad100;
        u8 index;
    } *p = arg0;
    if (arg1 == 5 && p->unkA4 != 0) {
        *arg2 = fn_801FA6BC(p);
    } else {
        if ((u16)arg1 > 5) {
            return 0;
        }
        *arg2 = p->table[p->index][arg1];
    }
    return 1;
}

void fn_801FA974(void *arg0, s32 arg1, s32 arg2) {
    s32 fn_80245BB4(char *, const char *, ...);
    void fn_8000AA68(s32, void *, s32, s32, s32, ...);
    extern char lbl_803E4788[];
    extern char lbl_803E4A44[];
    extern s32 lbl_804956BC;
    char buf1[16];
    char buf2[16];
    fn_80245BB4(buf1, lbl_803E4788, arg1);
    fn_80245BB4(buf2, lbl_803E4788, (s16)arg2);
    fn_8000AA68(lbl_804956BC, lbl_803E4A44, 0, 0, 2, buf1, buf2);
}

void fn_801FAAF8(void *arg0, s32 arg1) {
    s32 fn_80245BB4(char *, const char *, ...);
    void fn_8000AA68(s32, void *, s32, s32, s32, ...);
    extern char lbl_803E4788[];
    extern char lbl_803E4A9C[];
    extern s32 lbl_804956BC;
    char buf[16];
    *((u8 *)arg0 + 0x100) = 2;
    fn_80245BB4(buf, lbl_803E4788, arg1);
    fn_8000AA68(lbl_804956BC, lbl_803E4A9C, 0, 0, 1, buf);
}

void fn_801FAC58(void *arg0, s8 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s8 *, 0x100) = 1;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x100) = arg1;
}

s32 fn_801FAC74(void *arg0) {
    u16 v = M2C_FIELD(arg0, u16 *, 0xCE);
    if (v != 0) {
        return v + 2;
    }
    return 5;
}

void *fn_801FAC90(void *arg0, s32 arg1) {
    return (u8 *)arg0 + (arg1 * 0x318 + 0x104);
}

s32 fn_801FACA0(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0xCC) != 0) {
        return 1;
    }
    return 0;
}

s32 fn_801FACB8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xEC) == 0;
}

s32 fn_801FACC8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xEC) == 1;
}

s32 fn_801FACDC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xEC) == 2;
}

s32 fn_801FACF0(void *arg0, s32 arg1) {
    u8 *p = (u8 *)arg0 + 0xED;
    return p[arg1] == 2;
}

u8 fn_801FAD08(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x100);
}

s32 fn_801FAD10(s32 arg0) {
    extern s32 lbl_803E6C48[];
    s32 i;

    for (i = 0; i < 6; i++) {
        if (lbl_803E6C48[i] == arg0) {
            return 1;
        }
    }
    return 0;
}

s32 fn_801FAD44(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        return 1;
    case 1:
        return 2;
    case 2:
        return 3;
    default:
        return 0;
    }
}

void *fn_801FB790(void *arg0) {
    typedef struct { s16 delta; s16 idx; void *(*fn)(void *, void *, s32); } VtEnt;
    void *fn_8016CC44(void *);
    u8 *obj;
    VtEnt *e;
    void *p;
    s32 i;

    obj = M2C_FIELD(arg0, u8 **, 0x50);
    i = 0;
    p = fn_8016CC44(arg0);
    if (p != NULL) {
        do {
            if (M2C_FIELD(M2C_FIELD(p, void **, 0x38), s32 *, 0xC0) != 0) {
                break;
            }
            e = (VtEnt *)(*(u8 **)obj + 0xB0);
            p = e->fn(obj + e->delta, p, i++);
        } while (p != NULL);
    }
    return NULL;
}

s32 fn_801FB8CC(INVPair *arg0) {
    if (arg0 == NULL) {
        return 0xD59C7BB5;
    }
    return ((s32 *)arg0->a)[2];
}

s32 fn_801FB8EC(INVPair *arg0) {
    if (arg0 == NULL) {
        return 0xD59C7BB5;
    }
    return ((s32 *)arg0->a)[0];
}

s32 fn_801FB90C(INVPair *arg0) {
    if (arg0 == NULL) {
        return 0xD59C7BB5;
    }
    return ((s32 *)arg0->a)[3];
}

s32 fn_801FBA80(s32 arg0, u16 *arg1) {
    void *fn_80248488();
    s32 fn_80245BB4(char *, char *, ...);
    void fn_800C3C04(char *, s32, u16 *);
    s32 fn_800F8120(s32);
    extern char lbl_803E4E18[];
    char buf[32];
    char *p;
    s32 len;

    if (arg1 == NULL) {
        return 0;
    }
    p = buf;
    fn_80248488(p, 0, 0x20);
    len = fn_80245BB4(p, lbl_803E4E18, arg0);
    fn_800C3C04(p, len, arg1);
    arg1[len] = 0;
    fn_800F8120((s32)arg1);
    return 1;
}

s32 fn_801FBB14(u8 *arg0) {
    extern s32 fn_8016CC44(void *);
    extern s32 fn_8016CCE0(void *);
    u8 *vt;
    void *p;
    void *r;

    if (arg0 == NULL) {
        return 0;
    }
    vt = *(u8 **)(arg0 + 4);
    p = (*(void *(**)(void *))(vt + 0x32C))(arg0 + *(s16 *)(vt + 0x328));
    if (p == NULL) {
        return 0;
    }
    r = (void *)fn_8016CC44(p);
    if (r == NULL) {
        r = p;
    }
    return fn_8016CCE0(r);
}

s32 fn_801FBB84(u8 *arg0, s32 *arg1) {
    u8 *t;
    s32 *list;
    s32 *q;
    s32 count;

    if (arg0 == NULL) {
        return 0;
    }
    t = *(u8 **)(arg0 + 0x38);
    if (t == NULL) {
        return 0;
    }
    t = *(u8 **)(t + 0xC0);
    if (t == NULL) {
        return 0;
    }
    list = *(s32 **)t;
    q = list;
    count = 0;
    if (q != NULL) {
        count = q[-1];
    }
    if (count == 0) {
        return 0;
    }
    arg1[1] = list[0];
    arg1[0] = *(s32 *)(t + 0x20);
    arg1[2] = list[2];
    arg1[3] = 0;
    return arg1[1] != 0;
}

s32 fn_801FBC04(s32 arg0) {
    if (arg0 >= 0) {
        if (arg0 <= 8) {
            return 1;
        }
        if (arg0 <= 13) {
            return 2;
        }
    }
    return 0;
}

void fn_801FE23C(s32 arg0) {
    M2C_UNK fn_801E0F64(s32);
    fn_801E0F64(arg0 + 0x79C);
}

s32 fn_801FE260(void *arg0) {
    extern void fn_801FF814(void *);
    extern void fn_801FFA10(void *);
    extern void fn_801FF2C0(void *, s32);
    if (M2C_FIELD(arg0, s32 *, 0x8C) != 0x10) {
        return 0;
    }
    fn_801FF814(arg0);
    fn_801FFA10(arg0);
    fn_801FF2C0(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x954) = 1;
    return 1;
}

void fn_801FE2C0(void) {

}

s32 fn_801FE7C4(void *arg0, s32 arg1) {
    return arg1 / 13;
}

s32 fn_801FEE14(void *arg0, s32 arg1) {
    extern s32 lbl_80494640[2];
    extern s32 lbl_80494648[2];
    extern void fn_801FEEB8(void *, s32);
    if (M2C_FIELD(arg0, s32 *, 0x90) == 0) {
        return 0;
    }
    if (arg1 < 0) {
        arg1 = M2C_FIELD(arg0, s32 *, 0xBC) - 1;
    } else if ((u32)arg1 >= M2C_FIELD(arg0, u32 *, 0xBC)) {
        arg1 = 0;
    }
    lbl_80494640[M2C_FIELD(arg0, s32 *, 0x84)] = arg1;
    lbl_80494648[M2C_FIELD(arg0, s32 *, 0x84)] = 0;
    fn_801FEEB8(arg0, fn_801FAD44(lbl_80494640[M2C_FIELD(arg0, s32 *, 0x84)]));
    return 1;
}

void fn_801FF1C4(void *arg0) {
    extern s32 lbl_803E622C[][12];
    extern char *lbl_803E65EC[][12];
    extern char lbl_803E56C0[];
    void fn_801DB32C(char *, char *);
    u32 i;
    s32 s;
    for (i = 0; i < 12; i++) {
        s = lbl_803E622C[M2C_FIELD(arg0, s32 *, 0x84)][i];
        if (fn_801D7380(M2C_FIELD(arg0, void ***, 0x1C), s) != 0 && M2C_FIELD(arg0, s32 *, 0x0) != 0 &&
            M2C_FIELD(arg0, void ***, 0x1C) != NULL) {
            fn_801D72DC(M2C_FIELD(arg0, void ***, 0x1C), s);
        }
        fn_801DB32C(lbl_803E65EC[M2C_FIELD(arg0, s32 *, 0x84)][i], lbl_803E56C0);
    }
}

s32 fn_801FF27C(void *arg0, u32 arg1, s32 arg2) {
    struct S {
        u8 pad[0x108];
        s32 arr[12];
    };
    if (arg1 > 11) {
        return 0;
    }
    ((struct S *)arg0)->arr[arg1] = arg2;
    return 1;
}

s32 fn_801FF2A0(void *arg0, u32 arg1) {
    struct S {
        u8 pad[0x108];
        s32 arr[12];
    };
    if (arg1 > 11) {
        return 0;
    }
    return ((struct S *)arg0)->arr[arg1];
}

void fn_801FF39C(void *arg0) {
    extern s32 lbl_80494FCC;
    extern s32 fn_803338F0(s32, s32);
    extern s32 fn_803338D0(s32, s32);
    extern s32 fn_80311ABC(s32, s32);
    s32 mgr = lbl_80494FCC;
    s32 res = fn_803338D0(mgr, fn_803338F0(mgr, M2C_FIELD(arg0, s32 *, 0x84)));
    if (res != 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = fn_80311ABC(res, M2C_FIELD(arg0, s32 *, 0xD0));
    }
}

void fn_801FF6E0(void *arg0) {
    M2C_UNK fn_801B8734(s32);
    extern void *lbl_8041FA30[];
    s32 v;
    do {
        v = M2C_FIELD(lbl_8041FA30[0], s32 *, 0x14);
    } while (0);
    fn_801B8734(v);
}

void fn_801FFF98(void *arg0, char *arg1) {
    s32 fn_80245BB4(char *, char *, ...);
    extern char lbl_803E56EC[];
    fn_80245BB4(arg1, lbl_803E56EC, *((u8 *)arg0 + 0x189) + 1, *((u8 *)arg0 + 0x18A) + 1);
}

void fn_801FFFDC(void *arg0, u8 *arg1, s32 arg2, void *arg3) {
    typedef struct { char c[12]; } Str12;
    extern Str12 lbl_803E56FC;
    s32 fn_80248808(void *);
    void *fn_802485B0(void *, void *);
    *(Str12 *)arg1 = lbl_803E56FC;
    fn_80248808(arg1);
    fn_80248808(arg3);
    fn_802485B0(arg1, arg3);
}

void fn_80200044(void *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    extern char lbl_803E5708[];
    void *fn_80248784(void *, void *);
    s32 fn_80248808(void *);
    char *prefix;
    if (arg3 == 0) {
        *arg1 = arg3;
        return;
    }
    prefix = lbl_803E5708;
    fn_80248784(arg1, prefix);
    ((void (*)(s32, s32, u8 *))fn_800C3B48)(arg3, -1, arg1 + fn_80248808(prefix));
}

void fn_802000A8(void *arg0, u8 *arg1, s32 arg2, u16 arg3) {
    s32 fn_80245BB4(void *, char *, ...);
    extern char lbl_803E5714[];
    fn_80245BB4(arg1, lbl_803E5714, arg3);
}

void fn_802000DC(void *self, void *arg1) {
    extern void *fn_8016CC44(void *);
    u8 *name = (u8 *)self + 0x38B;
    void *obj;
    void *info;
    s32 *buf[2];
    s32 v;

    obj = fn_8016CC44(arg1);
    info = M2C_FIELD(obj, void **, 0x38);
    fn_8016CCF4(buf, obj);
    v = 0;
    if (buf[0] != NULL) {
        v = *buf[0];
    }
    fn_80200044(self, name, 0x100, v);
    fn_801FFFDC(self, (u8 *)self + 0x48B, 0x100, M2C_FIELD(obj, void **, 0x14));
    fn_802000A8(self, (u8 *)self + 0x58B, 0x100, M2C_FIELD(info, u16 *, 0x24));
}

void fn_80200044(void *, u8 *, s32, s32);
void fn_801FFFDC(void *, u8 *, s32, void *);
void fn_802000A8(void *, u8 *, s32, u16);
void fn_80200274(void *self, void **arg1) {
    extern u8 lbl_803E4D48[];
    u8 *name = (u8 *)self + 0x38B;
    s32 *p = M2C_FIELD(*arg1, s32 **, 4);
    s32 v = 0;

    if (p != NULL) {
        v = *p;
    }
    fn_80200044(self, name, 0x100, v);
    fn_801FFFDC(self, (u8 *)self + 0x48B, 0x100, lbl_803E4D48);
    fn_802000A8(self, (u8 *)self + 0x58B, 0x100, M2C_FIELD(*arg1, u16 *, 2));
}

void fn_802002F8(void *self, void **arg1) {
    extern u8 lbl_803E4D48[];
    u8 *name = (u8 *)self + 0x38B;
    s32 *p = M2C_FIELD(*arg1, s32 **, 4);
    s32 v = 0;

    if (p != NULL) {
        v = *p;
    }
    fn_80200044(self, name, 0x100, v);
    fn_801FFFDC(self, (u8 *)self + 0x48B, 0x100, lbl_803E4D48);
    fn_802000A8(self, (u8 *)self + 0x58B, 0x100, M2C_FIELD(*arg1, u16 *, 2));
}

void fn_8020037C(s32 arg0) {
    M2C_UNK fn_80248488(s32, M2C_UNK, M2C_UNK);
    fn_80248488(arg0 + 0x38B, 0, 0x100);
    fn_80248488(arg0 + 0x48B, 0, 0x100);
    fn_80248488(arg0 + 0x58B, 0, 0x100);
}

void fn_802003D4(void *self, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E5720[];
    fn_80245BB4((s32)((u8 *)self + 0x68B), lbl_803E5720, arg1);
}

s32 fn_80200408(void *self, u16 *s) {
    s32 n = 0;

    while (*s != 0) {
        s++;
        n++;
    }
    return (n + 2) * 4;
}

void fn_8020064C(void) {

}

void fn_8020069C(void) {

}

void fn_802006A0(void *arg0) {
    M2C_UNK fn_801E0884(void *, void *, u8);
    fn_801E0884(arg0 + 0x79C, arg0, M2C_FIELD(arg0, u8 *, 0x87));
}

void fn_802007DC(void *arg0) {
    M2C_UNK fn_802006CC(s32, void *);
    fn_802006CC(M2C_FIELD(arg0, s32 *, 4), arg0);
}

void fn_80200B54(void *arg0) {
    M2C_UNK fn_80200A54(s32, void *);
    fn_80200A54(M2C_FIELD(arg0, s32 *, 4), arg0);
}

void fn_80200D4C(void *arg0) {
    M2C_UNK fn_80200C4C(s32, void *);
    fn_80200C4C(M2C_FIELD(arg0, s32 *, 4), arg0);
}

void fn_80200D74(void *arg0) {
    M2C_UNK fn_80200D9C(s32, void *);
    fn_80200D9C(M2C_FIELD(arg0, s32 *, 4), arg0);
}

void fn_80200FBC(void *arg0) {
    M2C_UNK fn_80200E2C(s32, void *);
    fn_80200E2C(M2C_FIELD(arg0, s32 *, 4), arg0);
}

void fn_802034D8(void *arg0, s32 arg1) {
    s8 fn_80246E00(s32);
    void fn_801FE2C4(void *, s32);
    extern s32 lbl_8041FC0C[];
    s32 v = fn_80246E00(arg1);
    if (lbl_8041FC0C[0] != 0) {
        fn_801FE2C4(arg0, v);
    } else {
        fn_801FEE14(arg0, v);
    }
}

void fn_80203530(void *arg0, s32 arg1) {
    s8 fn_80246E00(s32);
    void fn_801FFB68(void *);
    extern s32 lbl_8041FC0C[];
    extern s32 lbl_80494648[2];
    lbl_80494648[M2C_FIELD(arg0, s32 *, 0x84)] = fn_80246E00(arg1);
    if (lbl_8041FC0C[0] != 0) {
        fn_801FFB68(arg0);
    }
}

void fn_80203588(void *arg0) {
    extern s32 lbl_80494640[2];
    fn_801FEE14(arg0, lbl_80494640[M2C_FIELD(arg0, s32 *, 0x84)] + 1);
}

void fn_802035BC(void *arg0) {
    extern s32 lbl_80494640[2];
    fn_801FEE14(arg0, lbl_80494640[M2C_FIELD(arg0, s32 *, 0x84)] - 1);
}

s32 fn_802037F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    return 1;
}

void fn_80203800(void) {

}

void fn_80204038(void *arg0, s32 arg1) {
    s8 fn_80246E00(s32);
    M2C_FIELD(arg0, s32 *, 0x798) = fn_80246E00(arg1) == 1;
}

void fn_80204078(void) {

}

s32 fn_802043A0(void *arg0, s32 **arg1, s32 arg2, s32 arg3) {
    extern char lbl_803E6034[];
    extern char lbl_803E6044[];
    void fn_802045DC(void *);
    void fn_80248488();
    s32 fn_80203A0C(s32, s32, s32);
    void fn_801FCFE8(void *, s32, s32, char *);
    void fn_801DB32C(char *, char *);
    char buf[0x200];
    char *p;
    char *s;
    s32 x;

    if (arg1 == 0) {
        return 0;
    }
    fn_802045DC(arg0);
    p = (s32)buf;
    fn_80248488(p, 0, 0x200);
    x = **arg1;
    if (arg3 == 0) {
        x = fn_80203A0C(x, 0x14, arg2);
    }
    fn_801FCFE8(arg0, x, arg3, p);
    if (M2C_FIELD(arg0, s32 *, 0x84) == 0) {
        s = lbl_803E6034;
    } else {
        s = lbl_803E6044;
    }
    fn_801DB32C(s, buf);
    return 1;
}

s32 fn_80204458(void *arg0, s32 **arg1, s32 arg2, s32 arg3) {
    extern char lbl_803E6034[];
    extern char lbl_803E6044[];
    void fn_802045DC(void *);
    void fn_80248488();
    s32 fn_80203A0C(s32, s32, s32);
    void fn_801FCFE8(void *, s32, s32, char *);
    void fn_801DB32C(char *, char *);
    char buf[0x200];
    char *p;
    char *s;
    s32 x;

    if (arg1 == 0) {
        return 0;
    }
    fn_802045DC(arg0);
    p = (s32)buf;
    fn_80248488(p, 0, 0x200);
    x = **arg1;
    if (arg3 == 0) {
        x = fn_80203A0C(x, 0x14, arg2);
    }
    fn_801FCFE8(arg0, x, arg3, p);
    if (M2C_FIELD(arg0, s32 *, 0x84) == 0) {
        s = lbl_803E6034;
    } else {
        s = lbl_803E6044;
    }
    fn_801DB32C(s, buf);
    return 1;
}

s32 fn_802046E0(void *arg0, void *arg1, s32 *arg2, s32 *arg3) {
    extern void *fn_8016CC44(void *);
    s32 fn_8016D80C(void *, s32);

    *arg2 = 0;
    *arg3 = 0;
    if (arg1 == 0 || (arg1 = fn_8016CC44(arg1)) == 0) {
        return 0;
    }
    for (; *arg2 <= 13; (*arg2)++) {
        if ((*arg3 = fn_8016D80C(arg1, *arg2)) > 0) {
            break;
        }
    }
    return *arg2 <= 13;
}

s32 fn_8020490C(void *arg0, s32 arg1, s32 arg2) {
    extern u8 *lbl_8049665C;
    s32 fn_80204778(void *, void *, s32);
    void *obj;

    if (lbl_8049665C == 0) {
        return 0;
    }
    obj = (*(void *(**)(u8 *))(*(u8 **)lbl_8049665C + 0x84))(lbl_8049665C + *(s16 *)(*(u8 **)lbl_8049665C + 0x80));
    return fn_80204778(arg0, obj, arg2);
}

void fn_80204C00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
}

void fn_8020512C(void) {

}

extern u32 lbl_803E640C[][12];
s32 fn_801FB8CC(INVPair *);
void fn_802051C0(void *self, INVPair **vec, s32 start) {
    s32 n;
    s32 i;

    n = (vec[1] - vec[0]) - start;
    if (n > 12) {
        n = 12;
    }
    for (i = 0; i < n; i++) {
        s32 val = fn_801FB8CC(INVPairVec_At(vec, start + i));
        INVTarget_Send(self, lbl_803E640C[M2C_FIELD(self, s32 *, 0x84)][i], val);
    }
}

s32 fn_801FB90C(INVPair *);
void fn_802053F0(void *self, INVPair **vec, s32 start) {
    s32 n;
    s32 i;

    n = (vec[1] - vec[0]) - start;
    if (n > 12) {
        n = 12;
    }
    for (i = 0; i < n; i++) {
        s32 val = fn_801FB90C(INVPairVec_At(vec, start + i));
        INVTarget_Send(self, lbl_803E640C[M2C_FIELD(self, s32 *, 0x84)][i], val);
    }
}

void fn_802055C8(void *arg0, s32 arg1) {
    s8 fn_80246E00(s32);
    M2C_FIELD(arg0, s8 *, 0x8C1) = fn_80246E00(arg1);
}

void fn_802055FC(void *arg0, char *arg1) {
    struct Str7 { char s[7]; };
    extern char lbl_803E60D8[];
    *(struct Str7 *)arg1 = *(struct Str7 *)lbl_803E60D8;
}

void fn_80205710(void *arg0, u16 *arg1) {
    void fn_801FFAE4(void *, u16 *);
    extern s32 lbl_8041FC0C[];
    extern u16 lbl_803E4CA4[];
    if (lbl_8041FC0C[0] != 0) {
        fn_801FFAE4(arg0, arg1);
    } else {
        *arg1 = lbl_803E4CA4[0];
    }
}

void fn_80205750(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    s32 flag = 0;
    if (M2C_FIELD(arg0, s32 *, 0x88) != 0) {
        flag = 1;
    }
    fn_80245BB4(arg1, lbl_803E4E18, flag);
}

void fn_80205794(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    extern s32 lbl_80494640[2];
    fn_80245BB4(arg1, lbl_803E4E18, lbl_80494640[M2C_FIELD(arg0, s32 *, 0x84)]);
}

void fn_802057D4(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    extern s32 lbl_80494648[2];
    fn_80245BB4(arg1, lbl_803E4E18, lbl_80494648[M2C_FIELD(arg0, s32 *, 0x84)]);
}

void fn_80205814(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    fn_80245BB4(arg1, lbl_803E4E18, M2C_FIELD(arg0, s32 *, 0xBC));
}

void fn_80205848(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    fn_80245BB4(arg1, lbl_803E4E18, M2C_FIELD(arg0, s32 *, 0xD4));
}

void fn_8020587C(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    fn_80245BB4(arg1, lbl_803E4E18, 1);
}

void fn_802059A8(void) {

}

void fn_802059AC(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    fn_80245BB4(arg1, lbl_803E4E18, 1);
}

void fn_80205AE0(void *arg0, void *arg1) {
    void fn_80205CF8(void *, s32, s32 *, s32 *);
    void fn_8016CD4C();
    void fn_800F8178(void *, s32);
    s32 sp8[2];
    s32 sp10;
    s32 *sp14;
    s32 val;
    fn_80205CF8(arg0, M2C_FIELD(arg0, u8 *, 0x8C1), sp8, &sp10);
    switch (sp10) {
    case 9:
    case 10:
    case 11:
        return;
    }
    if ((u32)sp10 <= 14) {
        fn_8016CD4C(&sp14, sp8[0]);
        val = 0;
        if (sp14 != 0) {
            val = *sp14;
        }
        fn_800F8178(arg1, val);
    }
}

void fn_80205BF8(void *arg0, u16 *arg1) {
    struct S {
        u8 pad[0xD8];
        s32 arr[1];
    };
    void fn_80204974(void *, s32, u16 *);
    extern s32 lbl_80494648[2];

    if (arg1 != NULL) {
        *arg1 = 0;
        fn_80204974(arg0, ((struct S *)arg0)->arr[lbl_80494648[M2C_FIELD(arg0, s32 *, 0x84)]], arg1);
    }
}

void fn_80205CB4(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    s32 flag = 0;
    if (M2C_FIELD(arg0, s32 *, 0x88) != 0) {
        flag = 1;
    }
    fn_80245BB4(arg1, lbl_803E4E18, flag);
}

void fn_80206190(void) {

}

void fn_802063F8(void *arg0, char *arg1, s32 arg2) {
    s32 fn_80245BB4(char *, char *, ...);
    extern char lbl_803E4E18[];
    extern u8 lbl_8045B82C[];
    void fn_80205CF8(void *, s32, void **, s32 *);
    s32 fn_8033740C(void *, s32, s32, s32);
    s32 fn_8032C2E0(s32, s32);
    void fn_8033789C(void *, s32);
    void *a[2];
    s32 b[2];
    void *g;
    s32 x;

    fn_80205CF8(arg0, M2C_FIELD(arg0, u8 *, 0x8C1), a, b);
    switch (b[0]) {
    case 9:
    case 10:
    case 11:
        break;
    default:
        x = ***(s32 ***)(M2C_FIELD(fn_801FB790(a[0]), u8 **, 0x38) + 0xC0);
        g = lbl_8045B82C;
        fn_80245BB4(arg1, lbl_803E4E18, fn_8032C2E0(fn_8033740C(g, x, 0, 0), arg2));
        fn_8033789C(g, x);
        break;
    }
}

void fn_802064A8(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    fn_80245BB4(arg1, lbl_803E4E18, 0);
}

void fn_802064DC(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    fn_80245BB4(arg1, lbl_803E4E18, (M2C_FIELD(arg0, s32 *, 0x17C) - M2C_FIELD(arg0, s32 *, 0x178)) >> 3);
}

void fn_80206520(void *arg0, s32 arg1, s32 arg2) {
    struct Ent { s32 a; s32 b; };
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    extern s32 lbl_803E6C10[];
    s32 v = 0;
    if ((u32)arg2 < (u32)(M2C_FIELD(arg0, struct Ent **, 0x17C) - M2C_FIELD(arg0, struct Ent **, 0x178))) {
        v = M2C_FIELD(arg0, struct Ent **, 0x178)[arg2].a;
    }
    fn_80245BB4(arg1, lbl_803E4E18, lbl_803E6C10[v]);
}

void fn_80206698(void *arg0) {
    extern void fn_801FF2C0(void *, s32);
    fn_801FF2C0(arg0, 1);
}

void fn_802066BC(void *arg0) {
    extern void fn_801FF2C0(void *, s32);
    fn_801FF2C0(arg0, 1);
}

s32 fn_80206E64(void *obj) {
    s32 fn_800599B0(void *);
    s32 fn_800599F0(void *);
    s32 ret = 0;
    s32 lo = 2;
    if (obj != NULL && fn_800599B0(obj) == 2) {
        s32 r = fn_800599F0(obj);
        if (r <= 5) {
            ret = r >= lo;
        }
    }
    return ret;
}

void fn_80206EC8(void *arg0, s32 arg1) {
    struct S {
        u8 pad[0xD8];
        void *arr[1];
    };
    void fn_80245BB4(s32, char *, ...);
    s32 fn_80206E64(void *);
    extern char lbl_803E4E18[];
    extern s32 lbl_80494648[2];
    s32 flag;
    if (fn_80206E64(((struct S *)arg0)->arr[lbl_80494648[M2C_FIELD(arg0, s32 *, 0x84)]]) != 0) {
        flag = 1;
    } else {
        flag = 0;
    }
    fn_80245BB4(arg1, lbl_803E4E18, flag);
}

void fn_80206F34(void *arg0, s32 arg1) {
    struct S {
        u8 pad[0xD8];
        void *arr[1];
    };
    void fn_80245BB4(s32, char *, ...);
    s32 fn_800599B0(void *);
    s32 fn_800599F0(void *);
    extern char lbl_803E4E18[];
    extern s32 lbl_80494648[2];
    s32 flag = 1;
    void *obj = ((struct S *)arg0)->arr[lbl_80494648[M2C_FIELD(arg0, s32 *, 0x84)]];
    if (obj != NULL && fn_800599B0(obj) == 2 && fn_800599F0(obj) == 1) {
        flag = 0;
    }
    fn_80245BB4(arg1, lbl_803E4E18, flag);
}

void fn_80206FC0(void *arg0) {
    s32 fn_801FBA80(s32, u16 *);
    void fn_801DB32C(char *, u16 *);
    extern char lbl_803E60F8[];
    u16 buf[32];
    fn_801FBA80(M2C_FIELD(arg0, s32 *, 0x950), buf);
    fn_801DB32C(lbl_803E60F8, buf);
}

void fn_80206FF8(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    s32 flag = 0;
    if (M2C_FIELD(arg0, s32 *, 0x94C) != 0) {
        flag = 1;
    }
    fn_80245BB4(arg1, lbl_803E4E18, flag);
}

s32 fn_8020703C(void *arg0) {
    s32 fn_80207074(void *);
    typedef struct { s32 a; s32 b; } Ent;
    return M2C_FIELD(arg0, Ent **, 0x178)[fn_80207074(arg0)].a;
}

u8 fn_80207074(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x8C0);
}

void fn_802076D4(void *arg0, s32 arg1) {
    extern s32 fn_801D7CDC(void *, s32);
    extern s32 fn_801D8B40(void *, void *);
    extern s32 fn_801D9014(void *, void *);
    extern s32 fn_801D94DC(void *, void *);
    extern s32 fn_801DC030(void *, void *);
    extern s32 fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80417788[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80417788;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

char *fn_80207818(void *arg0) {
    char *fn_801DB224(char *);
    extern char lbl_803E6DF4[];
    extern char lbl_803E6E08[];
    extern char lbl_803E6E18[];
    extern char lbl_803E6E2C[];
    extern char lbl_803E6E3C[];
    char *s = NULL;

    switch (M2C_FIELD(arg0, s32 *, 0x84)) {
    case 1:
        s = fn_801DB224(lbl_803E6DF4);
        break;
    case 2:
        s = fn_801DB224(lbl_803E6E08);
        break;
    case 3:
        s = fn_801DB224(lbl_803E6E18);
        break;
    case 4:
        s = fn_801DB224(lbl_803E6E2C);
        break;
    }
    if (s == NULL) {
        s = lbl_803E6E3C;
    }
    return s;
}

s32 fn_802078B4(void *arg0) {
    s32 r = 0;
    switch (M2C_FIELD(arg0, s32 *, 0x84)) {
    case 1:
    case 2:
    case 3:
    case 4:
        r = 1;
        break;
    }
    return r;
}

void fn_80208374(void *arg0, s32 arg1) {
    extern s32 fn_801D7CDC(void *, s32);
    extern s32 fn_801D8B40(void *, void *);
    extern s32 fn_801D9014(void *, void *);
    extern s32 fn_801D94DC(void *, void *);
    extern s32 fn_801DC030(void *, void *);
    extern s32 fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_804177F0[];
    extern char lbl_804177C8[];
    extern char lbl_80417820[];
    extern char lbl_80417860[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x100) = lbl_804177F0;
    M2C_FIELD(arg0, void **, 0x108) = lbl_804177C8;
    M2C_FIELD(arg0, void **, 0x80) = lbl_80417820;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x108) = lbl_80417860;
    fn_801F5304((u8 *)arg0 + 0x84, 0);
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_80208768(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x114);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x114) = 1;
        M2C_FIELD(arg0, s32 *, 0x118) = 1;
        return;
    case 4:
    case 19:
        M2C_FIELD(arg0, s32 *, 0x118) = 1;
        return;
    }
}

void fn_80208AD8(s32 arg0) {
    M2C_UNK fn_801F5420(s32);
    fn_801F5420(arg0 + 0x84);
}

s32 fn_80208AFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x104);
}

void fn_80209608(u8 *arg0) {
    s32 fn_801DB18C(u8 *);
    M2C_UNK fn_801F53A0(void *);
    s32 fn_8020DD5C(s32);
    INVHandle fn_8004C168();
    extern u8 lbl_8041F94C[];
    extern u8 lbl_803E7058[];
    extern u8 lbl_803E7014[];
    extern u8 lbl_803E706C[];
    extern u8 lbl_803E701C[];
    extern u8 lbl_803E7024[];
    extern u8 lbl_803E7034[];
    INVHandle h;

    fn_801F5420((s32)(arg0 + 0x84));
    switch (fn_8020DD5C(*(s32 *)(arg0 + 0x110))) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        INV_setStr(arg0 + 0xAC, lbl_803E7058);
        break;
    case -1:
        INV_setStr(arg0 + 0xAC, NULL);
        break;
    }
    fn_800F1B80(arg0 + 0xB4, (h = fn_8004C168(lbl_8041F94C, lbl_803E7014)).p != NULL ? (void *)*h.p : NULL);
    if (*(s32 *)(arg0 + 0x120) & 1) {
        INV_setStr(arg0 + 0xB8, lbl_803E706C);
        INV_setStr(arg0 + 0xBC, lbl_803E701C);
        *(s32 *)(arg0 + 0x84) = 3;
    } else {
        INV_setStr(arg0 + 0xB8, lbl_803E7024);
        INV_setStr(arg0 + 0xBC, lbl_803E706C);
        *(s32 *)(arg0 + 0x84) = 3;
    }
    *(s32 *)(arg0 + 0xA0) = 1;
    *(s32 *)(arg0 + 0x8C) = 3;
    *(s16 *)(arg0 + 0xC6) = *(s16 *)(arg0 + 0xC4) = *(s32 *)(arg0 + 0xC0) = *(s32 *)(arg0 + 0x90) = *(s32 *)(arg0 + 0x94) = *(s32 *)(arg0 + 0x88) = *(s32 *)(arg0 + 0x98) = 0;
    if (fn_801DB18C(lbl_803E7034) == 1) {
        *(s32 *)(arg0 + 0xC8) = 2;
    } else {
        *(s32 *)(arg0 + 0xC8) = 1;
    }
    fn_801F53A0(arg0 + 0x84);
}

void fn_8020A500(u8 *arg0) {
    s32 fn_801DB18C(void *);
    M2C_UNK fn_801F53A0(void *);
    INVHandle fn_8004C168();
    extern u8 lbl_8041F94C[];
    extern u8 lbl_803E718C[];
    extern u8 lbl_803E70E8[];
    extern u8 lbl_803E70EC[];
    extern u8 lbl_803E6F74[];
    extern u8 lbl_803E7034[];
    INVHandle h1, h3;
    s32 zero;

    fn_800F1B80(arg0 + 0xAC, (h1 = fn_8004C168(lbl_8041F94C, lbl_803E718C)).p != NULL ? (void *)*h1.p : NULL);
    INV_setStr(arg0 + 0xB4, lbl_803E70E8);
    do {
        fn_800F1B80(arg0 + 0xB8, (h3 = fn_8004C168(lbl_8041F94C, lbl_803E70EC)).p != NULL ? (void *)*h3.p : NULL);
    } while (0);
    fn_800F1B80(arg0 + 0xBC, lbl_803E6F74);
    zero = 0;
    *(s32 *)(arg0 + 0xA0) = 1;
    *(s32 *)(arg0 + 0x84) = 2;
    *(s32 *)(arg0 + 0x88) = 1;
    *(s32 *)(arg0 + 0x8C) = 3;
    *(s32 *)(arg0 + 0x98) = zero;
    *(s32 *)(arg0 + 0x94) = zero;
    *(s32 *)(arg0 + 0x90) = zero;
    *(s32 *)(arg0 + 0xC0) = zero;
    *(s16 *)(arg0 + 0xC4) = zero;
    *(s16 *)(arg0 + 0xC6) = zero;
    if (fn_801DB18C(lbl_803E7034) == 1) {
        *(s32 *)(arg0 + 0xC8) = 2;
    } else {
        *(s32 *)(arg0 + 0xC8) = 1;
    }
    fn_801F53A0(arg0 + 0x84);
}

void fn_8020ACC8(void) {

}

void fn_8020ACCC(void) {

}

void fn_8020C99C(void *arg0) {
    M2C_UNK fn_8020FA8C();
    M2C_UNK fn_8020FC34();
    M2C_UNK fn_8020FD84();
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x120);
    switch (temp_r0) {                              /* irregular */
    case 9:
        fn_8020FD84();
        return;
    case 28:
        fn_8020FA8C();
        return;
    case 29:
        fn_8020FC34();
        return;
    }
}

void fn_8020DC48(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r3;

    if (((s32) M2C_FIELD(arg2, s32 *, 0) == 0xFF) || (temp_r3 = M2C_FIELD(arg0, s32 *, 0x120), ((temp_r3 == 0x1B) != 0)) || (temp_r3 == 0x11) || (temp_r3 == 0x16)) {
        M2C_FIELD(arg2, s32 *, 0) = arg1;
        M2C_FIELD(arg2, s32 *, 4) = -1;
        return;
    }
    if ((s32) M2C_FIELD(arg2, s32 *, 4) == 0xFF) {
        M2C_FIELD(arg2, s32 *, 4) = (s32) ~(arg1 | arg1);
        return;
    }
    if ((s32) M2C_FIELD(arg2, s32 *, 8) == 0) {
        M2C_FIELD(arg2, s32 *, 8) = (s32) (arg1 + 1);
    }
}

void fn_8020DCB0(void *arg0, s32 *arg1, s32 arg2) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E7668[];
    s32 t;

    if (arg1[0] == 0xFF || (t = M2C_FIELD(arg0, s32 *, 0x120)) == 0x1B || t == 0x11 || t == 0x16) {
        fn_80245BB4(arg2, lbl_803E7668, 2);
    } else if (arg1[1] == 0xFF) {
        fn_80245BB4(arg2, lbl_803E7668, 8);
    } else if (arg1[2] == 0) {
        fn_80245BB4(arg2, lbl_803E7668, 4);
    }
}

s32 fn_8020DD5C(s32 arg0) {
    if (*(s32 *)(arg0 + 0x120) == 0x13) {
        return *(s32 *)(arg0 + 0x110);
    }
    return *(s32 *)(arg0 + 0x104);
}

s32 fn_8020DD78(void *arg0) {
    s32 var_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x120) == 0x13) {
        var_r3 = M2C_FIELD(arg0, s32 *, 0x110);
        if (var_r3 == -1) {
            return M2C_FIELD(arg0, s32 *, 0x114);
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_r3;
    }
    var_r3 = M2C_FIELD(arg0, s32 *, 0x104);
    if (var_r3 == -1) {
        return M2C_FIELD(arg0, s32 *, 0x108);
    }
    return var_r3;
}

extern u8 lbl_803E75EC[];
s32 fn_801DB18C(u8 *arg);
void fn_8020DF04(void) {
    fn_801DB18C(lbl_803E75EC);
}

void fn_8020ECF8(u8 *arg0) {
    typedef struct { s32 *p; } Handle;
    Handle fn_8004C168();
    void fn_800F1B80(void *, void *);
    M2C_UNK fn_801F53A0(void *);
    extern u8 lbl_8041F94C[];
    extern u8 lbl_803E791C[];
    extern u8 lbl_803E77A0[];
    extern u8 lbl_803E77A4[];
    extern u8 lbl_803E72BC[];
    Handle h1, h2, h3;
    s32 zero;

    fn_800F1B80(arg0 + 0xAC, (h1 = fn_8004C168(lbl_8041F94C, lbl_803E791C)).p != NULL ? (void *)*h1.p : NULL);
    fn_800F1B80(arg0 + 0xB4, (h2 = fn_8004C168(lbl_8041F94C, lbl_803E77A0)).p != NULL ? (void *)*h2.p : NULL);
    fn_800F1B80(arg0 + 0xB8, (h3 = fn_8004C168(lbl_8041F94C, lbl_803E77A4)).p != NULL ? (void *)*h3.p : NULL);
    fn_800F1B80(arg0 + 0xBC, lbl_803E72BC);
    zero = 0;
    *(s32 *)(arg0 + 0xA0) = 1;
    *(s32 *)(arg0 + 0x84) = 2;
    *(s32 *)(arg0 + 0x88) = 1;
    *(s32 *)(arg0 + 0x8C) = 3;
    *(s32 *)(arg0 + 0x98) = zero;
    *(s32 *)(arg0 + 0xA4) = zero;
    *(s32 *)(arg0 + 0x94) = zero;
    *(s32 *)(arg0 + 0x90) = zero;
    *(s32 *)(arg0 + 0xC0) = zero;
    *(s16 *)(arg0 + 0xC4) = zero;
    *(s16 *)(arg0 + 0xC6) = zero;
    if (fn_801DB18C(lbl_803E75EC) == 1) {
        *(s32 *)(arg0 + 0xC8) = 2;
    } else {
        *(s32 *)(arg0 + 0xC8) = 1;
    }
    fn_801F53A0(arg0 + 0x84);
}

void fn_8020F1B8(void *arg0, s32 arg1, void *arg2) {
    void fn_800F8178(void *, void *);
    extern u8 lbl_803E72BC[];
    fn_800F8178(arg2, lbl_803E72BC);
}

void fn_8020F1E4(void *arg0, s32 arg1, void *arg2) {
    s32 fn_8020F69C(void *, s32);
    void *fn_8020F724(void *, s32);
    void *fn_8020F76C(void *, s32);
    void fn_800F8178(void *, void *);
    void fn_800F82FC(void *, void *);
    INVHandle fn_8004C168();
    extern u8 lbl_8041F94C[];
    extern u8 lbl_803E79BC[];
    extern u8 lbl_803E79C0[];
    s32 idx = arg1 + 1;
    INVHandle h;

    if (fn_8020F69C(arg0, idx) != 0) {
        fn_800F8178(arg2, fn_8020F724(arg0, idx));
        fn_800F82FC(arg2, lbl_803E79BC);
        fn_800F82FC(arg2, fn_8020F76C(arg0, idx));
    } else {
        h = fn_8004C168(lbl_8041F94C, lbl_803E79C0);
        fn_800F8178(arg2, h.p != NULL ? (void *)*h.p : NULL);
    }
}

void fn_8020F378(void *arg0, s32 arg1, s32 arg2) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E7668[];
    fn_80245BB4(arg2, lbl_803E7668, 1);
}

void fn_8020F3AC(void *arg0, s32 arg1, s32 arg2) {
    void fn_80245BB4(s32, char *, ...);
    s32 fn_8020F69C(void *, s32);
    extern char lbl_803E7668[];
    s32 v;

    if (M2C_FIELD(arg0, s32 *, 0x120) == 0x14) {
        v = fn_8020F69C(arg0, arg1 + 1);
    } else if (M2C_FIELD(arg0, s32 *, 0x138) != 0) {
        v = 1;
        if (arg1 == M2C_FIELD(arg0, s32 *, 0x13C) - 1) {
            v = 0;
        }
    } else {
        v = 1;
    }
    fn_80245BB4(arg2, lbl_803E7668, v);
}

void fn_8020F430(s32 arg0) {
    M2C_UNK fn_801868E4(s32, s32, s32);
    extern s32 lbl_8049440C;
    s32 temp_r3;
    s32 var_r30;
    s32 var_r31;

    var_r30 = arg0 + 0x148;
    var_r31 = 1;
    do {
        temp_r3 = var_r30;
        var_r30 += 0x1BE0;
        fn_801868E4(temp_r3, lbl_8049440C, var_r31);
        var_r31 += 1;
    } while (var_r31 <= 4);
}

s32 fn_8020F69C(void *arg0, s32 arg1) {
    char *p;
    char *obj;
    char *vt;

    if ((u32)(arg1 - 1) > 3) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x120) == 0x14) {
        p = (char *)arg0 + (arg1 - 1) * 0x1BE0 + 0x70C8;
    } else {
        p = (char *)arg0 + (arg1 - 1) * 0x1BE0 + 0x148;
    }
    obj = p + 0xC;
    vt = *(char **)obj;
    return M2C_FIELD(vt, s32 (**)(void *), 0x9C)(obj + M2C_FIELD(vt, s16 *, 0x98)) != 0;
}

void *fn_8020F724(void *arg0, s32 arg1) {
    typedef struct { u8 pad[0x1AF8]; u8 name[0x1BE0 - 0x1AF8]; } INVSlot;
    typedef struct { u8 pad[0x148]; INVSlot a[4]; u8 pad2[0x70C8 - 0x148 - 4 * 0x1BE0]; INVSlot b[4]; } INVSlots;
    extern u8 lbl_803E72BC[];

    if ((u32)(arg1 - 1) > 3) {
        return lbl_803E72BC;
    }
    if (M2C_FIELD(arg0, s32 *, 0x120) == 0x14) {
        return ((INVSlots *)arg0)->b[arg1 - 1].name;
    }
    return ((INVSlots *)arg0)->a[arg1 - 1].name;
}

s32 fn_8020F990(void) {
    M2C_UNK fn_800A4B14(M2C_UNK, s32 *);
    s32 spC;
    s32 sp8;
    s32 var_r3;

    sp8 = 0;
    fn_800A4B14(0, &sp8);
    spC = 0;
    fn_800A4B14(1, &spC);
    var_r3 = 0;
    if ((sp8 != 0) || (spC != 0)) {
        var_r3 = 1;
    }
    return var_r3;
}

void fn_802127FC(s32 arg0, s32 arg1) {
    extern u16 lbl_803F6B20[][20];
    s32 idx;
    s32 inserted;
    s32 found;
    s32 i;

    idx = 1;
    if (arg0 == 1) {
        idx = 0;
    }
    inserted = 0;
    found = 0;
    for (i = 0; i < 0x14 && !inserted && !found; i++) {
        if (lbl_803F6B20[idx][i] == arg1) {
            found = 1;
        } else if (lbl_803F6B20[idx][i] == 0) {
            lbl_803F6B20[idx][i] = arg1;
            inserted = 1;
        }
    }
    if (found) {
        return;
    }
    if (inserted) {
        return;
    }
    for (i = 1; i < 0x14; i++) {
        lbl_803F6B20[idx][i - 1] = lbl_803F6B20[idx][i];
    }
    lbl_803F6B20[idx][0x13] = arg1;
}

void fn_802144A8(void *arg0, s32 arg1) {
    extern s32 fn_801D7CDC(void *, s32);
    extern s32 fn_801D8B40(void *, void *);
    extern s32 fn_801D9014(void *, void *);
    extern s32 fn_801D94DC(void *, void *);
    extern s32 fn_801DC030(void *, void *);
    extern s32 fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80417978[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80417978;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_80214DB0(void) {

}

f32 fn_80214DB4(void *arg0, s32 arg1) {
    if (arg1 < 0) {
        return (f32)(arg1 + 25) / 25.0f * 0.5f;
    }
    return (f32)arg1 / 25.0f * 0.5f + 0.5f;
}

s8 fn_80214E48(f32 arg0) {
    s32 ret;

    if (!(arg0 < 0.5f)) {
        ret = (arg0 - 0.5f) * 2.0f * 25.0f + 0.5f;
    } else {
        ret = (1.0f - arg0 * 2.0f) * -25.0f;
    }
    return ret;
}

f32 fn_80214EA8(void *arg0, s32 arg1) {
    if (arg1 < 0) {
        return (f32)(arg1 + 25) / 25.0f * 0.5f;
    }
    return (f32)arg1 / 25.0f * 0.5f + 0.5f;
}

s8 fn_80214F3C(f32 arg0) {
    s32 ret;

    if (!(arg0 < 0.5f)) {
        ret = (arg0 - 0.5f) * 2.0f * 25.0f + 0.5f;
    } else {
        ret = (1.0f - arg0 * 2.0f) * -25.0f;
    }
    return ret;
}

void fn_80214F9C(u8 *arg0) {
    extern struct { u8 pad[0x184]; u8 *p; } lbl_8041F94C;

    arg0[0x84] = lbl_8041F94C.p[0x1C];
    arg0[0x85] = lbl_8041F94C.p[0x1D];
    arg0[0x86] = lbl_8041F94C.p[0x1F];
    arg0[0x87] = lbl_8041F94C.p[0x20];
    *(s32 *)(arg0 + 0x88) = *(s32 *)(lbl_8041F94C.p + 0x4);
    *(s32 *)(arg0 + 0x8C) = *(s32 *)(lbl_8041F94C.p + 0x0);
    *(s32 *)(arg0 + 0x90) = *(s32 *)(lbl_8041F94C.p + 0x14);
    *(s32 *)(arg0 + 0x94) = *(s32 *)(lbl_8041F94C.p + 0x18);
    *(s32 *)(arg0 + 0x98) = *(s32 *)(lbl_8041F94C.p + 0x10);
}

void fn_802174A0(void *arg0) {
    s32 fn_801DB18C(u8 *);
    void fn_80217910(void *, s32, s32);
    extern u8 lbl_803E8DA8[];
    extern u8 lbl_803E8DB8[];
    s32 v;

    if (*(s32 *)((u8 *)arg0 + 0x168) != 0) {
        v = *(s32 *)((u8 *)arg0 + 0x16C);
        if (v == 0) {
            *(s32 *)((u8 *)arg0 + 0x168) = v;
            fn_80217910(arg0, 0, fn_801DB18C(lbl_803E8DA8));
        } else if (v == 1) {
            *(s32 *)((u8 *)arg0 + 0x168) = 0;
            fn_80217910(arg0, 1, fn_801DB18C(lbl_803E8DB8));
        }
    }
}

void fn_80217530(void *arg0, s32 arg1, u32 arg2) {
    extern s32 lbl_80494660;
    extern s32 lbl_80494664;
    s32 done = arg2 > 11;
    if (done) {
        return;
    }
    if (arg1 == 2) {
        lbl_80494660 = arg2;
        done = 1;
        lbl_80494664 = arg2;
    }
    if (done == 0) {
        (&lbl_80494660)[arg1] = arg2;
    }
}

void fn_802178D4(void *arg0) {
    M2C_UNK fn_801F53A0(void *);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x160) != 0) {
        M2C_FIELD(arg0, s32 *, 0x160) = 0;
        fn_801F53A0(arg0 + 0x84);
    }
}

s32 fn_80217A30(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x164);
    M2C_FIELD(arg0, s32 *, 0x164) = arg1;
    return temp_r0;
}

s32 fn_80217A40(void *arg0, s32 arg1) {
    struct T { u8 pad[0x12C]; s32 unk12C[1]; };
    return ((struct T *)arg0)->unk12C[arg1];
}

char *fn_802181A0(void *arg0, char *arg1) {
    struct Str7 { char c[7]; };
    char *fn_800BF3FC(s32);
    s32 fn_802486DC(char *, char *);
    s32 fn_8004ECC8(void *);
    extern char lbl_803E9050[];
    extern char lbl_803E905C[];
    extern char lbl_803E90D8[];
    extern u8 lbl_8041F94C[];
    char *buf = fn_800BF3FC(0x80);

    buf[0] = 0;
    if (fn_802486DC(arg1, lbl_803E9050) == 0) {
        *(struct Str7 *)buf = *(struct Str7 *)lbl_803E90D8;
    } else if (fn_802486DC(arg1, lbl_803E905C) == 0) {
        if (fn_8004ECC8(lbl_8041F94C) != 0) {
            buf[0] = '1';
        } else {
            buf[0] = '0';
        }
        buf[1] = 0;
    }
    return buf;
}

void fn_8021825C(void *arg0, char *arg1, char *arg2) {
    s32 fn_802486DC(char *, char *);
    void fn_80245C94(char *, char *, ...);
    void fn_801DB274(char *, s32);
    extern char lbl_803E9070[];
    extern char lbl_803E90E0[];
    extern char lbl_803E90E4[];
    s32 val;

    if (fn_802486DC(lbl_803E9070, arg1) == 0) {
        fn_80245C94(arg2, lbl_803E90E0, &val);
        switch (val) {
        case 1:
            fn_801DB274(lbl_803E90E4, 1);
            break;
        case 2:
            fn_801DB274(lbl_803E90E4, 6);
            break;
        case 3:
            break;
        }
    }
}

void fn_802184BC(void *arg0) {
    struct T { u8 pad[0x8C]; s32 h[2]; };
    s32 fn_80049B6C(void *);
    void fn_8000BFD0(void *, s32, s32);
    extern struct { u8 pad[0xD0]; void *unkD0; } lbl_8041F94C;
    s32 n;
    s32 i;

    n = 1;
    if (fn_80049B6C(&lbl_8041F94C) != 0) {
        n = 2;
    }
    for (i = 0; i < n; i++) {
        if (((struct T *)arg0)->h[i] != -1) {
            fn_8000BFD0(lbl_8041F94C.unkD0, i, ((struct T *)arg0)->h[i]);
            ((struct T *)arg0)->h[i] = -1;
        }
    }
}

s32 fn_80219D14(void) {
    s32 var_r3;
    void *temp_r3;

    temp_r3 = fn_80219E28();
    if (temp_r3 != NULL) {
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x20) != 0) {
            return 2;
        }
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x24) != 0) {
            return 1;
        }
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x28) != 0) {
            return 0;
        }
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x2C) != 0) {
            return 3;
        }
        var_r3 = 4;
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x30) == 0) {
            goto block_10;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return var_r3;
    }
block_10:
    var_r3 = 6;
    return var_r3;
}

s32 fn_80219DA0(void) {
    void *fn_80219E28();
    s32 var_r3;
    void *temp_r3;

    temp_r3 = fn_80219E28();
    if ((temp_r3 == NULL) || (var_r3 = 5, (((s32) M2C_FIELD(temp_r3, s32 *, 0x34) == 0) != 0))) {
        var_r3 = 0;
    }
    return var_r3;
}

s32 fn_80219DDC(void) {
    s32 temp_r3_2;
    s32 var_r3;
    void *temp_r3;

    temp_r3 = fn_80219E28();
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, s32 *, 0x1C);
        if (temp_r3_2 > 0x21) {
            return 0;
        }
        var_r3 = 2;
        if (temp_r3_2 >= -0x22) {
            goto block_4;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_r3;
    }
block_4:
    var_r3 = 1;
    return var_r3;
}

void *fn_80219E28(void *arg0, s32 arg1) {
    void *p = M2C_FIELD(arg0, void **, 0x84);

    if (arg1 > 0) {
        do {
            if (p == NULL) {
                break;
            }
            p = M2C_FIELD(p, void **, 4);
        } while (--arg1 != 0);
    }
    return p;
}

s32 fn_8021ADB8(void *arg0, s32 arg1) {
    extern s32 lbl_80493448[];
    s32 count;
    s32 i;

    if (arg1 == 0) {
        return 0;
    }
    count = 0;
    i = 1;
    goto body;
next:
    i++;
    if (i > 9) {
        return 0x63;
    }
body:
    if (lbl_80493448[M2C_FIELD(arg0, s32 *, 0x8C) * 10 + i] == 0) {
        goto next;
    }
    count++;
    if (count != arg1) {
        goto next;
    }
    return i;
}

void fn_8021B654(void *arg0, s32 arg1) {
    extern s32 fn_801D7CDC(void *, s32);
    extern s32 fn_801D8B40(void *, void *);
    extern s32 fn_801D9014(void *, void *);
    extern s32 fn_801D94DC(void *, void *);
    extern s32 fn_801DC030(void *, void *);
    extern s32 fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80417B28[];
    extern char lbl_80417B00[];
    extern char lbl_80417B58[];
    extern char lbl_80417860[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x100) = lbl_80417B28;
    M2C_FIELD(arg0, void **, 0x108) = lbl_80417B00;
    M2C_FIELD(arg0, void **, 0x80) = lbl_80417B58;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x108) = lbl_80417860;
    fn_801F5304((u8 *)arg0 + 0x84, 0);
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_8021BECC(s32 arg0) {
    M2C_UNK fn_801F5420(s32);
    fn_801F5420(arg0 + 0x84);
}

s32 fn_8021BEF0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x104);
}

void fn_8021CCC0(u8 *arg0) {
    typedef struct { s32 *p; } Handle;
    Handle fn_8004C168();
    void fn_800F1B80(void *, void *);
    s32 fn_801DB18C(u8 *);
    M2C_UNK fn_801F53A0(void *);
    s32 fn_8020DD5C(s32);
    extern u8 lbl_8041F94C[];
    extern u8 lbl_803E9E48[];
    extern u8 lbl_803E9D58[];
    extern u8 lbl_803E9D60[];
    extern u8 lbl_803E9CBC[];
    extern u8 lbl_803E9D7C[];
    Handle h;
    void *dst;

    switch (fn_8020DD5C(*(s32 *)(arg0 + 0x10C))) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        h = fn_8004C168(lbl_8041F94C, lbl_803E9E48);
        dst = arg0 + 0xAC;
        fn_800F1B80(dst, h.p != NULL ? (void *)*h.p : NULL);
        break;
    }
    do {
        dst = arg0 + 0xB4;
        h = fn_8004C168(lbl_8041F94C, lbl_803E9D58);
        fn_800F1B80(dst, h.p != NULL ? (void *)*h.p : NULL);
    } while (0);
    dst = arg0 + 0xB8;
    h = fn_8004C168(lbl_8041F94C, lbl_803E9D60);
    fn_800F1B80(dst, h.p != NULL ? (void *)*h.p : NULL);
    fn_800F1B80(arg0 + 0xBC, lbl_803E9CBC);
    *(s32 *)(arg0 + 0x84) = 2;
    *(s32 *)(arg0 + 0xA0) = 1;
    *(s32 *)(arg0 + 0x8C) = 3;
    *(s16 *)(arg0 + 0xC6) = *(s16 *)(arg0 + 0xC4) = *(s32 *)(arg0 + 0xC0) = *(s32 *)(arg0 + 0x90) = *(s32 *)(arg0 + 0x94) = *(s32 *)(arg0 + 0x88) = *(s32 *)(arg0 + 0x98) = 0;
    if (fn_801DB18C(lbl_803E9D7C) == 1) {
        *(s32 *)(arg0 + 0xC8) = 2;
    } else {
        *(s32 *)(arg0 + 0xC8) = 1;
    }
    fn_801F53A0(arg0 + 0x84);
}

void fn_8021D7BC(u8 *arg0) {
    typedef struct { s32 *p; } Handle;
    Handle fn_8004C168();
    void fn_800F1B80(void *, void *);
    s32 fn_801DB18C(u8 *);
    M2C_UNK fn_801F53A0(void *);
    s32 fn_8020DD5C(s32);
    extern u8 lbl_8041F94C[];
    extern u8 lbl_803E9F40[];
    extern u8 lbl_803E9D58[];
    extern u8 lbl_803E9F64[];
    extern u8 lbl_803E9CBC[];
    extern u8 lbl_803E9D7C[];
    Handle h;
    void *dst;

    switch (fn_8020DD5C(*(s32 *)(arg0 + 0x10C))) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        h = fn_8004C168(lbl_8041F94C, lbl_803E9F40);
        dst = arg0 + 0xAC;
        fn_800F1B80(dst, h.p != NULL ? (void *)*h.p : NULL);
        break;
    }
    do {
        dst = arg0 + 0xB4;
        h = fn_8004C168(lbl_8041F94C, lbl_803E9D58);
        fn_800F1B80(dst, h.p != NULL ? (void *)*h.p : NULL);
    } while (0);
    dst = arg0 + 0xB8;
    h = fn_8004C168(lbl_8041F94C, lbl_803E9F64);
    fn_800F1B80(dst, h.p != NULL ? (void *)*h.p : NULL);
    fn_800F1B80(arg0 + 0xBC, lbl_803E9CBC);
    *(s32 *)(arg0 + 0x84) = 2;
    *(s32 *)(arg0 + 0xA0) = 1;
    *(s32 *)(arg0 + 0x8C) = 3;
    *(s16 *)(arg0 + 0xC6) = *(s16 *)(arg0 + 0xC4) = *(s32 *)(arg0 + 0xC0) = *(s32 *)(arg0 + 0x90) = *(s32 *)(arg0 + 0x94) = *(s32 *)(arg0 + 0x88) = *(s32 *)(arg0 + 0x98) = 0;
    if (fn_801DB18C(lbl_803E9D7C) == 1) {
        *(s32 *)(arg0 + 0xC8) = 2;
    } else {
        *(s32 *)(arg0 + 0xC8) = 1;
    }
    fn_801F53A0(arg0 + 0x84);
}

s32 fn_8021F05C(s32 arg0, s32 arg1) {
    void fn_8021EF20();
    fn_8021EF20(arg0, arg1, 3);
    return arg0;
}

s32 fn_8021F164(s32 arg0, s32 arg1) {
    void fn_8021EF20();
    fn_8021EF20(arg0, arg1, 0);
    return arg0;
}

s32 fn_8021F19C(s32 arg0, s32 arg1) {
    void fn_8021EF20();
    fn_8021EF20(arg0, arg1, 1);
    return arg0;
}

s32 fn_8021F1D4(s32 arg0, s32 arg1) {
    void fn_8021EF20();
    fn_8021EF20(arg0, arg1, 2);
    return arg0;
}

void fn_802200F8(void *arg0, s32 arg1) {
    extern s32 fn_801D7CDC(void *, s32);
    extern s32 fn_801D8B40(void *, void *);
    extern s32 fn_801D9014(void *, void *);
    extern s32 fn_801D94DC(void *, void *);
    extern s32 fn_801DC030(void *, void *);
    extern s32 fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80417BF0[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80417BF0;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

s32 fn_8022088C(void *self, u8 *p) {
    s32 n = 0;
    while (p != NULL) {
        n++;
        if (*(s32 *)(p + 0x8) == 0) {
            p = *(u8 **)(p + 0x4);
        } else {
            p = *(u8 **)(p + 0xC);
        }
    }
    return n;
}

u8 *fn_802208C0(void *self, u8 *p) {
    u8 *r = *(u8 **)(p + 0x4);
    if (r == NULL) {
        r = *(u8 **)(p + 0xC);
    }
    return r;
}

u8 *fn_802208D8(u8 *self, s32 idx) {
    u8 **list = (u8 **)self;
    u8 *found = NULL;
    s32 i = 0;
    self = list[1];
    if (*(s32 *)(self + 0x4) != 0) {
        for (self = list[0]; self != NULL && found == NULL; self = *(u8 **)(self + 0x4), i++) {
            if (i == idx) {
                found = self;
            }
        }
    } else {
        while (*(s32 *)(self + 0x8) != 0) {
            self = *(u8 **)(self + 0x0);
        }
        for (self = *(u8 **)(self + 0xC); self != NULL && found == NULL; self = *(u8 **)(self + 0xC), i++) {
            if (i == idx) {
                found = self;
            }
        }
    }
    return found;
}

void *fn_8022096C(u8 *self) {
    extern void *fn_8022315C(void *);
    extern u8 lbl_80417C30[];
    extern u8 lbl_80417728[];
    fn_8022315C(self);
    *(u8 **)(self + 0x58) = lbl_80417C30;
    *(u8 **)(self + 0x8C) = lbl_80417728;
    *(s32 *)(self + 0x7C) = 4;
    *(s32 *)(self + 0xA4) = 0;
    return self;
}

void fn_802209C4(void *arg0, s32 arg1) {
    void fn_802D20E8(void *);
    extern char lbl_80417770[];
    extern char lbl_80417D08[];
    char *sub;
    M2C_FIELD(arg0, char **, 0x8C) = lbl_80417770;
    sub = (char *)arg0 + 0x58;
    *(char **)sub = lbl_80417D08;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_80220A04(void *arg0) {
    s32 fn_8022554C(void);
    void fn_8022D908(s32, void *);
    void *fn_802D2058(s32);
    extern f32 lbl_803EA658[];
    extern f32 lbl_803EA65C[];
    extern s32 *lbl_8041FA48[];
    s32 *p;
    s32 n;
    f32 x, y;
    fn_8022D908(fn_8022554C(), arg0);
    x = lbl_803EA658[0];
    y = lbl_803EA65C[0];
    n = 0;
    M2C_FIELD(arg0, f32 *, 0x50) = x;
    M2C_FIELD(arg0, f32 *, 0x54) = y;
    p = *lbl_8041FA48[0];
    if (p != NULL) {
        n = p[-1];
    }
    M2C_FIELD(arg0, void **, 0xA4) = fn_802D2058(n << 2);
}

void fn_80221924(void *arg0, s32 arg1, f32 farg0) {
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

void fn_80221970(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022DA70(s32, s32);
    fn_8022DA70(arg1, arg0);
}

void fn_8022199C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022DABC(s32, s32);
    fn_8022DABC(arg1, arg0);
}

s32 fn_802219C8(void *arg0, void *arg1, s32 arg2) {
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

extern s32 fn_801A09E0(void *);
extern s32 fn_801A08DC(void *, s32);
extern s8 fn_80105B78(void *);
extern s8 fn_80105B84(void *);
extern void fn_80105574(s8 *, s32, s32, s8);
extern void fn_801055FC(void *, s32);
extern s32 fn_801927E4(void *, void *);
void fn_80222C2C(void *self, void *room, void *pos, void *obj, s32 *out1, s32 *out2) {
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

s32 fn_802230D0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5C) & 1;
}

s32 fn_802230DC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5C) == 0;
}

s32 fn_802230EC(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 2U) & 1;
}

s32 fn_802230F8(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 3U) & 1;
}

s32 fn_80223104(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 1U) & 1;
}

s32 fn_80223110(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 4U) & 1;
}

s32 fn_8022311C(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 5U) & 1;
}

s32 fn_80223128(s32 arg0) {
    return arg0 + 0x60;
}

s32 fn_80223130(s32 arg0) {
    return arg0 + 0x90;
}

s32 fn_80223138(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA0) == 0;
}

s32 fn_80223148(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA0) == 1;
}

void *fn_8022315C(void *arg0) {
    extern char lbl_80417D08[];
    extern f32 lbl_803EA768[];
    typedef struct { f32 x, y; } V2;
    f32 zero;
    f32 *v0;
    f32 *v1;
    f32 *v2;
    V2 *p;
    V2 t;

    zero = lbl_803EA768[0];
    M2C_FIELD(arg0, char **, 0x58) = lbl_80417D08;
    M2C_FIELD(arg0, s32 *, 0x0) = 0;
    M2C_FIELD(arg0, s32 *, 0x4) = 0;
    v0 = (f32 *)((char *)arg0 + 0x8);
    v1 = (f32 *)((char *)arg0 + 0x14);
    v2 = (f32 *)((char *)arg0 + 0x20);
    v0[2] = zero;
    v0[1] = zero;
    v0[0] = zero;
    v1[2] = zero;
    v1[1] = zero;
    v1[0] = zero;
    v2[2] = zero;
    v2[1] = zero;
    v2[0] = zero;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    p = &t;
    {
        s32 n = 0;
        while (n-- >= 0) {
        }
    }
    zero = lbl_803EA768[0];
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    p->y = zero;
    t.x = zero;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, V2 *, 0x3C) = *p;
    M2C_FIELD(arg0, f32 *, 0x54) = zero;
    M2C_FIELD(arg0, V2 *, 0x34) = *p;
    M2C_FIELD(arg0, f32 *, 0x50) = zero;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    return arg0;
}

void fn_8022321C(u8 *arg0) {
    struct V3 { f32 x, y, z; };
    *(struct V3 *)(arg0 + 0x14) = *(struct V3 *)(arg0 + 0x8);
}

void fn_80223240(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

s32 fn_80223248(s32 *self) {
    return self[1];
}

void fn_80223250(void *arg0, f32 *arg1) {
    s32 a;
    s32 b;
    arg1[0] = M2C_FIELD(arg0, f32 *, 0x8);
    arg1[1] = M2C_FIELD(arg0, f32 *, 0xC);
    a = M2C_FIELD(arg0, s32 *, 0x50);
    b = M2C_FIELD(arg0, s32 *, 0x54);
    ((s32 *)arg1)[3] = b;
    ((s32 *)arg1)[2] = a;
}

void fn_80223274(void *arg0, void *arg1) {
    s32 a = M2C_FIELD(arg1, s32 *, 0);
    s32 b = M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x54) = b;
    M2C_FIELD(arg0, s32 *, 0x50) = a;
}

void fn_80223288(void *arg0, s32 arg1) {
    extern f32 lbl_803EA76C[];
    struct V2 { f32 x, y; } v;
    struct V2 *pv;
    struct V2 *d;

    if (arg1 == 7) {
        pv = &v;
        pv->y = lbl_803EA76C[0];
        v.x = lbl_803EA76C[0];
        d = (struct V2 *)((u8 *)arg0 + 0x34);
        M2C_FIELD(d, s32 *, 4) = M2C_FIELD(pv, s32 *, 4);
        M2C_FIELD(d, s32 *, 0) = M2C_FIELD(&v, s32 *, 0);
    } else if (arg1 == 8) {
        pv = &v;
        pv->y = lbl_803EA76C[0];
        v.x = lbl_803EA76C[0];
        d = (struct V2 *)((u8 *)arg0 + 0x3C);
        M2C_FIELD(d, s32 *, 4) = M2C_FIELD(pv, s32 *, 4);
        M2C_FIELD(d, s32 *, 0) = M2C_FIELD(&v, s32 *, 0);
    }
}

void fn_802232F0(void *arg0, s32 arg1, f32 arg2) {
    struct V2 { f32 x, y; } v;
    struct V2 *pv;
    struct V2 *d;

    if (arg1 == 7) {
        pv = &v;
        pv->y = arg2;
        v.x = arg2;
        d = (struct V2 *)((u8 *)arg0 + 0x34);
        M2C_FIELD(d, s32 *, 4) = M2C_FIELD(pv, s32 *, 4);
        M2C_FIELD(d, s32 *, 0) = M2C_FIELD(&v, s32 *, 0);
    } else if (arg1 == 8) {
        pv = &v;
        pv->y = arg2;
        v.x = arg2;
        d = (struct V2 *)((u8 *)arg0 + 0x3C);
        M2C_FIELD(d, s32 *, 4) = M2C_FIELD(pv, s32 *, 4);
        M2C_FIELD(d, s32 *, 0) = M2C_FIELD(&v, s32 *, 0);
    }
}

void fn_80223348(void *arg0) {
    extern f32 lbl_803EA770[];
    typedef struct { f32 x, y; } V2;
    V2 *p;
    V2 t;
    s32 x;
    s32 y;

    p = &t;
    p->y = lbl_803EA770[0];
    t.x = lbl_803EA770[0];
    M2C_FIELD(arg0, s32 *, 0x44) = 1;
    x = M2C_FIELD(&t, s32 *, 0);
    y = M2C_FIELD(p, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x3C) = x;
    M2C_FIELD(arg0, s32 *, 0x38) = y;
    M2C_FIELD(arg0, s32 *, 0x40) = y;
    M2C_FIELD(arg0, s32 *, 0x34) = x;
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
}

f32 fn_8022338C(s32 *arg0) {
    extern s32 fn_80014EE0(void);
    extern s32 fn_80014F30(s32, s32);
    extern f32 fn_8000DB6C(s32);
    extern const f32 lbl_803EA774[];
    extern const f32 lbl_803EA778[];
    extern const f32 lbl_803EA77C[];
    s32 obj;
    const f32 *lo;
    f32 t;

    obj = fn_80014F30(fn_80014EE0(), *arg0);
    if (obj != 0) {
        lo = lbl_803EA774;
        t = fn_8000DB6C(obj);
        return t * (lbl_803EA778[0] - *lo) + *lo;
    }
    return lbl_803EA77C[0];
}

void fn_802233F0(s32 arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, s32 *, 0) = arg0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg2, M2C_UNK (**)(void *), 0xC)(arg1);
}

void fn_80223428(void *arg0, s32 flags) {
    void fn_802D20E8(void *);
    extern char lbl_80417D08[];
    M2C_FIELD(arg0, char **, 0x58) = lbl_80417D08;
    if (flags & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8022345C(void) {

}

void fn_80223460(void) {

}

u8 *fn_80223464(u8 *self) {
    return self + 8;
}

s32 fn_8022346C(s32 arg0) {
    return arg0 + 0x20;
}

void fn_80223474(u8 *arg0, void *arg1) {
    typedef struct { f32 x, y, z; } V3;
    *(V3 *)(arg0 + 0x20) = *(V3 *)arg1;
    *(s32 *)(arg0 + 0x2C) = 1;
}

s32 fn_8022349C(void *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x44) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x48) != 0)) {
        var_r9 = 1;
    }
    return var_r9;
}

s32 fn_802234C4(u8 *arg0) {
    f32 *a = (f32 *)(arg0 + 8);
    f32 *b = (f32 *)(arg0 + 0x14);
    return a[0] != b[0] || a[1] != b[1] || a[2] != b[2];
}

s32 fn_8022350C(s32 *self) {
    return *self;
}

void fn_80223514(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
}

s32 fn_8022351C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

s32 *fn_80223638(s32 *arg0) {
    struct { s32 w[6]; } tmp;
    s32 *v;

    arg0[0] = 0;
    v = arg0 + 2;
    arg0[1] = 0;
    v[1] = 0;
    arg0[5] = -1;
    *(u8 *)(arg0 + 4) = 0;
    arg0[7] = 0;
    return arg0;
}

void fn_8022366C(void *arg0, s32 flags) {
    typedef struct { u8 b[12]; } Elem12;
    extern void fn_802249AC(void *);
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    Elem12 **v;
    Elem12 *p;

    fn_802249AC(arg0);
    v = (Elem12 **)arg0;
    for (p = v[0]; p != v[1]; p++) {
    }
    if (v[0] != 0) {
        u32 size = (u32)((v[3] - v[0]) * sizeof(Elem12));
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

s32 fn_80224A28(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void fn_80224D88(u8 *self) {
    extern void fn_80224A30(u8 *);
    s32 i;

    for (i = 0; i < *(s32 *)(self + 4); i++) {
        fn_80224A30(*(u8 **)self + i * 0x20);
    }
}

void fn_80224DE4(void *arg0, s32 arg1) {
    M2C_UNK fn_802248A8(s32, s32);
    fn_802248A8(M2C_FIELD(arg0, s32 *, 0) + (arg1 * 32), arg1);
}

void fn_80224E10(u8 *self, s32 arg1) {
    extern void fn_802249AC(u8 *);
    fn_802249AC(*(u8 **)self + arg1 * 0x20);
}

void *fn_80224E3C(s32 arg0, s32 arg1) {
    typedef struct { u8 pad[0x20]; } Ent;
    typedef struct { Ent *list; } Tbl;
    Tbl *t = (Tbl *)arg0;
    if (t->list == NULL) {
        return NULL;
    }
    return &t->list[arg1];
}

void *fn_80224E5C(void *arg0) {
    volatile s32 z[8];
    char *p0 = (char *)arg0 + 0xC;
    char *p1 = (char *)arg0 + 0x14;
    char *p2 = (char *)arg0 + 0x1C;
    char *p3 = (char *)arg0 + 0x24;
    char *p4 = (char *)arg0 + 0x2C;
    char *p5 = (char *)arg0 + 0x34;
    char *p6 = (char *)arg0 + 0x40;
    char *p7 = (char *)arg0 + 0x48;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    *(volatile s32 *)(p0 + 4) = 0;
    *(volatile s32 *)(p1 + 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    *(volatile s32 *)(p2 + 4) = 0;
    *(volatile s32 *)(p3 + 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    *(volatile s32 *)(p4 + 4) = 0;
    *(volatile s32 *)(p5 + 4) = 0;
    M2C_FIELD(arg0, u8 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    *(volatile s32 *)(p6 + 4) = 0;
    *(volatile s32 *)(p7 + 4) = 0;
    return arg0;
}

void *fn_80225458(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_80225B14();
    s32 *e;
    if (fn_80225B14(arg0, arg1)) {
        e = (s32 *)(M2C_FIELD(arg0, char **, 0x1C) + arg1 * 8);
        if (arg2 == -1 || e[0] == arg2) {
            return (void *) e[1];
        }
    }
    return 0;
}

s32 fn_802254C0(void *arg0, s32 arg1) {
    s32 fn_80225B14();
    s32 var_r31;

    var_r31 = arg1;
    if (fn_80225B14() == 0) {
        var_r31 = 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x40) + (var_r31 * 0x10);
}

s32 fn_80225508(void) {
    void *fn_802D1FC8(s32);
    extern s32 lbl_80494670;
    if ((s32) lbl_80494670 == 0) {
        lbl_80494670 = (s32) fn_80224E5C(fn_802D1FC8(0x50));
    }
    return lbl_80494670;
}

extern s32 lbl_80494674;
s32 fn_80225544(void) {
    return lbl_80494674;
}

extern s32 lbl_80494678;
s32 fn_8022554C(void) {
    return lbl_80494678;
}

s32 fn_80225554(s32 *self) {
    return *self;
}

s32 fn_80225B14(s32 *arg0, s32 arg1) {
    if (arg0[0] == 0) {
        return 0;
    }
    if (arg1 < 0 || arg1 >= arg0[1] || (u32)arg1 > 7) {
        return 0;
    }
    return 1;
}

void *fn_80225DB8(void *arg0) {
    volatile s32 z[25];
    char *p0 = (char *)arg0 + 0x8;
    char *p1 = (char *)arg0 + 0x14;
    char *p2 = (char *)arg0 + 0x1C;
    char *p3 = (char *)arg0 + 0x28;
    char *p4 = (char *)arg0 + 0x30;
    char *p5 = (char *)arg0 + 0x3C;
    char *p6 = (char *)arg0 + 0x44;
    char *p7 = (char *)arg0 + 0x4C;
    char *p8 = (char *)arg0 + 0x54;
    char *p9 = (char *)arg0 + 0x5C;
    char *p10 = (char *)arg0 + 0x64;
    char *p11 = (char *)arg0 + 0x6C;
    char *p12 = (char *)arg0 + 0x74;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    *(volatile s32 *)(p0 + 4) = 0;
    M2C_FIELD(arg0, u8 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    *(volatile s32 *)(p1 + 4) = 0;
    *(volatile s32 *)(p2 + 4) = 0;
    *(volatile u8 *)(p1 + 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    *(volatile s32 *)(p3 + 4) = 0;
    *(volatile s32 *)(p4 + 4) = 0;
    *(volatile u8 *)(p3 + 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    *(volatile s32 *)(p5 + 4) = 0;
    *(volatile s32 *)(p6 + 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    *(volatile s32 *)(p7 + 4) = 0;
    *(volatile s32 *)(p8 + 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    *(volatile s32 *)(p9 + 4) = 0;
    *(volatile s32 *)(p10 + 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    *(volatile s32 *)(p11 + 4) = 0;
    *(volatile s32 *)(p12 + 4) = 0;
    return arg0;
}

void *fn_80229F24(void *self, s32 i) {
    typedef struct { u8 pad[0x38]; } Elem;
    Elem *begin = M2C_FIELD(self, Elem **, 0x6C);
    if ((u32)i < (u32)(M2C_FIELD(self, Elem **, 0x70) - begin)) {
        return &begin[i];
    }
    return 0;
}

s32 fn_80229F5C(void *arg0) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x70) - M2C_FIELD(arg0, s32 *, 0x6C)) * 0xB6DB6DB7) >> 3;
}

void fn_8022A150(void) {
    s32 fn_80014EE0(void);
    void fn_80014F24(s32, s32, s32);
    s32 fn_80225508(void);
    void fn_80225304(void);
    fn_80014F24(fn_80014EE0(), 0, 0);
    fn_80014F24(fn_80014EE0(), 1, 0);
    fn_80225508();
    fn_80225304();
}

void fn_8022A304(void *out, void *obj) {
    typedef struct { s8 x; s8 y; s8 z; } Tile;
    typedef struct { f32 x; f32 y; f32 z; } Pos;
    extern f32 lbl_803EAC64[];
    void fn_80105400(f32 *, s8 *);
    void fn_801055FC(void *, s32);
    Pos pos;
    Tile tile;

    if (obj) {
        u8 *vt = *(u8 **)((u8 *)obj + 4);
        tile = (*(Tile (**)(void *))(vt + 0x31C))((u8 *)obj + *(s16 *)(vt + 0x318));
        fn_80105400((f32 *)&pos, (s8 *)&tile);
        *(Pos *)out = pos;
        fn_801055FC(&tile, 2);
        ((Pos *)out)->z = lbl_803EAC64[0];
    }
}

void *fn_8022ADD8(void *out, s32 arg1) {
    typedef struct { f32 x; f32 y; } Vec2;
    extern u8 *lbl_8041FA38[];
    void fn_8022ACE0(s32 *, s32 *, s32);
    Vec2 v;
    s32 a;
    s32 b;

    fn_8022ACE0(&a, &b, arg1);
    v.x = a;
    v.y = b;
    ((Vec2 *)out)->y = v.y + *(f32 *)(lbl_8041FA38[0] + 0x68);
    ((Vec2 *)out)->x = v.x + *(f32 *)(lbl_8041FA38[0] + 0x64);
    return out;
}

s32 fn_8022B3B4(s32 arg0) {
    extern u8 *lbl_80496668;
    extern s32 fn_8015125C(s32, s32);
    char *obj = (char *)lbl_80496668;
    char *vt = *(char **)obj;
    s32 *r = (*(s32 *(**)(void *, s32))(vt + 0x94))(obj + *(s16 *)(vt + 0x90), arg0);
    if (r == 0) {
        return 0;
    }
    return fn_8015125C(*r, 10);
}

s32 fn_8022B50C(s32 arg0) {
    extern s32 fn_80225508(void);
    extern void *fn_80225458(s32, s32, s32);
    extern s32 fn_8008C46C(void *, s32);
    s32 ret = 0;
    u8 *p = fn_80225458(fn_80225508(), arg0, 0);
    if (p != 0) {
        ret = fn_8008C46C(p + 0x5C, arg0);
    }
    return ret;
}

s32 fn_8022B564(u32 arg0) {
    extern s32 lbl_804966A4[2];
    s32 ret = 0;
    if (arg0 <= 1 && lbl_804966A4[arg0] != 0) {
        ret = lbl_804966A4[arg0];
    }
    return ret;
}

void fn_8022B75C(s32 arg0, s32 arg1) {
    extern void *fn_8022B40C(s32);
    extern void fn_8022B684(s32, s32, void *);
    s32 *obj;
    s32 v;
    u8 buf[8];

    obj = fn_8022B40C(arg0);
    v = 0;
    if (obj != 0) {
        v = obj[1];
    }
    fn_8022B684(v, arg1, buf);
}

extern u8 *lbl_80496654;
extern void fn_801910C8(void *, s32, u16 **, void *, void *, void *);
s32 fn_8022CC90(s32 arg0) {
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

void fn_8022D168(s32 arg0) {
    extern void fn_80232298(s32, s32);
    fn_80232298(fn_8022554C(), arg0);
}

s32 fn_8022D19C(s32 arg0) {
    extern s32 fn_800120DC(s32);
    extern struct { u8 pad[0x160]; s32 v[1]; } lbl_8041F94C;
    s32 p = lbl_8041F94C.v[arg0];
    if (p != 0 && fn_800120DC(p) != 0) {
        return 1;
    }
    return 0;
}

s32 fn_8022D1E8(s32 arg0) {
    extern void fn_80011F24(s32, s32);
    extern s32 fn_80014EE0(void);
    extern s32 fn_80014F30(s32, s32);
    extern void *fn_80224E3C(s32, s32);
    void *item;
    s32 obj;

    item = fn_80224E3C(fn_80225544(), arg0);
    if (item == 0) {
        return 0;
    }
    obj = fn_80014F30(fn_80014EE0(), arg0);
    if (obj == 0) {
        return 0;
    }
    fn_80011F24(obj, fn_80224A28(item));
    return 1;
}

s32 fn_8022D25C(s32 arg0) {
    extern void fn_80011F38(s32);
    extern s32 fn_80014EE0(void);
    extern s32 fn_80014F30(s32, s32);
    extern void *fn_80224E3C(s32, s32);
    s32 obj;

    if (fn_80224E3C(fn_80225544(), arg0) == 0) {
        return 0;
    }
    obj = fn_80014F30(fn_80014EE0(), arg0);
    if (obj == 0) {
        return 0;
    }
    fn_80011F38(obj);
    return 1;
}

void *fn_80399BE8(u32);
void fn_803997AC(void *, u32);
void fn_8022D2C4(s32 key, INVCountVec *v) {
    u32 found = 0;
    u32 i;

    for (i = 0; i < (u32)(v->finish - v->start); i++) {
        if (v->start[i].key == key) {
            v->start[i].count++;
            found = 1;
            break;
        }
    }
    if (found == 0) {
        INVCountPair tmp;
        tmp.key = key;
        tmp.count = 1;
        INVCount_push_back(v, &tmp);
    }
}

void fn_8022D8C4(void *arg0) {
    M2C_UNK fn_802D20E8(s32);
    fn_802D20E8(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0) = 0;
    fn_802D20E8(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_802320F8(void);
void fn_8022DA50(void) {
    fn_802320F8();
}

void fn_8022DA70(void *arg0, s32 *arg1) {
    void fn_8002B86C(s32, void *);
    extern s32 lbl_8041FA38[];
    void *fn_80229F24(void *, s32);
    void *fn_80232298(void *);
    void *temp_r3;

    temp_r3 = fn_80229F24(fn_80232298(arg0), 0);
    M2C_FIELD(temp_r3, s32 *, 0x18) = *arg1;
    fn_8002B86C(lbl_8041FA38[0], temp_r3);
}

s32 fn_8022E7B4(void) {
    M2C_UNK fn_80226070(s32, M2C_UNK);
    M2C_UNK fn_802273C0(s32, M2C_UNK);
    s32 fn_802311B4();
    s32 temp_r3;
    s32 var_r3;

    temp_r3 = fn_802311B4();
    var_r3 = 0;
    if (temp_r3 != 0) {
        fn_80226070(temp_r3, 0xD5D17E48);
        fn_80226070(temp_r3, 0xC167C449);
        fn_80226070(temp_r3, 0x6591A8D0);
        fn_802273C0(temp_r3, 0x84853612);
        fn_802273C0(temp_r3, 0x3B494D6C);
        fn_802273C0(temp_r3, 0xEA1905EB);
        var_r3 = 1;
    }
    return var_r3;
}

void fn_8022E84C(void) {
    fn_802320F8();
}

void fn_8002B86C(s32, void *);
extern s32 lbl_8041FA38[];
void fn_8022E86C(void **arg0, s32 *arg1) {
    M2C_FIELD(arg0[*arg1], s32 *, 0x18) = *arg1;
    M2C_FIELD(arg0[*arg1], void **, 0x8) = (u8 *)arg1 + 8;
    fn_8002B86C(lbl_8041FA38[0], arg0[*arg1]);
}

void fn_8022F404(void) {
    fn_802320F8();
}

void fn_8022F424(void **arg0, s32 *arg1) {
    M2C_FIELD(arg0[*arg1], s32 *, 0x18) = *arg1;
    M2C_FIELD(arg0[*arg1], void **, 0x8) = (u8 *)arg1 + 0x68;
    fn_8002B86C(lbl_8041FA38[0], arg0[*arg1]);
}

s32 fn_802303F0(void) {
    M2C_UNK fn_80226070(s32, M2C_UNK);
    s32 fn_802311B4();
    s32 temp_r3;
    s32 var_r3;

    temp_r3 = fn_802311B4();
    var_r3 = 0;
    if (temp_r3 != 0) {
        fn_80226070(temp_r3, 0x4EBB9687);
        fn_80226070(temp_r3, 0x8BC514D2);
        var_r3 = 1;
    }
    return var_r3;
}

void fn_80230448(void) {
    fn_802320F8();
}

void fn_80230468(void **arg0, s32 *arg1) {
    M2C_FIELD(arg0[*arg1], s32 *, 0x18) = *arg1;
    M2C_FIELD(arg0[*arg1], void **, 0x8) = (u8 *)arg1 + 8;
    fn_8002B86C(lbl_8041FA38[0], arg0[*arg1]);
}

s32 fn_80230708(void) {
    return 1;
}

s32 fn_80230710(void) {
    return 1;
}

void fn_80230718(void **arg0, s32 *arg1) {
    M2C_FIELD(arg0[*arg1], s32 *, 0x18) = *arg1;
    M2C_FIELD(arg0[*arg1], void **, 0x8) = (u8 *)arg1 + 8;
    fn_8002B86C(lbl_8041FA38[0], arg0[*arg1]);
}

void fn_802323C4(void) {
    M2C_UNK fn_80232338(M2C_UNK, M2C_UNK);
    fn_80232338(1, 0xFFFF);
}

