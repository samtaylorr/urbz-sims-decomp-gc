/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void *fn_802D197C(void *heap, u32 size, s32 align);
extern void *fn_802DBBCC(void *heap, u32 size, s32 align);
extern void *fn_802DC3C0(void *heap, u32 size, s32 align, s32, s32);
extern void *fn_802D0B3C(void);
extern void fn_8003FD30(void *);
extern u8 lbl_80407F88[];
extern void *lbl_8049444C;
extern void *lbl_80494450;
void *fn_8003FB24(u32 size);
void fn_8003FBB4(void *arg0);
void fn_802CB8D4(void *);
void fn_802D20E8(void *);

static inline s32 List_Valid(void *n) {
    return n != NULL;
}

static inline void *ESprite_Alloc(void) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    p = fn_802D197C(heap, 0xF0, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, 0xF0, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), 0xF0, 0x10, 0, 0);
        }
    }
    return p;
}
void *fn_8003FB24(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DBBCC(fn_802D0B3C(), size, 0);
        }
    }
    return p;
}

void fn_8003FBB4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8003FBE8(void) {
    lbl_8049444C = fn_8003FB24;
    lbl_80494450 = fn_8003FBB4;
}

void fn_8003FC04(void) {

}

void fn_8003FCD8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, void **, 0xE8) = lbl_80407F88;
    fn_8003FD30(arg0);
    M2C_FIELD(arg0, s32 *, 0x8) = 0;
    if (arg1 & 1) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), arg0);
    }
}

void fn_800402BC(s32 arg0, void *arg1) {
    M2C_UNK fn_800402E8(s32, s32);
    fn_800402E8(M2C_FIELD(arg1, s32 *, 0x18), arg0);
}

void *fn_800413CC(void) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    p = fn_802D197C(heap, 0xF0, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, 0xF0, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), 0xF0, 0x10, 0, 0);
        }
    }
    return p;
}

void fn_80041458(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8004148C(s32 *self) {
    return self[2];
}

s32 fn_80041494(s32 *self) {
    return *self;
}

s32 fn_8004149C(s32 *self) {
    return self[1];
}

void fn_800414A4(s32 *self) {
    self[0] = 1;
}

void fn_800414B0(s32 *self) {
    self[1] = 1;
}

s32 *fn_800414BC(s32 *arg0) {
    arg0[1] = 0;
    arg0[2] = 1;
    arg0[0] = 0;
    return arg0;
}

void fn_800414D8(void *arg0, s32 arg1) {
    void *node;
    char *obj;
    void *next;
    char *e;

    node = M2C_FIELD(arg0, void **, 4);
    while (List_Valid(node)) {
        next = M2C_FIELD(node, void **, 4);
        obj = M2C_FIELD(node, char **, 0);
        if (M2C_FIELD(arg0, s32 *, 8) != 0 && obj != NULL) {
            e = M2C_FIELD(obj, char **, 0xE8) + 8;
            (*(void (**)(void *, s32))(e + 4))(obj + *(s16 *)e, 3);
        }
        node = next;
    }
    fn_802CB8D4(arg0);
    fn_802CB8D4(arg0);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_80041580(void **arg0) {
    M2C_UNK fn_8003FE70(s32);
    M2C_UNK fn_800415D0(void **);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            fn_8003FE70(M2C_FIELD(var_r31, s32 *, 0));
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
    fn_800415D0(arg0);
}

void fn_800415D0(void **arg0) {
    M2C_UNK fn_802CB5C4(void **, void *);
    M2C_UNK fn_8004079C(void *);
    void *node;
    char *obj;
    void *next;
    char *e;

    node = *arg0;
    while (node != NULL) {
        obj = M2C_FIELD(node, char **, 0);
        next = M2C_FIELD(node, void **, 8);
        if (M2C_FIELD(obj, s32 *, 0) != 0) {
            fn_802CB5C4(arg0, node);
            if (obj != NULL) {
                e = M2C_FIELD(obj, char **, 0xE8) + 8;
                (*(void (**)(void *, s32))(e + 4))(obj + *(s16 *)e, 3);
            }
        } else if (M2C_FIELD(obj, s32 *, 4) != 0) {
            fn_8004079C(obj);
        }
        node = next;
    }
}

void fn_80041664(void **arg0) {
    M2C_UNK fn_80040038(s32);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            fn_80040038(M2C_FIELD(var_r31, s32 *, 0));
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}

void fn_800416A8(void *arg0, s32 arg1) {
    M2C_UNK fn_800402E8(s32, s32);
    void *it;

    it = M2C_FIELD(arg0, void **, 0);
    if (it != NULL) {
        do {
            fn_800402E8(M2C_FIELD(it, s32 *, 0), arg1);
            it = M2C_FIELD(it, void **, 8);
        } while (it != NULL);
    }
}

void fn_800416F4(void **arg0, void *arg1) {
    void *node;
    void *obj;

    for (node = *arg0; node != NULL; node = M2C_FIELD(node, void **, 8)) {
        obj = M2C_FIELD(node, void **, 0);
        if (M2C_FIELD(obj, s32 *, 8) != M2C_FIELD(arg1, s32 *, 0x64)) {
            continue;
        }
        M2C_FIELD(obj, s32 *, 4) = 1;
        return;
    }
}

void *fn_8004174C(void *arg0, s32 arg1) {
    extern void *fn_8003FC08(void *);
    extern void fn_802CB69C(void *, void *);
    void *obj;

    obj = fn_8003FC08(ESprite_Alloc());
    M2C_FIELD(obj, s32 *, 8) = arg1;
    fn_802CB69C(arg0, obj);
    return obj;
}

void fn_800417FC(void **arg0, s32 arg1) {
    void *temp_r9;
    void *var_r3;

    var_r3 = *arg0;
    if (var_r3 != NULL) {
        do {
            temp_r9 = M2C_FIELD(var_r3, void **, 0);
            if ((s32) M2C_FIELD(temp_r9, s32 *, 8) == arg1) {
                M2C_FIELD(temp_r9, s32 *, 0) = 1;
            }
            var_r3 = M2C_FIELD(var_r3, void **, 8);
        } while (var_r3 != NULL);
    }
}

void fn_80041830(f32 *m) {
    f32 a0, a1, a2, a3;
    f32 b0, b1, b2, b3;

    a0 = m[0];
    b0 = m[1];
    a1 = m[4];
    b1 = m[5];
    a2 = m[8];
    b2 = m[9];
    a3 = m[12];
    b3 = m[13];
    m[0] = b0;
    m[1] = a0;
    m[4] = b1;
    m[5] = a1;
    m[8] = b2;
    m[9] = a2;
    m[12] = b3;
    m[13] = a3;
}

extern s32 lbl_803F5B24[];
extern s32 lbl_803F5B3C[][9];
extern s32 ***lbl_8041FA4C[];
extern s32 ***lbl_8041FA48[];
s32 fn_80041874(s32 arg0) {
    s32 i;

    for (i = 0; i < 6; i++) {
        if (lbl_803F5B24[i] == arg0) {
            return i;
        }
    }
    return -1;
}

s32 fn_800418AC(s32 arg0) {
    s32 off = arg0 * 4;
    return (*(s32 **)((char *)*lbl_8041FA4C[0] + off))[2];
}

s32 fn_800418C8(s32 arg0) {
    s32 off = arg0 * 4;
    return (*(s32 **)((char *)*lbl_8041FA48[0] + off))[3];
}

s32 fn_800418E4(s32 arg0) {
    s32 i;

    for (i = 0; i < 9; i++) {
        if (lbl_803F5B3C[1][i] == arg0 || lbl_803F5B3C[2][i] == arg0 ||
            lbl_803F5B3C[3][i] == arg0 || lbl_803F5B3C[4][i] == arg0 ||
            lbl_803F5B3C[5][i] == arg0 || lbl_803F5B3C[6][i] == arg0 ||
            lbl_803F5B3C[7][i] == arg0 || lbl_803F5B3C[8][i] == arg0 ||
            lbl_803F5B3C[9][i] == arg0 || lbl_803F5B3C[10][i] == arg0 ||
            lbl_803F5B3C[11][i] == arg0) {
            return lbl_803F5B3C[0][i];
        }
    }
    return arg0;
}

void fn_80041A5C(void) {
    M2C_UNK fn_8004198C(M2C_UNK, M2C_UNK);
    fn_8004198C(1, 0xFFFF);
}

void fn_80041A88(void) {
    M2C_UNK fn_8004198C(M2C_UNK, M2C_UNK);
    fn_8004198C(0, 0xFFFF);
}

