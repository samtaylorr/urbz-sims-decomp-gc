/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_804942B4;

void fn_8031EA2C(void *);

void fn_800F6FB4(void *, void *, s32);

typedef struct LocalStr8 {
    u8 hdr[8];
    char buf[16];
} LocalStr8;

static inline void LocalStr8_Init(LocalStr8 *s) {
    fn_800F6FB4(s, s->buf, 8);
}

static inline void ReleasePtr(void **pp) {
    if (*pp != NULL) {
        fn_8031EA2C(*pp);
        *pp = NULL;
    }
}
f32 fn_8009E9D4(f32 x) {
    extern const f32 lbl_803CD6C4[];
    extern const f32 lbl_803CD6C8[];
    extern const f32 lbl_803CD6CC[];
    extern const f32 lbl_803CD6D0[];
    f32 v = (x + lbl_803CD6C4[0]) / lbl_803CD6C8[0];
    f32 r = lbl_803CD6CC[0];
    if (v < r) {
    } else if (v > lbl_803CD6D0[0]) {
        r = lbl_803CD6D0[0];
    } else {
        r = v;
    }
    return r;
}

void fn_800A0568(void) {

}

void fn_800A0A88(void) {

}

void fn_800A0A8C(void) {

}

void fn_800A0F48(s32 arg0) {
    M2C_UNK fn_800A3310(s32);
    fn_800A3310(arg0 + 0x4C);
}

void fn_800A0F6C(void *arg0) {
    M2C_UNK fn_800A19EC(void *);
    extern void (*lbl_80494EB8)(void);
    s32 v;
    s32 r;
    if (fn_800A19EC(arg0) != 0) {
        if (lbl_80494EB8 != NULL) {
            lbl_80494EB8();
        }
        return;
    }
    v = M2C_FIELD(arg0, s32 *, 0x1A0);
    if (v >= 0) {
        r = (v > 7) ? 0 : v;
    } else {
        r = 7;
    }
    M2C_FIELD(arg0, s32 *, 0x1A0) = r;
}

void fn_800A0FE0(void *arg0) {
    M2C_UNK fn_800A19EC(void *);
    extern void (*lbl_80494EB8)(void);
    s32 v;
    s32 r;
    if (fn_800A19EC(arg0) != 0) {
        if (lbl_80494EB8 != NULL) {
            lbl_80494EB8();
        }
        return;
    }
    v = M2C_FIELD(arg0, s32 *, 0x1A0);
    if (v >= 0) {
        r = (v > 4) ? 0 : v;
    } else {
        r = 4;
    }
    M2C_FIELD(arg0, s32 *, 0x1A0) = r;
}

void fn_800A1054(void *arg0) {
    M2C_UNK fn_800A19EC(void *);
    extern void (*lbl_80494EB8)(void);
    s32 v;
    s32 r;
    if (fn_800A19EC(arg0) != 0) {
        if (lbl_80494EB8 != NULL) {
            lbl_80494EB8();
        }
        return;
    }
    v = M2C_FIELD(arg0, s32 *, 0x1A0);
    if (v >= 0) {
        r = (v > 6) ? 0 : v;
    } else {
        r = 6;
    }
    M2C_FIELD(arg0, s32 *, 0x1A0) = r;
}

void fn_800A10C8(s32 arg0) {
    M2C_UNK fn_800A3358(s32);
    fn_800A3358(arg0 + 0x4C);
}

void fn_800A13DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1A0) = arg1;
}

s32 fn_800A18A8(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x180);
    M2C_FIELD(arg0, s32 *, 0x180) = arg1;
    return temp_r0;
}

void fn_800A1B38(void) {

}

void fn_800A1B3C(void) {

}

void fn_800A1B40(void) {

}

void fn_800A1B44(void) {

}

void fn_800A1FF8(char *arg0, s32 arg1, s32 arg2) {
    extern const f32 lbl_803CD834[];
    extern const f32 lbl_803CD838[];
    char *vt;

    vt = M2C_FIELD(arg0, char **, 0x44);
    (*(void (**)(char *, s32))(vt + 0x54))(arg0 + *(s16 *)(vt + 0x50), 2);
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) |= 2;
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) &= ~2;
    }
    if (arg2 != 0) {
        M2C_FIELD(arg0, f32 *, 0x170) = lbl_803CD834[0];
        if (arg1 == 2) {
            M2C_FIELD(arg0, s32 *, 0x1A0) = 6;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x170) = lbl_803CD838[0];
    }
    M2C_FIELD(arg0, s32 *, 0x174) = arg1;
}

void fn_800A20A8(char *arg0, s32 arg1) {
    void fn_800A1534(char *);

    *M2C_FIELD(arg0, s32 **, 0x48) = arg1;
    switch (arg1) {
    case 3:
    case 4:
        break;
    default:
        fn_800A1FF8(arg0, M2C_FIELD(arg0, s32 *, 0x174), 0);
        fn_800A1534(arg0);
        break;
    }
}

void fn_800A22D4(void) {

}

void *fn_800A26A0(char *arg0) {
    void fn_803082CC(void *, f32, s32, s32, f32, f32, s32, s32, s32);
    extern const f32 lbl_803CD8AC[];
    extern const f32 lbl_803CD8B0[];
    extern u8 lbl_8040A0F8[];

    fn_803082CC(arg0, lbl_803CD8AC[0], -1, -1, lbl_803CD8B0[0], lbl_803CD8B0[0], -1, -1, 1);
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    M2C_FIELD(arg0, void **, 0x44) = lbl_8040A0F8;
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
    M2C_FIELD(arg0 + 0x118, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    return arg0;
}

void fn_800A271C(char *arg0, s32 flags) {
    extern u8 lbl_8040A0F8[];
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    void fn_800A2B08(void *);
    void fn_8030834C(void *, s32);
    s32 *v;

    M2C_FIELD(arg0, void **, 0x44) = lbl_8040A0F8;
    fn_800A2B08(arg0);
    v = (s32 *)(arg0 + 0x110);
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8((void *)v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    fn_8030834C(arg0, flags);
}

void fn_800A2B08(void *arg0) {
    char *self = arg0;
    char *node;
    char *obj;
    char *vt;

    node = M2C_FIELD(self, char **, 0);
    while (node != NULL) {
        obj = M2C_FIELD(node, char **, 0);
        vt = M2C_FIELD(self, char **, 0x44);
        node = M2C_FIELD(node, char **, 8);
        (*(void (**)(char *, char *))(vt + 0x7C))(self + *(s16 *)(vt + 0x78), obj);
        vt = M2C_FIELD(obj, char **, 0x44);
        (*(void (**)(char *))(vt + 0x84))(obj + *(s16 *)(vt + 0x80));
    }
    M2C_FIELD(self, s32 *, 0x48) = 0;
    M2C_FIELD(self, s32 *, 0x114) = M2C_FIELD(self, s32 *, 0x110);
}

s32 fn_800A3038(void *arg0, void *arg1, s32 *arg2, s32 *arg3) {
    s32 fn_8011DCBC(void *);
    *arg2 = fn_8011DCBC(arg0);
    *arg3 = M2C_FIELD(arg1, s16 *, 4);
    return 1;
}

void fn_800A3310(void *arg0, s32 arg1) {
    void fn_80308448(void *);
    void fn_8004B8F4(void *, s32);
    extern struct { u8 pad[0xD8]; s32 arr[1]; } lbl_8041F94C;
    if (M2C_FIELD(arg0, s32 *, 0x10C) != 0) {
        fn_80308448(arg0);
        fn_8004B8F4(&lbl_8041F94C, arg1);
    }
}

void fn_800A3544(char *arg0, s32 arg1, s32 arg2) {
    void **fn_800A35E4();
    void *fn_800A361C(char *);
    void fn_800A375C(void *, s32, s32);
    void fn_803074F0(void *, s32, s32);
    void fn_803077CC(void *, s32);
    extern const f32 lbl_803CD8E8[];
    struct { f32 x, y, z; } v;
    char *p;
    char *vt;

    p = fn_800A361C((char *)fn_800A35E4(0x90));
    fn_800A375C(p, arg1, arg2);
    fn_803074F0(p, 4, 0);
    fn_803077CC(p, M2C_FIELD(arg0, s32 *, 0x38));
    v.x = v.y = v.z = lbl_803CD8E8[0];
    vt = M2C_FIELD(arg0, char **, 0x44);
    (*(void (**)(char *, void *, void *))(vt + 0x94))(arg0 + *(s16 *)(vt + 0x90), p, &v);
}

void **fn_800A35E4(void) {
    extern void *lbl_8042F060[];
    void **p;

    p = lbl_8042F060[0];
    if (p != NULL) {
        lbl_8042F060[0] = *p;
    }
    return p;
}

void fn_800A3600(void **arg0) {
    extern void *lbl_8042F060[];
    void **head = lbl_8042F060;

    if (arg0 != NULL) {
        *arg0 = *head;
        *head = arg0;
    }
}

void *fn_800A361C(char *arg0) {
    void fn_800F160C(void *);
    void fn_8030728C(void *);
    extern f32 lbl_803CD8EC[];
    extern u8 lbl_8040A068[];
    extern f32 lbl_8049428C;
    extern f32 lbl_80494290;
    extern f32 lbl_80494294;
    extern f32 lbl_80494298;
    struct {
        f32 a;
        f32 b;
    } t;
    f32 d;

    fn_8030728C(arg0);
    M2C_FIELD(arg0, void **, 0x44) = lbl_8040A068;
    fn_800F160C(arg0 + 0x58);
    fn_800F160C(arg0 + 0x5C);
    fn_800F160C(arg0 + 0x60);
    d = lbl_80494290 - lbl_8049428C;
    t.a = d * lbl_803CD8EC[0] + d;
    t.b = lbl_80494298 - lbl_80494294;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = t.b;
    M2C_FIELD(arg0, f32 *, 0x20) = *(f32 *)&t;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    return arg0;
}

void fn_800A36B4(char *arg0, s32 arg1) {
    void fn_800A3600(void **);
    void fn_800F1A60(void *, s32);
    void fn_80307364(void *, s32);
    extern u8 lbl_8040A068[];

    M2C_FIELD(arg0, void **, 0x44) = lbl_8040A068;
    M2C_FIELD(arg0, void *volatile *, 0x68) = NULL;
    ReleasePtr((void **)(arg0 + 0x88));
    ReleasePtr((void **)(arg0 + 0x8C));
    fn_800F1A60(arg0 + 0x60, 2);
    fn_800F1A60(arg0 + 0x5C, 2);
    fn_800F1A60(arg0 + 0x58, 2);
    fn_80307364(arg0, 0);
    if (arg1 & 1) {
        fn_800A3600((void **)arg0);
    }
}

void fn_800A3EF0(char *arg0) {
    void fn_800A2EF0(s32, s32, void *);
    void fn_800F7494(void *, s32);
    void *fn_800F7138(void *);
    void fn_800F22F0(void *, void *);
    void fn_803073C4(void *);
    LocalStr8 s;
    LocalStr8 *sp = &s;
    char *b;

    fn_800A2EF0(M2C_FIELD(arg0, s32 *, 0x64), M2C_FIELD(arg0, s32 *, 0x68), arg0 + 0x6C);
    b = sp->buf;
    fn_800F6FB4(sp, b, 8);
    fn_800F7494(sp, M2C_FIELD(arg0, s32 *, 0x6C));
    fn_800F22F0(arg0 + 0x60, fn_800F7138(sp));
    fn_803073C4(arg0);
}

s32 fn_800A3F68(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), s32 *, 0xC);
}

void fn_800A3F74(char *arg0) {
    void fn_800A13E4(void *, void *, s32);
    void fn_800A2B08(void *);
    void fn_800A2794(void *, s32);
    extern f32 lbl_803CD990[];
    extern u8 lbl_8042F020[];
    extern struct { u8 pad[0xD8]; s32 arr[1]; } lbl_8041F94C;
    char *p;

    M2C_FIELD(arg0, f32 *, 0x19C) = lbl_803CD990[0];
    fn_800A13E4(arg0, lbl_8042F020 + (M2C_FIELD(arg0, s32 *, 0x38) << 5), 1);
    if (M2C_FIELD(arg0, s32 *, 0x174) == 3) {
        p = arg0 + 0x4C;
        fn_800A2B08(p);
        fn_800A2794(p, lbl_8041F94C.arr[M2C_FIELD(arg0, s32 *, 0x38)]);
    }
}

void fn_800A40EC(void) {

}

void fn_800A42E8(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)obj[0x11];
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 8), 3);
    }
}

void fn_800A4328(s32 arg0) {
    M2C_UNK fn_800F3304(s32);
    fn_800F3304(arg0 + 0x58);
}

void fn_800A434C(s32 arg0) {
    M2C_UNK fn_800F3304(s32);
    fn_800F3304(arg0 + 0x5C);
}

void fn_800A4370(void) {

}

s32 fn_800A4374(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x174);
}

s32 fn_800A437C(void) {
    return lbl_804942B4;
}

void fn_800A4384(void *arg0) {
    extern f32 lbl_803CD9E0[];
    f32 v = lbl_803CD9E0[0];
    M2C_FIELD(arg0, f32 *, 0x198) = v;
    M2C_FIELD(arg0, f32 *, 0x194) = v;
    M2C_FIELD(arg0, f32 *, 0x190) = v;
}

void fn_800A439C(void) {
    M2C_UNK fn_800A40F0(M2C_UNK, M2C_UNK);
    fn_800A40F0(1, 0xFFFF);
}

void fn_800A43C8(void) {
    M2C_UNK fn_800A40F0(M2C_UNK, M2C_UNK);
    fn_800A40F0(0, 0xFFFF);
}

