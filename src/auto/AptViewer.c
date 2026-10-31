/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800C3828(void *);

void *fn_802D0AB8(void);
void *fn_802D0B3C(void);
void *fn_802D197C(void *, s32, s32);
void *fn_802DC3C0(void *, s32, s32, s32, s32);

static inline void *AptViewer_Alloc(void) {
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    p = fn_802D197C(heap, 0x460, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, 0x460, 0x10, 0, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DC3C0(fn_802D0B3C(), 0x460, 0x10, 0, 0);
        }
    }
    return p;
}

typedef struct AptViewerParams {
    s32 v[18];
} AptViewerParams;

static inline void AptViewerParams_Init(AptViewerParams *p) {
    p->v[0] = 0x200;
    p->v[1] = 0x200;
    p->v[2] = 0x40;
    p->v[3] = 0x100;
    p->v[4] = 0x40;
    p->v[5] = 0x100;
    p->v[6] = 0x180;
    p->v[7] = 0x40;
    p->v[8] = 0x180;
    p->v[9] = 0x20;
    p->v[10] = 0x20;
    p->v[11] = 0x20;
    p->v[12] = 0x20;
    p->v[13] = 0x400;
    p->v[14] = 0x400;
    p->v[15] = 0x100;
    p->v[16] = 1;
}
void fn_8000AA2C(void *self, const char *fmt, s32 arg2, s32 arg3, s32 arg4, ...);
void fn_8000A6FC(void) {
    void *fn_8000A8D8(void *);
    extern void *lbl_804956BC;
    void *p;
    p = AptViewer_Alloc();
    p = fn_8000A8D8(p);
    lbl_804956BC = p;
}

void fn_8000A794(void) {

}

void fn_8000A798(void) {
    void fn_800C2D5C(void);
    void fn_802784F0(s32);
    fn_800C2D5C();
    fn_8000A794();
    fn_802784F0(0);
}

void *fn_8000A8D8(void *);
extern void *lbl_804956BC;
void fn_8000A7C4(void) {
    extern struct { u8 pad[0x378]; s32 unk378; } lbl_8041F94C;
    void fn_800C2950(void);
    s32 fn_800C2970(void);
    void fn_80279D50(s32);
    s32 n;

    fn_800C2950();
    n = fn_800C2970();
    if (n < 0) {
        n = 0;
    }
    if (n > 0x42) {
        n = 0x42;
    }
    fn_80279D50(n);
    lbl_8041F94C.unk378 += n;
}

void fn_8000A824(void) {
    extern void *lbl_80495050;
    void fn_800C2990(s32, s32, s32);
    void fn_802782BC(AptViewerParams *);
    void fn_800C292C(void);
    AptViewerParams params;

    fn_800C2990(M2C_FIELD(lbl_80495050, s32 *, 0x14), M2C_FIELD(lbl_80495050, s32 *, 0x18), 0);
    AptViewerParams_Init(&params);
    params.v[12] = 0x80;
    params.v[9] = 0x40;
    params.v[16] = 0;
    fn_802782BC(&params);
    fn_800C292C();
}

void fn_8000A9B4(void *self, s32 flags) {
    M2C_UNK fn_802CAA00(void *, s32);
    M2C_UNK fn_80309AE0(void *, s32);
    void *fn_802D0AB8(void);
    M2C_UNK fn_802D1A00(void *, void *);
    void fn_802D20E8(void *);
    fn_8000B198();
    fn_8000A798();
    if (M2C_FIELD(self, void **, 0x374) != NULL) {
        fn_802D20E8(M2C_FIELD(self, void **, 0x374));
        M2C_FIELD(self, void **, 0x374) = NULL;
    }
    fn_802CAA00((u8 *)self + 0x358, 2);
    fn_80309AE0(self, 0);
    if (flags & 1) {
        fn_802D1A00(fn_802D0AB8(), self);
    }
}

void fn_8000AA2C(void *self, const char *fmt, s32 arg2, s32 arg3, s32 arg4, ...) {
}

void fn_8000AC58(void) {
    void fn_8000A798(void);
    M2C_UNK fn_8000B198();
    fn_8000B198();
    fn_8000A798();
}

void fn_8000AC7C(void *self, void *arg) {
    void fn_8000A824(void);
    s32 *arr;
    s32 i;
    if (M2C_FIELD(self, s32 *, 0x3A0) == 0) {
        fn_8000A824();
    }
    M2C_FIELD(self, s32 *, 0x3A0) = 1;
    fn_800C3828(arg);
    arr = (s32 *)((u8 *)self + 0x450);
    i = 1;
    do {
        arr[i] = 0;
    } while (--i >= 0);
}

void fn_8000ACE4(void) {

}

void fn_8000B0BC(void *arg0, u8 *arg1, s32 arg2) {
    M2C_UNK fn_800C3954(u8 *);
    M2C_UNK fn_800C3998(u8 *);
    M2C_UNK fn_80248784(void *, u8 *);
    M2C_UNK fn_80278950();
    if ((arg1 != NULL) && ((s32) *arg1 != 0)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x350) != 0) {
            fn_8000B198();
        }
        fn_800C3998(arg1);
        if (arg2 != 0) {
            fn_800C3954(arg1);
        }
        fn_80248784(arg0 + 0x380, arg1);
        M2C_FIELD(arg0, s32 *, 0x350) = 1;
        fn_80278950();
    }
}

void fn_8000B13C(void *self, u8 *arg1, s32 arg2) {
    extern char lbl_803C1944[];
    M2C_UNK fn_800C3954(u8 *);
    fn_8000AA2C(self, lbl_803C1944, 0, 0, 1, arg1);
    if (arg2 != 0) {
        fn_800C3954(arg1);
    }
}

void fn_8000B198(void *arg0) {
    void fn_8027897C(char *, char *);
    void fn_80279D50(s32);
    extern char lbl_803C1954[];
    extern char lbl_803C1958[];

    if (M2C_FIELD(arg0, s32 *, 0x350) != 0) {
        fn_8027897C(lbl_803C1954, lbl_803C1958);
        fn_80279D50(500);
        fn_80279D50(500);
        fn_80279D50(500);
        fn_80279D50(500);
        fn_80279D50(500);
        M2C_FIELD(arg0, s32 *, 0x350) = 0;
    }
}

s32 fn_8000B210(void) {
    return 0;
}

void fn_8000B218(void *self, s32 a, s32 b) {
    extern s32 lbl_803F5820[][4];
    extern s32 lbl_803F5800[][4];
    extern s32 lbl_803F57E0[][4];

    lbl_803F5820[a][b] = 0;
    lbl_803F5800[a][b] = 0x16;
    lbl_803F57E0[a][b] = 0;
}

s32 fn_803114D0(s32, s32, s32, s32);
void fn_803115C0(s32, s32);
s32 fn_8000BF20(u8 *self, u32 index, s32 arg) {
    s32 fn_803114D0(s32, s32, s32, s32);
    s32 fn_8000C170(void *self, s32 arg);
    s32 n;
    s32 h;
    u8 *cnt;
    u8 *a;
    s32 i4;
    s32 i50;

    if (*(s32 *)(self + 0x3A8) == 0) {
        return 0;
    }
    if (index > 1) {
        index = 0;
    }
    i4 = index * 4;
    cnt = self + 0x450;
    n = *(s32 *)(cnt + i4);
    if (n > 9) {
        return 0;
    }
    i50 = index * 0x50;
    a = self + 0x3B0;
    if (*(s32 *)(a + (n * 8 + i50)) != 0) {
        n++;
        *(s32 *)(cnt + i4) = n;
    }
    h = fn_803114D0(fn_8000C170(self, index), 0, arg, 100);
    *(s32 *)(a + (n * 8 + i50)) = h;
    *(s32 *)(self + 0x3B4 + (n * 8 + i50)) = arg;
    return h;
}

void fn_8000BFD0(u8 *self, u32 index) {
    void fn_803115C0(s32, s32);
    s32 fn_8000C170(void *self, s32 arg);
    u32 n;
    u8 *cnt;
    u8 *a;
    u8 *b;
    s32 off;
    s32 i4;

    if (*(s32 *)(self + 0x3A8) == 0) {
        return;
    }
    if (index > 1) {
        index = 0;
    }
    i4 = index * 4;
    cnt = self + 0x450;
    n = *(u32 *)(cnt + i4);
    if (n > 9) {
        return;
    }
    a = self + 0x3B0;
    off = n * 8 + index * 0x50;
    if (*(s32 *)(a + off) == 0) {
        return;
    }
    fn_803115C0(fn_8000C170(self, index), *(s32 *)(a + off));
    b = self + 0x3B4;
    *(s32 *)(a + off) = 0;
    *(s32 *)(b + off) = 0;
    if ((s32)--n >= 0) {
        *(u32 *)(cnt + i4) = n;
    }
}

s32 fn_8000C170(void *self, s32 arg);
s32 fn_8000C170(void *self, s32 arg);
void fn_8000C06C(u8 *self, u32 index, s32 a, s32 b) {
    extern void fn_803117BC(s32, s32, s32);
    s32 r;
    if (*(s32 *)(self + 0x3A8) != 0) {
        if (index > 1) {
            index = 0;
        }
        if (b <= 0x2F) {
            r = fn_8000C170(self, index);
            if (r != 0) {
                fn_803117BC(r, a, b);
            }
        }
    }
}

void fn_8000C0D0(u8 *self, u32 index, s32 a, s32 b) {
    extern void fn_8031185C(s32, s32, s32);
    s32 fn_8000C170(void *self, s32 arg);
    if (*(s32 *)(self + 0x3A8) != 0) {
        if (index > 1) {
            index = 0;
        }
        if (b <= 0x2F) {
            fn_8031185C(fn_8000C170(self, index), a, b);
        }
    }
}

s32 fn_8000C12C(u8 *self, u32 index) {
    s32 *cur;
    u8 *tbl;
    s32 j;
    if (*(s32 *)(self + 0x3A8) == 0) {
        return -1;
    }
    if (index > 1) {
        index = 0;
    }
    cur = (s32 *)(self + 0x450);
    j = cur[index];
    tbl = self + 0x3B0;
    return *(s32 *)(tbl + (index * 0x50 + j * 8));
}

extern void *lbl_80494FCC;
s32 fn_803338C0(void *);
s32 fn_803338D0(void *, s32);
s32 fn_803338F0(void *, s32);
s32 fn_8033394C(void *);
s32 fn_8000C170(void *self, s32 arg) {
    s32 idx;
    s32 result;

    result = 0;
    if (fn_803338C0(lbl_80494FCC)) {
        void *mgr = lbl_80494FCC;
        idx = fn_803338F0(mgr, arg);
        return fn_803338D0(mgr, idx);
    }
    idx = fn_8033394C(lbl_80494FCC);
    if (idx != -1) {
        result = fn_803338D0(lbl_80494FCC, idx);
    }
    return result;
}

s32 fn_8000C1EC(void) {
    return 0;
}

void fn_8000C1F4(void *self, void *arg) {
    fn_800C3828(arg);
}

s32 fn_8000C218(void) {
    return 1;
}

void fn_800C38C8(void *);
void fn_8000C220(void *self, void *arg) {
    fn_800C38C8(arg);
}

s32 fn_8000C244(void) {
    return 1;
}

void fn_8000C4BC(void *self, s32 arg) {
    extern char lbl_803C19EC[];
    fn_8000AA2C(self, lbl_803C19EC, 0, 0, 1, arg);
}

s32 fn_8000C4F8(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3A4);
    M2C_FIELD(arg0, s32 *, 0x3A4) = arg1;
    return temp_r0;
}

s32 fn_8000C508(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x350) != 0) {
        s32 r = 0;
        if (M2C_FIELD(arg0, s32 *, 0x3A4) != 0) {
            r = 1;
        }
        return r;
    }
    return 0;
}

s32 fn_8000C534(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3A4);
}

s32 fn_8000C53C(s32 arg0, s32 arg1) {
    extern f32 lbl_803C19FC[];
    extern f32 lbl_804956AC;
    extern f32 lbl_804956B0;
    extern f32 lbl_804956B4;
    extern f32 lbl_804956B8;
    if (arg1 == 0xFFFF && arg0 != 0) {
        f32 v = lbl_803C19FC[0];
        lbl_804956AC = v;
        lbl_804956B0 = v;
        lbl_804956B4 = v;
        lbl_804956B8 = v;
    }
}

void fn_8000C570(void) {
    M2C_UNK fn_8000C53C(M2C_UNK, M2C_UNK);
    fn_8000C53C(1, 0xFFFF);
}

extern char lbl_803C19EC[];
extern f32 lbl_803C19FC[];
extern f32 lbl_804956AC;
extern f32 lbl_804956B0;
extern f32 lbl_804956B4;
extern f32 lbl_804956B8;
void fn_8000C59C(void) {
    fn_8000C53C(0, 0xFFFF);
}

