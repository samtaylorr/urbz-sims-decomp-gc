/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } Vec3f;

typedef struct {
    f32 a;
    f32 b;
    s32 c;
    s32 d;
    s32 e;
} EWinAnim;

typedef struct {
    f32 a;
    f32 b;
    s32 c;
    s32 d;
    s32 pad[2];
    s32 e;
} EWinAnimDst;

extern f32 lbl_803F1A24[];
extern f32 lbl_803F1A28[];

static inline void EWinAnim_Init(EWinAnim *p) {
    p->a = lbl_803F1A24[0];
    p->b = lbl_803F1A28[0];
    p->c = 0;
    p->d = 1;
    p->e = 0;
}

static inline char *EWin_NextItem(char *p) {
    char **link = *(char ***)(*(char **)(p + 0x10) + 8);
    if (link != NULL) {
        return *link;
    }
    return NULL;
}

static inline void EWinAnim_Copy(EWinAnimDst *d, EWinAnim *s) {
    d->a = s->a;
    d->b = s->b;
    d->c = s->c;
    d->d = s->d;
    d->e = s->e;
}

void fn_80307CCC();
void fn_80305AB0(void *self, s32 arg1) {
    extern u8 lbl_8041ABA8[];
    extern u8 lbl_8041ACA0[];
    void fn_8031EA2C(void *);
    void fn_80307364(void *, s32);
    M2C_FIELD(self, void **, 0x44) = lbl_8041ABA8;
    if (M2C_FIELD(self, void **, 0x4C) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0x4C));
    }
    fn_80305B1C(self);
    M2C_FIELD(self, void **, 0xF0) = lbl_8041ACA0;
    M2C_FIELD(self, void **, 0xC8) = lbl_8041ACA0;
    fn_80307364(self, arg1);
}

void fn_80305C5C(void *self, void *arg1) {
    extern void fn_803074F0(void *, s32, s32);

    if (M2C_FIELD(self, void **, 0x48) != NULL) {
        fn_803074F0(M2C_FIELD(self, void **, 0x48), 8, 0);
    }
    M2C_FIELD(self, void **, 0x48) = arg1;
    fn_803074F0(arg1, 8, 1);
}

void fn_80305CB4(char *self, s32 n) {
    s32 count;
    s32 i;
    char *p;
    char *vt;

    count = M2C_FIELD(self, s32 *, 0x60);
    if (count > 1 && n >= 0) {
        if (n > count) {
            n = count;
        }
        p = **(char ***)self;
        if (p != NULL) {
            for (i = 0; i < n; i++) {
                p = *(char **)(*(char **)(p + 0x10) + 8);
                if (p != NULL) {
                    p = *(char **)p;
                } else {
                    p = 0;
                }
            }
            if (M2C_FIELD(p, s32 *, 0x18) & 0x10) {
                vt = *(char **)(self + 0x44);
                (*(void (**)(char *, char *))(vt + 0xA4))(self + *(s16 *)(vt + 0xA0), p);
            }
        }
    }
}

void fn_80305D58(char *self, s32 arg1, s32 arg2, s32 arg3) {
    char *vt;
    M2C_FIELD(self, s32 *, 0x5C) = arg1;
    M2C_FIELD(self, s32 *, 0x64) = arg2;
    M2C_FIELD(self, s32 *, 0x68) = arg3;
    vt = *(char **)(self + 0x44);
    (*(void (**)(char *))(vt + 0x9C))(self + *(s16 *)(vt + 0x98));
}

void fn_80305D98(char *self, s32 arg1, s32 arg2, f32 x, f32 y) {
    EWinAnim t;

    M2C_FIELD(self, s32 *, 0x94) = arg1;
    M2C_FIELD(self, s32 *, 0x90) = arg2;
    EWinAnim_Init(&t);
    t.c = arg2;
    t.a = x;
    t.b = y;
    t.e = M2C_FIELD(self, s32 *, 0x38);
    t.d = 1;
    EWinAnim_Copy((EWinAnimDst *)(self + 0xA4), &t);
    t.c = arg1;
    EWinAnim_Copy((EWinAnimDst *)(self + 0xCC), &t);
}

void fn_80305E4C(char *self) {
    void fn_80307078(char *);
    void fn_80306D2C(void *);
    void fn_80307834(char *);
    char *old;
    char *obj;
    char *vt;

    if (M2C_FIELD(self, s32 *, 0x18) & 4) {
        fn_80307078(self + 0xA4);
        fn_80307078(self + 0xCC);
        if (M2C_FIELD(self, s32 *, 0) != 0) {
            old = M2C_FIELD(self, char **, 0x48);
            fn_80306D2C(self);
            obj = M2C_FIELD(self, char **, 0x48);
            if (obj == old) {
                vt = *(char **)(obj + 0x44);
                (*(void (**)(char *))(vt + 0x14))(obj + *(s16 *)(vt + 0x10));
            }
            if (M2C_FIELD(self, s32 *, 0x18) & 0x40) {
                fn_80307834(self);
            }
        }
    }
}

void fn_80306450(char *self, Vec3f *arg1) {
    char *vt;
    *(Vec3f *)(self + 0x20) = *arg1;
    vt = *(char **)(self + 0x44);
    (*(void (**)(char *))(vt + 0x9C))(self + *(s16 *)(vt + 0x98));
}

void fn_803064A0(char *self, f32 *arg1) {
    char *vt;
    *(f32 *)(self + 0x20) = arg1[0];
    vt = *(char **)(self + 0x44);
    *(f32 *)(self + 0x28) = arg1[1];
    (*(void (**)(char *))(vt + 0x9C))(self + *(s16 *)(vt + 0x98));
}

void fn_803064E4(void *self) {
    extern void fn_80306544(void *);
    extern void fn_80306B3C(void *);
    extern void fn_80306824(void *);

    if (M2C_FIELD(self, s32 *, 0) != 0) {
        switch (M2C_FIELD(self, s32 *, 0x5C)) {
        case -1:
            break;
        case 0:
            fn_80306544(self);
            break;
        case 2:
            fn_80306B3C(self);
            break;
        case 1:
            fn_80306824(self);
            break;
        }
    }
}

void fn_80306CAC(void *arg0) {
    s32 fn_80307224(void *);
    void *temp_r9;
    void *temp_r9_2;

    if (fn_80307224(arg0 + 0xCC) != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x44);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xDC)(arg0 + M2C_FIELD(temp_r9, s16 *, 0xD8));
        return;
    }
    if (fn_80307224(arg0 + 0xA4) != 0) {
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x44);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0xD4)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0xD0));
    }
}

void fn_80306D28(void) {

}

void fn_80306D2C(void *arg0) {
    void *self = arg0;
    void *temp_r9;

    if (self != NULL || self == NULL) {
        temp_r9 = M2C_FIELD(self, void **, 0x44);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xE4)(self + M2C_FIELD(temp_r9, s16 *, 0xE0));
    }
}

void fn_80306D64(void *arg0, s32 arg1) {
    void *temp_r9;

    if (M2C_FIELD(arg0, s32 *, 0x58) & 4) {
        if (arg1 == M2C_FIELD(arg0, s32 *, 0x94)) {
            temp_r9 = M2C_FIELD(arg0, void **, 0x44);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xDC)(arg0 + M2C_FIELD(temp_r9, s16 *, 0xD8));
        } else if (arg1 == M2C_FIELD(arg0, s32 *, 0x90)) {
            temp_r9 = M2C_FIELD(arg0, void **, 0x44);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xD4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0xD0));
        }
    }
}

void fn_80306DDC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r9;
    s32 flags = M2C_FIELD(arg0, s32 *, 0x58);

    if (((flags & 1) && arg1 == 0) || ((flags & 2) && arg1 == 1)) {
        if (arg2 == M2C_FIELD(arg0, s32 *, 0x98)) {
            if (M2C_FIELD(arg0, s32 *, 0x9C) * arg3 < 0) {
                temp_r9 = M2C_FIELD(arg0, void **, 0x44);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xDC)(arg0 + M2C_FIELD(temp_r9, s16 *, 0xD8));
            } else {
                temp_r9 = M2C_FIELD(arg0, void **, 0x44);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xD4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0xD0));
            }
        }
    }
}

void fn_80306E6C(void *arg0, s32 arg1) {
    extern f32 lbl_803F1A8C[];
    void *temp_r9;
    Vec3f v;
    Vec3f *p = &v;

    p->x = p->y = p->z = lbl_803F1A8C[0];
    temp_r9 = M2C_FIELD(arg0, void **, 0x44);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, Vec3f *), 0x94)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x90), arg1, p);
}

void fn_80306EBC(char *self, f32 farg0) {
    char *vt;
    M2C_FIELD(self, f32 *, 0x7C) = farg0;
    vt = *(char **)(self + 0x44);
    (*(void (**)(char *))(vt + 0x9C))(self + *(s16 *)(vt + 0x98));
}

void fn_80306EF4(char *self, f32 farg0) {
    char *vt;
    M2C_FIELD(self, f32 *, 0x80) = farg0;
    vt = *(char **)(self + 0x44);
    (*(void (**)(char *))(vt + 0x9C))(self + *(s16 *)(vt + 0x98));
}

void fn_80306F2C(char *self, f32 farg0) {
    char *vt;
    M2C_FIELD(self, f32 *, 0x84) = farg0;
    vt = *(char **)(self + 0x44);
    (*(void (**)(char *))(vt + 0x9C))(self + *(s16 *)(vt + 0x98));
}

void fn_80306F64(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x88) = farg0;
}

s32 fn_80306F6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

s32 fn_80306F74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60);
}

s32 fn_80306F7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C);
}

f32 fn_80306F84(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x7C);
}

void fn_80306F8C(char *self, s32 arg1, s32 arg2) {
    char *vt;
    M2C_FIELD(self, s32 *, 0x64) = arg1;
    M2C_FIELD(self, s32 *, 0x68) = arg2;
    vt = *(char **)(self + 0x44);
    (*(void (**)(char *))(vt + 0x9C))(self + *(s16 *)(vt + 0x98));
}

void fn_80306FC8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
}

void fn_80306FD0(void *arg0) {
    extern void fn_80305EE0(void *, s32);
    fn_80305EE0(arg0, 1);
}

void fn_80306FF4(void *arg0) {
    extern void fn_80305FE0(void *, s32);
    fn_80305FE0(arg0, 1);
}

void fn_80307018(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x8C) = arg1;
}

void *fn_80307020(void *self) {
    extern f32 lbl_803F1B24;
    extern f32 lbl_803F1B28;
    extern f32 lbl_803F1B2C;
    extern u8 lbl_8041ACA0[];
    M2C_FIELD(self, void **, 0x24) = lbl_8041ACA0;
    M2C_FIELD(self, f32 *, 0x0) = lbl_803F1B24;
    M2C_FIELD(self, f32 *, 0x4) = lbl_803F1B28;
    M2C_FIELD(self, s32 *, 0xC) = 1;
    M2C_FIELD(self, f32 *, 0x14) = lbl_803F1B2C;
    M2C_FIELD(self, s32 *, 0x20) = 0;
    M2C_FIELD(self, s32 *, 0x8) = 0;
    M2C_FIELD(self, f32 *, 0x10) = lbl_803F1B2C;
    M2C_FIELD(self, s32 *, 0x18) = 0;
    M2C_FIELD(self, s32 *, 0x1C) = 0;
    return self;
}

s32 fn_80307224(void *self) {
    extern f32 lbl_803F1B34;
    s32 ret = 0;
    if (M2C_FIELD(self, s32 *, 0x20) != 0) {
        if (M2C_FIELD(self, s32 *, 0x1C) == 0 ||
            (M2C_FIELD(self, f32 *, 0x10) > M2C_FIELD(self, f32 *, 0x0) &&
             M2C_FIELD(self, f32 *, 0x14) > M2C_FIELD(self, f32 *, 0x4))) {
            ret = 1;
            M2C_FIELD(self, s32 *, 0x1C) = ret;
            M2C_FIELD(self, f32 *, 0x14) = lbl_803F1B34;
        }
    }
    return ret;
}

void fn_8030744C(void *arg0) {
    void fn_80307478(void *);
    if (M2C_FIELD(arg0, s32 *, 0x18) & 2) {
        fn_80307478(arg0);
    }
}

void fn_803074F0(void *self, s32 flags, s32 set) {
    void *vt;
    void *p;
    s32 more;

    vt = M2C_FIELD(self, void **, 0x44);
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x54))((char *)self + M2C_FIELD(vt, s16 *, 0x50));
    if (set != 0) {
        M2C_FIELD(self, s32 *, 0x18) |= flags;
    } else {
        M2C_FIELD(self, s32 *, 0x18) &= ~flags;
    }
    p = M2C_FIELD(self, void **, 0);
    goto check;
    do {
        fn_803074F0(M2C_FIELD(p, void **, 0), flags, set);
        p = M2C_FIELD(p, void **, 8);
    check:
        more = 1;
        if (p == NULL) {
            more = 0;
        }
    } while (more != 0);
}

void *fn_8030758C(void *self, s32 id) {
    void *node = M2C_FIELD(self, void **, 0);
    void *obj;
    int more;

    for (;;) {
        more = 1;
        if (node == NULL) {
            more = 0;
        }
        if (!more) {
            break;
        }
        obj = M2C_FIELD(node, void **, 0);
        if (M2C_FIELD(obj, s32 *, 0x1C) == id) {
            return obj;
        }
        node = M2C_FIELD(node, void **, 8);
    }
    return NULL;
}

void fn_803076CC(void *arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg1, s32 *, 0x10) = arg2;
}

void fn_803076D4(void *arg0, void *arg1) {
    s32 fn_802CB69C(void *, void *);
    M2C_FIELD(arg1, void **, 0xC) = arg0;
    M2C_FIELD(arg1, s32 *, 0x10) = fn_802CB69C(arg0, arg1);
}

void fn_8030770C(void *arg0, void *arg1) {
    void fn_802CB5C4(void *, s32);
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    fn_802CB5C4(arg0, M2C_FIELD(arg1, s32 *, 0x10));
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
}

void fn_80307748(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) (M2C_FIELD(arg1, s32 *, 0x18) | 0x20);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | 0x40);
}

void fn_80307764(void *self) {
    void *node = M2C_FIELD(self, void **, 0);
    void *next;
    char *vt;
    int more;

    for (;;) {
        more = 1;
        if (node == NULL) {
            more = 0;
        }
        if (!more) {
            break;
        }
        vt = M2C_FIELD(self, char **, 0x44);
        next = M2C_FIELD(node, void **, 8);
        (*(void (**)(void *, s32))(vt + 0x7C))((char *)self + *(s16 *)(vt + 0x78), M2C_FIELD(node, s32 *, 0));
        node = next;
    }
}

void fn_803077CC(void *self, void *arg1) {
    void *node = M2C_FIELD(self, void **, 0);
    void *child;
    int more;

    M2C_FIELD(self, void **, 0x38) = arg1;
    for (;;) {
        more = 1;
        if (node == NULL) {
            more = 0;
        }
        if (!more) {
            break;
        }
        child = M2C_FIELD(node, void **, 0);
        if (child != NULL) {
            fn_803077CC(child, arg1);
        }
        node = M2C_FIELD(node, void **, 8);
    }
}

void fn_80307834(void *self) {
    void *node = M2C_FIELD(self, void **, 0);
    void *next;
    void *obj;
    char *vt;
    int more;

    for (;;) {
        more = 1;
        if (node == NULL) {
            more = 0;
        }
        if (!more) {
            break;
        }
        obj = M2C_FIELD(node, void **, 0);
        next = M2C_FIELD(node, void **, 8);
        if (M2C_FIELD(obj, s32 *, 0x18) & 0x20) {
            M2C_FIELD(obj, s32 *, 0x18) &= ~0x20;
            vt = M2C_FIELD(self, char **, 0x44);
            (*(void (**)(void *, void *))(vt + 0x7C))((char *)self + *(s16 *)(vt + 0x78), obj);
        }
        node = next;
    }
    M2C_FIELD(self, s32 *, 0x18) &= ~0x40;
}

void fn_803078C4(char *self, f32 *arg1) {
    extern f32 lbl_803F1BE0[];
    f32 v[3];
    f32 *p;
    char *vt;
    f32 x, z;
    void (*f)(void *, f32 *);

    vt = M2C_FIELD(self, char **, 0x44);
    x = arg1[0];
    self += *(s16 *)(vt + 0x20);
    z = arg1[1];
    p = v;
    p[0] = x;
    p[1] = lbl_803F1BE0[0];
    p[2] = z;
    f = *(void (**)(void *, f32 *))(vt + 0x24);
    f(self, p);
}

void fn_8030791C(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x20) = *arg1;
}

void fn_8030793C(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 4);
}

void fn_80307950(void *self) {
    char *obj = M2C_FIELD(self, char **, 0xC);
    if (obj != NULL) {
        char *vt = M2C_FIELD(obj, char **, 0x44);
        (*(void (**)(void *, void *))(vt + 0x3C))(obj + *(s16 *)(vt + 0x38), self);
    }
}

void fn_80307994(void) {

}

s32 fn_80307998(void) {
    return 0;
}

void fn_803079A0(void) {

}

void fn_803079A4(void) {

}

void fn_803079A8(void) {

}

void fn_803079AC(s32 arg0, s32 *arg1) {
    M2C_UNK fn_802D3CE4(s32, s32);
    fn_802D3CE4(arg0 + 0x14, *arg1);
}

s32 fn_803079D4(s32 arg0) {
    return arg0 + 0x14;
}

void fn_803079DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

s32 fn_803079E4(s32 *self) {
    return self[6];
}

s32 fn_803079EC(void *arg0, s32 arg1) {
    return (M2C_FIELD(arg0, s32 *, 0x18) & arg1) != 0;
}

void fn_80307A04(void *arg0, s32 arg1, s32 arg2) {
    void *vt;

    vt = M2C_FIELD(arg0, void **, 0x44);
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x54))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x50));
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) |= arg1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) &= ~arg1;
    }
}

s32 fn_80307A6C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 1U) & 1;
}

s32 fn_80307A78(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 2U) & 1;
}

s32 fn_80307A84(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 3U) & 1;
}

s32 fn_80307A90(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 4U) & 1;
}

s32 fn_80307A9C(s32 arg0) {
    return arg0 + 0x2C;
}

s32 fn_80307AA4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

s32 fn_80307AAC(s32 *self) {
    return self[7];
}

f32 fn_80307AB4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x28);
}

f32 fn_80307ABC(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x20);
}

f32 fn_80307AC4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x24);
}

s32 fn_80307ACC(s32 arg0) {
    return arg0 + 0x20;
}

s32 fn_80307AD4(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_80307ADC(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0xC) = arg0;
}

void fn_80307AE4(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
}

s32 fn_80307AF0(s32 arg0, void *arg1) {
    return M2C_FIELD(M2C_FIELD(arg1, void **, 0x10), s32 *, 4) != 0;
}

s32 fn_80307B0C(s32 arg0, void *arg1) {
    return M2C_FIELD(M2C_FIELD(arg1, void **, 0x10), s32 *, 8) != 0;
}

s32 fn_80307B28(s32 arg0, void *arg1) {
    return M2C_FIELD(arg1, s32 *, 0xC) == arg0;
}

s32 fn_80307B3C(void *arg0) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0);
    if (temp_r3 != NULL) {
        return *temp_r3;
    }
    return 0;
}

s32 fn_80307B58(void *arg0) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 4);
    if (temp_r3 != NULL) {
        return *temp_r3;
    }
    return 0;
}

s32 fn_80307B74(void *arg0, void *arg1) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x10), s32 **, 4);
    if (temp_r3 != NULL) {
        return *temp_r3;
    }
    return 0;
}

s32 fn_80307B94(void *arg0, void *arg1) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x10), s32 **, 8);
    if (temp_r3 != NULL) {
        return *temp_r3;
    }
    return 0;
}

s32 fn_80307BB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

extern s32 lbl_80494EB0;
void fn_80307BBC(void (*cb)(void)) {
    lbl_80494EB0 = cb;
}

extern s32 lbl_80494EB4;
void fn_80307BC4(void (*cb)(void)) {
    lbl_80494EB4 = cb;
}

extern s32 lbl_80494EB8;
void fn_80307BCC(void (*cb)(void)) {
    lbl_80494EB8 = cb;
}

extern s32 lbl_80494EBC;
void fn_80307BD4(void (*cb)(void)) {
    lbl_80494EBC = cb;
}

void fn_80307BDC(void) {
    extern s32 lbl_80494EB0;
    lbl_80494EB0 = 0;
}

void fn_80307BE8(void) {
    extern s32 lbl_80494EB4;
    lbl_80494EB4 = 0;
}

void fn_80307BF4(void) {
    extern s32 lbl_80494EB8;
    lbl_80494EB8 = 0;
}

void fn_80307C00(void) {
    extern s32 lbl_80494EBC;
    lbl_80494EBC = 0;
}

void fn_80307C0C(void) {
    extern s32 lbl_80494EB0;
    if (lbl_80494EB0 != 0) {
        ((void (*)(void))lbl_80494EB0)();
    }
}

void fn_80307C3C(void) {
    extern s32 lbl_80494EB4;
    if (lbl_80494EB4 != 0) {
        ((void (*)(void))lbl_80494EB4)();
    }
}

void fn_80307C6C(void) {
    extern s32 lbl_80494EB8;
    if (lbl_80494EB8 != 0) {
        ((void (*)(void))lbl_80494EB8)();
    }
}

void fn_80307C9C(void) {
    extern s32 lbl_80494EBC;
    if (lbl_80494EBC != 0) {
        ((void (*)(void))lbl_80494EBC)();
    }
}

void fn_80307CCC(s32 arg0) {
    void fn_803076D4();
    void fn_80307D00(s32);
    fn_803076D4();
    fn_80307D00(arg0);
}

void fn_80307DF0(void) {

}

extern u8 lbl_8041AD40[];
extern void fn_8030951C(void *, s32);
void fn_803081BC(u8 *self, s32 flags) {
    *(u8 **)(self + 0x44) = lbl_8041AD40;
    fn_8030951C(self, flags);
}

void fn_803081EC(s32 arg0) {
    void fn_80307CCC(s32);
    fn_80307CCC(arg0);
}

void fn_8030820C(void *self, s32 *v) {
    M2C_UNK fn_80307D00(void *);
    s32 x = v[0];
    s32 y = v[1];
    s32 z = v[2];
    s32 *d;
    M2C_FIELD(self, s32 *, 0x20) = x;
    d = (s32 *)((u8 *)self + 0x20);
    d[1] = y;
    d[2] = z;
    fn_80307D00(self);
}

void fn_8030824C(s32 arg0) {
    M2C_UNK fn_80307D00(s32);
    fn_803075C8();
    fn_80307D00(arg0);
}

void fn_80308280(void *self, f32 *v) {
    M2C_UNK fn_80307D00(void *);
    M2C_FIELD(self, f32 *, 0x20) = v[0];
    M2C_FIELD(self, f32 *, 0x28) = v[1];
    fn_80307D00(self);
}

f32 fn_803082B4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xA8);
}

void fn_803082BC(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xA8) = farg0;
}

s32 fn_803082C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}

void *fn_803082CC(void *self, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    extern void fn_803059C8(void *);
    extern void fn_80308BF8(void *, s32, s32);
    extern u8 lbl_8041AE10[];
    extern f32 lbl_803F1D38[];
    fn_803059C8(self);
    M2C_FIELD(self, s32 *, 0xF8) = 0;
    M2C_FIELD(self, s32 *, 0xFC) = 0;
    M2C_FIELD(self, u8 **, 0x44) = lbl_8041AE10;
    fn_80308BF8(self, a3, a4);
    M2C_FIELD(self, s32 *, 0x108) = a5;
    M2C_FIELD(self, f32 *, 0x104) = lbl_803F1D38[0];
    M2C_FIELD(self, s32 *, 0x48) = 0;
    M2C_FIELD(self, s32 *, 0xF4) = 0;
    M2C_FIELD(self, s32 *, 0x100) = 0;
    return self;
}

void fn_8030834C(void *self, s32 flags) {
    extern void fn_8031EA2C(void *);
    extern void fn_80305AB0(void *, s32);
    extern u8 lbl_8041AE10[];
    M2C_FIELD(self, u8 **, 0x44) = lbl_8041AE10;
    if (M2C_FIELD(self, void **, 0xf8) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0xf8));
    }
    if (M2C_FIELD(self, void **, 0xfc) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0xfc));
    }
    M2C_FIELD(self, void **, 0xfc) = NULL;
    M2C_FIELD(self, void **, 0xf8) = NULL;
    fn_80305AB0(self, flags);
}

void fn_803083BC(void *arg0) {
    void fn_80305B1C(void *);
    fn_80305B1C(arg0);
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
}

void fn_803083F4(void *self, s32 arg1, f32 *v) {
    extern void fn_80306294(void *, s32, f32 *);
    f32 t[3];
    f32 *p;
    if (M2C_FIELD(self, s32 *, 0) != 0) {
        return;
    }
    M2C_FIELD(self, s32 *, 0xF4) = arg1;
    M2C_FIELD(self, s32 *, 0x100) = arg1;
    t[0] = v[0];
    p = t;
    p[1] = v[1];
    p[2] = v[2];
    fn_80306294(self, arg1, p);
}

void fn_80308710(void *self) {
    extern void fn_80308760(void *);
    extern void fn_803089AC(void *);

    if (M2C_FIELD(self, s32 *, 0) != 0) {
        switch (M2C_FIELD(self, s32 *, 0x5C)) {
        case -1:
            break;
        case 0:
            fn_80308760(self);
            break;
        case 1:
            fn_803089AC(self);
            break;
        }
    }
}

void fn_803090EC(void *arg0) {
    void *temp_r9;

    fn_803075C8();
    temp_r9 = M2C_FIELD(arg0, void **, 0x44);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x9C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x98));
}

void fn_80309130(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r9;

    if (arg2 != 0 && arg1 == 2) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x44);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x9C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x98));
    }
}

void fn_80308518(void);
void fn_80309178(void) {
    fn_80308518();
}

void fn_8030861C(void);
void fn_80309198(void) {
    fn_8030861C();
}

s32 *fn_803091B8(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

void fn_803091CC(void *arg0, s32 arg1) {
    void fn_802D20E8(void *);
    void fn_802D1A00(void *, void *);
    void *fn_802D0AB8(void);

    fn_802D1A00(fn_802D0AB8(), M2C_FIELD(arg0, void **, 0));
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void *fn_8030935C(void *arg0, void **arg1) {
    void fn_802D1A00(void *, void *);
    void *fn_802D0AB8(void);

    fn_802D1A00(fn_802D0AB8(), M2C_FIELD(arg0, void **, 0));
    M2C_FIELD(arg0, void **, 0) = NULL;
    M2C_FIELD(arg0, void **, 4) = *arg1;
    return arg0;
}

void fn_8030951C(void *arg0, s32 arg1) {
    extern u8 lbl_8041AF08[];
    extern void fn_8031EA2C(void *);
    extern void fn_80304AB4(void *, s32);

    M2C_FIELD(arg0, u8 **, 0x44) = lbl_8041AF08;
    if (M2C_FIELD(arg0, void **, 0x7C) != NULL) {
        fn_8031EA2C(M2C_FIELD(arg0, void **, 0x7C));
    }
    M2C_FIELD(arg0, void **, 0x7C) = NULL;
    fn_803091CC((u8 *)arg0 + 0x9C, 2);
    fn_80304AB4(arg0, arg1);
}

void fn_80309584(char *self, s32 arg1) {
    extern void fn_803051DC(char *, s32, s32);
    extern void fn_80307478(char *, s32);
    char *vt;
    if (M2C_FIELD(self, s32 *, 0x18) & 2) {
        fn_803051DC(self, arg1, -1);
        vt = *(char **)(self + 0x44);
        (*(void (**)(void *, s32))(vt + 0xC4))(self + *(s16 *)(vt + 0xC0), arg1);
        fn_80307478(self, arg1);
    }
}

void fn_803095EC(void *self, char *name) {
    extern void fn_8031EA2C(void *);
    s32 fn_80337D68(void *, char *);
    s32 fn_8033740C(void *, char *, s32, s32);
    extern u8 lbl_8045B634[];
    s32 r;
    if (M2C_FIELD(self, void **, 0x7C) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0x7C));
    }
    if (fn_80337D68(lbl_8045B634, name) != 0) {
        r = fn_8033740C(lbl_8045B634, name, 0, 0);
    } else {
        r = 0;
    }
    M2C_FIELD(self, s32 *, 0x7C) = r;
}

void fn_803098E8(void *arg0, void *arg1) {
    struct Unk1C { s32 a[7]; };
    M2C_FIELD(arg0, struct Unk1C *, 0x80) = *(struct Unk1C *)arg1;
}

void fn_80309928(s32 arg0) {
    M2C_UNK fn_80309214(s32);
    fn_80309214(arg0 + 0x9C);
}

void fn_8030994C(s32 arg0) {
    M2C_UNK fn_80309214(s32);
    fn_80309214(arg0 + 0x9C);
}

void fn_80309970(u8 *arg0, void **arg1) {
    void *fn_8030935C(void *, void **);
    fn_8030935C(arg0 + 0x9C, arg1);
}

void fn_80309994(u8 *arg0, void **arg1) {
    void *fn_8030935C(void *, void **);
    fn_8030935C(arg0 + 0x9C, arg1);
}

s32 fn_803099B8(void *arg0) {
    char *s = M2C_FIELD(arg0, char **, 0x9C);
    s32 *p;
    s32 ret;

    if (s != NULL) {
        return (s32)(s + 2);
    }
    p = M2C_FIELD(arg0, s32 **, 0xA0);
    ret = 0;
    if (p != NULL) {
        ret = *p;
    }
    return ret;
}

s32 fn_803099E8(s32 arg0) {
    return arg0 + 0x80;
}

void fn_803099F0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x8C) = farg0;
}

void fn_80309AE0(void *arg0, s32 arg1) {
    extern u8 lbl_8041AFD8[];
    extern s32 lbl_80494EC0;
    extern s32 lbl_80494EC4;
    extern void *fn_802D0AB8(void *);
    extern void fn_802D1A00(void *, void *);
    struct { u8 pad[0x9C]; void *vt; } *self = arg0;

    self->vt = lbl_8041AFD8;
    if (lbl_80494EC0 == (s32)self) {
        lbl_80494EC0 = 0;
    }
    if (lbl_80494EC4 == (s32)self) {
        lbl_80494EC4 = 0;
    }
    if (arg1 & 1) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), self);
    }
}

void fn_80309B50(void *arg0, void *arg1, s32 arg2) {
    extern void *lbl_80495050;
    M2C_UNK fn_80309D70(void *);
    M2C_UNK fn_8030A570(s32, s32);
    struct { u8 pad[0x90]; void *obj; s32 id; } *self = arg0;
    f32 buf[4];

    if (self->obj == arg1 && self->id == arg2) {
        return;
    }
    self->id = arg2;
    M2C_FIELD(self, void **, 0x90) = arg1;
    if (arg1 != NULL) {
        void *vt = M2C_FIELD(arg1, void **, 0x20);
        M2C_FIELD(vt, M2C_UNK (**)(void *, void *), 0x1C)((char *)arg1 + M2C_FIELD(vt, s16 *, 0x18), buf);
    } else {
        void *obj = lbl_80495050;
        void *vt = M2C_FIELD(obj, void **, 0);
        M2C_FIELD(vt, M2C_UNK (**)(void *, void *), 0x54)((char *)obj + M2C_FIELD(vt, s16 *, 0x50), buf);
    }
    fn_80309D70(buf);
    fn_8030A570((s32)self, (s32)buf);
}

void fn_80309DF4(f32 *rect, f32 *src) {
    extern f32 lbl_80454AF4[];
    extern f32 lbl_80454B00[];
    f32 dx;
    f32 dy;

    rect[0] *= lbl_80454AF4[0];
    rect[1] *= lbl_80454AF4[1];
    rect[2] *= lbl_80454AF4[0];
    rect[3] *= lbl_80454AF4[1];
    dx = (src[2] - src[0] + 1.0f) * lbl_80454B00[0];
    dy = (src[3] - src[1] + 1.0f) * lbl_80454B00[1];
    rect[0] -= dx;
    rect[1] -= dy;
    rect[2] -= dx;
    rect[3] -= dy;
}

void fn_8030A190(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0)) + M2C_FIELD(arg0, f32 *, 0x30));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x14)) + M2C_FIELD(arg0, f32 *, 0x34));
}

void fn_8030A40C(void *arg0) {
    f32 temp_f10;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;

    temp_f8 = M2C_FIELD(arg0, f32 *, 0x30);
    temp_f7 = M2C_FIELD(arg0, f32 *, 0x34);
    temp_f10 = M2C_FIELD(arg0, f32 *, 0);
    temp_f9 = M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x60) = (M2C_FIELD(arg0, f32 *, 0x70) - temp_f8) / temp_f10;
    M2C_FIELD(arg0, f32 *, 0x64) = (M2C_FIELD(arg0, f32 *, 0x74) - temp_f7) / temp_f9;
    M2C_FIELD(arg0, f32 *, 0x68) = (M2C_FIELD(arg0, f32 *, 0x78) - temp_f8) / temp_f10;
    M2C_FIELD(arg0, f32 *, 0x6C) = (M2C_FIELD(arg0, f32 *, 0x7C) - temp_f7) / temp_f9;
}

void fn_8030A638(s32 arg0, s32 arg1) {
    extern f32 lbl_803F1EA8[];
    extern f32 lbl_803F1EAC[];
    extern f32 lbl_80454AF4[];
    extern f32 lbl_80454B00[];

    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_80454AF4[1] = lbl_803F1EA8[0];
        lbl_80454B00[1] = lbl_803F1EAC[0];
        lbl_80454AF4[0] = lbl_803F1EA8[0];
        lbl_80454B00[0] = lbl_803F1EAC[0];
        lbl_80454AF4[2] = lbl_803F1EA8[0];
        lbl_80454B00[2] = lbl_803F1EAC[0];
    }
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
void *fn_8030A68C(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8030A738(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8030A76C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8030A4A8();
    M2C_UNK fn_8030A460(s32, s32);
    fn_8030A4A8();
    fn_8030A460(arg0, arg1);
}

void fn_8030A7A8(s32 arg0, s32 arg1) {
    M2C_UNK fn_8030A4A8();
    M2C_UNK fn_8030A570(s32, s32);
    M2C_UNK fn_8030A460(s32, s32);
    fn_8030A4A8(arg0, arg1);
    fn_8030A570(arg0, arg1);
    fn_8030A460(arg0, arg1);
}

void fn_8030A7F0(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0)) + M2C_FIELD(arg0, f32 *, 0x30));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x14)) + M2C_FIELD(arg0, f32 *, 0x34));
}

void fn_8030A81C(void *arg0, f32 *arg1, f32 *arg2, f32 farg0, f32 farg1) {
    *arg1 = (farg0 * M2C_FIELD(arg0, f32 *, 0)) + M2C_FIELD(arg0, f32 *, 0x30);
    *arg2 = (farg1 * M2C_FIELD(arg0, f32 *, 0x14)) + M2C_FIELD(arg0, f32 *, 0x34);
}

void fn_8030A840(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0x30)) / M2C_FIELD(arg0, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(arg0, f32 *, 0x34)) / M2C_FIELD(arg0, f32 *, 0x14));
}

void fn_8030A874(void *arg0, f32 *arg1, f32 *arg2, f32 farg0, f32 farg1) {
    *arg1 = (farg0 - M2C_FIELD(arg0, f32 *, 0x30)) / M2C_FIELD(arg0, f32 *, 0);
    *arg2 = (farg1 - M2C_FIELD(arg0, f32 *, 0x34)) / M2C_FIELD(arg0, f32 *, 0x14);
}

void fn_8030A8A0(void *arg0, f32 *arg1, f32 *arg2, f32 farg0, f32 farg1) {
    *arg1 = farg0 * M2C_FIELD(arg0, f32 *, 0);
    *arg2 = farg1 * M2C_FIELD(arg0, f32 *, 0x14);
}

void fn_8030A8BC(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x14));
}

void fn_8030A8E0(s32 a, f32 *b) {
    extern s32 fn_8030A908(s32, f32, f32);
    fn_8030A908(a, b[0], b[1]);
}

s32 fn_8030A950(u8 *self, f32 *rect) {
    f32 *bounds = (f32 *)(self + 0x60);
    s32 inside = 0;

    if (rect[0] >= bounds[0] && rect[2] <= bounds[2] && rect[1] >= bounds[1] && rect[3] <= bounds[3]) {
        inside = 1;
    }
    return inside ^ 1;
}

extern s32 lbl_80494EC0;
s32 fn_8030A9B4(void) {
    return lbl_80494EC0;
}

extern s32 lbl_80494EC4;
s32 fn_8030A9BC(void) {
    return lbl_80494EC4;
}

void fn_8030A9C4(void) {

}

void fn_8030A9C8(void) {

}

void fn_8030A9CC(void) {

}

s32 fn_8030A9D0(void) {
    return 0;
}

void fn_8030A9D8(void) {
    extern void fn_8030A638(s32, s32);
    fn_8030A638(1, 0xFFFF);
}

