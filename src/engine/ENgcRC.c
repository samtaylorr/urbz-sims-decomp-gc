/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802FB604(void);
extern s32 lbl_80495198;
extern s32 lbl_8049519C;
extern s32 lbl_80495120;
extern s32 lbl_80495124;
extern s32 lbl_803F4668[];
void fn_8034F9F0(u8 *self);
void fn_80351084(u8 *self);
void *fn_80348E8C(u32 size, void *p);
void fn_80345EA8(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80346A88(void *);
    u16 temp_r0;
    u16 temp_r0_2;
    u32 temp_r11;
    u32 temp_r11_2;

    if (arg1 == -1) {
        temp_r11 = M2C_FIELD(arg0, u32 *, 0x30);
        temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u16 *, 4);
        if (temp_r11 > temp_r0) {
            M2C_FIELD(arg0, u32 *, 0x18) = 0U;
        } else {
            M2C_FIELD(arg0, u32 *, 0x18) = (u32) ((u32) (temp_r0 - temp_r11) >> 1U);
        }
    } else {
        M2C_FIELD(arg0, u32 *, 0x18) = (u32) arg1;
    }
    if (arg2 == -1) {
        temp_r11_2 = M2C_FIELD(arg0, u32 *, 0x34);
        temp_r0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u16 *, 6);
        if (temp_r11_2 > temp_r0_2) {
            M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
        } else {
            M2C_FIELD(arg0, u32 *, 0x1C) = (u32) ((u32) (temp_r0_2 - temp_r11_2) >> 1U);
        }
    } else {
        M2C_FIELD(arg0, u32 *, 0x1C) = (u32) arg2;
    }
    fn_80346A88(arg0);
    M2C_FIELD(arg0, u32 *, 0) = (u32) M2C_FIELD(arg0, u32 *, 0x18);
    M2C_FIELD(arg0, u32 *, 4) = (u32) M2C_FIELD(arg0, u32 *, 0x1C);
}

void fn_80345FB0(void) {

}

void fn_80346F5C(void) {

}

void fn_8034713C(void) {
    void fn_80348008(void *);
    void fn_803488E4(void *);
    void fn_80348380(void *);
    void fn_8037A8D8(void *, void *, s32);
    extern struct {
        u8 pad0[0xA7];
        u8 unkA7;
        u8 pad1[0x8];
        s32 unkB0;
        u8 pad2[0x4C];
        struct { u8 pad[0xC]; } unk100[10];
        u8 pad3[0x30];
        struct { u8 pad[0xC]; } unk1A8[3];
    } lbl_8046C400;
    extern struct { u8 pad[0x10]; } lbl_8046C578[3];
    extern u8 lbl_8046DA00[];
    extern s32 lbl_804962A4;
    s32 i;
    if (lbl_8046C400.unkB0 == 0) {
        for (i = 0; i < 10; i++) {
            fn_80348008(&lbl_8046C400.unk100[i]);
        }
    }
    for (i = 0; i < 3; i++) {
        fn_803488E4(&lbl_8046C578[i]);
    }
    if (lbl_8046C400.unkA7 != 0) {
        for (i = 0; i < 3; i++) {
            fn_80348380(&lbl_8046C400.unk1A8[i]);
        }
    }
    fn_8037A8D8(lbl_8046DA00, &lbl_804962A4, 1);
}

s32 fn_803471F4(void) {
    void fn_8037AA00(void *, s32 *, s32);
    extern u8 lbl_8046DA00[];
    s32 sp8;
    fn_8037AA00(lbl_8046DA00, &sp8, 1);
    return sp8 != 0;
}

void fn_80347238(s32 arg0) {
    void fn_8037A938(void *, s32, s32);
    extern u8 lbl_8046DA00[];
    fn_8037A938(lbl_8046DA00, arg0, 1);
}

s32 fn_803474B4(void) {
    s32 fn_80269230(void);
    extern s32 lbl_8046C488[];
    s32 flags = lbl_8046C488[0];
    if (flags & 1) {
        if (fn_80269230() == 0) {
            return 1;
        }
    } else if (flags & 2) {
        if (fn_80269230() == 1) {
            return 1;
        }
    } else {
        return 1;
    }
    return 0;
}

void fn_80347FA4(s32 arg0) {
    void fn_8037A938(void *, s32, s32);
    extern u8 lbl_8046C5F0[];
    fn_8037A938(lbl_8046C5F0, arg0, 1);
}

void fn_80348008(s32 arg0) {
    void fn_8037A938(void *, s32, s32);
    extern u8 lbl_8046C5D0[];
    fn_8037A938(lbl_8046C5D0, arg0, 1);
}

void fn_803481C0(void) {
    s32 fn_80347F70();
    M2C_UNK fn_8034806C(s32);
    M2C_UNK fn_8034828C();
    s32 temp_r30;

loop_1:
    temp_r30 = fn_80347F70();
    fn_8034828C();
    fn_8034806C(temp_r30);
    goto loop_1;
}

void fn_803483F0(s32 arg0) {
    void fn_8037A938(void *, s32, s32);
    extern u8 lbl_8046C3C8[];
    fn_8037A938(lbl_8046C3C8, arg0, 1);
}

void fn_80348954(s32 arg0) {
    void fn_8037A938(void *, s32, s32);
    extern u8 lbl_8046B058[];
    fn_8037A938(lbl_8046B058, arg0, 1);
}

void fn_80348B8C(u8 *arg0, u32 arg1, u8 arg2) {
    u8 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 <= arg1) {
        *arg0 = 0;
        return;
    }
    if (temp_r0 > arg2) {
        *arg0 = arg2;
    }
    *arg0 -= arg1;
}

void fn_80348D80(void *arg0, void *arg1) {
    void *fn_802D1FC8(M2C_UNK);
    s32 temp_r9_2;
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_802D1FC8(0x60);
    M2C_FIELD(arg0, void **, 0x20) = temp_r3;
    temp_r9 = M2C_FIELD(arg1, void **, 0x28);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, void *, M2C_UNK), 0x1C)(arg1 + M2C_FIELD(temp_r9, s16 *, 0x18), temp_r3, 0x60);
    temp_r11 = M2C_FIELD(arg0, void **, 0x20);
    temp_r9_2 = M2C_FIELD(temp_r11, s32 *, 4);
    if (temp_r9_2 & 1) {
        M2C_FIELD(temp_r11, s32 *, 4) = (s32) (temp_r9_2 + 1);
    }
}

void *fn_80348E8C(u32 size, void *p) {
    return p;
}

void fn_80348E94(s32 arg0) {
    M2C_UNK fn_80338184(s32, s32);
    extern s32 lbl_8049627C;
    fn_80338184(lbl_8049627C, arg0);
}

s32 fn_80348EBC(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_80348EC4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

void fn_80348F38(void) {
    fn_802FB604();
}

void fn_8034AD3C(void) {

}

void fn_8034AD40(void) {

}

extern u8 lbl_8046DF78[];
void fn_80359160(u8 *arg);
void fn_8034ADDC(void) {
    fn_80359160(lbl_8046DF78);
}

void fn_8034AFD4(void) {

}

void fn_8034B700(void) {

}

void fn_803552E4(u8 *arg);
void fn_8034BAF8(void) {
    fn_803552E4(lbl_8046DF78);
}

void fn_8034BC04(void) {

}

void fn_8034BC08(void) {

}

void fn_8035B7F8(u8 *arg);
void fn_8034BC0C(void) {
    fn_8035B7F8(lbl_8046DF78);
}

void fn_8035B8CC(u8 *arg);
void fn_8034BC34(void) {
    fn_8035B8CC(lbl_8046DF78);
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8034BCEC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8034BDCC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8034C05C(void) {

}

void fn_8034D53C(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8036A52C(s32, void *);
    void *temp_r29;

    temp_r29 = arg0 + 0x3AC;
    M2C_FIELD(arg0, s32 *, 0x360) = arg2;
    fn_8036A52C(arg1, temp_r29);
    M2C_FIELD(temp_r29, s8 *, 3) = 0x7F;
    M2C_FIELD(arg0, s32 *, 0x3B0) = 0xFFFFFF;
}

s32 fn_8034D5AC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34C);
}

void fn_8034D8E8(void) {

}

void fn_8034D91C(s16 arg0) {
    extern s16 lbl_80495146;
    lbl_80495146 = arg0;
}

void fn_8034F840(void *arg0) {
    s32 fn_80269134();
    M2C_UNK fn_8034D5B4();
    extern s32 lbl_80494E04;
    extern s32 lbl_80494E14;
    extern s32 lbl_804950C0;
    extern f32 lbl_804950C4;
    extern f32 lbl_804950C8;
    extern f32 lbl_804950CC;
    extern f32 lbl_804950D0;
    extern s32 lbl_804950D8;
    extern s32 lbl_804950DC;
    extern s32 lbl_80495130;
    extern s32 lbl_804962D0;
    s32 temp_r0;
    s32 temp_r3;

    if ((s32) lbl_80495130 == 0) {
        fn_8034D5B4();
        temp_r3 = fn_80269134();
        temp_r0 = temp_r3 - M2C_FIELD(arg0, s32 *, 0x35C);
        lbl_80494E04 = temp_r0;
        lbl_80494E14 = (s32) lbl_804962D0 / temp_r0;
        M2C_FIELD(arg0, s32 *, 0x35C) = temp_r3;
    }
    lbl_804950C0 = lbl_804950D8;
    lbl_804950C4 = lbl_804950CC;
    lbl_804950C8 = lbl_804950D0;
    lbl_804950DC += 1;
}

void fn_80270D34(void);
void fn_8034F8BC(void) {
    fn_80270D34();
}

void fn_8034F9CC(void *arg0) {
    M2C_UNK fn_8035C4A8(s32);
    fn_8035C4A8(M2C_FIELD(arg0, s32 *, 0x4D8));
}

void fn_80354938(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x4DC) = (s32) M2C_FIELD(arg1, s32 *, 4);
}

void fn_80354978(void *arg0) {
    M2C_UNK fn_8035C2D8(s32);
    fn_8035C2D8(M2C_FIELD(arg0, s32 *, 0x4D8));
}

void fn_8035499C(void *arg0) {
    M2C_UNK fn_8035C370(s32);
    fn_8035C370(M2C_FIELD(arg0, s32 *, 0x4D8));
}

void fn_8035500C(void) {

}

void fn_80355268(void *arg0, void *arg1) {
    void *temp_r11;
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x4D8);
    M2C_FIELD(temp_r9, s32 *, 0x6EC) = (s32) (M2C_FIELD(temp_r9, s32 *, 0x6EC) | M2C_FIELD(arg1, s32 *, 4));
    temp_r11 = M2C_FIELD(arg0, void **, 0x4D8);
    M2C_FIELD(temp_r11, s32 *, 0x6CC) = (s32) (M2C_FIELD(temp_r11, s32 *, 0x6CC) | 0x80000000 | 0x40);
}

void fn_80355294(void *arg0, void *arg1) {
    void *temp_r11;
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x4D8);
    M2C_FIELD(temp_r9, s32 *, 0x6EC) = (s32) (M2C_FIELD(temp_r9, s32 *, 0x6EC) & M2C_FIELD(arg1, s32 *, 4));
    temp_r11 = M2C_FIELD(arg0, void **, 0x4D8);
    M2C_FIELD(temp_r11, s32 *, 0x6CC) = (s32) (M2C_FIELD(temp_r11, s32 *, 0x6CC) | 0x80000000 | 0x40);
}

void fn_803552C0(void *arg0, void *arg1) {
    void *temp_r11;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), s32 *, 0x6EC) = (s32) M2C_FIELD(arg1, s32 *, 4);
    temp_r11 = M2C_FIELD(arg0, void **, 0x4D8);
    M2C_FIELD(temp_r11, s32 *, 0x6CC) = (s32) (M2C_FIELD(temp_r11, s32 *, 0x6CC) | 0x80000000 | 0x40);
}

void fn_80355DE8(void) {
    if (lbl_80495198 != 0) {
        lbl_80495198 = 0;
    }
}

void fn_80355E00(u8 *self, u8 *arg) {
    if (lbl_8049519C != 0) {
        lbl_8049519C = 0;
    }
    lbl_80495120 = *(s32 *)(arg + 4);
    lbl_80495124 = arg[1];
}

void fn_80355E28(u8 *self) {
    fn_8034F9F0(self);
    fn_80351084(self);
    *(s32 *)(self + 0x510) = 0;
}

void fn_80355E64(u8 *self, u8 *arg) {
    u8 enable;
    u8 mode;
    u8 off;
    s32 on;
    u8 *p;
    s32 val;

    enable = arg[1];
    mode = arg[2];
    off = arg[3];
    on = 0;
    self[0x462C] = enable;
    self[0x462D] = mode;
    self[0x462E] = off;
    if (enable != 0) {
        on = 1;
    }
    p = *(u8 **)(self + 0x4D8);
    val = lbl_803F4668[mode];
    p[0x3B4] = off == 0;
    p[0x3AC] = on;
    *(s32 *)(p + 0x3B0) = val;
    *(u32 *)(p + 0x6CC) |= 0x80000000 | 0x40;
}

extern s32 lbl_804951A4;
void fn_803560D0(void) {
    if (lbl_804951A4 != 0) {
        lbl_804951A4 = 0;
    }
}

extern s32 lbl_804951A8;
void fn_803560E8(void) {
    if (lbl_804951A8 != 0) {
        lbl_804951A8 = 0;
    }
}

void fn_80273F88(void);
void fn_80357AA0(void) {
    fn_80273F88();
}

void fn_80358C9C(void) {
    M2C_UNK fn_80348BC0();
    extern s32 lbl_804950EC;
    fn_80348BC0();
    lbl_804950EC = 1;
}

void fn_80359520(void) {

}

void fn_8035BCFC(void *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    *arg1 = M2C_FIELD(arg0, u8 *, 0x462C);
    *arg2 = M2C_FIELD(arg0, u8 *, 0x462D);
    *arg3 = M2C_FIELD(arg0, u8 *, 0x462E);
}

void fn_8035BD18(void) {
    M2C_UNK fn_8035BC4C(M2C_UNK, M2C_UNK);
    fn_8035BC4C(1, 0xFFFF);
}

