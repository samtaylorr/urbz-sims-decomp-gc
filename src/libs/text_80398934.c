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
void fn_802D8BEC(void *);
void fn_8030AD40(void);
extern s32 lbl_8049662C;
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

void fn_8039A0B4(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
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

void fn_8039AB04(void) {
    fn_8030AD40();
}

void fn_8018EA6C(void);
void fn_8039AD30(void) {
    fn_8018EA6C();
}

s32 fn_8039AD74(s32 *self) {
    return self[2];
}

void fn_8039AD88(void) {

}

void fn_8039AE08(void) {

}

void fn_802C5484(void);
void fn_8039B5F8(void) {
    fn_802C5484();
}

void fn_8039B618(void) {
    fn_8018EA6C();
}

s32 fn_8039B65C(s32 *self) {
    return self[2];
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

s32 fn_8039BA10(void) {
    return 0;
}

s32 fn_8039BA18(EIWallPartFlags *self, s32 i) {
    return self->unk2C[i];
}

void fn_8039BB90(void) {
    fn_8018EA6C();
}

s32 fn_8039BBE8(s32 *self) {
    return self[2];
}

void fn_8039BCB8(void) {
    fn_8018EA6C();
}

void fn_8039BCD8(void) {
    fn_8018EA6C();
}

s32 fn_8039BD1C(s32 *self) {
    return self[2];
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

void fn_8039C32C(void) {
    fn_8018EA6C();
}

s32 fn_8039C370(s32 *self) {
    return self[2];
}

extern u8 lbl_80409DD8[];
void fn_8039C584(void **self, s32 flags) {
    *self = lbl_80409DD8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8039D338(void) {
    fn_8018EA6C();
}

s32 fn_8039D380(s32 *self) {
    return self[2];
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

extern u8 lbl_8040D2A8[];
void fn_8039FE84(void **self, s32 flags) {
    *self = lbl_8040D2A8;
    if (flags & 1) {
        fn_802D20E8(self);
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

void fn_803A29C8(void) {
    fn_8018EA6C();
}

s32 fn_803A2A0C(s32 *self) {
    return self[2];
}

s32 fn_803A3010(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
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

s32 fn_803A606C(s32 *self) {
    return self[2];
}

s32 fn_803A6098(s32 *self) {
    return self[2];
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

s32 fn_803A647C(s32 *self) {
    return self[2];
}

extern u8 lbl_80411998[];
void fn_803A64F4(void **self, s32 flags) {
    *self = lbl_80411998;
    if (flags & 1) {
        fn_802D20E8(self);
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

extern u8 lbl_80414540[];
void fn_803AAB88(void **self, s32 flags) {
    *self = lbl_80414540;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803AB624(void) {
    fn_8018EA6C();
}

s32 fn_803AB678(s32 *self) {
    return self[2];
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

void fn_803ADDDC(void) {

}

void fn_803ADE10(void) {

}

void fn_803ADE44(void) {

}

void fn_803ADE78(void) {

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

void fn_803AF118(void) {

}

void fn_803AF14C(void) {

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

void fn_803B78AC(void) {

}

extern void (*lbl_80443318[])(void);
void fn_803B79BC(void) {
    lbl_80443318[0]();
}

s32 fn_803B7DC4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void fn_803B7DCC(void) {
    lbl_80443318[0]();
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

extern void fn_803B9128(s32);
void fn_803B9174(s32 self, s32 flags) {
    fn_803B9128(self);
    if (flags & 1) {
        fn_802D20E8(self);
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

extern void fn_803B95FC(s32);
void fn_803B9648(s32 self, s32 flags) {
    fn_803B95FC(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
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

extern void fn_803B9C44(void *);
void fn_803B9C44(void *self) {
    ((s32 *)self)[0] = 0;
    ((s32 *)self)[2] = 0;
    ((s32 *)self)[1] = 0;
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

extern void fn_803BA454(s32);
void fn_803BA4A0(s32 self, s32 flags) {
    fn_803BA454(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
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

extern void fn_803BAE0C(s32);
void fn_803BAE58(s32 self, s32 flags) {
    fn_803BAE0C(self);
    if (flags & 1) {
        fn_802D20E8(self);
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

extern void fn_803BAF00(void *);
void *fn_803BB700(void *self) {
    fn_803BAF00(self);
    return self;
}

extern void fn_803BB730(s32);
void fn_803BB77C(s32 self, s32 flags) {
    fn_803BB730(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
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

extern void fn_803BC620(s32);
void fn_803BC66C(s32 self, s32 flags) {
    fn_803BC620(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803BCED0(s32 *self, s32 n) {
    while (--n != -1) {
        self++;
    }
}

void fn_80335FD8(void);
void fn_803BD7F8(void) {
    fn_80335FD8();
}

void fn_803BD868(void) {
    fn_80335FD8();
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_803BD888(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
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

extern void fn_803C02C8(s32);
void fn_803C0314(s32 self, s32 flags) {
    fn_803C02C8(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
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

extern void fn_803C0794(s32);
void fn_803C07E0(s32 self, s32 flags) {
    fn_803C0794(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
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

void fn_803C0D34(void);
void fn_803C0D04(void) {
    fn_803C0D34();
}

