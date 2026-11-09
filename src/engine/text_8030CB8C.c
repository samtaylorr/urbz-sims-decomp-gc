/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x, y, z;
} Vec3f;

void fn_8030DA64(void);
s32 fn_8030CB8C(void) {
    s32 fn_8036F2AC(s32, s32);
    s32 fn_8030FAF0(s32, s32, s32);
    s32 fn_8030FA50(s32 *, s32);
    void fn_8030FDFC(f32 *);
    extern s32 lbl_804961F4;
    extern s32 lbl_804961F8;
    extern s32 lbl_804961FC;
    extern char lbl_803F20A8[];
    extern char lbl_803F20B4[];
    extern char lbl_803F20C0[];
    extern Vec3f lbl_803F20CC;
    Vec3f v;
    if (fn_8036F2AC(0x84, 0x84) < 0) {
        return -1;
    }
    if (fn_8030FAF0(4, 0x80, 0x1000) < 0) {
        return -1;
    }
    fn_8030FA50(&lbl_804961F4, (s32)lbl_803F20A8);
    fn_8030FA50(&lbl_804961F8, (s32)lbl_803F20B4);
    fn_8030FA50(&lbl_804961FC, (s32)lbl_803F20C0);
    v = lbl_803F20CC;
    fn_8030FDFC((f32 *)&v);
    return 0;
}

s32 fn_8030CC3C(void) {
    M2C_UNK fn_8030FAAC(M2C_UNK *);
    M2C_UNK fn_8030FDC4();
    M2C_UNK fn_8036F334();
    extern M2C_UNK lbl_804961F4;
    extern M2C_UNK lbl_804961F8;
    extern M2C_UNK lbl_804961FC;
    fn_8030FAAC(&lbl_804961F4);
    fn_8030FAAC(&lbl_804961F8);
    fn_8030FAAC(&lbl_804961FC);
    fn_8030FDC4();
    fn_8036F334();
    return 0;
}

void fn_8030D260(void *arg0, void *arg1, f32 t) {
    extern f32 lbl_803F2104[];
    extern f32 lbl_803F2108[];
    s32 found = 0;
    s32 i = 0;
    f32 sum = lbl_803F2108[0];
    t *= lbl_803F2104[0];
    while (!found && i < M2C_FIELD(arg1, u32 *, 0x168)) {
        sum += *(f32 *)((u8 *)arg1 + 0x18c + i * 0x84);
        if (t < sum) {
            M2C_FIELD(arg0, f32 *, 0x44) = i;
            found = 1;
        } else {
            i++;
        }
    }
    if (!found) {
        M2C_FIELD(arg0, f32 *, 0x44) = lbl_803F2108[0];
    }
}

void fn_8030EF10(void) {
    fn_8030DA64();
}

void fn_8030F488(void **arg0) {
    void fn_8030F5B8(void *);
    void fn_8030F938(void *, void *);
    void fn_8030F818(void **);
    void *sp8;
    void *n;

    if (arg0 == NULL) {
        return;
    }
    M2C_FIELD(*arg0, void **, 0x90) = M2C_FIELD(*arg0, void **, 0x88);
    for (;;) {
        n = M2C_FIELD(*arg0, void **, 0x90);
        if (n != NULL) {
            sp8 = M2C_FIELD(n, void **, 8);
        } else {
            sp8 = n;
        }
        if (sp8 == NULL) {
            break;
        }
        M2C_FIELD(*arg0, void **, 0x90) = *M2C_FIELD(*arg0, void ***, 0x90);
        fn_8030F5B8(sp8);
        if (M2C_FIELD(sp8, void (**)(s32), 0xa4) != NULL) {
            M2C_FIELD(sp8, void (**)(s32), 0xa4)(M2C_FIELD(sp8, s32 *, 0xa8));
        }
        fn_8030F938(arg0, sp8);
        fn_8030F818(&sp8);
    }
}

void fn_8030F538(void **arg0) {
    void *n;

    if (arg0 == NULL) {
        return;
    }
    M2C_FIELD(*arg0, void **, 0x90) = M2C_FIELD(*arg0, void **, 0x88);
    while (1) {
        s32 data = 0;
        n = M2C_FIELD(*arg0, void **, 0x90);
        if (n != NULL) {
            data = M2C_FIELD(n, s32 *, 8);
        }
        if (data == 0) {
            break;
        }
        M2C_FIELD(*arg0, void **, 0x90) = *(void **)n;
    }
}

void fn_8030F57C(s32 *arg0) {
    M2C_UNK fn_8036FB28(s32, s32);
    extern s32 lbl_80494EEC;
    fn_8036FB28(lbl_80494EEC, *arg0);
    *arg0 = 0;
}

void fn_8030F5B8(u32 *arg0) {
    void fn_8036F65C(void *, void *);
    M2C_UNK fn_8036FB28(s32, void *);
    extern s32 lbl_80494EEC;
    extern f32 lbl_803F2190[];
    void *n;

    M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x90) = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x88);
    n = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x90);
    while (n != NULL) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x90) = *(void **)M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x90);
        fn_8036F65C(M2C_FIELD(arg0, void **, 4), n);
        fn_8036FB28(lbl_80494EEC, n);
        n = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x90);
    }
    arg0[0] |= 6;
    M2C_FIELD(arg0, f32 *, 0x84) = M2C_FIELD(arg0, f32 *, 0x78) = lbl_803F2190[0];
}

void fn_8030F8EC(s32 *arg0, void *arg1) {
    void *fn_8036F4EC(s32, void *, void *, s32);
    extern u8 lbl_803F21B4[];
    M2C_FIELD(arg1, void **, 0x8c) = fn_8036F4EC(*arg0, lbl_803F21B4, arg1, 1);
    M2C_FIELD(arg1, s32 **, 0xb8) = arg0;
}

void fn_8030F938(void *arg0, void *arg1) {
    void fn_8036F5E4(s32, void *);
    void *p = M2C_FIELD(arg1, void **, 0x8c);
    if (p != NULL) {
        M2C_FIELD(p, u32 *, 0xc) |= 0x40000000;
        fn_8036F5E4(*M2C_FIELD(arg1, s32 **, 0xb8), M2C_FIELD(arg1, void **, 0x8c));
        M2C_FIELD(arg1, void **, 0x8c) = 0;
        M2C_FIELD(arg1, s32 *, 0xb8) = 0;
    }
}

void fn_8030F994(f32 *arg0, f32 *arg1) {
    f32 *p = arg1;
    arg0[2] = *p++;
    arg0[3] = *p++;
    arg0[4] = *p++;
    arg0[5] = *p++;
    arg0[6] = *p++;
    arg0[7] = *p++;
    arg0[8] = *p++;
    arg0[9] = *p++;
    arg0[10] = *p++;
    arg0[11] = *p++;
    arg0[12] = *p++;
    arg0[13] = *p++;
    arg0[14] = *p++;
    arg0[15] = *p++;
    arg0[16] = *p++;
    arg0[17] = *p;
}

void fn_8030FA1C(s32 *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        *arg0 |= arg1;
        return;
    }
    *arg0 &= ~arg1;
}

s32 fn_8030FA44(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x84);
}

void fn_8030F818(void);
s32 fn_8030FA50(s32 *arg0, s32 arg1) {
    s32 fn_8036FACC(s32);
    M2C_UNK fn_8036F3E0();
    void fn_8030F818(void);
    extern s32 lbl_80494EE4;
    s32 obj = fn_8036FACC(lbl_80494EE4);
    if (obj == 0) {
        return -1;
    }
    fn_8036F3E0(obj, arg1, fn_8030F818);
    *arg0 = obj;
    return 0;
}

void fn_8030FAAC(s32 *arg0) {
    M2C_UNK fn_8036F45C(s32);
    M2C_UNK fn_8036FB28(s32, s32);
    extern s32 lbl_80494EE4;
    fn_8036F45C(*arg0);
    fn_8036FB28(lbl_80494EE4, *arg0);
    *arg0 = 0;
}

s32 fn_8030FDC4(void) {
    M2C_UNK fn_8036FA90(M2C_UNK *);
    extern M2C_UNK lbl_80494EE4;
    extern M2C_UNK lbl_80494EE8;
    extern M2C_UNK lbl_80494EEC;
    fn_8036FA90(&lbl_80494EE4);
    fn_8036FA90(&lbl_80494EE8);
    fn_8036FA90(&lbl_80494EEC);
    return 0;
}

void fn_8030FDFC(f32 *arg0) {
    extern f32 lbl_803F2214[];
    extern f32 lbl_80459B60[];
    f32 x = arg0[0];
    f32 y = arg0[1];
    f32 z = arg0[2];
    f32 w = lbl_803F2214[0];
    lbl_80459B60[0] = x;
    lbl_80459B60[1] = y;
    lbl_80459B60[2] = z;
    lbl_80459B60[3] = w;
}

s32 fn_8030FE2C(void) {
    extern void *lbl_80494EEC;
    return M2C_FIELD(lbl_80494EEC, s32 *, 8);
}

s32 *fn_803100D8(s32 *arg0) {
    arg0[1] = 0;
    arg0[0] = 0;
    arg0[2] = 0;
    return arg0;
}

extern void fn_802D20E8(void *);
void fn_803100F0(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_80310118(void *arg0, void *arg1) {
    void *temp_r9;

    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(arg0, void **, 4);
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, void **, 4) = arg1;
    } else {
        M2C_FIELD(arg0, void **, 0) = arg1;
    }
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg0, void **, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
}

void fn_80310154(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
        if ((void **) M2C_FIELD(arg0, void ***, 0) == arg1) {
            M2C_FIELD(arg0, void ***, 0) = (void **) M2C_FIELD(arg1, void ***, 4);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
        }
        if ((void *) M2C_FIELD(arg0, void **, 4) == arg1) {
            M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0);
        } else {
            *M2C_FIELD(arg1, void ***, 4) = M2C_FIELD(arg1, void **, 0);
        }
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
    }
}

void fn_803101B8(s32 arg0, s32 arg1) {
    extern u8 lbl_80459F70[];
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_803100D8((s32 *)lbl_80459F70);
        } else {
            fn_803100F0(lbl_80459F70, 2);
        }
    }
}

void fn_8031020C(void) {
    void fn_803101B8(s32, s32);
    fn_803101B8(1, 0xFFFF);
}

extern u8 lbl_80459F70[];
void fn_80310238(void) {
    void fn_803101B8(s32, s32);
    fn_803101B8(0, 0xFFFF);
}

