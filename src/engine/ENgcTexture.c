/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

static inline void ENgcTexture_CopyTile8(u32 *src, u8 *dst, s32 stride) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((u32 *)dst)[0] = src[0];
        ((u32 *)dst)[1] = src[1];
        src += 2;
        dst += stride;
    }
}

static inline void ENgcTexture_SetUnk(s32 *r, s32 n) {
    r[1] = 0;
    r[0] = 0;
    r[2] = 1;
    r[3] = n;
    r[4] = n * 2;
}

typedef struct {
    s16 delta;
    s16 index;
    void *func;
} VtEntry_8035F3FC;

typedef struct {
    u8 pad0[4];
    void *unk4;
    u8 pad8[0x14];
    void *unk1C;
    u8 pad20[0x48];
    void *unk68;
    u8 pad6C[0xC];
} Entry_8035F8AC;

void fn_802FF4EC(void);
void *fn_8035F368(void *arg0) {
    void fn_802FED50(void *);
    extern u8 lbl_8041D018[];
    fn_802FED50(arg0);
    M2C_FIELD(arg0, void **, 0xF0) = lbl_8041D018;
    return arg0;
}

void fn_8035F3A4(void *arg0, s32 arg1) {
    void fn_802FEF40(void *, s32);
    void fn_80338184(void *, void *);
    extern u8 lbl_8041D018[];
    extern u8 lbl_8045BA40[];
    M2C_FIELD(arg0, void **, 0xF0) = lbl_8041D018;
    fn_802FEF40(arg0, 0);
    if (arg1 & 1) {
        fn_80338184(lbl_8045BA40, arg0);
    }
}

void fn_8035F3FC(u8 *arg0, u8 *arg1, s32 arg2) {
    void *fn_802FF608(u8 *, s32);
    s32 i;
    VtEntry_8035F3FC *e;

    for (i = 0; i < arg0[0]; i++) {
        e = (VtEntry_8035F3FC *)(M2C_FIELD(arg1, u8 **, 0x68) + 0x118);
        ((void (*)(u8 *, void *, s32))e->func)(arg1 + e->delta, fn_802FF608(arg0, i), i);
    }
    e = (VtEntry_8035F3FC *)(M2C_FIELD(arg1, u8 **, 0x68) + 0x330);
    ((void (*)(u8 *, u8 *, s32))e->func)(arg1 + e->delta, arg0, arg2);
}

void fn_8035F6E4(void) {
    fn_802FF4EC();
}

void fn_8035F704(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BA40[];
    fn_80338000(lbl_8045BA40, arg0, 4);
}

void *fn_8035F734(u32 size, void *p);
void *fn_8035F734(u32 size, void *p) {
    return p;
}

void fn_8035F73C(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BA40[];
    fn_80338184(lbl_8045BA40, arg0);
}

void fn_8035F8AC(void *arg0, s32 arg1) {
    extern Entry_8035F8AC lbl_804753B8[];
    void fn_80385948(void *);
    void fn_80381198(void *);
    void fn_8035FD24(void *, void *);
    s32 fn_8033EC8C(void);
    void *fn_802D0AB8(void);
    void fn_802D1A00(void *, void *);
    void fn_802D20E8(void *);
    s32 i;

    for (i = 1; i >= 0; i--) {
        fn_80385948(lbl_804753B8[i].unk1C);
        fn_80381198(lbl_804753B8[i].unk1C);
        fn_8035FD24(arg0, lbl_804753B8[i].unk4);
        if (fn_8033EC8C() == 0) {
            fn_802D1A00(fn_802D0AB8(), lbl_804753B8[i].unk68);
        }
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_803601FC(void) {
    M2C_UNK fn_80254684(s32);
    extern s32 lbl_804962E0;
    extern s32 lbl_804962E4;
    s32 temp_r0;

    if ((s32) lbl_804962E4 != 0) {
        temp_r0 = lbl_804962E4 - 1;
        lbl_804962E4 = temp_r0;
        if (temp_r0 == 0) {
            fn_80254684(lbl_804962E0);
        }
    }
}

void fn_8036023C(void) {
    s32 fn_8025465C(void);
    extern s32 lbl_804962E0;
    extern s32 lbl_804962E4;

    if (++lbl_804962E4 == 1) {
        lbl_804962E0 = fn_8025465C() != 0;
    }
}

s32 fn_80360468(u8 v) {
    double fn_80376420(double);
    f32 f;
    s32 r;

    f = 1.0f - (f32)(0x7F - v) / 127.0f;
    if (f < 0.1f) {
        f = 0.1f;
    }
    r = (f32)fn_80376420(f) * 904.0f;
    if (r > -0x388) {
        r >>= 2;
    }
    return r;
}

u32 fn_80360948(s32 arg0, u32 arg1, s32 arg2, u32 arg3, void *arg4) {
    void fn_80360750(void *);
    void fn_803608C0(void *);
    u32 r;

    if (!(M2C_FIELD(arg4, u32 *, 0x74) & 0x200000)) {
        r = 0;
        if (arg1 + arg3 >= M2C_FIELD(arg4, u32 *, 0x70) / 2) {
            fn_80360750(arg4);
            return M2C_FIELD(arg4, u32 *, 0x70) / 2;
        }
    } else {
        fn_803608C0(arg4);
        r = 0;
    }
    return r;
}

s32 fn_803609B4(void *arg0) {
    extern Entry_8035F8AC lbl_804753B8[];
    u32 i;

    for (i = 0; i < 2; i++) {
        if (M2C_FIELD(&lbl_804753B8[i], s32 *, 0) != 0 && arg0 == lbl_804753B8[i].unk4) {
            return i;
        }
    }
    return -1;
}

void fn_803609F4(void *arg0) {
    void fn_80385F0C(void *, s32);
    void fn_803859F4(void *, s32);

    if (M2C_FIELD(arg0, s32 *, 0) != 0 && !(M2C_FIELD(arg0, u32 *, 0x74) & 0x200000)) {
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) {
            fn_80385F0C(M2C_FIELD(arg0, void **, 0x1C), -0x388);
            fn_803859F4(M2C_FIELD(arg0, void **, 0x1C), -0x388);
        }
        M2C_FIELD(arg0, u32 *, 0x74) |= 0x200000;
    }
}

void fn_80360A60(void *arg0) {
    extern Entry_8035F8AC lbl_804753B8[];
    void fn_80385948(void *);
    u32 i;

    for (i = 0; i < 2; i++) {
        if (lbl_804753B8[i].unk1C == arg0) {
            fn_80385948(arg0);
            lbl_804753B8[i].unk1C = 0;
        }
    }
}

void *fn_80360C04(void *self) {
    extern void fn_8036F020(void *);
    extern u8 lbl_8041D098[];
    fn_8036F020(self);
    M2C_FIELD(self, s32 *, 0x28) = 0;
    M2C_FIELD(self, void **, 0x24) = lbl_8041D098;
    return self;
}

void fn_80360C48(void *self, s32 flags) {
    extern u8 lbl_8041D098[];
    extern u8 lbl_8045BAE8[];
    extern void fn_8036F080(void *, s32);
    extern void fn_80338184(void *, void *);
    char *obj;

    M2C_FIELD(self, void **, 0x24) = lbl_8041D098;
    obj = M2C_FIELD(self, char **, 0x28);
    if (obj != NULL) {
        char *vt = M2C_FIELD(obj, char **, 0x24);
        (*(void (**)(void *, s32))(vt + 0xC))(obj + *(s16 *)(vt + 8), 3);
        M2C_FIELD(self, s32 *, 0x28) = 0;
    }
    fn_8036F080(self, 0);
    if (flags & 1) {
        fn_80338184(lbl_8045BAE8, self);
    }
}

void fn_80360E74(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x28);
    u8 *vt = *(u8 **)(obj + 0x24);
    (*(void (**)(void *))(vt + 0x1C))(obj + *(s16 *)(vt + 0x18));
}

void fn_80360EAC(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x28);
    u8 *vt = *(u8 **)(obj + 0x24);
    (*(void (**)(void *))(vt + 0x24))(obj + *(s16 *)(vt + 0x20));
}

void fn_80360EE4(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x28);
    u8 *vt = *(u8 **)(obj + 0x24);
    (*(void (**)(void *))(vt + 0x2C))(obj + *(s16 *)(vt + 0x28));
}

void fn_80360F1C(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x28);
    u8 *vt = *(u8 **)(obj + 0x24);
    (*(void (**)(void *))(vt + 0x3C))(obj + *(s16 *)(vt + 0x38));
}

void fn_80360F54(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x28);
    u8 *vt = *(u8 **)(obj + 0x24);
    (*(void (**)(void *))(vt + 0x44))(obj + *(s16 *)(vt + 0x40));
}

void fn_80360F8C(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x28);
    u8 *vt = *(u8 **)(obj + 0x24);
    (*(void (**)(void *))(vt + 0x4C))(obj + *(s16 *)(vt + 0x48));
}

void fn_80360FC4(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x28);
    u8 *vt = *(u8 **)(obj + 0x24);
    (*(void (**)(void *))(vt + 0x54))(obj + *(s16 *)(vt + 0x50));
}

void fn_80360FFC(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x28);
    u8 *vt = *(u8 **)(obj + 0x24);
    (*(void (**)(void *))(vt + 0x74))(obj + *(s16 *)(vt + 0x70));
}

void fn_80361200(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x28);
    u8 *vt = *(u8 **)(obj + 0x24);
    (*(void (**)(void *))(vt + 0xA4))(obj + *(s16 *)(vt + 0xA0));
}

s32 fn_80361238(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0x70);
}

void fn_80361244(void *arg0) {
    M2C_UNK fn_80361568(s32);
    fn_80361568(M2C_FIELD(arg0, s32 *, 0x28));
}

void fn_80361268(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x28);
    u8 *vt = *(u8 **)(obj + 0x24);
    (*(void (**)(void *))(vt + 0x94))(obj + *(s16 *)(vt + 0x90));
}

void fn_803612A0(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x28);
    u8 *vt = *(u8 **)(obj + 0x24);
    (*(void (**)(void *))(vt + 0x9C))(obj + *(s16 *)(vt + 0x98));
}

void fn_803612D8(u8 *self) {
    u8 *obj;
    u8 *vtbl;
    *(s32 *)(self + 0x8) &= ~3;
    obj = *(u8 **)(self + 0x28);
    vtbl = *(u8 **)(obj + 0x24);
    ((void (*)(u8 *))*(void **)(vtbl + 0x5C))(obj + *(s16 *)(vtbl + 0x58));
}

void fn_8036131C(u8 *self) {
    u8 *obj;
    u8 *vtbl;
    *(s32 *)(self + 0x8) &= ~0x80;
    obj = *(u8 **)(self + 0x28);
    vtbl = *(u8 **)(obj + 0x24);
    ((void (*)(u8 *))*(void **)(vtbl + 0x64))(obj + *(s16 *)(vtbl + 0x60));
}

void fn_80361360(u8 *self) {
    u8 *obj;
    u8 *vtbl;
    *(s32 *)(self + 0x8) |= 0x80;
    obj = *(u8 **)(self + 0x28);
    vtbl = *(u8 **)(obj + 0x24);
    ((void (*)(u8 *))*(void **)(vtbl + 0x6C))(obj + *(s16 *)(vtbl + 0x68));
}

void fn_803613A4(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_803613D4(u32 size, void *p);
void *fn_803613D4(u32 size, void *p) {
    return p;
}

void fn_803613DC(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

void *fn_80361408(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern u8 lbl_8041D138[];
    extern void fn_8036F020(void *);
    extern void fn_802CA9A8(void *);
    u8 *self = arg0;
    fn_8036F020(self);
    *(u8 **)(self + 0x24) = lbl_8041D138;
    fn_802CA9A8(self + 0x28);
    *(s32 *)(self + 0x70) = arg1;
    *(u8 *)(self + 0x7C) = arg2;
    *(u8 *)(self + 0x7D) = arg3;
    *(s32 *)(self + 0x44) = 0;
    *(s32 *)(self + 0x68) = 0;
    *(s32 *)(self + 0x6C) = 0;
    *(s32 *)(self + 0x74) = 0;
    *(s32 *)(self + 0x78) = 0;
    *(s32 *)(self + 0x80) = 0;
    *(s32 *)(self + 0x90) = 0;
    return self;
}

void fn_80361568(u8 *self, s32 arg1) {
    extern s32 fn_80361C4C(void *, u32, void *, void *);
    extern void fn_80251C1C(s32, s32);
    extern void fn_80251C7C(s32, s32);
    s32 a;
    s32 b;
    u32 n = 1;
    s32 r;
    if (*(u16 *)(self + 0x16) > 1) {
        n = *(u16 *)(self + 0x16);
    }
    r = fn_80361C4C(self, n, &a, &b);
    if (arg1 != 0) {
        fn_80251C1C(*(s32 *)(self + 0x74), r);
    } else {
        fn_80251C7C(*(s32 *)(self + 0x74), r);
    }
}

s32 fn_803615D8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
    return 1;
}

void fn_803615F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) - 1);
}

void fn_80361600(void) {

}

s32 fn_80361774(void) {
    extern s32 lbl_80495230;
    s32 v = lbl_80495230;
    lbl_80495230 = (v + 1) % 16;
    return v;
}

s32 fn_80361944(void *arg0, s32 arg1) {
    M2C_UNK fn_802CAA88(s32, M2C_UNK);
    fn_802CAA88(arg0 + 0x28, -1);
    M2C_FIELD(arg0, s32 *, 0x98) = arg1;
    return 1;
}

s32 fn_80361ADC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

s32 fn_80361D14(void) {
    return 1;
}

s32 fn_80361D1C(void) {
    return 1;
}

void fn_80361EC8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFC);
}

void fn_80361EE4(char *self) {
    char *vt = *(char **)(self + 0x24);
    (*(void (**)(char *))(vt + 0x4C))(self + *(s16 *)(vt + 0x48));
}

void fn_80361F18(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x80);
}

void fn_80361F28(void) {

}

void *fn_80361F2C(void *arg0) {
    extern u8 lbl_8041D1F8[];
    fn_80361408(arg0, 8, 8, 8);
    M2C_FIELD(arg0, void **, 0x24) = lbl_8041D1F8;
    return arg0;
}

void fn_80361F74(void *arg0, s32 arg1) {
    void fn_80361484(void *, s32);
    void fn_80338184(void *, void *);
    extern u8 lbl_8041D1F8[];
    extern u8 lbl_8045BAE8[];
    M2C_FIELD(arg0, void **, 0x24) = lbl_8041D1F8;
    fn_80361484(arg0, 0);
    if (arg1 & 1) {
        fn_80338184(lbl_8045BAE8, arg0);
    }
}

void fn_80361FCC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_80363220(s32, s32, s32, s32);
    fn_80363220(arg1, arg2, arg3, arg4);
}

void fn_80361FFC(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_8036202C(u32 size, void *p);
void *fn_8036202C(u32 size, void *p) {
    return p;
}

void fn_80362034(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

void *fn_80362060(void *arg0) {
    extern u8 lbl_8041D2B8[];
    fn_80361408(arg0, 8, 8, 8);
    M2C_FIELD(arg0, void **, 0x24) = lbl_8041D2B8;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    return arg0;
}

void fn_803620B4(void *self, s32 flags) {
    extern u8 lbl_8041D2B8[];
    extern u8 lbl_8045BAE8[];
    void fn_80338184(void *, s32);
    void fn_80361484(void *, s32);
    M2C_FIELD(self, void **, 0x24) = lbl_8041D2B8;
    if (!(M2C_FIELD(self, s32 *, 0x8) & 0x80)) {
        fn_80338184(lbl_8045BAE8, M2C_FIELD(self, s32 *, 0xCC));
        fn_80338184(lbl_8045BAE8, M2C_FIELD(self, s32 *, 0xD0));
    }
    fn_80361484(self, 0);
    if (flags & 1) {
        fn_80338184(lbl_8045BAE8, (s32)self);
    }
}

s32 fn_80362138(void *self, void *arg1) {
    extern u8 lbl_8045BAE8[];
    s32 fn_80338000(void *, s32, s32);
    s32 fn_80361604(void *, void *);
    s32 ret;

    ret = fn_80361604(self, arg1);
    if (ret != 0) {
        if (M2C_FIELD(self, s32 *, 0x8) & 0x80) {
            s32 p = M2C_FIELD(self, s32 *, 0x90);
            M2C_FIELD(self, s32 *, 0xCC) = p;
            M2C_FIELD(self, s32 *, 0xD0) = p + M2C_FIELD(arg1, u16 *, 0x14) * 2;
        } else {
            M2C_FIELD(self, s32 *, 0xCC) = fn_80338000(lbl_8045BAE8, M2C_FIELD(arg1, u16 *, 0x14) * 2, 0x20);
            M2C_FIELD(self, s32 *, 0xD0) = fn_80338000(lbl_8045BAE8, M2C_FIELD(arg1, u16 *, 0x14) * 2, 0x20);
        }
    }
    return ret;
}

void fn_803621D0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_80363220(s32, s32, s32, s32);
    fn_80363220(arg1, arg2, arg3, arg4);
}

void fn_803622D4(void *self, s32 arg1, s32 arg2) {
    s32 fn_80361774(void);
    void fn_80273A6C(void *, s32, s32, s32);
    void fn_8027328C(void *, s32, s32, s32, s32, s32, s32, s32, s32);
    void fn_802732D4(void *, s32, s32, f32, f32, f32, s32, s32, s32);
    void fn_80273464(void *, s32);
    void fn_80273AE8(void *, s32);
    void fn_80273A18(void *, s32);
    s32 n;

    if (M2C_FIELD(self, s32 *, 0x80) == 0) {
        M2C_FIELD(self, s32 *, 0x80) = 1;
        M2C_FIELD(self, s32 *, 0x94) = fn_80361774();
        fn_80273A6C((u8 *)self + 0x84, M2C_FIELD(self, s32 *, 0xCC), 0, M2C_FIELD(self, u16 *, 0x14));
        fn_8027328C((u8 *)self + 0x48, M2C_FIELD(self, s32 *, 0x74), M2C_FIELD(self, u16 *, 0x10),
                    M2C_FIELD(self, u16 *, 0x12), M2C_FIELD(self, s32 *, 0x70), M2C_FIELD(self, s32 *, 0x68),
                    M2C_FIELD(self, s32 *, 0x6C), 0, M2C_FIELD(self, s32 *, 0x94));
        M2C_FIELD(self, s32 *, 0xC8) = fn_80361774();
        fn_80273A6C((u8 *)self + 0xBC, M2C_FIELD(self, s32 *, 0xD0), 0, M2C_FIELD(self, u16 *, 0x14));
        fn_8027328C((u8 *)self + 0x9C, M2C_FIELD(self, s32 *, 0x74), M2C_FIELD(self, u16 *, 0x10),
                    M2C_FIELD(self, u16 *, 0x12), M2C_FIELD(self, s32 *, 0x70), M2C_FIELD(self, s32 *, 0x68),
                    M2C_FIELD(self, s32 *, 0x6C), 0, M2C_FIELD(self, s32 *, 0xC8));
        if (M2C_FIELD(self, s32 *, 0x8) & 0x20) {
            n = M2C_FIELD(self, u16 *, 0x16) - 1;
            if (n < 0) {
                n = 0;
            }
            fn_802732D4((u8 *)self + 0x48, 3, 1, 0.0f, n, 0.0f, 0, 0, 0);
            n = M2C_FIELD(self, u16 *, 0x16) - 1;
            if (n < 0) {
                n = 0;
            }
            fn_802732D4((u8 *)self + 0x9C, 3, 1, 0.0f, n, 0.0f, 0, 0, 0);
        } else {
            fn_802732D4((u8 *)self + 0x48, 1, 1, 0.0f, 0.0f, 0.0f, 0, 0, 0);
            fn_802732D4((u8 *)self + 0x9C, 1, 1, 0.0f, 0.0f, 0.0f, 0, 0, 0);
        }
    }
    M2C_FIELD(self, s32 *, 0x94) = fn_80361774();
    M2C_FIELD(self, s32 *, 0xC8) = fn_80361774();
    fn_80273464((u8 *)self + 0x48, M2C_FIELD(self, s32 *, 0x94));
    fn_80273AE8((u8 *)self + 0x84, M2C_FIELD(self, s32 *, 0x94));
    fn_80273464((u8 *)self + 0x9C, M2C_FIELD(self, s32 *, 0xC8));
    fn_80273AE8((u8 *)self + 0xBC, M2C_FIELD(self, s32 *, 0xC8));
    fn_80273A18((u8 *)self + 0x48, arg2);
    fn_80273A18((u8 *)self + 0x9C, arg2 + 1);
}

s32 fn_80362520(void) {
    return 2;
}

s32 fn_80362528(void) {
    return 2;
}

void fn_80362530(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_80362560(u32 size, void *p);
void *fn_80362560(u32 size, void *p) {
    return p;
}

void fn_80362568(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

void *fn_80362594(void *arg0) {
    extern u8 lbl_8041D378[];
    fn_80361408(arg0, 9, 8, 4);
    M2C_FIELD(arg0, void **, 0x24) = lbl_8041D378;
    return arg0;
}

void fn_803625DC(void *arg0, s32 arg1) {
    void fn_80361484(void *, s32);
    void fn_80338184(void *, void *);
    extern u8 lbl_8041D378[];
    extern u8 lbl_8045BAE8[];
    M2C_FIELD(arg0, void **, 0x24) = lbl_8041D378;
    fn_80361484(arg0, 0);
    if (arg1 & 1) {
        fn_80338184(lbl_8045BAE8, arg0);
    }
}

void fn_80362634(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_803632B4(s32, s32, s32, s32);
    fn_803632B4(arg1, arg2, arg3, arg4);
}

void fn_80362664(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_80363540(s32, s32, s32, s32);
    fn_80363540(arg1, arg2, arg3, arg4);
}

void fn_80362694(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_803626C4(u32 size, void *p);
void *fn_803626C4(u32 size, void *p) {
    return p;
}

void fn_803626CC(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

s32 fn_803627F4(void *self, void *arg1) {
    extern u8 lbl_8045BAE8[];
    s32 fn_80338000(void *, s32, s32);
    s32 fn_80361604(void *, void *);
    s32 ret;

    ret = fn_80361604(self, arg1);
    if (ret != 0) {
        if (M2C_FIELD(self, s32 *, 0x8) & 0x80) {
            s32 p = M2C_FIELD(self, s32 *, 0x90);
            M2C_FIELD(self, s32 *, 0xCC) = p;
            M2C_FIELD(self, s32 *, 0xD0) = p + M2C_FIELD(arg1, u16 *, 0x14) * 2;
        } else {
            M2C_FIELD(self, s32 *, 0xCC) = fn_80338000(lbl_8045BAE8, M2C_FIELD(arg1, u16 *, 0x14) * 2, 0x20);
            M2C_FIELD(self, s32 *, 0xD0) = fn_80338000(lbl_8045BAE8, M2C_FIELD(arg1, u16 *, 0x14) * 2, 0x20);
        }
    }
    return ret;
}

void fn_8036288C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_803632B4(s32, s32, s32, s32);
    fn_803632B4(arg1, arg2, arg3, arg4);
}

void fn_803628BC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_80363540(s32, s32, s32, s32);
    fn_80363540(arg1, arg2, arg3, arg4);
}

void fn_80362AE4(void *self, s32 arg1, s32 arg2) {
    s32 fn_80361774(void);
    void fn_80273A6C(void *, s32, s32, s32);
    void fn_8027328C(void *, s32, s32, s32, s32, s32, s32, s32, s32);
    void fn_802732D4(void *, s32, s32, f32, f32, f32, s32, s32, s32);
    void fn_80273464(void *, s32);
    void fn_80273AE8(void *, s32);
    void fn_80273A18(void *, s32);
    s32 n;

    if (M2C_FIELD(self, s32 *, 0x80) == 0) {
        M2C_FIELD(self, s32 *, 0x80) = 1;
        M2C_FIELD(self, s32 *, 0x94) = fn_80361774();
        fn_80273A6C((u8 *)self + 0x84, M2C_FIELD(self, s32 *, 0xCC), 0, M2C_FIELD(self, u16 *, 0x14));
        fn_8027328C((u8 *)self + 0x48, M2C_FIELD(self, s32 *, 0x74), M2C_FIELD(self, u16 *, 0x10),
                    M2C_FIELD(self, u16 *, 0x12), M2C_FIELD(self, s32 *, 0x70), M2C_FIELD(self, s32 *, 0x68),
                    M2C_FIELD(self, s32 *, 0x6C), 0, M2C_FIELD(self, s32 *, 0x94));
        M2C_FIELD(self, s32 *, 0xC8) = fn_80361774();
        fn_80273A6C((u8 *)self + 0xBC, M2C_FIELD(self, s32 *, 0xD0), 0, M2C_FIELD(self, u16 *, 0x14));
        fn_8027328C((u8 *)self + 0x9C, M2C_FIELD(self, s32 *, 0x74), M2C_FIELD(self, u16 *, 0x10),
                    M2C_FIELD(self, u16 *, 0x12), M2C_FIELD(self, s32 *, 0x70), M2C_FIELD(self, s32 *, 0x68),
                    M2C_FIELD(self, s32 *, 0x6C), 0, M2C_FIELD(self, s32 *, 0xC8));
        if (M2C_FIELD(self, s32 *, 0x8) & 0x20) {
            n = M2C_FIELD(self, u16 *, 0x16) - 1;
            if (n < 0) {
                n = 0;
            }
            fn_802732D4((u8 *)self + 0x48, 3, 1, 0.0f, n, 0.0f, 0, 0, 0);
            n = M2C_FIELD(self, u16 *, 0x16) - 1;
            if (n < 0) {
                n = 0;
            }
            fn_802732D4((u8 *)self + 0x9C, 3, 1, 0.0f, n, 0.0f, 0, 0, 0);
        } else {
            fn_802732D4((u8 *)self + 0x48, 1, 1, 0.0f, 0.0f, 0.0f, 0, 0, 0);
            fn_802732D4((u8 *)self + 0x9C, 1, 1, 0.0f, 0.0f, 0.0f, 0, 0, 0);
        }
    }
    M2C_FIELD(self, s32 *, 0x94) = fn_80361774();
    M2C_FIELD(self, s32 *, 0xC8) = fn_80361774();
    fn_80273464((u8 *)self + 0x48, M2C_FIELD(self, s32 *, 0x94));
    fn_80273AE8((u8 *)self + 0x84, M2C_FIELD(self, s32 *, 0x94));
    fn_80273464((u8 *)self + 0x9C, M2C_FIELD(self, s32 *, 0xC8));
    fn_80273AE8((u8 *)self + 0xBC, M2C_FIELD(self, s32 *, 0xC8));
    fn_80273A18((u8 *)self + 0x48, arg2);
    fn_80273A18((u8 *)self + 0x9C, arg2 + 1);
}

s32 fn_80362D30(void) {
    return 2;
}

s32 fn_80362D38(void) {
    return 2;
}

void fn_80362D40(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_80362D70(u32 size, void *p);
void *fn_80362D70(u32 size, void *p) {
    return p;
}

void fn_80362D78(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

void fn_80362DEC(void *arg0, s32 arg1) {
    void fn_80361484(void *, s32);
    void fn_80338184(void *, void *);
    extern u8 lbl_8041D4F8[];
    extern u8 lbl_8045BAE8[];
    M2C_FIELD(arg0, void **, 0x24) = lbl_8041D4F8;
    fn_80361484(arg0, 0);
    if (arg1 & 1) {
        fn_80338184(lbl_8045BAE8, arg0);
    }
}

void fn_80362E44(void) {

}

void fn_80362E48(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_80362E78(u32 size, void *p);
void *fn_80362E78(u32 size, void *p) {
    return p;
}

void fn_80362E80(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

void fn_80362EF4(void *arg0, s32 arg1) {
    void fn_80361484(void *, s32);
    void fn_80338184(void *, void *);
    extern u8 lbl_8041D5B8[];
    extern u8 lbl_8045BAE8[];
    M2C_FIELD(arg0, void **, 0x24) = lbl_8041D5B8;
    fn_80361484(arg0, 0);
    if (arg1 & 1) {
        fn_80338184(lbl_8045BAE8, arg0);
    }
}

void fn_80362F4C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_80363174(s32, s32, s32, s32);
    fn_80363174(arg1, arg2, arg3, arg4);
}

void fn_80362F7C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_80363494(s32, s32, s32, s32);
    fn_80363494(arg1, arg2, arg3, arg4);
}

void fn_80362FAC(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_80362FDC(u32 size, void *p);
void *fn_80362FDC(u32 size, void *p) {
    return p;
}

void fn_80362FE4(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

void fn_80363058(void *arg0, s32 arg1) {
    void fn_80361484(void *, s32);
    void fn_80338184(void *, void *);
    extern u8 lbl_8041D678[];
    extern u8 lbl_8045BAE8[];
    M2C_FIELD(arg0, void **, 0x24) = lbl_8041D678;
    fn_80361484(arg0, 0);
    if (arg1 & 1) {
        fn_80338184(lbl_8045BAE8, arg0);
    }
}

void fn_803630B0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_8036336C(s32, s32, s32, s32);
    fn_8036336C(arg1, arg2, arg3, arg4);
}

void fn_803630E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_803635F8(s32, s32, s32, s32);
    fn_803635F8(arg1, arg2, arg3, arg4);
}

void fn_80363110(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_80363140(u32 size, void *p);
void *fn_80363140(u32 size, void *p) {
    return p;
}

void fn_80363148(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

void fn_80363540(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 *src = (u32 *)arg0;
    s32 bw = arg1 / 8;
    s32 bh = arg2 / 4;
    s32 stride = bw * 8;
    s32 y;
    s32 x;
    s32 i;
    for (y = 0; y < bh; y++) {
        u8 *row = (u8 *)arg3 + y * bw * 32;
        for (x = 0; x < bw; x++) {
            u32 *s = src;
            u8 *p = row;
            for (i = 0; i < 4; i++) {
                ((u32 *)p)[0] = s[0];
                ((u32 *)p)[1] = s[1];
                s += 2;
                p += stride;
            }
            row += 8;
            src += 8;
        }
    }
}

void fn_80363720(void) {

}

void fn_80363724(void) {
    extern u8 lbl_80493D04[];
    extern void *lbl_804962E8;
    lbl_804962E8 = lbl_80493D04;
}

s32 *fn_80363734(s32 *arg0, s32 arg1) {
    ENgcTexture_SetUnk(arg0, arg1);
    return arg0;
}

void fn_80363918(void) {

}

void fn_8036391C(void *arg0) {
    M2C_UNK fn_802CB930();
    fn_802CB930();
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) * 2);
}

void fn_80363954(void *arg0, void *arg1) {
    void fn_802CBB48(void *, void *);
    s32 c;
    fn_8036391C(arg0);
    M2C_FIELD(arg0, s32 *, 0x10) = M2C_FIELD(arg1, s32 *, 0x10);
    c = M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xC) = c;
    M2C_FIELD(arg1, s32 *, 0x10) = c * 2;
    fn_802CBB48(arg0, arg1);
}

void fn_803639A8(void *arg0) {
    void *fn_802CBB10(void *);
    void fn_802CB5C4(void *, void *);
    void *node;

    node = fn_802CBB10(arg0);
    if (node != NULL) {
        fn_802CB5C4(arg0, node);
    }
}

void *fn_80363C08(void *arg0) {
    typedef struct { f32 x, y, z; } V3;
    extern f32 lbl_803F4F20;
    void fn_802C4D24(V3 *);
    void fn_802C5070(V3 *, void *);
    V3 b;
    V3 a;
    V3 t;

    t.x = t.y = t.z = lbl_803F4F20;
    a = t;
    b = a;
    fn_802C4D24(&b);
    fn_802C5070(&b, arg0);
    return arg0;
}

void fn_802D2FD0(void);
void fn_80363C8C(void) {
    fn_802D2FD0();
}

extern void *fn_802D30D4(void *, s32 *);
s32 fn_80363CAC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80363CEC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80363D9C(char *obj, void *s) {
    void *fn_802D35D8(void *, void *);
    void *fn_802D2FD0x(void *, s32);

    s = fn_802D35D8(s, obj + 4);
    s = ((void *(*)(void *, s32))fn_80363C8C)(s, *(s32 *)(obj + 0x1C));
    s = ((void *(*)(void *, s32))fn_802D2FD0)(s, *(s32 *)(obj + 0x20));
    ((void *(*)(void *, s32))fn_802D2FD0)(s, *(s32 *)(obj + 0x24));
}

void *fn_80363DE8(char *obj, void *s) {
    extern u16 lbl_80493936[];
    void *fn_802D380C(void *, void *);
    void *fn_802D30D4(void *, s32 *);
    s32 fn_80363CAC(s32 arg0, s32 *out);

    if (lbl_80493936[0] == 0) {
        s = fn_802D380C(s, obj + 4);
        s = (void *)fn_80363CAC((s32)s, (s32 *)(obj + 0x1C));
        s = fn_802D30D4(s, (s32 *)(obj + 0x20));
        s = fn_802D30D4(s, (s32 *)(obj + 0x24));
    }
    return s;
}

void fn_80363E44(void **obj) {
    extern u8 lbl_80493920[];
    s32 fn_802D2540(void *, void *);
    void ***p;
    s32 i;

    p = (void ***)((char *)obj + 0x24);
    for (i = 1; i >= 0; i--, p--) {
        if (fn_802D2540(*p, lbl_80493920) != 0) {
            fn_80363E44(*p);
        } else {
            char *vt = (char *)**p;
            (*(void (**)(void *))(vt + 0xC))((char *)*p + *(s16 *)(vt + 0x8));
        }
        *p = NULL;
    }
    {
        char *vt = (char *)*obj;
        (*(void (**)(void *))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8));
    }
}

void fn_80363EE0(s32 arg0, s32 arg1) {
    extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
    extern void fn_80363F50(void);
    extern void fn_80363F78(void *);
    extern void fn_80363F98(void **);
    extern u8 lbl_80493920[];
    extern u8 lbl_803F4F30[];
    extern u8 lbl_804936F0[];
    extern s32 lbl_804962EC;

    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_804962EC = fn_802D6A90(lbl_80493920, fn_80363F50, fn_80363F78, fn_80363F98, 0, lbl_803F4F30, lbl_804936F0);
    }
}

void fn_80363F50(void) {
    void *fn_802D1FC8(s32);
    void *fn_80363D2C(void *);
    fn_80363D2C(fn_802D1FC8(0x28));
}

void fn_80363F78(void *arg0) {
    void *fn_80363D2C(void *);
    fn_80363D2C(arg0);
}

void fn_80363F98(void **arg0) {
    extern u8 lbl_804194A0[];
    *arg0 = lbl_804194A0;
}

void fn_80363FA8(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493920[];
void *fn_80363FE8(void) {
    return lbl_80493920;
}

extern s32 lbl_8049392C[];
s32 fn_80363FF4(void) {
    return lbl_8049392C[0];
}

extern s32 lbl_80493930[];
s32 fn_80364000(void) {
    return lbl_80493930[0];
}

extern u16 lbl_80493934[];
u16 fn_8036400C(void) {
    return lbl_80493934[0];
}

void *fn_80364018(void) {
    return lbl_80493920;
}

extern u16 lbl_80493936[];
u16 fn_80364024(void) {
    return lbl_80493936[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80363F50(void);
extern void fn_80363F98(void **);
extern u8 lbl_803F4F30[];
extern u8 lbl_804936F0[];
void fn_80364030(s32 arg0) {
    fn_802D6A90(lbl_80493920, fn_80363F50, fn_80363F78, fn_80363F98, arg0, lbl_803F4F30, lbl_804936F0);
}

void fn_802D2430(void);
void fn_80364084(void) {
    fn_802D2430();
}

s32 fn_803640A4(s32 arg0) {
    s32 fn_802D2540(char *, s32 (*)());
    return fn_802D2540((char *)arg0, (s32 (*)())lbl_80493920);
}

void fn_803640CC(void) {
    void fn_80363EE0(s32, s32);
    fn_80363EE0(1, 0xFFFF);
}

