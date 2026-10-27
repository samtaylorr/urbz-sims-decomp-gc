/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8040E9C8[];
extern void fn_802D20E8(void *);
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

void fn_8010D628(s32 *self, s32 value) {
    *self = value;
}

void fn_8010D630(void *arg0) {
    s32 fn_800C488C();
    M2C_FIELD(arg0, s32 *, 8) = fn_800C488C();
}

extern u8 lbl_8040EBA0[];
void fn_8010D784(void **self, s32 flags) {
    *self = lbl_8040EBA0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8010D8F4(void) {
    fn_8010E984();
    return 1;
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

s32 fn_8010F1E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
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

s32 fn_8010F724(s32 *self) {
    return self[2];
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

void fn_801102DC(void) {

}

s32 fn_80111A54(s32 *self) {
    return *self;
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

void fn_80111FD0(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

void fn_80112168(void) {

}

void fn_8011216C(void) {

}

s32 fn_80112304(s32 arg0) {
    return arg0 >> 8;
}

void fn_8011230C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, u8 *, 1) | (arg1 << 8));
}

s32 fn_80112F68(void *arg0) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0)) * 0xAAAAAAAB) >> 3;
}

s32 fn_80114000(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x120);
}

void fn_80114008(s32 arg0) {
    M2C_UNK fn_800F65C4(s32);
    fn_800F65C4(arg0 + 0x14);
}

void fn_8011402C(s32 arg0) {
    M2C_UNK fn_800F6498(s32);
    fn_800F6498(arg0 + 0x14);
}

void fn_80114318(void *obj, s32 arg1, s32 arg2, s32 arg3) {
    char *vt = *(char **)((char *)obj + 0x10);
    (*(void (**)(void *, s32, s32, s32, s32))(vt + 0x9C))((char *)obj + *(s16 *)(vt + 0x98), arg1, arg2, 0, arg3);
}

void fn_80114EE4(char *self, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    char *vt = *(char **)(self + 0x10);
    (*(void (**)(void *, s32, s32, s32, s32, s32, s32))(vt + 0x104))(self + *(s16 *)(vt + 0x100), a1, a2, a3, a4, 0, a5);
}

void fn_80116748(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14C) = 1;
}

extern s32 lbl_80495B00;
extern void fn_800F1A60(s32, s32);
void fn_80116754(void) {
    fn_800F1A60((s32)&lbl_80495B00, 2);
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

void fn_80116F80(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0x18) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, u16 *, 0x1A) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, u16 *, 0x1C) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) M2C_FIELD(arg1, u16 *, 6);
}

void fn_8011709C(void *arg0) {
    extern s32 lbl_80494438;
    s32 temp_r9;

    temp_r9 = lbl_80494438 + 1;
    lbl_80494438 = temp_r9;
    M2C_FIELD(arg0, s32 *, 0x40) = temp_r9;
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

