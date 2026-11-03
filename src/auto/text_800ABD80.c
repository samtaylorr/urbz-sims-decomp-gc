/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void fn_800ABE24(s32);
extern void fn_802D20E8(s32);
s32 *fn_800ABD80(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

void fn_800ABD94(s32 self, s32 flags) {
    fn_800ABE24(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800ABE24(s32 self) {
    void fn_803379C8(void *, s32);
    extern u8 lbl_8045B82C[];
    if (M2C_FIELD(self, s32 *, 0) != 0) {
        fn_803379C8(lbl_8045B82C, M2C_FIELD(self, s32 *, 0));
        M2C_FIELD(self, s32 *, 0) = 0;
        *M2C_FIELD(self, s32 **, 4) = 0;
        M2C_FIELD(self, s32 **, 4) = NULL;
    }
}

s32 fn_800ABE78(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0) == 0;
}

s32 fn_800ABE88(s32 arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 4) == arg1;
}

s32 fn_800ABE9C(void *self) {
    s32 fn_80336E08(void *, s32);
    extern u8 lbl_8045B82C[];
    if (*M2C_FIELD(self, s32 **, 4) != 0) {
        return 1;
    }
    *M2C_FIELD(self, s32 **, 4) = fn_80336E08(lbl_8045B82C, M2C_FIELD(self, s32 *, 0));
    if (*M2C_FIELD(self, s32 **, 4) != 0) {
        return 1;
    }
    return 0;
}

s32 fn_800ABF0C(void *self) {
    return *M2C_FIELD(self, s32 **, 4) != 0;
}

void *fn_800ABF28(void *self) {
    extern u8 lbl_8040A5C8[];
    struct ABF28 {
        void *items[2];
        u8 unk8;
        s32 unkC;
        s16 unk10;
        s32 unk14;
        void *vtbl;
    } *s = self;
    u8 i;

    s->vtbl = lbl_8040A5C8;
    for (i = 0; i <= 1; i++) {
        s->items[i] = NULL;
    }
    s->unk8 = 0;
    s->unk10 = 0;
    s->unk14 = 0;
    s->unkC = 0;
    return s;
}

void fn_800ABFD4(void *self);
void fn_800ABF78(void *self, s32 flags) {
    extern u8 lbl_8040A5C8[];
    M2C_FIELD(self, void **, 0x18) = lbl_8040A5C8;
    fn_800ABFD4(self);
    if (flags & 1) {
        fn_802D20E8((s32)self);
    }
}

void fn_800ABFC4(void *self) {
    extern s32 lbl_8041FA1C[];
    M2C_FIELD(self, s32 *, 0x14) = lbl_8041FA1C[0];
}

void fn_800ABFD4(void *self) {
    struct ABF28 {
        char *items[2];
        u8 unk8;
        s32 unkC;
        s16 unk10;
    } *s = self;
    u8 i;

    for (i = 0; i <= 1; i++) {
        if (s->items[i] != NULL) {
            char *vt = M2C_FIELD(s->items[i], char **, 0x440);
            (*(void (**)(void *, s32))(vt + 0xC))(s->items[i] + *(s16 *)(vt + 8), 3);
        }
        s->items[i] = NULL;
    }
    s->unk8 = 0;
    s->unk10 = 0;
}

void fn_800AC130(void *self, s32 arg1) {
    u8 i;

    if (M2C_FIELD(self, s32 *, 0xC) != arg1) {
        M2C_FIELD(self, s32 *, 0xC) = arg1;
        if (M2C_FIELD(self, u8 *, 8) != 0) {
            for (i = 0; i <= 1; i++) {
                void *p = *(void **)((u8 *)self + i * 4);
                if (p != NULL) {
                    char *vt = M2C_FIELD(p, char **, 0x440);
                    (*(void (**)(void *, s32))(vt + 0x6C))((char *)p + *(s16 *)(vt + 0x68), arg1);
                }
            }
        }
    }
}

void fn_800AC1B8(void **self, s32 idx) {
    s32 fn_803338F0(s32);
    void *fn_803338D0(s32, s32);
    s32 fn_80311ABC(void *, s32);
    s32 fn_80311A84(void *, s32);
    extern s32 lbl_80494FCC;
    s32 mgr = lbl_80494FCC;
    void *obj;
    s32 r;

    obj = fn_803338D0(mgr, fn_803338F0(mgr));
    if (obj != NULL) {
        r = fn_80311ABC(obj, M2C_FIELD(self[idx], s32 *, 0x30));
        if (r != 0) {
            char *vt = M2C_FIELD(self[idx], char **, 0x440);
            (*(void (**)(void *, s32))(vt + 0x2C))((char *)self[idx] + *(s16 *)(vt + 0x28), r);
        } else {
            r = fn_80311A84(obj, 0);
            if (r != 0) {
                char *vt = M2C_FIELD(self[idx], char **, 0x440);
                (*(void (**)(void *, s32))(vt + 0x34))((char *)self[idx] + *(s16 *)(vt + 0x30), r);
            }
        }
    }
}

void fn_800AC988(void *arg0) {
    void *temp_r9;

    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    temp_r9 = M2C_FIELD(arg0, void **, 0x440);
    M2C_FIELD(temp_r9, void (**)(void *), 0x74)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x70));
}

void fn_800AC9C4(void *arg0) {
    s32 i;

    for (i = 0; i < 0x80; i++) {
        if (fn_800ABE78((char *)arg0 + 0x3C + i * 8) == 0) {
            fn_800ABE9C((char *)arg0 + 0x3C + i * 8);
        }
    }
}

void fn_800ACA14(void) {

}

void fn_800ACA18(void) {

}

void fn_800ACA1C(void) {

}

void fn_800ACA20(void *arg0, s16 arg1, s8 arg2, s8 arg3, s8 arg4) {
    M2C_FIELD(arg0, s16 *, 0x1E) = arg1;
    M2C_FIELD(arg0, s8 *, 0x20) = arg2;
    M2C_FIELD(arg0, s8 *, 0x21) = arg3;
    M2C_FIELD(arg0, s8 *, 0x22) = arg4;
}

void fn_800ACA34(void *arg0, void *arg1, void *arg2) {
    void fn_802C876C(void *);
    void fn_802C9294(void *, f32);
    extern f32 lbl_803CE7B8[];
    extern f32 lbl_803CE7BC[];
    void *temp_r9;
    f32 x;

    temp_r9 = M2C_FIELD(arg1, void **, 4);
    x = (f32)M2C_FIELD(temp_r9, s32 (**)(void *, s32), 0x224)((char *)arg1 + M2C_FIELD(temp_r9, s16 *, 0x220), 1)
        * lbl_803CE7B8[0] * lbl_803CE7BC[0];
    fn_802C876C(arg2);
    fn_802C9294(arg2, -x);
}

void fn_800ACBE8(void) {

}

void fn_800ACDDC(void *self, s32 arg1, s32 arg2) {
    void fn_800ABDD4(void *, s32, s32);
    s32 idx;
    s32 i;
    void *slot;

    idx = M2C_FIELD(self, s32 *, 0x38);
    for (i = 0; i <= 0x7F; i++) {
        slot = (u8 *)self + (idx * 8 + 0x3C);
        if (fn_800ABE78(slot) != 0) {
            fn_800ABDD4(slot, arg1, arg2);
            M2C_FIELD(self, s32 *, 0x38) = idx;
            return;
        }
        idx = (idx + 1) & 0x7F;
    }
}

void fn_800ACE5C(s32 arg0, s32 arg1) {
    s32 fn_800ABE88(s32, s32);
    s32 var_r30;
    s32 var_r31;

    if (arg1 != 0) {
        var_r31 = arg0 + 0x3C;
        var_r30 = 0;
loop_2:
        if (fn_800ABE88(var_r31, arg1) != 0) {
            fn_800ABE24(var_r31);
            return;
        }
        var_r30 += 1;
        var_r31 += 8;
        if (var_r30 > 0x7F) {

        } else {
            goto loop_2;
        }
    }
}

s32 fn_800ACEC0(void *self) {
    s32 fn_800ABF0C(void *);
    s32 i;

    for (i = 0; i < M2C_FIELD(self, s32 *, 0x38); i++) {
        if (fn_800ABF0C((u8 *)self + 0x3C + i * 8) == 0) {
            return 0;
        }
    }
    return 1;
}

void fn_800ACF2C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 4;
}

s32 fn_800ACF38(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14) == 4;
}

void fn_800AD044(void *self, s32 arg1) {
    extern char lbl_8040A410[];
    void fn_800ADF90(void *);
    void fn_800AC8B0(void *, s32);
    *(char **)((u8 *)self + 0x440) = lbl_8040A410;
    fn_800ADF90(self);
    fn_800AC8B0(self, arg1);
}

void fn_800ADBEC(void) {

}

void fn_800ADD24(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 4;
    M2C_FIELD(arg0, s32 *, 0x470) = 3;
    M2C_FIELD(arg0, s32 *, 0x468) = 3;
}

s32 fn_800ADD3C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14) == 4 && M2C_FIELD(arg0, s32 *, 0x470) == 4;
}

void fn_800ADF90(void *arg0) {
    fn_800ACE5C((s32)arg0, (s32)arg0 + 0x444);
    fn_800ACE5C((s32)arg0, (s32)arg0 + 0x448);
    fn_800ACE5C((s32)arg0, (s32)arg0 + 0x44C);
    fn_800ACE5C((s32)arg0, (s32)arg0 + 0x450);
}

s32 fn_800AEB28(void) {
    return 1;
}

void *fn_800AF0C8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4C4) = 1;
    return arg0 + 0x1C;
}

void fn_800AFD2C(void) {

}

void fn_800B01B4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4E0) = 3;
    M2C_FIELD(arg0, s32 *, 0x14) = 4;
}

void fn_800B1DCC(void) {

}

void fn_800B20E8(void *arg0) {
    s32 fn_800B2190(void *);
    M2C_UNK fn_800B2384(void *, s32);
    s32 fn_800B2710(void *, s32 *);
    s32 fn_800B2750(void *, s32 *);
    s32 sp8;
    void *temp_r29;

    temp_r29 = arg0 + 0x444;
    sp8 = M2C_FIELD(arg0, s32 *, 0x7AC);
    sp8 = fn_800B2710(temp_r29, &sp8);
    if ((fn_800B2750(temp_r29, &sp8) != 0) && (fn_800B2190(arg0) != 0)) {
        sp8 = M2C_FIELD(arg0, s32 *, 0x7AC);
        sp8 = fn_800B2710(temp_r29, &sp8);
    }
    if (fn_800B2750(arg0 + 0x444, &sp8) == 0) {
        fn_800B2384(arg0, sp8);
    }
}

void fn_800B24D4(void *arg0, void *arg1) {
    extern f32 lbl_803CEA6C[];
    u8 i;
    struct { s32 unk0; u32 state; f32 val; } *e = arg1;

    M2C_FIELD(arg1, s32 *, 0x64) = 4;
    for (i = 0; i < M2C_FIELD(arg0, u8 *, 0x20); i++) {
        if (e[i].state <= 1) {
            e[i].val = lbl_803CEA6C[0];
            e[i].state = 2;
            e[i + 4].val = lbl_803CEA6C[0];
            e[i + 4].state = 4;
        }
    }
}

void fn_800B2540(void *arg0) {
    void *fn_800B2614(void *);
    void fn_800B259C(void *, void *);
    void fn_800B2634(void *);
    s32 fn_800B26F4(void *);
    void *temp_r31;

    temp_r31 = arg0 + 0x444;
    while (fn_800B26F4(temp_r31) == 0) {
        fn_800B259C(arg0, fn_800B2614(temp_r31));
        fn_800B2634(temp_r31);
    }
}

void fn_800B259C(void *arg0, void *arg1) {
    u8 i;

    for (i = 0; i < M2C_FIELD(arg0, u8 *, 0x20); i++) {
        fn_800ACE5C((s32)arg0, (s32)&((u8 (*)[0xC])((u8 *)arg1 + 0x30))[i]);
    }
}

void fn_800B2600(void *arg0) {
    char *p = arg0;
    M2C_FIELD(p, s32 *, 0x364) = -1;
    M2C_FIELD(p, s32 *, 0x360) = -1;
}

void *fn_800B2614(void *arg0) {
    return arg0 + (M2C_FIELD(arg0, s32 *, 0x360) * 0x6C);
}

void *fn_800B2624(void *arg0) {
    return arg0 + (M2C_FIELD(arg0, s32 *, 0x364) * 0x6C);
}

void fn_800B2634(void *arg0) {
    s32 temp_r11;
    s32 temp_r9;
    s32 var_r0;

    temp_r11 = M2C_FIELD(arg0, s32 *, 0x360);
    if (temp_r11 == M2C_FIELD(arg0, s32 *, 0x364)) {
        M2C_FIELD(arg0, s32 *, 0x364) = -1;
        M2C_FIELD(arg0, s32 *, 0x360) = -1;
        return;
    }
    temp_r9 = temp_r11 + 1;
    var_r0 = temp_r9;
    if (0 > temp_r9) {
        var_r0 = temp_r11 + 8;
    }
    M2C_FIELD(arg0, s32 *, 0x360) = (s32) (temp_r9 - (var_r0 & 0xFFFFFFF8));
}

s32 fn_800B2678(void *arg0) {
    s32 fn_800B26F4();
    s32 temp_r11;
    s32 temp_r9;
    s32 var_r0;
    s32 var_r0_2;

    if (fn_800B26F4() != 0) {
        var_r0 = 0;
        M2C_FIELD(arg0, s32 *, 0x360) = 0;
        goto block_6;
    }
    temp_r9 = M2C_FIELD(arg0, s32 *, 0x364);
    temp_r11 = temp_r9 + 1;
    var_r0_2 = temp_r11;
    if (temp_r11 < 0) {
        var_r0_2 = temp_r9 + 8;
    }
    var_r0 = temp_r11 - (var_r0_2 & 0xFFFFFFF8);
    if (var_r0 == (s32) M2C_FIELD(arg0, s32 *, 0x360)) {
        return 0;
    }
block_6:
    M2C_FIELD(arg0, s32 *, 0x364) = var_r0;
    return 1;
}

s32 fn_800B26F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x360) == -1;
}

s32 fn_800B2708(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x360);
}

s32 fn_800B2710(void *arg0, s32 *arg1) {
    s32 v = *arg1;
    if (v == -1) {
        return -1;
    }
    if (v == M2C_FIELD(arg0, s32 *, 0x364)) {
        return -1;
    }
    return (v + 1) % 8;
}

s32 fn_800B2750(void *arg0, s32 *arg1) {
    return *arg1 == -1;
}

s32 fn_800B2764(s32 arg0, s32 *arg1) {
    return arg0 + (*arg1 * 0x6C);
}

s32 fn_800B2C1C(void *arg0) {
    s32 fn_800B26F4(void *);
    extern s32 lbl_803CEADC[];
    u8 *e;

    if (fn_800B26F4((char *)arg0 + 0x444) != 0) {
        return 0;
    }
    e = (u8 *)fn_800B2764((s32)((char *)arg0 + 0x444), (s32 *)((char *)arg0 + 0x7AC));
    if (M2C_FIELD(e, s32 *, 0x64) != 2) {
        return 0;
    }
    return lbl_803CEADC[e[e[0x68] * 0xC]];
}

s32 fn_800B2EAC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 8) != 0;
}

s32 fn_800B2EC4(s32 *arg0, s32 arg1) {
    if (arg1 > 1) {
        return 0;
    }
    return arg0[arg1] != 0;
}

s32 fn_800B2EF4(char *self) {
    return *(s32 *)(self + 0xC);
}

s16 fn_800B2EFC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x10);
}

s32 fn_800B2F04(s32 arg0) {
    return arg0 + 0x10;
}

s32 fn_800B2F0C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s16 fn_800B2F14(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x18);
}

s32 fn_800B2F1C(s32 arg0) {
    return arg0 + 0x18;
}

s32 fn_800B2F24(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x1A) != 0;
}

s32 fn_800B2F3C(s32 arg0) {
    return arg0 + 0x1A;
}

s32 fn_800B2F44(s32 arg0) {
    return arg0 + 0x1C;
}

s32 fn_800B2F4C(s32 *self) {
    return self[1];
}

s32 fn_800B2F54(s32 *self) {
    return self[2];
}

u16 fn_800B2F5C(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x1E);
}

u8 fn_800B2F64(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x20);
}

u8 fn_800B2F6C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x21);
}

u8 fn_800B2F74(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x22);
}

s32 fn_800B2F7C(void *arg0, s32 arg1) {
    return (M2C_FIELD(arg0, u8 *, 0x10) & arg1) != 0;
}

void fn_800B2F94(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) (M2C_FIELD(arg0, u8 *, 0x10) | arg1);
}

void fn_800B2FA4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) (M2C_FIELD(arg0, u8 *, 0x10) & ~arg1);
}

s32 fn_800B2FB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 fn_800B2FBC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}

s32 fn_800B2FC4(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_800B2FCC(void) {
    s32 fn_801D7E6C();
    M2C_UNK fn_801D841C(s32, M2C_UNK);
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494600;
    if ((s32) lbl_80494600 == 0) {
        fn_802D1FC8(0x78);
        lbl_80494600 = fn_801D7E6C();
    }
    fn_801D841C(lbl_80494600, 0xF926C0B2);
}

void fn_800B3014(void) {
    M2C_UNK fn_800B2C98(M2C_UNK, M2C_UNK);
    fn_800B2C98(1, 0xFFFF);
}

