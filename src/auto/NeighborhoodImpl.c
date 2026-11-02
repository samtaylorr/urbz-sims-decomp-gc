/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80123160(void) {
    M2C_UNK fn_801234B4();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x1D8);
    fn_801234B4();
}

void fn_80123188(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

M2C_UNK *fn_801231C8(void) {
    extern M2C_UNK lbl_80495B74;
    return &lbl_80495B74;
}

void fn_801236E8(void) {

}

void fn_8012373C(s32 arg0) {
    M2C_UNK fn_800F6A38(s32);
    fn_800F6A38(arg0 + 4);
}

void fn_801245D0(s32 arg0) {
    M2C_UNK fn_800F5974(s32);
    fn_800F5974(arg0 + 4);
}

void fn_80124758(char *self, s32 arg1, void *arg2) {
    void fn_800F687C(void *, char *, s32);
    char *fn_800F69F0(void *);
    char *fn_800F69E8(void *);
    void fn_800F6A38(void *, void *);
    void fn_80245BB4(char *, const char *, ...);
    extern char lbl_803D8640[];
    typedef struct { s32 a; s32 b; char buf[0x104]; } Path;
    Path p1;
    Path p2;
    Path *a = &p1;
    Path *b = &p2;
    char *vt;
    char *s;

    fn_800F687C(a, a->buf, 0x104);
    fn_800F687C(&p2, p2.buf, 0x104);
    vt = *(char **)self;
    M2C_FIELD(vt, void (**)(void *, void *), 0x3C)(self + M2C_FIELD(vt, s16 *, 0x38), b);
    s = fn_800F69F0(a);
    fn_80245BB4(s, lbl_803D8640, fn_800F69E8(b), arg1);
    fn_800F6A38(arg2, a);
}

s32 fn_80124808(void) {
    return 0;
}

s32 fn_80124810(void *self, s32 idx) {
    if (idx <= 0 || (u32)idx > (u32)(M2C_FIELD(self, s32 **, 0x1B4) - M2C_FIELD(self, s32 **, 0x1B0))) {
        return 0;
    }
    return M2C_FIELD(self, s32 **, 0x1B0)[(u32)idx - 1];
}

void *fn_80124848(void *self, s32 id) {
    s32 fn_8012242C(void *);
    typedef struct { void **begin; void **end; } V;
    void *found;
    V *v;
    void **it;

    if (id == 0) {
        return NULL;
    }
    v = (V *)((char *)self + 0x1B0);
    found = NULL;
    for (it = v->begin; it != v->end; it++) {
        if (*it != NULL && fn_8012242C(*it) == id && found == NULL) {
            found = *it;
        }
    }
    return found;
}

void *fn_801248D0(void *self, s32 id) {
    typedef struct { void **begin; void **end; } V;
    V *v = (V *)((char *)self + 0x1B0);
    void **it;
    void *found = NULL;

    for (it = v->begin; it != v->end; it++) {
        if (*it != NULL && M2C_FIELD(*it, s32 *, 0xC) == id && found == NULL) {
            found = *it;
        }
    }
    return found;
}

s32 fn_80125014(void *arg0) {
    void *vt;
    void *p;

    vt = *(void **)arg0;
    p = M2C_FIELD(vt, void *(**)(void *), 0xDC)((char *)arg0 + M2C_FIELD(vt, s16 *, 0xD8));
    if (p != NULL) {
        return M2C_FIELD(p, s32 *, 0xC);
    }
    return 0;
}

s16 fn_8012505C(void *self, s16 arg1) {
    while ((u32)arg1 < (u32)(M2C_FIELD(self, s32 **, 0x1B4) - M2C_FIELD(self, s32 **, 0x1B0))) {
        arg1++;
        if (M2C_FIELD(self, s32 **, 0x1B0)[(u16)arg1 - 1] != 0) {
            return arg1;
        }
    }
    return 0;
}

s32 fn_80125674(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x1C4) - M2C_FIELD(arg0, s32 *, 0x1C0)) >> 2;
}

s32 fn_80125688(s32 **arg0, s32 arg1) {
    return arg0[0x70][arg1];
}

s32 fn_80125698(char *self, s32 arg1) {
    typedef struct { s32 *begin; s32 *end; } V;
    u32 i;

    for (i = 0; i < (u32)(((V *)(self + 0x1C0))->end - M2C_FIELD(self, s32 **, 0x1C0)); i++) {
        char *vt = *(char **)self;
        s32 (*f)(void *, s32) = M2C_FIELD(vt, s32 (**)(void *, s32), 0x134);
        if (f(self + M2C_FIELD(vt, s16 *, 0x130), i) == arg1) {
            return i;
        }
    }
    return -1;
}

s32 fn_80125D6C(void *arg0, void **arg1) {
    extern u8 *lbl_8049665C;
    void *fn_80124920(void *, void *);
    void *obj;
    void *r;

    obj = (*(void *(**)(u8 *))(*(u8 **)lbl_8049665C + 0xCC))(lbl_8049665C + *(s16 *)(*(u8 **)lbl_8049665C + 0xC8));
    r = fn_80124920(arg0, obj);
    if (r == NULL) {
        return -1;
    }
    *arg1 = r;
    return 0;
}

s32 fn_80125F28(void *arg0) {
    s32 fn_801224F0(void *);
    void **p;
    void *range;
    s32 count;

    range = (char *)arg0 + 0x1B0;
    p = M2C_FIELD(arg0, void ***, 0x1B0);
    count = 0;
    if (p != M2C_FIELD(range, void ***, 4)) {
        do {
            if (*p != NULL && fn_801224F0(*p) != 0) {
                count++;
            }
            p++;
        } while (p != M2C_FIELD(range, void ***, 4));
    }
    return count;
}

s32 fn_80125F98(void *arg0, void *arg1) {
    void fn_80126924(void *, void *);

    if (M2C_FIELD(arg1, s32 *, 0x20) != 0) {
        fn_80126924(arg0, arg1);
    }
    return M2C_FIELD(arg1, s32 *, 0x1C);
}

s32 fn_80126110(void *arg0, void *arg1, s32 arg2) {
    if ((u32)(arg2 - 1) > 11) {
        return -1;
    }
    {
        char *p = arg0;
        char *vt = *(char **)p;
        s32 (*f)(void *, s32) = M2C_FIELD(vt, s32 (**)(void *, s32), 0x144);
        if (f(p + M2C_FIELD(vt, s16 *, 0x140), arg2) != 0) {
            return -1;
        }
    }
    {
        char *p = arg1;
        char *vt = *(char **)p;
        void (*f)(void *, s32) = M2C_FIELD(vt, void (**)(void *, s32), 0xA4);
        f(p + M2C_FIELD(vt, s16 *, 0xA0), arg2);
    }
    return 0;
}

s32 fn_80127CA0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}

void fn_80127CA8(void) {

}

void fn_80127CAC(void *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    extern s32 lbl_80434BF0[];
    if ((u32)(arg1 - 1) > 8) {
        *arg3 = 0;
        *arg2 = 0;
        return;
    }
    *arg2 = lbl_80434BF0[arg1 * 2];
    *arg3 = lbl_80434BF0[arg1 * 2 + 1];
}

void fn_80127ED8(void) {
    extern char *lbl_80496668;
    extern char lbl_803D86B4[];
    char *g = lbl_80496668;
    char *r;
    char *vt;
    {
        vt = *(char **)g;
        r = (*(char *(**)(void *))(vt + 0x1D4))(g + *(s16 *)(vt + 0x1D0));
    }
    if (r != NULL) {
        char *gvt;
        char *obj;
        void *x;
        vt = *(char **)(r + 4);
        (*(void (**)(void *, char *))(vt + 0xC4))(r + *(s16 *)(vt + 0xC0), lbl_803D86B4);
        vt = *(char **)(r + 4);
        gvt = *(char **)g + 0x58;
        obj = g + *(s16 *)gvt;
        x = (*(void *(**)(void *))(vt + 0x2EC))(r + *(s16 *)(vt + 0x2E8));
        (*(void (**)(void *, void *))(gvt + 4))(obj, x);
    }
}

void fn_80127F7C(void) {

}

void fn_80128074(char *self) {
    void fn_800F687C(void *, void *, s32);
    void fn_800F68F0(void *, char *, s32);
    extern char lbl_803D86C4[];
    char *vt;
    struct {
        s32 unk0;
        s32 unk4;
        char buf[0x104];
    } str;
    fn_800F687C(&str, str.buf, 0x104);
    fn_800F68F0(&str, lbl_803D86C4, -1);
    vt = *(char **)self;
    (*(void (**)(void *, void *))(vt + 0x2C))(self + *(s16 *)(vt + 0x28), &str);
}

s32 fn_801280E4(char *self) {
    char *vt;
    char *a;
    s32 *b;
    vt = *(char **)self;
    a = (*(char *(**)(void *))(vt + 0x13C))(self + *(s16 *)(vt + 0x138));
    vt = *(char **)a;
    b = (*(s32 *(**)(void *, s32))(vt + 0x34))(a + *(s16 *)(vt + 0x30), 0);
    if (b == NULL) {
        return 0;
    }
    vt = *(char **)self;
    return (*(s32 (**)(void *, s32))(vt + 0xE4))(self + *(s16 *)(vt + 0xE0), *b);
}

s32 fn_80128308(s32 arg0) {
    s32 count = 0;
    s32 i;

    for (i = 0; i < 16; i++) {
        if ((arg0 >> i) & 1) {
            count++;
        }
    }
    return count;
}

extern s32 lbl_80495B9C;
s32 fn_80128338(void) {
    return lbl_80495B9C;
}

extern s32 lbl_80495BA0;
s32 fn_80128340(void) {
    return lbl_80495BA0;
}

extern s32 lbl_80495BA4;
s32 fn_80128348(void) {
    return lbl_80495BA4;
}

extern char lbl_8041F94C[];
s32 fn_80049BD4(char *);
s32 fn_80128350(char *self) {
    extern char lbl_8041F94C[];
    s32 fn_80049BD4(char *);
    s32 count = 0;
    char *e = *(char **)self + 0x138;
    char *obj;
    s32 i;

    obj = (*(char *(**)(void *, s32))(e + 4))(self + *(s16 *)e, fn_80049BD4(lbl_8041F94C));
    for (i = 16; i <= 28; i++) {
        char *vt = *(char **)obj;
        char *obj2;
        s32 r;
        obj2 = M2C_FIELD(vt, char *(**)(void *), 0x12C)(obj + M2C_FIELD(vt, s16 *, 0x128));
        {
            char *vt2 = *(char **)obj2;
            s32 (*f)(void *, s32) = M2C_FIELD(vt2, s32 (**)(void *, s32), 0xC);
            r = f(obj2 + M2C_FIELD(vt2, s16 *, 0x8), i);
        }
        if (r != 0) {
            count += fn_80128308(r);
        }
    }
    return count;
}

void fn_801285D0(s32 arg0) {
    M2C_UNK fn_800F7138(s32);
    fn_800F7138(arg0 + 0x110);
}

s16 fn_801285F4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x168);
}

void fn_801285FC(char *self, void *arg1) {
    void fn_800F6A38(void *, void *);
    fn_800F6A38(arg1, self + 4);
}

s32 fn_80128628(void *self, s32 i) {
    return ((struct { u8 pad[0x168]; s16 a[1]; } *)self)->a[i];
}

void *fn_80128638(void *arg0, s32 i) {
    return (u8 *)arg0 + (i * 2 + 0x168);
}

void fn_80128648(void *self, s32 i, s16 v) {
    ((struct { u8 pad[0x168]; s16 a[1]; } *)self)->a[i] = v;
}

s32 fn_80128658(char *self) {
    char *vt = *(char **)self;
    return M2C_FIELD(vt, s32 (**)(void *, s32), 0x9C)(self + M2C_FIELD(vt, s16 *, 0x98), 0x23) != 0;
}

s32 fn_801286A0(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x15C) - M2C_FIELD(arg0, s32 *, 0x158)) >> 2;
}

s32 fn_801286B4(void *arg0, s32 arg1) {
    return *(s32 *)(M2C_FIELD(arg0, char **, 0x158) + (arg1 << 2));
}

s16 fn_801286C4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x16A);
}

s32 fn_801286CC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x16E) == 0;
}

void fn_801286DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x16E) = (s16) (arg1 ^ 1);
}

void fn_801286E8(void) {

}

void fn_801286EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1D4) = arg1;
}

s32 fn_801286F4(s32 arg0) {
    return (u32)(arg0 - 10) <= 2;
}

void *fn_80128708(void *arg0) {
    void fn_80149BC8(void *, s32);
    extern char lbl_8040FD38[];
    fn_80149BC8(arg0, 4);
    *(void **)arg0 = lbl_8040FD38;
    return arg0;
}

void fn_80128748(void) {
    void fn_80128408(s32, s32);
    fn_80128408(1, 0xFFFF);
}

void fn_80128774(void) {
    void fn_80128408(s32, s32);
    fn_80128408(0, 0xFFFF);
}

