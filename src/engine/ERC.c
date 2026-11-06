/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct ERCVec3 {
    f32 x, y, z;
} ERCVec3;

void fn_802F7054(u8 *self, s32 flags) {
    extern void fn_8031EA2C(void *);
    extern void *fn_802D0AB8(void);
    extern void fn_802D1A00(void *, void *);
    extern void fn_802D20E8(void *);
    if (*(void **)(self + 0x44) != NULL) {
        fn_8031EA2C(*(void **)(self + 0x44));
        *(void **)(self + 0x44) = NULL;
    }
    fn_802D1A00(fn_802D0AB8(), *(void **)(self + 0x34));
    {
        void *p = *(void **)(self + 0x40);
        fn_802D1A00(fn_802D0AB8(), p);
    }
    {
        void *q = *(void **)(self + 0x3C);
        fn_802D1A00(fn_802D0AB8(), q);
    }
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802F70D4(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x38) = arg1;
}

f32 *fn_802F70DC(f32 *out, u8 *obj, s32 idx) {
    f32 *p = (f32 *)(obj + idx * 12) + 1;
    out[0] = p[0];
    out[1] = p[1];
    out[2] = p[2];
    return out;
}

void fn_802F7104(u8 *self, s32 idx, void *src) {
    struct ERCVec12 { s32 a, b, c; };
    ((struct ERCVec12 *)(self + 4))[idx] = *(struct ERCVec12 *)src;
}

void fn_802F7128(u8 *self, void *name) {
    extern void fn_8031EA2C(void *);
    extern void *fn_8033740C(void *, void *, s32, s32);
    extern u8 lbl_8045BA40[];
    if (*(void **)(self + 0x44) != NULL) {
        fn_8031EA2C(*(void **)(self + 0x44));
        *(void **)(self + 0x44) = NULL;
    }
    *(void **)(self + 0x44) = fn_8033740C(lbl_8045BA40, name, 0, 0);
}

void fn_802F7188(f32 *arg0, f32 farg0) {
    *arg0 = farg0;
}

void fn_802F79A8(void *arg0, s32 arg1) {
    M2C_UNK fn_802E2108(s32, s32);
    fn_802E2108(arg1, M2C_FIELD(arg0, s32 *, 0x3C));
}

s32 *fn_802FB578(s32 *self) {
    extern char lbl_8041A7C0[];
    s32 i;
    self[7] = 0;
    self[0x68 / 4] = (s32)lbl_8041A7C0;
    for (i = 3; i >= 0; i--) {
        self[8 + i] = 0xFF;
    }
    self[0x54 / 4] = 0;
    self[0x30 / 4] = 0;
    self[0x34 / 4] = 0;
    self[0x38 / 4] = 0;
    self[0x3C / 4] = 0;
    self[0x50 / 4] = 0;
    return self;
}

void fn_802FB5D0(s32 *self, s32 flags) {
    extern char lbl_8041A7C0[];
    extern void fn_802D20E8(void *);
    self[0x68 / 4] = (s32)lbl_8041A7C0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802FB604(s32 *self, s32 arg1) {
    extern char *lbl_80495050;
    extern s32 fn_802EDEA8(char *);
    void *fn_802FEAB4(s32 *, s32, s32);
    s32 p;
    self[3] = arg1;
    self[0] = fn_802EDEA8(lbl_80495050);
    p = (s32)fn_802FEAB4(self, 0x1000, 0x20);
    self[7]++;
    ((s32 *)self[0])[0x10] = p;
    self[0x10] = -1;
    self[1] = 0x200;
    self[2] = p;
    self[6] = 0;
    self[5] = 0;
    self[4] = 0;
}

void fn_802FB688(char *self, s32 arg1) {
    s32 old = M2C_FIELD(self, s32 *, 0x18);
    char *vt;
    M2C_FIELD(self, s32 *, 0x18) = arg1;
    if (old == 1 && arg1 != 1) {
        vt = M2C_FIELD(self, char **, 0x68);
        M2C_FIELD(vt, void (**)(void *), 0x2C4)(self + M2C_FIELD(vt, s16 *, 0x2C0));
    }
    if (arg1 == 2 && old != 2) {
        vt = M2C_FIELD(self, char **, 0x68);
        M2C_FIELD(vt, void (**)(void *), 0x2BC)(self + M2C_FIELD(vt, s16 *, 0x2B8));
    }
}

void fn_802FB8A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s8 *, 0) = 7;
}

void fn_802FB8B0(char *self, void *src, s32 count) {
    void *fn_802FEB4C(s32 *, void *, s32);
    char *vt;
    char *p;
    void *data;

    if (count == 0) {
        return;
    }
    data = fn_802FEB4C((s32 *)self, src, count * 0x50);
    vt = *(char **)(self + 0x68);
    (*(void (**)(char *, s32, s32))(vt + 0x2AC))(self + *(s16 *)(vt + 0x2A8), 2, 1);
    (*(s32 **)self)[0x4C / 4] += count;
    vt = *(char **)(self + 0x68);
    p = (*(char *(**)(char *, s32))(vt + 0x2A4))(self + *(s16 *)(vt + 0x2A0), 1);
    *(s8 *)p = 0;
    *(s16 *)(p + 2) = count;
    *(void **)(p + 4) = data;
    vt = *(char **)(self + 0x68);
    (*(void (**)(char *))(vt + 0x2B4))(self + *(s16 *)(vt + 0x2B0));
}

void fn_802FBAA0(s32 *self) {
    char *vt = (char *)self[0x68 / 4];
    (*(void (**)(void *))(vt + 0x24))((char *)self + *(s16 *)(vt + 0x20));
}

void fn_802FBC20(char *self) {
    void (*fn)(char *);
    char *vt = *(char **)(self + 0x68);
    s16 off = *(s16 *)(vt + 0x30);
    fn = *(void (**)(char *))(vt + 0x34);
    fn(self + off);
}

void fn_802FBC54(void) {

}

void fn_802FBC58(void) {

}

void fn_802FBC5C(void) {

}

void fn_802FBC60(char *self, void *src, s32 count) {
    void *fn_802FEB4C(s32 *, void *, s32);
    char *vt;
    char *p;
    void *data = src;

    if (count == 0) {
        return;
    }
    data = fn_802FEB4C((s32 *)self, src, count * 0x50);
    vt = *(char **)(self + 0x68);
    (*(void (**)(char *, s32, s32))(vt + 0x2AC))(self + *(s16 *)(vt + 0x2A8), 2, 5);
    (*(s32 **)self)[0x4C / 4] += count;
    vt = *(char **)(self + 0x68);
    p = (*(char *(**)(char *, s32))(vt + 0x2A4))(self + *(s16 *)(vt + 0x2A0), 1);
    *(s8 *)p = 0x1A;
    *(s16 *)(p + 2) = count;
    *(void **)(p + 4) = data;
    vt = *(char **)(self + 0x68);
    (*(void (**)(char *))(vt + 0x2B4))(self + *(s16 *)(vt + 0x2B0));
}

void fn_802FBDC8(void) {

}

void fn_802FC0D8(void) {

}

s32 fn_802FC0DC(void) {
    return 0;
}

void fn_802FC0E4(void) {

}

void fn_802FC3A4(s32 *self, s32 arg1) {
    void fn_802CB69C(s32, s32);
    fn_802CB69C(*self + 0x34, arg1);
    fn_802CB69C(*self + 0x28, 0);
}

void fn_802FC904(u8 *self, s32 idx, s32 val) {
    char *vt;
    u8 *arr;
    if ((u32)val <= 0xF7 && val > *(s32 *)(self + 0x40)) {
        *(s32 *)(self + 0x40) = val;
    }
    vt = *(char **)(self + 0x68);
    (*(void (**)(void *, s32, s32))(vt + 0x2AC))(self + *(s16 *)(vt + 0x2A8), 1, 0);
    arr = self + 0x20;
    *(s32 *)(arr + idx * 4) = val;
    *(s32 *)(self + 0x30) = 1;
}

void fn_802FC980(u8 *self, s32 unused, s32 n) {
    char *vt;
    s32 i;
    s32 last;
    vt = *(char **)(self + 0x68);
    (*(void (**)(void *))(vt + 0xD4))(self + *(s16 *)(vt + 0xD0));
    for (i = 0; i < n; i++) {
        ((s32 *)(self + 0x20))[i] = i;
    }
    last = n - 1;
    if (last > *(s32 *)(self + 0x40)) {
        *(s32 *)(self + 0x40) = last;
    }
    *(s32 *)(self + 0x30) = 1;
}

void fn_802FCA04(char *self) {
    char *vt = *(char **)(self + 0x68);
    (*(void (**)(char *, s32, s32))(vt + 0xDC))(self + *(s16 *)(vt + 0xD8), 0, 0xFE);
}

void fn_802FCB50(u8 *self, void *src) {
    void *fn_802FEB4C(s32 *arg0, void *src, s32 size);
    char *vt;
    void *data;
    u8 *p;
    data = fn_802FEB4C((s32 *)self, src, 0x40);
    vt = *(char **)(self + 0x68);
    (*(void (**)(void *, s32, s32))(vt + 0x2AC))(self + *(s16 *)(vt + 0x2A8), 0, 0);
    vt = *(char **)(self + 0x68);
    p = (*(u8 *(**)(void *, s32))(vt + 0x2A4))(self + *(s16 *)(vt + 0x2A0), 1);
    *(void **)(p + 4) = data;
    *p = 0xD;
    vt = *(char **)(self + 0x68);
    (*(void (**)(void *))(vt + 0x2B4))(self + *(s16 *)(vt + 0x2B0));
}

void fn_802FD370(void) {

}

void fn_802FDEB0(void) {

}

void fn_802FDEB4(void) {

}

void fn_802FDF7C(void) {

}

void fn_802FDF80(void) {

}

void fn_802FE29C(void) {

}

void fn_802FE734(void) {

}

void fn_802FE7C4(char *self, f32 value) {
    char *vt;
    char *p;

    vt = *(char **)(self + 0x68);
    (*(void (**)(char *, s32, s32))(vt + 0x2AC))(self + *(s16 *)(vt + 0x2A8), 0, 0);
    vt = *(char **)(self + 0x68);
    p = (*(char *(**)(char *, s32))(vt + 0x2A4))(self + *(s16 *)(vt + 0x2A0), 1);
    *(f32 *)(p + 4) = value;
    *(s8 *)p = 0x3F;
    vt = *(char **)(self + 0x68);
    (*(void (**)(char *))(vt + 0x2B4))(self + *(s16 *)(vt + 0x2B0));
}

void fn_802FE858(void) {

}

void fn_802FE85C(void) {

}

void *fn_802FEAB4(s32 *arg0, s32 size, s32 align) {
    void *fn_8036375C(s32, s32, s32);
    return fn_8036375C(*arg0, size, align);
}

void fn_802FEAD8(s32 *arg0) {
    M2C_UNK fn_802CB634(s32);
    fn_802CB634(*arg0);
}

void fn_802FEAFC(s32 *arg0) {
    void fn_8036375C(s32);
    fn_8036375C(*arg0 + 0x14);
}

void fn_802FEB24(s32 *arg0) {
    void fn_802CB634(s32);
    fn_802CB634(*arg0 + 0x14);
}

void *fn_802FEB4C(s32 *arg0, void *src, s32 size) {
    void fn_802482F8(void *, void *, s32);
    void *p;

    if (src == NULL) {
        return NULL;
    }
    p = fn_802FEAB4(arg0, size, 0x20);
    fn_802482F8(p, src, size);
    return p;
}

void fn_802FEBA8(void) {
    extern char *lbl_80495050;
    char *obj = lbl_80495050;
    char *vt = *(char **)obj;
    M2C_FIELD(vt, void (**)(void *), 0x18C)(obj + M2C_FIELD(vt, s16 *, 0x188));
}

void fn_802FEBE0(s32 arg0, s32 arg1) {
    extern f32 lbl_803F1580[];
    extern f32 lbl_80454A00[];

    if (arg1 == 0xFFFF && arg0 != 0) {
        f32 *b;
        f32 *q;
        lbl_80454A00[0] = lbl_803F1580[0];
        lbl_80454A00[2] = lbl_803F1580[0];
        lbl_80454A00[1] = lbl_803F1580[0];
        b = &lbl_80454A00[3];
        b[2] = lbl_803F1580[0];
        b[0] = lbl_803F1580[0];
        b[1] = lbl_803F1580[0];
        lbl_80454A00[6] = lbl_803F1580[0];
        lbl_80454A00[7] = lbl_803F1580[0];
        lbl_80454A00[8] = lbl_803F1580[0];
        M2C_FIELD(lbl_80454A00, s32 *, 0x24) = 0;
        q = &lbl_80454A00[10];
        q[3] = lbl_803F1580[0];
        q[2] = lbl_803F1580[0];
        q[1] = lbl_803F1580[0];
        q[0] = lbl_803F1580[0];
    }
}

void fn_802FEC50(char *self, s32 arg1) {
    char *vt = *(char **)(self + 0x68);
    (*(void (**)(char *, s32, s32))(vt + 0xE4))(self + *(s16 *)(vt + 0xE0), arg1, 1);
}

void fn_802FEC88(s32 *arg0) {
    M2C_UNK fn_8036B980(s32);
    fn_8036B980(*arg0);
}

f32 *fn_802FECAC(f32 *out, u8 *obj) {
    f32 *p = (f32 *)(obj + 0x58);
    out[0] = p[0];
    out[1] = p[1];
    out[2] = p[2];
    out[3] = p[3];
    return out;
}

s32 fn_802FECD8(void) {
    return 0;
}

void fn_802FECE0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    M2C_FIELD(arg0, s32 *, 0x54) = arg2;
}

void fn_802FECEC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
}

void fn_802FECF8(void) {
    void fn_802FEBE0(s32, s32);
    fn_802FEBE0(1, 0xFFFF);
}

void fn_802FED24(void) {
    void fn_802FEBE0(s32, s32);
    fn_802FEBE0(0, 0xFFFF);
}

