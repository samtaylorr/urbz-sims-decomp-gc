/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } Vec3f;
typedef struct { f32 x, y; } Vec2f;

static inline void Vec3f_Set(Vec3f *v, f32 x, f32 y, f32 z) {
    v->z = z;
    v->y = y;
    v->x = x;
}

static inline Vec3f *Vec3f_Splat(Vec3f *v, f32 s) {
    v->z = s;
    v->y = s;
    v->x = s;
    return v;
}

typedef struct { Vec3f min; Vec3f max; } EGBox;

static inline void EGBox_Init(EGBox *b, f32 c) {
    Vec3f t = { c, c, c };
    b->max = t;
    b->min = b->max;
}

void fn_802D2FD0(void);
extern s32 lbl_804961C4;
extern void fn_802EFBA8(void *);
extern u8 lbl_80419C98[];
extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
void *fn_802EF354(void);
void fn_802EF398(void *self);
void fn_802EF3D0(void *self);
extern u8 lbl_803F0CD8[];
extern u8 lbl_80493740[];
extern u8 lbl_80493718[];
extern const f32 lbl_803F0C8C[];
typedef struct { f32 x, y, z; } EGraphicsVec3;
extern const f32 lbl_803F0CA0[];
extern const f32 lbl_803F0CB0[];
void fn_802ED8B4(void **self, s32 flags) {
    void fn_802D20E8(void *);
    void fn_803B9594(void *);
    extern u8 lbl_80419328[];
    *self = lbl_80419328;
    fn_803B9594(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802ED900(void) {

}

s32 fn_802ED904(char *self) {
    extern const f32 lbl_803F0BEC;
    extern char *lbl_80495220;
    Vec3f v;
    char *vt = *(char **)self;
    char *obj;
    *(s32 *)(self + 8) = 1;
    v.x = lbl_803F0BEC;
    v.z = lbl_803F0BEC;
    v.y = lbl_803F0BEC;
    (*(void (**)(void *, Vec3f *, s32, s32))(vt + 0x4C))(self + *(s16 *)(vt + 0x48), &v, 0xFF, 1);
    vt = *(char **)self;
    (*(void (**)(void *))(vt + 0x214))(self + *(s16 *)(vt + 0x210));
    obj = lbl_80495220;
    vt = *(char **)(obj + 0x338);
    return (*(s32 (**)(void *))(vt + 0x1C))(obj + *(s16 *)(vt + 0x18)) != 0;
}

void fn_802ED9B4(char *self) {
    char *vt = *(char **)self;
    char *obj;
    s32 i;
    obj = (*(char *(**)(void *, s32))(vt + 0x6C))(self + *(s16 *)(vt + 0x68), 0);
    for (i = 0; i < 2; i++) {
        vt = *(char **)(obj + 0x68);
        (*(void (**)(void *, s32, s32))(vt + 0x11C))(obj + *(s16 *)(vt + 0x118), 0, i);
    }
    vt = *(char **)self;
    (*(void (**)(void *, void *))(vt + 0x74))(self + *(s16 *)(vt + 0x70), obj);
}

void fn_802EDA48(char *self) {
    extern s32 lbl_80494DF8;
    extern s32 lbl_80494EC0;
    extern char *lbl_80495220;
    char *obj = lbl_80495220;
    char *vt = *(char **)(obj + 0x338);
    (*(void (**)(void *, s32))(vt + 0x24))(obj + *(s16 *)(vt + 0x20), lbl_80494DF8);
    lbl_80494EC0 = 0;
    *(s32 *)(self + 4) = 1;
}

void fn_802EDAA0(char *self) {
    typedef struct { s16 delta; s16 pad; void *pfn; } Ent;
    extern s32 lbl_80494FDC;
    extern s32 lbl_80494DF8;
    extern char *lbl_80495220;
    void fn_802E1378(s32);
    s32 fn_802E0FB4(s32);
    Ent *vt = *(Ent **)self;
    Ent *e;
    char *obj;
    s32 t;
    ((void (*)(void *))vt[44].pfn)(self + vt[44].delta);
    t = lbl_80494FDC;
    *(s32 *)(self + 4) = 0;
    fn_802E1378(t);
    obj = lbl_80495220;
    e = &(*(Ent **)(obj + 0x338))[6];
    ((void (*)(void *, s32, s32))e->pfn)(obj + e->delta, lbl_80494DF8, fn_802E0FB4(lbl_80494FDC));
}

void fn_802EDB28(void) {

}

void fn_802EDB2C(void) {

}

void fn_802EDB30(void *arg0) {
    s32 fn_802D8F90(s32);
    extern s32 lbl_80494DF0;
    extern void *lbl_80495220;
    void *temp_r11;
    void *temp_r9;
    void *temp_r9_2;

    if (fn_802D8F90(lbl_80494DF0) != 0) {
        temp_r11 = M2C_FIELD(arg0, void **, 0x324);
        if (temp_r11 != NULL) {
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x68);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x14)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x10));
        }
        temp_r9_2 = M2C_FIELD(lbl_80495220, void **, 0x338);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x44)(lbl_80495220 + M2C_FIELD(temp_r9_2, s16 *, 0x40));
    }
}

void fn_802EDBA8(char *self, f32 *out) {
    out[1] = out[0] = 0.0f;
    out[2] = *(s32 *)(self + 0x14);
    out[3] = *(s32 *)(self + 0x18);
}

void fn_802EDC14(void *unused, f32 *dst, f32 *src) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}

void fn_802EDC38(u8 *arg0, Vec3f *arg1, s32 arg2, s32 arg3) {
    *(Vec3f *)(arg0 + 0x80) = *arg1;
    *(s32 *)(arg0 + 0x8C) = arg2;
    *(s32 *)(arg0 + 0xC) = arg3;
}

void fn_802EDC60(void) {
    extern void *fn_8036BA10(u32);
    extern void *fn_8036B878(void *, s32);
    fn_8036B878(fn_8036BA10(0x60), 0x1000);
}

void fn_802EDC8C(void *unused, char *obj) {
    if (obj != NULL) {
        char *vt = *(char **)(obj + 0x5C);
        (*(void (**)(void *, s32))(vt + 0xC))(obj + *(s16 *)(vt + 0x8), 3);
    }
}

void fn_802EDCCC(void) {
    M2C_UNK fn_802D1FC8(M2C_UNK);
    M2C_UNK fn_802FB578();
    fn_802D1FC8(0x6C);
    fn_802FB578();
}

void fn_802EDCF4(void *unused, char *obj) {
    if (obj != NULL) {
        char *vt = *(char **)(obj + 0x68);
        (*(void (**)(void *, s32))(vt + 0xC))(obj + *(s16 *)(vt + 0x8), 3);
    }
}

char *fn_802EDD34(char *self, s32 arg1) {
    char *vt = *(char **)self;
    char *obj = (*(char *(**)(void *))(vt + 0x1C4))(self + *(s16 *)(vt + 0x1C0));
    if (obj != NULL) {
        vt = *(char **)(obj + 0x68);
        (*(void (**)(void *, s32))(vt + 0x294))(obj + *(s16 *)(vt + 0x290), arg1);
        (*(s32 *)(self + 0x38))++;
        if (arg1 == 0) {
            *(char **)(self + 0x324) = obj;
        }
    }
    return obj;
}

char *fn_802EDDB8(char *self, char *arg1) {
    extern void fn_8036B980(void *);
    s32 flag;
    char *res;
    {
        char *vt = *(char **)(arg1 + 0x68);
        (*(void (**)(void *))(vt + 0x29C))(arg1 + *(s16 *)(vt + 0x298));
    }
    fn_8036B980(*(void **)arg1);
    (*(s32 *)(self + 0x38))--;
    flag = *(s32 *)(arg1 + 0xC);
    res = *(char **)arg1;
    {
        char *vt = *(char **)self;
        (*(void (**)(void *, void *, s32))(vt + 0x1CC))(self + *(s16 *)(vt + 0x1C8), arg1, flag);
    }
    if (!flag) {
        char *vt = *(char **)self;
        (*(void (**)(void *, void *, s32))(vt + 0x8C))(self + *(s16 *)(vt + 0x88), res, 1);
        *(s32 *)(self + 0x324) = flag;
        return 0;
    }
    return res;
}

void fn_802EDE70(void) {
    extern char *lbl_80495220;
    char *obj = lbl_80495220;
    char *vt = *(char **)(obj + 0x338);
    (*(void (**)(void *))(vt + 0x2C))(obj + *(s16 *)(vt + 0x28));
}

void fn_802EDEA8(char *self, void *arg1) {
    char *vt = *(char **)self;
    (*(void (**)(void *, void *))(vt + 0x1B4))(self + *(s16 *)(vt + 0x1B0), arg1);
}

void fn_802EDF08(char *self, void *arg1, s32 arg2);
void fn_802EDEDC(char *self, void *arg1) {
    if (arg1) {
        fn_802EDF08(self, arg1, 1);
    }
}

void fn_802EDF08(char *self, void *arg1, s32 arg2) {
    char *vt = *(char **)self;
    (*(void (**)(void *, void *, s32))(vt + 0x1BC))(self + *(s16 *)(vt + 0x1B8), arg1, arg2);
}

char *fn_802EDF3C(char *self, void *arg1) {
    char *vt = *(char **)self;
    char *obj = (*(char *(**)(void *))(vt + 0x1D4))(self + *(s16 *)(vt + 0x1D0));
    if (obj) {
        char *ovt;
        (*(s32 *)(self + 0x30))++;
        ovt = *(char **)(obj + 0x24);
        if ((*(s32 (**)(void *, void *))(ovt + 0x7C))(obj + *(s16 *)(ovt + 0x78), arg1)) {
            return obj;
        }
        vt = *(char **)self;
        (*(void (**)(void *, void *))(vt + 0xAC))(self + *(s16 *)(vt + 0xA8), obj);
    }
    return 0;
}

void fn_802EDFE0(char *self, s32 arg1) {
    extern char *lbl_804950A8;
    s32 i;
    if (arg1 && lbl_804950A8) {
        for (i = 0; i <= 1; i++) {
            char *obj = lbl_804950A8;
            char *ovt = *(char **)(obj + 0x338);
            if ((*(s32 (**)(void *, s32))(ovt + 0x1C))(obj + *(s16 *)(ovt + 0x18), i) == arg1) {
                char *vt = *(char **)self;
                (*(void (**)(void *))(vt + 0x164))(self + *(s16 *)(vt + 0x160));
                break;
            }
        }
        {
            char *vt = *(char **)self;
            (*(void (**)(void *, s32))(vt + 0x1DC))(self + *(s16 *)(vt + 0x1D8), arg1);
        }
        (*(s32 *)(self + 0x30))--;
    }
}

char *fn_802EE098(char *self, void *arg1) {
    char *vt = *(char **)self;
    char *obj = (*(char *(**)(void *))(vt + 0x1E4))(self + *(s16 *)(vt + 0x1E0));
    if (obj) {
        char *ovt;
        (*(s32 *)(self + 0x34))++;
        ovt = *(char **)(obj + 0xF0);
        if ((*(s32 (**)(void *, void *))(ovt + 0x24))(obj + *(s16 *)(ovt + 0x20), arg1)) {
            return obj;
        }
        vt = *(char **)self;
        (*(void (**)(void *, void *))(vt + 0xFC))(self + *(s16 *)(vt + 0xF8), obj);
    }
    return 0;
}

void fn_802EE13C(char *self, s32 arg1) {
    char *vt;
    if (arg1 != 0) {
        vt = *(char **)self;
        (*(void (**)(void *, s32))(vt + 0x1EC))(self + *(s16 *)(vt + 0x1E8), arg1);
        *(s32 *)(self + 0x34) -= 1;
    }
}

char *fn_802EE190(char *self, void *arg1) {
    char *vt = *(char **)self;
    char *obj = (*(char *(**)(void *))(vt + 0x1F4))(self + *(s16 *)(vt + 0x1F0));
    if (obj) {
        char *ovt;
        (*(s32 *)(self + 0x2C))++;
        ovt = *(char **)(obj + 0x20);
        if ((*(s32 (**)(void *, void *))(ovt + 0x14))(obj + *(s16 *)(ovt + 0x10), arg1)) {
            return obj;
        }
        vt = *(char **)self;
        (*(void (**)(void *, void *))(vt + 0xC4))(self + *(s16 *)(vt + 0xC0), obj);
    }
    return 0;
}

void fn_802EE234(char *self, void *arg1) {
    if (arg1) {
        char *vt = *(char **)self;
        char *vt2;
        (*(void (**)(void *))(vt + 0x44))(self + *(s16 *)(vt + 0x40));
        vt2 = *(char **)self;
        (*(s32 *)(self + 0x2C))--;
        (*(void (**)(void *, void *))(vt2 + 0x1FC))(self + *(s16 *)(vt2 + 0x1F8), arg1);
    }
}

void fn_802EE2A4(char *self) {
    char *vt = *(char **)self;
    (*(void (**)(char *))(vt + 0x204))(self + *(s16 *)(vt + 0x200));
}

void fn_802EE2D8(char *self) {
    char *vt = *(char **)self;
    (*(void (**)(char *))(vt + 0x20C))(self + *(s16 *)(vt + 0x208));
}

void fn_802EE4F4(void *arg0, s32 arg1) {
    void *fn_802D0B3C(void *);
    s32 fn_802D0F64(void *, s32);
    void fn_802D1A00(void *, s32);
    void *fn_802D0AB8(void);
    extern char *lbl_80495050;
    void *p = fn_802D0B3C(arg0);
    char *obj = lbl_80495050;
    char *vt = *(char **)obj;
    (*(void (**)(void *))(vt + 0x44))(obj + *(s16 *)(vt + 0x40));
    if (fn_802D0F64(p, arg1) != 0) {
        fn_802D1A00(p, arg1);
    } else {
        fn_802D1A00(fn_802D0AB8(), arg1);
    }
}

void fn_802EE654(char *self) {
    extern const f32 lbl_803F0C0C[];
    extern const f32 lbl_803F0C10[];
    extern const f32 lbl_803F0C14[];
    void fn_802C8814(void *, f32 *);
    void fn_802C9368(void *, f32 *);
    f32 v[3];
    f32 *p = v;
    v[0] = lbl_803F0C0C[0];
    p[2] = lbl_803F0C10[0];
    p[1] = lbl_803F0C0C[0];
    fn_802C8814(self + 0x40, v);
    v[0] = lbl_803F0C0C[0];
    p[1] = lbl_803F0C0C[0];
    p[2] = lbl_803F0C14[0];
    fn_802C9368(self + 0x40, p);
}

void fn_802EE6D0(void *self) {
    s32 fn_80337D90(void *, char *);
    s32 fn_80337430(void *, char *, s32, s32);
    extern u8 lbl_8045B634[];
    extern char lbl_803F0C18[];
    if (*(s32 *)((u8 *)self + 0x90) == 0) {
        char *name = lbl_803F0C18;
        if (fn_80337D90(lbl_8045B634, name) != 0) {
            *(s32 *)((u8 *)self + 0x90) = fn_80337430(lbl_8045B634, name, 0, 0);
        }
    }
}

s32 fn_802EEB54(void *arg0) {
    void fn_802EE6D0(void *);
    fn_802EE6D0(arg0);
    return M2C_FIELD(arg0, s32 *, 0x90);
}

void fn_802EEB84(void *self, s32 arg1, s32 *v) {
    extern void fn_802EE6D0(void *);
    s32 x = v[0];
    s32 y = v[1];
    *(s32 *)((u8 *)self + 0x9C) = x;
    *(s32 *)((u8 *)self + 0xA0) = y;
    if (arg1 != 0) {
        fn_802EE6D0(self);
    }
    *(s32 *)((u8 *)self + 0x10) = arg1;
}

void fn_802EEBCC(void *self, Vec3f *a, Vec3f *b, s32 c) {
    typedef struct {
        u8 pad[0xA4];
        s32 used[16];
        Vec3f a[16];
        Vec3f b[16];
        s32 c[16];
        s32 count;
    } Lights;
    Lights *p = self;
    if (p->count != 0x10) {
        p->used[p->count] = 1;
        *(Vec3f *)((u8 *)p + p->count * 12 + 0xE4) = *a;
        *(Vec3f *)((u8 *)p + p->count * 12 + 0x1A4) = *b;
        p->c[p->count] = c;
        p->count++;
    }
}

Vec2f *fn_802EEC58(Vec2f *self, s32 unused, Vec2f *v) {
    self->x = v->x;
    self->y = v->y;
    return self;
}

void fn_802EEC70(void *self, f32 a, f32 b, f32 c, f32 d) {
    extern const f32 lbl_803F0C88[];
    u8 *p = self;
    u8 *vt;
    *(f32 *)(p + 0x2AC) = a;
    *(f32 *)(p + 0x2B0) = b;
    *(f32 *)(p + 0x2B4) = c;
    *(f32 *)(p + 0x2B8) = d;
    *(s32 *)(p + 0x2A8) = (a != lbl_803F0C88[0] || b != lbl_803F0C88[0] || c != lbl_803F0C88[0] || d != lbl_803F0C88[0]);
    vt = *(u8 **)p;
    (*(void (**)(void *))(vt + 0x21C))(p + *(s16 *)(vt + 0x218));
}

void fn_802EECEC(void *arg0) {
    register f32 a asm("fr13");
    f32 b;
    register f32 c asm("fr11");
    f32 d;

    if (M2C_FIELD(arg0, s32 *, 0x2CC) != 0) {
        goto custom;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2A8) == 0) {
        goto normal;
    }
    a = M2C_FIELD(arg0, f32 *, 0x2AC);
    b = M2C_FIELD(arg0, f32 *, 0x2B0);
    c = M2C_FIELD(arg0, f32 *, 0x2B4);
    d = M2C_FIELD(arg0, f32 *, 0x2B8);
store:
    M2C_FIELD(arg0, f32 *, 0x2EC) = d;
    M2C_FIELD(arg0, f32 *, 0x2E4) = b;
    M2C_FIELD(arg0, f32 *, 0x2E8) = c;
    M2C_FIELD(arg0, f32 *, 0x2E0) = a;
    return;
normal:
    a = M2C_FIELD(arg0, f32 *, 0x2BC);
    b = M2C_FIELD(arg0, f32 *, 0x2C0);
    c = M2C_FIELD(arg0, f32 *, 0x2C4);
    d = M2C_FIELD(arg0, f32 *, 0x2C8);
    goto store;
custom:
    a = M2C_FIELD(arg0, f32 *, 0x2D0);
    b = M2C_FIELD(arg0, f32 *, 0x2D4);
    c = M2C_FIELD(arg0, f32 *, 0x2D8);
    d = M2C_FIELD(arg0, f32 *, 0x2DC);
    goto store;
}

void fn_802EED50(char *self, f32 a, f32 b, f32 c, f32 d) {
    char *vt;

    M2C_FIELD(self, f32 *, 0x2BC) = a;
    M2C_FIELD(self, f32 *, 0x2C0) = b;
    M2C_FIELD(self, f32 *, 0x2C4) = c;
    M2C_FIELD(self, f32 *, 0x2C8) = d;
    vt = *(char **)self;
    (*(void (**)(char *))(vt + 0x21C))(self + *(s16 *)(vt + 0x218));
}

void fn_802EED94(void *arg0, f32 a, f32 b, f32 c, f32 d) {
    M2C_FIELD(arg0, f32 *, 0x2F0) = a;
    M2C_FIELD(arg0, f32 *, 0x2F4) = b;
    M2C_FIELD(arg0, f32 *, 0x2F8) = c;
    M2C_FIELD(arg0, f32 *, 0x2FC) = d;
}

void fn_802EEDA8(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0x2AC);
    *arg2 = M2C_FIELD(arg0, f32 *, 0x2B0);
    *arg3 = M2C_FIELD(arg0, f32 *, 0x2B4);
    *arg4 = M2C_FIELD(arg0, f32 *, 0x2B8);
}

void fn_802EEDCC(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0x2F0);
    *arg2 = M2C_FIELD(arg0, f32 *, 0x2F4);
    *arg3 = M2C_FIELD(arg0, f32 *, 0x2F8);
    *arg4 = M2C_FIELD(arg0, f32 *, 0x2FC);
}

void fn_802EEDF0(void *arg0, EGraphicsVec3 *arg1, EGraphicsVec3 *arg2) {
    M2C_FIELD(arg0, EGraphicsVec3 *, 0x300) = *arg1;
    M2C_FIELD(arg0, EGraphicsVec3 *, 0x30C) = *arg2;
}

void fn_802EEE2C(void *arg0, EGraphicsVec3 *arg1, EGraphicsVec3 *arg2) {
    *arg1 = M2C_FIELD(arg0, EGraphicsVec3 *, 0x300);
    *arg2 = M2C_FIELD(arg0, EGraphicsVec3 *, 0x30C);
}

void fn_802EEE68(void) {

}

void fn_802EEE6C(void) {

}

s32 fn_802EEE70(void) {
    return 0;
}

s32 fn_802EEE78(void) {
    return 0;
}

s32 fn_802EEE80(void) {
    return 1;
}

s32 fn_802EEE88(void) {
    return 1;
}

s32 fn_802EEE90(void) {
    return 1;
}

s32 fn_802EEE98(void) {
    return 1;
}

s32 fn_802EEEA0(void) {
    return -1;
}

s32 fn_802EEEA8(void) {
    return 1;
}

f32 fn_802EEEB0(void) {
    return lbl_803F0C8C[0];
}

extern const f32 lbl_803F0C90[];
f32 fn_802EEEBC(void) {
    return lbl_803F0C90[0];
}

s32 fn_802EEEC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x98);
}

void fn_802EEED0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x98) = arg1;
}

extern const f32 lbl_803F0C94[];
f32 fn_802EEED8(void) {
    return lbl_803F0C94[0];
}

s32 fn_802EEEE4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_802EEEEC(s32 *self) {
    return self[6];
}

f32 fn_802EEEF4(void *arg0) {
    return lbl_803F0CA0[0] / (f32) M2C_FIELD(arg0, s32 *, 0x14);
}

f32 fn_802EEF34(void *arg0) {
    return lbl_803F0CB0[0] / (f32) M2C_FIELD(arg0, s32 *, 0x18);
}

s32 fn_802EEF74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_802EEF7C(s32 *self) {
    return self[6];
}

void fn_802EEF84(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

void fn_802EEF8C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}

s32 fn_802EEF94(s32 *self) {
    return self[7];
}

s32 fn_802EEF9C(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802EEFA4(void) {
    return 0x400;
}

s32 fn_802EEFAC(void) {
    return 0x400;
}

s32 fn_802EEFB4(s32 arg0) {
    return arg0 + 0x40;
}

void fn_802EEFBC(void) {

}

void fn_802EEFC0(void) {

}

void fn_802EEFC4(void) {

}

void fn_802EEFC8(void) {

}

void fn_802EEFCC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x318) = arg1;
}

void fn_802EEFD4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x31C) = 1;
}

void fn_802EEFE0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x31C) = 0;
}

s32 fn_802EEFEC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x31C);
}

void fn_802EEFF4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x320) = arg1;
}

s32 fn_802EEFFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x320);
}

s32 fn_802EF004(void) {
    return 1;
}

void fn_802EF00C(void) {

}

void fn_802EF010(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_802EF030(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_802EF070(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802F09B8(void *, void *);
extern const f32 lbl_803F0CEC[];
extern const f32 lbl_803F0CF0[];
extern const f32 lbl_803F0CF4[];

void fn_802EF220(void *arg0) {
    EGBox box;
    register f32 lo asm("fr13") = lbl_803F0CF0[0];
    register Vec3f *p asm("r9");
    register f32 hi asm("fr0");
    EGBox_Init(&box, lbl_803F0CEC[0]);
    {
        Vec3f t;
        p = &t;
        hi = lbl_803F0CF4[0];
        box.min = *Vec3f_Splat(p, lo);
        box.max = *Vec3f_Splat(p, hi);
    }
    fn_802F09B8(arg0, &box);
}

void fn_802EF2E4(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_804961C4 = fn_802D6A90(lbl_80493718, fn_802EF354, fn_802EF398, fn_802EF3D0, 0, lbl_803F0CD8, lbl_80493740);
    }
}

void *fn_802EF354(void) {
    extern void *fn_802D1FC8(s32);
    void **self = fn_802D1FC8(0xC0);
    fn_802EFBA8(self);
    *self = lbl_80419C98;
    return self;
}

void fn_802EF398(void *self) {
    fn_802EFBA8(self);
    *(void **)self = lbl_80419C98;
}

extern void fn_802F05AC(void *, s32);
void fn_802EF3D0(void *self) {
    fn_802F05AC(self, 2);
}

void fn_802EF3F4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

void *fn_802EF434(void) {
    return lbl_80493718;
}

extern s32 lbl_80493724[];
s32 fn_802EF440(void) {
    return lbl_80493724[0];
}

extern s32 lbl_80493728[];
s32 fn_802EF44C(void) {
    return lbl_80493728[0];
}

extern u16 lbl_8049372C[];
u16 fn_802EF458(void) {
    return lbl_8049372C[0];
}

void *fn_802EF464(void) {
    return lbl_80493718;
}

extern u16 lbl_8049372E[];
u16 fn_802EF470(void) {
    return lbl_8049372E[0];
}

void fn_802EF47C(s32 arg0) {
    fn_802D6A90(lbl_80493718, fn_802EF354, fn_802EF398, fn_802EF3D0, arg0, lbl_803F0CD8, lbl_80493740);
}

void fn_802D2430(void);
void fn_802EF4D0(void) {
    fn_802D2430();
}

s32 fn_802EF4F0(void) {
    return 1;
}

void fn_802EF2E4(s32 arg0, s32 arg1);

void fn_802EF4F8(void) {
    fn_802EF2E4(1, 0xFFFF);
}

