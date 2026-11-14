/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct ERMLock {
    char *obj;
    u8 unk4[3];
} ERMLock;

static inline void ERMLock_Lock(ERMLock *l, char *obj) {
    char *vt;
    l->obj = obj;
    vt = *(char **)obj;
    (*(void (**)(void *, s32))(vt + 0x14))(obj + *(s16 *)(vt + 0x10), -1);
}

static inline void ERMLock_Unlock(ERMLock *l) {
    char *vt = *(char **)l->obj;
    (*(void (**)(void *))(vt + 0x1C))(l->obj + *(s16 *)(vt + 0x18));
}

extern u8 lbl_8041C298[];
extern void fn_802D20E8(void *);
void fn_8033BD7C(void **self, s32 flags) {
    *self = lbl_8041C298;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

M2C_UNK fn_8033BDB0(void *self) {
    extern u8 lbl_8041C1C8[];
    extern f32 lbl_803F3E94[];
    extern f32 lbl_803F3E98[];
    extern void *lbl_80494FA4;
    extern void fn_802CA9A8(void *);
    f32 a, b;
    M2C_FIELD(self, u8 **, 0) = lbl_8041C1C8;
    fn_802CA9A8((u8 *)self + 0x40);
    fn_802CA9A8((u8 *)self + 0x5C);
    a = lbl_803F3E94[0];
    b = lbl_803F3E98[0];
    M2C_FIELD(self, f32 *, 4) = a;
    M2C_FIELD(self, f32 *, 8) = b;
    lbl_80494FA4 = self;
    M2C_FIELD(self, s32 *, 0x38) = 0;
    M2C_FIELD(self, s32 *, 0x3C) = 0;
    return self;
}

M2C_UNK fn_8033BE20(void *self, s32 flags) {
    extern u8 lbl_8041C1C8[];
    extern void fn_802CAA00(void *, s32);
    M2C_FIELD(self, u8 **, 0) = lbl_8041C1C8;
    fn_802CAA00((u8 *)self + 0x5C, 2);
    fn_802CAA00((u8 *)self + 0x40, 2);
    fn_8033BD7C(self, flags);
}

s32 *fn_8033BE7C(s32 *self, s32 arg1, s32 arg2) {
    self[0] = arg1;
    self[1] = 0;
    self[2] = -1;
    self[4] = 0;
    self[3] = arg2;
    return self;
}

s32 *fn_8033BEA0(s32 *self, s32 arg1, s32 arg2) {
    s32 fn_80337F14(s32);
    self[0] = fn_80337F14(arg1);
    self[1] = 0;
    self[2] = -1;
    self[4] = 0;
    self[3] = arg2;
    return self;
}

void fn_8033BFF8(void) {

}

void fn_8033BFFC(void) {
    extern s32 lbl_80494F98;
    extern s32 lbl_80494F9C;
    extern s32 lbl_80494FA8;
    void fn_8035F8AC(s32, s32);
    void fn_803827FC(s32);
    void fn_80384AB8(void);
    void fn_80380B6C(void);

    if (lbl_80494F98 != 0 && lbl_80494F9C != 0) {
        if (lbl_80494FA8 != 0) {
            fn_8035F8AC(lbl_80494FA8, 3);
            lbl_80494FA8 = 0;
        }
        fn_803827FC(0);
        fn_80384AB8();
        fn_80380B6C();
        lbl_80494F9C = 0;
    }
}

s32 fn_8033C4E4(void) {
    return 0;
}

s32 fn_8033C4EC(void) {
    return 0;
}

void fn_8033C7FC(void *self) {
    extern u8 lbl_8045BD40[];
    extern u8 lbl_8045B198[];
    extern s32 lbl_80494F98;
    extern s32 lbl_80494FA8;
    s32 fn_8035FD24(s32, s32);
    void fn_8033789C(void *, s32);
    ERMLock lock;
    u8 *p;
    u8 *end;

    if (lbl_80494F98 != 0) {
        ERMLock_Lock(&lock, (char *)self + 0x40);
        p = lbl_8045BD40;
        end = p + 0x10bc;
        do {
            if (M2C_FIELD(p, s32 *, 0) != -1 && M2C_FIELD(p, s32 *, 0x40) != -1) {
                if (fn_8035FD24(lbl_80494FA8, M2C_FIELD(p, s32 *, 0x40)) != 0) {
                    fn_8033789C(lbl_8045B198, M2C_FIELD(p, s32 *, 0));
                }
                M2C_FIELD(p, s32 *, 0) = -1;
            }
            p += 0x44;
        } while (p <= end);
        ERMLock_Unlock(&lock);
    }
}

void fn_8033C8C4(void *arg0) {
    extern s32 lbl_80494F98;
    extern s32 lbl_80494FA8;
    typedef struct { s32 id; char pad[0x3C]; s32 voice; } Snd;
    extern Snd lbl_8045BD40[64];
    void fn_8035FA0C(s32, s32);
    Snd *p;
    Snd *end;

    if (lbl_80494F98 != 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
        p = lbl_8045BD40;
        end = &lbl_8045BD40[63];
        do {
            if (p->id != -1 && p->voice != -1) {
                fn_8035FA0C(lbl_80494FA8, p->voice);
            }
            p++;
        } while (p <= end);
    }
}

void fn_8033C934(void *arg0) {
    extern s32 lbl_80494F98;
    extern s32 lbl_80494FA8;
    typedef struct { s32 id; char pad[0x3C]; s32 voice; } Snd;
    extern Snd lbl_8045BD40[64];
    void fn_8035FA8C(s32, s32);
    Snd *p;
    Snd *end;

    if (lbl_80494F98 != 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        p = lbl_8045BD40;
        end = &lbl_8045BD40[63];
        do {
            if (p->id != -1 && p->voice != -1) {
                fn_8035FA8C(lbl_80494FA8, p->voice);
            }
            p++;
        } while (p <= end);
    }
}

void fn_8033C9A4(void *self, f32 v) {
    extern f32 lbl_803F3E9C[];
    extern f32 lbl_803F3EA0[];
    extern f32 lbl_803F3EA4[];
    extern u8 lbl_8045BD40[];
    extern s32 lbl_80494F98;
    extern s32 lbl_80494FA8;
    M2C_UNK fn_8035FE68(s32, s32, u8);
    u8 *p;
    u8 *end;
    f32 k;
    s32 on;

    if (v > lbl_803F3E9C[0]) {
        v = lbl_803F3E9C[0];
    }
    if (v < lbl_803F3EA0[0]) {
        v = lbl_803F3EA0[0];
    }
    on = lbl_80494F98;
    M2C_FIELD(self, f32 *, 4) = v;
    if (on != 0) {
        p = lbl_8045BD40;
        k = lbl_803F3EA4[0];
        end = p + 0x10bc;
        do {
            if (M2C_FIELD(p, s32 *, 0) != -1 && M2C_FIELD(p, s32 *, 0x40) != -1) {
                fn_8035FE68(lbl_80494FA8, M2C_FIELD(p, s32 *, 0x40), (u8)(s32)(M2C_FIELD(self, f32 *, 4) * k));
            }
            p += 0x44;
        } while (p <= end);
    }
}

f32 fn_8033CA64(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 4);
}

void fn_8033CA6C(void *self, f32 v) {
    extern f32 lbl_803F3EA8[];
    extern f32 lbl_803F3EAC[];
    extern f32 lbl_803F3EB0[];
    extern f32 lbl_803F3EB4[];
    extern f32 lbl_803F3EB8[];
    extern u8 lbl_8045BD40[];
    extern s32 lbl_80494F98;
    extern s32 lbl_80494FA8;
    M2C_UNK fn_8035FF98(s32, s32, u8);
    u8 *p;
    u8 *end;
    s32 on;
    u8 pan;

    if (v < lbl_803F3EA8[0]) {
        v = lbl_803F3EAC[0] - v;
    } else if (v > lbl_803F3EB0[0]) {
        v = lbl_803F3EB4[0] - v;
    }
    on = lbl_80494F98;
    M2C_FIELD(self, f32 *, 8) = v;
    if (on != 0) {
        pan = (s32)(v * lbl_803F3EB8[0] + lbl_803F3EB8[0]);
        p = lbl_8045BD40;
        end = p + 0x10bc;
        do {
            if (M2C_FIELD(p, s32 *, 0) != -1 && M2C_FIELD(p, s32 *, 0x40) != -1) {
                fn_8035FF98(lbl_80494FA8, M2C_FIELD(p, s32 *, 0x40), pan);
            }
            p += 0x44;
        } while (p <= end);
    }
}

f32 fn_8033CB30(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 8);
}

s32 fn_8033CB38(void *arg0) {
    s32 fn_8035FE10(s32);
    extern s32 lbl_80494F98;
    extern s32 lbl_80494FA8;
    s32 r;

    if (lbl_80494F98 == 0) {
        return 0;
    }
    r = 0;
    if (fn_8035FE10(lbl_80494FA8) != 0) {
        r = M2C_FIELD(arg0, s32 *, 0xC) == 0;
    }
    return r;
}

void fn_8033CB94(void) {
    M2C_UNK fn_8035DFE0(s32);
    M2C_UNK fn_8035F938(s32);
    M2C_UNK fn_80385FA8();
    extern s32 lbl_80494F98;
    extern s32 lbl_80494FA8;
    extern s32 lbl_80494FAC;
    if ((s32) lbl_80494F98 != 0) {
        fn_80385FA8();
        fn_8035F938(lbl_80494FA8);
        fn_8035DFE0(lbl_80494FAC);
    }
}

void *fn_8033CBD0(void) {
    void *fn_802D1FC8(M2C_UNK);
    M2C_UNK fn_803BE5CC();
    void *temp_r3;

    temp_r3 = fn_802D1FC8(0x20);
    M2C_FIELD(temp_r3, s32 *, 8) = -1;
    fn_803BE5CC();
    return temp_r3;
}

void fn_8033CC10(void **self, void *arg1) {
    void *vt;

    vt = *self;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0xA4))((char *)self + M2C_FIELD(vt, s16 *, 0xA0));
    fn_802D20E8(arg1);
}

void fn_8033CDF4(void *self, void *p) {
    void fn_8035E8BC(s32, s32);
    void fn_80337AEC(s32, s32);
    extern s32 lbl_80494FAC;
    extern s32 lbl_8049627C;
    extern s32 lbl_8045CE40[];
    ERMLock lock;
    u32 i;

    ERMLock_Lock(&lock, (char *)self + 0x5C);
    if (M2C_FIELD(p, s32 *, 8) != -1) {
        fn_8035E8BC(lbl_80494FAC, M2C_FIELD(p, s32 *, 8));
        fn_80337AEC(lbl_8049627C, M2C_FIELD(p, s32 *, 4));
        for (i = 0; i < 64; i++) {
            if (lbl_8045CE40[i] == M2C_FIELD(p, s32 *, 8)) {
                lbl_8045CE40[i] = -1;
                break;
            }
        }
        M2C_FIELD(p, s32 *, 8) = -1;
    }
    ERMLock_Unlock(&lock);
}

void fn_8033CED8(void *arg0, void *p, s32 *out) {
    s32 fn_8035E08C(s32, s32);
    extern s32 lbl_80494FAC;
    void *q;

    M2C_FIELD(p, s32 *, 0x18) = 0;
    if (M2C_FIELD(p, s32 *, 8) != -1) {
        M2C_FIELD(p, s32 *, 0x18) = fn_8035E08C(lbl_80494FAC, M2C_FIELD(p, s32 *, 8));
    }
    out[0] = 0x1f;
    q = M2C_FIELD(p, void **, 4);
    if (q != NULL) {
        out[5] = M2C_FIELD(q, s32 *, 0x30);
    } else {
        out[5] = (s32)q;
    }
    out[4] = M2C_FIELD(p, s32 *, 0x18);
    M2C_FIELD(out, f32 *, 0xC) = M2C_FIELD(p, f32 *, 0x14);
    M2C_FIELD(out, f32 *, 4) = M2C_FIELD(p, f32 *, 0xC);
    M2C_FIELD(out, f32 *, 8) = M2C_FIELD(p, f32 *, 0x10);
}

void fn_8033D098(void *arg0, void *arg1, s32 *arg2) {
    void fn_8035EA90(void *, s32, s32);
    void fn_8035EB9C(void *, s32, s32);
    extern s32 lbl_80494F98;
    extern void *lbl_80494FAC;

    if (lbl_80494F98 != 0 && arg1 != NULL) {
        if (M2C_FIELD(arg1, s32 *, 0x1C) == 0) {
            fn_8035EA90(lbl_80494FAC, M2C_FIELD(arg1, s32 *, 8), arg2[0]);
            fn_8035EB9C(lbl_80494FAC, M2C_FIELD(arg1, s32 *, 8), arg2[1]);
        }
    }
}

s32 fn_8033D104(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

void fn_8033D10C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}

void fn_8033D114(s32 arg0, s32 arg1) {
    M2C_UNK fn_8033BDB0(void *);
    M2C_UNK fn_8033BE20(void *, s32);
    extern u8 lbl_8045BC60[];

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8033BDB0(lbl_8045BC60);
        } else {
            fn_8033BE20(lbl_8045BC60, 2);
        }
    }
}

void **fn_8033D168(void **self) {
    *self = lbl_8041C298;
    return self;
}

s32 fn_8033D17C(void **arg0, f32 arg1) {
    extern f32 lbl_803F3EC8[];
    extern f32 lbl_803F3ECC[];
    void *vt;
    s32 clamped;
    f32 v;

    clamped = 0;
    vt = *arg0;
    v = ((f32 (*)(void *))M2C_FIELD(vt, void **, 0x6C))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x68)) + arg1;
    if (v > lbl_803F3EC8[0]) {
        v = lbl_803F3EC8[0];
        clamped = 1;
    } else if (v < lbl_803F3ECC[0]) {
        v = lbl_803F3ECC[0];
        clamped = 1;
    }
    vt = *arg0;
    ((void (*)(void *, f32))M2C_FIELD(vt, void **, 0x64))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x60), v);
    return clamped;
}

void fn_8033D214(void) {

}

void fn_8033D218(void) {

}

void fn_8033D21C(void) {

}

void fn_8033D220(void) {
    void fn_8033D114(s32, s32);
    fn_8033D114(1, 0xFFFF);
}

extern u8 lbl_8045BC60[];
M2C_UNK fn_8033BDB0(void *);
M2C_UNK fn_8033BE20(void *, s32);
void fn_8033D24C(void) {
    void fn_8033D114(s32, s32);
    fn_8033D114(0, 0xFFFF);
}

