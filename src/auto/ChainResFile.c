/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8040D690[];
extern void fn_802D20E8(void *);

typedef struct ChainEntry {
    void *obj;
    u8 pad[0x14];
} ChainEntry;

typedef struct ChainVecAlloc {
    s32 unk0;
    s32 cap;
} ChainVecAlloc;

typedef struct ChainVec {
    s32 begin;
    s32 end;
    ChainVecAlloc alloc;
    s32 unk10;
    s32 unk14;
} ChainVec;

typedef struct S32Pair {
    s32 a;
    s32 b;
} S32Pair;

typedef struct ChainKeyEntry {
    s32 unk0;
    s32 unk4;
    s16 unk8;
} ChainKeyEntry;

typedef struct CRB3 {
    u8 a, b, c;
} CRB3;

typedef struct CRF3 {
    f32 x, y, z;
} CRF3;

static inline void CRF3_set(CRF3 *r, f32 x, f32 y, f32 z) {
    r->x = x;
    r->y = y;
    r->z = z;
}

static inline void CRB3_setv(CRB3 *r, f32 *v) {
    r->a = (s32)v[0];
    r->b = (s32)v[1];
    r->c = 1;
}

static inline void CRF3_setv(CRF3 *r, s8 *v) {
    CRF3_set(r, v[0], v[1], v[2]);
}

static inline void ChainRes_Unlink(void **p, void *self) {
    while (*p != NULL) {
        if (*p == self) {
            *p = *(void **)self;
            return;
        }
        p = (void **)*p;
    }
}

typedef struct ChainResHandle {
    s32 value;
} ChainResHandle;

static inline S32Pair S32Pair_Make(s32 a, s32 b) {
    S32Pair r;
    r.a = a;
    r.b = b;
    return r;
}

extern void fn_803997AC(void *, u32);

static inline void ChainVecAlloc_Init(ChainVecAlloc *a) {
    a->cap = 0;
}

static inline void ChainVec_Init(ChainVec *v) {
    v->begin = 0;
    v->end = 0;
    ChainVecAlloc_Init(&v->alloc);
}

static inline s32 ChainVec_Size(ChainVec *v) {
    return (v->end - v->begin) >> 2;
}

static inline void ChainVec_Dealloc(void *p, s32 end) {
    u32 size = (u32)(end - (s32)p) & ~3;
    if (size > 0x80) {
        fn_802D20E8(p);
    } else {
        fn_803997AC(p, size);
    }
}

static inline void ChainVec_Free(ChainVec *v) {
    void *p = (void *)v->begin;
    if (p != NULL) {
        ChainVec_Dealloc(p, v->alloc.cap);
    }
}

typedef struct ChainSlot {
    void *obj;
    s32 begin;
    s32 end;
    ChainVecAlloc alloc;
    s32 flag;
} ChainSlot;

static inline void ChainSlot_DestroyRange(ChainSlot *first, ChainSlot *last) {
    while (first != last) {
        last--;
        ChainVec_Free((ChainVec *)&last->begin);
    }
}
void fn_801020E0(void **self, s32 flags) {
    *self = lbl_8040D690;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void *fn_80102114(void) {
    extern void *fn_802D0AB8(void *);
    extern void *fn_802D197C(void *heap, u32 size, u32 align);
    extern void *fn_802D0B3C(void);
    extern void *fn_802DC9F4(void *heap, u32 size, s32 arg2, s32 arg3);
    extern void fn_80248488(void *, s32, s32);
    extern u8 lbl_8040D608[];
    void *heap;
    void *p;
    void **r;

    heap = ((void *(*)(void))fn_802D0AB8)();
    p = fn_802D197C(heap, 0x20, 4);
    if (p == NULL) {
        p = fn_802DC9F4(heap, 0x20, 1, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            r = fn_802DC9F4(fn_802D0B3C(), 0x20, 1, 0);
            goto done;
        }
    } else {
        fn_80248488(p, 0, 0x20);
    }
    r = p;
done:
    *r = lbl_8040D608;
    return r;
}

void fn_801021BC(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

ChainKeyEntry *fn_801021FC(void **self, s32 id, s32 key) {
    ChainKeyEntry *arr = (ChainKeyEntry *)*self;
    s32 n = 0;
    ChainKeyEntry *r;
    ChainKeyEntry *e;
    s32 i;
    if (arr != NULL) {
        n = ((s32 *)arr)[-1];
    }
    r = NULL;
    e = arr;
    if (n == 0) {
        e = NULL;
    }
    i = 0;
    goto cond;
    for (;;) {
        i++;
        e++;
    cond:
        if (i >= n) {
            break;
        }
        if (e->unk4 == key && e->unk8 == id) {
            r = e;
            break;
        }
    }
    return r;
}

void fn_80102354(void *arg0) {
    extern void fn_8031EA2C(s32);
    s32 *self = arg0;
    if (self[1] != 0) {
        fn_8031EA2C(self[1]);
        self[1] = 0;
        self[2] = 0;
        self[3] = 0;
        self[4] = 0;
    }
}

s32 *fn_801023A0(void *self, s32 key) {
    char *t = M2C_FIELD(self, char **, 8);
    u32 n = M2C_FIELD(t, u32 *, 0xC);
    s32 *e = M2C_FIELD(t, s32 **, 4);
    s32 *r = NULL;
    u32 i;
    for (i = 0; i < n; i++, e += 5) {
        if (*e == key) {
            r = e;
            break;
        }
    }
    return r;
}

s32 fn_801023F4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0xC);
}

s32 fn_80102400(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4) + (arg1 * 0x14);
}

s32 fn_80102414(void *arg0, s32 arg1) {
    return (s32) ((arg1 - M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4)) * 0xCCCCCCCD) >> 2;
}

void *fn_801024F8(void *self, s32 i) {
    s32 *arr = *M2C_FIELD(self, s32 ***, 0xC);
    s32 n = 0;
    if (arr != NULL) {
        n = arr[-1];
    }
    if (i >= n) {
        return (char *)self + 0x1C;
    }
    return &arr[i];
}

void *fn_8010280C(void *self, void *arg1, s32 arg2) {
    if (arg2 == 0 || *({ u16 **p = M2C_FIELD(arg1, u16 ***, 0x5C); u16 *s = NULL; if (p != NULL) s = *p; s; }) == 0) {
        return (char *)arg1 + 0x58;
    }
    return (char *)arg1 + 0x5C;
}

void *fn_80102844(void *self, void *arg1, s32 arg2) {
    if (arg2 == 0 || *({ u16 **p = M2C_FIELD(arg1, u16 ***, 0x64); u16 *s = NULL; if (p != NULL) s = *p; s; }) == 0) {
        return (char *)arg1 + 0x60;
    }
    return (char *)arg1 + 0x64;
}

s32 fn_8010287C(void *self, void *arg1) {
    return (M2C_FIELD(arg1, s32 *, 0x48) + 0x17) % 24;
}

s32 fn_801028A8(void *self, void *arg1) {
    return M2C_FIELD(arg1, s32 *, 0x68);
}

void **fn_801028B0(void **self) {
    *self = lbl_8040D690;
    return self;
}

extern u8 lbl_8040D608[];
void **fn_801028C4(void **self) {
    *self = lbl_8040D608;
    return self;
}

void fn_801028D8(void **self, s32 flags) {
    extern void fn_80102354(void *);
    extern void fn_801029D8(void *);
    *self = lbl_8040D608;
    fn_80102354(self);
    fn_801020E0(self, 0);
    if (flags & 1) {
        fn_801029D8(self);
    }
}

void *fn_80102930(u32 size) {
    extern void *fn_802D0AB8(void *);
    extern void *fn_802D197C(void *heap, u32 size, u32 align);
    extern void *fn_802D0B3C(void);
    extern void *fn_802DC9F4(void *heap, u32 size, s32 arg2, s32 arg3);
    extern void fn_80248488(void *, s32, s32);
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DC9F4(heap, size, 1, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC9F4(fn_802D0B3C(), size, 1, 0);
        }
    } else {
        fn_80248488(p, 0, size);
    }
    return p;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_801029D8(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void *fn_80102A0C(void) {
    void *fn_802D1FC8(s32);
    extern char lbl_8040D718[];
    extern char lbl_804943F8[4];
    void *p = fn_802D1FC8(0x10);
    M2C_FIELD(p, char **, 0) = lbl_8040D718;
    M2C_FIELD(p, char **, 4) = lbl_804943F8;
    M2C_FIELD(p, char **, 8) = lbl_804943F8;
    M2C_FIELD(p, char **, 0xC) = lbl_804943F8;
    return p;
}

void fn_80102A50(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

s32 fn_80102A90(void *self, void *arg1, s32 key) {
    typedef struct {
        s32 key;
        s32 unk4;
        s32 unk8;
        s32 unkC;
    } SearchEntry;
    SearchEntry *fn_803A097C(SearchEntry *lo, SearchEntry *hi, s32 key);
    SearchEntry *tbl = M2C_FIELD(M2C_FIELD(arg1, void **, 0x54), SearchEntry **, 0x1C);
    SearchEntry *e;
    s32 hi = 0;

    if (tbl != NULL) {
        hi = ((s32 *)tbl)[-1];
        hi = (s32)&tbl[hi];
    }
    e = fn_803A097C(tbl, (SearchEntry *)hi, key);
    if (e != NULL) {
        M2C_FIELD(self, s32 *, 4) = e->unk4;
        M2C_FIELD(self, s32 *, 8) = e->unk8;
        M2C_FIELD(self, s32 *, 0xC) = e->unkC;
        return 0;
    }
    return -1;
}

void *fn_80102B08(void *arg0) {
    extern char lbl_8040D718[];
    extern char lbl_804943F8[4];
    M2C_FIELD(arg0, char **, 0) = lbl_8040D718;
    M2C_FIELD(arg0, char **, 4) = lbl_804943F8;
    M2C_FIELD(arg0, char **, 8) = lbl_804943F8;
    M2C_FIELD(arg0, char **, 0xC) = lbl_804943F8;
    return arg0;
}

ChainResHandle fn_80102B2C(void *arg0) {
    ChainResHandle h;
    h.value = M2C_FIELD(arg0, s32 *, 4);
    return h;
}

ChainResHandle fn_80102B3C(void *arg0) {
    ChainResHandle h;
    h.value = M2C_FIELD(arg0, s32 *, 8);
    return h;
}

ChainResHandle fn_80102B4C(void *arg0) {
    ChainResHandle h;
    h.value = M2C_FIELD(arg0, s32 *, 0xC);
    return h;
}

void *fn_80102B5C(void *self) {
    extern void fn_8018F8C0(void *);
    extern u8 lbl_8040D788[];
    ChainSlot *e;
    s32 i;
    fn_8018F8C0(self);
    M2C_FIELD(self, u8 **, 0x10) = lbl_8040D788;
    e = (ChainSlot *)((char *)self + 0x14);
    for (i = 8; i != 0; i--, e++) {
        S32Pair p = S32Pair_Make(0, 0);
        e->obj = NULL;
        e->begin = p.a;
        e->end = p.b;
        ChainVecAlloc_Init(&e->alloc);
        e->flag = 1;
    }
    return self;
}

void fn_80102BC8(void *self, s32 flags) {
    extern void fn_8018F914(void *, s32);
    extern u8 lbl_8040D788[];
    ChainSlot *begin;
    M2C_FIELD(self, u8 **, 0x10) = lbl_8040D788;
    begin = (ChainSlot *)((char *)self + 0x14);
    if (begin != NULL) {
        ChainSlot *p = begin + 8;
        if (begin != p) {
            do {
                p--;
                ChainVec_Free((ChainVec *)&p->begin);
            } while (begin != p);
        }
    }
    fn_8018F914(self, flags);
}

void fn_80102C60(void *self, void *obj) {
    ChainEntry *e = (ChainEntry *)((char *)self + 0x14);
    s32 i;
    for (i = 0; i < 8; i++) {
        if (e[i].obj == NULL) {
            e[i].obj = obj;
            *(s32 *)(e[i].pad + 4) = *(s32 *)(e[i].pad + 0);
            *(s32 *)(e[i].pad + 0x10) = 1;
            return;
        }
    }
}

s16 fn_80102D70(void *self) {
    ChainEntry *e = (ChainEntry *)((char *)self + 0x14);
    s32 i;
    s32 count = 0;
    for (i = 0; i < 8 && e[count].obj != NULL; i++) {
        count++;
    }
    return count;
}

void *fn_80102DAC(void *self, s32 idx) {
    s32 count = 0;
    s32 i = 0;
    while (((ChainEntry *)((char *)self + 0x14))[i].obj != NULL) {
        if (count == idx) {
            return ((ChainEntry *)((char *)self + 0x14))[i].obj;
        }
        i++;
        count++;
        if (i > 7) {
            return NULL;
        }
    }
    return NULL;
}

s32 fn_80102E0C(void *self) {
    extern void fn_8018FA84(void *, s32);
    ChainEntry *e;
    s32 i;
    s32 ret;
    s32 r;

    ret = 0;
    fn_8018FA84(self, 0);
    e = (ChainEntry *)((char *)self + 0x14);
    for (i = 0; i < 8 && e[i].obj != NULL; i++) {
        void *o = e[i].obj;
        char *vt = *(char **)((char *)o + 0x10);
        r = (*(s32 (**)(void *))(vt + 0x44))((char *)o + *(s16 *)(vt + 0x40));
        if (r != 0) {
            ret = r;
        }
    }
    return ret;
}

s32 fn_80102EA0(void *self) {
    extern void fn_8018FA84(void *, s32);
    ChainEntry *e;
    s32 i;
    s32 ret;
    s32 r;

    fn_8018FA84(self, 0);
    ret = 0;
    i = 0;
    e = (ChainEntry *)((char *)self + 0x14);
    while (e[i].obj != NULL) {
        void *o = e[i].obj;
        char *vt = *(char **)((char *)o + 0x10);
        r = (*(s32 (**)(void *))(vt + 0x34))((char *)o + *(s16 *)(vt + 0x30));
        if (r != 0) {
            ret = r;
        }
        i++;
        if (i > 7) {
            break;
        }
    }
    return ret;
}

s32 fn_80102F34(void *self) {
    extern void fn_8018FA84(void *, s32);
    ChainEntry *e;
    s32 i;
    s32 ret;
    s32 r;

    fn_8018FA84(self, 0);
    ret = 0;
    e = (ChainEntry *)((char *)self + 0x14);
    for (i = 0; i < 8 && e[i].obj != NULL; i++) {
        void *o = e[i].obj;
        char *vt = *(char **)((char *)o + 0x10);
        r = (*(s32 (**)(void *))(vt + 0x3C))((char *)o + *(s16 *)(vt + 0x38));
        if (r != 0) {
            ret = r;
        }
    }
    return ret;
}

s16 fn_8010328C(void *self) {
    extern void fn_8018FA84(void *, s32);
    extern void fn_80103320(void *, ChainVec *);
    ChainVec v;
    s16 count;

    fn_8018FA84(self, 0);
    ChainVec_Init(&v);
    fn_80103320(self, &v);
    count = ChainVec_Size(&v);
    ChainVec_Free(&v);
    return count;
}

s16 fn_80103678(void *self, s32 arg1) {
    extern void fn_8018FA84(void *, s32);
    extern s32 fn_8018FA7C(void *);
    ChainEntry *e;
    s32 total;
    s32 i;

    fn_8018FA84(self, 0);
    total = 0;
    e = (ChainEntry *)((char *)self + 0x14);
    for (i = 0; i < 8 && e->obj != NULL; i++, e++) {
        void *o = e->obj;
        char *vt = *(char **)((char *)o + 0x10);
        total += (*(s32 (**)(void *, s32))(vt + 0x7C))((char *)o + *(s16 *)(vt + 0x78), arg1);
        if (fn_8018FA7C(e->obj) != 0) {
            fn_8018FA84(self, fn_8018FA7C(e->obj));
            return 0;
        }
    }
    return total;
}

void fn_80103810(void *obj, s32 arg1, s32 arg2, s32 arg3) {
    char *vt = *(char **)((char *)obj + 0x10);
    (*(void (**)(void *, s32, s32, s32, s32))(vt + 0x9C))((char *)obj + *(s16 *)(vt + 0x98), arg1, arg2, 0, arg3);
}

s32 fn_80103C94(void *self, s32 arg1) {
    extern void fn_8018FA84(void *, s32);
    extern s32 fn_8018FA7C(void *);
    s32 i;
    ChainEntry *e;
    s32 ret;

    fn_8018FA84(self, 0);
    i = 0;
    fn_8018FA84(self, -0x63);
    e = (ChainEntry *)((char *)self + 0x14);
    for (e += i; i < 8 && e->obj != NULL; i++, e++) {
        void *o = e->obj;
        char *vt = *(char **)((char *)o + 0x10);
        ret = (*(s32 (**)(void *, s32))(vt + 0xEC))((char *)o + *(s16 *)(vt + 0xE8), arg1);
        if (fn_8018FA7C(e->obj) == 0) {
            fn_8018FA84(self, 0);
            return ret;
        }
    }
    return 0;
}

s32 fn_80103ED8(char *self, s32 arg1) {
    extern void fn_8018FA84(void *, s32);
    char *obj;
    s32 ret;
    fn_8018FA84(self, 0);
    obj = *(char **)(self + 0x14);
    if (obj != 0) {
        char *vt = *(char **)(obj + 0x10);
        ret = (*(s32 (**)(void *, s32))(vt + 0xD4))(obj + *(s16 *)(vt + 0xD0), arg1);
    } else {
        ret = 0;
    }
    return ret;
}

void fn_80103F3C(void *self, s32 arg1) {
    extern void fn_8018FA84(void *, s32);
    extern s32 fn_8018FA7C(void *);
    s32 i;
    ChainEntry *e;

    fn_8018FA84(self, 0);
    i = 0;
    fn_8018FA84(self, -0x63);
    e = (ChainEntry *)((char *)self + 0x14);
    while (e[i].obj != NULL) {
        void *o = e[i].obj;
        char *vt = *(char **)((char *)o + 0x10);
        (*(void (**)(void *, s32))(vt + 0xDC))((char *)o + *(s16 *)(vt + 0xD8), arg1);
        fn_8018FA84(self, fn_8018FA7C(e[i].obj));
        if (fn_8018FA7C(e[i].obj) == 0) {
            return;
        }
        i++;
        if (i > 7) {
            return;
        }
    }
}

void fn_80103FF8(void *self) {
    extern void fn_8018FA84(void *, s32);
    fn_8018FA84(self, -0x5F);
}

void fn_801040E0(char *self, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    char *vt = *(char **)(self + 0x10);
    (*(void (**)(void *, s32, s32, s32, s32, s32, s32))(vt + 0x104))(self + *(s16 *)(vt + 0x100), a1, a2, a3, a4, 0, a5);
}

s32 fn_80104A5C(s32 arg0, s32 arg1) {
    s32 var_r0;

    if (arg1 != 0xF) {
        var_r0 = 0;
        if (arg1 == 0x10) {
            var_r0 = arg0;
        }
        return var_r0;
    }
    return arg0;
}

void fn_80104BD0(void) {
    extern u8 *lbl_8049665C;
    u8 *obj = lbl_8049665C;
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *, u32))(vt + 0x84))(obj + *(s16 *)(vt + 0x80), 0xF3AAA62F);
}

void *fn_80105120(void *self) {
    extern void *lbl_804943FC;
    extern s32 lbl_80494400;
    extern u8 lbl_8040D8B8[];
    void *head = lbl_804943FC;

    M2C_FIELD(self, void **, 0xC) = lbl_8040D8B8;
    M2C_FIELD(self, s32 *, 0x4) = 0;
    M2C_FIELD(self, void **, 0x0) = head;
    M2C_FIELD(self, s32 *, 0x8) = lbl_80494400++;
    lbl_804943FC = self;
    return self;
}

void fn_8010515C(void *self, s32 flags) {
    extern void *lbl_804943FC;
    extern u8 lbl_8040D8B8[];

    M2C_FIELD(self, void **, 0xC) = lbl_8040D8B8;
    ChainRes_Unlink(&lbl_804943FC, self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_801051C0(void) {
    return 0;
}

s32 fn_801051C8(s32 arg0, s32 arg1) {
    extern void *lbl_804943FC;
    extern void *lbl_80496660;
    s32 var_r28;
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;
    void *var_r11;

    var_r11 = lbl_804943FC;
    var_r28 = 0;
    if (var_r11 != NULL) {
        do {
            temp_r9 = M2C_FIELD(var_r11, void **, 0xC);
            temp_r31 = M2C_FIELD(var_r11, void **, 0);
            if (M2C_FIELD(temp_r9, s32 (**)(void *, s32, s32), 0x14)(var_r11 + M2C_FIELD(temp_r9, s16 *, 0x10), arg0, arg1) != 0) {
                var_r28 = 1;
            }
            var_r11 = temp_r31;
        } while (var_r11 != NULL);
    }
    if (arg0 == 0xD9) {
        temp_r9_2 = M2C_FIELD(lbl_80496660, void **, 0x3A4);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK), 0x1C)(lbl_80496660 + M2C_FIELD(temp_r9_2, s16 *, 0x18), 0, 0x27);
    }
    return var_r28;
}

s32 fn_8010526C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern void *lbl_804943FC;
    s32 ret;
    void *node;
    void *next;
    void *vt;

    node = lbl_804943FC;
    ret = 0;
    while (node != NULL) {
        next = M2C_FIELD(node, void **, 0x0);
        if (M2C_FIELD(node, s32 *, 0x4) == arg0) {
            vt = M2C_FIELD(node, void **, 0xC);
            if (M2C_FIELD(vt, s32 (**)(void *, s32, s32), 0x14)((char *)node + M2C_FIELD(vt, s16 *, 0x10), arg1, arg2) != 0) {
                ret = 1;
                if (arg3 != 0) {
                    return 1;
                }
            }
        }
        node = next;
    }
    return ret;
}

s32 fn_80105314(s32 *self) {
    return self[1];
}

s32 fn_8010531C(s32 *self) {
    return *self;
}

u8 *fn_80105324(u8 *out, f32 *in) {
    CRB3_setv((CRB3 *)out, in);
    return out;
}

f32 *fn_80105368(f32 *out, s8 *in) {
    CRF3_setv((CRF3 *)out, in);
    return out;
}

void fn_80105400(f32 *out, s8 *in) {
    out[0] = in[1];
    out[1] = in[0];
    out[2] = in[2];
}

f32 fn_80105498(u8 *arg0) {
    return (f32) (f64) (s8) *arg0;
}

f32 fn_801054D0(void *arg0) {
    return (f32) (f64) (s8) M2C_FIELD(arg0, u8 *, 1);
}

void fn_80105508(void *arg0) {
    M2C_FIELD(arg0, s8 *, 2) = 0;
}

s8 *fn_80105514(s8 *self, s8 *other) {
    self[0] = other[0];
    self[1] = other[1];
    self[2] = other[2];
    return self;
}

s8 *fn_80105534(s8 *self, s32 *src, s8 arg2) {
    self[0] = src[1] >> 4;
    self[1] = src[0] >> 4;
    self[2] = arg2;
    return self;
}

s8 *fn_80105558(s8 *self, u8 *src, s8 arg2) {
    self[0] = src[3];
    self[1] = src[7];
    self[2] = arg2;
    return self;
}

void fn_80105574(s8 *self, s32 a, s32 b, s8 c) {
    self[0] = a;
    self[1] = b;
    if (self[0] != a) {
        self[0] = 0;
    }
    if (self[1] != b) {
        self[1] = 0;
    }
    self[2] = c;
}

s8 *fn_801055B0(s8 *self, s32 idx, s8 c) {
    extern s8 lbl_80434B78[];
    s8 *fn_80105624(s8 *self, s8 *other);
    fn_80105624(self, &lbl_80434B78[idx * 3]);
    self[2] = c;
    return self;
}

void fn_801055FC(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s8 *fn_80105624(s8 *self, s8 *other) {
    self[0] = other[0];
    self[1] = other[1];
    self[2] = other[2];
    return self;
}

s32 fn_80105644(void *arg0, void *arg1) {
    s32 var_r11;

    var_r11 = 0;
    if (((s32) M2C_FIELD(arg1, u8 *, 0) == (s32) M2C_FIELD(arg0, u8 *, 0)) && ((s32) M2C_FIELD(arg1, u8 *, 1) == (s32) M2C_FIELD(arg0, u8 *, 1))) {
        var_r11 = 1;
    }
    return var_r11;
}

s32 fn_80105674(void *arg0, void *arg1) {
    s32 var_r11;

    var_r11 = 0;
    if (((s32) M2C_FIELD(arg1, u8 *, 0) != (s32) M2C_FIELD(arg0, u8 *, 0)) || ((s32) M2C_FIELD(arg1, u8 *, 1) != (s32) M2C_FIELD(arg0, u8 *, 1))) {
        var_r11 = 1;
    }
    return var_r11;
}

s32 fn_801056A4(void *arg0, void *arg1) {
    s32 var_r11;
    u8 temp_r0;
    u8 temp_r9;

    temp_r9 = M2C_FIELD(arg0, u8 *, 0);
    var_r11 = 0;
    temp_r0 = M2C_FIELD(arg1, u8 *, 0);
    if (((s8) temp_r9 < (s8) temp_r0) || (((s8) temp_r9 == (s8) temp_r0) && ((s8) M2C_FIELD(arg0, u8 *, 1) < (s8) M2C_FIELD(arg1, u8 *, 1)))) {
        var_r11 = 1;
    }
    return var_r11;
}

s8 *fn_801056E8(s8 *self, s8 *src) {
    self[0] += src[0];
    self[1] += src[1];
    return self;
}

s8 *fn_80105710(s8 *self, s8 *src) {
    self[0] -= src[0];
    self[1] -= src[1];
    return self;
}

u8 *fn_80105738(u8 *self, s32 k) {
    self[0] *= k;
    self[1] *= k;
    return self;
}

s8 *fn_80105758(s8 *self, s8 *src, s32 k) {
    fn_80105574(self, k * src[0], k * src[1], src[2]);
    return self;
}

s8 *fn_801057A8(s8 *self, s8 *a, s8 *b) {
    fn_80105574(self, a[0] + b[0], a[1] + b[1], a[2]);
    return self;
}

s8 *fn_80105808(s8 *self, s8 *a, s8 *b) {
    fn_80105574(self, a[0] - b[0], a[1] - b[1], a[2]);
    return self;
}

s8 *fn_80105868(s8 *self, s32 k, s8 *src) {
    fn_80105574(self, k * src[0], k * src[1], src[2]);
    return self;
}

s32 fn_801058BC(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0) + (s8) M2C_FIELD(arg0, u8 *, 1);
}

s32 fn_801058D4(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0) - (s8) M2C_FIELD(arg0, u8 *, 1);
}

s32 fn_801058EC(void *arg0, void *arg1) {
    if (fn_801058BC(arg0) == fn_801058BC(arg1)) {
        return fn_801058D4(arg0) < fn_801058D4(arg1);
    }
    return fn_801058BC(arg0) < fn_801058BC(arg1);
}

s32 fn_80105968(void *arg0, void *arg1) {
    return fn_801058BC(arg0) < fn_801058BC(arg1);
}

s32 fn_801059AC(void *arg0, void *arg1) {
    return fn_801058BC(arg0) > fn_801058BC(arg1);
}

s32 fn_801059F0(void *arg0, void *arg1) {
    return fn_801058D4(arg0) < fn_801058D4(arg1);
}

s32 fn_80105A34(void *arg0, void *arg1) {
    return fn_801058D4(arg0) > fn_801058D4(arg1);
}

s32 fn_80105A78(void *arg0, void *arg1) {
    return (fn_801058BC(arg0) & 1) == (fn_801058BC(arg1) & 1);
}

s32 fn_80105AC4(void *arg0, void *arg1) {
    return (fn_801058D4(arg0) & 1) == (fn_801058D4(arg1) & 1);
}

S32Pair fn_80105B10(s8 *arg1) {
    S32Pair r;
    r.b = arg1[1];
    r.a = arg1[0];
    return r;
}

S32Pair fn_80105B30(s8 *arg1) {
    s32 t[2];
    t[1] = (arg1[0] << 4) | 8;
    t[0] = (arg1[1] << 4) | 8;
    return *(S32Pair *)t;
}

s8 fn_80105B78(u8 *arg0) {
    return (s8) *arg0;
}

s8 fn_80105B84(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 1);
}

void fn_80105B90(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = (s32) (s8) M2C_FIELD(arg0, u8 *, 0);
    *arg2 = (s32) (s8) M2C_FIELD(arg0, u8 *, 1);
}

void fn_80105BAC(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg1 = (s32) (s8) M2C_FIELD(arg0, u8 *, 0);
    *arg2 = (s32) (s8) M2C_FIELD(arg0, u8 *, 1);
    *arg3 = (s32) (s8) M2C_FIELD(arg0, u8 *, 2);
}

s8 fn_80105BD4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    return arg1;
}

s8 fn_80105BE0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 1) = arg1;
    return arg1;
}

void fn_80105BEC(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = arg2;
}

void fn_80105BF8(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = arg2;
    M2C_FIELD(arg0, s8 *, 2) = arg3;
}

s8 fn_80105C08(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 2);
}

void fn_80105C14(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 2) = arg1;
}

void fn_80105C1C(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 2);
}

void fn_80105C28(void) {

}

void fn_80105FB0(void) {
    M2C_UNK fn_80105E78(M2C_UNK, M2C_UNK);
    fn_80105E78(1, 0xFFFF);
}

void fn_80105FDC(void) {
    M2C_UNK fn_80105E78(M2C_UNK, M2C_UNK);
    fn_80105E78(0, 0xFFFF);
}

