/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80310474(void *arg0);
void fn_803103A0(void *arg0, s32 arg1) {
    extern void fn_802D20E8(void *);
    extern u8 lbl_8041B150[];
    M2C_FIELD(arg0, u8 **, 0x204) = lbl_8041B150;
    if (M2C_FIELD(arg0, void **, 0x1FC) != NULL) {
        fn_802D20E8(M2C_FIELD(arg0, void **, 0x1FC));
        M2C_FIELD(arg0, void **, 0x1FC) = NULL;
    }
    if (M2C_FIELD(arg0, void **, 0x200) != NULL) {
        fn_802D20E8(M2C_FIELD(arg0, void **, 0x200));
        M2C_FIELD(arg0, void **, 0x200) = NULL;
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_80310418(void *arg0) {
    void fn_8036FD3C(void *, s32);
    void fn_8036FE3C(void *, void *);
    extern void *lbl_80494E00;
    extern void *lbl_80494F58;
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        void *p;
        lbl_80494F58 = lbl_80494E00;
        p = M2C_FIELD(arg0, void **, 0x200);
        fn_8036FD3C(p, 0);
        fn_8036FE3C(M2C_FIELD(arg0, void **, 0x200), M2C_FIELD(arg0, void **, 0x1FC));
        fn_80310474(arg0);
    }
}

void fn_80310474(void *arg0) {
    struct {
        u8 pad0[0x1B4];
        u32 unk1B4;
        u8 unk1B8[32];
        u8 unk1D8;
        u8 unk1D9;
        u8 pad1DA[0x200 - 0x1DA];
        u32 *unk200;
    } *self = arg0;
    s32 i;
    u32 mask;

    self->unk1B4 = self->unk200[6];
    for (i = 0; i < 32; i++) {
        mask = 1 << i;
        if (!(self->unk200[6] & mask) && (self->unk200[2] & mask)) {
            if (--self->unk1B8[i] == 0) {
                self->unk1B4 |= mask;
                self->unk1B8[i] = self->unk1D9;
            }
        } else {
            self->unk1B8[i] = self->unk1D8;
        }
    }
}

void fn_803104FC(void *arg0) {
    void fn_8036FC58(s32, s32);
    fn_8036FC58(M2C_FIELD(arg0, s32 *, 0x1FC), (M2C_FIELD(arg0, u32 *, 4) >> 1) & 1);
}

void fn_80310528(void *arg0) {
    M2C_UNK fn_8036FC58(s32);
    fn_8036FC58(M2C_FIELD(arg0, s32 *, 0x200));
}

s32 fn_8031054C(u32 *arg0, u32 *arg1) {
    u32 temp_r0;
    u32 temp_r9;

    temp_r9 = *arg0;
    temp_r0 = *arg1;
    if (temp_r9 >= temp_r0) {
        return temp_r9 > temp_r0;
    }
    return -1;
}

void fn_8031056C(void *arg0, s32 arg1, s32 arg2) {
    void fn_8024729C(s32, s32, s32, s32 (*)(u32 *, u32 *));
    M2C_FIELD(arg0, s32 *, 0x1A4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1A8) = arg2;
    fn_8024729C(arg1, arg2, 8, fn_8031054C);
}

void fn_803105B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

void fn_803105B8(void *arg0, s32 arg1) {
    ((struct { u8 pad[0x18C]; s32 unk18C[2]; } *)arg0)->unk18C[arg1] ^= 1;
}

void fn_803105D0(void *arg0, s32 arg1, s32 arg2) {
    struct { u8 pad[0x194]; s32 unk194[2][2]; } *p = arg0;
    p->unk194[arg1][arg2] = -p->unk194[arg1][arg2];
}

void fn_80310728(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 0x20) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 0x18) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1FC), s32 *, 0x20) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1FC), s32 *, 0x18) = 0;
}

s32 fn_80310750(void) {
    return 0;
}

s32 fn_80310758(void *arg0) {
    extern const f32 lbl_803F22B4[];
    return M2C_FIELD(arg0, f32 *, 0x1DC) > lbl_803F22B4[0];
}

s32 fn_80310774(void *arg0) {
    extern const f32 lbl_803F22B8[];
    return M2C_FIELD(arg0, f32 *, 0x1E0) > lbl_803F22B8[0];
}

s32 fn_80310790(char *self, f32 farg0) {
    char *vt = *(char **)(self + 0x204);
    if ((*(s32 (**)(char *))(vt + 0x1C))(self + *(s16 *)(vt + 0x18)) == 0) {
        return 0;
    }
    M2C_FIELD(self, f32 *, 0x1DC) = farg0;
    return 1;
}

void fn_803107F4(char *self, f32 farg0, f32 farg1) {
    char *vt;
    M2C_FIELD(self, f32 *, 0x1E4) = farg1;
    vt = *(char **)(self + 0x204);
    (*(void (**)(char *))(vt + 0x2C))(self + *(s16 *)(vt + 0x28));
}

s32 fn_8031082C(char *self, f32 farg0) {
    char *vt = *(char **)(self + 0x204);
    if ((*(s32 (**)(char *))(vt + 0x1C))(self + *(s16 *)(vt + 0x18)) == 0) {
        return 0;
    }
    M2C_FIELD(self, f32 *, 0x1E0) = farg0;
    return 1;
}

void fn_80310890(char *self, f32 farg0, f32 farg1) {
    char *vt;
    M2C_FIELD(self, f32 *, 0x1E8) = farg1;
    vt = *(char **)(self + 0x204);
    (*(void (**)(char *))(vt + 0x3C))(self + *(s16 *)(vt + 0x38));
}

s32 fn_803108C8(char *self, f32 farg0, f32 farg1) {
    char *vt;
    s32 result = 0;
    vt = *(char **)(self + 0x204);
    if ((*(s32 (**)(char *, f32))(vt + 0x2C))(self + *(s16 *)(vt + 0x28), farg0) != 0) {
        vt = *(char **)(self + 0x204);
        if ((*(s32 (**)(char *, f32))(vt + 0x3C))(self + *(s16 *)(vt + 0x38), farg1) != 0) {
            result = 1;
        }
    }
    return result;
}

s32 fn_8031094C(char *self, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    char *vt;
    s32 result = 0;
    vt = *(char **)(self + 0x204);
    if ((*(s32 (**)(char *, f32, f32))(vt + 0x34))(self + *(s16 *)(vt + 0x30), farg0, farg2) != 0) {
        vt = *(char **)(self + 0x204);
        if ((*(s32 (**)(char *, f32, f32))(vt + 0x44))(self + *(s16 *)(vt + 0x40), farg1, farg3) != 0) {
            result = 1;
        }
    }
    return result;
}

s32 fn_803109E4(char *self) {
    extern const f32 lbl_803F22BC[];
    char *vt = *(char **)(self + 0x204);
    if ((*(s32 (**)(char *))(vt + 0x1C))(self + *(s16 *)(vt + 0x18)) == 0) {
        return 0;
    }
    M2C_FIELD(self, f32 *, 0x1E4) = lbl_803F22BC[0];
    M2C_FIELD(self, f32 *, 0x1DC) = lbl_803F22BC[0];
    return 1;
}

s32 fn_80310A48(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x1E4) = farg0;
    return 1;
}

s32 fn_80310A54(char *self) {
    extern f32 lbl_803F22C0[];
    char *vt = *(char **)(self + 0x204);
    if ((*(s32 (**)(char *))(vt + 0x1C))(self + *(s16 *)(vt + 0x18)) == 0) {
        return 0;
    }
    M2C_FIELD(self, f32 *, 0x1E0) = lbl_803F22C0[0];
    M2C_FIELD(self, f32 *, 0x1E8) = lbl_803F22C0[0];
    return 1;
}

s32 fn_80310AB8(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x1E8) = farg0;
    return 1;
}

s32 fn_80310AC4(char *self) {
    char *vt;
    s32 result = 0;
    vt = *(char **)(self + 0x204);
    if ((*(s32 (**)(char *))(vt + 0x5C))(self + *(s16 *)(vt + 0x58)) != 0) {
        vt = *(char **)(self + 0x204);
        if ((*(s32 (**)(char *))(vt + 0x6C))(self + *(s16 *)(vt + 0x68)) != 0) {
            result = 1;
        }
    }
    return result;
}

s32 fn_80310B38(char *self) {
    extern const f32 lbl_803F22C4[];
    extern f32 lbl_80494E08;
    char *vt;
    f32 t;
    f32 n;
    t = M2C_FIELD(self, f32 *, 0x1E4);
    if (t != lbl_803F22C4[0]) {
        n = t - lbl_80494E08;
        M2C_FIELD(self, f32 *, 0x1E4) = n;
        if (n <= lbl_803F22C4[0]) {
            M2C_FIELD(self, f32 *, 0x1E4) = lbl_803F22C4[0];
            vt = *(char **)(self + 0x204);
            (*(void (**)(char *))(vt + 0x5C))(self + *(s16 *)(vt + 0x58));
        }
    }
    t = M2C_FIELD(self, f32 *, 0x1E8);
    if (t != lbl_803F22C4[0]) {
        n = t - lbl_80494E08;
        M2C_FIELD(self, f32 *, 0x1E8) = n;
        if (n <= lbl_803F22C4[0]) {
            M2C_FIELD(self, f32 *, 0x1E8) = lbl_803F22C4[0];
            vt = *(char **)(self + 0x204);
            (*(void (**)(char *))(vt + 0x6C))(self + *(s16 *)(vt + 0x68));
        }
    }
    return 1;
}

void fn_80310BF4(char *self) {
    struct Quad { s32 a, b, c, d; };
    char *vt;
    *(struct Quad *)(self + 0x1EC) = *(struct Quad *)(self + 0x1DC);
    vt = *(char **)(self + 0x204);
    (*(void (**)(char *))(vt + 0x7C))(self + *(s16 *)(vt + 0x78));
}

void fn_80310C50(char *self) {
    char *vt = *(char **)(self + 0x204);
    (*(void (**)(char *, f32, f32, f32, f32))(vt + 0x54))(self + *(s16 *)(vt + 0x50),
        M2C_FIELD(self, f32 *, 0x1EC), M2C_FIELD(self, f32 *, 0x1F0),
        M2C_FIELD(self, f32 *, 0x1F4), M2C_FIELD(self, f32 *, 0x1F8));
}

void fn_80310C98(void *arg0) {
    M2C_UNK fn_8036FD3C(s32);
    fn_8036FD3C(M2C_FIELD(arg0, s32 *, 0x1FC));
}

void fn_80310DE4(char *self, s32 i, s32 j, f32 v) {
    extern f32 lbl_803F22C8[];
    struct {
        u8 pad0[0x28];
        f32 a28[2][2];
        f32 a38[2][2];
        f32 a48[2][2];
        u8 pad58[0x10];
        s32 a68[2][2];
    } *d;

    d = *(void **)(self + 0x1FC);
    if (__builtin_fabsf(d->a28[i][j] - d->a38[i][j]) < __builtin_fabsf(v - d->a38[i][j])) {
        d->a28[i][j] = v;
        d = *(void **)(self + 0x1FC);
        d->a48[i][j] = v - d->a38[i][j];
    }
    d = *(void **)(self + 0x1FC);
    if (!(d->a38[i][j] * v <= lbl_803F22C8[0])) {
        d->a68[i][j] = 1;
    }
}

void fn_80310E6C(char *self, u32 mask) {
    s32 fn_8036FBC8(void *, s32);
    void fn_8036FC20(void *, s32, s32);
    void fn_8036FBE8(void *, s32, s32);
    s32 i;

    for (i = 0; mask >> (i + 1); i++) {
    }
    if (fn_8036FBC8(*(void **)(self + 0x1FC), i) == 0) {
        fn_8036FC20(*(void **)(self + 0x1FC), i, 1);
        fn_8036FBE8(*(void **)(self + 0x1FC), i, 1);
    }
    M2C_FIELD(*(char **)(self + 0x1FC), u32 *, 0x8) |= mask;
    M2C_FIELD(*(char **)(self + 0x1FC), u32 *, 0x10) |= mask;
    M2C_FIELD(*(char **)(self + 0x1FC), u32 *, 0x18) |= mask;
    M2C_FIELD(*(char **)(self + 0x1FC), u32 *, 0x0) |= mask;
}

void fn_80310F28(char *self, u32 mask) {
    s32 fn_8036FBC8(void *, s32);
    void fn_8036FC20(void *, s32, s32);
    void fn_8036FBE8(void *, s32, s32);
    s32 i;

    for (i = 0; mask >> (i + 1); i++) {
    }
    if (fn_8036FBC8(*(void **)(self + 0x1FC), i) == 0) {
        fn_8036FC20(*(void **)(self + 0x1FC), i, 1);
        fn_8036FBE8(*(void **)(self + 0x1FC), i, 0);
    }
    M2C_FIELD(*(char **)(self + 0x1FC), u32 *, 0x8) |= mask;
    M2C_FIELD(*(char **)(self + 0x1FC), u32 *, 0x10) |= mask;
    M2C_FIELD(*(char **)(self + 0x1FC), u32 *, 0x20) |= mask;
    M2C_FIELD(*(char **)(self + 0x1FC), u32 *, 0x0) &= ~mask;
}

s32 fn_80310FE4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1AC);
}

void fn_80310FEC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1AC) = arg1;
}

void fn_80310FF4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1B0) = arg1;
}

s32 fn_803110C8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_803119D4(void *, s32);
    s32 m;

    m = fn_803119D4(arg0, arg3);
    if (arg1 == 0) {
        if (m & 0xF0000) {
            return 1;
        }
    } else if (arg1 == 1) {
        if (m & 0xF00000) {
            return 1;
        }
    }
    return 0;
}

void fn_803112BC(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 0x78) = 1;
}

s32 fn_803112CC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *p;

    if ((arg1 & arg3) == arg3) {
        if (arg2 == 0) {
            return 1;
        }
        p = M2C_FIELD(arg0, void **, 0x200);
        if (M2C_FIELD(p, s32 *, 0x78) == 0) {
            M2C_FIELD(p, s32 *, 0x78) = 1;
            return 1;
        }
    }
    return 0;
}

s32 fn_80311310(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *p;

    if (arg1 & arg3) {
        if (arg2 == 0) {
            return 1;
        }
        p = M2C_FIELD(arg0, void **, 0x200);
        if (M2C_FIELD(p, s32 *, 0x78) == 0) {
            M2C_FIELD(p, s32 *, 0x78) = 1;
            return 1;
        }
    }
    return 0;
}

s32 fn_80311350(u32 *arg0, u32 *arg1) {
    u32 temp_r0;
    u32 temp_r9;

    temp_r9 = *arg0;
    temp_r0 = *arg1;
    if (temp_r9 >= temp_r0) {
        return temp_r9 > temp_r0;
    }
    return -1;
}

s32 *fn_80311370(void *arg0, s32 arg1) {
    void *fn_80378358(const void *key, const void *base, u32 nmemb, u32 size, s32 (*compar)(const void *, const void *));
    s32 *p;
    s32 *base;

    if (arg1 == 0) {
        return NULL;
    }
    p = fn_80378358(&arg1, M2C_FIELD(arg0, void **, 0x1A4), M2C_FIELD(arg0, u32 *, 0x1A8), 8, (void *)fn_80311350);
    if (p != NULL) {
        base = M2C_FIELD(arg0, s32 **, 0x1A4);
        while (p != base && p[-2] == arg1) {
            p -= 2;
        }
    }
    return p;
}

void fn_80311778(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_80311990(s32, s32);
    s32 i;
    char *base;

    i = fn_80311990(arg0, arg1);
    if (i >= 0) {
        base = (char *)arg0 + 0x14;
        *(s32 *)(base + i * 0xC) = arg2;
    }
}

void fn_803117BC(s32 arg0, s32 arg1, s32 arg2) {
    void fn_803118A0(s32, s32, s32);
    s32 fn_80311938(s32, s32);
    fn_803118A0(arg0, arg1, fn_80311938(arg0, arg2));
}

void fn_80311800(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    void fn_803117BC(s32, s32, s32);
    s32 *p;
    s32 n;

    if (arg3 > 0) {
        p = arg2;
        n = arg3;
        do {
            fn_803117BC(arg0, arg1, *p++);
        } while (--n != 0);
    }
}

void fn_8031185C(s32 arg0, s32 arg1, s32 arg2) {
    void fn_803118EC(s32, s32, s32);
    s32 fn_80311938(s32, s32);
    fn_803118EC(arg0, arg1, fn_80311938(arg0, arg2));
}

void fn_803118A0(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_80311990(s32, s32);
    s32 i;
    s32 off;
    s32 base;

    i = fn_80311990(arg0, arg1);
    if (i >= 0) {
        off = i * 0xC;
        base = arg0 + 0x14;
        *(s32 *)(base + off) |= arg2;
    }
}

void fn_803118EC(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_80311990(s32, s32);
    s32 i;
    s32 off;
    s32 base;

    i = fn_80311990(arg0, arg1);
    if (i >= 0) {
        off = i * 0xC;
        base = arg0 + 0x14;
        *(s32 *)(base + off) &= ~arg2;
    }
}

s32 fn_80311938(s32 arg0, s32 arg1) {
    s32 *fn_80311370(void *, s32);
    s32 result;
    s32 *p;

    result = 0;
    for (p = fn_80311370((void *)arg0, arg1); p != NULL && p[0] == arg1; p += 2) {
        result |= p[1];
    }
    return result;
}

s32 fn_80311990(void *arg0, s32 arg1) {
    s32 i;

    if (arg1 != 0) {
        for (i = M2C_FIELD(arg0, s32 *, 8); i >= 0; i--) {
            if (*(s32 *)((char *)arg0 + 0xC + i * 0xC) == arg1) {
                return i;
            }
        }
    }
    return -1;
}

s32 fn_80311990();
s32 fn_803112CC(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80311404(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_80311990(void *arg0, s32 arg1);
s32 fn_803119D4(arg0, arg1)
    void *arg0;
    s32 arg1;
{
    s32 result;
    s32 i;

    if (arg1 == -1) {
        return 0;
    }
    result = 0;
    for (i = fn_80311990(arg0, arg1) + 1; i <= M2C_FIELD(arg0, s32 *, 8); i++) {
        result |= M2C_FIELD(arg0, s32 *, i * 0xC + 0x14);
    }
    return result;
}

s32 fn_80311A4C(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 8) & ~fn_803119D4();
}

s32 fn_80311A84(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 0x10) & ~fn_803119D4();
}

s32 fn_80311ABC(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 0x18) & ~fn_803119D4();
}

s32 fn_80311AF4(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x200), s32 *, 0x20) & ~fn_803119D4();
}

s32 fn_80311B2C(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x1B4) & ~fn_803119D4();
}

s32 fn_80311B60(s32 *self) {
    return *self;
}

s32 fn_80311B68(s32 *self) {
    return self[1];
}

s32 fn_80311B70(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 4) >> 1U) & 1;
}

void fn_80311B7C(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311A4C(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A4C(arg0, arg2), 0);
}

void fn_80311BDC(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311ABC(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A4C(arg0, arg2), 0);
}

void fn_80311C3C(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311AF4(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A84(arg0, arg2), 0);
}

void fn_80311C9C(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311A84(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A84(arg0, arg2), 0);
}

void fn_80311CFC(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311B2C(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311B2C(arg0, arg2), 0);
}

void fn_80311D5C(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311A4C(arg0, arg2), 0, arg1);
}

s32 fn_80311310(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_80311DA4(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311A4C(arg0, arg2), 0, arg1);
}

void fn_80311DEC(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311A84(arg0, arg2), 0, arg1);
}

void fn_80311E34(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311A84(arg0, arg2), 0, arg1);
}

void fn_80311E7C(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311ABC(arg0, arg2), 0, arg1);
}

void fn_80311EC4(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311ABC(arg0, arg2), 0, arg1);
}

void fn_80311F0C(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311AF4(arg0, arg2), 0, arg1);
}

void fn_80311F54(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311AF4(arg0, arg2), 0, arg1);
}

void fn_80311F9C(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311B2C(arg0, arg2), 0, arg1);
}

void fn_80311FE4(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311B2C(arg0, arg2), 0, arg1);
}

void fn_8031202C(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311A4C(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A4C(arg0, arg2), 1);
}

void fn_8031208C(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311ABC(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A4C(arg0, arg2), 1);
}

void fn_803120EC(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311AF4(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A84(arg0, arg2), 1);
}

void fn_8031214C(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311A84(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A84(arg0, arg2), 1);
}

void fn_803121AC(void *arg0, s32 arg1, s32 arg2) {
    s32 a = fn_80311B2C(arg0, arg2);
    fn_80311404(arg0, arg1, a, fn_80311A4C(arg0, arg2), 1);
}

void fn_8031220C(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311A4C(arg0, arg2), 1, arg1);
}

void fn_80312254(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311A4C(arg0, arg2), 1, arg1);
}

void fn_8031229C(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311A84(arg0, arg2), 1, arg1);
}

void fn_803122E4(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311A84(arg0, arg2), 1, arg1);
}

void fn_8031232C(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311ABC(arg0, arg2), 1, arg1);
}

void fn_80312374(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311ABC(arg0, arg2), 1, arg1);
}

void fn_803123BC(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311AF4(arg0, arg2), 1, arg1);
}

void fn_80312404(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311AF4(arg0, arg2), 1, arg1);
}

void fn_8031244C(void *arg0, s32 arg1, s32 arg2) {
    fn_803112CC(arg0, fn_80311B2C(arg0, arg2), 1, arg1);
}

void fn_80312494(void *arg0, s32 arg1, s32 arg2) {
    fn_80311310(arg0, fn_80311B2C(arg0, arg2), 1, arg1);
}

s32 fn_803124DC(void *arg0, s32 arg1) {
    return ((struct { u8 pad[0x18C]; s32 unk18C[2]; } *)arg0)->unk18C[arg1];
}

s32 fn_803124EC(void *arg0, s32 arg1, s32 arg2) {
    return ((struct { u8 pad[0x194]; s32 unk194[2][2]; } *)arg0)->unk194[arg1][arg2];
}

void *fn_80312504(void *arg0) {
    extern char lbl_8041B210[];
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, void **, 8) = lbl_8041B210;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return arg0;
}

s32 *fn_80312524(s32 *self) {
    self[4] = 0;
    self[3] = 0;
    self[0] = 1;
    self[6] = 0;
    self[2] = 1;
    self[5] = 0;
    return self;
}

void fn_8031254C(void *arg0, void *arg1) {
    void *temp_r10;
    void *temp_r9;

    temp_r10 = arg0 + 0xC;
    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(temp_r10, void **, 4);
    temp_r9 = M2C_FIELD(temp_r10, void **, 4);
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, void **, 4) = arg1;
    } else {
        M2C_FIELD(arg0, void **, 0xC) = arg1;
    }
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(temp_r10, void **, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 1);
}

void fn_80312594(void *arg0, void *arg1) {
    s32 temp_r11_2;
    s32 temp_r9;
    void *temp_r11;

    temp_r11 = arg0 + 0xC;
    if ((void **) M2C_FIELD(arg0, void ***, 0xC) == arg1) {
        M2C_FIELD(arg0, void ***, 0xC) = (void **) M2C_FIELD(arg1, void ***, 4);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    }
    if ((void *) M2C_FIELD(temp_r11, void **, 4) == arg1) {
        M2C_FIELD(temp_r11, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0);
    } else {
        *M2C_FIELD(arg1, void ***, 4) = M2C_FIELD(arg1, void **, 0);
    }
    M2C_FIELD(arg0, s32 *, 8) = 1;
    temp_r9 = M2C_FIELD(arg0, s32 *, 0x18) - 1;
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r9;
    if (temp_r9 != 0) {
        temp_r11_2 = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_r11_2 >= temp_r9) {
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_r11_2 - 1);
        }
    }
}

M2C_UNK fn_80312D20(M2C_UNK arg0, M2C_UNK arg1) {
    extern s32 lbl_80459F7C[];
    extern f32 lbl_80459F98[];
    extern f32 lbl_80459FA4[];
    extern const f32 lbl_803F23A8[];
    extern const f32 lbl_803F23AC[];
    extern const f32 lbl_803F23B0[];
    extern const f32 lbl_803F23B4[];

    if (arg1 == 0xFFFF && arg0 != 0) {
        fn_80312524(lbl_80459F7C);
        lbl_80459F98[0] = lbl_803F23A8[0];
        lbl_80459F98[1] = lbl_803F23AC[0];
        lbl_80459F98[2] = lbl_803F23B0[0];
        lbl_80459FA4[0] = lbl_803F23AC[0];
        lbl_80459FA4[1] = lbl_803F23AC[0];
        lbl_80459FA4[2] = lbl_803F23B4[0];
    }
}

void fn_80312DA8(void) {
    M2C_UNK fn_80312D20(M2C_UNK, M2C_UNK);
    fn_80312D20(1, 0xFFFF);
}

