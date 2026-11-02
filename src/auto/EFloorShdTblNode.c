/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x;
    f32 y;
} EFloorShdVec2;

extern s32 lbl_80496694;
extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);

static inline void *EFloorShd_PoolGet(void **pool) {
    void **p = (void **)*pool;
    if (p != NULL) {
        *pool = *p;
    }
    return p;
}

static inline void EFloorShd_PoolPut(void **pool, void *p) {
    if (p != NULL) {
        *(void **)p = *pool;
        *pool = p;
    }
}

static inline void *EFloorShd_Alloc(u32 size) {
    void *fn_802D197C(void *, u32, s32);
    void *fn_802DC3C0(void *, u32, s32, s32, s32);
    void *fn_802D0B3C();
    void *heap;
    void *p;

    heap = ((void *(*)())fn_802D0AB8)();
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)())fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

static inline void EFloorShd_InitList(s32 *list) {
    list[1] = 0;
    list[0] = 0;
    list[2] = 1;
}
s32 fn_80052C50(void) {
    void fn_802D85A4(void *);
    void fn_802D8640(void *, s32);
    void fn_802D85FC(void *, s32);
    extern s32 lbl_8049664C;
    u8 buf[0x40];
    s32 ret;

    fn_802D85A4(buf);
    fn_802D8640(buf, 0x10);
    ret = lbl_8049664C;
    fn_802D85FC(buf, 2);
    return ret;
}

void fn_80052C9C(void) {
    extern s32 lbl_8049664C;
    lbl_8049664C = 0;
}

void fn_80052CA8(void) {
    extern s32 lbl_8049664C;
    lbl_8049664C = 1;
}

void fn_80052CB4(void) {
    void fn_8000AA2C();
    void fn_8000B13C(s32, void *, s32);
    void fn_80052CA8(void);
    extern u8 lbl_803C7648[];
    extern u8 lbl_803C7650[];
    extern u8 lbl_8041F94C[];
    u8 *p = lbl_8041F94C;
    fn_8000B13C(*(s32 *)(p + 0xD0), lbl_803C7648, 1);
    fn_8000AA2C(*(s32 *)(p + 0xD0), lbl_803C7650, 0, 0, 0);
    fn_80052CA8();
}

void fn_80052D18(void) {
    void fn_80052C9C(void);
    extern s32 lbl_80494F44;
    extern u8 *lbl_804961A4;
    u8 *obj;
    u8 *vt;

    lbl_80494F44 = 0;
    fn_80052C9C();
    obj = lbl_804961A4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), fn_80052CB4);
}

void *fn_80052D64(void *self, s32 count) {
    void *fn_802D1FC8(s32);
    extern const f32 lbl_803C765C[];
    extern u8 lbl_80496730;
    s32 i;
    s32 *p;
    s32 *head;
    s32 *prev;

    head = NULL;
    prev = NULL;
    for (i = 0; i < count; i++) {
        p = fn_802D1FC8(0x18);
        if (p != NULL) {
            p[0] = 1;
            p[1] = i;
            p[2] = (s32)&lbl_80496730;
            p[3] = (s32)&lbl_80496730;
            *(f32 *)&p[4] = lbl_803C765C[0];
            p[5] = 0;
            if (i == 0) {
                head = p;
            } else {
                prev[5] = (s32)p;
            }
            prev = p;
        }
    }
    return head;
}

void fn_80052E0C(void *self, void *p) {
    void fn_802D20E8(void *);
    void *next;

    if (p != NULL) {
        do {
            next = NULL;
            if (M2C_FIELD(p, void **, 0x14) != NULL) {
                next = M2C_FIELD(p, void **, 0x14);
            }
            fn_802D20E8(p);
            p = next;
        } while (p != NULL);
    }
}

void fn_80052E58(void *self, void *arg1, s32 arg2, s32 arg3) {
    void fn_80320680(void *, s32, f32, f32);
    void fn_803227C4(EFloorShdVec2 *, void *, s32, s32, s32, s32);
    extern f32 lbl_803C7660[];
    extern f32 lbl_803C7664[];
    EFloorShdVec2 a;
    EFloorShdVec2 b;

    M2C_FIELD(arg1, s32 *, 0x8) = arg2;
    M2C_FIELD(arg1, s32 *, 0xC) = arg3;
    fn_80320680(M2C_FIELD(self, void **, 0x19C), 1, lbl_803C7660[0], lbl_803C7664[0]);
    fn_803227C4(&a, M2C_FIELD(self, void **, 0x19C), M2C_FIELD(arg1, s32 *, 0x8), 1, 1, 0);
    fn_803227C4(&b, M2C_FIELD(self, void **, 0x19C), M2C_FIELD(arg1, s32 *, 0xC), 1, 1, 0);
    M2C_FIELD(arg1, f32 *, 0x10) = (a.x > b.x) ? a.x : b.x;
}

void fn_80052EFC(void) {

}

void fn_80052F00(void) {

}

void fn_80052F04(void) {

}

void fn_80052F08(void *self) {
    s32 fn_80049BFC(void *);
    void fn_803374C8(void *, s32);
    extern u8 lbl_8041F94C[];
    extern u8 lbl_8045B634[];

    if (M2C_FIELD(self, s32 *, 0x4C) == 0) {
        M2C_FIELD(self, s32 *, 0x4C) = 1;
        M2C_FIELD(self, s32 *, 0x19C) = 0;
        fn_803374C8(lbl_8045B634, fn_80049BFC(lbl_8041F94C));
    }
}

void fn_80052F5C(void) {

}

void fn_80052F60(void *self) {
    void *fn_800504B0(void *);

    M2C_FIELD(self, void **, 0x1B4) = fn_800504B0(EFloorShd_Alloc(0x420));
}

s32 fn_80053428(void *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x4C) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x50) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x58) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x5C) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x60) != 0)) {
        var_r9 = 1;
    }
    return var_r9;
}

void fn_80053474(s32 arg0) {
    s32 fn_80053198();
    M2C_UNK fn_800534B0(s32);
    if (fn_80053198() != 0) {
        fn_800534B0(arg0);
    }
}

void fn_80053948(void *arg0) {
    M2C_UNK fn_80053428();
    fn_80053428();
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
}

s32 fn_8005397C(void *self, void *p) {
    s32 n = 0;

    if (p == NULL) {
        return n;
    }
    do {
        if (M2C_FIELD(p, s32 *, 0x0) != 0) {
            n++;
        }
        p = M2C_FIELD(p, void **, 0x14);
    } while (p != NULL);
    return n;
}

void *fn_800539A8(void *self) {
    extern s32 lbl_80495810;
    extern s32 lbl_803F5EC4[];
    extern s32 lbl_803F5EAC[];
    void *fn_80056068(void *, s32);
    s32 idx = lbl_80495810;
    s32 target = lbl_803F5EAC[idx] + lbl_803F5EC4[idx];
    s32 found = 0;
    void *result = NULL;
    void *p = fn_80056068(self, idx);
    s32 i = 0;

    do {
        if (M2C_FIELD(p, s32 *, 0x0) != 0) {
            if (i == target) {
                result = p;
                found = 1;
            }
            i++;
        }
        p = M2C_FIELD(p, void **, 0x14);
    } while (p != NULL && !found);
    return result;
}

s32 fn_80053A38(void *self) {
    extern s32 lbl_80495810;
    extern s32 lbl_803F5EC4[];
    extern s32 lbl_803F5EAC[];
    void *fn_80056068(void *, s32);
    s32 idx = lbl_80495810;
    s32 target = lbl_803F5EAC[idx] + lbl_803F5EC4[idx];
    s32 result = 0;
    s32 found = 0;
    void *p = fn_80056068(self, idx);
    s32 i = 0;

    do {
        if (M2C_FIELD(p, s32 *, 0x0) != 0) {
            if (i == target) {
                result = M2C_FIELD(p, s32 *, 0x4);
                found = 1;
            }
            i++;
        }
        p = M2C_FIELD(p, void **, 0x14);
    } while (p != NULL && !found);
    return result;
}

f32 fn_80053AC8(void *self, void *p) {
    extern f32 lbl_803C7728[];
    extern f32 lbl_803C772C[];
    f32 max = lbl_803C7728[0];

    while (p != NULL) {
        if (M2C_FIELD(p, f32 *, 0x10) > max) {
            max = M2C_FIELD(p, f32 *, 0x10);
        }
        p = M2C_FIELD(p, void **, 0x14);
    }
    return max + lbl_803C772C[0];
}

void fn_80053DF8(void) {

}

void fn_80053DFC(void) {

}

void fn_80054B28(void) {

}

void fn_80054D08(void) {

}

void fn_800555D8(void *self, s32 arg1, s32 arg2, EFloorShdVec2 *pos, s32 arg4, s32 arg5, s32 arg6) {
    extern f32 lbl_803C7A4C[];
    extern f32 lbl_803C7A50[];
    void fn_8032314C(void *, s32, s32, EFloorShdVec2 *, s32, s32, s32, s32, f32, f32);
    void fn_80322ACC(void *, s32, s32, s32, EFloorShdVec2, s32, s32, s32, s32, s32, s32, s32);
    EFloorShdVec2 v;

    if (arg6 == 0) {
        fn_8032314C(M2C_FIELD(self, void **, 0x19C), arg1, arg2, pos, arg4, arg5, 0, 1, lbl_803C7A4C[0], lbl_803C7A50[0]);
    } else {
        v.y = pos->y;
        v.x = pos->x;
        fn_80322ACC(M2C_FIELD(self, void **, 0x19C), arg1, arg2, 1, v, arg4, arg5, 0, 0, 0, 0, 1);
    }
}

void fn_8005595C(void *self, void *arg1, s32 arg2, EFloorShdVec2 *pos, f32 arg4, f32 arg5) {
    extern u8 *lbl_80496650;
    void fn_80055668(void *, void *, void *, EFloorShdVec2 *, s32, f32, f32);
    void *r;
    EFloorShdVec2 tmp;

    r = (*(void *(**)(u8 *, s32))(*(u8 **)lbl_80496650 + 0x144))(lbl_80496650 + *(s16 *)(*(u8 **)lbl_80496650 + 0x140), arg2 + 1);
    tmp.x = pos->x;
    tmp.y = pos->y;
    fn_80055668(self, arg1, r, &tmp, 0, arg4, arg5);
}

void fn_800559F4(void) {
    extern s32 lbl_8041FC14[];
    extern s32 lbl_80434DB8[][3];
    s32 i;

    if (lbl_8041FC14[0] != 0) {
        for (i = 11; i >= 0; i--) {
            lbl_80434DB8[i][0] = 1;
        }
    }
}

void fn_80055E40(void *self, void *obj, void *out) {
    void fn_800F6FB4(void *, void *, s32);
    void *fn_800F7138(void *);
    void fn_800F22F0(void *, void *);
    struct {
        u8 hdr[8];
        char str[0x40];
    } buf;
    void *s;
    void *vt;

    if (obj != NULL) {
        s = &buf;
        fn_800F6FB4(s, ((char *)s) + 8, 0x20);
        vt = M2C_FIELD(obj, void **, 0);
        M2C_FIELD(vt, void (**)(void *, void *), 0x74)((char *)obj + M2C_FIELD(vt, s16 *, 0x70), s);
        fn_800F22F0(out, fn_800F7138(s));
    }
}

void *fn_80056068(void *self, s32 unused) {
    extern s32 lbl_80495810;
    void *p = M2C_FIELD(self, void **, 0x138);

    switch (lbl_80495810) {
    case 0:
        break;
    case 1:
        p = M2C_FIELD(self, void **, 0x13C);
        break;
    case 2:
        p = M2C_FIELD(self, void **, 0x140);
        break;
    case 3:
        p = M2C_FIELD(self, void **, 0x144);
        break;
    case 4:
        p = M2C_FIELD(self, void **, 0x148);
        break;
    case 5:
        p = M2C_FIELD(self, void **, 0x14C);
        break;
    }
    return p;
}

void fn_80056754(void *arg0, s32 flags) {
    extern u8 lbl_804081E0[];
    void fn_800536AC(void *);
    M2C_UNK fn_802D20E8(s32);
    void fn_803997AC(void *, u32);
    void fn_80307364(void *, s32);
    void fn_80056888(void *);
    s32 *v;
    s32 *self = arg0;
    self[0x11] = (s32)lbl_804081E0;
    fn_800536AC(self);
    v = self + 0x5A;
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8(v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    fn_80307364(self, 0);
    if (flags & 1) {
        fn_80056888(self);
    }
}

void *fn_800567DC(u32 size) {
    void *fn_802D197C(void *, u32, s32);
    void *fn_802DC3C0(void *, u32, s32, s32, s32);
    void *fn_802D0B3C();
    void *heap;
    void *p;

    heap = fn_802D0AB8((void *)size);
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)())fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void fn_80056888(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_800568BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}

s32 fn_800568C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

s32 fn_800568D0(void) {
    return lbl_80496694;
}

s32 *fn_800568D8(s32 *arg0) {
    EFloorShd_InitList(arg0 + 1);
    arg0[0] = 0;
    return arg0;
}

void fn_800568FC(s32 arg0, s32 arg1) {
    M2C_UNK fn_802CB8D4(s32);
    M2C_UNK fn_802D20E8(s32);
    fn_802CB8D4(arg0 + 4);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_80056940(s32 *arg0) {
    M2C_UNK fn_802CB8D4(s32);
    void fn_8031EA2C(s32);
    fn_802CB8D4((s32)(arg0 + 1));
    if (arg0[0] != 0) {
        fn_8031EA2C(arg0[0]);
        arg0[0] = 0;
    }
}

void fn_80056A58(s32 idx, void *arg1) {
    typedef struct { u8 b[16]; } Ent;
    typedef struct { u8 idx; u8 pad[3]; } Key;
    extern Ent lbl_804226C8[];
    extern void fn_802CB69C(void *, s32);
    extern s32 lbl_804940CC;
    Key k = *(Key *)arg1;

    fn_802CB69C(&lbl_804226C8[idx], *(s32 *)&k);
    lbl_804940CC++;
}

void fn_80056AA0(void *arg0) {
    typedef struct { u8 b[12]; } Ent;
    typedef struct { u8 idx; u8 pad[3]; } Key;
    extern Ent lbl_80422AC4[];
    extern void fn_802CB69C(void *, s32);
    Key k = *(Key *)arg0;

    fn_802CB69C(&lbl_80422AC4[((Key *)arg0)->idx], *(s32 *)&k);
}

s32 fn_80056AE0(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 1:
        return 1;
    case 3:
        return 3;
    case 4:
        return 2;
    case 2:
        return 4;
    default:
        return 0;
    }
}

s32 fn_800574F0(void *list) {
    typedef struct { void *a; u8 *cur; s32 b; s32 c; } It;
    typedef struct { s16 delta; s16 idx; u8 *(*fn)(void *); } VtEnt;
    extern void fn_80151048(It *, void *, s32);
    extern void fn_80151110(It *);
    It iter;
    register It *it asm("r30") = &iter;
    register It *p asm("r31");
    VtEnt *e;
    u8 *cur;

    fn_80151048(it, list, 0);
    cur = it->cur;
    p = it;
    if (cur != NULL) {
        do {
            e = (VtEnt *)(*(u8 **)(p->cur + 4) + 0x2D0);
            if (*(u16 *)(e->fn(p->cur + e->delta) + 0xB6) & 6) {
                return 1;
            }
            fn_80151110(p);
        } while (p->cur != NULL);
    }
    return 0;
}

void fn_80058514(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80058534(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80058574(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80058900(void *arg0, void *arg1) {
    void *temp_r9;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x114);
    if (var_r31 != NULL) {
        do {
            temp_r9 = M2C_FIELD(arg1, void **, 0x68);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0xB4)(arg1 + M2C_FIELD(temp_r9, s16 *, 0xB0), M2C_FIELD(var_r31, s32 *, 8));
            var_r31 = M2C_FIELD(var_r31, void **, 0);
        } while (var_r31 != NULL);
    }
}

void fn_8005895C(s32 arg0, s32 arg1) {
    M2C_UNK fn_802E34F0(s32, s32);
    fn_802E34F0(arg1, arg0 + 0x120);
}

void *fn_80058988(u32 size) {
    extern void **lbl_804940C0;
    extern s32 lbl_804940C4;
    void **pool = lbl_804940C0;
    void **p;

    if (pool != NULL) {
        p = (void **)*pool;
        if (p == NULL) {
            p = NULL;
        } else {
            *pool = *p;
        }
        if (p != NULL) {
            lbl_804940C4++;
        }
        return p;
    }
    return NULL;
}

void fn_800589C4(void *p) {
    extern void **lbl_804940C0;
    extern s32 lbl_804940C4;

    if (lbl_804940C0 != NULL) {
        if (p != NULL) {
            lbl_804940C4--;
        }
        EFloorShd_PoolPut(lbl_804940C0, p);
    }
}

void fn_800589F8(void) {
    extern void *lbl_804226B8[];
    extern void *lbl_804940C0;
    extern void fn_802CD53C(void *);
    extern void fn_802C6710(void *, s32);
    extern void *fn_802D0C44(void);
    void **list = lbl_804226B8;
    void *node = list[0];
    void *pool;
    char *obj;
    int more;

    for (;;) {
        more = 1;
        if (node == NULL) {
            more = 0;
        }
        if (!more) {
            break;
        }
        obj = M2C_FIELD(node, char **, 0x1c);
        node = M2C_FIELD(node, void **, 0x10);
        (*(void (**)(void *))(*(char **)obj + 0xC))(obj + *(s16 *)(*(char **)obj + 8));
    }
    fn_802CD53C(list);
    pool = lbl_804940C0;
    if (pool != NULL) {
        fn_802C6710(pool, 0);
        fn_802D1A00(fn_802D0C44(), pool);
        lbl_804940C0 = NULL;
    }
}

void fn_80058A94(s32 arg0, s32 arg1, u16 *arg2, u16 *arg3) {
    void *fn_80190AA4(s32, u32);
    extern s32 lbl_80496654;
    void *e;
    register u32 id asm("r4");

    *arg3 = arg0;
    *arg2 = arg0;
    id = arg0;
    if (lbl_80496654 != 0) {
        id &= 0xFFFF;
        if (id <= 0xFFFAU) {
            e = fn_80190AA4(lbl_80496654, id);
            if (e != NULL) {
                *arg3 = M2C_FIELD(e, u16 *, 2);
            }
        }
    }
}

s32 fn_80058AFC(s32 arg0) {
    s32 fn_800418C8(s32);
    extern s32 lbl_804940D0;
    s32 r;

    if (arg0 != 0) {
        r = fn_800418C8(arg0);
    } else {
        r = lbl_804940D0;
    }
    return r;
}

void fn_80059100(void *arg0) {
    void fn_80059458(void *, s32);
    void fn_80325C50(void *, void *);
    void **p;
    void **next;

    if ((*(s32 (**)(void *))(*(u8 **)arg0 + 0xC4))((u8 *)arg0 + *(s16 *)(*(u8 **)arg0 + 0xC0)) != 0) {
        fn_80325C50((*(void *(**)(void *))(*(u8 **)arg0 + 0xC4))((u8 *)arg0 + *(s16 *)(*(u8 **)arg0 + 0xC0)), arg0);
    }
    p = M2C_FIELD(arg0, void ***, 0x114);
    while (p != NULL) {
        next = (void **)*p;
        if (p != NULL) {
            fn_80059458(p, 3);
        }
        p = next;
    }
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C) = 0;
}

s32 fn_800591A0(void) {
    s32 fn_80059220();
    if (fn_80059220() == 0) {
        return 0;
    }
    return 1;
}

s32 fn_800591D0(void *arg0, s32 arg1) {
    s32 i;

    if (arg1 == M2C_FIELD(arg0, s32 *, 0x8C)) {
        return 1;
    }
    for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x90); i++) {
        if (arg1 == ((u16 *)((u8 *)arg0 + 0x94))[i]) {
            return 1;
        }
    }
    return 0;
}

s32 fn_80059220();
void fn_80059458(void *, s32);
void fn_80325C50(void *, void *);
void fn_8031EAB8(void *);
void *fn_80059408(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void fn_8031EAB8(void *);
    M2C_FIELD(arg0, void **, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    M2C_FIELD(arg0, s32 *, 0) = arg5;
    fn_8031EAB8(arg1);
    return arg0;
}

void fn_80059458(void *arg0, s32 arg1) {
    void fn_8031EA2C(s32);
    M2C_UNK fn_802D20E8(s32);
    extern u8 *lbl_80495050;
    s32 i;

    for (i = 0; i < M2C_FIELD(arg0, s32 *, 0xC); i++) {
        u8 *vt = *(u8 **)lbl_80495050;
        (*(void (**)(void *, s32))(vt + 0x114))(lbl_80495050 + *(s16 *)(vt + 0x110), *(s32 *)(M2C_FIELD(arg0, u8 **, 0x10) + i * 0x10 + 8));
    }
    {
        u8 *vt = *(u8 **)lbl_80495050;
        (*(void (**)(void *, s32))(vt + 0x94))(lbl_80495050 + *(s16 *)(vt + 0x90), M2C_FIELD(arg0, s32 *, 8));
    }
    fn_8031EA2C(M2C_FIELD(arg0, s32 *, 0x14));
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void *fn_800596B8(u32 size, void *p);
void *fn_800596B8(u32 size, void *p) {
    return p;
}

void *fn_800596C0(void) {
    extern void *fn_80058988(u32);
    extern void *fn_800585B4(void *, s32);
    return fn_800585B4(fn_80058988(0x138), 0);
}

void fn_800596EC(void *self) {
    extern void *fn_800585B4(void *, s32);
    fn_800585B4(self, 0);
}

void fn_80059710(void *self) {
    extern void fn_80059830(void *, s32);
    fn_80059830(self, 2);
}

void fn_80059734(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491DF4[];
void *fn_80059774(void) {
    return lbl_80491DF4;
}

extern s32 lbl_80491E00[];
s32 fn_80059780(void) {
    return lbl_80491E00[0];
}

extern s32 lbl_80491E04[];
s32 fn_8005978C(void) {
    return lbl_80491E04[0];
}

extern u16 lbl_80491E08[];
u16 fn_80059798(void) {
    return lbl_80491E08[0];
}

void *fn_800597A4(void) {
    return lbl_80491DF4;
}

extern u16 lbl_80491E0A[];
u16 fn_800597B0(void) {
    return lbl_80491E0A[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void *fn_800596C0(void);
extern void fn_800596EC(void *);
extern void fn_80059710(void *);
extern u8 lbl_803C7B8C[];
extern u8 lbl_80491E1C[];
void fn_800597BC(s32 arg0) {
    fn_802D6A90(lbl_80491DF4, fn_800596C0, fn_800596EC, fn_80059710, arg0, lbl_803C7B8C, lbl_80491E1C);
}

void fn_80059810(void) {
    fn_802D2430();
}

void fn_80059830(void **self, s32 flags) {
    extern u8 lbl_80408268[];
    extern void fn_80059100(void *);
    extern void fn_802F05AC(void *, s32);
    extern void fn_800589C4(void *);
    *self = lbl_80408268;
    fn_80059100(self);
    fn_802F05AC(self, 0);
    if (flags & 1) {
        fn_800589C4(self);
    }
}

void fn_80059888(void) {

}

u16 fn_8005988C(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x8E);
}

u16 fn_80059894(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x92);
}

u16 fn_8005989C(void *arg0, u32 arg1) {
    struct {
        u8 pad[0x90];
        u32 count;
        u16 ids[1];
    } *s = arg0;
    u16 r;

    if (arg1 < s->count) {
        r = s->ids[arg1];
    } else {
        r = 0;
    }
    return r;
}

void fn_800598C0(void) {
    void fn_8005950C(s32, s32);
    fn_8005950C(1, 0xFFFF);
}

void fn_800598EC(void) {
    void fn_8005950C(s32, s32);
    fn_8005950C(0, 0xFFFF);
}

