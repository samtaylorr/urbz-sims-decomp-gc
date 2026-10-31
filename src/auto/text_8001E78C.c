/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x, y, z, w;
} Quat4;

static inline s32 List_Valid(void *n) {
    return n != NULL;
}

typedef struct {
    s32 *p;
} Handle;

static inline s32 Handle_Get(Handle *h) {
    return h->p != NULL ? *h->p : 0;
}

void fn_8001FC30(void) {
    fn_800A23A4();
}

void fn_8001FC50(void) {

}

void fn_8001FC54(void) {

}

void fn_80021104(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
}

s32 fn_80021248(void) {
    return 1;
}

void fn_80022C90(void *arg0) {
    char *obj;
    char *e;

    obj = M2C_FIELD(arg0, char **, 0x14);
    if (obj != NULL) {
        e = M2C_FIELD(obj, char **, 0x44) + 0xB0;
        (*(void (**)(void *))(e + 4))(obj + *(s16 *)e);
    }
}

s64 fn_80022CD0(s64 *arg0) {
    return *arg0;
}

void fn_80022CDC(void *arg0) {
    void fn_802CB8D4(void *);
    char *list;
    void *node;
    char *obj;
    void *next;
    char *e;

    list = (char *)arg0 + 8;
    node = M2C_FIELD(list, void **, 4);
    while (List_Valid(node)) {
        next = M2C_FIELD(node, void **, 4);
        obj = M2C_FIELD(node, char **, 0);
        if (M2C_FIELD(list, s32 *, 8) != 0 && obj != NULL) {
            e = M2C_FIELD(obj, char **, 0x44) + 8;
            (*(void (**)(void *, s32))(e + 4))(obj + *(s16 *)e, 3);
        }
        node = next;
    }
    fn_802CB8D4(list);
    obj = M2C_FIELD(arg0, char **, 0x14);
    if (obj != NULL) {
        e = M2C_FIELD(obj, char **, 0x44) + 8;
        (*(void (**)(void *, s32))(e + 4))(obj + *(s16 *)e, 3);
    }
    M2C_FIELD(arg0, void **, 0x14) = NULL;
}

void *fn_80022D98(void *arg0) {
    void fn_802CB5C4(void *, void *);
    char *list;
    void *node;
    void *next;

    list = (char *)arg0 + 8;
    node = M2C_FIELD(list, void **, 0);
    if (node != NULL) {
        next = M2C_FIELD(node, void **, 0);
        fn_802CB5C4(list, node);
        return next;
    }
    return NULL;
}

Quat4 fn_80022DE4(u8 *obj) {
    Quat4 q = *(Quat4 *)(*(u8 **)(obj + 0x4C) + 0x10);
    return q;
}

void fn_8002357C(u8 *self) {
    extern s32 fn_8000C1EC(s32, u8 *);
    extern void fn_8000C4F8(s32, s32);
    void fn_8000AA2C();
    extern s32 lbl_8041F94C[];
    extern u8 lbl_803C4988[];

    if (*(s32 *)(self + 0xB0) == 0) {
        *(s32 *)(self + 0xEC) = fn_8000C1EC(lbl_8041F94C[0xD0 / 4], self);
        fn_8000C4F8(lbl_8041F94C[0xD0 / 4], 0);
        fn_8000AA2C(lbl_8041F94C[0xD0 / 4], lbl_803C4988, 0, 0, 0);
        *(s32 *)(self + 0xB0) = 1;
    }
}

void fn_800235FC(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), f32 *, 0x10) = farg0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), f32 *, 0x14) = farg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), f32 *, 0x18) = farg2;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), f32 *, 0x1C) = farg3;
}

extern void *fn_802D0AB8(void);
extern void fn_802D1A00(void *, void *);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_80248488(void *, s32, u32);

static inline void *AllocAligned(u32 size) {
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

void *fn_8002393C(u32 size) {
    void *p = AllocAligned(size);

    fn_80248488(p, 0, size);
    return p;
}

void fn_80023A00(void *arg0) {
    fn_802D1A00(fn_802D0AB8(), arg0);
}

void fn_80023A34(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)obj[0x11];
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 8), 3);
    }
}

s32 fn_80023A74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 fn_80023A7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}

s32 fn_80023A84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x7C);
}

void *fn_80023A8C(u32 size) {
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

void fn_80023B38(void *arg0) {
    fn_802D1A00(fn_802D0AB8(), arg0);
}

s32 fn_80023B6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14) != 0;
}

void fn_80023B84(s64 *arg0, s64 arg1) {
    *arg0 = arg1;
}

s32 fn_80023B90(u8 *self) {
    u8 *p = *(u8 **)(self + 0x14);
    return p != NULL ? *(s32 *)(p + 0x98) == 0 : 0;
}

s32 fn_80023BB0(u8 *self) {
    u8 *p = *(u8 **)(self + 0x14);
    return p != NULL && *(s32 *)(p + 0x58) != 0;
}

void fn_80023BD4(void) {
    M2C_UNK fn_80023864(M2C_UNK, M2C_UNK);
    fn_80023864(1, 0xFFFF);
}

