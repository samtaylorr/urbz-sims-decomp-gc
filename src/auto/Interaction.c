/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8040E9C8[];
extern void *lbl_80496648;
extern void *lbl_80496654;
extern void *lbl_80496668;
void fn_801914E4(void *);
void fn_80190640(void *);
void fn_801906D4(void *);
void fn_8018DD8C(void *, void *);
void fn_8018D8DC(void *, void *, s32);
extern void fn_802D20E8(void *);

typedef struct {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
} IntObj;

typedef struct {
    u8 pad0[0xc];
    IntObj *obj;
    u8 pad10[0x48];
} IntItem;

typedef struct {
    IntItem *begin;
    IntItem *end;
    s32 unk8;
    IntItem *cap;
    s32 unk10;
    s32 unk14;
} IntGroup;

typedef struct {
    IntGroup *begin;
    IntGroup *end;
} IntGroupVec;

void **fn_8010D2E8(void **self) {
    void fn_8010D388(s32);
    *self = lbl_8040E9C8;
    fn_8010D388((s32)self);
    return self;
}

void fn_8010D324(void **self, s32 flags) {
    *self = lbl_8040E9C8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8010D358(s32 arg0, s32 arg1) {
    M2C_UNK fn_8018D72C(s32, s32, M2C_UNK);
    fn_8018D72C(arg1, arg0 + 4, 0x27);
}

void fn_8010D388(s32 arg0) {
    M2C_UNK fn_80248488(s32, M2C_UNK, M2C_UNK);
    fn_80248488(arg0 + 4, 0, 0x4E);
}

s32 fn_8010D3B4(void *self, s32 i) {
    return ((struct { u8 pad[0x4]; s16 a[1]; } *)self)->a[i];
}

void fn_8010D3C4(void *self, s32 i, s16 v) {
    ((struct { u8 pad[0x4]; s16 a[1]; } *)self)->a[i] = v;
}

s32 fn_8010D3D4(void *self, s32 start, s32 end, s32 bit) {
    struct Vtbl { u8 pad[8]; s16 delta; s16 index; s16 (*func)(void *, s32); };
    s16 mask;

    if (start < 0 || start > end) {
        return 0;
    }
    if (end > 0x26) {
        return 0;
    }
    mask = 1 << (s16)(bit % 16);
    return (s16)((*(struct Vtbl **)self)->func((u8 *)self + (*(struct Vtbl **)self)->delta, start + bit / 16) & mask) != 0;
}

s32 fn_8010D590(void **self) {
    s32 i;
    for (i = 0; i <= 16; i++) {
        char *vt = *(char **)self;
        if ((*(s32 (**)(void *, s32, s32))(vt + 0x2c))((char *)self + *(s16 *)(vt + 0x28), 4, i) == 0) {
            break;
        }
    }
    return i + 1;
}

void *fn_8010D7B8(void **self);
void fn_8010D5F8(void) {
    void *fn_802D1FC8(s32);
    extern void *lbl_80495AF8;
    void *p;
    p = fn_8010D7B8(fn_802D1FC8(0x41c));
    lbl_80495AF8 = p;
}

void fn_8010D628(s32 *self, s32 value) {
    *self = value;
}

void fn_8010D630(void *arg0) {
    s32 fn_800C488C();
    M2C_FIELD(arg0, s32 *, 8) = fn_800C488C();
}

void fn_8010D72C(void **self, s32 arg1) {
    void fn_8033789C(void *, void *);
    void fn_802D1A00(void *, void *);
    void *fn_802D0AB8(void);
    extern void *lbl_8049627C;

    if (self[4] != 0) {
        fn_8033789C(lbl_8049627C, self[0]);
    }
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), self);
    }
}

extern u8 lbl_8040EBA0[];
void fn_8010D784(void **self, s32 flags) {
    *self = lbl_8040EBA0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void *fn_8010D7B8(void **self) {
    extern u8 lbl_8040EA18[];
    void fn_80248488(s32, s32, s32);
    *self = lbl_8040EA18;
    fn_80248488((s32)self + 4, 0, 0x400);
    self[260] = (void *)1;
    self[257] = 0;
    self[258] = 0;
    self[259] = 0;
    self[261] = 0;
    self[262] = 0;
    return self;
}

s32 fn_8010D8F4(void) {
    fn_8010E984();
    return 1;
}

void *fn_8010D918(void *arg0, s32 arg1) {
    extern void *fn_802D0AB8(void *);
    extern void *fn_802D197C(void *heap, u32 size, u32 align);
    extern void *fn_802D0B3C(void);
    extern void *fn_802DC9F4(void *heap, u32 size, s32 arg2, s32 arg3);
    extern void fn_80248488(void *, s32, s32);
    void *fn_8010E98C(void *);
    void *heap;
    void *p;
    void *q;
    void *r;

    heap = ((void *(*)(void))fn_802D0AB8)();
    p = fn_802D197C(heap, 0x3C, 4);
    if (p == NULL) {
        p = fn_802DC9F4(heap, 0x3C, 1, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            q = fn_802DC9F4(fn_802D0B3C(), 0x3C, 1, 0);
            goto done;
        }
    } else {
        fn_80248488(p, 0, 0x3C);
    }
    q = p;
done:
    r = fn_8010E98C(q);
    M2C_FIELD(r, s32 *, 0x14) = arg1;
    return r;
}

void *fn_8010D9B8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern void *fn_802D0AB8(void *);
    extern void *fn_802D197C(void *heap, u32 size, u32 align);
    extern void *fn_802D0B3C(void);
    extern void *fn_802DC9F4(void *heap, u32 size, s32 arg2, s32 arg3);
    extern void fn_80248488(void *, s32, s32);
    void *fn_8010F4B0(void *);
    void *heap;
    void *p;
    void *q;
    void *r;

    heap = ((void *(*)(void))fn_802D0AB8)();
    p = fn_802D197C(heap, 0x28, 4);
    if (p == NULL) {
        p = fn_802DC9F4(heap, 0x28, 1, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            q = fn_802DC9F4(fn_802D0B3C(), 0x28, 1, 0);
            goto done;
        }
    } else {
        fn_80248488(p, 0, 0x28);
    }
    q = p;
done:
    r = fn_8010F4B0(q);
    M2C_FIELD(r, s32 *, 0x14) = arg1;
    M2C_FIELD(r, s32 *, 0xC) = arg2;
    M2C_FIELD(r, s32 *, 0x10) = arg3;
    return r;
}

void fn_8010DA6C(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x38) = (void *) M2C_FIELD(arg0, void **, 0x404);
    M2C_FIELD(arg0, void **, 0x404) = arg1;
}

void fn_8010DA7C(void *arg0, void *arg1) {
    void *var_r0;
    void *var_r9;

    var_r0 = M2C_FIELD(arg0, void **, 0x404);
    var_r9 = NULL;
    if (var_r0 != arg1) {
        do {
            var_r9 = var_r0;
            var_r0 = M2C_FIELD(var_r9, void **, 0x38);
        } while (var_r0 != arg1);
    }
    if (var_r9 != NULL) {
        M2C_FIELD(var_r9, void **, 0x38) = (void *) M2C_FIELD(arg1, void **, 0x38);
        return;
    }
    M2C_FIELD(arg0, void **, 0x404) = (void *) M2C_FIELD(arg1, void **, 0x38);
}

void fn_8010DABC(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x24) = (void *) M2C_FIELD(arg0, void **, 0x408);
    M2C_FIELD(arg0, void **, 0x408) = arg1;
}

void fn_8010DACC(void *arg0, void *arg1) {
    void *var_r0;
    void *var_r9;

    var_r0 = M2C_FIELD(arg0, void **, 0x408);
    var_r9 = NULL;
    if (var_r0 != arg1) {
        do {
            var_r9 = var_r0;
            var_r0 = M2C_FIELD(var_r9, void **, 0x24);
        } while (var_r0 != arg1);
    }
    if (var_r9 != NULL) {
        M2C_FIELD(var_r9, void **, 0x24) = (void *) M2C_FIELD(arg1, void **, 0x24);
    } else {
        M2C_FIELD(arg0, void **, 0x408) = (void *) M2C_FIELD(arg1, void **, 0x24);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x40C) == arg1) {
        M2C_FIELD(arg0, s32 *, 0x40C) = 0;
    }
}

void fn_8010DB20(void) {
    extern void *lbl_80495AF8;
    void fn_8010DB58(void *);
    void fn_8010DD7C(void *, s32);
    if (lbl_80495AF8 != NULL) {
        fn_8010DB58(lbl_80495AF8);
        fn_8010DD7C(lbl_80495AF8, 0);
    }
}

void fn_8010E984(void) {

}

void fn_8010E988(void) {

}

void *fn_8010E98C(void *arg0) {
    struct Interaction {
        u8 *vt;
        s32 unk4;
        u8 pad8[0x18];
        s32 unk20;
        s32 unk24;
        f32 unk28;
        f32 unk2C;
        s32 unk30;
        s32 unk34;
    } *self = arg0;
    extern u8 lbl_8040EAF8[];
    extern void *lbl_80495AF8;
    extern f32 lbl_803D71E8[];
    self->vt = lbl_8040EAF8;
    self->unk4 = 1;
    self->unk24 = 0x200;
    self->unk34 = self->unk20 = 0x400;
    fn_8010DA6C(lbl_80495AF8, self);
    self->unk2C = self->unk28 = lbl_803D71E8[0];
    return self;
}

void fn_8010E9FC(void **arg0, s32 arg1) {
    extern u8 lbl_8040EAF8[];
    extern void *lbl_80495AF8;
    extern void fn_8010F2BC(void *);
    extern void *fn_802D0AB8(void);
    extern void fn_802D1A00(void *, void *);

    *arg0 = lbl_8040EAF8;
    fn_8010F2BC(arg0);
    fn_8010DA7C(lbl_80495AF8, arg0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

s32 fn_8010EA58(void) {
    return 1;
}

s32 fn_8010EA60(void *arg0) {
    extern void *lbl_80494FA4;
    s32 count;

    count = M2C_FIELD(arg0, s32 *, 4);
    if (count == 1) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
            s32 q[6];
            void *obj;
            void *vt;
            q[0] = 0;
            obj = lbl_80494FA4;
            vt = *(void **)obj;
            ((void (*)(void *, s32, s32 *))M2C_FIELD(vt, void **, 0xAC))(
                (u8 *)obj + M2C_FIELD(vt, s16 *, 0xA8), M2C_FIELD(arg0, s32 *, 0x1C), q);
            if (q[4] != 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = count;
                M2C_FIELD(arg0, s32 *, 0x20) = 0;
                return M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(arg0, s32 *, 4) - 1;
            }
        }
        if (arg0 != NULL) {
            void *vt = *(void **)arg0;
            ((void (*)(void *, s32))M2C_FIELD(vt, void **, 0x9C))(
                (u8 *)arg0 + M2C_FIELD(vt, s16 *, 0x98), 3);
        }
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 4) = count - 1;
}

s32 fn_8010EB1C(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 4);
}

s32 fn_8010EDCC(void *arg0) {
    extern void *lbl_80494FA4;
    void *t;
    s32 r;
    s32 b;

    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        s32 q[6];
        void *obj;
        void *vt;
        q[0] = 0;
        obj = lbl_80494FA4;
        vt = *(void **)obj;
        ((void (*)(void *, s32, s32 *))M2C_FIELD(vt, void **, 0xAC))(
            (u8 *)obj + M2C_FIELD(vt, s16 *, 0xA8), M2C_FIELD(arg0, s32 *, 0x1C), q);
        return q[4];
    }
    t = M2C_FIELD(arg0, void **, 0x18);
    if (t != NULL) {
        r = M2C_FIELD(arg0, s32 *, 0xC);
        if (r != 0) {
            b = (u32)(M2C_FIELD(t, s32 *, 0x14) - 1) <= 0xFFFFFFEFu;
            if (b != 0) {
                goto zero;
            }
        }
        return r;
    }
zero:
    return 0;
}

s32 fn_8010F020(void) {
    return 1;
}

s32 fn_8010F028(void) {
    return 1;
}

s32 fn_8010F030(u8 *self) {
    return *(s32 *)(self + 0x20);
}

void fn_8010F038(void *arg0, s32 arg1) {
    M2C_UNK fn_8010F078();
    if ((arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x20)) && ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x30) = 1;
    }
    fn_8010F078();
}

s32 fn_8010F164(void *self, s32 arg1, s32 arg2, u32 arg3) {
    extern f32 lbl_803D7200[];
    extern void fn_8010F078(void *, s32);

    if (arg3 < 50) {
        arg3 = 50;
    }
    M2C_FIELD(self, s32 *, 0x30) = (s32)((f32)arg3 / lbl_803D7200[0]);
    fn_8010F078(self, arg2);
    return 1;
}

s32 fn_8010F1E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_8010F1EC(void *self, s32 arg1) {
    typedef struct {
        u32 flags;
        f32 x;
        f32 y;
        s32 pad[3];
    } Q;
    extern void *lbl_80494FA4;
    extern void fn_8010F334(void *, s32, f32 *, f32 *);

    if (arg1 != M2C_FIELD(self, s32 *, 0x24)) {
        M2C_FIELD(self, s32 *, 0x24) = arg1;
        if (M2C_FIELD(self, s32 *, 0x1C) != 0 && M2C_FIELD(self, s32 *, 0x30) == 0) {
            Q q;
            f32 a;
            f32 b;
            void *obj;
            void *vt;
            q.flags = 0;
            fn_8010F334(self, M2C_FIELD(self, s32 *, 0x20), &a, &b);
            q.x = a;
            q.flags |= 1;
            q.y = b;
            q.flags |= 2;
            obj = lbl_80494FA4;
            vt = *(void **)obj;
            ((void (*)(void *, s32, Q *))M2C_FIELD(vt, void **, 0xB4))(
                (u8 *)obj + M2C_FIELD(vt, s16 *, 0xB0), M2C_FIELD(self, s32 *, 0x1C), &q);
        }
    }
    return 1;
}

s32 fn_8010F2A4(void) {
    return 0x5622;
}

s32 fn_8010F2AC(void) {
    return 1;
}

s32 fn_8010F2B4(void) {
    return 1;
}

void fn_8010F2BC(void *self) {
    extern void *lbl_80494FA4;
    void *t;

    if (M2C_FIELD(self, s32 *, 0x1C) != 0) {
        void *obj = lbl_80494FA4;
        void *vt = *(void **)obj;
        ((void (*)(void *, s32))M2C_FIELD(vt, void **, 0x94))(
            (u8 *)obj + M2C_FIELD(vt, s16 *, 0x90), M2C_FIELD(self, s32 *, 0x1C));
        M2C_FIELD(self, s32 *, 0x1C) = 0;
    }
    t = M2C_FIELD(self, void **, 0x18);
    if (t != NULL) {
        M2C_FIELD(t, s32 *, 4) -= 1;
        M2C_FIELD(self, void **, 0x18) = NULL;
    }
}

extern u8 lbl_8040EA50[];
void fn_8010F51C(void **arg0, s32 arg1) {
    extern u8 lbl_8040EA50[];
    extern void *lbl_80495AF8;
    extern void fn_8010FAD4(void *);
    extern void *fn_802D0AB8(void);
    extern void fn_802D1A00(void *, void *);

    *arg0 = lbl_8040EA50;
    fn_8010FAD4(arg0);
    fn_8010DACC(lbl_80495AF8, arg0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

s32 fn_8010F578(void) {
    return 1;
}

s32 fn_8010F580(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 4);
}

s32 fn_8010F594(char *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4) == 1) {
        void *vt = M2C_FIELD(arg0, void **, 0x0);
        M2C_FIELD(vt, void (**)(void *), 0x34)(arg0 + M2C_FIELD(vt, s16 *, 0x30));
        if (arg0 != NULL) {
            vt = M2C_FIELD(arg0, void **, 0x0);
            M2C_FIELD(vt, void (**)(void *, s32), 0x9C)(arg0 + M2C_FIELD(vt, s16 *, 0x98), 3);
        }
        return 0;
    }
    return --M2C_FIELD(arg0, s32 *, 0x4);
}

s32 fn_8010F724(s32 *self) {
    return self[2];
}

s32 fn_8010F72C(char *self) {
    extern void *lbl_80495AF8;
    char *g = lbl_80495AF8;
    if (M2C_FIELD(g, char **, 0x40C) == self) {
        if (M2C_FIELD(self, s32 *, 0x8) != 0) {
            M2C_FIELD(g, s32 *, 0x410) = 1;
            M2C_FIELD(g, s32 *, 0x414) = 1;
            M2C_FIELD(g, s32 *, 0x40C) = 0;
        }
        M2C_FIELD(lbl_80495AF8, s32 *, 0x418) = 0;
    }
    M2C_FIELD(self, s32 *, 0x8) = 0;
    return 1;
}

s32 fn_8010F77C(char *self) {
    extern void *lbl_80495AF8;
    extern void *lbl_80494FA4;
    if (M2C_FIELD(lbl_80495AF8, char **, 0x40C) == self) {
        char *vt = *(char **)lbl_80494FA4;
        (*(void (**)(void *))(vt + 0x54))((char *)lbl_80494FA4 + *(s16 *)(vt + 0x50));
        M2C_FIELD(lbl_80495AF8, s32 *, 0x418) = 1;
    }
    return 1;
}

s32 fn_8010F7D4(char *self) {
    extern void *lbl_80495AF8;
    extern void *lbl_80494FA4;
    if (M2C_FIELD(lbl_80495AF8, char **, 0x40C) == self) {
        char *vt = *(char **)lbl_80494FA4;
        (*(void (**)(void *))(vt + 0x5C))((char *)lbl_80494FA4 + *(s16 *)(vt + 0x58));
        M2C_FIELD(lbl_80495AF8, s32 *, 0x418) = 0;
    }
    return 1;
}

s32 fn_8010F82C(void) {
    return 1;
}

s32 fn_8010F834(void) {
    return 1;
}

s32 fn_8010F83C(s32 *self) {
    return self[6];
}

void fn_8010F844(void *arg0, s32 arg1) {
    M2C_UNK fn_8010F878();
    if (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x18)) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    }
    fn_8010F878();
}

s32 fn_8010FA08(void) {
    return 0x200;
}

s32 fn_8010FA10(void *self, s32 arg1) {
    typedef struct {
        s16 off;
        s16 pad;
        void (*fn)(void *, f32);
    } VEntry;
    extern void *lbl_80495AF8;
    extern void *lbl_80494FA4;
    extern f32 fn_8010FB2C(void *);
    extern f32 fn_8010FB6C(void *);
    void *g;
    void *p;

    g = lbl_80495AF8;
    M2C_FIELD(self, s32 *, 0x1C) = arg1;
    p = M2C_FIELD(g, void **, 0x40C);
    if (p == self && M2C_FIELD(g, s32 *, 0x410) == 0 && M2C_FIELD(p, s32 *, 0x20) == 0) {
        {
            u8 *obj = lbl_80494FA4;
            VEntry *e = (VEntry *)((u8 *)*(void **)obj + 0x60);
            e->fn(obj + e->off, fn_8010FB2C(p));
        }
        {
            u8 *obj = lbl_80494FA4;
            VEntry *e = (VEntry *)((u8 *)*(void **)obj + 0x70);
            e->fn(obj + e->off, fn_8010FB6C(p));
        }
    }
    return 1;
}

s32 fn_8010FABC(void) {
    return 0x5622;
}

s32 fn_8010FAC4(void) {
    return 1;
}

s32 fn_8010FACC(void) {
    return 1;
}

void fn_8010FAD4(void *arg0) {
    extern void *lbl_80495AF8;
    extern void *lbl_80494FA4;
    void *g = lbl_80495AF8;
    void *cur = M2C_FIELD(g, void **, 0x40C);
    if (cur == arg0) {
        void *obj = lbl_80494FA4;
        void *vt;
        M2C_FIELD(cur, s32 *, 8) = 0;
        M2C_FIELD(g, s32 *, 0x40C) = 0;
        M2C_FIELD(g, s32 *, 0x418) = 0;
        vt = *(void **)obj;
        ((void (*)(void *))M2C_FIELD(vt, void **, 0x4C))((u8 *)obj + M2C_FIELD(vt, s16 *, 0x48));
    }
}

f32 fn_8010FB2C(void *arg0) {
    extern f32 lbl_803D7248[];
    return (f32) M2C_FIELD(arg0, s32 *, 0x18) * lbl_803D7248[0];
}

f32 fn_8010FB6C(void *arg0) {
    extern f32 lbl_803D7258[];
    return (f32) (M2C_FIELD(arg0, s32 *, 0x1C) - 0x200) * lbl_803D7258[0];
}

void *fn_8010FBB0(u32 size) {
    extern void *fn_802D0AB8(void);
    void *fn_802D197C(void *heap, u32 size, u32 align);
    void *fn_802D0B3C(void);
    void *fn_802DC9F4(void *heap, u32 size, s32 arg2, s32 arg3);
    void *fn_80248488(void *, s32, u32);
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DC9F4(heap, size, 1, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DC9F4(fn_802D0B3C(), size, 1, 0);
        }
    } else {
        fn_80248488(p, 0, size);
    }
    return p;
}

extern void *fn_802D0AB8(void);
extern void fn_802D1A00(void *, void *);
void fn_8010FC58(void *arg0) {
    fn_802D1A00(fn_802D0AB8(), arg0);
}

void *fn_8010FC8C(u32 size) {
    void *fn_802D197C(void *heap, u32 size, u32 align);
    void *fn_802D0B3C(void);
    void *fn_802DC9F4(void *heap, u32 size, s32 arg2, s32 arg3);
    M2C_UNK fn_80248488(s32, M2C_UNK, M2C_UNK);
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DC9F4(heap, size, 1, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DC9F4(fn_802D0B3C(), size, 1, 0);
        }
    } else {
        fn_80248488((s32)p, 0, size);
    }
    return p;
}

void fn_8010FD34(void *arg0) {
    fn_802D1A00(fn_802D0AB8(), arg0);
}

void fn_8010FD68(void) {
    M2C_UNK fn_8010FDD0();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x24);
    fn_8010FDD0();
}

void fn_8010FD90(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

s32 fn_8010FDD0(void *arg0) {
    struct {
        void *vt;
        u8 unk4[0xC];
        void *vt10;
        s32 unk14;
        u8 unk18[4];
        s32 unk1C;
        s32 unk20;
    } *self = arg0;
    extern u8 lbl_8040ECC0[];
    extern u8 lbl_8040EC00[];
    extern u8 lbl_8040EC20[];
    extern void fn_80105120(void *);
    extern void fn_800EC9AC(void *);

    self->vt = lbl_8040ECC0;
    fn_80105120(self->unk4);
    self->vt10 = lbl_8040EC00;
    self->vt = lbl_8040EC20;
    fn_800EC9AC(self->unk18);
    self->unk14 = 0;
    self->unk1C = 0;
    self->unk20 = 0;
    return (s32)self;
}

void fn_8010FE40(char *self, s32 flags) {
    extern u8 lbl_8040ECC0[];
    extern u8 lbl_8040EC00[];
    extern u8 lbl_8040EC20[];
    extern void fn_801100B8(void *);
    extern void fn_800ECE00(void *, s32);
    extern void fn_8010515C(void *, s32);

    M2C_FIELD(self, void **, 0x10) = lbl_8040EC00;
    M2C_FIELD(self, void **, 0) = lbl_8040EC20;
    fn_801100B8(self);
    fn_800ECE00(self + 0x18, 2);
    fn_8010515C(self + 4, 0);
    M2C_FIELD(self, void **, 0) = lbl_8040ECC0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_801102DC(void) {

}

void fn_80111320(void) {
    extern void *lbl_80496668;
    u8 *obj = lbl_80496668;
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *))(vt + 0x9C))(obj + *(s16 *)(vt + 0x98));
}

s32 fn_801115B4(void *self, void *arg1) {
    extern void *lbl_80496688;
    u8 *obj = lbl_80496688;
    u8 *r;
    r = (*(u8 *(**)(void *))(*(u8 **)obj + 0x3C))(obj + *(s16 *)(*(u8 **)obj + 0x38));
    return (*(s32 (**)(void *, void *))(*(u8 **)r + 0x44))(r + *(s16 *)(*(u8 **)r + 0x40), arg1) != 0;
}

s32 fn_80111624(void *self, u8 *arg1) {
    extern void *lbl_80496688;
    u8 *obj = lbl_80496688;
    u8 *r;
    r = (*(u8 *(**)(void *))(*(u8 **)obj + 0x3C))(obj + *(s16 *)(*(u8 **)obj + 0x38));
    if ((*(s32 (**)(void *, void *))(*(u8 **)r + 0x44))(r + *(s16 *)(*(u8 **)r + 0x40), arg1) != 0
        || (*(s32 (**)(void *, s32))(*(u8 **)(arg1 + 4) + 0xFC))(arg1 + *(s16 *)(*(u8 **)(arg1 + 4) + 0xF8), 0) != 0
        || (*(s32 (**)(void *, s32))(*(u8 **)(arg1 + 4) + 0xFC))(arg1 + *(s16 *)(*(u8 **)(arg1 + 4) + 0xF8), 1) != 0) {
        return 1;
    }
    return 0;
}

void fn_801116E0(void *self) {
    char *obj;
    char *vt;
    fn_801914E4(lbl_80496654);
    fn_80190640(lbl_80496654);
    fn_801906D4(lbl_80496654);
    obj = lbl_80496668;
    M2C_FIELD(*(char **)obj, void (**)(void *), 0x184)(obj + M2C_FIELD(*(char **)obj, s16 *, 0x180));
    vt = *(char **)self;
    M2C_FIELD(vt, void (**)(void *), 0x8C)((char *)self + M2C_FIELD(vt, s16 *, 0x88));
}

void fn_80111754(void *self) {
    char *obj;
    char *vt;
    obj = lbl_80496648;
    if (M2C_FIELD(*(char **)obj, s32 (**)(void *), 0x84)(obj + M2C_FIELD(*(char **)obj, s16 *, 0x80)) != 0) {
        vt = *(char **)self;
        M2C_FIELD(vt, void (**)(void *), 0x8C)((char *)self + M2C_FIELD(vt, s16 *, 0x88));
    }
}

void fn_801117B8(void *self, void *arg1, s32 arg2) {
    s32 buf[2];
    s32 i;
    fn_8018DD8C(arg1, (char *)self + 0x18);
    if (arg2 < 0x5A) {
        for (i = 0; i < 5; i++) {
            fn_8018D8DC(arg1, buf, 1);
            fn_8018D8DC(arg1, buf, 1);
        }
        fn_8018D8DC(arg1, buf, 1);
        fn_8018D8DC(arg1, buf, 1);
    }
}

extern void *lbl_80496648;
extern void *lbl_80496654;
extern void *lbl_80496668;
void fn_801914E4(void *);
void fn_80190640(void *);
void fn_801906D4(void *);
void fn_8018DD8C(void *, void *);
void fn_8018D8DC(void *, void *, s32);
s32 *fn_80111A20(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    arg0[4] = 0;
    arg0[5] = 0;
    arg0[6] = 0;
    arg0[7] = 0;
    arg0[8] = 0;
    arg0[9] = 0;
    return arg0;
}

s32 fn_80111A54(s32 *self) {
    return *self;
}

extern void *lbl_80496688;
extern f32 lbl_80495B90;
s32 fn_80111D68(void) {
    f32 v = *(f32 *)((u8 *)lbl_80496654 + 0x2C) * lbl_80495B90;
    if (v < 0.0f) {
        v = 0.0f;
    }
    if (v > 100.0f) {
        v = 100.0f;
    }
    return (s32)v;
}

s32 fn_80111DB8(char *self) {
    extern const f32 lbl_803D7B58[];
    extern const f32 lbl_803D7B5C[];
    extern const f32 lbl_803D7B60[];
    s32 total = *(s32 *)(self + 0x24);
    f32 t;
    if (total == 0) {
        return 0;
    }
    t = (f32)(total - *(s32 *)(self + 0x20)) / (f32)total;
    if (t < lbl_803D7B58[0]) {
        t = lbl_803D7B58[0];
    }
    if (t > lbl_803D7B5C[0]) {
        t = lbl_803D7B5C[0];
    }
    return (s32)(t * lbl_803D7B60[0]);
}

s32 fn_80111F5C(s32 *self) {
    return self[2];
}

s32 fn_80111F64(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_80111F6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80111F74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_80111F7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_80111F84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_80111F8C(s32 *self) {
    return self[7];
}

s32 fn_80111F94(u8 *self) {
    return *(s32 *)(self + 0x20);
}

void fn_80111F9C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}

void *fn_80111FA8(void) {
    extern void *fn_802D1FC8(s32);
    extern void *fn_80112010(void *);
    return fn_80112010(fn_802D1FC8(0x10));
}

void fn_80111FD0(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

void *fn_80112010(void *self) {
    extern char lbl_8040ED60[];
    M2C_FIELD(self, char **, 0) = lbl_8040ED60;
    M2C_FIELD(self, s32 *, 0x8) = 0;
    M2C_FIELD(self, s32 *, 0x4) = 0;
    M2C_FIELD(self, s32 *, 0xC) = 0;
    return self;
}

void fn_80112034(void *self, s32 id) {
    extern s32 lbl_803F63D4[][2];
    s32 i;
    for (i = 0; i <= 11; i++) {
        if (lbl_803F63D4[i][0] == id) {
            break;
        }
    }
    if (i <= 11) {
        M2C_FIELD(self, s32 **, 0xC) = lbl_803F63D4[i];
        M2C_FIELD(self, s32 *, 0x4) = id;
    }
}

void fn_8011208C(void *self, s32 flags) {
    extern char lbl_8040ED60[];
    extern char lbl_8040EDA0[];
    extern void fn_802D20E8(void *);
    void *p;

    M2C_FIELD(self, char **, 0) = lbl_8040ED60;
    p = M2C_FIELD(self, void **, 0x8);
    if (p != NULL) {
        M2C_FIELD(*(void **)p, void (**)(void *), 0x1C)((u8 *)p + M2C_FIELD(*(void **)p, s16 *, 0x18));
    }
    M2C_FIELD(self, char **, 0) = lbl_8040EDA0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_80112104(void *self, s32 n) {
    extern s16 lbl_803D7C62[];
    s16 *e = M2C_FIELD(self, s16 **, 0xC);
    if (e != NULL && e[2] != -1) {
        return (s16)(e[2] + n);
    }
    if (M2C_FIELD(self, s32 *, 0x4) == 0 && n >= 0 && n <= 18) {
        return lbl_803D7C62[n];
    }
    return 0;
}

void fn_80112168(void) {

}

void fn_8011216C(void) {

}

void fn_80112170(void *self, s32 n, void *out) {
    extern char lbl_803D7C5C[];
    extern void fn_800F69F8(void *, s32);
    extern s32 fn_800F68BC(void *);
    extern void fn_800F68F0(void *, char *, s32);
    extern void fn_800F6CE4(void *, s32);
    void *p;

    fn_8011216C();
    p = M2C_FIELD(self, void **, 0x8);
    if (p != NULL) {
        fn_800F69F8(out, M2C_FIELD(*(void **)p, s32 (**)(void *, s32, s32), 0x84)((u8 *)p + M2C_FIELD(*(void **)p, s16 *, 0x80), n + 1, -1));
    }
    if (fn_800F68BC(out) == 0) {
        fn_800F68F0(out, lbl_803D7C5C, -1);
        fn_800F6CE4(out, n);
    }
}

s32 fn_8011220C(void *self) {
    void *p;

    fn_8011216C();
    p = M2C_FIELD(self, void **, 0x8);
    if (p != NULL) {
        return M2C_FIELD(*(void **)p, s32 (**)(void *, s32), 0x74)((u8 *)p + M2C_FIELD(*(void **)p, s16 *, 0x70), -1);
    }
    return 0;
}

s32 fn_80112268(s32 kind) {
    u8 obj[0x10];
    s32 r = 0;

    fn_80112010(obj);
    fn_80112034(obj, 1);
    switch (kind) {
    case 0:
        r = fn_80112104(obj, 0);
        break;
    case 2:
        r = fn_80112104(obj, 2);
        break;
    case 1:
        r = fn_80112104(obj, 1);
        break;
    }
    fn_8011208C(obj, 2);
    return r;
}

s32 fn_80112304(s32 arg0) {
    return arg0 >> 8;
}

void fn_8011230C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, u8 *, 1) | (arg1 << 8));
}

void fn_80112320(char *self, char *arg1) {
    void fn_8018D72C(void *, void *, s32);
    void fn_8018E178(void *, void *);
    s16 t;
    fn_8018D8DC(arg1, self, 1);
    t = *(s32 *)(self + 4);
    fn_8018D72C(arg1, &t, 1);
    *(s32 *)(self + 4) = t;
    fn_8018D72C(arg1, self + 0xa, 1);
    if (*(s32 *)(arg1 + 0xc) == 0) {
        *(u16 *)(self + 8) = *(u16 *)(self + 0xa);
    }
    fn_8018E178(arg1, self + 0x10);
}

void fn_801123AC(char *self, char *arg1, s32 n) {
    void fn_803A1C88(char *, s32, char *, s32);
    s32 tmp = *(s32 *)(self + 0x10);
    fn_8018D8DC(arg1, &tmp, 1);
    *(s32 *)(self + 0x10) = tmp;
    fn_803A1C88(self, *(s32 *)self, arg1, n);
}

s32 fn_80112410(char **self, s32 id, s32 n) {
    char *outer;
    char *inner;
    if (n < 0) {
        return 0;
    }
    for (outer = self[0]; outer != self[1]; outer += 0x18) {
        for (inner = *(char **)outer; inner != *(char **)(outer + 4); inner += 0x58) {
            if (*(s32 *)inner == id) {
                *(s32 *)inner -= n;
                return 1;
            }
        }
    }
    return 0;
}

IntItem *fn_80112CA4(IntGroupVec *self, IntObj *key, s32 *out, s32 val) {
    IntGroup *g;
    IntItem *it;
    for (g = self->begin; g != self->end; g++) {
        for (it = g->begin; it != g->end; it++) {
            if (it->obj == key) {
                if (val != 0) {
                    g->unk14 = val;
                }
                *out = g->unk10;
                return it;
            }
        }
    }
    *out = 0;
    return 0;
}

s32 fn_80112F68(void *arg0) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0)) * 0xAAAAAAAB) >> 3;
}

s32 fn_80112F88(IntGroupVec *self, s32 n) {
    if (n > 0 && n <= self->end - self->begin) {
        IntGroup *g = &self->begin[n];
        return g[-1].unk10;
    }
    return 0;
}

s32 fn_80112FCC(IntGroupVec *self, s32 id) {
    IntGroup *fn_80112480(IntGroupVec *, s32, s32);
    IntGroup *it = fn_80112480(self, id, 0);
    if (it == self->end) {
        return 0;
    }
    return it->end - it->begin;
}

void fn_8011302C(IntGroupVec *self) {
    void fn_802D1A00(void *, void *);
    void *fn_802D0AB8(void);
    IntGroup *g;
    IntItem *it;

    for (g = self->begin; g != self->end; g++) {
        for (it = g->begin; it != g->end; it++) {
            IntObj *obj = it->obj;
            if (obj != NULL) {
                if (obj->unk8 != 0) {
                    fn_802D1A00(fn_802D0AB8(), (void *)obj->unk4);
                }
                fn_802D1A00(fn_802D0AB8(), obj);
            }
        }
    }
}

void fn_801130C8(IntGroupVec *self) {
    extern void fn_803997AC(void *, u32);
    IntGroup *begin = self->begin;
    IntGroup *end = self->end;
    IntGroup *g;

    for (g = begin; g != end; g++) {
        IntItem *p;
        for (p = g->begin; p != g->end; p++) {
        }
        if (g->begin != 0) {
            u32 size = (u32)((g->cap - g->begin) * sizeof(IntItem));
            if (size > 0x80) {
                fn_802D20E8(g->begin);
            } else {
                fn_803997AC(g->begin, size);
            }
        }
    }
    self->end = begin;
}

s32 fn_80113268(char *self, s32 arg1) {
    char *fn_80112480(char *, s32, s32);
    char *p = fn_80112480(self, arg1, 0);
    if (p == *(char **)(self + 4)) {
        return 0;
    }
    return *(s32 *)(p + 0x14);
}

s32 fn_801132B0(char *self, s32 arg1, s32 result) {
    char *fn_80112480(char *, s32, s32);
    char *p = fn_80112480(self, arg1, 0);
    if (p != *(char **)(self + 4)) {
        char *it;
        for (it = *(char **)(p + 0); it != *(char **)(p + 4); it += 0x58) {
            if (*(s32 *)(it + 4) > result) {
                result = *(s16 *)(it + 6);
            }
        }
    }
    return result;
}

void fn_80113324(char *self, char *arg1, s32 n) {
    void fn_803A2504(char *, s32, char *, s32);
    fn_8018D8DC(arg1, self + 0x10, 1);
    fn_803A2504(self, *(s32 *)self, arg1, n);
}

void *fn_80113378(void *arg0) {
    extern void *fn_8018F8C0(void *);
    extern void *fn_800F60D4(void *);
    extern u8 lbl_8040EF48[];
    extern u8 lbl_8040EF60[];

    fn_8018F8C0(arg0);
    fn_800F60D4((char *)arg0 + 0x14);
    M2C_FIELD(arg0, void **, 0x138) = lbl_8040EF48;
    M2C_FIELD(arg0, void **, 0x10) = lbl_8040EF60;
    M2C_FIELD(arg0, s32 *, 0x140) = -1;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    M2C_FIELD(arg0, s32 *, 0x144) = 0;
    M2C_FIELD(arg0, s32 *, 0x148) = 0;
    M2C_FIELD(arg0, s32 *, 0x14C) = 0;
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
    return arg0;
}

void fn_801133E8(char *self, s32 arg1) {
    extern u8 lbl_8040EF48[];
    extern u8 lbl_8040EF60[];
    void fn_80113B04(char *);
    void fn_800F6134(void *, s32);
    void fn_8018F914(char *, s32);
    *(void **)(self + 0x138) = lbl_8040EF48;
    *(void **)(self + 0x10) = lbl_8040EF60;
    if (fn_8011402C((s32)self) != 0) {
        fn_80113B04(self);
    }
    fn_800F6134(self + 0x14, 0);
    fn_8018F914(self, arg1);
}

s32 fn_80113864(char *self, s32 arg1) {
    s32 fn_800F5FBC(void *, s32);
    void fn_800F60D4(void *);
    void fn_800F618C(void *, s32);
    s32 fn_801139A0(void *, void *, s32);
    void fn_800F631C(void *);
    void fn_800F6134(void *, s32);
    char buf[0x128];
    s32 r;
    char *vt = *(char **)(self + 0x10);
    if ((*(s32 (**)(void *))(vt + 0x64))(self + *(s16 *)(vt + 0x60)) != 0) {
        return -0x2F;
    }
    r = fn_800F5FBC(self + 0x14, arg1);
    if (r != 0) {
        return r;
    }
    fn_800F60D4(buf);
    fn_800F618C(buf, arg1);
    r = fn_801139A0(self, buf, 0);
    fn_800F631C(buf);
    fn_800F6134(buf, 2);
    return r;
}

s32 fn_80113910(char *self, s32 arg1) {
    void fn_800F60D4(void *);
    void fn_800F618C(void *, s32);
    s32 fn_801139A0(void *, void *, s32);
    void fn_800F631C(void *);
    void fn_800F6134(void *, s32);
    char buf[0x128];
    s32 r;
    char *vt = *(char **)(self + 0x10);
    if ((*(s32 (**)(void *))(vt + 0x64))(self + *(s16 *)(vt + 0x60)) != 0) {
        return -0x2F;
    }
    fn_800F60D4(buf);
    fn_800F618C(buf, arg1);
    r = fn_801139A0(self, buf, 0);
    fn_800F631C(buf);
    fn_800F6134(buf, 2);
    return r;
}

s32 fn_80113AA4(char *self, s32 arg1) {
    s32 fn_800F6048(void *, s32);
    char *vt = *(char **)(self + 0x10);
    if ((*(s32 (**)(void *))(vt + 0x64))(self + *(s16 *)(vt + 0x60)) != 0) {
        return -0x2F;
    }
    return fn_800F6048(self + 0x14, arg1);
}

void fn_80113DCC(char *self) {
    void *fn_802D1FC8(s32);
    void fn_800F687C(void *, void *, s32);
    s32 fn_800F65C4(void *, s32);
    char *vt;
    char *obj;
    obj = fn_802D1FC8(0x10C);
    fn_800F687C(obj, obj + 8, 0x104);
    *(char **)(self + 0x150) = obj;
    fn_800F65C4(self + 0x14, (s32)obj);
    vt = *(char **)(self + 0x10);
    (*(void (**)(void *))(vt + 0x44))(self + *(s16 *)(vt + 0x40));
}

s32 fn_80114000(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x120);
}

void fn_80114008(s32 arg0) {
    M2C_UNK fn_800F65C4(s32);
    fn_800F65C4(arg0 + 0x14);
}

s32 fn_8011402C(s32 arg0) {
    s32 fn_800F6498(s32);
    return fn_800F6498(arg0 + 0x14);
}

void fn_80114318(void *obj, s32 arg1, s32 arg2, s32 arg3) {
    char *vt = *(char **)((char *)obj + 0x10);
    (*(void (**)(void *, s32, s32, s32, s32))(vt + 0x9C))((char *)obj + *(s16 *)(vt + 0x98), arg1, arg2, 0, arg3);
}

void fn_80114EE4(char *self, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    char *vt = *(char **)(self + 0x10);
    (*(void (**)(void *, s32, s32, s32, s32, s32, s32))(vt + 0x104))(self + *(s16 *)(vt + 0x100), a1, a2, a3, a4, 0, a5);
}

s32 fn_8011560C(void *self, s32 *arg) {
    extern s32 fn_80115688(void *, s32);
    void *fn_802D0AB8(void);
    void fn_802D1A00(void *, void *);
    void *q;
    s32 r;

    if (arg[0] != -1) {
        r = fn_80115688(self, arg[0]);
        if (r != 0) {
            return r;
        }
    }
    q = (void *)arg[3];
    if (q != NULL) {
        if (M2C_FIELD(q, s32 *, 8) != 0) {
            fn_802D1A00(fn_802D0AB8(), M2C_FIELD(q, void **, 4));
        }
        fn_802D1A00(fn_802D0AB8(), q);
    }
    arg[3] = 0;
    return 0;
}

s32 fn_80115688(void *self, s32 b) {
    extern s32 fn_80115954(void *, s32 *, s32);
    extern s32 fn_801159B8(void *, void *, s32);
    u8 buf[0x50];
    s32 r;

    r = fn_80115954(self, (s32 *)buf, b);
    if (r != 0) {
        return r;
    }
    *(s32 *)buf = 0x58585858;
    *(u16 *)(buf + 0xA) |= 4;
    M2C_FIELD(M2C_FIELD(self, void **, 0x13C), s32 *, 0x10) += *(s32 *)(buf + 4);
    return fn_801159B8(self, buf, b);
}

s32 fn_80115954(void *self, s32 *out, s32 b) {
    extern s32 fn_800F6440(void *, s32);
    extern s32 fn_800F6398(void *, void *, s32 *);
    s32 size = 0x4C;
    void *p = (u8 *)self + 0x14;
    s32 r;

    r = fn_800F6440(p, b);
    if (r != 0) {
        return r;
    }
    r = fn_800F6398(p, out, &size);
    if (r != 0) {
        return r;
    }
    return 0;
}

s32 fn_801159B8(void *self, void *in, s32 b) {
    extern s32 fn_801139A0(void *, void *, s32);
    extern s32 fn_800F6440(void *, s32);
    extern s32 fn_800F5D48(void *, void *, s32 *);
    s32 size;
    void *p;
    s32 r;

    M2C_FIELD(self, s32 *, 0x148) = 1;
    if (M2C_FIELD(self, s32 *, 0x144) != 0) {
        r = fn_801139A0(self, (u8 *)self + 0x14, 0);
        if (r != 0) {
            return r;
        }
    }
    p = (u8 *)self + 0x14;
    r = fn_800F6440(p, b);
    if (r != 0) {
        return r;
    }
    size = 0x4C;
    return fn_800F5D48(p, in, &size);
}

s32 fn_8011608C(void *self, u32 n, s32 arg2) {
    s32 *fn_80112D1C(s32, s32, s32, s32);
    s32 fn_80115954(void *, s32 *, s32);
    s32 buf[20];
    s32 total = 0;
    u16 i = 1;

    if (i <= n) {
        do {
            s32 *p = fn_80112D1C(M2C_FIELD(self, s32 *, 0x13C), arg2, i, 0);
            if (p == NULL) {
                break;
            }
            if (fn_80115954(self, buf, *p) != 0) {
                break;
            }
            total += buf[1];
            i = i + 1;
        } while (i <= n);
    }
    return total;
}

void fn_80116748(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14C) = 1;
}

extern s32 lbl_80495B00;
extern void fn_800F1A60(s32, s32);
void fn_80116754(void) {
    fn_800F1A60((s32)&lbl_80495B00, 2);
}

void *fn_8011677C(void) {
    extern void *lbl_80434BD4[];
    void *fn_802C7DE4(void *);
    void **head = lbl_80434BD4;
    void **p = *head;

    if (p != NULL) {
        *head = *p;
    } else {
        p = fn_802C7DE4(head);
    }
    return p;
}

void fn_801167C0(void **arg0) {
    extern void *lbl_80434BD4[];
    void **head = lbl_80434BD4;

    if (arg0 != NULL) {
        *arg0 = *head;
        *head = arg0;
    }
}

extern u8 lbl_80434BD4[];
void fn_802C7FE8(u8 *arg);
void fn_801168DC(void) {
    fn_802C7FE8(lbl_80434BD4);
}

void *fn_80116904(void *self) {
    extern u8 lbl_8040F088[];
    void fn_800F160C(void *);
    u16 *q;
    M2C_FIELD(self, s32 *, 0x8) = 0;
    M2C_FIELD(self, s32 *, 0xC) = 0;
    M2C_FIELD(self, s32 *, 0x10) = 0;
    M2C_FIELD(self, s32 *, 0x14) = -1;
    M2C_FIELD(self, s32 *, 0x28) = 0;
    M2C_FIELD(self, s16 *, 0x2C) = 0;
    M2C_FIELD(self, u8 **, 0x54) = lbl_8040F088;
    M2C_FIELD(self, f32 *, 0x30) = 0.0f;
    fn_800F160C((u8 *)self + 0x34);
    M2C_FIELD(self, s32 *, 0x4C) = -1;
    M2C_FIELD(self, s32 *, 0x24) = 0;
    M2C_FIELD(self, s32 *, 0x40) = 0;
    M2C_FIELD(self, s32 *, 0x4) = 0;
    q = (u16 *)((u8 *)self + 0x18);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0;
    M2C_FIELD(self, s32 *, 0x44) = 0;
    M2C_FIELD(self, s32 *, 0x48) = -1;
    M2C_FIELD(self, s32 *, 0x50) = 0;
    M2C_FIELD(self, s32 *, 0x20) = 0;
    return self;
}

void *fn_801169A0(void *self, s32 arg1) {
    extern u8 lbl_8040F088[];
    void fn_800F160C(void *);
    void fn_801167DC(void *, s32);
    M2C_FIELD(self, u8 **, 0x54) = lbl_8040F088;
    fn_800F160C((u8 *)self + 0x34);
    M2C_FIELD(self, s32 *, 0x20) = 0;
    M2C_FIELD(self, s32 *, 0x24) = 0;
    fn_801167DC(self, arg1);
    return self;
}

void fn_80116F1C(char *self, s32 arg1) {
    extern u8 lbl_8040F088[];
    void fn_802D211C(void *);
    extern void fn_800F1A60(s32, s32);
    *(void **)(self + 0x54) = lbl_8040F088;
    if (*(void **)(self + 0x24) != 0) {
        fn_802D211C(*(void **)(self + 0x24));
    }
    fn_800F1A60((s32)(self + 0x34), 2);
    if (arg1 & 1) {
        fn_801167C0((void **)self);
    }
}

void fn_80116F80(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0x18) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, u16 *, 0x1A) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, u16 *, 0x1C) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) M2C_FIELD(arg1, u16 *, 6);
}

void fn_80116FA4(char *self, u16 *src, s32 n) {
    void fn_802D211C(void *);
    void *fn_802D2058(s32);
    s32 i;
    if (*(void **)(self + 0x24) != 0) {
        fn_802D211C(*(void **)(self + 0x24));
    }
    *(s32 *)(self + 0x20) = n;
    *(u16 **)(self + 0x24) = fn_802D2058(((n + 3) & ~3) * 2);
    for (i = 0; i < *(s32 *)(self + 0x20); i++) {
        (*(u16 **)(self + 0x24))[i] = src[i];
    }
}

char *fn_8011702C(char *self) {
    char *obj = *(char **)(self + 0xC);
    char *vt;
    char *r;
    char *ret;
    if (obj != 0) {
        vt = *(char **)(obj + 4);
        r = (*(char *(**)(void *))(vt + 0x324))(obj + *(s16 *)(vt + 0x320));
        vt = *(char **)r;
        ret = (*(char *(**)(void *, s32))(vt + 0x8C))(r + *(s16 *)(vt + 0x88), *(s32 *)(self + 0x14));
    } else {
        ret = 0;
    }
    return ret;
}

void fn_8011709C(void *arg0) {
    extern s32 lbl_80494438;
    s32 temp_r9;

    temp_r9 = lbl_80494438 + 1;
    lbl_80494438 = temp_r9;
    M2C_FIELD(arg0, s32 *, 0x40) = temp_r9;
}

char *fn_801170B0(char *self) {
    s32 fn_800F4878(void *);
    void fn_800F1B80(void *, const char *);
    void fn_800F1D2C(void *, s32);
    extern char lbl_803D7E00[];
    char *p = self + 0x34;
    char *obj;
    char *vt;
    if (fn_800F4878(p) == 0) {
        obj = fn_8011702C(self);
        if (obj != 0) {
            vt = *(char **)obj;
            if ((*(s32 (**)(void *))(vt + 0xCC))(obj + *(s16 *)(vt + 0xC8)) != 0) {
                fn_800F1B80(p, lbl_803D7E00);
            }
            vt = *(char **)obj;
            fn_800F1D2C(p, (*(s32 (**)(void *))(vt + 0x1A4))(obj + *(s16 *)(vt + 0x1A0)));
        }
    }
    *(u32 *)(self + 0x44) &= ~0x80;
    return self + 0x34;
}

void fn_80117160(void *arg0) {
    M2C_UNK fn_800F1AA0(s32);
    fn_800F1AA0(arg0 + 0x34);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) | 0x80);
}

s32 fn_80117474(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_8011747C(s32 *self) {
    return self[2];
}

s32 fn_80117484(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void fn_8011748C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

extern s32 lbl_80495B08;
extern void fn_801055FC(s32, s32);
void fn_80117494(void) {
    fn_801055FC((s32)&lbl_80495B08, 2);
}

s32 *fn_801174BC(void) {
    void fn_80246D44(void *);
    extern s32 lbl_80495B0C;
    if (lbl_80495B0C == 0) {
        char *obj = ((char *(*)(void))fn_80117474)();
        char *vt = *(char **)(obj + 4);
        (*(void (**)(void *, void *))(vt + 0x31C))(&lbl_80495B08, obj + *(s16 *)(vt + 0x318));
        lbl_80495B0C = 1;
        fn_80246D44(fn_80117494);
    }
    return &lbl_80495B08;
}

s32 fn_80117520(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 0xCU) & 7;
}

void fn_8011752C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) ((M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFF8FFF) | (arg1 << 0xC));
}

void fn_80117544(s32 arg0, s32 arg1) {
    void fn_802C7D1C(void *);
    void fn_802C7D90(void *, s32);
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_80434BD4;
            fn_802C7D1C(p);
            M2C_FIELD(p, s32 *, 8) = 0x58;
        } else {
            fn_802C7D90(lbl_80434BD4, 2);
        }
    }
}

s32 fn_801175AC(s32 *self) {
    return self[1];
}

f32 fn_801175B4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x30);
}

s16 fn_801175BC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x2C);
}

s32 fn_801175C4(s32 arg0) {
    return arg0 + 0x18;
}

s32 fn_801175CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_801175D4(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_801175DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_801175E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

void fn_801175EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
}

s32 fn_801175F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

void fn_801175FC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

s32 fn_80117604(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3C);
}

void fn_8011760C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}

s32 fn_80117614(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40) != 0;
}

s32 fn_8011762C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

void fn_80117634(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

s32 fn_8011763C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44) & 1;
}

void fn_80117648(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFFFE;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0 | 1);
    }
}

s32 fn_80117668(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 1U) & 1;
}

void fn_80117674(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFFFD;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0 | 2);
    }
}

s32 fn_80117694(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 2U) & 1;
}

void fn_801176A0(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFFFB;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0 | 4);
    }
}

s32 fn_801176C0(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 3U) & 1;
}

void fn_801176CC(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFFF7;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0 | 8);
    }
}

s32 fn_801176EC(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 4U) & 1;
}

void fn_801176F8(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFFEF;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0 | 0x10);
    }
}

s32 fn_80117718(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 5U) & 1;
}

void fn_80117724(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFFDF;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0 | 0x20);
    }
}

s32 fn_80117744(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 6U) & 1;
}

void fn_80117750(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFFBF;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0 | 0x40);
    }
}

s32 fn_80117770(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 7U) & 1;
}

void fn_8011777C(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFF7F;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0 | 0x80);
    }
}

s32 fn_8011779C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 8U) & 1;
}

void fn_801177A8(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFEFF;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0 | 0x100);
    }
}

s32 fn_801177C8(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 9U) & 1;
}

void fn_801177D4(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFDFF;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0 | 0x200);
    }
}

s32 fn_801177F4(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 0xAU) & 1;
}

void fn_80117800(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFFBFF;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0 | 0x400);
    }
}

s32 fn_80117820(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 0xBU) & 1;
}

void fn_8011782C(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) & 0xFFFFF7FF;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0 | 0x800);
    }
}

s32 fn_8011784C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

void fn_80117854(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}

s32 fn_8011785C(void) {
    return 0;
}

s32 fn_80117864(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

s32 fn_8011786C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

s32 fn_80117874(u8 *self) {
    return *(s32 *)(self + 0x50);
}

void fn_8011787C(void) {
    void fn_80117544(s32, s32);
    fn_80117544(1, 0xFFFF);
}

void fn_801178A8(void) {
    void fn_80117544(s32, s32);
    fn_80117544(0, 0xFFFF);
}

