/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_801288B4(void) {

}

void *fn_801288B8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_800EC9AC(void *);
    void fn_801289C4(M2C_UNK *);
    void fn_801292D0(void *, s32);
    void fn_80128D38(void *, s32, s32);
    void fn_80128CEC(void *, s32);

    fn_800EC9AC((char *)arg0 + 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4) = -1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x8) = -1;
    fn_801289C4(arg0);
    fn_801292D0(arg0, arg4);
    fn_80128D38(arg0, arg2, arg3);
    fn_80128CEC(arg0, 0);
    return arg0;
}

void fn_80128944(void *arg0, s32 arg1) {
    extern void (*lbl_80494450)(void *);
    void fn_800ECE00(void *, s32);
    void fn_802D20E8(void *);
    void fn_801289D4(void *);

    if (M2C_FIELD(arg0, void **, 0xC) != NULL) {
        lbl_80494450(M2C_FIELD(arg0, void **, 0xC));
    }
    fn_801289D4(arg0);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x4) = -1;
    M2C_FIELD(arg0, s32 *, 0x8) = -1;
    fn_800ECE00((char *)arg0 + 0x10, 2);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_801289C4(M2C_UNK *arg0) {
    extern M2C_UNK *lbl_80494448;
    *arg0 = lbl_80494448;
    lbl_80494448 = arg0;
}

void fn_801289D4(void *arg0) {
    extern M2C_UNK *lbl_80494448;
    void **pp = (void **)&lbl_80494448;

    while (*pp != NULL) {
        if (*pp == arg0) {
            *pp = *(void **)*pp;
            return;
        }
        pp = (void **)*pp;
    }
}

void fn_80128CEC(void *arg0, s32 arg1) {
    void fn_80248488(void *, s32, s32);

    if (M2C_FIELD(arg0, s32 *, 0x8) > 0 && M2C_FIELD(arg0, s32 *, 0x4) > 0) {
        fn_80248488(*M2C_FIELD(arg0, void ***, 0xC), arg1,
                    M2C_FIELD(arg0, s32 *, 0x8) * M2C_FIELD(arg0, s32 *, 0x4) * M2C_FIELD(arg0, s32 *, 0x14));
    }
}

void fn_80129158(s32 arg0, s32 arg1) {
    s32 fn_80129270(s32);
    void fn_80129194(s32, s32);
    fn_80129194(arg0, fn_80129270(arg1));
}

void fn_80129194(s32 arg0, s32 arg1) {
    void fn_8024839C(s32, s32, s32);
    void *a = (void *)arg0;
    void *b = (void *)arg1;
    s32 n;

    if (b != NULL && M2C_FIELD(b, s32 *, 0x14) == M2C_FIELD(a, s32 *, 0x14)
        && M2C_FIELD(a, s32 *, 8) == M2C_FIELD(b, s32 *, 8)
        && M2C_FIELD(a, s32 *, 4) == M2C_FIELD(b, s32 *, 4)) {
        n = M2C_FIELD(a, s32 *, 8) * M2C_FIELD(a, s32 *, 4) * M2C_FIELD(b, s32 *, 0x14);
        if (n > 0) {
            fn_8024839C(*M2C_FIELD(a, s32 **, 0xC), *M2C_FIELD(b, s32 **, 0xC), n);
        }
    }
}

void fn_80129208(s32 arg0, s32 arg1) {
    void fn_80129194(s32, s32);
    fn_80129194(arg1, arg0);
}

void fn_80129234(s32 arg0, s32 arg1) {
    s32 fn_80129270(s32);
    fn_80129208(arg0, fn_80129270(arg1));
}

s32 fn_80129270(s32 arg0) {
    s32 fn_800EF664(void *, s32);
    extern M2C_UNK *lbl_80494448;
    void **var_r31;

    for (var_r31 = (void **)lbl_80494448; var_r31 != NULL; var_r31 = (void **)*var_r31) {
        if (fn_800EF664((char *)var_r31 + 0x10, arg0) != 0) {
            return (s32)var_r31;
        }
    }
    return 0;
}

static inline s32 NghResFile_NameTaken(char *name) {
    s32 fn_800EF6F8(char *);
    return fn_800EF6F8(name) == 0 || fn_80129270((s32)name) != 0;
}

void fn_801292D0(void *arg0, s32 arg1) {
    void fn_801289D4(void *);
    void fn_800ECE40(char *, s32);
    s32 fn_800EE424(s32);
    void fn_80245BB4(char *, char *, ...);
    void fn_800ECF20(char *, char *);
    extern char lbl_803D8710[];
    char buf[0x200];
    char *name;
    s32 i;

    name = (char *)arg0 + 0x10;
    fn_801289D4(arg0);
    fn_800ECE40(name, arg1);
    i = 0;
    while (NghResFile_NameTaken(name)) {
        fn_80245BB4(buf, lbl_803D8710, fn_800EE424(arg1), i);
        i++;
        fn_800ECF20((char *)arg0 + 0x10, buf);
    }
    fn_801289C4(arg0);
}

s32 fn_80129388(s32 arg0, s32 arg1) {
    s32 fn_8012A494(s32, s32, s32);
    M2C_UNK fn_8012F7F0(s32);
    extern s32 lbl_8049440C;
    return fn_8012A494(fn_8012F7F0(lbl_8049440C), arg0, arg1) == 0;
}

s32 fn_801293D0(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_8012A39C(s32, s32, s32, s32);
    M2C_UNK fn_8012F7F0(s32);
    extern s32 lbl_8049440C;
    return fn_8012A39C(fn_8012F7F0(lbl_8049440C), arg0, arg1, arg2) == 0;
}

s32 fn_80129420(s32 arg0) {
    s32 fn_8012A01C(s32, s32);
    M2C_UNK fn_8012F7F0(s32);
    extern s32 lbl_8049440C;
    return fn_8012A01C(fn_8012F7F0(lbl_8049440C), arg0) == 0;
}

s32 fn_80129460(s32 arg0) {
    s32 fn_80129C5C(s32, s32);
    M2C_UNK fn_8012F7F0(s32);
    extern s32 lbl_8049440C;
    return fn_80129C5C(fn_8012F7F0(lbl_8049440C), arg0) == 0;
}

s32 fn_801294A0(s32 arg0, s32 arg1) {
    s32 fn_80129C80(s32, s32, s32);
    M2C_UNK fn_8012F7F0(s32);
    return fn_80129C80(fn_8012F7F0(arg0), arg1, arg0) == 0;
}

void fn_801294E4(void) {
    M2C_UNK fn_801296E4();
    M2C_UNK fn_8012F7F0(s32);
    extern s32 lbl_8049440C;
    fn_8012F7F0(lbl_8049440C);
    fn_801296E4();
}

typedef struct NghResEntry {
    s32 a;
    s32 b;
} NghResEntry;

extern NghResEntry lbl_803F66F0[];

s32 fn_8012950C(u32 arg0) {
    void *fn_8012F7F0(s32);
    s32 fn_80129748(void *, u32);
    extern s32 lbl_8049440C;
    return fn_80129748(fn_8012F7F0(lbl_8049440C), arg0);
}

s32 fn_80129544(void) {
    return 0xD6000;
}

s32 fn_80129550(void) {
    return 0x1C;
}

u32 fn_80129558(void) {
    extern u32 lbl_8049445C;
    s32 i;
    u32 max;

    if (lbl_8049445C == (u32)-1) {
        max = 0;
        for (i = 0; lbl_803F66F0[i].a != 0; i++) {
            if (max < (u32)lbl_803F66F0[i].b) {
                max = lbl_803F66F0[i].b;
            }
        }
        lbl_8049445C = max;
    }
    return lbl_8049445C;
}

s32 fn_801295A4(void) {
    s32 i;
    s32 sum;

    sum = 0;
    for (i = 0; lbl_803F66F0[i].a != 0; i++) {
        sum += lbl_803F66F0[i].a;
    }
    return sum;
}

s32 fn_801295D8(s32 *arg0) {
    s32 n;
    s32 r;

    r = lbl_803F66F0[arg0[0]].b;
    n = lbl_803F66F0[arg0[0]].a;
    if ((u32)arg0[1] < (u32)(n - 1)) {
        arg0[1]++;
    } else if (n != 0) {
        arg0[0]++;
        arg0[1] = 0;
    }
    return r;
}

s32 fn_80129630(s32 arg0) {
    s32 fn_801295D8(s32 *);
    s32 sp8;
    s32 var_r30;
    s32 var_r31;

    sp8 = 0;
    M2C_FIELD(&sp8, s32 *, 4) = 0;
    var_r30 = 0;
    var_r31 = arg0;
    if (var_r31 != 0) {
        do {
            var_r30 += 1;
            var_r31 -= fn_801295D8(&sp8);
        } while (var_r31 != 0);
    }
    return var_r30;
}

s32 fn_8012968C(u32 arg0) {
    s32 i;
    u32 sum;

    sum = 0;
    for (i = 0; lbl_803F66F0[i].a != 0; i++) {
        sum += lbl_803F66F0[i].a;
        if (arg0 < sum) {
            return lbl_803F66F0[i].b;
        }
    }
    return 0;
}

s32 fn_801296E4(void *arg0) {
    s32 fn_80129748(void *, u32);
    s32 sum;
    s32 i;
    s32 *p;

    sum = 0;
    i = 0;
    p = (s32 *)((char *)arg0 + 4);
    do {
        if (*p++ != 0) {
            sum += fn_80129748(arg0, i);
        }
        i++;
    } while (i <= 0x1B);
    return sum;
}

s32 fn_80129748(void *arg0, u32 arg1) {
    s32 fn_8012968C(u32);
    s32 **tbl;
    s32 *e;
    s32 r;

    tbl = (s32 **)((char *)arg0 + 4);
    e = tbl[arg1];
    r = 0;
    if (e != NULL) {
        if (arg1 <= 1) {
            r = fn_8012968C(arg1);
        } else {
            r = e[3] + e[1];
        }
    }
    return r;
}

void fn_801298B8(void *arg0) {
    void *fn_802D0C44(void);
    void *fn_802D0AB8(void);
    void fn_802D1A00(void *, void *);
    void **p;
    s32 i;

    p = (void **)((char *)arg0 + 4);
    for (i = 0; i < 0x1C; i++, p++) {
        if (*p != NULL) {
            fn_802D1A00(fn_802D0C44(), *p);
            *p = NULL;
        }
    }
    if (*(void **)arg0 != NULL) {
        fn_802D1A00(fn_802D0AB8(), *(void **)arg0);
    }
    *(s32 *)arg0 = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
}

s32 fn_80129C5C(s32 arg0, s32 arg1) {
    s32 fn_80129C80(s32, s32, s32);
    extern s32 lbl_8049440C;
    return fn_80129C80(arg0, arg1, lbl_8049440C);
}

s32 fn_8012A57C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return (arg0 << 24) | ((u8)arg1 << 16) | ((u8)arg2 << 8) | (u8)arg3;
}

s32 fn_8012A59C(s32 arg0) {
    extern s32 lbl_803F66C8[];
    s32 i;

    for (i = 0; i < 4; i++) {
        if (arg0 == lbl_803F66C8[i]) {
            return i;
        }
    }
    return -1;
}

s32 fn_8012A5D4(s32 arg0) {
    extern s32 lbl_803F66D8[];
    s32 i;

    for (i = 0; i < 6; i++) {
        if (arg0 == lbl_803F66D8[i]) {
            return i;
        }
    }
    return -1;
}

s32 fn_8012A60C(s32 arg0) {
    extern s32 lbl_80494454[2];
    s32 i;

    for (i = 0; i < 2; i++) {
        if (arg0 == lbl_80494454[i]) {
            return i;
        }
    }
    return -1;
}

void fn_8012A63C(void *arg0) {
    void *fn_802D0AB8(void);
    void fn_802D1A00(void *, void *);
    void fn_802D20E8(void *);
    void **p;
    void **next;
    void *res;

    next = arg0;
    while ((p = next) != NULL) {
        next = (void **)*p;
        if (p != NULL) {
            res = p[1];
            if (res != NULL) {
                if (M2C_FIELD(res, s32 *, 8) != 0) {
                    fn_802D1A00(fn_802D0AB8(), M2C_FIELD(res, void **, 4));
                }
                fn_802D1A00(fn_802D0AB8(), res);
            }
            fn_802D20E8(p);
        }
    }
}

s32 fn_8012A6B8(void **arg0, s32 *arg1) {
    s32 size = 0;
    s32 n = 0;
    void **p;

    for (p = arg0; p != NULL; p = (void **)*p) {
        if (p[1] != NULL) {
            size = (size + 3) & ~3;
            size += *(s32 *)p[1];
            n++;
        }
    }
    *arg1 = n;
    return size;
}

s32 fn_8012A8C0(void) {
    M2C_UNK fn_8012AF90();
    fn_8012AF90();
    return 0;
}

s32 fn_8012A8E4(void) {
    return 0;
}

s32 fn_8012A8EC(void) {
    return 0;
}

s32 fn_8012A8F4(void) {
    return 0;
}

s32 fn_8012A8FC(void) {
    return 0;
}

s32 fn_8012A904(void) {
    return 0;
}

void fn_8012A90C(void) {

}

s32 fn_8012A910(void) {
    return 0;
}

void fn_8012A918(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F6A38(s32, s32);
    fn_800F6A38(arg1, arg0 + 0x2C);
}

s32 fn_8012A944(void) {
    return 1;
}

s32 fn_8012A94C(void) {
    return 0;
}

s32 fn_8012A954(void) {
    return 0;
}

s16 fn_8012A95C(void *arg0, s32 arg1) {
    void **fn_8012B080(void *, s32);
    void **p;
    s32 n;

    p = *fn_8012B080(arg0, arg1);
    for (n = 0; p != NULL; p = *p) {
        n++;
    }
    return n;
}

void *fn_8012A9A0(void *arg0, s32 arg1, s32 arg2) {
    void **fn_8012B080(void *, s32);
    void **p;

    p = fn_8012B080(arg0, arg1);
    while ((p = *p) != NULL) {
        if (M2C_FIELD(p, u16 *, 0x8) == arg2) {
            return p[1];
        }
    }
    return NULL;
}

s32 fn_8012A9F4(void) {
    return 0;
}

void *fn_8012A9FC(void *arg0, s32 arg1, s32 arg2) {
    void **fn_8012B080(void *, s32);
    void **p;
    s16 i;

    p = *fn_8012B080(arg0, arg1);
    for (i = 1; p != NULL; p = *p) {
        if (i == arg2) {
            M2C_FIELD(arg0, void ***, 0x174) = p;
            return p[1];
        }
        i++;
    }
    return NULL;
}

void fn_8012AA68(void) {

}

s32 fn_8012AA6C(void) {
    return 0;
}

s32 fn_8012AA74(void) {
    return 0x1C004;
}

void fn_8012AA80(void *arg0, s32 arg1, u16 *arg2) {
    *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x174), u16 *, 0x8);
}

void fn_8012AA90(void) {

}

void fn_8012AA94(void) {

}

s32 fn_8012AA98(void) {
    return 0;
}

void fn_8012AAA0(void) {

}

void fn_8012AAA4(void) {

}

s32 fn_8012AAA8(void) {
    return 1;
}

void fn_8012AAB0(void) {

}

void fn_8012ACA4(void) {

}

void fn_8012ACA8(void) {

}

void fn_8012ACAC(void) {

}

void fn_8012ACB0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (arg1 - 1);
}

void fn_8012ACBC(void *arg0, s32 arg1) {
    struct { u8 pad[0x140]; void **vals[4]; } *self = arg0;
    s32 i;

    for (i = 0; i < 6; i++) {
        fn_8012A63C(self->vals[arg1 - 1][i]);
        self->vals[arg1 - 1][i] = NULL;
    }
}

void fn_8012AD18(void *arg0, s32 arg1) {
    s32 i;

    for (i = 0; i <= 1; i++) {
        if (arg1 != 0 || i != 1) {
            fn_8012A63C(M2C_FIELD(arg0, void ***, 0x170)[i]);
            M2C_FIELD(arg0, void ***, 0x170)[i] = NULL;
        }
    }
    if (arg1 != 0) {
        for (i = 3; i >= 0; i--) {
            M2C_FIELD(arg0, s32 *, 0x188 + i * 4) = 0;
        }
    }
}

void fn_8012ADB4(void *arg0) {
    void fn_8012A63C(void *);
    s32 i;

    for (i = 0; i < 4; i++) {
        fn_8012A63C(M2C_FIELD(arg0, void ***, 0x13C)[i]);
        M2C_FIELD(arg0, void ***, 0x13C)[i] = NULL;
    }
}

void fn_8012AE08(void *arg0) {
    void fn_8012B34C(void *, s32);
    void fn_801298B8(void *);
    void fn_8012DFD8(void *);
    void fn_8012AD18(void *, s32);

    fn_8012B34C(arg0, 0);
    fn_8012B34C(arg0, 1);
    fn_8012B34C(arg0, 2);
    fn_8012B34C(arg0, 3);
    fn_801298B8(M2C_FIELD(arg0, void **, 0x184));
    fn_8012DFD8(arg0);
    fn_8012AD18(arg0, 1);
    fn_8012ADB4(arg0);
}

void **fn_8012B080(void *arg0, s32 arg1) {
    void **ret = NULL;
    s32 i;

    if ((i = fn_8012A59C(arg1)) >= 0) {
        ret = M2C_FIELD(arg0, void ***, 0x13C) + i;
    } else if ((i = fn_8012A5D4(arg1)) >= 0) {
        void ***tbl = (void ***)((char *)arg0 + 0x140);
        ret = tbl[M2C_FIELD(arg0, s32 *, 0x28)] + i;
    } else if ((i = fn_8012A60C(arg1)) >= 0) {
        ret = M2C_FIELD(arg0, void ***, 0x170) + i;
    }
    return ret;
}

s32 fn_8012B114(void *arg0) {
    s32 ret = 0;
    if (++M2C_FIELD(arg0, s16 *, 0x178) == 1) {
        ret = 1;
    }
    ret = 1;
    return ret;
}

s32 fn_8012B134(void *arg0) {
    extern s32 lbl_80494468;
    if (--M2C_FIELD(arg0, s16 *, 0x178) > 0) {
        return 1;
    }
    lbl_80494468 = 0;
    return 1;
}

s32 fn_8012B290(void *arg0, u32 arg1) {
    s32 fn_8012E01C(void *, s32);
    s32 r = 0;
    s32 i;

    switch (arg1) {
    case 0:
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x13C), s32 *, 0x8) == 0) {
            for (i = 0; i < 12; i++) {
            }
            r = 0;
        } else {
            for (i = 0; i < 12; i++) {
            }
            r = 1;
        }
        break;
    case 1:
        r = 1;
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x13C), s32 *, 0x0) == 0) {
            r = 0;
        }
        break;
    case 2:
        r = 1;
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x170), s32 *, 0x4) == 0) {
            r = 0;
        }
        break;
    case 3:
        r = fn_8012E01C(arg0, M2C_FIELD(arg0, s32 *, 0x28) + 1);
        break;
    }
    return r;
}

void fn_8012C388(void *arg0, s32 arg1, s32 arg2) {
    struct { u8 pad[0x188]; s32 vals[4]; } *self = arg0;
    self->vals[arg1 - 1] = arg2;
}

s32 fn_8012C39C(void *arg0, s32 arg1) {
    struct { u8 pad[0x188]; s32 vals[4]; } *self = arg0;
    return self->vals[arg1 - 1];
}

u16 fn_8012C3B0(void *arg0, s32 arg1) {
    s32 *vals = (s32 *)((char *)arg0 + 0x188);
    s32 i;

    for (i = 0; i < 4; i++) {
        if (vals[i] == arg1) {
            return i + 1;
        }
    }
    return 0;
}

s32 fn_8012D438(void *self, char *buf) {
    s32 fn_8012BC60(void *, char *, s32);
    s32 fn_8012C0C0(void *, char *, s32);
    s32 fn_8012C3EC(void *, char *, s32);
    s32 fn_8012D4F4(void *, s32, char *, s32);
    char *p;
    s32 i;

    if (fn_8012BC60(self, buf + 0x6000, 0) != 1) {
        return 0;
    }
    if (fn_8012C0C0(self, buf + 0x8000, 0) != 1) {
        return 0;
    }
    if (fn_8012C3EC(self, buf + 0x12000, 0) != 1) {
        return 0;
    }
    p = buf + 0x14000;
    for (i = 0; i < 12; i++) {
        if (fn_8012D4F4(self, i + 1, p, 0) != 1) {
            return 0;
        }
        p += 0x10000;
    }
    return 1;
}

void fn_8012DF54(void *self, s32 idx) {
    void fn_8012A63C(void *);
    void **tbl;

    idx--;
    tbl = (void **)((char *)self + 0x140);
    fn_8012A63C(M2C_FIELD(idx[tbl], void **, 8));
    M2C_FIELD(idx[tbl], void **, 8) = NULL;
    fn_8012A63C(M2C_FIELD(idx[tbl], void **, 0xC));
    M2C_FIELD(idx[tbl], void **, 0xC) = NULL;
    fn_8012A63C(M2C_FIELD(idx[tbl], void **, 0x10));
    M2C_FIELD(idx[tbl], void **, 0x10) = NULL;
    fn_8012A63C(M2C_FIELD(idx[tbl], void **, 0x14));
    M2C_FIELD(idx[tbl], void **, 0x14) = NULL;
}

void fn_8012DFD8(void *self) {
    s32 i;

    for (i = 0; i < 12; fn_8012DF54(self, i)) {
        i++;
    }
}

s32 fn_8012E01C(void *self, s32 idx) {
    void **tbl = (void **)((char *)self + 0x140);
    s32 ret;

    idx--;
    ret = 1;
    if (M2C_FIELD(tbl[idx], s32 *, 8) == 0) {
        ret = 0;
    }
    return ret;
}

s32 fn_8012E44C(void *self) {
    struct VtEnt { s16 delta; s16 pad; void (*fn)(void *); };
    extern char *lbl_80496660;
    extern s32 lbl_8049446C;
    extern char *lbl_80494FCC;
    void fn_800F6E48(void *, s32, s32);
    s32 fn_8012C674(void *, s32);
    s32 fn_8012CA90(void *, s32);
    struct { u8 pad[0x178]; s16 unk178; } *s = self;
    char *obj;
    struct VtEnt *e;
    s32 ret;

    obj = lbl_80496660;
    e = (struct VtEnt *)(M2C_FIELD(obj, char **, 0x3A4) + 0x130);
    e->fn(obj + e->delta);
    s->unk178 = 0;
    fn_800F6E48((char *)self + 0x2C, lbl_8049446C, 0);
    ret = fn_8012C674(self, 0);
    if (ret == 1) {
        ret = fn_8012CA90(self, 0);
    }
    obj = lbl_80494FCC;
    e = (struct VtEnt *)(M2C_FIELD(obj, char **, 0x20) + 0x28);
    obj += e->delta;
    e->fn(obj);
    return ret;
}

typedef struct NghResPath {
    s32 unk0;
    s32 unk4;
    char buf[0x104];
} NghResPath;

static inline NghResPath *NghResPath_Init(NghResPath *p) {
    void fn_800F687C(void *, char *, s32);
    fn_800F687C(p, p->buf, 0x104);
    return p;
}

void fn_8012F71C(void *arg0, char *arg1, NghResPath *arg2);

s32 fn_8012E4F0(void *arg0, char *arg1) {
    void fn_800F687C(void *, char *, s32);
    char *fn_800F69E8(void *);
    void *fn_802D7F48(char *, char *);
    void fn_8012D2B4(void *, void **, s32 *);
    void fn_802D8004(void *, s32, s32, void *);
    void *fn_802D0C44(void);
    void fn_802D1A00(void *, void *);
    void fn_802D7F94(void *);
    extern char lbl_803D87EC[];
    NghResPath path;
    void *data;
    s32 size;
    void *f;
    NghResPath *p = &path;

    fn_800F687C(p, (char *)p + 8, 0x104);
    fn_8012F71C(arg0, arg1, p);
    f = fn_802D7F48(fn_800F69E8(p), lbl_803D87EC);
    if (f != NULL) {
        fn_8012D2B4(arg0, &data, &size);
        fn_802D8004(data, size, 1, f);
        fn_802D1A00(fn_802D0C44(), data);
        fn_802D7F94(f);
        return 0;
    }
    return -0x2A;
}

void fn_8012F71C(void *arg0, char *arg1, NghResPath *arg2) {
    void fn_800F687C(void *, char *, s32);
    void fn_800F68F0(void *, char *, s32);
    void fn_800F6A38(void *, void *);
    extern char *lbl_80494DF0;
    NghResPath path;
    NghResPath *p;
    char *obj;
    char *vt;
    char *dir;

    p = &path;
    obj = lbl_80494DF0;
    vt = M2C_FIELD(obj, char **, 0x338);
    dir = (*(char *(**)(void *))(vt + 0x24))(obj + *(s16 *)(vt + 0x20));
    fn_800F687C(p, p->buf, 0x104);
    fn_800F68F0(p, dir, -1);
    fn_800F6A38(arg2, p);
    fn_800F68F0(arg2, arg1, -1);
}

s32 fn_8012F7A8(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F68E0(s32);
    M2C_UNK fn_800F68F0(s32, s32, M2C_UNK);
    s32 temp_r30;

    temp_r30 = arg0 + 0x2C;
    fn_800F68E0(temp_r30);
    fn_800F68F0(temp_r30, arg1, -1);
    return 1;
}

void *fn_8012F7F0(void *arg0) {
    void fn_801297A4(void *);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x184), s32 *, 0x7C) == 0) {
        fn_801297A4(M2C_FIELD(arg0, void **, 0x184));
    }
    return M2C_FIELD(arg0, void **, 0x184);
}

void fn_8012F7F0_dummy(void);
void fn_8012F830(void *arg0, u8 *p) {
    u8 t = p[1];
    p[1] = p[0];
    p[0] = t;
}

void fn_8012F844(void *arg0, u8 *p) {
    u8 t;
    t = p[3];
    p[3] = p[0];
    p[0] = t;
    t = p[2];
    p[2] = p[1];
    p[1] = t;
}

void fn_8012F868(void *arg0, void *arg1) {
    void fn_8012FAD0(void *, void *, void *);
    struct {
        s32 a;
        s32 b;
        s32 c;
        s32 d;
    } s, *ps;
    ps = &s;
    s.a = 0;
    ps->b = 0;
    ps->c = 0;
    ps->d = 0;
    fn_8012FAD0(arg0, arg1, ps);
}

typedef struct NghResHandler {
    s32 id;
    void (*a)(void *, void *);
    void (*b)(void *, void *);
    void (*c)(void *, void *);
} NghResHandler;

s32 fn_8012FAD0(void *self, s32 id, void *out) {
    NghResHandler *p;
    s32 found = 0;
    for (p = M2C_FIELD(self, NghResHandler **, 0x14); p < M2C_FIELD(self, NghResHandler **, 0x18); p++) {
        if (p->id == id) {
            found = 1;
            *(NghResHandler *)out = *p;
            break;
        }
    }
    return found;
}

void fn_8012FB50(void *self, s32 id, void *a, void *b) {
    NghResHandler s, *ps;
    ps = &s;
    s.id = 0;
    ps->a = 0;
    ps->b = 0;
    ps->c = 0;
    if (fn_8012FAD0(self, id, ps) && s.a) {
        s.a(a, b);
    }
}

void fn_8012FBC0(void *self, s32 id, void *a, void *b) {
    NghResHandler s, *ps;
    ps = &s;
    s.id = 0;
    ps->a = 0;
    ps->b = 0;
    ps->c = 0;
    if (fn_8012FAD0(self, id, ps) && s.c) {
        s.c(a, b);
    }
}

void fn_8012FC30(void *self, s32 id, void *a, void *b) {
    NghResHandler s, *ps;
    ps = &s;
    s.id = 0;
    ps->a = 0;
    ps->b = 0;
    ps->c = 0;
    if (fn_8012FAD0(self, id, ps) && s.b) {
        s.b(a, b);
    }
}

void fn_8012FE00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x180) = arg1;
}

s32 fn_8012FE08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x180);
}

void fn_8012FE10(void) {
    extern s32 lbl_80494464;
    extern s32 lbl_80494468;
    lbl_80494468 = 0;
    lbl_80494464 = 0;
}

void fn_80130178(s32 arg0, s32 arg1) {
    extern s32 lbl_80494460;
    extern s32 lbl_80495BAC;
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        lbl_80495BAC = lbl_80494460;
    }
}

s32 fn_8013019C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28) + 1;
}

s32 fn_801301A8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

void fn_801301B0(void) {
    fn_80130178(1, 0xFFFF);
}

