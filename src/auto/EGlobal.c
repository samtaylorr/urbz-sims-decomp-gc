/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct EGlobalHandle {
    s32 value;
} EGlobalHandle;

extern void *fn_802D0AB8();
extern void *fn_802D0B3C(void);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);

static inline void *EGlobal_AllocAligned(u32 size) {
    void *heap = fn_802D0AB8();
    void *p = fn_802D197C(heap, size, 0x10);

    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void fn_80049790(void *self, s32 flags) {
    extern char lbl_80407FC0[];
    void fn_802D20E8(void *);

    M2C_FIELD(self, void **, 0x3A4) = lbl_80407FC0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void *fn_80049AC4(void) {
    void *fn_80248488(void *, s32, u32);
    void *fn_8008D5C0(void *);
    void *r = EGlobal_AllocAligned(0x500);

    fn_80248488(r, 0, 0x4F8);
    return fn_8008D5C0(r);
}

s32 fn_80049B6C(void *self) {
    void *fn_801DB3C8(void *, s32);
    extern char lbl_803C6958[];

    if (M2C_FIELD(self, void **, 0x3A0) == NULL) {
        M2C_FIELD(self, void **, 0x3A0) = fn_801DB3C8(lbl_803C6958, 0x69);
    }
    if (M2C_FIELD(self, void **, 0x3A0) != NULL && M2C_FIELD(M2C_FIELD(self, char **, 0x3A0), s32 *, 8) == 1) {
        return 1;
    }
    return 0;
}

s32 fn_80049BD4(void *self, s32 which) {
    if (which == 0) {
        return M2C_FIELD(self, s32 *, 0x338);
    }
    if (which == 1) {
        return M2C_FIELD(self, s32 *, 0x33C);
    }
    return 1;
}

extern void *fn_802D0B3C(void);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DBBCC(void *, u32, s32);
extern void *fn_802D0AB8();
void *fn_8032421C(void *);

static inline void *EGlobal_Alloc(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DBBCC(fn_802D0B3C(), size, 0);
        }
    }
    return p;
}

s32 fn_80049BFC(void) {
    return 0x67F664FB;
}

void fn_8004A01C(void *arg0) {
    extern void *lbl_8049668C;
    extern void *fn_802D1FC8(s32);
    void *fn_800177F8(void *);
    void fn_800178C8(void *, void *);
    void *p;

    lbl_8049668C = (u8 *)arg0 + 0x1A4;
    p = fn_800177F8(fn_802D1FC8(0x10C));
    M2C_FIELD(arg0, void **, 0x15C) = p;
    fn_800178C8(p, arg0);
}

void fn_8004AEA8(void *arg0, void *arg1) {
    s32 fn_802D0F64(void *, void *);
    void fn_802D1A00(void *, void *);

    if (M2C_FIELD(arg0, void **, 0x190) != NULL && M2C_FIELD(arg0, void **, 0x18C) != NULL
        && fn_802D0F64(M2C_FIELD(arg0, void **, 0x190), arg1)) {
        fn_802D1A00(M2C_FIELD(arg0, void **, 0x190), arg1);
    } else if (fn_802D0F64(fn_802D0B3C(), arg1)) {
        fn_802D1A00(fn_802D0B3C(), arg1);
    } else {
        fn_802D0F64(fn_802D0AB8(), arg1);
        fn_802D1A00(fn_802D0AB8(), arg1);
    }
}

void fn_8004AF3C(void) {

}

void fn_8004AF40(void) {

}

void fn_8004B828(void *arg0, s32 arg1) {
    typedef struct { f32 x, y; } Vec2;
    extern void fn_80028F80(void *, s32);
    extern void *fn_802D1FC8(s32);
    extern void *fn_80028C04(void *, void *, s32, s32, s32, s32, s32, s32);
    extern struct { u8 pad[0xB4]; Vec2 v; } lbl_8041F94C;
    Vec2 v;
    void *p;

    if (M2C_FIELD(arg0, void **, 0xEC) != NULL) {
        fn_80028F80(M2C_FIELD(arg0, void **, 0xEC), 3);
    }
    p = fn_802D1FC8(0x158);
    v.x = lbl_8041F94C.v.x;
    v.y = lbl_8041F94C.v.y;
    M2C_FIELD(arg0, void **, 0xEC) = fn_80028C04(p, &v, arg1, 0, 1, 1, 1, 0);
}

void fn_8004B8B0(void *arg0) {
    extern void fn_80028F80(void *, s32);

    if (M2C_FIELD(arg0, void **, 0xEC) != NULL) {
        fn_80028F80(M2C_FIELD(arg0, void **, 0xEC), 3);
        M2C_FIELD(arg0, void **, 0xEC) = NULL;
    }
}

void fn_8004B8F4(void *arg0, s32 arg1) {
    char *obj;
    char *vt;

    if (M2C_FIELD(arg0, s32 *, 0xF4) != 0) {
        obj = M2C_FIELD(arg0, char **, 0xF4) + 0x18;
        if (obj != NULL && arg1 != 0) {
            vt = M2C_FIELD(obj, char **, 0x9C);
            ((void (*)(void *))M2C_FIELD(vt, void **, 0x14))(obj + M2C_FIELD(vt, s16 *, 0x10));
        }
    }
}

s32 fn_8004B944(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xF4);
    if (temp_r3 == 0) {
        return 0;
    }
    return temp_r3 + 0x18;
}

void fn_8004B95C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xF4) = arg1;
}

s32 fn_8004B964(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xF4);
}

void fn_8004B96C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x114) = arg1;
}

s32 fn_8004B974(void *arg0, s32 arg1, f32 *arg2) {
    extern s32 fn_802E4030(void *, s32, f32 *);
    extern f32 lbl_803C6C20[];
    extern f32 lbl_803C6C24[];
    void *vt;
    void *obj;
    s32 ret;

    vt = M2C_FIELD(arg0, void **, 0x3A4);
    obj = ((void *(*)(void *))M2C_FIELD(vt, void **, 0xE4))((char *)arg0 + M2C_FIELD(vt, s16 *, 0xE0));
    ret = 0;
    if (obj != NULL) {
        ret = fn_802E4030(obj, arg1, arg2);
        if (ret == 0) {
            f32 a = lbl_803C6C20[0];
            f32 b = lbl_803C6C24[0];
            arg2[0] = a;
            arg2[1] = b;
        }
    } else {
        f32 a = lbl_803C6C20[0];
        arg2[1] = a;
        arg2[0] = a;
    }
    return ret;
}

void fn_8004BA08(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_802E4420(s32, s32, s32);
    void *vt;

    vt = M2C_FIELD(arg0, void **, 0x3A4);
    if (((s32 (*)(void *))M2C_FIELD(vt, void **, 0xE4))((char *)arg0 + M2C_FIELD(vt, s16 *, 0xE0)) != 0) {
        vt = M2C_FIELD(arg0, void **, 0x3A4);
        fn_802E4420(((s32 (*)(void *))M2C_FIELD(vt, void **, 0xE4))((char *)arg0 + M2C_FIELD(vt, s16 *, 0xE0)), arg1, arg2);
    }
}

EGlobalHandle fn_8004BA7C(void) {
    extern s32 lbl_80495804;
    EGlobalHandle h;
    h.value = lbl_80495804;
    return h;
}

EGlobalHandle fn_8004BA8C(void *arg1, s32 arg2) {
    s32 fn_8032D5C8(s32, void *);
    EGlobalHandle *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803C6C28[];
    extern s32 lbl_8041FA68[];
    extern EGlobalHandle lbl_80495804;
    EGlobalHandle *p;
    s32 key;

    if (arg2 != 0) {
        key = fn_8032D5C8(M2C_FIELD(arg1, s32 *, 0x11C), lbl_803C6C28);
        p = fn_8032D6E8(lbl_8041FA68[0], key, arg2);
        if (p != NULL) {
            return *p;
        }
    }
    return lbl_80495804;
}

EGlobalHandle fn_8004BAFC(void *arg1, s32 arg2) {
    s32 fn_8032D5C8(s32, void *);
    s32 *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803C6C28[];
    extern s32 lbl_8041FA68[];
    extern EGlobalHandle lbl_80495804;
    s32 *p;
    s32 key;

    if (arg2 != 0) {
        key = fn_8032D5C8(M2C_FIELD(arg1, s32 *, 0x11C), lbl_803C6C28);
        p = fn_8032D6E8(lbl_8041FA68[0], key, arg2);
        if (p != NULL) {
            return *(EGlobalHandle *)(p + 3);
        }
    }
    return lbl_80495804;
}

EGlobalHandle fn_8004BB6C(void) {
    extern s32 lbl_80495804;
    EGlobalHandle h;
    h.value = lbl_80495804;
    return h;
}

s32 fn_8004BB7C(void *arg1, s32 arg2) {
    s32 fn_8032D5C8(s32, void *);
    s32 *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803C6C28[];
    extern s32 lbl_8041FA68[];
    s32 *p;
    s32 key;

    if (arg2 != 0) {
        key = fn_8032D5C8(M2C_FIELD(arg1, s32 *, 0x11C), lbl_803C6C28);
        p = fn_8032D6E8(lbl_8041FA68[0], key, arg2);
        if (p != NULL) {
            return p[9];
        }
    }
    return 0;
}

s32 fn_8004BBE0(void *arg1, s32 arg2) {
    s32 fn_8032D5C8(s32, void *);
    s32 *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803C6C28[];
    extern s32 lbl_8041FA68[];
    s32 *p;
    s32 key;

    if (arg2 != 0) {
        key = fn_8032D5C8(M2C_FIELD(arg1, s32 *, 0x11C), lbl_803C6C28);
        p = fn_8032D6E8(lbl_8041FA68[0], key, arg2);
        if (p != NULL) {
            return p[10];
        }
    }
    return 0;
}

EGlobalHandle fn_8004BC44(void *arg1, s32 arg2) {
    s32 fn_8032D5C8(s32, void *);
    EGlobalHandle *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803C6C34[];
    extern s32 lbl_8041FA68[];
    extern EGlobalHandle lbl_80495804;
    EGlobalHandle *p;
    s32 key;

    if (arg2 != 0) {
        key = fn_8032D5C8(M2C_FIELD(arg1, s32 *, 0x11C), lbl_803C6C34);
        p = fn_8032D6E8(lbl_8041FA68[0], key, arg2);
        if (p != NULL) {
            return *p;
        }
    }
    return lbl_80495804;
}

EGlobalHandle fn_8004BD48(void *arg1, s32 arg2) {
    s32 fn_8032D5C8(s32, void *);
    EGlobalHandle *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803C6C6C[];
    extern s32 lbl_8041FA68[];
    extern EGlobalHandle lbl_80495804;
    EGlobalHandle *p;
    s32 key;

    if (arg2 != 0) {
        key = fn_8032D5C8(M2C_FIELD(arg1, s32 *, 0x11C), lbl_803C6C6C);
        p = fn_8032D6E8(lbl_8041FA68[0], key, arg2);
        if (p != NULL) {
            return *p;
        }
    }
    return lbl_80495804;
}

void *fn_8004BEDC(void *arg1, u32 arg2) {
    char *fn_8032D5C8(s32, void *);
    extern u8 lbl_803C6C9C[];
    char *r;
    char *t;
    u32 *e;
    u32 n;
    u32 i;

    r = fn_8032D5C8(*(s32 *)((char *)arg1 + 0x11C), lbl_803C6C9C);
    t = r ? r : NULL;
    if (t != NULL) {
        n = *(u32 *)(t + 0xC);
        e = *(u32 **)(t + 0x4);
        for (i = 0; i < n; i++) {
            if (*e == arg2) {
                return e;
            }
            e += 3;
        }
    }
    return NULL;
}

void *fn_8004BF5C(void *arg1, u32 arg2) {
    char *fn_8032D5C8(s32, void *);
    extern u8 lbl_803C6CA8[];
    char *r;
    char *t;
    u32 *best = NULL;
    u32 *e;
    char *arr;
    u32 n;
    u32 i;

    r = fn_8032D5C8(*(s32 *)((char *)arg1 + 0x11C), lbl_803C6CA8);
    t = r ? r : NULL;
    if (t != NULL) {
        n = *(u32 *)(t + 0xC);
        arr = *(char **)(t + 0x4);
        for (i = 0; i < n; i++) {
            if (best == NULL) {
                best = (u32 *)(arr + i * 0x1C);
            }
            e = (u32 *)(arr + i * 0x1C);
            if (*e == arg2) {
                return e;
            }
            if (*e > arg2) {
                break;
            }
            best = e;
        }
        return best;
    }
    return NULL;
}

EGlobalHandle fn_8004C168(void *arg1, s32 arg2) {
    s32 fn_8032D5C8(s32, void *);
    EGlobalHandle *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803C6D20[];
    extern s32 lbl_8041FA68[];
    extern EGlobalHandle lbl_80495804;
    EGlobalHandle *p;
    s32 key;

    if (arg2 != 0) {
        key = fn_8032D5C8(M2C_FIELD(arg1, s32 *, 0x11C), lbl_803C6D20);
        p = fn_8032D6E8(lbl_8041FA68[0], key, arg2);
        if (p != NULL) {
            return *p;
        }
    }
    return lbl_80495804;
}

void fn_8004C614(void) {

}

s32 fn_8004C78C(void *arg0, s32 arg1) {
    s32 *arr;
    s32 count;
    s32 i;

    arr = *M2C_FIELD(arg0, s32 **, 0xFC);
    count = 0;
    if (arr != NULL) {
        count = arr[-1];
    }
    for (i = 0; i < count; i++) {
        if (*arr++ == arg1) {
            return i;
        }
    }
    return 0;
}

s32 fn_8004C7D4(void *arg0, s32 arg1) {
    s32 *arr;
    s32 count;
    s32 i;

    arr = *M2C_FIELD(arg0, s32 **, 0x100);
    count = 0;
    if (arr != NULL) {
        count = arr[-1];
    }
    for (i = 0; i < count; i++) {
        if (*arr++ == arg1) {
            return i;
        }
    }
    return 0;
}

s32 fn_8004C81C(void *arg0, s32 arg1) {
    s32 *arr;
    s32 count;
    s32 i;

    arr = *M2C_FIELD(arg0, s32 **, 0x104);
    count = 0;
    if (arr != NULL) {
        count = arr[-1];
    }
    for (i = 0; i < count; i++) {
        if (*arr++ == arg1) {
            return i;
        }
    }
    return 0;
}

void fn_8004C864(void *arg0) {
    M2C_FIELD(arg0, void **, 0xD4) = fn_8032421C(EGlobal_Alloc(0x4D140));
}

void fn_8004C8F8(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0xD4);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0);
        M2C_FIELD(temp_r9, void (**)(void *, s32), 0x34)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x30), 3);
    }
    M2C_FIELD(arg0, void **, 0xD4) = NULL;
}

s32 fn_8004C950(void *arg0, s32 i) {
    return ((struct { u8 pad[0xD8]; s32 a[1]; } *)arg0)->a[i];
}

s32 fn_8004C960(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 == 0) {
        return arg2 == M2C_FIELD(arg0, s32 *, 0xDC);
    }
    return arg2 == M2C_FIELD(arg0, s32 *, 0xD8);
}

s32 fn_8004CB8C(void *arg0, void *arg1, void *arg2, s32 arg3) {
    s32 i;
    s32 count;

    if (arg3 == 0) {
        return -1;
    }
    {
        char *vt = *(char **)arg2;
        count = M2C_FIELD(vt, s32 (**)(void *), 0x2C)((char *)arg2 + M2C_FIELD(vt, s16 *, 0x28));
    }
    for (i = 0; i < count; i++) {
        char *vt = *(char **)arg2;
        char *vt1 = *(char **)arg1 + 0xE8;
        char *o = (char *)arg1 + *(s16 *)vt1;
        s32 *item = M2C_FIELD(vt, s32 *(**)(void *, s32), 0x34)((char *)arg2 + M2C_FIELD(vt, s16 *, 0x30), i);
        if ((*(s32 (**)(void *, s32))(vt1 + 4))(o, *item) == arg3) {
            return i;
        }
    }
    return -1;
}

void fn_8004D3A8(void *arg0) {
    char *obj = M2C_FIELD(arg0, char **, 0xF8);
    if (obj != NULL) {
        char *vt = M2C_FIELD(obj, char **, 0x44);
        (*(void (**)(void *))(vt + 0x3C))(obj + *(s16 *)(vt + 0x38));
    }
}

void fn_8004D3E8(void) {

}

void fn_8004D3EC(void) {

}

void fn_8004D8E0(void *arg0) {
    M2C_UNK fn_8004174C(s32);
    fn_8004174C(M2C_FIELD(arg0, s32 *, 0x150));
}

void fn_8004D904(void *self) {
    void fn_800417FC(void *);

    if (M2C_FIELD(self, void **, 0x150) != NULL) {
        fn_800417FC(M2C_FIELD(self, void **, 0x150));
    }
}

void fn_8004D930(void *arg0) {
    M2C_UNK fn_800416F4(s32);
    fn_800416F4(M2C_FIELD(arg0, s32 *, 0x150));
}

void fn_8004D954(void *self, void *arg1) {
    extern char lbl_803C6D58[];
    char *fn_8032D5C8(void *, char *);
    void fn_8039BA50(void *, void *, void *);
    char *r;

    r = fn_8032D5C8(M2C_FIELD(self, void **, 0x120), lbl_803C6D58);
    fn_8039BA50(M2C_FIELD(r, char **, 0x4), M2C_FIELD(r, char **, 0x4) + M2C_FIELD(r, s32 *, 0xC) * 0xC, arg1);
}

void *fn_8004D9A4(void *self) {
    extern char lbl_803C6D6C[];
    char *fn_8032D5C8(void *, char *);
    char *s = lbl_803C6D6C;
    void *t = M2C_FIELD(self, void **, 0x120);

    return M2C_FIELD(fn_8032D5C8(t, s), void **, 0x4);
}

extern u8 lbl_8041ED64[];
void fn_8001E370(u8 *arg);
void fn_8004D9D4(void) {
    fn_8001E370(lbl_8041ED64);
}

void fn_8004D9FC(void *self, s32 arg1) {
    extern u8 lbl_8041ED64[];
    void fn_8001E408(void *, s32, s32);

    fn_8001E408(lbl_8041ED64, arg1, 1);
}

s32 fn_8004DA28(void *arg0, void *arg1) {
    extern char *lbl_80496668;
    s32 fn_8016CCE0(void *);
    void fn_8003E274(void *);
    char *g = lbl_80496668;
    char *vt = *(char **)g + 0xE8;
    char *o = g + *(s16 *)vt;
    void ***r;

    r = (*(void ***(**)(void *, s32))(vt + 4))(o, fn_8016CCE0(arg1));
    if (r != NULL) {
        void *p = M2C_FIELD(**r, void **, 0x18);
        if (p != NULL) {
            fn_8003E274(p);
            return 1;
        }
    }
    return 0;
}

void fn_8004DAA8(char **self) {
    if (({
            char *o = *self;
            char *v = *(char **)(o + 0x1C);
            (*(s32 (**)(char *))(v + 0x8C))(o + *(s16 *)(v + 0x88));
        }) != 0) {
        char *r = ({
            char *o = *self;
            char *v = *(char **)(o + 0x1C);
            (*(char *(**)(char *))(v + 0x8C))(o + *(s16 *)(v + 0x88));
        }) + 0x300;
        char *vt = *(char **)r;
        (*(void (**)(char *))(vt + 0x14))(r + *(s16 *)(vt + 0x10));
    }
}

s32 fn_8004DB2C(void **arg0) {
    void *obj;
    void *vt;

    if (arg0 != NULL) {
        obj = *arg0;
        vt = M2C_FIELD(obj, void **, 0x1C);
        return ((s32 (*)(void *))M2C_FIELD(vt, void **, 0x8C))((char *)obj + M2C_FIELD(vt, s16 *, 0x88));
    }
    return 0;
}

void fn_8004DC58(void *arg0) {
    void *vt;

    vt = M2C_FIELD(arg0, void **, 0x3A4);
    ((void (*)(void *))M2C_FIELD(vt, void **, 0xDC))((char *)arg0 + M2C_FIELD(vt, s16 *, 0xD8));
}

void fn_8004DC8C(void *arg0) {
    void *vt;

    vt = M2C_FIELD(arg0, void **, 0x3A4);
    ((void (*)(void *))M2C_FIELD(vt, void **, 0xDC))((char *)arg0 + M2C_FIELD(vt, s16 *, 0xD8));
}

void fn_8004DCC0(void *arg0) {
    M2C_UNK fn_80064EC4(s32);
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xEC);
    if (temp_r9 != NULL) {
        fn_80064EC4(M2C_FIELD(temp_r9, s32 *, 4));
    }
}

void fn_8004DCF0(void *arg0) {
    M2C_UNK fn_8002AF18(void *);
    M2C_UNK fn_80064EC4(s32);

    if (M2C_FIELD(arg0, void **, 0xEC) != NULL) {
        fn_8002AF18(M2C_FIELD(arg0, void **, 0xEC));
        fn_80064EC4(M2C_FIELD(M2C_FIELD(arg0, void **, 0xEC), s32 *, 4));
    }
}

void fn_8004DD34(void) {
    M2C_UNK fn_8002AECC(s32);
    M2C_UNK fn_800589F8(void);
    s32 fn_802D8F90(void *);
    extern u8 lbl_8041E1C8[];
    extern u8 lbl_8041F94C[];
    extern void **lbl_80495050;
    extern void **lbl_80496220;
    void **obj;
    void *vt;
    u8 *p;

    if (fn_802D8F90(lbl_8041E1C8) != 0) {
        obj = lbl_80495050;
        vt = *obj;
        ((void (*)(void *))M2C_FIELD(vt, void **, 0x44))((char *)obj + M2C_FIELD(vt, s16 *, 0x40));
        obj = lbl_80496220;
        vt = *obj;
        ((void (*)(void *))M2C_FIELD(vt, void **, 0x4C))((char *)obj + M2C_FIELD(vt, s16 *, 0x48));
    }
    obj = lbl_80495050;
    vt = *obj;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x44))((char *)obj + M2C_FIELD(vt, s16 *, 0x40));
    p = lbl_8041F94C;
    if (M2C_FIELD(p, s32 *, 0xEC) != 0 && M2C_FIELD(p, s32 *, 0xAC) == 1) {
        fn_8002AECC(M2C_FIELD(p, s32 *, 0xEC));
        fn_800589F8();
    }
}

void fn_8004DDE0(char *self) {
    char *vt = *(char **)(self + 0x3A4);
    (*(void (**)(char *, s32, s32))(vt + 0x1C))(self + *(s16 *)(vt + 0x18), 0, 0x2B);
}

void fn_8004DE1C(char *self, s32 idx, s32 a, s32 b, s32 c, s32 d) {
    if (c != 0) {
        char *obj = ((struct { u8 pad[0x148]; char *a[1]; } *)self)->a[idx];
        char *vt = *(char **)(obj + 0x44);
        (*(void (**)(char *, s32))(vt + 0x94))(obj + *(s16 *)(vt + 0x90), c);
    } else if (d != 0) {
        char *obj = ((struct { u8 pad[0x148]; char *a[1]; } *)self)->a[idx];
        char *vt = *(char **)(obj + 0x44);
        (*(void (**)(char *, s32))(vt + 0x9C))(obj + *(s16 *)(vt + 0x98), d);
    }
    {
        char *obj = ((struct { u8 pad[0x148]; char *a[1]; } *)self)->a[idx];
        char *vt = *(char **)(obj + 0x44);
        (*(void (**)(char *, s32, s32))(vt + 0xBC))(obj + *(s16 *)(vt + 0xB8), a, b);
    }
}

void fn_8004DED8(void *arg0, s32 arg1, s32 arg2) {
    extern struct { u8 pad[0xD8]; s32 v[1]; } lbl_8041F94C;
    void fn_8004DF1C(void *, s32, s32);
    s32 p;
    if (arg0 != NULL && (p = lbl_8041F94C.v[arg2]) != 0) {
        fn_8004DF1C(arg0, arg1, p);
    }
}

s32 fn_8004E204(void *self, void *list, void *exclude) {
    typedef struct { void *a; u8 *cur; s32 b; s32 c; } It;
    typedef struct { s16 delta; s16 idx; u8 *(*fn)(void *); } VtEnt;
    extern void fn_80151048(It *, void *, s32);
    extern void fn_80151110(It *);
    It iter;
    register void *ex asm("r29") = exclude;
    register It *it asm("r30") = &iter;
    register It *p asm("r31");
    VtEnt *e;
    u8 *cur;

    fn_80151048(it, list, 0);
    cur = it->cur;
    p = it;
    if (cur != NULL) {
        do {
            if (p->cur != ex) {
                e = (VtEnt *)(*(u8 **)(p->cur + 4) + 0x2D0);
                if (*(u16 *)(e->fn(p->cur + e->delta) + 0xB6) & 6) {
                    return 1;
                }
            }
            fn_80151110(p);
        } while (p->cur != NULL);
    }
    return 0;
}

s32 fn_8004E29C(void *self, char *obj) {
    char *vt = *(char **)(obj + 4);
    char *r = (*(char *(**)(void *))(vt + 0x2D4))(obj + *(s16 *)(vt + 0x2D0));
    return (*(u16 *)(r + 0xB6) & 6) != 0;
}

void fn_8004E5DC(void *self, f32 x, f32 y, f32 z) {
    extern u8 *lbl_80495050;
    f32 v[3];
    f32 *p;
    u8 *obj;
    u8 *vt;
    void (*f)(void *, f32 *, s32, s32);
    void *o;

    obj = lbl_80495050;
    p = v;
    vt = *(u8 **)obj;
    o = obj + *(s16 *)(vt + 0x48);
    p[0] = x;
    p[1] = y;
    p[2] = z;
    f = *(void (**)(void *, f32 *, s32, s32))(vt + 0x4C);
    f(o, p, 0xFF, 1);
    M2C_FIELD(self, s32 *, 0x380) = 0;
}

s32 fn_8004E644(void) {
    return 0;
}

s32 fn_8004E72C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x384);
}

s32 fn_8004E734(void) {
    return 0;
}

s32 fn_8004E814(void) {
    return 0;
}

s32 fn_8004E81C(void) {
    return 0;
}

void fn_8004E824(void *self) {
    extern char *lbl_8041FAD0[];
    extern struct { u8 pad[0x184]; s8 *p; } lbl_8041F94C;
    extern u8 *lbl_80495050;
    s32 changed = 0;
    s32 x;
    s32 y;

    x = (s8)lbl_8041FAD0[0][0x1F];
    if (x < -25) {
        x = -25;
        changed = 1;
    } else if (x > 25) {
        x = 25;
        changed = 1;
    }
    y = (s8)lbl_8041FAD0[0][0x20];
    if (y < -25) {
        y = -25;
        changed = 1;
    } else if (y > 25) {
        y = 25;
        changed = 1;
    }
    if (changed) {
        lbl_8041F94C.p[0x1F] = x;
        lbl_8041F94C.p[0x20] = y;
    }
    *(s32 *)(lbl_80495050 + 0x20) = y;
    *(s32 *)(lbl_80495050 + 0x1C) = x;
}

s32 fn_8004E8B8(void) {
    extern s32 lbl_8041F9F8[];
    return lbl_8041F9F8[0] == 1;
}

u16 fn_8004E8D0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2F4) != 0) {
        return 0xFFFF;
    }
    return M2C_FIELD(arg0, u16 *, 0xAA);
}

s32 fn_8004E8F0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x2F4) == 0) {
        if (!((M2C_FIELD(arg0, u16 *, 0xAA) >> arg1) & 1)) {
            return 0;
        }
        return 1;
    }
    return 1;
}

s32 fn_8004F0B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xFC);
}

s32 fn_8004F0B8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x100);
}

s32 fn_8004F0C0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x104);
}

s32 fn_8004F0C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x368);
}

void fn_8004F0D0(void *arg0, s32 arg1) {
    extern s32 lbl_80494F40;
    lbl_80494F40 = arg1;
}

extern s32 lbl_80494F40;
s32 fn_8004F0D8(void) {
    return lbl_80494F40;
}

void fn_8004F0E0(void *arg0, s32 arg1) {
    extern s32 lbl_80494F44;
    lbl_80494F44 = arg1;
}

extern s32 lbl_80494F44;
s32 fn_8004F0E8(void) {
    return lbl_80494F44;
}

s32 fn_8004F0F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x378);
}

void fn_8004F0F8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x384) = arg1;
}

void fn_8004F100(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x390) = arg1;
}

void fn_8004F108(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x194) = arg1;
}

s32 fn_8004F110(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x194);
}

void fn_8004F118(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x198) = arg1;
}

s32 fn_8004F120(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x198);
}

void fn_8004F128(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0xAA) = 0;
}

u16 fn_8004F134(u16 *arg0) {
    return *arg0;
}

u16 fn_8004F13C(struct { u8 pad[0x92]; u16 unk92[1]; } *arg0, s32 arg1) {
    return arg0->unk92[arg1];
}

u16 fn_8004F14C(struct { u16 unk0; u16 unk2[1][6]; } *arg0, s32 arg1, s32 arg2) {
    return arg0->unk2[arg1][arg2];
}

void fn_8004F164(void) {
    M2C_UNK fn_8004EDEC(M2C_UNK, M2C_UNK);
    fn_8004EDEC(1, 0xFFFF);
}

void fn_8004F190(void) {
    M2C_UNK fn_8004EDEC(M2C_UNK, M2C_UNK);
    fn_8004EDEC(0, 0xFFFF);
}

