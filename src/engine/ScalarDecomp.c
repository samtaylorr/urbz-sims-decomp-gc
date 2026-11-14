/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8036375C(void *);
void fn_802CB634(void *);
void fn_802D23C0(void *, u32, s32, s32);
void fn_802CA9A8(void *);
void fn_802CAA00(void *, s32);
void fn_8036BB88(s32 arg0, s32 arg1);
void fn_80363734(void *, s32);
void fn_802CB8D4(void *);
void fn_8036391C(void *);
void fn_80363918(void *);
void fn_8036BAF0(void *);
extern u8 lbl_8041D808[];
extern u8 lbl_8047551C[];
extern u8 lbl_80475558[];

typedef struct ScalarList {
    void *head;
    void *tail;
    s32 owns;
} ScalarList;

static inline void ScalarList_Init(ScalarList *l) {
    l->tail = 0;
    l->head = 0;
    l->owns = 1;
}

typedef struct ScratchPool {
    u32 base;
    void *free;
    u32 size;
} ScratchPool;

static inline int ScratchPool_Contains(ScratchPool *pool, void *p) {
    return (u32)p >= pool->base && (u32)p < pool->base + pool->size;
}

void fn_8036A91C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}

void fn_8036A928(s32 *arg0, f32 arg1) {
    void fn_802DDC6C(s32, s32);

    fn_802DDC6C(arg0[0], (s32)(arg0[1] + arg1));
}

s32 fn_8036A98C(s32 *self) {
    return self[2];
}

void *fn_8036A994(void *arg0, char *arg1) {
    void *fn_802D3714(void *, void *);
    void *vt;
    void *s;

    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1, 2);
    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1 + 2, 2);
    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1 + 4, 4);
    s = fn_802D3714(arg0, arg1 + 8);
    vt = M2C_FIELD(s, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)s + M2C_FIELD(vt, s16 *, 0x30), arg1 + 0x14, 4);
    vt = M2C_FIELD(s, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)s + M2C_FIELD(vt, s16 *, 0x30), arg1 + 0x18, 4);
    return arg0;
}

s32 fn_8036AA70(u8 *dst, u8 *src) {
    void fn_802482F8(void *, void *, s32);
    u8 *start = src;

    fn_802482F8(dst, src, 2);
    src += 2;
    fn_802482F8(dst + 2, src, 2);
    src += 2;
    fn_802482F8(dst + 4, src, 4);
    src += 4;
    fn_802482F8(dst + 8, src, 0xC);
    src += 0xC;
    fn_802482F8(dst + 0x14, src, 4);
    src += 4;
    fn_802482F8(dst + 0x18, src, 4);
    src += 4;
    return src - start;
}

s32 fn_8036ACBC(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x18) * M2C_FIELD(arg0, s16 *, 0x1C)) + 0x63;
}

void fn_8036B20C(void *arg0) {
    extern const f32 lbl_803F50C4[];
    extern u32 fn_802DE634(s32, s32, s32);
    void fn_8036B300(void *);

    M2C_FIELD(arg0, s32 *, 0x8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_803F50C4[0];
    M2C_FIELD(arg0, s32 *, 0x10) = fn_802DE634(M2C_FIELD(arg0, s32 *, 0x0), M2C_FIELD(arg0, s32 *, 0x4) + M2C_FIELD(arg0, s16 *, 0x1C), M2C_FIELD(arg0, s8 *, 0x1E)) + 1;
    fn_8036B300(arg0);
}

void fn_8036B278(void *arg0) {
    extern const f32 lbl_803F50C8[];
    extern u32 fn_802DE634(s32, s32, s32);
    void fn_8036B300(void *);
    s32 n;
    s32 w;
    s32 last;

    n = M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x8) = n - 2;
    M2C_FIELD(arg0, s32 *, 0x10) = M2C_FIELD(arg0, s32 *, 0x14) - 1;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_803F50C8[0];
    w = fn_802DE634(M2C_FIELD(arg0, s32 *, 0x0), M2C_FIELD(arg0, s32 *, 0x4) + (n - 1) * M2C_FIELD(arg0, s16 *, 0x1C), M2C_FIELD(arg0, s8 *, 0x1E));
    last = M2C_FIELD(arg0, s32 *, 0x10) - 1;
    M2C_FIELD(arg0, s32 *, 0xC) = last - w;
    fn_8036B300(arg0);
}

void fn_8036B300(void *arg0) {
    extern void fn_8036B50C(void *, s32, s32, void *);
    s32 n;

    fn_8036B50C(arg0, 2, M2C_FIELD(arg0, s32 *, 0x8), (u8 *)arg0 + 0x2C);
    fn_8036B50C(arg0, 1, M2C_FIELD(arg0, s32 *, 0x8), (u8 *)arg0 + 0x30);
    n = M2C_FIELD(arg0, s32 *, 0x8) + 1;
    fn_8036B50C(arg0, 0, n, (u8 *)arg0 + 0x34);
    fn_8036B50C(arg0, 2, n, (u8 *)arg0 + 0x38);
}

void fn_8036B4A0(void *arg0, s32 arg1, f32 *out) {
    extern u32 fn_802DE634(s32, s32, s32);
    u32 v;

    v = fn_802DE634(M2C_FIELD(arg0, s32 *, 0x0), arg1, M2C_FIELD(arg0, s8 *, 0x1F));
    *out = (f32)v * M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x40);
}

void *fn_8036B878(void *arg0, s32 arg1) {
    void *sub = (u8 *)arg0 + 0x14;

    M2C_FIELD(arg0, void **, 0x5C) = lbl_8041D808;
    fn_80363734(arg0, arg1);
    fn_80363734(sub, arg1);
    ScalarList_Init((ScalarList *)((u8 *)arg0 + 0x28));
    ScalarList_Init((ScalarList *)((u8 *)arg0 + 0x34));
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    return arg0;
}

void fn_8036B904(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, void **, 0x5C) = lbl_8041D808;
    fn_802CB8D4((u8 *)arg0 + 0x34);
    fn_802CB8D4((u8 *)arg0 + 0x28);
    fn_8036391C((u8 *)arg0 + 0x14);
    fn_802CB8D4((u8 *)arg0 + 0x14);
    fn_8036391C(arg0);
    fn_802CB8D4(arg0);
    if (arg1 & 1) {
        fn_8036BAF0(arg0);
    }
}

void fn_8036B980(void *arg0) {
    void *it;
    void *obj;
    void *vt;

    fn_80363918(arg0);
    fn_80363918((u8 *)arg0 + 0x14);
    for (it = M2C_FIELD(arg0, void **, 0x28); it != NULL; it = M2C_FIELD(it, void **, 8)) {
        obj = M2C_FIELD(it, void **, 0);
        if (obj != NULL) {
            vt = M2C_FIELD(obj, void **, 0x24);
            M2C_FIELD(vt, void (**)(void *), 0x8C)((u8 *)obj + M2C_FIELD(vt, s16 *, 0x88));
        }
    }
    for (it = M2C_FIELD(arg0, void **, 0x34); it != NULL; it = M2C_FIELD(it, void **, 8)) {
        fn_8036B980(M2C_FIELD(it, void **, 0));
    }
}

void fn_80363734(void *, s32);
extern u8 lbl_8041D808[];
void fn_802CB8D4(void *);
void fn_8036391C(void *);
void fn_8036BAF0(void *);
void fn_80363918(void *);
s32 fn_802D0AB8(void);
void fn_802D1A00(s32, void *);
void fn_802CAA88(void *, s32);
void fn_802CAAAC(void *);
void fn_8036BAF0(void *p) {
    ScratchPool *pool = (ScratchPool *)lbl_8047551C;
    if (ScratchPool_Contains(pool, p)) {
        void *lock = (u8 *)pool + 0x20;
        fn_802CAA88(lock, -1);
        if (p != NULL) {
            *(void **)p = pool->free;
            pool->free = p;
        }
        fn_802CAAAC(lock);
    } else {
        fn_802D1A00(fn_802D0AB8(), p);
    }
}

void fn_8036BB88(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            char *p = (char *)lbl_8047551C;
            char *buf = (char *)lbl_80475558;
            fn_802D23C0(p, ((u32)buf + 0x3F) & ~0x3F, 0x60, 2);
            fn_802CA9A8(p + 0x20);
        } else {
            char *q = (char *)lbl_8047551C;
            fn_802CAA00(q + 0x20, 2);
        }
    }
}

s32 fn_8036BC0C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

void fn_8036BC14(void *self) {
    fn_8036375C(self);
}

void fn_8036BC34(void *self) {
    fn_802CB634(self);
}

void fn_8036BC54(char *self) {
    fn_8036375C(self + 0x14);
}

void fn_8036BC78(char *self) {
    fn_802CB634(self + 0x14);
}

s32 fn_8036BC9C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

void fn_8036BCFC(void) {
    fn_8036BB88(1, 0xFFFF);
}

void fn_8036BD28(void) {
    fn_8036BB88(0, 0xFFFF);
}

