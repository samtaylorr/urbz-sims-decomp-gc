/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

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
void fn_802D8BEC(void *);
void fn_8030AD40(void);
void fn_8039AB04(void) {
    fn_8030AD40();
}

void fn_8018EA6C(void);
void fn_8039AD30(void) {
    fn_8018EA6C();
}

void fn_802C5484(void);
void fn_8039B5F8(void) {
    fn_802C5484();
}

void fn_8039B618(void) {
    fn_8018EA6C();
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

s32 fn_8039B738(void) {
    return 0;
}

s32 fn_8039BA10(void) {
    return 0;
}

void fn_8039BB90(void) {
    fn_8018EA6C();
}

void fn_8039BCB8(void) {
    fn_8018EA6C();
}

void fn_8039BCD8(void) {
    fn_8018EA6C();
}

void fn_8039C1B8(void) {
    fn_8030AD40();
}

void fn_8039C1D8(void) {
    fn_8030AD40();
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

void fn_8039C32C(void) {
    fn_8018EA6C();
}

void fn_8039D338(void) {
    fn_8018EA6C();
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

void fn_8039E6D0(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039E788(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039EA40(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039EC98(s32 *self, s32 flags) {
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

s32 fn_803A0680(void) {
    return 0;
}

s32 fn_803A0688(void) {
    return 0;
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

void fn_803A1424(void) {
    fn_8018EA6C();
}

void fn_803A161C(void) {
    fn_8018EA6C();
}

void fn_803A29C8(void) {
    fn_8018EA6C();
}

void fn_803A3F50(void) {
    fn_8018EA6C();
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

void fn_803A6424(void) {
    fn_8018EA6C();
}

void fn_803AB624(void) {
    fn_8018EA6C();
}

void fn_80197B90(void);
void fn_803AB794(void) {
    fn_80197B90();
}

void fn_803AB7B4(void) {
    fn_80197B90();
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

s32 fn_803AC3C0(void) {
    return 1;
}

s32 fn_803AC3D8(void) {
    return 1;
}

s32 fn_803AC3F0(void) {
    return 1;
}

s32 fn_803AC408(void) {
    return 1;
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

s32 fn_803AE064(void) {
    return 0;
}

s32 fn_803AE06C(void) {
    return 0;
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

s32 fn_803B7484(void) {
    return 1;
}

s32 fn_803B748C(void) {
    return 1;
}

s32 fn_803B75F0(void) {
    return 1;
}

s32 fn_803B7600(void) {
    return 1;
}

s32 fn_803B8C78(void) {
    return 0;
}

s32 fn_803B8C80(void) {
    return 0;
}

s32 fn_803B8D70(void) {
    return 0;
}

s32 fn_803B8D78(void) {
    return 0;
}

s32 fn_803B8E14(void) {
    return 1;
}

s32 fn_803B8E1C(void) {
    return 1;
}

s32 fn_803B95C0(void) {
    return 1;
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

void fn_80335FD8(void);
void fn_803BD7F8(void) {
    fn_80335FD8();
}

void fn_803BD868(void) {
    fn_80335FD8();
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

void fn_803BE56C(void) {
    fn_80335FD8();
}

void fn_803BE58C(void) {
    fn_80335FD8();
}

void fn_803BE5AC(void) {
    fn_80335FD8();
}

void fn_803103A0(void);
void fn_803BE628(void) {
    fn_803103A0();
}

s32 fn_803BE648(void) {
    return 1;
}

void fn_80310758(void);
void fn_803BE760(void) {
    fn_80310758();
}

void fn_80310774(void);
void fn_803BE780(void) {
    fn_80310774();
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

void fn_803C0D34(void);
void fn_803C0D04(void) {
    fn_803C0D34();
}

