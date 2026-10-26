/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    u8 pad0[0x14];
    void *unk14;
    u8 pad18[0x2C - 0x18];
    s32 unk2C[1];
} EIWallPartFlags;


extern u8 lbl_8041CFA8[];

typedef struct {
    s16 delta;
    s16 index;
    void (*pfn)(void *);
} VtblEntry;

typedef struct {
    s16 delta;
    s16 index;
    union {
        void (*pfn)(void *);
        s16 delta2;
    } u;
    char *obj;
} BoundPmf;

typedef struct {
    s32 key;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} SearchEntry;

typedef struct {
    s32 key;
    s32 value;
} SearchEntry8;

typedef struct {
    s32 a, b, c;
} Elem12;

typedef struct {
    s32 a;
    s32 pad[30];
} Elem124;

typedef struct {
    s32 v;
} SortComp;

typedef struct {
    f32 x, y, z, w;
} Vec4f;
void fn_802D8BEC(void *);
void fn_802D20E8(void *);
void fn_8030AD40(void);
void *fn_802D0AB8(void);
void fn_802D1A00(void *, void *);
void fn_80399D4C(s32 **, s32, s32);
void fn_80399F18(s32 *self, s32 n);
void fn_80399F34(void *self);
void fn_80399F48(s32 **self);
void fn_80399F94(s32 **self, s32 flags);
void fn_8039A0D0(s32 *dst, s32 *src, s32 n);
void fn_8039A10C(void *self, s32 n, s32 arg2);
s32 *fn_8039A290(s32 *self, s32 *other);
extern s32 lbl_8049662C;
void fn_8039B1E4(s32 *first, s32 *last, s32 *val, s32 depth, s32 comp);
void fn_8039B3A4(s32 *first, s32 *last, s32 comp);
void fn_8039B450(s32 *first, s32 *last, s32 *val, s32 comp);
void fn_8039B338(s32 *last, s32 val, s32 comp);
void *fn_8024839C(void *dst, const void *src, u32 n);
void fn_8039AE74(s32 *first, s32 hole, s32 len, s32 val, s32 comp);
void fn_8039B050(s32 *first, s32 *middle, s32 *last, s32 *val, s32 comp);
extern u8 lbl_80407128[];
s32 fn_8018E850(void *out, void *obj, s32 arg);
extern char *lbl_80495050;
void fn_800F1A60(s32, s32);
void fn_802CB8D4(void *);
extern u8 lbl_80406CB0[];
extern u8 lbl_80406D08[];
s32 fn_8018E70C(void *out, void *obj, s32 arg0, s32 arg1, s32 arg2);
void fn_8018E8F8(void *out, void *obj, s32 arg);
void fn_8018EA6C(void);
s32 fn_8018E514(void *out, void *obj);
void fn_8039C0B8(void *, s32, s32, s32);
extern u8 lbl_804094E0[];
void fn_80398CD8(void (*cb)(void)) {
    lbl_8049662C = cb;
}

void fn_80399218(void) {

}

void *fn_80399C38(void *self, s32 **arg1) {
    s32 n;
    s32 i;
    s32 tmp;

    n = (s32)arg1[1];
    tmp = n;
    {
        VtblEntry *vt = *(VtblEntry **)((char *)self + 0x18);
        ((void (*)(void *, void *, s32))vt[7].pfn)((char *)self + vt[7].delta, &tmp, 4);
    }
    for (i = 0; i < n; i++) {
        s32 v = arg1[0][i];
        VtblEntry *vt = *(VtblEntry **)((char *)self + 0x18);
        ((void (*)(void *, void *, s32))vt[7].pfn)((char *)self + vt[7].delta, &v, 4);
    }
    return self;
}

void fn_80399CD4(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_80399CF0(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

void fn_80399D04(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_80399D20(s32 *dst, s32 *src, s32 n) {
    while (--n != -1) {
        *dst++ = *src++;
    }
}

void *fn_80399E6C(void *self, s32 **arg1) {
    s32 n;
    s32 i;

    {
        VtblEntry *vt = *(VtblEntry **)((char *)self + 0x18);
        ((void (*)(void *, void *, s32))vt[6].pfn)((char *)self + vt[6].delta, &n, 4);
    }
    fn_80399D4C(arg1, n, 0);
    for (i = 0; i < n; i++) {
        VtblEntry *vt = *(VtblEntry **)((char *)self + 0x18);
        ((void (*)(void *, void *, s32))vt[6].pfn)((char *)self + vt[6].delta, &arg1[0][i], 4);
    }
    return self;
}

void fn_80399F18(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_80399F34(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

void fn_80399F48(s32 **self) {
    s32 *p;

    fn_80399F18(self[0], (s32)self[1]);
    p = self[0];
    fn_802D1A00(fn_802D0AB8(), p);
    fn_80399F34(self);
}

void fn_80399F94(s32 **self, s32 flags) {
    fn_80399F48(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_80399FD4(u8 *p, s32 n) {
    while (--n != -1) {
        fn_80399F94((s32 **)p, 2);
        p += 0xC;
    }
}

void fn_8039A024(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_80399F34(void *);
void *fn_8039A038(void *self) {
    fn_80399F34(self);
    return self;
}

void fn_8039A068(u8 *p, s32 n) {
    while (--n != -1) {
        fn_8039A038(p);
        p += 0xC;
    }
}

void fn_8039A0B4(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_8039A0D0(s32 *dst, s32 *src, s32 n) {
    Elem12 *d = (Elem12 *)dst;
    Elem12 *s = (Elem12 *)src;
    while (--n != -1) {
        *d++ = *s++;
    }
}

s32 *fn_8039A290(s32 *self, s32 *other) {
    fn_8039A10C(self, other[1], 0);
    fn_8039A0D0((s32 *)self[0], (s32 *)other[0], other[1]);
    return self;
}

void fn_8039A2DC(u8 *dst, u8 *src, s32 n) {
    while (--n != -1) {
        fn_8039A290((s32 *)dst, (s32 *)src);
        src += 0xC;
        dst += 0xC;
    }
}

s32 fn_8039A4B8(s32 arg0, s32 arg1) {
    fn_80399F34((void *)arg0);
    fn_8039A290((s32 *)arg0, (s32 *)arg1);
    return arg0;
}

void fn_8039A4F8(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_8039A514(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

void fn_8039A528(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_8039A7A4(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_8039A7C0(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

void fn_8039A7D4(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

f32 fn_8039AA70(void *self, s32 i) {
    return ((struct { f32 v[1]; } *)self)->v[i];
}

void fn_8039AA7C(void *arg0, s32 arg1) {
    extern u8 lbl_80406BF0[];
    char *first;
    char *node;
    char *next;
    char *vt;

    first = M2C_FIELD(arg0, char **, 4);
    M2C_FIELD(arg0, u8 **, 0xC) = lbl_80406BF0;
    if (first != NULL) {
        node = first;
        do {
            next = M2C_FIELD(node, char **, 0);
            if (node != NULL) {
                vt = M2C_FIELD(node, char **, 0x2C);
                M2C_FIELD(vt, void (**)(void *, s32), 0xC)(node + M2C_FIELD(vt, s16 *, 8), 3);
            }
            node = next;
        } while (node != NULL);
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8039AB04(void) {
    fn_8030AD40();
}

void **fn_8039AB24(void **node) {
    void **y;

    if (node[3] != NULL) {
        node = node[3];
        while (node[2] != NULL) {
            node = node[2];
        }
    } else {
        y = node[1];
        while (node == y[3]) {
            node = y;
            y = y[1];
        }
        if (node[3] != y) {
            node = y;
        }
    }
    return node;
}

void fn_8039AB7C(void *self, s32 flags) {
    extern u8 lbl_80406CE0[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(self, void **, 4) = lbl_80406CE0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039AC38(void *self, s32 flags) {
    M2C_FIELD(self, void **, 0xC0) = lbl_80406CB0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039AC6C(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_80406D08;
    p->unk8 = arg2;
    fn_8018E8F8(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
}

s32 fn_8039ACC4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_80406D08;
    p->unk8 = arg2;
    ret = fn_8018E70C(out, p, arg4, arg1, arg3);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

void fn_8018EA6C(void);
void fn_8039AD30(void) {
    fn_8018EA6C();
}

void fn_8039AD50(void *arg0) {
    M2C_UNK fn_801509D4(s32);
    fn_801509D4(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_8039AD74(s32 *self) {
    return self[2];
}

void fn_8039AD7C(void *self, s8 *p) {
    *p = 0;
}

void fn_8039AD88(void) {

}

void fn_8039AD8C(void *arg0, s32 arg1) {
    extern u8 lbl_80406DF8[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80406DF8;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8039AE08(void) {

}

void fn_8039AF90(s32 *first, s32 *last, s32 comp) {
    s32 len = last - first;
    s32 parent;

    if (len < 2) {
        return;
    }
    parent = (len - 2) / 2;
    while (1) {
        fn_8039AE74(first, parent, len, first[parent], comp);
        if (parent == 0) {
            return;
        }
        parent--;
    }
}

void fn_8039B010(s32 *first, s32 *last, s32 comp) {
    s32 *result = last - 1;
    s32 val = *result;
    *result = *first;
    fn_8039AE74(first, 0, result - first, val, comp);
}

void fn_8039AE74(s32 *first, s32 hole, s32 len, s32 val, s32 comp);
void fn_8039B050(s32 *first, s32 *middle, s32 *last, s32 *val, s32 comp);
void fn_8039B11C(s32 *first, s32 *middle, s32 *last, s32 comp) {
    fn_8039B050(first, middle, last, 0, comp);
}

s32 *fn_8039B144(s32 *first, s32 *last, s32 pivot, s32 (*comp)(s32 *, s32 *)) {
    s32 tmp;

    while (1) {
        while (comp(first, &pivot)) {
            first++;
        }
        last--;
        while (comp(&pivot, last)) {
            last--;
        }
        if (!(first < last)) {
            return first;
        }
        tmp = *first;
        *first = *last;
        *last = tmp;
        first++;
    }
}

void fn_8039B338(s32 *last, s32 val, s32 comp) {
    s32 *next = last - 1;

    while (((s32 (*)(s32 *, s32 *))comp)(&val, next)) {
        *last = *next;
        last = next;
        next--;
    }
    *last = val;
}

void fn_8039B3A4(s32 *first, s32 *last, s32 comp) {
    s32 *i;

    if (first == last) {
        return;
    }
    for (i = first + 1; i != last; i++) {
        s32 val = *i;
        if (((s32 (*)(s32 *, s32 *))comp)(&val, first)) {
            s32 *next = i + 1;
            s32 n = (char *)i - (char *)first;
            if (n > 0) {
                fn_8024839C((char *)next - n, first, n);
            }
            *first = val;
        } else {
            fn_8039B338(i, val, comp);
        }
    }
}

void fn_8039B450(s32 *first, s32 *last, s32 *val, s32 comp) {
    s32 *it;

    for (it = first; it != last; it++) {
        fn_8039B338(it, *it, comp);
    }
}

void fn_8039B4A4(s32 *first, s32 *last, s32 comp) {
    if (last - first > 16) {
        fn_8039B3A4(first, first + 16, comp);
        fn_8039B450(first + 16, last, 0, comp);
    } else {
        fn_8039B3A4(first, last, comp);
    }
}

void fn_8039B510(s32 *first, s32 *last, s32 comp) {
    if (first != last) {
        s32 n = last - first;
        s32 k = 0;
        while (n != 1) {
            n >>= 1;
            k++;
        }
        fn_8039B1E4(first, last, 0, k * 2, comp);
        fn_8039B4A4(first, last, comp);
    }
}

s32 fn_8039B594(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_80407128;
    p->unk8 = arg2;
    ret = fn_8018E850(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

void fn_802C5484(void);
void fn_8039B5F8(void) {
    fn_802C5484();
}

void fn_8039B618(void) {
    fn_8018EA6C();
}

void fn_8039B638(void *arg0) {
    M2C_UNK fn_8001DE88(s32);
    fn_8001DE88(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_8039B65C(s32 *self) {
    return self[2];
}

void fn_8039B3A4(s32 *first, s32 *last, s32 comp);
void fn_8039B450(s32 *first, s32 *last, s32 *val, s32 comp);
void fn_8039B1E4(s32 *first, s32 *last, s32 *val, s32 depth, s32 comp);
extern u8 lbl_80407128[];
s32 fn_8018E850(void *out, void *obj, s32 arg);
extern char *lbl_80495050;
void fn_800F1A60(s32, s32);
void fn_802CB8D4(void *);
void fn_8039B664(void *arg0) {
    s32 *node;
    s32 *next;
    s32 data;
    s32 more;

    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    {
        VtblEntry *vt = *(VtblEntry **)lbl_80495050;
        vt[8].pfn(lbl_80495050 + vt[8].delta);
    }
    node = M2C_FIELD(arg0, s32 **, 4);
    for (;;) {
        more = 1;
        if (node == NULL) {
            more = 0;
        }
        if (!more) {
            break;
        }
        next = (s32 *)node[1];
        data = node[0];
        if (M2C_FIELD(arg0, s32 *, 8) != 0 && data != 0) {
            fn_800F1A60(data, 3);
        }
        node = next;
    }
    fn_802CB8D4(arg0);
}

s32 fn_8039B700(void) {
    return 1;
}

s32 fn_8039B708(void) {
    return 1;
}

s32 fn_8039B710(void) {
    return 1;
}

s32 fn_8039B718(void) {
    return 0;
}

s32 fn_8039B720(void) {
    return 0;
}

s32 fn_8039B728(void) {
    return 0;
}

void fn_8039B730(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0xC) = arg1;
}

s32 fn_8039B738(void) {
    return 0;
}

extern u8 lbl_80407900[];
extern u8 lbl_80407690[];
extern u8 lbl_80407C28[];
void fn_801055FC(void *, s32);
void fn_80116F1C(void *, s32);
void fn_801167C0(void *);
void fn_8039B740(u8 *self, s32 flags) {
    fn_801055FC(self + 0x58, 2);
    fn_80116F1C(self, 0);
    if (flags & 1) {
        fn_801167C0(self);
    }
}

void fn_8039B794(void **self, s32 flags) {
    *self = lbl_80407690;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039B7C8(s32 *self, s32 flags) {
    extern u8 lbl_80407628[];
    extern void fn_802D20E8(void *);
    self[7] = (s32)lbl_80407628;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039B7FC(u8 *self, s32 flags) {
    *(void **)(self + 0x10) = lbl_80407900;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039B958(u8 *self, s32 flags) {
    *(void **)(self + 0x28) = lbl_80407C28;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern void fn_80035CD4(void *);
void fn_8039B98C(void *self, s32 flags) {
    void fn_80035EF4(void *, s32);
    fn_80035EF4(self, 0);
    if (flags & 1) {
        fn_80035CD4(self);
    }
}

void fn_8039B9D0(void *obj) {
    if (obj != NULL) {
        char *vt = *(char **)((char *)obj + 0x3C);
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

s32 fn_8039BA10(void) {
    return 0;
}

s32 fn_8039BA18(EIWallPartFlags *self, s32 i) {
    return self->unk2C[i];
}

f32 fn_8039BA28(void *arg0) {
    return (M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg0, f32 *, 8)) * M2C_FIELD(arg0, f32 *, 4);
}

f32 fn_8039BA40(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg0, f32 *, 4);
}

Elem12 *fn_8039BA50(Elem12 *lo, Elem12 *hi, s32 key) {
    s32 n = hi - lo;
    Elem12 *mid;
    s32 d;

    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        if (lo->a == key) {
            return lo;
        }
        return 0;
    }
    mid = lo + n / 2;
    d = key - mid->a;
    if (d == 0) {
        return mid;
    }
    if (d > 0) {
        return fn_8039BA50(mid + 1, hi, key);
    }
    return fn_8039BA50(lo, mid, key);
}

extern u8 lbl_80408138[];
s32 fn_8039BAC0(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_80408138;
    p->unk8 = arg2;
    ret = fn_8018E850(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

s32 fn_8039BB24(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_80408138;
    p->unk8 = arg2;
    ret = fn_8018E70C(out, p, arg4, arg1, arg3);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

void fn_8039BB90(void) {
    fn_8018EA6C();
}

s32 fn_8039BBE8(s32 *self) {
    return self[2];
}

extern u8 lbl_80408188[];
s32 fn_8039BBF0(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_80408188;
    p->unk8 = arg2;
    ret = fn_8018E850(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

extern u8 lbl_80408160[];
s32 fn_8039BC54(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_80408160;
    p->unk8 = arg2;
    ret = fn_8018E850(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

void fn_8039BCB8(void) {
    fn_8018EA6C();
}

void fn_8039BCD8(void) {
    fn_8018EA6C();
}

void fn_8039BCF8(void *arg0) {
    M2C_UNK fn_8004FEF4(s32);
    fn_8004FEF4(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_8039BD1C(s32 *self) {
    return self[2];
}

void fn_8039BD24(void *arg0) {
    M2C_UNK fn_8004FCD0(s32);
    fn_8004FCD0(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_8039BD48(s32 *self) {
    return self[2];
}

void fn_8039BD50(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_8039BD50(void *);
void *fn_8039BD64(void *self) {
    fn_8039BD50(self);
    return self;
}

void fn_8039BD94(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_8039BDB0(s32 **self);
void fn_8039BDB0(s32 **self) {
    s32 *p;

    fn_8039BD94(self[0], (s32)self[1]);
    p = self[0];
    fn_802D1A00(fn_802D0AB8(), p);
    fn_8039BD50(self);
}

void fn_8039BDFC(s32 self, s32 flags) {
    fn_8039BDB0(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039BEB0(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_8039BECC(s32 *dst, s32 *src, s32 n) {
    while (--n != -1) {
        *dst++ = *src++;
    }
}

void fn_8039C07C(s32 *dst, s32 *src, s32 n) {
    src += n - 1;
    dst += n - 1;
    while (--n != -1) {
        *dst-- = *src--;
    }
}

void fn_8039BEF8(void *, s32, s32);
void fn_8039C0B8(void *self, s32 arg1, s32 arg2, s32 arg3) {
    s32 size = M2C_FIELD(self, s32 *, 4);
    s32 newSize = size + arg3;

    if (newSize > M2C_FIELD(self, s32 *, 8)) {
        s32 cap = 1;
        while (cap < newSize) {
            cap += cap;
        }
        fn_8039BEF8(self, newSize, cap);
    } else {
        M2C_FIELD(self, s32 *, 4) = newSize;
        fn_8039BEB0(M2C_FIELD(self, s32 **, 0) + size, newSize - size);
    }
    if (arg2 != size) {
        fn_8039C07C(M2C_FIELD(self, s32 **, 0) + arg2 + arg3, M2C_FIELD(self, s32 **, 0) + arg2, size - arg2);
    }
    fn_8039BECC(M2C_FIELD(self, s32 **, 0) + arg2, (s32 *)arg1, arg3);
}

void fn_8039C190(void *self, s32 arg1) {
    fn_8039C0B8(self, arg1, M2C_FIELD(self, s32 *, 4), 1);
}

void fn_8039C1B8(void) {
    fn_8030AD40();
}

void fn_8039C1D8(void) {
    fn_8030AD40();
}

void fn_8039C1F8(void) {

}

void fn_8039C1FC(void) {

}

extern u8 lbl_804093F8[];
extern void fn_802D20E8(void *);
void fn_8039C200(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039C234(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039C268(void) {

}

void fn_8039C26C(void) {

}

void fn_8039C270(void) {

}

void fn_8039C274(void) {

}

s32 fn_8039C278(s32 arg0, s32 arg1) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_804094E0;
    p->unk8 = arg1;
    ret = fn_8018E514(out, p);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

extern u8 lbl_804094E0[];
void fn_8039C2D4(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_804094E0;
    p->unk8 = arg2;
    fn_8018E8F8(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
}

void fn_8039C32C(void) {
    fn_8018EA6C();
}

void fn_8039C34C(void *arg0) {
    M2C_UNK fn_8006FFAC(s32);
    fn_8006FFAC(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_8039C370(s32 *self) {
    return self[2];
}

void fn_8039C378(s32 *self) {
    s32 i;

    for (i = 7; i >= 0; i--) {
        self[i] = 0;
    }
}

void fn_8039C3D0(const char *fmt, ...) {
}

extern u8 lbl_80409DD8[];
void fn_8039C584(void **self, s32 flags) {
    *self = lbl_80409DD8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800A2B98(SortComp comp, s32 a, s32 b);
void fn_8039CAD8(s32 *last, s32 val, SortComp comp) {
    s32 *next = last - 1;

    while (fn_800A2B98(comp, val, *next)) {
        *last = *next;
        last = next;
        next--;
    }
    *last = val;
}

void fn_8039CB38(s32 *first, s32 *last, SortComp comp) {
    s32 *i;

    if (first == last) {
        return;
    }
    for (i = first + 1; i != last; i++) {
        s32 val = *i;
        SortComp c = comp;
        if (fn_800A2B98(c, val, *first)) {
            s32 *next = i + 1;
            s32 n = (char *)i - (char *)first;
            if (n > 0) {
                fn_8024839C((char *)next - n, first, n);
            }
            *first = val;
        } else {
            fn_8039CAD8(i, val, c);
        }
    }
}

void fn_8039CAD8(s32 *it, s32 val, SortComp comp);
void fn_8039CB38(s32 *first, s32 *last, SortComp comp);
void fn_8039C968(s32 *first, s32 *last, s32 *val, s32 depth, SortComp comp);
void fn_8039CBEC(s32 *first, s32 *last, s32 *val, SortComp *comp) {
    s32 *it;

    for (it = first; it != last; it++) {
        fn_8039CAD8(it, *it, *comp);
    }
}

static inline void SortComp_UnguardedInsertionSortAux(s32 *first, s32 *last, SortComp comp) {
    ((void (*)(s32 *, s32 *, s32 *, SortComp))fn_8039CBEC)(first, last, 0, comp);
}

static inline void SortComp_UnguardedInsertionSort(s32 *first, s32 *last, SortComp comp) {
    SortComp_UnguardedInsertionSortAux(first, last, comp);
}

void fn_8039CC48(s32 *first, s32 *last, SortComp *comp) {
    if (last - first > 16) {
        fn_8039CB38(first, first + 16, *comp);
        SortComp_UnguardedInsertionSort(first + 16, last, *comp);
    } else {
        fn_8039CB38(first, last, *comp);
    }
}

static inline void SortComp_FinalInsertionSort(s32 *first, s32 *last, SortComp comp) {
    fn_8039CC48(first, last, &comp);
}

static inline s32 SortComp_Lg(s32 n) {
    s32 k;

    for (k = 0; n != 1; n >>= 1) {
        k++;
    }
    return k;
}

void fn_8039CCD4(s32 *first, s32 *last, SortComp *comp) {
    if (first != last) {
        fn_8039C968(first, last, 0, SortComp_Lg(last - first) * 2, *comp);
        ((void (*)(s32 *, s32 *, SortComp))fn_8039CC48)(first, last, *comp);
    }
}

extern u8 lbl_8040A1F0[];
s32 fn_8039CD68(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_8040A1F0;
    p->unk8 = arg2;
    ret = fn_8018E850(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

void fn_8039CDCC(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = &arg0;

    p[1] = arg2;
    fn_8039CD68((s32)p, arg1, arg2);
}

s32 fn_8039CE00(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_8040A1F0;
    p->unk8 = arg2;
    ret = fn_8018E70C(out, p, arg4, arg1, arg3);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

void fn_8039CE6C(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = &arg0;

    p[1] = arg2;
    ((s32 (*)(s32, s32, s32))fn_8039CE00)((s32)p, arg1, arg2);
}

void fn_8039D338(void) {
    fn_8018EA6C();
}

void fn_8039D358(void *arg0) {
    void fn_8039D120(s32);
    fn_8039D120(*M2C_FIELD(arg0, s32 **, 4));
}

s32 fn_8039D380(s32 *self) {
    return self[2];
}

void fn_8039A544(s32 *dst, s32 *src, s32 n);
void fn_8039A610(void *self, s32 n, s32 arg2);
s32 *fn_8039D388(s32 *self, s32 *other);
s32 *fn_8039D388(s32 *self, s32 *other) {
    fn_8039A610(self, other[1], 0);
    fn_8039A544((s32 *)self[0], (s32 *)other[0], other[1]);
    return self;
}

void fn_8039D8D8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 0x10000000);
}

void fn_800CD104(void);
void fn_8039D8E8(void *arg0, s32 flags) {
    extern u8 lbl_8040AC68[];
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    s32 *v;
    s32 *self = arg0;
    self[0x17] = (s32)lbl_8040AC68;
    ((void (*)(void *))fn_800CD104)(self);
    v = self + 2;
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8((void *)v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039D9DC(void *arg0, s32 flags) {
    extern u8 lbl_8040AC68[];
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    s32 *v;
    s32 *self = arg0;
    self[0x17] = (s32)lbl_8040AC68;
    ((void (*)(void *))fn_800CD104)(self);
    v = self + 2;
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8((void *)v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DA58(void *arg0, s32 flags) {
    extern u8 lbl_8040AC68[];
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    s32 *v;
    s32 *self = arg0;
    self[0x17] = (s32)lbl_8040AC68;
    ((void (*)(void *))fn_800CD104)(self);
    v = self + 2;
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8((void *)v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DAD4(void) {

}

void fn_8039DAD8(s32 *self) {
    self[1] = 1;
}

void fn_8039DAE4(void) {

}

s32 fn_8039DAFC(s32 arg0) {
    return arg0 + 0xC;
}

void fn_8039DB04(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
}

f32 fn_8039DB0C(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xC);
}

void fn_8039DB14(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
}

f32 fn_8039DB1C(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x10);
}

void fn_8039DB88(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x14) = farg0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & 0xFFFFFFFD);
}

void fn_8039DBE0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x18) = farg0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & 0xFFFFFFFD);
}

void fn_8039DC8C(void) {

}

void fn_8039DC90(void) {

}

void fn_8039DC94(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DCC8(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DCFC(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DD30(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DD64(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DD98(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DDCC(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DE00(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DE34(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DE68(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DE9C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DED0(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DF04(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DF38(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DF6C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DFA0(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039DFD4(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E008(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E03C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E070(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E0A4(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E0D8(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E10C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E140(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E174(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_8040CB28[];
extern void fn_8039E33C(void *, s32);
extern void fn_803997AC(void *, u32);
void fn_8039E1A8(s32 *self, s32 flags) {
    s32 *v;
    self[5] = (s32)lbl_8040CB28;
    fn_8039E33C(self + 0x14, 2);
    v = self + 10;
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8((void *)v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E238(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E26C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E2A0(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E2D4(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E308(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E404(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E438(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E46C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E4A0(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E4D4(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E508(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E53C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E570(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E5A4(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E5D8(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E60C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E640(s32 *self, s32 flags) {
    s32 *v;
    self[5] = (s32)lbl_8040CB28;
    fn_8039E33C(self + 0x14, 2);
    v = self + 10;
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8((void *)v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E6D0(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_8041F754[];
void fn_80048A48(u8 *arg);
void fn_8039E760(void) {
    fn_80048A48(lbl_8041F754);
}

void fn_8039E788(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039EA18(void) {
    fn_80048A48(lbl_8041F754);
}

void fn_8039EA40(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_80049054(u8 *arg);
void fn_8039EA74(void) {
    fn_80049054(lbl_8041F754);
}

void fn_800490B0(u8 *arg);
void fn_8039EA9C(void) {
    fn_800490B0(lbl_8041F754);
}

void fn_8039EC98(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039ECCC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_8039ED08(void) {
    fn_80048A48(lbl_8041F754);
}

void fn_8039EFF8(s32 *self, s32 flags) {
    s32 *v;
    self[5] = (s32)lbl_8040CB28;
    fn_8039E33C(self + 0x14, 2);
    v = self + 10;
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8((void *)v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039F088(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039F0BC(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039F0F0(void *arg0, s32 flags) {
    extern u8 lbl_8040AC68[];
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    s32 *v;
    s32 *self = arg0;
    self[0x17] = (s32)lbl_8040AC68;
    ((void (*)(void *))fn_800CD104)(self);
    v = self + 2;
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8((void *)v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039F16C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039F1A0(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039F1D4(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039F208(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039F23C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039F270(void *arg0, void **arg1) {
    void *temp_r11;
    void *temp_r9;
    void *temp_r9_2;

    temp_r11 = M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(arg0, void **, 0xC) = (void *) M2C_FIELD(temp_r11, void **, 8);
    temp_r9 = M2C_FIELD(temp_r11, void **, 8);
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, void **, 4) = arg0;
    }
    M2C_FIELD(temp_r11, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    if (arg0 == (void *) *arg1) {
        *arg1 = temp_r11;
    } else {
        temp_r9_2 = M2C_FIELD(arg0, void **, 4);
        if (arg0 == (void *) M2C_FIELD(temp_r9_2, void **, 8)) {
            M2C_FIELD(temp_r9_2, void **, 8) = temp_r11;
        } else {
            M2C_FIELD(temp_r9_2, void **, 0xC) = temp_r11;
        }
    }
    M2C_FIELD(temp_r11, void **, 8) = arg0;
    M2C_FIELD(arg0, void **, 4) = temp_r11;
}

void fn_8039F2D0(void *arg0, void **arg1) {
    void *temp_r11;
    void *temp_r9;
    void *temp_r9_2;

    temp_r11 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, void **, 8) = (void *) M2C_FIELD(temp_r11, void **, 0xC);
    temp_r9 = M2C_FIELD(temp_r11, void **, 0xC);
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, void **, 4) = arg0;
    }
    M2C_FIELD(temp_r11, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    if (arg0 == (void *) *arg1) {
        *arg1 = temp_r11;
    } else {
        temp_r9_2 = M2C_FIELD(arg0, void **, 4);
        if (arg0 == (void *) M2C_FIELD(temp_r9_2, void **, 0xC)) {
            M2C_FIELD(temp_r9_2, void **, 0xC) = temp_r11;
        } else {
            M2C_FIELD(temp_r9_2, void **, 8) = temp_r11;
        }
    }
    M2C_FIELD(temp_r11, void **, 0xC) = arg0;
    M2C_FIELD(arg0, void **, 4) = temp_r11;
}

extern u8 lbl_8040D2A8[];
void fn_8039FE84(void **self, s32 flags) {
    *self = lbl_8040D2A8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803A04E0(s32 arg0, void *arg1) {
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803A04E0(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x18);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

extern u8 lbl_8040D458[];
void fn_803A059C(void **self, s32 flags) {
    *self = lbl_8040D458;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_803A0680(void) {
    return 0;
}

s32 fn_803A0688(void) {
    return 0;
}

void fn_803A0690(s32 arg0, void *arg1) {
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803A0690(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x18);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

s32 fn_803A094C(s32 *arg0) {
    *arg0 = 0;
    return 1;
}

s32 fn_803A095C(s32 *p) {
    if (p[0] != 0) {
        p[1]++;
    }
    return 1;
}

SearchEntry *fn_803A097C(SearchEntry *lo, SearchEntry *hi, s32 key) {
    for (;;) {
        s32 n = hi - lo;
        SearchEntry *mid;
        s32 d;

        if (n <= 0) {
            return 0;
        }
        if (n == 1) {
            if (lo->key == key) {
                return lo;
            }
            return 0;
        }
        mid = lo + n / 2;
        d = key - mid->key;
        if (d == 0) {
            return mid;
        }
        if (d > 0) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
}

extern u8 lbl_8040D750[];
void fn_803A09DC(void **self, s32 flags) {
    *self = lbl_8040D750;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_8040D750[];
void fn_803A0A10(void **self, s32 flags) {
    *self = lbl_8040D750;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_803A0BC0(s32 *a, s32 *b) {
    return a[1] == b[1] && a[0] == b[0];
}

void fn_803A0E9C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803A0F14(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

extern u8 lbl_8040E600[];
s32 fn_803A1354(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_8040E600;
    p->unk8 = arg2;
    ret = fn_8018E850(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

s32 fn_803A13B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_8040E600;
    p->unk8 = arg2;
    ret = fn_8018E70C(out, p, arg4, arg1, arg3);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

void fn_803A1424(void) {
    fn_8018EA6C();
}

s32 fn_803A147C(s32 *self) {
    return self[2];
}

extern u8 lbl_8040E940[];
void fn_803A14E4(void **self, s32 flags) {
    *self = lbl_8040E940;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_8040EBD8[];
s32 fn_803A1518(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_8040EBD8;
    p->unk8 = arg2;
    ret = fn_8018E850(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

s32 fn_803A157C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_8040EBD8;
    p->unk8 = arg2;
    ret = fn_8018E70C(out, p, arg4, arg1, arg3);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

extern u8 lbl_8040ECC0[];
void fn_803A15E8(void **self, s32 flags) {
    *self = lbl_8040ECC0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803A161C(void) {
    fn_8018EA6C();
}

s32 fn_803A1674(s32 *self) {
    return self[2];
}

extern u8 lbl_8040EDA0[];
void fn_803A167C(void **self, s32 flags) {
    *self = lbl_8040EDA0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_8040EDE0[];
void fn_803A26C0(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_8040EDE0;
    p->unk8 = arg2;
    fn_8018E8F8(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
}

s32 fn_803A2718(s32 arg0, s32 arg1) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_8040EDE0;
    p->unk8 = arg1;
    ret = fn_8018E514(out, p);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

void fn_803A29C8(void) {
    fn_8018EA6C();
}

void fn_803A29E8(void *arg0) {
    M2C_UNK fn_80113324(s32);
    fn_80113324(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_803A2A0C(s32 *self) {
    return self[2];
}

s32 fn_803A3010(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

extern u8 lbl_8040FD10[];
s32 fn_803A3018(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_8040FD10;
    p->unk8 = arg2;
    ret = fn_8018E850(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

void fn_803A307C(s32 *first, s32 hole, s32 len, s32 val, s32 comp);
void fn_803A3194(s32 *first, s32 *last, s32 comp) {
    s32 len = last - first;
    s32 parent;

    if (len < 2) {
        return;
    }
    parent = (len - 2) / 2;
    while (1) {
        fn_803A307C(first, parent, len, first[parent], comp);
        if (parent == 0) {
            return;
        }
        parent--;
    }
}

void fn_803A3214(s32 *first, s32 *last, s32 comp) {
    s32 *result = last - 1;
    s32 val = *result;
    *result = *first;
    fn_803A307C(first, 0, result - first, val, comp);
}

void fn_803A3254(s32 *first, s32 *middle, s32 *last, s32 *val, s32 comp);
void fn_803A3320(s32 *first, s32 *middle, s32 *last, s32 comp) {
    fn_803A3254(first, middle, last, 0, comp);
}

void fn_803A3540(s32 *last, s32 val, s32 comp);
void fn_803A364C(s32 *first, s32 *last, s32 *val, s32 comp) {
    s32 *it;

    for (it = first; it != last; it++) {
        fn_803A3540(it, *it, comp);
    }
}

void fn_803A35A4(s32 *first, s32 *last, s32 comp);
void fn_803A364C(s32 *first, s32 *last, s32 *val, s32 comp);
void fn_803A36A0(s32 *first, s32 *last, s32 comp) {
    if (last - first > 16) {
        fn_803A35A4(first, first + 16, comp);
        fn_803A364C(first + 16, last, 0, comp);
    } else {
        fn_803A35A4(first, last, comp);
    }
}

void fn_803A33EC(s32 *first, s32 *last, s32 *val, s32 depth, s32 comp);
void fn_803A370C(s32 *first, s32 *last, s32 comp) {
    if (first != last) {
        s32 n = last - first;
        s32 k = 0;
        while (n != 1) {
            n >>= 1;
            k++;
        }
        fn_803A33EC(first, last, 0, k * 2, comp);
        fn_803A36A0(first, last, comp);
    }
}

s32 fn_803A3790(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_8040FD10;
    p->unk8 = arg2;
    ret = fn_8018E70C(out, p, arg4, arg1, arg3);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

void fn_803A37FC(s32 *first, s32 hole, s32 len, s32 val, s32 comp);
void fn_803A3918(s32 *first, s32 *last, s32 comp) {
    s32 len = last - first;
    s32 parent;

    if (len < 2) {
        return;
    }
    parent = (len - 2) / 2;
    while (1) {
        fn_803A37FC(first, parent, len, first[parent], comp);
        if (parent == 0) {
            return;
        }
        parent--;
    }
}

void fn_803A3998(s32 *first, s32 *last, s32 comp) {
    s32 *result = last - 1;
    s32 val = *result;
    *result = *first;
    fn_803A37FC(first, 0, result - first, val, comp);
}

void fn_803A39D8(s32 *first, s32 *middle, s32 *last, s32 *val, s32 comp);
void fn_803A3AA4(s32 *first, s32 *middle, s32 *last, s32 comp) {
    fn_803A39D8(first, middle, last, 0, comp);
}

s32 *fn_803A3ACC(s32 *first, s32 *last, s32 pivot, s32 (*comp)(s32 *, s32 *)) {
    s32 tmp;

    while (1) {
        while (comp(first, &pivot)) {
            first++;
        }
        last--;
        while (comp(&pivot, last)) {
            last--;
        }
        if (!(first < last)) {
            return first;
        }
        tmp = *first;
        *first = *last;
        *last = tmp;
        first++;
    }
}

void fn_803A3CC0(s32 *last, s32 val, s32 comp) {
    s32 *next = last - 1;

    while (((s32 (*)(s32 *, s32 *))comp)(&val, next)) {
        *last = *next;
        last = next;
        next--;
    }
    *last = val;
}

void fn_803A3D2C(s32 *first, s32 *last, s32 comp) {
    s32 *i;

    if (first == last) {
        return;
    }
    for (i = first + 1; i != last; i++) {
        s32 val = *i;
        if (((s32 (*)(s32 *, s32 *))comp)(&val, first)) {
            s32 *next = i + 1;
            s32 n = (char *)i - (char *)first;
            if (n > 0) {
                fn_8024839C((char *)next - n, first, n);
            }
            *first = val;
        } else {
            fn_803A3CC0(i, val, comp);
        }
    }
}

void fn_803A3CC0(s32 *last, s32 val, s32 comp);
void fn_803A3DD8(s32 *first, s32 *last, s32 *val, s32 comp) {
    s32 *it;

    for (it = first; it != last; it++) {
        fn_803A3CC0(it, *it, comp);
    }
}

void fn_803A3D2C(s32 *first, s32 *last, s32 comp);
void fn_803A3DD8(s32 *first, s32 *last, s32 *val, s32 comp);
void fn_803A3E2C(s32 *first, s32 *last, s32 comp) {
    if (last - first > 16) {
        fn_803A3D2C(first, first + 16, comp);
        fn_803A3DD8(first + 16, last, 0, comp);
    } else {
        fn_803A3D2C(first, last, comp);
    }
}

void fn_803A3B6C(s32 *first, s32 *last, s32 *val, s32 depth, s32 comp);
void fn_803A3E98(s32 *first, s32 *last, s32 comp) {
    if (first != last) {
        s32 n = last - first;
        s32 k = 0;
        while (n != 1) {
            n >>= 1;
            k++;
        }
        fn_803A3B6C(first, last, 0, k * 2, comp);
        fn_803A3E2C(first, last, comp);
    }
}

extern u8 lbl_8040FF60[];
void fn_803A3F1C(void **self, s32 flags) {
    *self = lbl_8040FF60;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803A3F50(void) {
    fn_8018EA6C();
}

s32 fn_803A3FA8(s32 *self) {
    return self[2];
}

void fn_803A467C(s32 arg0, void *arg1) {
    M2C_UNK fn_800ECE00(void *, M2C_UNK);
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803A467C(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            fn_800ECE00(var_r31 + 0x10, 2);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x18);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

void fn_803A46E4(s32 arg0, void *arg1) {
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803A46E4(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x18);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

void fn_803A4740(s32 arg0, void *arg1) {
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803A4740(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x18);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

void fn_803A479C(s32 arg0, void *arg1) {
    M2C_UNK fn_8011CDD8(void *, M2C_UNK);
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803A479C(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            fn_8011CDD8(var_r31 + 0x14, 2);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x48);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

void fn_803A4804(s32 arg0, void *arg1) {
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803A4804(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x1C);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

void fn_803A4910(s32 *first, s32 hole, s32 len, s32 val, s32 comp);
void fn_803A4A28(s32 *first, s32 *last, s32 comp) {
    s32 len = last - first;
    s32 parent;

    if (len < 2) {
        return;
    }
    parent = (len - 2) / 2;
    while (1) {
        fn_803A4910(first, parent, len, first[parent], comp);
        if (parent == 0) {
            return;
        }
        parent--;
    }
}

void fn_803A4AA8(s32 *first, s32 *last, s32 comp) {
    s32 *result = last - 1;
    s32 val = *result;
    *result = *first;
    fn_803A4910(first, 0, result - first, val, comp);
}

void fn_803A4AE8(s32 *first, s32 *middle, s32 *last, s32 *val, s32 comp);
void fn_803A4BB4(s32 *first, s32 *middle, s32 *last, s32 comp) {
    fn_803A4AE8(first, middle, last, 0, comp);
}

void fn_803A4DD0(s32 *last, s32 val, s32 comp);
void fn_803A4ED4(s32 *first, s32 *last, s32 *val, s32 comp) {
    s32 *it;

    for (it = first; it != last; it++) {
        fn_803A4DD0(it, *it, comp);
    }
}

void fn_803A4E30(s32 *first, s32 *last, s32 comp);
void fn_803A4ED4(s32 *first, s32 *last, s32 *val, s32 comp);
void fn_803A4F28(s32 *first, s32 *last, s32 comp) {
    if (last - first > 16) {
        fn_803A4E30(first, first + 16, comp);
        fn_803A4ED4(first + 16, last, 0, comp);
    } else {
        fn_803A4E30(first, last, comp);
    }
}

void fn_803A4C78(s32 *first, s32 *last, s32 *val, s32 depth, s32 comp);
void fn_803A4F94(s32 *first, s32 *last, s32 comp) {
    if (first != last) {
        s32 n = last - first;
        s32 k = 0;
        while (n != 1) {
            n >>= 1;
            k++;
        }
        fn_803A4C78(first, last, 0, k * 2, comp);
        fn_803A4F28(first, last, comp);
    }
}

extern u8 lbl_80410E20[];
s32 fn_803A5084(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_80410E20;
    p->unk8 = arg2;
    ret = fn_8018E850(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

s32 fn_803A50E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_80410E20;
    p->unk8 = arg2;
    ret = fn_8018E70C(out, p, arg4, arg1, arg3);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

extern u8 lbl_80410DF8[];
s32 fn_803A51C0(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_80410DF8;
    p->unk8 = arg2;
    ret = fn_8018E850(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

extern u8 lbl_80411160[];
void fn_803A5BC0(void **self, s32 flags) {
    *self = lbl_80411160;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803A5FA8(void) {
    fn_8018EA6C();
}

void fn_803A5FC8(void) {
    fn_8018EA6C();
}

void fn_803A5FE8(void) {
    fn_8018EA6C();
}

s32 fn_803A6040(s32 *self) {
    return self[2];
}

void fn_803A6048(void *arg0) {
    M2C_UNK fn_80149BEC(s32);
    fn_80149BEC(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_803A606C(s32 *self) {
    return self[2];
}

void fn_803A6074(void *arg0) {
    M2C_UNK fn_8016DE9C(s32);
    fn_8016DE9C(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_803A6098(s32 *self) {
    return self[2];
}

s32 fn_803A60A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern u8 lbl_804113C0[];
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_804113C0;
    p->unk8 = arg2;
    ret = fn_8018E70C(out, p, arg4, arg1, arg3);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

extern u8 lbl_804113C0[];
s32 fn_803A610C(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_804113C0;
    p->unk8 = arg2;
    ret = fn_8018E850(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

extern u8 lbl_80411680[];
void fn_803A63F0(void **self, s32 flags) {
    *self = lbl_80411680;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803A6424(void) {
    fn_8018EA6C();
}

void fn_803A6444(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 4);
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *))(vt + 0x1BC))(obj + *(s16 *)(vt + 0x1B8));
}

s32 fn_803A647C(s32 *self) {
    return self[2];
}

Elem124 *fn_803A6484(Elem124 *lo, Elem124 *hi, s32 key) {
    s32 n = hi - lo;
    Elem124 *mid;
    s32 d;

    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        if (lo->a == key) {
            return lo;
        }
        return 0;
    }
    mid = lo + n / 2;
    d = key - mid->a;
    if (d == 0) {
        return mid;
    }
    if (d > 0) {
        return fn_803A6484(mid + 1, hi, key);
    }
    return fn_803A6484(lo, mid, key);
}

extern u8 lbl_80411998[];
void fn_803A64F4(void **self, s32 flags) {
    *self = lbl_80411998;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_80410E48[];
void fn_803A6528(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_80410E48;
    p->unk8 = arg2;
    fn_8018E8F8(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
}

void fn_803A6A14(s32 arg0, void *arg1) {
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803A6A14(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x18);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

void fn_803A6A70(void *self) {
    extern void fn_803997AC(void *, u32);
    struct LNode {
        struct LNode *next;
        struct LNode *prev;
    } **list = (struct LNode **)self;
    struct LNode *n;
    struct LNode *cur;

    n = list[1]->next;
    while (n != list[1]) {
        cur = n;
        n = n->next;
        if (cur != NULL) {
            fn_803997AC(cur, 0xC);
        }
    }
    list[1]->next = list[1];
    list[1]->prev = list[1];
}

void fn_803A6ADC(void *self) {
    extern void fn_803997AC(void *, u32);
    struct LNode {
        struct LNode *next;
        struct LNode *prev;
    } **list = (struct LNode **)self;
    struct LNode *n;
    struct LNode *cur;

    n = list[1]->next;
    while (n != list[1]) {
        cur = n;
        n = n->next;
        if (cur != NULL) {
            fn_803997AC(cur, 0xC);
        }
    }
    list[1]->next = list[1];
    list[1]->prev = list[1];
}

void fn_803A6B48(s32 arg0, void *arg1) {
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803A6B48(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x18);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

void fn_803A706C(void *arg0, s32 arg1) {
    extern char lbl_804122E8[];
    extern void fn_80174950(void *, s32);
    extern void fn_802D20E8(void *);

    M2C_FIELD(arg0, char **, 0xBC) = lbl_804122E8;
    fn_80174950((char *)arg0 + 0x18, 2);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803A87BC(void *arg0, void *arg1, void *arg2) {
    void **temp_r9;

    if (arg0 != arg2) {
        *M2C_FIELD(arg2, void ***, 4) = arg0;
        *M2C_FIELD(arg1, void ***, 4) = arg2;
        *M2C_FIELD(arg0, void ***, 4) = arg1;
        temp_r9 = M2C_FIELD(arg0, void ***, 4);
        M2C_FIELD(arg0, void ***, 4) = (void **) M2C_FIELD(arg2, void ***, 4);
        M2C_FIELD(arg2, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
        M2C_FIELD(arg1, void ***, 4) = temp_r9;
    }
}

void fn_803A8B7C(s32 arg0, void *arg1) {
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803A8B7C(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x18);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

extern u8 lbl_80413E80[];
void fn_803A92E4(void **self, s32 flags) {
    *self = lbl_80413E80;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_80414088[];
void fn_803A9BB8(void **self, s32 flags) {
    *self = lbl_80414088;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803A9BEC(s32 arg0, void *arg1) {
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803A9BEC(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x18);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

void fn_803A9C48(s32 arg0, void *arg1) {
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803A9C48(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            fn_801055FC(var_r31 + 0x10, 2);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x24);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

extern u8 lbl_80414540[];
void fn_803AAB88(void **self, s32 flags) {
    *self = lbl_80414540;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_804146E8[];
s32 fn_803AADC8(s32 arg0, s32 arg1, s32 arg2) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_804146E8;
    p->unk8 = arg2;
    ret = fn_8018E850(out, p, arg1);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

void fn_803AAE2C(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = &arg0;

    p[1] = arg2;
    fn_803AADC8((s32)p, arg1, arg2);
}

s32 fn_803AAE60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } tmp, *p;
    u8 out[8];
    s32 ret;

    p = &tmp;
    tmp.unk4 = arg0;
    tmp.vtbl = lbl_804146E8;
    p->unk8 = arg2;
    ret = fn_8018E70C(out, p, arg4, arg1, arg3);
    ((void (*)(void *, s32))fn_8018EA6C)(p, 2);
    return ret;
}

void fn_803AAECC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 *p = &arg0;

    p[1] = arg2;
    fn_803AAE60((s32)p, arg1, arg2, arg3, arg4);
}

void fn_803AB624(void) {
    fn_8018EA6C();
}

void fn_803AB644(void *arg0, s32 arg1, s32 arg2) {
    void fn_803AB52C(s32 *, s32, s32, s32);
    s32 *temp_r3;

    temp_r3 = *M2C_FIELD(arg0, s32 **, 4);
    fn_803AB52C(temp_r3, *temp_r3, arg1, arg2);
}

s32 fn_803AB678(s32 *self) {
    return self[2];
}

SearchEntry8 *fn_803AB680(SearchEntry8 *lo, SearchEntry8 *hi, s32 key) {
    for (;;) {
        s32 n = hi - lo;
        SearchEntry8 *mid;
        s32 d;

        if (n <= 0) {
            return 0;
        }
        if (n == 1) {
            if (lo->key == key) {
                return lo;
            }
            return 0;
        }
        mid = lo + n / 2;
        d = key - mid->key;
        if (d == 0) {
            return mid;
        }
        if (d > 0) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
}

void *fn_803AB6E0(void *arg0, u8 *arg1) {
    void fn_801B3824(void *, void *);
    fn_801B3824(arg0, arg1 + 0x50);
    return arg0;
}

s32 fn_803AB714(s32 arg0, s32 arg1) {
    s32 fn_800F69E8(s32);
    M2C_UNK fn_800F69F8(s32, s32);
    fn_800F69F8(arg1, fn_800F69E8(arg0 + 4));
    return 1;
}

void fn_80197B90(void);
void fn_803AB794(void) {
    fn_80197B90();
}

void fn_803AB7B4(void) {
    fn_80197B90();
}

extern u8 lbl_80415188[];
void fn_803ABADC(void **self, s32 flags) {
    *self = lbl_80415188;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800FC178(void);
void fn_803ABB10(void) {
    fn_800FC178();
}

SearchEntry *fn_803ABF48(SearchEntry *lo, SearchEntry *hi, s32 key) {
    for (;;) {
        s32 n = hi - lo;
        SearchEntry *mid;
        s32 d;

        if (n <= 0) {
            return 0;
        }
        if (n == 1) {
            if (lo->key == key) {
                return lo;
            }
            return 0;
        }
        mid = lo + n / 2;
        d = key - mid->key;
        if (d == 0) {
            return mid;
        }
        if (d > 0) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
}

void fn_803AC08C(s32 arg0, void *arg1) {
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803AC08C(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x20);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

s32 fn_803AC3B0(void) {
    return 4;
}

s32 fn_803AC3B8(void) {
    return 2;
}

s32 fn_803AC3C0(void) {
    return 1;
}

s32 fn_803AC3C8(void) {
    return 4;
}

s32 fn_803AC3D0(void) {
    return 2;
}

s32 fn_803AC3D8(void) {
    return 1;
}

s32 fn_803AC3E0(void) {
    return 4;
}

s32 fn_803AC3E8(void) {
    return 2;
}

s32 fn_803AC3F0(void) {
    return 1;
}

s32 fn_803AC3F8(void) {
    return 4;
}

s32 fn_803AC400(void) {
    return 2;
}

s32 fn_803AC408(void) {
    return 1;
}

extern u8 lbl_80415BD0[];
void fn_803ACF84(void **self, s32 flags) {
    *self = lbl_80415BD0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_80415BD0[];
void fn_803AD054(void **self, s32 flags) {
    *self = lbl_80415BD0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_80415BD0[];
void fn_803AD088(void **self, s32 flags) {
    *self = lbl_80415BD0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803AD0BC(void **self, s32 flags) {
    *self = lbl_80415BD0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803AD0F0(void **self, s32 flags) {
    *self = lbl_80415BD0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803AD124(void **self, s32 flags) {
    *self = lbl_80415BD0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803AD158(void **self, s32 flags) {
    *self = lbl_80415BD0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803AD18C(void *self) {
    extern void fn_803997AC(void *, u32);
    struct LNode {
        struct LNode *next;
        struct LNode *prev;
    } **list = (struct LNode **)self;
    struct LNode *n;
    struct LNode *cur;

    n = list[1]->next;
    while (n != list[1]) {
        cur = n;
        n = n->next;
        if (cur != NULL) {
            fn_803997AC(cur, 0xC);
        }
    }
    list[1]->next = list[1];
    list[1]->prev = list[1];
}

void *fn_803ADAAC(void *arg0, char *arg1) {
    extern s32 fn_80248808(char *);
    extern void fn_803ADA44(void *, s32);
    char *end;
    s32 len;
    char *p;

    M2C_FIELD(arg0, char **, 0) = NULL;
    M2C_FIELD(arg0, char **, 4) = NULL;
    M2C_FIELD((char *)arg0 + 8, s32 *, 4) = 0;
    end = arg1 + fn_80248808(arg1);
    len = end - arg1;
    fn_803ADA44(arg0, len + 1);
    p = M2C_FIELD(arg0, char **, 0);
    p = (end != arg1) ? (char *)fn_8024839C(p, arg1, len) + len : p;
    M2C_FIELD(arg0, char **, 4) = p;
    *p = 0;
    return arg0;
}

void fn_803ADB34(s32 arg0, void *arg1) {
    void *temp_r30;
    void *var_r31;

    var_r31 = arg1;
    if (var_r31 != NULL) {
        do {
            fn_803ADB34(arg0, M2C_FIELD(var_r31, void **, 0xC));
            temp_r30 = M2C_FIELD(var_r31, void **, 8);
            if (var_r31 != NULL) {
                fn_803997AC(var_r31, 0x14);
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
}

void fn_803ADDAC(u8 *self) {
    extern void fn_801C5CBC(u8 *);
    extern u8 lbl_80415FF8[];
    *(u8 **)(self + 4) = lbl_80415FF8;
    fn_801C5CBC(self);
}

void fn_803ADDDC(void) {

}

void fn_803ADDE0(u8 *self) {
    extern void fn_801C5CBC(u8 *);
    extern u8 lbl_80416218[];
    *(u8 **)(self + 4) = lbl_80416218;
    fn_801C5CBC(self);
}

void fn_803ADE10(void) {

}

void fn_803ADE14(u8 *self) {
    extern void fn_801C5CBC(u8 *);
    extern u8 lbl_804161F8[];
    *(u8 **)(self + 4) = lbl_804161F8;
    fn_801C5CBC(self);
}

void fn_803ADE44(void) {

}

void fn_803ADE48(u8 *self) {
    extern void fn_801C5CBC(u8 *);
    extern u8 lbl_804162B8[];
    *(u8 **)(self + 4) = lbl_804162B8;
    fn_801C5CBC(self);
}

void fn_803ADE78(void) {

}

void fn_803ADE7C(void *self, s32 flags) {
    extern u8 lbl_80416DF0[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(self, void **, 0x2C) = lbl_80416DF0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803ADEB0(void *self, s32 flags) {
    extern u8 lbl_80416E20[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(self, void **, 0x24) = lbl_80416E20;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803ADEE4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

extern u8 lbl_80416E50[];
void fn_803ADF5C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_80416E50;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_80416EE0[];
void fn_803ADF90(u8 *self, s32 flags) {
    *(void **)(self + 0x10) = lbl_80416EE0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_80416EB0[];
void fn_803ADFC4(u8 *self, s32 flags) {
    *(void **)(self + 0x10) = lbl_80416EB0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_80416E80[];
void fn_803ADFF8(u8 *self, s32 flags) {
    *(void **)(self + 0x10) = lbl_80416E80;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803AE02C(void *self, s32 flags) {
    extern u8 lbl_80416F38[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(self, void **, 0x80) = lbl_80416F38;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803AE060(void) {

}

s32 fn_803AE064(void) {
    return 0;
}

s32 fn_803AE06C(void) {
    return 0;
}

void fn_803AE074(void) {

}

void fn_803AE078(void) {

}

void fn_803AE07C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE0F4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE16C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE1E4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE25C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

extern u8 lbl_80416F90[];
void fn_803AE2D4(s32 *self, s32 flags) {
    self[5] = (s32)lbl_80416F90;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803AE308(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE380(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE3F8(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE470(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE4E8(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE560(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE5D8(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE650(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE6C8(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE740(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE7B8(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE830(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE8A8(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE920(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AE998(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AEA10(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AEA88(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AEB00(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AEB78(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AEBF0(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

extern u8 lbl_80417160[];
void fn_803AEC68(s32 *self, s32 flags) {
    self[5] = (s32)lbl_80417160;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_80417190[];
void fn_803AEC9C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_80417190;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803AF0E8(u8 *self) {
    extern void fn_801C5CBC(u8 *);
    extern u8 lbl_80417290[];
    *(u8 **)(self + 4) = lbl_80417290;
    fn_801C5CBC(self);
}

void fn_803AF118(void) {

}

void fn_803AF11C(u8 *self) {
    extern void fn_801C5CBC(u8 *);
    extern u8 lbl_804171C8[];
    *(u8 **)(self + 4) = lbl_804171C8;
    fn_801C5CBC(self);
}

void fn_803AF14C(void) {

}

void fn_803AF150(u8 *self) {
    extern void fn_801C5CBC(u8 *);
    extern u8 lbl_804171A8[];
    *(u8 **)(self + 4) = lbl_804171A8;
    fn_801C5CBC(self);
}

void fn_803AF180(void) {

}

void fn_803AF184(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AF1FC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AF274(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AF2EC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AF364(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AF3DC(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF410(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF444(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF478(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF4AC(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF4E0(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF514(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF548(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF57C(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF5B0(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF5E4(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF618(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF64C(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF680(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF6B4(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF6E8(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF71C(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF750(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF784(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF7B8(void *arg0, s32 arg1) {
    extern u8 lbl_80417510[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417510;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803AF7EC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AF864(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AF8DC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AF954(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AF9CC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AFA44(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AFABC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AFB34(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AFBAC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AFC24(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AFC9C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AFD14(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AFD8C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AFE04(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AFE7C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AFEF4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AFF6C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803AFFE4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B005C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B00D4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B014C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B01C4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B023C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B02B4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B032C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B03A4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

extern u8 lbl_80417770[];
void fn_803B041C(u8 *self, s32 flags) {
    *(void **)(self + 0x10) = lbl_80417770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_80417770[];
void fn_803B0450(u8 *self, s32 flags) {
    *(void **)(self + 0x10) = lbl_80417770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803B0484(u8 *self, s32 flags) {
    *(void **)(self + 0x10) = lbl_80417770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803B04B8(u8 *self, s32 flags) {
    *(void **)(self + 0x10) = lbl_80417770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803B04EC(u8 *self, s32 flags) {
    *(void **)(self + 0x10) = lbl_80417770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803B0520(u8 *self, s32 flags) {
    *(void **)(self + 0x10) = lbl_80417770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803B0554(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B05CC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0644(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B06BC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0734(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B07AC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0824(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B089C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0914(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B098C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0A04(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0A7C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0AF4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0B6C(void *self, s32 flags) {
    extern u8 lbl_80417860[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(self, void **, 4) = lbl_80417860;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803B0BA0(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0C18(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0C90(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0D08(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0D80(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0DF8(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0F00(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0F78(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B0FF0(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1068(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B10E0(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1158(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B11D0(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1248(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B12C0(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1338(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B13B0(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1428(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B14A0(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1518(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1590(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1608(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1680(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B16F8(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1770(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B17E8(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1860(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B18D8(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1950(u8 *self, s32 flags) {
    *(void **)(self + 0x10) = lbl_80417770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803B1984(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B19FC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1A74(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1AEC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1B64(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1BDC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1CE4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1D5C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1DD4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1E4C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1EC4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1F3C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B1FB4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B202C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B20A4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B211C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B2194(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B220C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B2284(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B22FC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B2374(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B23EC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B2464(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B24DC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B2554(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B25CC(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B2644(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B274C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B27C4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B283C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B28B4(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B292C(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B29F8(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B2A70(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B2AE8(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B2B60(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B2BD8(BoundPmf *b) {
    s16 index = b->index;
    char *obj = b->obj;
    VtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (index >= 0) {
        e = (*(VtblEntry **)(obj + b->u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = b->u.pfn;
    }
    delta = b->delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f(obj + off);
}

void fn_803B2C50(void *arg0, s32 arg1) {
    extern u8 lbl_80417CF0[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417CF0;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803B2C84(void *arg0, s32 arg1) {
    extern u8 lbl_80417CF0[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417CF0;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803B61D4(void *arg0, s32 arg1) {
    extern u8 lbl_80417CF0[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417CF0;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803B6208(void *arg0, s32 arg1) {
    extern u8 lbl_80417CF0[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80417CF0;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

extern void fn_802BE53C(void *);
void *fn_803B6F48(void *self) {
    fn_802BE53C(self);
    return self;
}

s32 fn_803B71F8(void) {
    return 0;
}

s32 fn_803B7200(void) {
    return 0;
}

s32 fn_803B7268(void) {
    return 0;
}

s32 fn_803B7270(void) {
    return 0;
}

s32 fn_803B72D8(s32 arg0) {
    return arg0 & 0xFFFFFFFE;
}

void fn_802ADE44();
void fn_803B7458(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_803B747C(u8 *self) {
    return self + 8;
}

s32 fn_803B7484(void) {
    return 1;
}

s32 fn_803B748C(void) {
    return 1;
}

void fn_802AEA9C();
void fn_803B7494(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802AEABC();
void fn_803B74B8(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

void fn_803B74DC(void *arg0, s32 arg1) {
    extern char lbl_80418308[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_80418308;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x20);
    }
}

void fn_803B7554(void *arg0, s32 arg1) {
    extern char lbl_804189F0[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_804189F0;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x24);
    }
}

void fn_803B75CC(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

s32 fn_803B75F0(void) {
    return 1;
}

u8 *fn_803B75F8(u8 *self) {
    return self + 8;
}

s32 fn_803B7600(void) {
    return 1;
}

void fn_803B7608(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_803B762C(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

void fn_803B7650(void *arg0, s32 arg1) {
    extern char lbl_80418208[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_80418208;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x20);
    }
}

void fn_803B78AC(void) {

}

extern void (*lbl_80443318[])(void);
void fn_803B79BC(void) {
    lbl_80443318[0]();
}

void fn_803B7D98(void) {
    lbl_80443318[0]();
}

s32 fn_803B7DC4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void fn_803B7DCC(void) {
    lbl_80443318[0]();
}

s32 fn_803B8378(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) == 0;
}

void fn_803B8C70(void) {

}

void fn_803B8C74(void) {

}

s32 fn_803B8C78(void) {
    return 0;
}

s32 fn_803B8C80(void) {
    return 0;
}

void fn_803B8CE8(void) {

}

void fn_803B8CEC(void) {

}

s32 fn_803B8D70(void) {
    return 0;
}

s32 fn_803B8D78(void) {
    return 0;
}

void fn_803B8DE0(void) {

}

void fn_803B8DE4(void) {

}

void fn_803B8DE8(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_803B8E0C(u8 *self) {
    return self + 8;
}

s32 fn_803B8E14(void) {
    return 1;
}

s32 fn_803B8E1C(void) {
    return 1;
}

void fn_803B8E24(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_803B8E48(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

s32 fn_803B8EE4(s32 *arg0) {
    return *arg0 + 8;
}

s32 fn_803B8EF0(s32 *arg0) {
    return *arg0 + 8;
}

void fn_803B90C8(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803B90C8(void *);
void *fn_803B90DC(void *self) {
    fn_803B90C8(self);
    return self;
}

void fn_803B910C(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803B9128(s32 *self) {
    fn_803B910C(self, self[1]);
    fn_802D1A00(fn_802D0AB8(), self[0]);
    fn_803B90C8(self);
}

extern void fn_803B9128(s32 *);
void fn_803B9174(s32 self, s32 flags) {
    fn_803B9128(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803B93E8(void *dst, void *src, s32 n) {
    struct Elem20 { s32 a, b, c, d, e; };
    struct Elem20 *d = (struct Elem20 *)dst;
    struct Elem20 *s = (struct Elem20 *)src;

    s += n - 1;
    d += n - 1;
    while (--n != -1) {
        *d-- = *s--;
    }
}

void fn_803B9444(void *, s32, s32, s32);
void fn_803B9520(void *self, s32 arg1) {
    fn_803B9444(self, arg1, M2C_FIELD(self, s32 *, 4), 1);
}

void fn_803B9548(void **self, s32 flags) {
    void fn_802D20E8(void *);
    void fn_803B9594(void *);
    extern u8 lbl_80419328[];
    *self = lbl_80419328;
    fn_803B9594(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803B9594(void) {
    M2C_UNK fn_802C7C90();
    extern s32 lbl_80494DBC;
    if ((s32) lbl_80494DBC == 0) {
        fn_802C7C90();
    }
}

s32 fn_803B95C0(void) {
    return 1;
}

void fn_803B95C8(void) {

}

extern void fn_8039A514(void *);
void *fn_803B95CC(void *self) {
    fn_8039A514(self);
    return self;
}

void fn_803B95FC(s32 self) {
    s32 *p = (s32 *)self;
    void *ptr;

    fn_8039A4F8((s32 *)p[0], p[1]);
    ptr = (void *)p[0];
    fn_802D1A00(fn_802D0AB8(), ptr);
    fn_8039A514(p);
}

extern void fn_803B95FC(s32);
void fn_803B9648(s32 self, s32 flags) {
    fn_803B95FC(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

Vec4f *fn_803B9688(Vec4f *v) {
    extern f32 lbl_803F0198[];
    extern f32 lbl_803F019C[];
    f32 zero = lbl_803F0198[0];
    f32 one = lbl_803F019C[0];
    v->w = one;
    v->z = zero;
    v->y = zero;
    v->x = zero;
    return v;
}

Vec4f *fn_803B96B0(Vec4f *v, const Vec4f *src, f32 s) {
    f32 x = src->x;
    f32 y = src->y;
    f32 z = src->z;
    f32 w = src->w;
    v->x = s * x;
    v->y = s * y;
    v->z = s * z;
    v->w = s * w;
    return v;
}

void *fn_803B96E8(void) {
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern u8 lbl_804194A0[];
    void **p = (void **)fn_802D1FC8(4);
    *p = lbl_804194A0;
    return p;
}

extern void fn_803B971C(void **);
void fn_803B971C(void **arg0) {
    extern u8 lbl_804194A0[];
    *arg0 = lbl_804194A0;
}

void fn_803B97C0(void **self, s32 flags);
void fn_803B972C(void **self) {
    fn_803B97C0(self, 2);
}

void fn_803B9750(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_804936F0[];
void *fn_803B9790(void) {
    return lbl_804936F0;
}

extern s32 lbl_804936FC[];
s32 fn_803B979C(void) {
    return lbl_804936FC[0];
}

extern s32 lbl_80493700[];
s32 fn_803B97A8(void) {
    return lbl_80493700[0];
}

extern u16 lbl_80493704[];
u16 fn_803B97B4(void) {
    return lbl_80493704[0];
}

extern u8 lbl_804194A0[];
void fn_803B97C0(void **self, s32 flags) {
    *self = lbl_804194A0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803B97F4(void) {

}

void fn_803B97F8(void) {

}

void fn_803B97FC(void) {

}

void fn_803B9800(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803B981C(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

void fn_803B9830(s32 self) {
    s32 *p = (s32 *)self;
    void *ptr;

    fn_803B9800((s32 *)p[0], p[1]);
    ptr = (void *)p[0];
    fn_802D1A00(fn_802D0AB8(), ptr);
    fn_803B981C(p);
}

extern void fn_803B9830(s32);
void fn_803B987C(s32 self, s32 flags) {
    fn_803B9830(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern void fn_803B981C(void *);
void *fn_803B98BC(void *self) {
    fn_803B981C(self);
    return self;
}

void fn_803B98EC(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803B9908(s32 *dst, s32 *src, s32 n) {
    while (--n != -1) {
        *dst++ = *src++;
    }
}

void fn_803B9AB8(s32 *dst, s32 *src, s32 n) {
    src += n - 1;
    dst += n - 1;
    while (--n != -1) {
        *dst-- = *src--;
    }
}

void fn_803B9934(void *, s32, s32);
void fn_803B9AF4(void *self, s32 arg1, s32 arg2, s32 arg3) {
    s32 size = M2C_FIELD(self, s32 *, 4);
    s32 newSize = size + arg3;

    if (newSize > M2C_FIELD(self, s32 *, 8)) {
        s32 cap = 1;
        while (cap < newSize) {
            cap += cap;
        }
        fn_803B9934(self, newSize, cap);
    } else {
        M2C_FIELD(self, s32 *, 4) = newSize;
        fn_803B98EC(M2C_FIELD(self, s32 **, 0) + size, newSize - size);
    }
    if (arg2 != size) {
        fn_803B9AB8(M2C_FIELD(self, s32 **, 0) + arg2 + arg3, M2C_FIELD(self, s32 **, 0) + arg2, size - arg2);
    }
    fn_803B9908(M2C_FIELD(self, s32 **, 0) + arg2, (s32 *)arg1, arg3);
}

void fn_803B9AF4(void *, s32, s32, s32);
void fn_803B9BCC(void *self, s32 arg1) {
    fn_803B9AF4(self, arg1, M2C_FIELD(self, s32 *, 4), 1);
}

void fn_803B9BF4(s32 *self, s32 n) {
    extern void fn_802D39F0(s32 *, s32);
    while (--n != -1) {
        fn_802D39F0(self, *self);
        self++;
    }
}

extern void fn_803B9C44(void *);
void fn_803B9C44(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

void fn_803B9C58(s32 *self, s32 n) {
    extern void fn_802D39E4(void *);
    while (--n != -1) {
        fn_802D39E4(self);
        self++;
    }
}

void fn_803B9CA4(s32 *dst, s32 *src, s32 n) {
    extern void fn_802D3CE4(s32 *, s32);
    while (--n != -1) {
        fn_802D3CE4(dst++, *src++);
    }
}

void fn_803B9E84(s32 *dst, s32 *src, s32 n) {
    extern void fn_802D3CE4(s32 *, s32);
    dst += n - 1;
    src += n - 1;
    while (--n != -1) {
        fn_802D3CE4(dst--, *src--);
    }
}

void fn_803B9EEC(void *, s32, s32, s32);
void fn_803B9FC4(void *self, s32 arg1) {
    fn_803B9EEC(self, arg1, M2C_FIELD(self, s32 *, 4), 1);
}

s32 fn_803B9FEC(s32 *self) {
    return *self;
}

extern void fn_803BA044(void *);
void fn_803BA044(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

void fn_803BA058(s32 *self, s32 n) {
    extern void fn_802D5238(void *);
    while (--n != -1) {
        fn_802D5238(self);
        self++;
    }
}

void fn_803BA2EC(void *, s32, s32, s32);
void fn_803BA3C4(void *self, s32 arg1) {
    fn_803BA2EC(self, arg1, M2C_FIELD(self, s32 *, 4), 1);
}

s32 fn_803BA3EC(s32 *self) {
    return *self;
}

void fn_803BA3F4(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803BA3F4(void *);
void *fn_803BA408(void *self) {
    fn_803BA3F4(self);
    return self;
}

void fn_803BA438(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803BA454(s32 self) {
    s32 **p = (s32 **)self;
    s32 *q;

    fn_803BA438(p[0], (s32)p[1]);
    q = p[0];
    fn_802D1A00(fn_802D0AB8(), q);
    fn_803BA3F4(p);
}

extern void fn_803BA454(s32);
void fn_803BA4A0(s32 self, s32 flags) {
    fn_803BA454(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BA4E0(s32 self) {
    s32 i = M2C_FIELD(self, s32 *, 4);
    s32 *p = M2C_FIELD(self, s32 **, 0);

    while (i != 0) {
        fn_802D1A00(fn_802D0AB8(), *p);
        p++;
        i--;
    }
    fn_803BA454(self);
}

void fn_803BA538(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803BA554(s32 *dst, s32 *src, s32 n) {
    while (--n != -1) {
        *dst++ = *src++;
    }
}

void fn_803BA704(s32 *dst, s32 *src, s32 n) {
    src += n - 1;
    dst += n - 1;
    while (--n != -1) {
        *dst-- = *src--;
    }
}

void fn_803BA580(void *, s32, s32);
void fn_803BA740(void *self, s32 arg1, s32 arg2, s32 arg3) {
    s32 size = M2C_FIELD(self, s32 *, 4);
    s32 newSize = size + arg3;

    if (newSize > M2C_FIELD(self, s32 *, 8)) {
        s32 cap = 1;
        while (cap < newSize) {
            cap += cap;
        }
        fn_803BA580(self, newSize, cap);
    } else {
        M2C_FIELD(self, s32 *, 4) = newSize;
        fn_803BA538(M2C_FIELD(self, s32 **, 0) + size, newSize - size);
    }
    if (arg2 != size) {
        fn_803BA704(M2C_FIELD(self, s32 **, 0) + arg2 + arg3, M2C_FIELD(self, s32 **, 0) + arg2, size - arg2);
    }
    fn_803BA554(M2C_FIELD(self, s32 **, 0) + arg2, (s32 *)arg1, arg3);
}

void fn_803BA740(void *, s32, s32, s32);
void fn_803BA818(void *self, s32 arg1) {
    fn_803BA740(self, arg1, M2C_FIELD(self, s32 *, 4), 1);
}

void fn_803BA840(void *arg0, s32 arg1) {
    extern u8 lbl_804194F8[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804194F8;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803BA874(void *arg0, s32 arg1) {
    extern u8 lbl_804194F8[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804194F8;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_802F05AC(void);
void fn_803BAAB8(void) {
    fn_802F05AC();
}

void fn_803BAAD8(void) {
    fn_802F05AC();
}

void fn_803BAAF8(void) {
    fn_802F05AC();
}

void fn_803BAB18(void) {
    fn_802F05AC();
}

void fn_803BAB38(void) {
    fn_802F05AC();
}

void fn_803BAB58(void) {
    fn_802F05AC();
}

void fn_803BAB78(void) {
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_ctr_3;
    s32 var_ctr_4;

    var_ctr = 3;
    do {
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_ctr_2 = 4;
    do {
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
    var_ctr_3 = 3;
    do {
        var_ctr_3 -= 1;
    } while (var_ctr_3 != 0);
    var_ctr_4 = 4;
    do {
        var_ctr_4 -= 1;
    } while (var_ctr_4 != 0);
}

void fn_803BAD78(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803BAD78(void *);
void *fn_803BAD8C(void *self) {
    fn_803BAD78(self);
    return self;
}

void fn_803BADBC(u8 *p, s32 n) {
    extern void fn_803009E8(void *, s32);
    while (--n != -1) {
        fn_803009E8(p, 2);
        p += 0x6C;
    }
}

void fn_803BAE0C(s32 self) {
    extern s32 lbl_8045B82C[];
    extern void fn_80338184(void *, s32);
    fn_803BADBC((u8 *)((s32 *)self)[0], ((s32 *)self)[1]);
    fn_80338184(lbl_8045B82C, ((s32 *)self)[0]);
    fn_803BAD78((void *)self);
}

extern void fn_803BAE0C(s32);
void fn_803BAE58(s32 self, s32 flags) {
    fn_803BAE0C(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BAE98(u8 *p, s32 n) {
    extern void fn_8030096C(void *);
    while (--n != -1) {
        fn_8030096C(p);
        p += 0x6C;
    }
}

void fn_803BAEE4(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803BAF00(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

void fn_803BAF14(u8 *p, s32 n) {
    while (--n != -1) {
        u8 *q = p;
        p += 0x34;
        M2C_FIELD(q, s32 *, 0x0) = 0;
        M2C_FIELD(q, s32 *, 0x4) = 0;
        M2C_FIELD(q, s32 *, 0x8) = 0;
        M2C_FIELD(q, s32 *, 0xC) = 0;
        M2C_FIELD(q, s32 *, 0x10) = 0;
        M2C_FIELD(q, s32 *, 0x14) = 0;
        M2C_FIELD(q, s32 *, 0x18) = 0;
        M2C_FIELD(q, s32 *, 0x1C) = 0;
        M2C_FIELD(q, s32 *, 0x20) = 0;
        M2C_FIELD(q, u8 *, 0x24) = 0xFF;
        M2C_FIELD(q, u8 *, 0x25) = 0xFF;
        M2C_FIELD(q, u8 *, 0x26) = 0xFF;
        M2C_FIELD(q, u8 *, 0x27) = 0xFF;
        M2C_FIELD(q, s16 *, 0x28) = 0;
        M2C_FIELD(q, u8 *, 0x2B) = 0;
        M2C_FIELD(q, u8 *, 0x2A) = 0;
        M2C_FIELD(q, s32 *, 0x2C) = 0;
        M2C_FIELD(q, u8 *, 0x30) = 0;
    }
}

void fn_803BAF84(s32 *dst, s32 *src, s32 n);
void fn_803BB000(void *self, s32 n, s32 arg2);
s32 *fn_803BB120(s32 *self, s32 *other);
s32 *fn_803BB120(s32 *self, s32 *other) {
    fn_803BB000(self, other[1], 0);
    fn_803BAF84((s32 *)self[0], (s32 *)other[0], other[1]);
    return self;
}

void fn_803BB370(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

extern void fn_803BB38C(void *);
void fn_803BB38C(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

void fn_803BB3A0(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803BB3BC(s32 *dst, s32 *src, s32 n) {
    while (--n != -1) {
        *dst++ = *src++;
    }
}

void fn_803BB3E8(s32 **, s32, s32);
void *fn_803BB654(void *self, s32 **arg1) {
    s32 n;
    s32 i;

    {
        VtblEntry *vt = *(VtblEntry **)((char *)self + 0x18);
        ((void (*)(void *, void *, s32))vt[6].pfn)((char *)self + vt[6].delta, &n, 4);
    }
    fn_803BB3E8(arg1, n, 0);
    for (i = 0; i < n; i++) {
        VtblEntry *vt = *(VtblEntry **)((char *)self + 0x18);
        ((void (*)(void *, void *, s32))vt[6].pfn)((char *)self + vt[6].delta, &arg1[0][i], 4);
    }
    return self;
}

extern void fn_803BAF00(void *);
void *fn_803BB700(void *self) {
    fn_803BAF00(self);
    return self;
}

void fn_803BB730(s32 self) {
    extern s32 lbl_8045B82C[];
    extern void fn_80338184(void *, s32);
    fn_803BAEE4((u8 *)((s32 *)self)[0], ((s32 *)self)[1]);
    fn_80338184(lbl_8045B82C, ((s32 *)self)[0]);
    fn_803BAF00((void *)self);
}

extern void fn_803BB730(s32);
void fn_803BB77C(s32 self, s32 flags) {
    fn_803BB730(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BB7BC(void *self, s32 flags) {
    extern u8 lbl_8041ACA0[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(self, void **, 0x24) = lbl_8041ACA0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BB7F0(void *self, s8 *p) {
    *p = 0;
}

void fn_803BB7FC(void) {

}

void fn_803BB800(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803BB800(void *);
void *fn_803BB814(void *self) {
    fn_803BB800(self);
    return self;
}

void fn_803BB844(s32 self) {
    extern s32 lbl_8045B390[];
    extern void fn_80338184(void *, s32);
    fn_80399CD4((u8 *)((s32 *)self)[0], ((s32 *)self)[1]);
    fn_80338184(lbl_8045B390, ((s32 *)self)[0]);
    fn_80399CF0((void *)self);
}

extern void fn_803BB844(s32);
void fn_803BB890(s32 self, s32 flags) {
    fn_803BB844(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern void fn_803BB940(s32);
void fn_803BB98C(s32 self, s32 flags) {
    fn_803BB940(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern void fn_80399CF0(void *);
void *fn_803BB9CC(void *self) {
    fn_80399CF0(self);
    return self;
}

s32 *fn_803BBA58(s32 *self, s32 *other);
s32 *fn_803BBA58(s32 *self, s32 *other) {
    fn_80399D4C(self, other[1], 0);
    fn_80399D20((s32 *)self[0], (s32 *)other[0], other[1]);
    return self;
}

void fn_803BBD88(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
}

s32 fn_803BBD94(s32 *arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 4) + *arg0), s32 *, 4);
}

extern u8 lbl_8041B6F0[];
void fn_803BBDA8(void **self, s32 flags) {
    *self = lbl_8041B6F0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BBDDC(void) {

}

void fn_803BBDE0(void) {

}

void fn_803BBFD0(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803BBFD0(void *);
void *fn_803BBFE4(void *self) {
    fn_803BBFD0(self);
    return self;
}

extern void fn_803BC064(s32);
void fn_803BC0B0(s32 self, s32 flags) {
    fn_803BC064(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BC0F0(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803BC0F0(void *);
void *fn_803BC104(void *self) {
    fn_803BC0F0(self);
    return self;
}

void fn_803BC134(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803BC150(s32 self) {
    extern s32 lbl_8045B82C[];
    extern void fn_80338184(void *, s32);
    fn_803BC134((u8 *)((s32 *)self)[0], ((s32 *)self)[1]);
    fn_80338184(lbl_8045B82C, ((s32 *)self)[0]);
    fn_803BC0F0((void *)self);
}

extern void fn_803BC150(s32);
void fn_803BC19C(s32 self, s32 flags) {
    fn_803BC150(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BC1DC(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803BC1DC(void *);
void *fn_803BC1F0(void *self) {
    fn_803BC1DC(self);
    return self;
}

extern void fn_803BC284(s32);
void fn_803BC2D0(s32 self, s32 flags) {
    fn_803BC284(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BC310(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803BC310(void *);
void *fn_803BC324(void *self) {
    fn_803BC310(self);
    return self;
}

void fn_803BC354(u8 *p, s32 n) {
    while (--n != -1) {
        VtblEntry *vt = *(VtblEntry **)(p + 0xAC);
        u8 *q = p;
        p += 0xB0;
        ((void (*)(void *, s32))vt[1].pfn)(q + vt[1].delta, 2);
    }
}

void fn_803BC3B8(s32 self) {
    extern s32 lbl_8045B82C[];
    extern void fn_80338184(void *, s32);
    extern void fn_803BC310(void *);
    fn_803BC354((u8 *)((s32 *)self)[0], ((s32 *)self)[1]);
    fn_80338184(lbl_8045B82C, ((s32 *)self)[0]);
    fn_803BC310((void *)self);
}

extern void fn_803BC3B8(s32);
void fn_803BC404(s32 self, s32 flags) {
    fn_803BC3B8(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BC444(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803BC444(void *);
void *fn_803BC458(void *self) {
    fn_803BC444(self);
    return self;
}

void fn_803BC488(u8 *p, s32 n) {
    while (--n != -1) {
        VtblEntry *vt = *(VtblEntry **)(p + 0x54);
        u8 *q = p;
        p += 0x58;
        ((void (*)(void *, s32))vt[1].pfn)(q + vt[1].delta, 2);
    }
}

void fn_803BC4EC(s32 self) {
    extern s32 lbl_8045B82C[];
    extern void fn_80338184(void *, s32);
    extern void fn_803BC444(void *);
    fn_803BC488((u8 *)((s32 *)self)[0], ((s32 *)self)[1]);
    fn_80338184(lbl_8045B82C, ((s32 *)self)[0]);
    fn_803BC444((void *)self);
}

extern void fn_803BC4EC(s32);
void fn_803BC538(s32 self, s32 flags) {
    fn_803BC4EC(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BC578(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803BC578(void *);
void *fn_803BC58C(void *self) {
    fn_803BC578(self);
    return self;
}

void fn_803BC5BC(u8 *p, s32 n) {
    while (--n != -1) {
        VtblEntry *vt = *(VtblEntry **)(p + 0x54);
        u8 *q = p;
        p += 0x58;
        ((void (*)(void *, s32))vt[1].pfn)(q + vt[1].delta, 2);
    }
}

void fn_803BC620(s32 self) {
    extern s32 lbl_8045B82C[];
    extern void fn_80338184(void *, s32);
    fn_803BC5BC((u8 *)((s32 *)self)[0], ((s32 *)self)[1]);
    fn_80338184(lbl_8045B82C, ((s32 *)self)[0]);
    fn_803BC578((void *)self);
}

extern void fn_803BC620(s32);
void fn_803BC66C(s32 self, s32 flags) {
    fn_803BC620(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void *fn_803BC8B4(u8 *self, s32 *arr) {
    extern void fn_803BC794(void *, s32, s32);
    extern void fn_8031A548(void *, void *);
    u8 *vt = M2C_FIELD(self, u8 **, 0x18);
    s32 n;
    s32 i;

    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)(self + M2C_FIELD(vt, s16 *, 0x30), &n, 4);
    fn_803BC794(arr, n, 0);
    for (i = 0; i < n; i++) {
        fn_8031A548(self, (u8 *)*arr + i * 0xE0);
    }
    return self;
}

void fn_803BC94C(u8 *p, s32 n) {
    extern void fn_802CAE18(void *);
    while (--n != -1) {
        fn_802CAE18(p);
        p += 0x58;
    }
}

void fn_803BC998(u8 *dst, u8 *src, s32 n) {
    while (--n != -1) {
        u8 *d = dst;
        u8 *s = src;
        u8 *dp;
        u8 *sp;
        s32 i;
        src += 0x58;
        dst += 0x58;
        dp = d;
        sp = s;
        for (i = 0x40; i != 0; i--) {
            *dp++ = *sp++;
        }
        M2C_FIELD(d, s32 *, 0x40) = M2C_FIELD(s, s32 *, 0x40);
        M2C_FIELD(d, s32 *, 0x44) = M2C_FIELD(s, s32 *, 0x44);
        fn_8039D388((s32 *)(d + 0x48), (s32 *)(s + 0x48));
    }
}

void *fn_803BCB50(u8 *self, s32 *arr) {
    extern void fn_803BCA30(void *, s32, s32);
    extern void fn_802CB278(void *, void *);
    u8 *vt = M2C_FIELD(self, u8 **, 0x18);
    s32 n;
    s32 i;

    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)(self + M2C_FIELD(vt, s16 *, 0x30), &n, 4);
    fn_803BCA30(arr, n, 0);
    for (i = 0; i < n; i++) {
        fn_802CB278(self, (u8 *)*arr + i * 0x58);
    }
    return self;
}

void fn_803BCBE8(u8 *p, s32 n) {
    extern void fn_80366A7C(void *);
    while (--n != -1) {
        fn_80366A7C(p);
        p += 0x58;
    }
}

void fn_8039A7F0(s32 *dst, s32 *src, s32 n);
void fn_8039A8DC(void *self, s32 n, s32 arg2);
s32 *fn_803BCC34(s32 *self, s32 *other);
s32 *fn_803BCC34(s32 *self, s32 *other) {
    fn_8039A8DC(self, other[1], 0);
    fn_8039A7F0((s32 *)self[0], (s32 *)other[0], other[1]);
    return self;
}

void fn_803BCC80(u8 *dst, u8 *src, s32 n) {
    while (--n != -1) {
        u8 *d = dst;
        u8 *s = src;
        u8 *dp;
        u8 *sp;
        s32 i;
        src += 0x58;
        dst += 0x58;
        dp = d;
        sp = s;
        for (i = 0x40; i != 0; i--) {
            *dp++ = *sp++;
        }
        M2C_FIELD(d, s32 *, 0x40) = M2C_FIELD(s, s32 *, 0x40);
        M2C_FIELD(d, s32 *, 0x44) = M2C_FIELD(s, s32 *, 0x44);
        fn_803BCC34((s32 *)(d + 0x48), (s32 *)(s + 0x48));
    }
}

void *fn_803BCE38(u8 *self, s32 *arr) {
    extern void fn_803BCD18(void *, s32, s32);
    extern void fn_803670E4(void *, void *);
    u8 *vt = M2C_FIELD(self, u8 **, 0x18);
    s32 n;
    s32 i;

    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)(self + M2C_FIELD(vt, s16 *, 0x30), &n, 4);
    fn_803BCD18(arr, n, 0);
    for (i = 0; i < n; i++) {
        fn_803670E4(self, (u8 *)*arr + i * 0x58);
    }
    return self;
}

void fn_803BCED0(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803BB16C(s32 *dst, s32 *src, s32 n);
void fn_803BB250(void *self, s32 n, s32 arg2);
s32 *fn_803BD14C(s32 *self, s32 *other);
s32 *fn_803BD14C(s32 *self, s32 *other) {
    fn_803BB250(self, other[1], 0);
    fn_803BB16C((s32 *)self[0], (s32 *)other[0], other[1]);
    return self;
}

s32 fn_803BD464(s32 *arr, u8 *data) {
    void *fn_802482F8(void *, const void *, u32);
    void fn_803BCA30(void *, s32, s32);
    u8 *start = data;
    s32 n;
    s32 i;

    fn_802482F8(&n, data, 4);
    data += 4;
    fn_803BCA30(arr, n, 0);
    for (i = 0; i < n; i++) {
        u8 *obj = (u8 *)*arr + i * 0x58;
        u8 *vt = M2C_FIELD(obj, u8 **, 0x54);
        data += M2C_FIELD(vt, s32 (**)(void *, u8 *), 0x1C)(obj + M2C_FIELD(vt, s16 *, 0x18), data);
    }
    return data - start;
}

s32 fn_803BD508(s32 *arr, u8 *data) {
    void *fn_802482F8(void *, const void *, u32);
    void fn_803BCD18(void *, s32, s32);
    u8 *start = data;
    s32 n;
    s32 i;

    fn_802482F8(&n, data, 4);
    data += 4;
    fn_803BCD18(arr, n, 0);
    for (i = 0; i < n; i++) {
        u8 *obj = (u8 *)*arr + i * 0x58;
        u8 *vt = M2C_FIELD(obj, u8 **, 0x54);
        data += M2C_FIELD(vt, s32 (**)(void *, u8 *), 0x1C)(obj + M2C_FIELD(vt, s16 *, 0x18), data);
    }
    return data - start;
}

s32 fn_803BD5AC(s32 *arr, u8 *data) {
    void *fn_802482F8(void *, const void *, u32);
    void fn_803BCF48(void *, s32, s32);
    s32 fn_8036AA70(void *, u8 *);
    u8 *start = data;
    s32 n;
    s32 i;

    fn_802482F8(&n, data, 4);
    data += 4;
    fn_803BCF48(arr, n, 0);
    for (i = 0; i < n; i++) {
        data += fn_8036AA70((u8 *)*arr + i * 0x1C, data);
    }
    return data - start;
}

void fn_803BD770(void *self) {
    extern void fn_80338184(void *, s32);
    extern u8 lbl_8045BA40[];
    if (M2C_FIELD(self, s32 *, 0xC) != 0) {
        fn_80338184(lbl_8045BA40, M2C_FIELD(self, s32 *, 0xC));
        M2C_FIELD(self, s32 *, 0xC) = 0;
    }
    if (M2C_FIELD(self, s32 *, 0x10) != 0) {
        fn_80338184(lbl_8045BA40, M2C_FIELD(self, s32 *, 0x10));
        M2C_FIELD(self, s32 *, 0x10) = 0;
    }
}

void fn_803BD7D8(void *self) {
    fn_802D8BEC(self);
}

void fn_80335FD8(void);
void fn_803BD7F8(void) {
    fn_80335FD8();
}

void fn_803BD818(void **self, s32 flags) {
    extern u8 lbl_8041BC88[];
    void fn_8031E910(void *, s32);
    void fn_803BD888(void *);
    *self = lbl_8041BC88;
    fn_8031E910(self, 0);
    if (flags & 1) {
        fn_803BD888(self);
    }
}

void fn_803BD868(void) {
    fn_80335FD8();
}

extern void *fn_802D0AB8(void);
extern void fn_802D1A00(void *, void *);
void fn_803BD888(void *arg0) {
    fn_802D1A00(fn_802D0AB8(), arg0);
}

void fn_803BD8BC(void) {
    fn_80335FD8();
}

void fn_803BD8DC(void) {
    fn_80335FD8();
}

void fn_803BD8FC(void) {
    fn_80335FD8();
}

void fn_803BD91C(void) {
    fn_80335FD8();
}

void fn_803BD93C(void) {
    fn_80335FD8();
}

void fn_803BD95C(void) {
    fn_80335FD8();
}

void fn_803BD97C(void) {
    fn_80335FD8();
}

void fn_803BD99C(void) {
    fn_80335FD8();
}

void fn_803BD9BC(void) {
    fn_80335FD8();
}

void fn_803BD9DC(void) {
    fn_80335FD8();
}

void fn_803BD9FC(void) {
    fn_80335FD8();
}

void fn_803BDA1C(void) {
    fn_80335FD8();
}

void fn_803BDE90(s32 *first, s32 *middle, s32 *last, s32 *val, s32 comp);
void fn_803BDFC8(s32 *first, s32 *middle, s32 *last, s32 comp) {
    fn_803BDE90(first, middle, last, 0, comp);
}

void fn_803BE4C4(Elem12 *first, Elem12 *last, s32 comp) {
    void fn_803BE0B8(Elem12 *, Elem12 *, s32, s32, s32);
    void fn_803BE44C(Elem12 *, Elem12 *, s32);

    if (first != last) {
        s32 n = last - first;
        s32 k = 0;
        while (n != 1) {
            n >>= 1;
            k++;
        }
        fn_803BE0B8(first, last, 0, k * 2, comp);
        fn_803BE44C(first, last, comp);
    }
}

s32 fn_803BE554(s32 *arg0, s32 *arg1) {
    return arg0[1] < arg1[1];
}

void fn_803BE56C(void) {
    fn_80335FD8();
}

void fn_803BE58C(void) {
    fn_80335FD8();
}

void fn_803BE5AC(void) {
    fn_80335FD8();
}

void fn_803BE5CC(void *arg0) {
    extern f32 lbl_803F3ED0[];
    f32 z = lbl_803F3ED0[0];
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 0x14) = z;
    M2C_FIELD(arg0, f32 *, 0x10) = z;
    M2C_FIELD(arg0, f32 *, 0xC) = z;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

extern u8 lbl_8041C438[];
void fn_803BE5F4(void **self, s32 flags) {
    *self = lbl_8041C438;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803103A0(void);
void fn_803BE628(void) {
    fn_803103A0();
}

s32 fn_803BE648(void) {
    return 1;
}

s32 fn_803BE650(s32 arg0) {
    s32 fn_80310790(s32);
    void fn_803BEA8C(s32);

    if (fn_80310790(arg0) != 0) {
        fn_803BEA8C(arg0);
        return 1;
    }
    return 0;
}

s32 fn_803BE694(s32 arg0) {
    s32 fn_8031082C(s32);
    void fn_803BEA8C(s32);

    if (fn_8031082C(arg0) != 0) {
        fn_803BEA8C(arg0);
        return 1;
    }
    return 0;
}

s32 fn_803BE6D8(s32 arg0) {
    s32 fn_803109E4(s32);
    void fn_803BEA8C(s32);

    if (fn_803109E4(arg0) != 0) {
        fn_803BEA8C(arg0);
        return 1;
    }
    return 0;
}

s32 fn_803BE71C(s32 arg0) {
    s32 fn_80310A54(s32);
    void fn_803BEA8C(s32);

    if (fn_80310A54(arg0) != 0) {
        fn_803BEA8C(arg0);
        return 1;
    }
    return 0;
}

void fn_80310758(void);
void fn_803BE760(void) {
    fn_80310758();
}

void fn_80310774(void);
void fn_803BE780(void) {
    fn_80310774();
}

extern u8 lbl_8041C9A8[];
void fn_803BEB94(void **self, s32 flags) {
    *self = lbl_8041C9A8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_803BEBC8(void) {
    return 1;
}

s32 fn_803BEBD0(void) {
    return 1;
}

s32 fn_803BEBD8(void) {
    return 0;
}

s32 fn_803BEBE0(void) {
    return 1;
}

s32 fn_803BEBE8(void) {
    return 1;
}

s32 fn_803BEBF0(void) {
    return 1;
}

void fn_803BEBF8(void) {

}

s32 fn_803BEBFC(void) {
    return 1;
}

s32 fn_803BEC04(void) {
    return 1;
}

s32 fn_803BEC0C(void) {
    return 0;
}

void fn_803BEC14(u8 *self) {
    *(u8 **)(self + 0x338) = lbl_8041CFA8;
    fn_802D8BEC(self);
}

void fn_803BEC44(void **self, s32 flags) {
    *self = lbl_804194A0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern void fn_8039A7C0(void *);
void *fn_803BEC78(void *self) {
    fn_8039A7C0(self);
    return self;
}

extern void fn_803BECA8(s32);
void fn_803BECF4(s32 self, s32 flags) {
    fn_803BECA8(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BED34(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803BED34(void *);
void *fn_803BED48(void *self) {
    fn_803BED34(self);
    return self;
}

void fn_803BED78(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

extern void fn_803BED94(s32);
void fn_803BEDE0(s32 self, s32 flags) {
    fn_803BED94(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BF0C0(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803BF0DC(s32 *dst, s32 *src, s32 n) {
    while (--n != -1) {
        *dst++ = *src++;
    }
}

void fn_803BF7EC(void **self, s32 flags) {
    *self = lbl_804194A0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BF820(void **self, s32 flags) {
    *self = lbl_804194A0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BF854(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803BF854(void *);
void *fn_803BF868(void *self) {
    fn_803BF854(self);
    return self;
}

extern void fn_803BF8FC(s32);
void fn_803BF948(s32 self, s32 flags) {
    fn_803BF8FC(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BF988(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803BF988(void *);
void *fn_803BF99C(void *self) {
    fn_803BF988(self);
    return self;
}

void fn_803BF9CC(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803BF9E8(s32 self) {
    extern s32 lbl_8045B0F0[];
    extern void fn_80338184(void *, s32);
    fn_803BF9CC((u8 *)((s32 *)self)[0], ((s32 *)self)[1]);
    fn_80338184(lbl_8045B0F0, ((s32 *)self)[0]);
    fn_803BF988((void *)self);
}

extern void fn_803BF9E8(s32);
void fn_803BFA34(s32 self, s32 flags) {
    fn_803BF9E8(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BFA74(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803BFA74(void *);
void *fn_803BFA88(void *self) {
    fn_803BFA74(self);
    return self;
}

void fn_803BFAB8(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803BFAD4(s32 self) {
    extern s32 lbl_8045B0F0[];
    extern void fn_80338184(void *, s32);
    fn_803BFAB8((u8 *)((s32 *)self)[0], ((s32 *)self)[1]);
    fn_80338184(lbl_8045B0F0, ((s32 *)self)[0]);
    fn_803BFA74((void *)self);
}

extern void fn_803BFAD4(s32);
void fn_803BFB20(s32 self, s32 flags) {
    fn_803BFAD4(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BFD58(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803BFEC0(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_803C00C0(void **self, s32 flags) {
    *self = lbl_804194A0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803C00F4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493DF4[];
void *fn_803C0134(void) {
    return lbl_80493DF4;
}

extern s32 lbl_80493E00[];
s32 fn_803C0140(void) {
    return lbl_80493E00[0];
}

extern s32 lbl_80493E04[];
s32 fn_803C014C(void) {
    return lbl_80493E04[0];
}

extern u16 lbl_80493E08[];
u16 fn_803C0158(void) {
    return lbl_80493E08[0];
}

void fn_803C0220(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803C0220(void *);
void *fn_803C0234(void *self) {
    fn_803C0220(self);
    return self;
}

void fn_803C0264(u8 *p, s32 n) {
    while (--n != -1) {
        VtblEntry *vt = *(VtblEntry **)(p + 0x54);
        u8 *q = p;
        p += 0x58;
        ((void (*)(void *, s32))vt[1].pfn)(q + vt[1].delta, 2);
    }
}

extern void fn_803C02C8(s32);
void fn_803C0314(s32 self, s32 flags) {
    fn_803C02C8(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803C03D4(u8 *p, s32 n) {
    extern void fn_80366A7C(void *);
    while (--n != -1) {
        fn_80366A7C(p);
        p += 0x58;
    }
}

void fn_803C0420(u8 *dst, u8 *src, s32 n) {
    while (--n != -1) {
        u8 *d = dst;
        u8 *s = src;
        u8 *dp;
        u8 *sp;
        s32 i;
        src += 0x58;
        dst += 0x58;
        dp = d;
        sp = s;
        for (i = 0x40; i != 0; i--) {
            *dp++ = *sp++;
        }
        M2C_FIELD(d, s32 *, 0x40) = M2C_FIELD(s, s32 *, 0x40);
        M2C_FIELD(d, s32 *, 0x44) = M2C_FIELD(s, s32 *, 0x44);
        fn_803BCC34((s32 *)(d + 0x48), (s32 *)(s + 0x48));
    }
}

void *fn_803C0654(u8 *self, s32 *arr) {
    extern void fn_803C04B8(void *, s32, s32);
    extern void fn_803670E4(void *, void *);
    u8 *vt = M2C_FIELD(self, u8 **, 0x18);
    s32 n;
    s32 i;

    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)(self + M2C_FIELD(vt, s16 *, 0x30), &n, 4);
    fn_803C04B8(arr, n, 0);
    for (i = 0; i < n; i++) {
        fn_803670E4(self, (u8 *)*arr + i * 0x58);
    }
    return self;
}

void fn_803C06EC(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
}

extern void fn_803C06EC(void *);
void *fn_803C0700(void *self) {
    fn_803C06EC(self);
    return self;
}

void fn_803C0730(u8 *p, s32 n) {
    while (--n != -1) {
        VtblEntry *vt = *(VtblEntry **)(p + 0xAC);
        u8 *q = p;
        p += 0xB0;
        ((void (*)(void *, s32))vt[1].pfn)(q + vt[1].delta, 2);
    }
}

extern void fn_803C0794(s32);
void fn_803C07E0(s32 self, s32 flags) {
    fn_803C0794(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039A334(void *self, s32 n, s32 arg2);
s32 *fn_803C08EC(s32 *self, s32 *other);
s32 *fn_803C08EC(s32 *self, s32 *other) {
    fn_8039A334(self, other[1], 0);
    fn_8039A2DC((s32 *)self[0], (s32 *)other[0], other[1]);
    return self;
}

extern void fn_8039A024(void *);
void *fn_803C0C20(void *self) {
    fn_8039A024(self);
    return self;
}

extern void fn_803C0C50(s32);
void fn_803C0C9C(s32 self, s32 flags) {
    fn_803C0C50(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803C0CDC(void) {
    M2C_UNK fn_803C0D34();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x24);
    fn_803C0D34();
}

void fn_803C0D34(void);
void fn_803C0D04(void) {
    fn_803C0D34();
}

void fn_803C0D24(M2C_UNK **arg0) {
    *arg0 = &lbl_804194A0;
}

