/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 pad0[0x14];
    void *unk14;
    u8 pad18[0x2C - 0x18];
    s32 unk2C[1];
} EIWallPartFlags;

extern void fn_802D30D4(void *, s32 *);
extern void fn_802E34F0(void *, void *);
extern void *fn_802D0AB8(void *);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_80248488(void *, s32, u32);

static inline void *EIWallPart_AllocAligned(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void fn_8002DA3C(void) {

}

void fn_8002DA40(void) {

}

void fn_8002DBA4(void *arg0) {
    M2C_UNK fn_8002F824(s32, s32);
    fn_8002F824(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10C));
}

void fn_8002E62C(void *arg0) {
    s32 fn_800F4150(s32, M2C_UNK *, M2C_UNK);
    M2C_UNK fn_802CB5C4(void *, void *);
    extern M2C_UNK lbl_80496720;
    void *temp_r28;
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;
    void *var_r30;

    var_r30 = M2C_FIELD(arg0, void **, 0x4C);
    if (var_r30 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r30, void **, 0);
            temp_r28 = M2C_FIELD(var_r30, void **, 8);
            if (fn_800F4150(temp_r31 + 0x110, &lbl_80496720, 0) != 0) {
                temp_r9 = M2C_FIELD(arg0, void **, 0x44);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, void *), 0x7C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x78), temp_r31);
                if (temp_r31 != NULL) {
                    temp_r9_2 = M2C_FIELD(temp_r31, void **, 0x44);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r31 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
                }
                fn_802CB5C4(arg0 + 0x4C, var_r30);
            }
            var_r30 = temp_r28;
        } while (var_r30 != NULL);
    }
}

void fn_8002EFD0(void *arg0) {
    M2C_UNK fn_8002D800(s32);
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x4C);
    if (var_r31 != NULL) {
        do {
            fn_8002D800(M2C_FIELD(var_r31, s32 *, 0));
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}

s32 fn_8002F014(void *arg0, s32 arg1) {
    s32 fn_800F47E4(s32, s32);
    s32 temp_r30;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x4C);
    if (var_r31 != NULL) {
loop_1:
        temp_r30 = M2C_FIELD(var_r31, s32 *, 0);
        if (fn_800F47E4(temp_r30 + 0x110, arg1) != 0) {
            return temp_r30;
        }
        var_r31 = M2C_FIELD(var_r31, void **, 8);
        if (var_r31 == NULL) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return 0;
}

void fn_8002F818(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
}

s32 fn_80030680(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xAC);
}

u8 fn_80030688(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x3B);
}

u8 fn_800306FC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x3B);
}

u8 fn_80030758(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x3B);
}

s32 fn_80030804(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    switch (arg0) {                                 /* irregular */
    case 3:
        return 1;
    case 9:
        return 7;
    case 6:
        return 8;
    case 1:
        return 2;
    case 2:
        return 3;
    case 12:
        return 6;
    case 4:
        return 4;
    case 8:
        return 5;
    default:
        return 0;
    }
}

void fn_800328F8(char *self, void *arg1) {
    fn_802E34F0(arg1, self + 0x44);
}

s32 fn_80032924(EIWallPartFlags *self, s32 i) {
    return self->unk2C[i];
}

s32 fn_80032934(EIWallPartFlags *self, s32 i) {
    char *node = (char *)self->unk14;

    if (node == NULL) {
        self->unk2C[i] = (s32)node;
        return 0;
    }
    self->unk2C[i] = 1;
    for (; node != NULL; node = *(char **)(node + 8)) {
        void **obj = *(void ***)node;
        char *vt = (char *)*obj;
        s32 r = (*(s32 (**)(void *))(vt + 0x144))((char *)obj + *(s16 *)(vt + 0x140));
        if (r == 0) {
            self->unk2C[i] = r;
            break;
        }
    }
    return self->unk2C[i];
}

void *fn_80032AE0(u32 size) {
    void *p = EIWallPart_AllocAligned(size);

    fn_80248488(p, 0, size);
    return p;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80032BA4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80032BD8(void) {
    fn_802D2FD0();
}

s32 fn_80032BF8(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80032C38(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80033054(void) {
    fn_802D2FD0();
}

s32 fn_80033074(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_800330B4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80033A3C(void) {
    fn_802F4AB8();
}

s16 fn_80034F8C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x322);
}

void fn_80035CD4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_800364C0(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800359FC(s32, s32, s32);
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    if (var_r31 != NULL) {
        do {
            fn_800359FC(M2C_FIELD(var_r31, s32 *, 0), arg1, arg2);
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}

void fn_800382D0(s32 arg0, void **arg1) {
    M2C_UNK fn_800381A4(s32, s32, s32);
    s32 temp_r4;
    void *var_r31;

    var_r31 = *arg1;
    if (var_r31 != NULL) {
        do {
            temp_r4 = M2C_FIELD(var_r31, s32 *, 0);
            fn_800381A4(arg0, temp_r4 + 8, temp_r4 + 0x14);
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}

s32 fn_80039620(void *arg0, s32 arg1, s32 arg2) {
    s32 fn_80039584(void *, s32);
    void ***slot;
    void **list;
    void **node;
    void **p;
    s32 i;
    s32 ret;

    slot = (void ***)((char *)arg0 + 0x70);
    for (i = 0; i <= 3; i++) {
        list = *slot++;
        if (list != NULL) {
            node = (void **)*list;
            if (node != NULL && M2C_FIELD(*node, s32 *, 0x20) == arg1) {
                p = node;
                do {
                    ret = fn_80039584(p[0], arg2);
                    if (ret != 0) {
                        return ret;
                    }
                    p = (void **)p[2];
                } while (p != NULL);
                return 0;
            }
        }
    }
    return 0;
}

typedef struct WallPartRange {
    s32 flag;
    f32 max;
    f32 min;
    f32 unkC;
    f32 scale;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 range;
    f32 inv;
    char *vt;
} WallPartRange;


WallPartRange *fn_80039AB8(WallPartRange *arg0) {
    extern f32 lbl_803C5938[];
    extern f32 lbl_803C593C[];
    extern f32 lbl_803C5940[];
    extern f32 lbl_803C5944[];
    extern f32 lbl_803C5948[];
    extern f32 lbl_803C594C[];
    extern f32 lbl_803C5950[];
    extern char lbl_80407C28[];
    f32 max = lbl_803C5938[0];
    f32 min = lbl_803C593C[0];
    f32 scale = lbl_803C5944[0];
    f32 range = max - min;
    f32 inv = scale / range;
    f32 c = lbl_803C5940[0];
    f32 d = lbl_803C5948[0];
    f32 e = lbl_803C594C[0];
    f32 f = lbl_803C5950[0];

    arg0->vt = lbl_80407C28;
    arg0->flag = 1;
    arg0->unkC = c;
    arg0->unk14 = d;
    arg0->unk18 = e;
    arg0->unk1C = f;
    arg0->max = max;
    arg0->min = min;
    arg0->scale = scale;
    arg0->range = range;
    arg0->inv = inv;
    return arg0;
}

void fn_80039B38(f32 *arg0) {
    extern f32 lbl_803C5954[];
    f32 range;

    if (arg0[6] < arg0[2]) {
        arg0[7] = arg0[2];
    }
    if (arg0[1] < arg0[2]) {
        arg0[1] = arg0[2];
    }
    range = arg0[1] - arg0[2];
    arg0[9] = lbl_803C5954[0] / range;
    arg0[8] = range;
}

extern void *fn_80032AE0(u32);
extern void fn_800331DC(void *);
void *fn_80039DC8(u32 size, void *p);
void fn_80039C54(void) {
    fn_800331DC(fn_80032AE0(0x380));
}

void fn_80039C7C(void *p) {
    fn_800331DC(fn_80039DC8(0x380, p));
}

extern void fn_800352A4(void *, s32);
void fn_80039CA8(void *self) {
    fn_800352A4(self, 2);
}

void fn_80039CCC(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491C00[];
void *fn_80039D0C(void) {
    return lbl_80491C00;
}

extern s32 lbl_80491C0C[];
s32 fn_80039D18(void) {
    return lbl_80491C0C[0];
}

extern s32 lbl_80491C10[];
s32 fn_80039D24(void) {
    return lbl_80491C10[0];
}

extern u16 lbl_80491C14[];
u16 fn_80039D30(void) {
    return lbl_80491C14[0];
}

void *fn_80039D3C(void) {
    return lbl_80491C00;
}

extern u16 lbl_80491C16[];
u16 fn_80039D48(void) {
    return lbl_80491C16[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80039C54(void);
extern void fn_80039C7C(void *);
extern void fn_80039CA8(void *);
extern u8 lbl_803C56AC[];
extern u8 lbl_80491C50[];
void fn_80039D54(s32 arg0) {
    fn_802D6A90(lbl_80491C00, fn_80039C54, fn_80039C7C, fn_80039CA8, arg0, lbl_803C56AC, lbl_80491C50);
}

void fn_80039DA8(void) {
    fn_802D2430();
}

void *fn_80039DC8(u32 size, void *p) {
    return p;
}

s32 fn_80039DD0(void *arg0) {
    s32 ret = 1;
    if (!(M2C_FIELD(arg0, s32 *, 0x300) & 0x30)) {
        ret = 0;
    }
    return ret;
}

s32 fn_80039DE8(s32 arg0) {
    s32 var_r0;

    var_r0 = 1;
    if (!(arg0 & 0x30)) {
        var_r0 = 0;
    }
    return var_r0;
}

void fn_80039E00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x378) = arg1;
}

extern void *fn_80039F7C(u32);
extern void *fn_8003A064(void *);
void fn_80039E08(void) {
    fn_8003A064(fn_80039F7C(0x380));
}

void fn_80039E30(void *p) {
    void *fn_8003A028(u32 size, void *p);
    fn_8003A064(fn_8003A028(0x380, p));
}

void fn_80039E5C(void *self) {
    extern void fn_80032F5C(void *, s32);
    fn_80032F5C(self, 2);
}

void fn_80039E80(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491C28[];
void *fn_80039EC0(void) {
    return lbl_80491C28;
}

extern s32 lbl_80491C34[];
s32 fn_80039ECC(void) {
    return lbl_80491C34[0];
}

extern s32 lbl_80491C38[];
s32 fn_80039ED8(void) {
    return lbl_80491C38[0];
}

extern u16 lbl_80491C3C[];
u16 fn_80039EE4(void) {
    return lbl_80491C3C[0];
}

void *fn_80039EF0(void) {
    return lbl_80491C28;
}

extern u16 lbl_80491C3E[];
u16 fn_80039EFC(void) {
    return lbl_80491C3E[0];
}

extern void fn_80039E08(void);
extern void fn_80039E30(void *);
extern void fn_80039E5C(void *);
extern u8 lbl_803C56B8[];
void fn_80039F08(s32 arg0) {
    fn_802D6A90(lbl_80491C28, fn_80039E08, fn_80039E30, fn_80039E5C, arg0, lbl_803C56B8, lbl_80491C00);
}

void fn_80039F5C(void) {
    fn_802D2430();
}

void *fn_80039F7C(u32 size) {
    extern void *fn_802D197C(void *, u32, s32);
    extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
    extern void *fn_802D0B3C(void);
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void *fn_8003A028(u32 size, void *p);
void *fn_8003A028(u32 size, void *p) {
    return p;
}

void fn_8003A030(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void *fn_8003A064(void *self) {
    extern void fn_800331DC(void *);
    extern u8 lbl_80407988[];
    extern s32 lbl_80494048;
    s32 n;
    fn_800331DC(self);
    n = lbl_80494048;
    *(void **)self = lbl_80407988;
    lbl_80494048 = n + 1;
    return self;
}

s32 fn_8003A0AC(void) {
    return 0;
}

void *fn_8003A0B4(char *self) {
    extern void fn_80105508(void *);
    extern f32 lbl_803C5958[];
    extern u8 lbl_80407950[];
    s32 *p;
    f32 f;

    *(void **)(self + 0x3C) = lbl_80407950;
    fn_80105508(self);
    fn_80105508(self + 3);
    p = (s32 *)(self + 0x14);
    p[1] = 0;
    f = lbl_803C5958[0];
    p[0] = 0;
    p[2] = 1;
    *(s32 *)(self + 0x2C) = 0;
    *(f32 *)(self + 0x34) = f;
    *(s32 *)(self + 0x30) = 0;
    *(f32 *)(self + 0x38) = f;
    return self;
}

void fn_8003A128(void *obj) {
    if (obj != NULL) {
        char *vt = *(char **)((char *)obj + 0x3C);
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

f32 fn_8003A168(void *self, s32 i) {
    return ((struct { u8 pad[0x34]; f32 unk34[2]; } *)self)->unk34[i];
}

void fn_8003A178(void) {
    M2C_UNK fn_80039B84(M2C_UNK, M2C_UNK);
    fn_80039B84(1, 0xFFFF);
}

void fn_8003A1A4(void) {
    void fn_80039B84(s32, s32);
    fn_80039B84(0, 0xFFFF);
}

