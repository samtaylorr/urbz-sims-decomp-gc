/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_80415470[];
extern char lbl_80435FB8[];
void fn_801B25A4(void *);
void *fn_802D2058(u32);

typedef struct ScratchPool {
    u32 base;
    void *free;
    u32 size;
} ScratchPool;

static inline void *ScratchPool_Alloc(ScratchPool *pool) {
    void *p = pool->free;
    if (p != NULL) {
        pool->free = *(void **)p;
    }
    return p;
}

void *fn_802D0AB8(void);
void *fn_802D0B3C(void);
void *fn_802D197C(void *, u32, s32);
void *fn_802DBBCC(void *, u32, s32);

static inline void *Heap_Alloc(u32 size) {
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

extern u8 lbl_80415560[];
extern void fn_802D20E8(void *);
void fn_801B262C(void **self, s32 flags) {
    *self = lbl_80415560;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_801B2770(s32 arg0) {
    M2C_UNK fn_800F6A38(s32);
    fn_800F6A38(arg0 + 0xC);
    return 1;
}

s16 fn_801B2798(void *arg0) {
    return *M2C_FIELD(arg0, s16 **, 0x54);
}

s16 fn_801B27A4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s16 *, 2);
}

u8 fn_801B27B0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), u8 *, 4);
}

void fn_801B27BC(void *arg0, s8 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s8 *, 4) = arg1;
}

void fn_801B2830(void *arg0, s8 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s8 *, 5) = arg1;
}

void fn_801B28AC(void *arg0, s8 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s8 *, 6) = arg1;
}

u8 fn_801B28B8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), u8 *, 0xB);
}

void fn_801B28C4(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s32 *, 8) = arg1;
}

s16 fn_801B28E4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 4);
}

void fn_801B28EC(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = arg1;
}

void fn_801B2A84(void *arg0) {
    void *vt = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(vt, void (**)(void *), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30));
}

s32 fn_801B2D08(void) {
    return 0;
}

s32 fn_801B2ECC(void *self, s32 id, void **out) {
    void *vt;

    if (out != NULL) {
        if (id == 1 || id == 0x2BEB2426) {
            vt = M2C_FIELD(self, void **, 0);
            M2C_FIELD(vt, void (**)(void *), 0x14)((char *)self + M2C_FIELD(vt, s16 *, 0x10));
            *out = self;
            return 1;
        }
    }
    return 0;
}

s32 fn_801B2F3C(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x64);
}

s32 fn_801B2F50(void *arg0) {
    s32 n;
    void *vt;

    n = --M2C_FIELD(arg0, s32 *, 0x64);
    if (n == 0) {
        if (arg0 != NULL) {
            vt = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(vt, void (**)(void *, s32), 0x64)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x60), 3);
        }
        return 0;
    }
    return n;
}

void fn_801B31C4(void *arg0) {
    void *vt = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(vt, void (**)(void *), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30));
}

s32 fn_801B35EC(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x60);
}

s32 fn_801B36E8(void) {
    return 8;
}

s32 fn_801B36F0(void) {
    return 2;
}

void fn_801B36F8(void) {
    M2C_UNK fn_801B365C(M2C_UNK, M2C_UNK);
    fn_801B365C(1, 0xFFFF);
}

