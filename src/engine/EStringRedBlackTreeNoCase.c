/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct EMat4Node {
    u8 pad0[0x10];
    struct EMat4Node *next;
    u8 pad14[0x4];
    s32 key;
    void *value;
} EMat4Node;

void *fn_803652B4(void *self, f32 key);
void *fn_8036542C(void *self, void *parent, f32 key, s32 value);

static inline s32 EStrNode_Valid(void *n) {
    return n != NULL;
}

typedef struct ScratchPool {
    u32 base;
    void *free;
    u32 size;
} ScratchPool;

void *fn_802D0AB8(void);
void *fn_802D0B3C(void);
void *fn_802D197C(void *, u32, s32);
void *fn_802DBBCC(void *, u32, s32);

static inline void *ScratchPool_Alloc(ScratchPool *pool) {
    void *p = pool->free;
    if (p != NULL) {
        pool->free = *(void **)p;
    }
    return p;
}

static inline int ScratchPool_Contains(ScratchPool *pool, void *p) {
    return (u32)p >= pool->base && (u32)p < pool->base + pool->size;
}

static inline void ScratchPool_Free(ScratchPool *pool, void *p) {
    if (p != NULL) {
        *(void **)p = pool->free;
        pool->free = p;
    }
}

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


s32 fn_80364E64(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_r11 == NULL) {
        return 0;
    }
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x28);
    return M2C_FIELD(temp_r9, s32 (**)(void *), 0x24)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x20));
}

void fn_80364EAC(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK fn_80364D84();
    void *temp_r9;

    fn_80364D84();
    M2C_FIELD(arg0, s32 *, 0x24) = arg4;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    if (arg1 != NULL) {
        temp_r9 = M2C_FIELD(arg1, void **, 0x28);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, M2C_UNK), 0x2C)(arg1 + M2C_FIELD(temp_r9, s16 *, 0x28), arg3, 0);
    }
}

void fn_80364F1C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

s32 fn_80364F28(s32 *self) {
    return self[7];
}

s32 fn_80364F30(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x28);
        return M2C_FIELD(temp_r9, s32 (**)(void *), 0x34)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x30));
    }
    return 0;
}

void *fn_80364F78(void *arg0) {
    extern char lbl_80401348[];
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 8) = lbl_80401348;
    return arg0;
}

void *fn_80364F98(void *arg0, void *arg1) {
    extern char lbl_80401348[];
    void fn_80365A64(void *, void *, s32);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 8) = lbl_80401348;
    fn_80365A64(arg0, arg1, 1);
    return arg0;
}

extern char lbl_80401348[];
void fn_80364FE4(void *arg0, void *arg1) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg1, void **, 4);
    M2C_FIELD(arg1, void **, 4) = M2C_FIELD(temp_r11, void **, 0);
    temp_r10 = M2C_FIELD(temp_r11, void **, 0);
    if (temp_r10 != lbl_80401348) {
        M2C_FIELD(temp_r10, void **, 8) = arg1;
    }
    if (temp_r11 != lbl_80401348) {
        M2C_FIELD(temp_r11, void **, 8) = M2C_FIELD(arg1, void **, 8);
    }
    temp_r9 = M2C_FIELD(arg1, void **, 8);
    if (temp_r9 != NULL) {
        if (arg1 == M2C_FIELD(temp_r9, void **, 0)) {
            M2C_FIELD(temp_r9, void **, 0) = temp_r11;
        } else {
            M2C_FIELD(temp_r9, void **, 4) = temp_r11;
        }
    } else {
        M2C_FIELD(arg0, void **, 8) = temp_r11;
    }
    M2C_FIELD(temp_r11, void **, 0) = arg1;
    if (arg1 != lbl_80401348) {
        M2C_FIELD(arg1, void **, 8) = temp_r11;
    }
}

void fn_80365060(void *arg0, void *arg1) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg1, void **, 0);
    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(temp_r11, void **, 4);
    temp_r10 = M2C_FIELD(temp_r11, void **, 4);
    if (temp_r10 != &lbl_80401348) {
        M2C_FIELD(temp_r10, void **, 8) = arg1;
    }
    if (temp_r11 != &lbl_80401348) {
        M2C_FIELD(temp_r11, void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
    }
    temp_r9 = M2C_FIELD(arg1, void **, 8);
    if (temp_r9 != NULL) {
        if (arg1 == (void *) M2C_FIELD(temp_r9, void **, 4)) {
            M2C_FIELD(temp_r9, void **, 4) = temp_r11;
        } else {
            M2C_FIELD(temp_r9, void **, 0) = temp_r11;
        }
    } else {
        M2C_FIELD(arg0, void **, 8) = temp_r11;
    }
    M2C_FIELD(temp_r11, void **, 4) = arg1;
    if (arg1 != &lbl_80401348) {
        M2C_FIELD(arg1, void **, 8) = temp_r11;
    }
}

void fn_803650DC(void *arg0, void *arg1) {
    void *y;

    while (arg1 != M2C_FIELD(arg0, void **, 8) && M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) == 1) {
        if (M2C_FIELD(arg1, void **, 8) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), void **, 0)) {
            y = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), void **, 4);
            if (M2C_FIELD(y, s32 *, 0x14) == 1) {
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 0;
                M2C_FIELD(y, s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), s32 *, 0x14) = 1;
                arg1 = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8);
            } else {
                if (arg1 == M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 4)) {
                    arg1 = M2C_FIELD(arg1, void **, 8);
                    fn_80364FE4(arg0, arg1);
                }
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), s32 *, 0x14) = 1;
                fn_80365060(arg0, M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8));
            }
        } else {
            y = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), void **, 0);
            if (M2C_FIELD(y, s32 *, 0x14) == 1) {
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 0;
                M2C_FIELD(y, s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), s32 *, 0x14) = 1;
                arg1 = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8);
            } else {
                if (arg1 == M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0)) {
                    arg1 = M2C_FIELD(arg1, void **, 8);
                    fn_80365060(arg0, arg1);
                }
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), s32 *, 0x14) = 1;
                fn_80364FE4(arg0, M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8));
            }
        }
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x14) = 0;
}

void *fn_803652B4(void *self, f32 key);
void *fn_8036542C(void *self, void *parent, f32 key, s32 value);
void *fn_803652F8(void *arg0, f32 key) {
    extern char lbl_80401348[];
    void *var_r3;
    void *var_r0;

    var_r0 = M2C_FIELD(arg0, void **, 8);
    var_r3 = NULL;
    while (var_r0 != lbl_80401348) {
        var_r3 = var_r0;
        if (key < M2C_FIELD(var_r3, f32 *, 0x1C)) {
            var_r0 = M2C_FIELD(var_r3, void **, 0);
        } else {
            var_r0 = M2C_FIELD(var_r3, void **, 4);
        }
    }
    return var_r3;
}

void *fn_80365338(void *self, s32 value, f32 key) {
    char *n;

    n = fn_803652B4(self, key);
    if (n != NULL && M2C_FIELD(n, f32 *, 0x1C) == key) {
        M2C_FIELD(n, s32 *, 0x18) = value;
        return n;
    }
    return fn_8036542C(self, n, key, value);
}

void *fn_803653A4(void *self, s32 value, f32 key, s32 multi) {
    char *n;

    if (multi) {
        return fn_8036542C(self, fn_803652F8(self, key), key, value);
    }
    n = fn_803652B4(self, key);
    if (n != NULL && M2C_FIELD(n, f32 *, 0x1C) == key) {
        return NULL;
    }
    return fn_8036542C(self, n, key, value);
}

void fn_80365584(void *arg0, void *arg1) {
    void *w;

    while (arg1 != M2C_FIELD(arg0, void **, 8) && M2C_FIELD(arg1, s32 *, 0x14) == 0) {
        if (arg1 == M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0)) {
            w = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 4);
            if (M2C_FIELD(w, s32 *, 0x14) == 1) {
                M2C_FIELD(w, s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 1;
                fn_80364FE4(arg0, M2C_FIELD(arg1, void **, 8));
                w = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 4);
            }
            if (M2C_FIELD(M2C_FIELD(w, void **, 0), s32 *, 0x14) == 0 &&
                M2C_FIELD(M2C_FIELD(w, void **, 4), s32 *, 0x14) == 0) {
                M2C_FIELD(w, s32 *, 0x14) = 1;
                arg1 = M2C_FIELD(arg1, void **, 8);
            } else {
                if (M2C_FIELD(M2C_FIELD(w, void **, 4), s32 *, 0x14) == 0) {
                    M2C_FIELD(M2C_FIELD(w, void **, 0), s32 *, 0x14) = 0;
                    M2C_FIELD(w, s32 *, 0x14) = 1;
                    fn_80365060(arg0, w);
                    w = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 4);
                }
                M2C_FIELD(w, s32 *, 0x14) = M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14);
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(w, void **, 4), s32 *, 0x14) = 0;
                fn_80364FE4(arg0, M2C_FIELD(arg1, void **, 8));
                arg1 = M2C_FIELD(arg0, void **, 8);
            }
        } else {
            w = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0);
            if (M2C_FIELD(w, s32 *, 0x14) == 1) {
                M2C_FIELD(w, s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 1;
                fn_80365060(arg0, M2C_FIELD(arg1, void **, 8));
                w = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0);
            }
            if (M2C_FIELD(M2C_FIELD(w, void **, 4), s32 *, 0x14) == 0 &&
                M2C_FIELD(M2C_FIELD(w, void **, 0), s32 *, 0x14) == 0) {
                M2C_FIELD(w, s32 *, 0x14) = 1;
                arg1 = M2C_FIELD(arg1, void **, 8);
            } else {
                if (M2C_FIELD(M2C_FIELD(w, void **, 0), s32 *, 0x14) == 0) {
                    M2C_FIELD(M2C_FIELD(w, void **, 4), s32 *, 0x14) = 0;
                    M2C_FIELD(w, s32 *, 0x14) = 1;
                    fn_80364FE4(arg0, w);
                    w = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0);
                }
                M2C_FIELD(w, s32 *, 0x14) = M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14);
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(w, void **, 0), s32 *, 0x14) = 0;
                fn_80365060(arg0, M2C_FIELD(arg1, void **, 8));
                arg1 = M2C_FIELD(arg0, void **, 8);
            }
        }
    }
    M2C_FIELD(arg1, s32 *, 0x14) = 0;
}

s32 fn_80365760(void *arg0, f32 key) {
    void *fn_80365988(void *, f32, s32 *);
    void fn_803657A8(void *, void *);
    void *node;

    node = fn_80365988(arg0, key, 0);
    if (node != NULL) {
        fn_803657A8(arg0, node);
        return 1;
    }
    return 0;
}

void *fn_80365988(void *arg0, f32 key, s32 *out) {
    extern char lbl_80401348[];
    char *node;

    node = M2C_FIELD(arg0, char **, 8);
    while (node != lbl_80401348) {
        if (key == M2C_FIELD(node, f32 *, 0x1C)) {
            if (out != NULL) {
                *out = M2C_FIELD(node, s32 *, 0x18);
            }
            return node;
        }
        node = key < M2C_FIELD(node, f32 *, 0x1C) ? M2C_FIELD(node, char **, 0) : M2C_FIELD(node, char **, 4);
    }
    return NULL;
}

void fn_803659DC(EMat4Node **list);
void fn_803659DC(EMat4Node **list) {
    extern void fn_802D20E8(void *);
    void *p;
    void *next;

    p = M2C_FIELD(list, void **, 4);
    while (p != NULL) {
        next = M2C_FIELD(p, void **, 0xC);
        fn_802D20E8(p);
        p = next;
    }
    M2C_FIELD(list, char **, 8) = lbl_80401348;
    M2C_FIELD(list, void **, 4) = NULL;
    M2C_FIELD(list, s32 *, 0) = 0;
}

s32 fn_80365A3C(void **arg0) {
    s32 var_r9;
    void *var_r3;

    var_r3 = *arg0;
    var_r9 = 0;
    if (var_r3 != NULL) {
        do {
            var_r3 = M2C_FIELD(var_r3, void **, 0x10);
            var_r9 += 1;
        } while (var_r3 != NULL);
    }
    return var_r9;
}

void *fn_80365A64(void *self, void **other, s32 overwrite) {
    void *fn_803653A4(void *, s32, f32, s32);
    void *fn_80365338(void *, s32, f32);
    void *n;

    for (n = *other; EStrNode_Valid(n); n = M2C_FIELD(n, void **, 0x10)) {
        f32 value = M2C_FIELD(n, f32 *, 0x1C);
        s32 key = M2C_FIELD(n, s32 *, 0x18);
        if (overwrite) {
            fn_803653A4(self, key, value, 1);
        } else {
            fn_80365338(self, key, value);
        }
    }
}

void *fn_80365AEC(EMat4Node **self, EMat4Node **other) {
    fn_803659DC(self);
    ((void (*)(void *, void *, s32))fn_80365A64)(self, other, 1);
    return self;
}

void *fn_80365BB4(void *arg0) {
    M2C_UNK fn_80365C8C();
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    fn_80365C8C();
    return arg0;
}

void *fn_80365BF0(void *arg0, void *arg1) {
    void fn_80365C8C(void *, s32);
    void fn_803663B8(void *, void *);

    *(volatile s32 *)((u8 *)arg0 + 0) = 0;
    *(volatile s32 *)((u8 *)arg0 + 4) = 0;
    fn_80365C8C(arg0, M2C_FIELD(arg1, s32 *, 0xC));
    fn_803663B8(arg0, arg1);
    return arg0;
}

void fn_80365C40(void *arg0, s32 arg1) {
    void fn_8036619C(void *);
    void fn_802D20E8(void *);
    void fn_802D1A00(void *, void *);
    void *fn_802D0AB8(void);

    fn_8036619C(arg0);
    fn_802D1A00(fn_802D0AB8(), M2C_FIELD(arg0, void **, 8));
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_80365D3C(void *arg0) {
    M2C_UNK fn_80248488(s32, M2C_UNK, s32);
    fn_80248488(M2C_FIELD(arg0, s32 *, 8), 0, M2C_FIELD(arg0, s32 *, 0xC) * 4);
}

s32 fn_80365D6C(void *arg0, s32 arg1) {
    void fn_803660C8(void *, s32, s32 *);
    s32 sp8;

    fn_803660C8(arg0, arg1, &sp8);
    return sp8;
}

void **fn_80365D94(void *arg0, u32 key) {
    extern void *fn_80366168(void *, s32, s32);
    extern void *fn_80365EF8(void *, s32, s32, void *);
    u32 index = key % M2C_FIELD(arg0, u32 *, 0xC);
    void *node = fn_80366168(arg0, index, key);
    if (node == NULL) {
        node = fn_80365EF8(arg0, index, key, NULL);
    }
    return (void **)((u8 *)node + 0x10);
}

void fn_80365DFC(void *arg0, s32 key, void *value) {
    extern void *fn_80366168(void *, s32, s32);
    extern void *fn_80365EF8(void *, s32, s32, void *);
    s32 index = (u32)key % M2C_FIELD(arg0, u32 *, 0xC);
    void *node = fn_80366168(arg0, index, key);
    if (node != NULL) {
        M2C_FIELD(node, void **, 0x10) = value;
    } else {
        fn_80365EF8(arg0, index, key, value);
    }
}

void fn_80365FEC(void *self, void *node) {
    void fn_80366028(void *, u32, void *);
    u32 key = M2C_FIELD(node, u32 *, 0xC);
    u32 count = M2C_FIELD(self, u32 *, 0xC);
    fn_80366028(self, key % count, node);
}

void *fn_80366120(void *unused, void *node, void **out) {
    s32 key = M2C_FIELD(node, s32 *, 0xC);

    node = M2C_FIELD(node, void **, 8);
    while (node != NULL) {
        if (M2C_FIELD(node, s32 *, 0xC) == key) {
            if (out != NULL) {
                *out = M2C_FIELD(node, void **, 0x10);
            }
            return node;
        }
        node = M2C_FIELD(node, void **, 8);
    }
    return NULL;
}

void *fn_80366168(void *arg0, s32 index, s32 key) {
    void **buckets = M2C_FIELD(arg0, void **, 8);
    void *node = buckets[index];

    while (node != NULL) {
        if (M2C_FIELD(node, s32 *, 0xC) == key) {
            return node;
        }
        node = M2C_FIELD(node, void **, 8);
    }
    return NULL;
}

void fn_8036619C(void *arg0) {
    M2C_UNK *var_r30;
    M2C_UNK fn_802D20E8(M2C_UNK *);
    M2C_UNK *temp_r30;

    var_r30 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (var_r30 != NULL) {
        do {
            temp_r30 = *var_r30;
            fn_802D20E8(var_r30);
            var_r30 = temp_r30;
        } while (var_r30 != NULL);
    }
    M2C_FIELD(arg0, M2C_UNK **, 4) = (int)NULL;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    fn_80365D3C(arg0);
}

void fn_803661F8(void **list) {
    extern void fn_802D1A00(void *, void *);
    void *n;

    for (n = *list; EStrNode_Valid(n); n = M2C_FIELD(n, void **, 4)) {
        void *value = M2C_FIELD(n, void **, 0x10);
        fn_802D1A00(fn_802D0AB8(), value);
    }
    fn_8036619C(list);
}

s32 fn_8036625C(void **arg0) {
    s32 var_r9;
    void *var_r3;

    var_r3 = *arg0;
    var_r9 = 0;
    if (var_r3 != NULL) {
        do {
            var_r3 = M2C_FIELD(var_r3, void **, 4);
            var_r9 += 1;
        } while (var_r3 != NULL);
    }
    return var_r9;
}

void *fn_80366284(void *arg0, void *arg1) {
    extern void fn_80366328(void *, s32);
    extern void fn_803663B8(void *, void *);

    fn_8036619C(arg0);
    fn_80366328(arg0, M2C_FIELD(arg1, s32 *, 0xC));
    fn_803663B8(arg0, arg1);
    return arg0;
}

void *fn_803663B8(void *arg0, void **arg1) {
    void fn_80365DFC(void *, s32, void *);
    void *n;

    for (n = *arg1; EStrNode_Valid(n); n = M2C_FIELD(n, void **, 4)) {
        void *value = M2C_FIELD(n, void **, 0x10);
        s32 key = M2C_FIELD(n, s32 *, 0xC);
        fn_80365DFC(arg0, key, value);
    }
}

s32 fn_80366414(void **arg0, void **arg1) {
    extern void *fn_803660C8(void *, s32, void **);
    void *n;
    void *found;

    if (fn_8036625C(arg0) != fn_8036625C(arg1)) {
        return 0;
    }
    for (n = *arg1; EStrNode_Valid(n); n = M2C_FIELD(n, void **, 4)) {
        void *value = M2C_FIELD(n, void **, 0x10);
        if (fn_803660C8(arg0, M2C_FIELD(n, s32 *, 0xC), &found) == NULL || found != value) {
            return 0;
        }
    }
    return 1;
}

void *fn_803664B0(u8 *self) {
    void fn_802D81B8(void *);
    fn_802D81B8(self);
    fn_802D81B8(self + 0x18);
    *(s32 *)(self + 0x38) = 0;
    *(s32 *)(self + 0x40) = 0;
    *(s32 *)(self + 0x44) = 0;
    *(s32 *)(self + 0x48) = 0;
    return self;
}

void fn_80366554(u8 *self, s32 flags) {
    void fn_80366708(void *);
    void fn_802D8260(void *, s32);
    void fn_802D20E8(void *);
    if (*(s32 *)(self + 0x38) != 0) {
        fn_80366708(self);
    }
    fn_802D8260(self + 0x18, 2);
    fn_802D8260(self, 2);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_80366708(void *arg0) {
    extern void fn_802D8328(void *);
    extern void fn_802D1A00(void *, void *);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    fn_802D8328(arg0);
    fn_802D8328((u8 *)arg0 + 0x18);
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        fn_802D1A00(fn_802D0AB8(), M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
}

s32 fn_80366760(void *self, s32 arg1, s32 arg2) {
    s32 fn_802D8334(void *, s32);
    void fn_802D838C(void *);
    s32 fn_8025465C(void);
    void fn_80254670(s32);
    u32 fn_803669C0(void *);
    s32 level;

    if (fn_802D8334(self, arg2 != 0 ? -1 : 0) == 0) {
        return 0;
    }
    level = fn_8025465C();
    M2C_FIELD(self, s32 **, 0x3C)[M2C_FIELD(self, s32 *, 0x30)] = arg1;
    M2C_FIELD(self, s32 *, 0x30) =
        (M2C_FIELD(self, s32 *, 0x30) + 1) % M2C_FIELD(self, s32 *, 0x38);
    M2C_FIELD(self, s32 *, 0x44)++;
    fn_80254670(level);
    fn_802D838C((u8 *)self + 0x18);
    if (fn_803669C0(self) > M2C_FIELD(self, u32 *, 0x48)) {
        M2C_FIELD(self, u32 *, 0x48) = fn_803669C0(self);
    }
    return 1;
}

s32 fn_80366820(void *self, s32 *arg1, s32 arg2) {
    s32 fn_802D8334(void *, s32);
    void fn_802D838C(void *);
    s32 fn_8025465C(void);
    void fn_80254670(s32);
    s32 level;

    if (fn_802D8334((u8 *)self + 0x18, arg2 != 0 ? -1 : 0) == 0) {
        return 0;
    }
    level = fn_8025465C();
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(self, s32 **, 0x3C)[M2C_FIELD(self, s32 *, 0x34)];
    }
    M2C_FIELD(self, s32 *, 0x34) =
        (M2C_FIELD(self, s32 *, 0x34) + 1) % M2C_FIELD(self, s32 *, 0x38);
    fn_80254670(level);
    fn_802D838C(self);
    return 1;
}

s32 fn_803668C0(void *self, s32 arg1) {
    s32 fn_802D83EC(void *);
    void fn_802D8424(void *);
    if (fn_802D83EC(self) == 0) {
        return 0;
    }
    M2C_FIELD(self, s32 **, 0x3C)[M2C_FIELD(self, s32 *, 0x30)] = arg1;
    M2C_FIELD(self, s32 *, 0x30) =
        (M2C_FIELD(self, s32 *, 0x30) + 1) % M2C_FIELD(self, s32 *, 0x38);
    fn_802D8424((u8 *)self + 0x18);
    return 1;
}

s32 fn_80366938(void *self, s32 *arg1) {
    s32 fn_802D83EC(void *);
    void fn_802D8424(void *);
    if (fn_802D83EC((u8 *)self + 0x18) == 0) {
        return 0;
    }
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(self, s32 **, 0x3C)[M2C_FIELD(self, s32 *, 0x34)];
    }
    M2C_FIELD(self, s32 *, 0x34) =
        (M2C_FIELD(self, s32 *, 0x34) + 1) % M2C_FIELD(self, s32 *, 0x38);
    fn_802D8424(self);
    return 1;
}

s32 fn_803669C0(void *arg0) {
    s32 temp_r11;
    s32 var_r3;

    temp_r11 = M2C_FIELD(arg0, s32 *, 0x34);
    var_r3 = M2C_FIELD(arg0, s32 *, 0x30);
    if (var_r3 < temp_r11) {
        var_r3 += M2C_FIELD(arg0, s32 *, 0x38);
    }
    return var_r3 - temp_r11;
}

void fn_803669E4(void *self, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 fn_803669C0(void *);
    *arg1 = fn_803669C0(self);
    *arg2 = M2C_FIELD(self, s32 *, 0x48);
    *arg3 = M2C_FIELD(self, s32 *, 0x44);
    *arg4 = M2C_FIELD(self, s32 *, 0x38);
}

void fn_80366A3C(s32 arg0) {
    s32 fn_80366820(void *, s32 *, s32);
    do {

    } while (fn_80366820((void *)arg0, 0, 0) != 0);
}

void *fn_80366A7C(void *arg0) {
    void fn_803BEC78(void *);
    extern u8 lbl_8041D7D8[];
    M2C_FIELD(arg0, void **, 0x54) = lbl_8041D7D8;
    fn_803BEC78((char *)arg0 + 0x48);
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    return arg0;
}

void fn_80366AD0(void *arg0, s32 arg1) {
    extern char lbl_8041D7D8[];
    void fn_803BECF4(void *, s32);
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, char **, 0x54) = lbl_8041D7D8;
    fn_803BECF4((u8 *)arg0 + 0x48, 2);
    if (arg1 & 1) fn_802D20E8(arg0);
}

void *fn_80367098(void *arg0, void *arg1) {
    u8 *vtable = *(u8 **)((u8 *)arg1 + 0x54);
    s16 offset = *(s16 *)(vtable + 0x20);
    void (*func)(void *, void *) = *(void (**)(void *, void *))(vtable + 0x24);
    func((u8 *)arg1 + offset, arg0);
    return arg0;
}

void *fn_803670E4(void *arg0, void *arg1) {
    void *vt;

    vt = M2C_FIELD(arg1, void **, 0x54);
    M2C_FIELD(vt, void (**)(void *, void *), 0x14)((u8 *)arg1 + M2C_FIELD(vt, s16 *, 0x10), arg0);
    return arg0;
}

void fn_80367258(void *arg0, void *arg1) {
    M2C_UNK fn_80248A10(void *, void *, s32);
    fn_80248A10(arg0, arg1, 0x40);
}

void fn_8036727C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

void fn_80367284(void *arg0, s32 arg1) {
    M2C_UNK fn_8039A8DC(void *, s32, s32);
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    fn_8039A8DC((u8 *)arg0 + 0x48, arg1, 0);
}

void fn_803672B8(void) {

}

s32 fn_803672BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

s32 fn_803672C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

void *fn_803672CC(void *arg0, void *arg1, s32 arg2) {
    M2C_UNK fn_8039ABB0(void *, void *);
    u8 *src = M2C_FIELD(arg1, u8 **, 0x48) + arg2 * 0x60;
    f32 *d = (f32 *)((u8 *)arg0 + 4);
    f32 *s = (f32 *)(src + 4);
    M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(src, s32 *, 0);
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    fn_8039ABB0((u8 *)arg0 + 0x10, src + 0x10);
    M2C_FIELD(arg0, f32 *, 0x50) = M2C_FIELD(src, f32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x54) = M2C_FIELD(src, f32 *, 0x54);
    M2C_FIELD(arg0, f32 *, 0x58) = M2C_FIELD(src, f32 *, 0x58);
    M2C_FIELD(arg0, f32 *, 0x5C) = M2C_FIELD(src, f32 *, 0x5C);
    return arg0;
}

void *fn_803674D8(u32 size) {
    extern char lbl_80446F34[];
    if (size == 0x70) {
        void *p = ScratchPool_Alloc((ScratchPool *)lbl_80446F34);
        if (p != NULL) {
            return p;
        }
    }
    return Heap_Alloc(size);
}

void fn_80367590(void *p) {
    extern char lbl_80446F34[];
    void fn_802D1A00(void *, void *);
    if (ScratchPool_Contains((ScratchPool *)lbl_80446F34, p)) {
        ScratchPool_Free((ScratchPool *)lbl_80446F34, p);
    } else {
        fn_802D1A00(fn_802D0AB8(), p);
    }
}

s32 fn_80367610(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x18) * M2C_FIELD(arg0, s16 *, 0x1C)) + 0x23;
}

void *fn_80368B40(void *arg0) {
    extern char lbl_80401368[];
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 8) = lbl_80401368;
    return arg0;
}

void *fn_80368B60(void *arg0, void *arg1) {
    extern char lbl_80401368[];
    void fn_80369900(void *, void *, s32);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 8) = lbl_80401368;
    fn_80369900(arg0, arg1, 1);
    return arg0;
}

extern char lbl_80401368[];
void fn_80368BAC(void *arg0, void *arg1) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg1, void **, 4);
    M2C_FIELD(arg1, void **, 4) = M2C_FIELD(temp_r11, void **, 0);
    temp_r10 = M2C_FIELD(temp_r11, void **, 0);
    if (temp_r10 != lbl_80401368) {
        M2C_FIELD(temp_r10, void **, 8) = arg1;
    }
    if (temp_r11 != lbl_80401368) {
        M2C_FIELD(temp_r11, void **, 8) = M2C_FIELD(arg1, void **, 8);
    }
    temp_r9 = M2C_FIELD(arg1, void **, 8);
    if (temp_r9 != NULL) {
        if (arg1 == M2C_FIELD(temp_r9, void **, 0)) {
            M2C_FIELD(temp_r9, void **, 0) = temp_r11;
        } else {
            M2C_FIELD(temp_r9, void **, 4) = temp_r11;
        }
    } else {
        M2C_FIELD(arg0, void **, 8) = temp_r11;
    }
    M2C_FIELD(temp_r11, void **, 0) = arg1;
    if (arg1 != lbl_80401368) {
        M2C_FIELD(arg1, void **, 8) = temp_r11;
    }
}

void fn_80368C28(void *arg0, void *arg1) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg1, void **, 0);
    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(temp_r11, void **, 4);
    temp_r10 = M2C_FIELD(temp_r11, void **, 4);
    if (temp_r10 != &lbl_80401368) {
        M2C_FIELD(temp_r10, void **, 8) = arg1;
    }
    if (temp_r11 != &lbl_80401368) {
        M2C_FIELD(temp_r11, void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
    }
    temp_r9 = M2C_FIELD(arg1, void **, 8);
    if (temp_r9 != NULL) {
        if (arg1 == (void *) M2C_FIELD(temp_r9, void **, 4)) {
            M2C_FIELD(temp_r9, void **, 4) = temp_r11;
        } else {
            M2C_FIELD(temp_r9, void **, 0) = temp_r11;
        }
    } else {
        M2C_FIELD(arg0, void **, 8) = temp_r11;
    }
    M2C_FIELD(temp_r11, void **, 4) = arg1;
    if (arg1 != &lbl_80401368) {
        M2C_FIELD(arg1, void **, 8) = temp_r11;
    }
}

void fn_80368CA4(void *arg0, void *arg1) {
    void *y;

    while (arg1 != M2C_FIELD(arg0, void **, 8) && M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) == 1) {
        if (M2C_FIELD(arg1, void **, 8) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), void **, 0)) {
            y = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), void **, 4);
            if (M2C_FIELD(y, s32 *, 0x14) == 1) {
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 0;
                M2C_FIELD(y, s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), s32 *, 0x14) = 1;
                arg1 = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8);
            } else {
                if (arg1 == M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 4)) {
                    arg1 = M2C_FIELD(arg1, void **, 8);
                    fn_80368BAC(arg0, arg1);
                }
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), s32 *, 0x14) = 1;
                fn_80368C28(arg0, M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8));
            }
        } else {
            y = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), void **, 0);
            if (M2C_FIELD(y, s32 *, 0x14) == 1) {
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 0;
                M2C_FIELD(y, s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), s32 *, 0x14) = 1;
                arg1 = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8);
            } else {
                if (arg1 == M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0)) {
                    arg1 = M2C_FIELD(arg1, void **, 8);
                    fn_80368C28(arg0, arg1);
                }
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8), s32 *, 0x14) = 1;
                fn_80368BAC(arg0, M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8));
            }
        }
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x14) = 0;
}

s32 fn_80368DEC(void *arg0, s32 arg1) {
    void fn_80369670(void *, s32, s32 *);
    s32 sp8;

    fn_80369670(arg0, arg1, &sp8);
    return sp8;
}

s32 fn_80368E14(s32 arg0, s32 arg1) {
    s32 fn_802D3EE8(s32, s32);
    s32 fn_80368E80();
    s32 fn_80369088(s32, s32, s32, M2C_UNK);
    s32 temp_r3;

    temp_r3 = fn_80368E80();
    if ((temp_r3 != 0) && (fn_802D3EE8(temp_r3 + 0x1C, arg1) == 0)) {
        return temp_r3 + 0x18;
    }
    return fn_80369088(arg0, temp_r3, arg1, 0) + 0x18;
}

void *fn_80368E80(void *arg0, s32 arg1) {
    s32 fn_802D3EE8(s32, s32);
    char *var_r31;
    char *var_r30;

    var_r30 = M2C_FIELD(arg0, char **, 8);
    var_r31 = NULL;
    while (var_r30 != lbl_80401368) {
        if (fn_802D3EE8((s32)(var_r30 + 0x1C), arg1) == 0) {
            return var_r30;
        }
        var_r31 = var_r30;
        var_r30 = fn_802D3EE8((s32)(var_r30 + 0x1C), arg1) > 0 ? M2C_FIELD(var_r31, char **, 0) : M2C_FIELD(var_r31, char **, 4);
    }
    return var_r31;
}

void *fn_80368F18(void *arg0, s32 arg1) {
    s32 fn_802D3EE8(s32, s32);
    char *var_r0;
    char *var_r31;

    var_r0 = M2C_FIELD(arg0, char **, 8);
    var_r31 = NULL;
    while (var_r0 != lbl_80401368) {
        var_r31 = var_r0;
        if (fn_802D3EE8((s32)(var_r31 + 0x1C), arg1) > 0) {
            var_r0 = M2C_FIELD(var_r31, char **, 0);
        } else {
            var_r0 = M2C_FIELD(var_r31, char **, 4);
        }
    }
    return var_r31;
}

void fn_803691F4(void *arg0, void *arg1) {
    void *w;

    while (arg1 != M2C_FIELD(arg0, void **, 8) && M2C_FIELD(arg1, s32 *, 0x14) == 0) {
        if (arg1 == M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0)) {
            w = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 4);
            if (M2C_FIELD(w, s32 *, 0x14) == 1) {
                M2C_FIELD(w, s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 1;
                fn_80368BAC(arg0, M2C_FIELD(arg1, void **, 8));
                w = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 4);
            }
            if (M2C_FIELD(M2C_FIELD(w, void **, 0), s32 *, 0x14) == 0 &&
                M2C_FIELD(M2C_FIELD(w, void **, 4), s32 *, 0x14) == 0) {
                M2C_FIELD(w, s32 *, 0x14) = 1;
                arg1 = M2C_FIELD(arg1, void **, 8);
            } else {
                if (M2C_FIELD(M2C_FIELD(w, void **, 4), s32 *, 0x14) == 0) {
                    M2C_FIELD(M2C_FIELD(w, void **, 0), s32 *, 0x14) = 0;
                    M2C_FIELD(w, s32 *, 0x14) = 1;
                    fn_80368C28(arg0, w);
                    w = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 4);
                }
                M2C_FIELD(w, s32 *, 0x14) = M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14);
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(w, void **, 4), s32 *, 0x14) = 0;
                fn_80368BAC(arg0, M2C_FIELD(arg1, void **, 8));
                arg1 = M2C_FIELD(arg0, void **, 8);
            }
        } else {
            w = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0);
            if (M2C_FIELD(w, s32 *, 0x14) == 1) {
                M2C_FIELD(w, s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 1;
                fn_80368C28(arg0, M2C_FIELD(arg1, void **, 8));
                w = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0);
            }
            if (M2C_FIELD(M2C_FIELD(w, void **, 4), s32 *, 0x14) == 0 &&
                M2C_FIELD(M2C_FIELD(w, void **, 0), s32 *, 0x14) == 0) {
                M2C_FIELD(w, s32 *, 0x14) = 1;
                arg1 = M2C_FIELD(arg1, void **, 8);
            } else {
                if (M2C_FIELD(M2C_FIELD(w, void **, 0), s32 *, 0x14) == 0) {
                    M2C_FIELD(M2C_FIELD(w, void **, 4), s32 *, 0x14) = 0;
                    M2C_FIELD(w, s32 *, 0x14) = 1;
                    fn_80368BAC(arg0, w);
                    w = M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0);
                }
                M2C_FIELD(w, s32 *, 0x14) = M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14);
                M2C_FIELD(M2C_FIELD(arg1, void **, 8), s32 *, 0x14) = 0;
                M2C_FIELD(M2C_FIELD(w, void **, 0), s32 *, 0x14) = 0;
                fn_80368C28(arg0, M2C_FIELD(arg1, void **, 8));
                arg1 = M2C_FIELD(arg0, void **, 8);
            }
        }
    }
    M2C_FIELD(arg1, s32 *, 0x14) = 0;
}

s32 fn_803693D0(void *arg0, s32 arg1) {
    void *fn_80369670(void *, s32, s32 *);
    void fn_80369418(void *, void *);
    void *node;

    node = fn_80369670(arg0, arg1, 0);
    if (node != NULL) {
        fn_80369418(arg0, node);
        return 1;
    }
    return 0;
}

void fn_80369618(void *arg0, void **arg1) {
    s32 fn_803693D0(void *, s32);
    void *node;
    s32 more;

    node = *arg1;
    more = node != NULL;
    for (; more; more = node != NULL) {
        fn_803693D0(arg0, M2C_FIELD(node, s32 *, 0x1C));
        node = M2C_FIELD(node, void **, 0x10);
    }
}

void *fn_80369670(void *arg0, s32 arg1, s32 *arg2) {
    s32 fn_802D3EE8(s32, s32);
    char *node;

    node = M2C_FIELD(arg0, char **, 8);
    while (node != lbl_80401368) {
        if (fn_802D3EE8((s32)(node + 0x1C), arg1) == 0) {
            if (arg2 != NULL) {
                *arg2 = M2C_FIELD(node, s32 *, 0x18);
            }
            return node;
        }
        node = fn_802D3EE8((s32)(node + 0x1C), arg1) > 0 ? M2C_FIELD(node, char **, 0) : M2C_FIELD(node, char **, 4);
    }
    return NULL;
}

void *fn_80369724(void *self, s32 key, s32 *out) {
    void *fn_80369670(void *, s32, s32 *);
    s32 fn_802D3EE8(s32, s32);
    char *n;
    char *next;

    n = (char *)fn_80369670(self, key, 0);
    if (n != NULL) {
    loop:
        next = M2C_FIELD(n, char **, 0xC);
        if (next != NULL && fn_802D3EE8((s32)(next + 0x1C), key) == 0) {
            n = next;
            goto loop;
        }
        if (out != NULL) {
            *out = M2C_FIELD(n, s32 *, 0x18);
        }
    }
    return (void *)n;
}

s32 fn_803698D8(void **arg0) {
    s32 var_r9;
    void *var_r3;

    var_r3 = *arg0;
    var_r9 = 0;
    if (var_r3 != NULL) {
        do {
            var_r3 = M2C_FIELD(var_r3, void **, 0x10);
            var_r9 += 1;
        } while (var_r3 != NULL);
    }
    return var_r9;
}

void fn_80369800(EMat4Node **list);
void *fn_80369988(EMat4Node **self, EMat4Node **other) {
    void fn_80369900(void *, void *, s32);
    fn_80369800(self);
    fn_80369900(self, other, 1);
    return self;
}

void fn_80369AF4(void *arg0, s32 arg1) {
    void fn_8036A180(void *);
    void fn_802D20E8(void *);
    void fn_802D1A00(void *, void *);
    void *fn_802D0AB8(void);

    fn_8036A180(arg0);
    fn_802D1A00(fn_802D0AB8(), M2C_FIELD(arg0, void **, 8));
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

s32 fn_80369B40(void *arg0, u8 *arg1) {
    s32 var_r10;
    s8 var_r9;
    u8 *var_r4;
    u8 var_r11;

    var_r4 = arg1;
    var_r11 = *var_r4;
    var_r10 = 0;
    if ((s32) var_r11 != 0) {
        do {
            var_r9 = (s8) var_r11;
            if ((u32) (var_r9 - 0x61) <= 0x19U) {
                var_r9 -= 0x20;
            }
            var_r11 = M2C_FIELD(var_r4, u8 *, 1);
            var_r4 += 1;
            var_r10 = (var_r10 * 5) + var_r9;
        } while ((s32) var_r11 != 0);
    }
    return var_r10 & M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80369C84(void *arg0, s32 arg1) {
    void fn_8036A04C(void *, s32, s32 *);
    s32 sp8;

    fn_8036A04C(arg0, arg1, &sp8);
    return sp8;
}

void fn_8036A180(void *arg0) {
    extern void fn_802D39F0(s32 *, s32);
    extern void fn_802D20E8(void *);
    extern void fn_80369C48(void *);
    void *node;
    void *next;

    node = M2C_FIELD(arg0, void **, 4);
    while (node != NULL) {
        next = *(void **)node;
        if (node != NULL) {
            fn_802D39F0((s32 *)((u8 *)node + 0xC), M2C_FIELD(node, s32 *, 0xC));
            fn_802D20E8(node);
        }
        node = next;
    }
    M2C_FIELD(arg0, void **, 4) = NULL;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    fn_80369C48(arg0);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}

void fn_8036A1F4(void **list) {
    extern void fn_802D1A00(void *, void *);
    void *n;

    for (n = *list; EStrNode_Valid(n); n = M2C_FIELD(n, void **, 4)) {
        void *value = M2C_FIELD(n, void **, 0x10);
        fn_802D1A00(fn_802D0AB8(), value);
    }
    fn_8036A180(list);
}

s32 fn_8036A258(void **arg0) {
    s32 var_r9;
    void *var_r3;

    var_r3 = *arg0;
    var_r9 = 0;
    if (var_r3 != NULL) {
        do {
            var_r3 = M2C_FIELD(var_r3, void **, 4);
            var_r9 += 1;
        } while (var_r3 != NULL);
    }
    return var_r9;
}

void *fn_8036A280(void *arg0, void *arg1) {
    extern void fn_8036A3C0(void *, void *);
    fn_8036A180(arg0);
    fn_8036A3C0(arg0, arg1);
    return arg0;
}

void fn_8036A2C0(void *arg0, u32 arg1) {
    extern void fn_8036A354(void *);
    while (M2C_FIELD(arg0, u32 *, 0xC) < arg1) {
        fn_8036A354(arg0);
    }
}

void *fn_8036A3C0(void *arg0, void **arg1) {
    void fn_80369D10(void *, s32, void *);
    void *n;

    for (n = *arg1; EStrNode_Valid(n); n = M2C_FIELD(n, void **, 4)) {
        void *value = M2C_FIELD(n, void **, 0x10);
        s32 key = M2C_FIELD(n, s32 *, 0xC);
        fn_80369D10(arg0, key, value);
    }
}

s32 fn_8036A41C(void **arg0, void **arg1) {
    extern void *fn_8036A04C(void *, s32, void **);
    void *n;
    void *found;

    if (fn_8036A258(arg0) != fn_8036A258(arg1)) {
        return 0;
    }
    for (n = *arg1; EStrNode_Valid(n); n = M2C_FIELD(n, void **, 4)) {
        void *value = M2C_FIELD(n, void **, 0x10);
        if (fn_8036A04C(arg0, M2C_FIELD(n, s32 *, 0xC), &found) == NULL || found != value) {
            return 0;
        }
    }
    return 1;
}

void fn_8036A73C(void) {
    M2C_UNK fn_8036A6D4(M2C_UNK, M2C_UNK);
    fn_8036A6D4(1, 0xFFFF);
}

