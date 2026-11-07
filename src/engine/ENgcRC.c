/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802FB604(void);
typedef void (*RCOpFn)(void *, u8 *);
typedef struct {
    s16 delta;
    s16 index;
    union {
        RCOpFn pfn;
        s16 delta2;
    } u;
} RCOpPtmf;
typedef struct {
    s16 delta;
    s16 pad;
    RCOpFn fn;
} RCOpVtEnt;
extern s32 lbl_80495198;
extern s32 lbl_8049519C;
extern s32 lbl_80495120;
extern s32 lbl_80495124;
extern s32 lbl_803F4668[];

static inline void RC_SetFog(u8 *p, s32 enable, s32 type, s32 color) {
    *(s32 *)(p + 0x3C4) = 7;
    p[0x3C9] = enable;
    p[0x3C8] = 0;
    *(u32 *)(p + 0x6CC) |= 0x80000000 | 0x40;
    *(s32 *)(p + 0x3B8) = type;
    p[0x3BC] = color;
    *(s32 *)(p + 0x3C0) = enable;
}
void fn_8034F9F0(u8 *self);
void fn_80351084(u8 *self);
void *fn_80348E8C(u32 size, void *p);
void fn_8034F840(void *arg0, void *arg1);
void fn_8034F8BC(void *arg0, void *arg1);
void fn_8034F534(void *arg0, void *arg1);
void fn_8034F58C(void *arg0, void *arg1);
void fn_803529FC(void *arg0, u8 *arg1);
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

void fn_80345F60(void *arg0) {
    void fn_80346AE4(void *);
    void fn_803465D0(void *);
    void fn_802D1A00(s32, s32);
    fn_80346AE4(arg0);
    fn_803465D0(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        fn_802D1A00(M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}

void fn_80345FB0(void) {

}

s32 fn_803465D0(void) {
    void fn_80260574(void *);
    extern u8 lbl_8046C400[];
    u8 *p = lbl_8046C400;

    if (M2C_FIELD(p, s32 *, 0xA0) != 0 && M2C_FIELD(p, u8 *, 0xA4) == 0) {
        M2C_FIELD(p, s32 *, 0xA0) = 0;
        fn_80260574(p);
        return 1;
    }
    return 0;
}

u32 fn_80346620(void) {
    extern u8 lbl_8046C400[];
    u8 *p = lbl_8046C400;
    u32 size;
    u32 pixels;
    u32 a;
    u32 b;

    if (M2C_FIELD(p, s32 *, 0xA0) == 0) {
        return 0;
    }
    if (M2C_FIELD(p, s32 *, 0xB0) != 0) {
        size = (M2C_FIELD(p, u32 *, 0x58) + 0x1F) & ~0x1F;
    } else {
        size = ((M2C_FIELD(p, u32 *, 0x44) + 0x1F) & ~0x1F) * 10;
    }
    p = lbl_8046C400;
    pixels = M2C_FIELD(p, u32 *, 0x80) * M2C_FIELD(p, u32 *, 0x84);
    a = (pixels + 0x1F) & ~0x1F;
    b = ((pixels >> 2) + 0x1F) & ~0x1F;
    size += a * 3;
    size += b * 3;
    size += b * 3;
    if (M2C_FIELD(p, u8 *, 0xA7) != 0) {
        size += ((M2C_FIELD(p, u32 *, 0x48) * 4 + 0x1F) & ~0x1F) * 3;
    }
    return size + 0x1000;
}

s32 fn_80346A88(void) {
    extern u8 lbl_8046C400[];
    u8 *p = lbl_8046C400;
    if (*(s32 *)(p + 0xA0) != 0) {
        if (p[0xA4] == 1 || p[0xA4] == 4) {
            p[0xA4] = 2;
            *(s32 *)(p + 0xC8) = -1;
            *(s32 *)(p + 0xCC) = -1;
            *(s32 *)(p + 0xD4) = 0;
            *(s32 *)(p + 0xD0) = 0;
            return 1;
        }
    }
    return 0;
}

void fn_80346AE4(void) {
    void fn_80266FA0(s32);
    void fn_802646D0(void *);
    void fn_80347E54(void);
    void fn_8034850C(void);
    void fn_80348184(void);
    s32 fn_80347668(void);
    extern u8 lbl_8046C400[];
    extern s32 lbl_80495074;
    u8 *p = lbl_8046C400;
    if (*(s32 *)(p + 0xA0) != 0 && p[0xA4] != 0) {
        p[0xA4] = 0;
        p[0xA5] = 0;
        fn_80266FA0(lbl_80495074);
        if (*(s32 *)(p + 0xB0) == 0) {
            fn_802646D0(p);
        }
        fn_80347E54();
        fn_8034850C();
        if (p[0xA7] != 0) {
            fn_80348184();
        }
        if (fn_80347668() == 0) {
            u8 *q = lbl_8046C400;
            *(s32 *)(q + 0xAC) = 0;
            *(f32 *)(q + 0xDC) = *(f32 *)(q + 0xE0);
            *(s32 *)(q + 0xE8) = 0;
            *(s32 *)(q + 0xA8) = 0;
        }
    }
}

s32 fn_80346B90(void) {
    extern u8 lbl_8046C400[];
    u8 *p = lbl_8046C400;
    if (*(s32 *)(p + 0xA0) != 0 && p[0xA4] == 2) {
        p[0xA5] = 4;
        p[0xA4] = 4;
        return 1;
    }
    return 0;
}

s32 fn_80346E34(s32 arg0, void *arg1) {
    typedef struct { u32 w[3]; } Blk12;
    extern u8 lbl_8046C400[];
    u8 *p = lbl_8046C400;

    if (M2C_FIELD(p, s32 *, 0xA0) != 0) {
        *(Blk12 *)arg1 = *(Blk12 *)(p + 0x80);
        return 1;
    }
    return 0;
}

s32 fn_80346E74(s32 arg0, void *arg1) {
    typedef struct { u32 w[4]; } Blk16;
    extern u8 lbl_8046C400[];
    u8 *p = lbl_8046C400;

    if (M2C_FIELD(p, s32 *, 0xA0) != 0) {
        *(Blk16 *)arg1 = *(Blk16 *)(p + 0x8C);
        return 1;
    }
    return 0;
}

f32 fn_80346EBC(void) {
    extern u8 lbl_8046C400[];
    extern const f32 lbl_803F430C[];
    u8 *p = lbl_8046C400;

    if (M2C_FIELD(p, s32 *, 0xA0) != 0) {
        return M2C_FIELD(p, f32 *, 0x4C);
    }
    return lbl_803F430C[0];
}

s32 fn_80346EE4(void) {
    extern u8 lbl_8046C400[];
    u8 *p = lbl_8046C400;

    if (M2C_FIELD(p, s32 *, 0xA0) == 0) {
        return 0;
    }
    return M2C_FIELD(p, s32 *, 0x50);
}

u8 fn_80346F04(void) {
    extern u8 lbl_8046C4A4[];
    return lbl_8046C4A4[0];
}

void fn_80346F10(void *arg0) {
    s32 fn_80347668(void);
    void fn_803488E4(s32);
    void fn_80270D34(void);
    s32 r;
    fn_80270D34();
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        while ((r = fn_80347668()) != 0) {
            fn_803488E4(r);
        }
    }
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

void fn_80347638(s32 arg0) {
    void fn_8037A938(void *, s32, s32);
    extern u8 lbl_8046DA20[];
    fn_8037A938(lbl_8046DA20, arg0, 0);
}

s32 fn_80347668(void) {
    s32 fn_8037AA00(void *, s32 *, s32);
    extern u8 lbl_8046DA20[];
    s32 sp8;
    if (fn_8037AA00(lbl_8046DA20, &sp8, 0) != 1) {
        return 0;
    }
    return sp8;
}

s32 fn_80347D3C(void) {
    extern u8 lbl_8046C400[];
    u8 *p = lbl_8046C400;
    if (*(s32 *)(p + 0xA0) != 0) {
        return *(f32 *)(p + 0xDC);
    }
    return -1;
}

s32 fn_80347D74(s32 arg0) {
    s32 fn_80258CEC(void *, void (*)(void), s32, void *, s32, s32, s32);
    void fn_8037A8D8(void *, void *, s32);
    void fn_80347E90(void);
    extern u8 lbl_8046C6A8[];
    extern u8 lbl_8046D9C0[];
    extern u8 lbl_8046C5D0[];
    extern u8 lbl_8046C5F0[];
    extern u8 lbl_8046C610[];
    extern u8 lbl_8046C630[];
    extern u8 lbl_8046C658[];
    extern u8 lbl_8046C680[];
    extern s32 lbl_80495070;
    s32 ret;
    if (fn_80258CEC(lbl_8046C6A8, fn_80347E90, 0, lbl_8046D9C0, 0x1000, arg0, 1) != 0) {
        fn_8037A8D8(lbl_8046C5D0, lbl_8046C630, 10);
        fn_8037A8D8(lbl_8046C5F0, lbl_8046C658, 10);
        fn_8037A8D8(lbl_8046C610, lbl_8046C680, 10);
        lbl_80495070 = 1;
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}

void fn_80347E20(void) {
    void fn_80259354(void *);
    extern u8 lbl_8046C6A8[];
    extern s32 lbl_80495070;
    if (lbl_80495070 != 0) {
        fn_80259354(lbl_8046C6A8);
    }
}

void fn_80347E54(void) {
    void fn_80258FB8(void *);
    extern u8 lbl_8046C6A8[];
    extern s32 lbl_80495070;
    if (lbl_80495070 != 0) {
        fn_80258FB8(lbl_8046C6A8);
        lbl_80495070 = 0;
    }
}

s32 fn_80347F70(void) {
    void fn_8037AA00(void *, s32 *, s32);
    extern u8 lbl_8046C5F0[];
    s32 sp8;
    fn_8037AA00(lbl_8046C5F0, &sp8, 1);
    return sp8;
}

void fn_80347FA4(s32 arg0) {
    void fn_8037A938(void *, s32, s32);
    extern u8 lbl_8046C5F0[];
    fn_8037A938(lbl_8046C5F0, arg0, 1);
}

s32 fn_80347FD4(void) {
    void fn_8037AA00(void *, s32 *, s32);
    extern u8 lbl_8046C5D0[];
    s32 sp8;
    fn_8037AA00(lbl_8046C5D0, &sp8, 1);
    return sp8;
}

void fn_80348008(s32 arg0) {
    void fn_8037A938(void *, s32, s32);
    extern u8 lbl_8046C5D0[];
    fn_8037A938(lbl_8046C5D0, arg0, 1);
}

s32 fn_80348038(void) {
    void fn_8037AA00(void *, s32 *, s32);
    extern u8 lbl_8046C610[];
    s32 sp8;
    fn_8037AA00(lbl_8046C610, &sp8, 1);
    return sp8;
}

void fn_8034806C(s32 arg0) {
    void fn_8037A938(void *, s32, s32);
    extern u8 lbl_8046C610[];
    fn_8037A938(lbl_8046C610, arg0, 1);
}

s32 fn_8034809C(s32 arg0, s32 arg1) {
    s32 fn_80258CEC(void *, void (*)(void), s32, void *, s32, s32, s32);
    void fn_8037A8D8(void *, void *, s32);
    void fn_803481C0(void);
    void fn_803481E8(void);
    extern u8 lbl_8046B090[];
    extern u8 lbl_8046C3A8[];
    extern u8 lbl_8046C3C8[];
    extern u8 lbl_8046C3E8[];
    extern u8 lbl_8046C3F4[];
    extern s32 lbl_8049506C;
    s32 ok;
    if (arg1 != 0) {
        ok = fn_80258CEC(lbl_8046B090, fn_803481E8, arg1, lbl_8046C3A8, 0x1000, arg0, 1);
    } else {
        ok = fn_80258CEC(lbl_8046B090, fn_803481C0, 0, lbl_8046C3A8, 0x1000, arg0, 1);
    }
    if (ok) {
        fn_8037A8D8(lbl_8046C3A8, lbl_8046C3E8, 3);
        fn_8037A8D8(lbl_8046C3C8, lbl_8046C3F4, 3);
        lbl_8049506C = 1;
        return 1;
    }
    return 0;
}

void fn_80348150(void) {
    void fn_80259354(void *);
    extern u8 lbl_8046B090[];
    extern s32 lbl_8049506C;
    if (lbl_8049506C != 0) {
        fn_80259354(lbl_8046B090);
    }
}

void fn_80348184(void) {
    void fn_80258FB8(void *);
    extern u8 lbl_8046B090[];
    extern s32 lbl_8049506C;
    if (lbl_8049506C != 0) {
        fn_80258FB8(lbl_8046B090);
        lbl_8049506C = 0;
    }
}

void fn_803481C0(void) {
    s32 fn_80347F70();
    void fn_8034806C(s32);
    M2C_UNK fn_8034828C();
    s32 temp_r30;

loop_1:
    temp_r30 = fn_80347F70();
    fn_8034828C();
    fn_8034806C(temp_r30);
    goto loop_1;
}

void fn_803481E8(u8 *arg0) {
    void fn_8034828C(void *);
    void fn_802595DC(void *);
    extern struct {
        u8 pad0[0x50];
        u32 unk50;
        u8 pad1[0xA6 - 0x54];
        u8 unkA6;
        u8 pad2[0xB4 - 0xA7];
        u8 *unkB4;
        u8 pad3[0xBC - 0xB8];
        s32 unkBC;
        u32 unkC0;
    } lbl_8046C400;
    extern u8 lbl_8046B090[];
    struct {
        u8 *buf;
        s32 index;
    } msg;
    s32 i;
    s32 size;
    s32 next;

    msg.buf = arg0;
    i = 0;
    size = lbl_8046C400.unkBC;
    for (;;) {
        msg.index = i;
        fn_8034828C(&msg);
        if ((s32)((i + lbl_8046C400.unkC0) % lbl_8046C400.unk50) == (s32)(lbl_8046C400.unk50 - 1)) {
            if (lbl_8046C400.unkA6 & 1) {
                size = *(s32 *)msg.buf;
                msg.buf = lbl_8046C400.unkB4;
            } else {
                fn_802595DC(lbl_8046B090);
            }
        } else {
            next = *(s32 *)msg.buf;
            msg.buf += size;
            size = next;
        }
        i++;
    }
}

void fn_8034828C(s32 **arg0) {
    s32 *fn_8034834C(void);
    void fn_803483F0(s32 *);
    s32 fn_803980A8(s32, u8 *, s32);
    extern struct {
        u8 pad0[0x6C];
        u32 unk6C;
        u8 unk70[0xEC - 0x70];
        s32 unkEC;
    } lbl_8046C400;
    s32 *sizes = *arg0 + 2;
    u8 *data = (u8 *)(*arg0 + lbl_8046C400.unk6C + 2);
    s32 *e = fn_8034834C();
    u32 i;

    for (i = 0; i < lbl_8046C400.unk6C; i++, sizes++) {
        if (lbl_8046C400.unk70[i] == 1) {
            e[2] = fn_803980A8(e[0], data + *sizes * lbl_8046C400.unkEC, 0);
            e[1] = e[0];
            fn_803483F0(e);
            return;
        }
        data += *sizes;
    }
}

s32 fn_8034834C(void) {
    void fn_8037AA00(void *, s32 *, s32);
    extern u8 lbl_8046C3A8[];
    s32 sp8;
    fn_8037AA00(lbl_8046C3A8, &sp8, 1);
    return sp8;
}

void fn_80348380(s32 arg0) {
    void fn_8037A938(void *, s32, s32);
    extern u8 lbl_8046C3A8[];
    fn_8037A938(lbl_8046C3A8, arg0, 0);
}

s32 fn_803483B0(s32 arg0) {
    s32 fn_8037AA00(void *, s32 *, s32);
    extern u8 lbl_8046C3C8[];
    s32 sp8;
    if (fn_8037AA00(lbl_8046C3C8, &sp8, arg0) != 1) {
        return 0;
    }
    return sp8;
}

void fn_803483F0(s32 arg0) {
    void fn_8037A938(void *, s32, s32);
    extern u8 lbl_8046C3C8[];
    fn_8037A938(lbl_8046C3C8, arg0, 1);
}

s32 fn_80348420(s32 arg0, s32 arg1) {
    s32 fn_80258CEC(void *, void (*)(void), s32, void *, s32, s32, s32);
    void fn_8037A8D8(void *, void *, s32);
    void fn_8034862C(void);
    void fn_80348548(void);
    extern u8 lbl_80469D20[];
    extern u8 lbl_8046B038[];
    extern u8 lbl_8046B058[];
    extern u8 lbl_8046B078[];
    extern u8 lbl_8046B084[];
    extern s32 lbl_804962A0;
    extern s32 lbl_80495068;
    s32 ok;
    s32 ret;
    if (arg1 != 0) {
        ok = fn_80258CEC(lbl_80469D20, fn_8034862C, arg1, lbl_8046B038, 0x1000, arg0, 1);
    } else {
        ok = fn_80258CEC(lbl_80469D20, fn_80348548, 0, lbl_8046B038, 0x1000, arg0, 1);
    }
    ret = 0;
    if (ok != 0) {
        fn_8037A8D8(lbl_8046B038, lbl_8046B078, 3);
        fn_8037A8D8(lbl_8046B058, lbl_8046B084, 3);
        lbl_80495068 = 1;
        lbl_804962A0 = 1;
        ret = 1;
    }
    return ret;
}

void fn_803484D8(void) {
    void fn_80259354(void *);
    extern u8 lbl_80469D20[];
    extern s32 lbl_80495068;
    if (lbl_80495068 != 0) {
        fn_80259354(lbl_80469D20);
    }
}

void fn_8034850C(void) {
    void fn_80258FB8(void *);
    extern u8 lbl_80469D20[];
    extern s32 lbl_80495068;
    if (lbl_80495068 != 0) {
        fn_80258FB8(lbl_80469D20);
        lbl_80495068 = 0;
    }
}

s32 fn_803488B0(void) {
    void fn_8037AA00(void *, s32 *, s32);
    extern u8 lbl_8046B038[];
    s32 sp8;
    fn_8037AA00(lbl_8046B038, &sp8, 1);
    return sp8;
}

void fn_803488E4(s32 arg0) {
    void fn_8037A938(void *, s32, s32);
    extern u8 lbl_8046B038[];
    fn_8037A938(lbl_8046B038, arg0, 0);
}

s32 fn_80348914(s32 arg0) {
    s32 fn_8037AA00(void *, s32 *, s32);
    extern u8 lbl_8046B058[];
    s32 sp8;
    if (fn_8037AA00(lbl_8046B058, &sp8, arg0) != 1) {
        return 0;
    }
    return sp8;
}

void fn_80348954(s32 arg0) {
    void fn_8037A938(void *, s32, s32);
    extern u8 lbl_8046B058[];
    fn_8037A938(lbl_8046B058, arg0, 1);
}

void fn_80348984(u8 *pads) {
    void fn_80348A2C(u8 *, u8 *, s32, f32, f32);
    void fn_80348B8C(u8 *, u32, u8);
    extern f32 lbl_803F4320[];
    extern f32 lbl_803F4324[];
    extern f32 lbl_803F4328[];
    extern f32 lbl_803F432C[];
    u32 i;

    for (i = 0; i < 4; i++) {
        if (*(s8 *)(pads + 0xA) == 0) {
            fn_80348A2C(pads + 2, pads + 3, 0xF, lbl_803F4320[0], lbl_803F4324[0]);
            fn_80348A2C(pads + 4, pads + 5, 0xF, lbl_803F4328[0], lbl_803F432C[0]);
            fn_80348B8C(pads + 6, 0x1E, 0xB4);
            fn_80348B8C(pads + 7, 0x1E, 0xB4);
        }
        pads += 0xC;
    }
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

M2C_UNK fn_80348BC0(void) {
    void fn_80270D34(void);
    u32 fn_80276D44(void);
    u32 fn_80276D70(void);
    extern u8 lbl_80400D40[];
    extern s32 lbl_80495090;
    extern s32 lbl_80495094;
    u32 d, c, b, a;

    if (lbl_80495090 != 0) {
        fn_80270D34();
        a = fn_80276D44();
        b = fn_80276D44();
        c = fn_80276D70();
        d = fn_80276D70();
        *(u32 *)(lbl_80400D40 + lbl_80495094 * 0x40) = b > a ? a : b;
        *(u32 *)(lbl_80400D40 + lbl_80495094 * 0x40 + 4) = d > c ? c : d;
    }
}

void fn_80348C44(void) {
    extern s32 lbl_80495090;
    extern s32 lbl_80495094;
    extern s32 lbl_8049509C;
    extern struct { s32 unk0; s32 unk4; s32 unk8; s32 pad[13]; } lbl_80400D40[];
    void fn_80270D34(void);
    void fn_80276344(s32, s32);
    void fn_80276D34(void);
    if (lbl_80495090 != 0) {
        fn_80270D34();
        lbl_80495094 = (lbl_80495094 + 1) % lbl_8049509C;
        fn_80276344(lbl_80400D40[lbl_80495094].unk8, 0x15);
        fn_80276D34();
    }
}

void *fn_80348CAC(void *arg0) {
    extern void fn_8031E8B0(void *);
    extern u8 lbl_8041CAC8[];

    fn_8031E8B0(arg0);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x0) = lbl_8041CAC8;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    return arg0;
}

void fn_80348CF4(void *arg0, s32 arg1) {
    extern u8 lbl_8041CAC8[];
    extern u8 lbl_8045D140[];
    extern s32 lbl_8049627C;
    void fn_8033D5B8(void *, void *);
    void fn_802D20E8(void *);
    void fn_8031E910(void *, s32);
    void fn_80338184(s32, void *);

    M2C_FIELD(arg0, void **, 0x0) = lbl_8041CAC8;
    fn_8033D5B8(lbl_8045D140, arg0);
    fn_802D20E8(M2C_FIELD(arg0, void **, 0x20));
    M2C_FIELD(arg0, void **, 0x20) = 0;
    if (M2C_FIELD(arg0, void **, 0x24) != 0) {
        fn_802D20E8(M2C_FIELD(arg0, void **, 0x24));
        M2C_FIELD(arg0, void **, 0x24) = 0;
    }
    fn_8031E910(arg0, 0);
    if (arg1 & 1) {
        fn_80338184(lbl_8049627C, arg0);
    }
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

void fn_80348DF0(void *arg0, void *arg1) {
    void *fn_802D1FC8(M2C_UNK);
    s32 temp_r9_2;
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_802D1FC8(0x60);
    M2C_FIELD(arg0, void **, 0x24) = temp_r3;
    temp_r9 = M2C_FIELD(arg1, void **, 0x28);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, void *, M2C_UNK), 0x1C)(arg1 + M2C_FIELD(temp_r9, s16 *, 0x18), temp_r3, 0x60);
    temp_r11 = M2C_FIELD(arg0, void **, 0x24);
    temp_r9_2 = M2C_FIELD(temp_r11, s32 *, 4);
    if (temp_r9_2 & 1) {
        M2C_FIELD(temp_r11, s32 *, 4) = (s32) (temp_r9_2 + 1);
    }
}

void fn_80348E60(void *arg0) {
    void fn_80338000(s32, void *, s32);
    extern s32 lbl_8049627C;
    fn_80338000(lbl_8049627C, arg0, 4);
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

void *fn_80348ECC(void *self) {
    void fn_802FB578(void *);
    extern u8 lbl_8041CB50[];
    fn_802FB578(self);
    *(u8 **)((u8 *)self + 0x68) = lbl_8041CB50;
    return self;
}

void fn_80348F08(void *self) {
    void fn_802FB5D0(void *);
    extern u8 lbl_8041CB50[];
    *(u8 **)((u8 *)self + 0x68) = lbl_8041CB50;
    fn_802FB5D0(self);
}

void fn_80348F38(void) {
    fn_802FB604();
}

void fn_80348F58(void *self) {
    u8 *p = self;
    void **op;
    s16 delta;
    u32 fn;
    *(s32 *)(p + 0x14) = 1;
    if (*(s32 *)(p + 0xC) == 0 && *(s32 *)(*(u8 **)p + 0x44) == 0) {
        op = *(void ***)(p + 0x68);
        delta = *(s16 *)((u8 *)op + 0x10);
        fn = *(u32 *)((u8 *)op + 0x14);
        ((void (*)(void *))(fn))(p + delta);
    }
}

void fn_80348FB4(void *self, s32 arg1, s32 size) {
    void fn_80352D2C(void *, s32, s32);
    void fn_802FB8B0(void *, s32, s32);
    extern u8 lbl_8046DF78[];
    u8 *obj;
    if (size != 0) {
        if (*(s32 *)((u8 *)self + 0xC) == 0) {
            obj = *(u8 **)self;
            *(s32 *)(obj + 0x4C) += size;
            fn_80352D2C(lbl_8046DF78, arg1, size);
        } else {
            fn_802FB8B0(self, arg1, size);
        }
    }
}

void fn_8034AD3C(void) {

}

void fn_8034AD40(void) {

}

void fn_8034AD94(void *arg0, void *arg1) {
    extern u8 lbl_8046DF78[];
    void fn_80358CEC(void *, void *);
    s32 ok;
    ok = M2C_FIELD(arg1, s32 *, 0xE4) == 0x900DBEEF;
    if (ok) {
        fn_80358CEC(lbl_8046DF78, arg1);
    }
}

extern u8 lbl_8046DF78[];
void fn_80359160(u8 *arg);
void fn_8034ADDC(void) {
    fn_80359160(lbl_8046DF78);
}

void fn_8034AE04(void *arg0, s32 arg1, s32 arg2) {
    extern u8 lbl_8046DF78[];
    void fn_80354C40(void *, s32, s32);
    M2C_FIELD(arg0, s32 *, 0x38) = arg2;
    fn_80354C40(lbl_8046DF78, arg1, arg2);
}

void fn_8034AE30(void *arg0, s32 arg1, u32 arg2) {
    extern u8 lbl_8046DF78[];
    void fn_802FC904(void *, s32, u32);
    void fn_80354C7C(void *, s32, u32);
    if (M2C_FIELD(arg0, s32 *, 0xC) == 1) {
        fn_802FC904(arg0, arg1, arg2);
    } else {
        if (arg2 <= 0xF7 && (s32)arg2 > M2C_FIELD(arg0, s32 *, 0x40)) {
            M2C_FIELD(arg0, s32 *, 0x40) = arg2;
        }
        fn_80354C7C(lbl_8046DF78, arg1, arg2);
    }
}

void fn_8034AE84(char *self, s32 arg1, s32 count) {
    char *vt;
    s32 i;

    vt = *(char **)(self + 0x68);
    (*(void (**)(char *, s32, s32))(vt + 0xD4))(self + *(s16 *)(vt + 0xD0), arg1, count);
    for (i = 0; i < count; i++) {
        vt = *(char **)(self + 0x68);
        (*(void (**)(char *, s32, s32))(vt + 0xDC))(self + *(s16 *)(vt + 0xD8), i, i);
    }
    if (count - 1 > M2C_FIELD(self, s32 *, 0x40)) {
        M2C_FIELD(self, s32 *, 0x40) = count - 1;
    }
}

void fn_8034AF84(void *self, void *arg1) {
    extern u8 lbl_8046DF78[];
    void fn_8035504C(void *, void *);
    s32 ok;
    if (arg1 != NULL) {
        ok = M2C_FIELD(arg1, s32 *, 0x20) == 0x900DBEEF;
        if (ok) {
            fn_8035504C(lbl_8046DF78, arg1);
        }
    }
}

void fn_8034AFD4(void) {

}

void fn_8034AFD8(void *self, s32 arg) {
    struct {
        u8 type;
        s32 arg;
    } cmd;
    void fn_80355168(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.arg = arg;
    cmd.type = 0x12;
    fn_80355168(lbl_8046DF78, &cmd);
}

void fn_8034B010(void *self, u32 arg) {
    struct {
        u8 type;
        u32 arg;
    } cmd;
    void fn_803551C0(void *, void *);
    extern u8 lbl_8046DF78[];
    arg ^= 0xFFFFFFFF;
    cmd.type = 0x13;
    cmd.arg = arg;
    fn_803551C0(lbl_8046DF78, &cmd);
}

void fn_8034B04C(void *self, s32 arg) {
    struct {
        u8 type;
        s32 arg;
    } cmd;
    void fn_80355218(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.arg = arg;
    cmd.type = 0x14;
    fn_80355218(lbl_8046DF78, &cmd);
}

void fn_8034B084(void *self, s32 arg, u8 value) {
    struct {
        u8 type;
        u8 value;
        s32 arg;
    } cmd;
    void fn_80355268(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.arg = arg;
    cmd.type = 0x15;
    cmd.value = value;
    fn_80355268(lbl_8046DF78, &cmd);
}

void fn_8034B0C0(void *self, s32 arg, u8 value) {
    struct {
        u8 type;
        u8 value;
        s32 arg;
    } cmd;
    void fn_80355294(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.arg = arg ^ -1;
    cmd.type = 0x16;
    cmd.value = value;
    fn_80355294(lbl_8046DF78, &cmd);
}

void fn_8034B100(void *self, s32 arg, u8 value) {
    struct {
        u8 type;
        u8 value;
        s32 arg;
    } cmd;
    void fn_803552C0(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.arg = arg;
    cmd.type = 0x17;
    cmd.value = value;
    fn_803552C0(lbl_8046DF78, &cmd);
}

void fn_8034B13C(void *self, s32 arg) {
    struct {
        u8 type;
        s32 arg;
    } cmd;
    void fn_803549C0(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.arg = arg;
    cmd.type = 0x9;
    fn_803549C0(lbl_8046DF78, &cmd);
}

void fn_8034B174(void *self, f32 *q) {
    struct {
        u8 type;
        s32 pad;
        f32 v[4];
        s32 pad2[2];
    } cmd;
    void fn_80354A60(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.type = 0x36;
    cmd.v[0] = q[0];
    cmd.v[1] = q[1];
    cmd.v[2] = q[2];
    cmd.v[3] = q[3];
    fn_80354A60(lbl_8046DF78, &cmd);
}

void fn_8034B1CC(void *self, s32 arg) {
    struct {
        u8 type;
        s32 arg;
    } cmd;
    void fn_80354A84(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.arg = arg;
    cmd.type = 0xB;
    fn_80354A84(lbl_8046DF78, &cmd);
}

void fn_8034B204(void *self, s32 arg) {
    struct {
        u8 type;
        s32 arg;
    } cmd;
    void fn_80354DDC(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.arg = arg;
    cmd.type = 0xD;
    fn_80354DDC(lbl_8046DF78, &cmd);
}

void fn_8034B23C(void *self, s32 arg) {
    struct {
        u8 type;
        s32 arg;
    } cmd;
    void fn_80354EA8(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.arg = arg;
    cmd.type = 0xE;
    fn_80354EA8(lbl_8046DF78, &cmd);
}

void fn_8034B274(void *self, s32 arg) {
    struct {
        u8 type;
        s32 arg;
    } cmd;
    void fn_80354F6C(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.arg = arg;
    cmd.type = 0xF;
    fn_80354F6C(lbl_8046DF78, &cmd);
}

void fn_8034B2AC(void) {
    struct {
        u8 type;
    } cmd;
    void fn_80354978(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.type = 0x1C;
    fn_80354978(lbl_8046DF78, &cmd);
}

void fn_8034B2E0(void) {
    struct {
        u8 type;
    } cmd;
    void fn_8035499C(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.type = 0x1D;
    fn_8035499C(lbl_8046DF78, &cmd);
}

void fn_8034B314(void *self, void *obj) {
    struct {
        u8 type;
        u8 a;
        u8 b;
        void *obj;
    } cmd;
    void fn_803552F4(void *, void *);
    extern u8 lbl_8046DF78[];
    s32 a = obj != NULL ? M2C_FIELD(obj, s32 *, 0xD8) : 0;
    s32 b = obj != NULL ? M2C_FIELD(obj, s32 *, 0xDC) : 0;
    cmd.type = 0x18;
    cmd.a = a;
    cmd.b = b;
    cmd.obj = obj;
    fn_803552F4(lbl_8046DF78, &cmd);
}

void fn_8034B370(void *self, s32 arg) {
    struct {
        u8 type;
        s32 arg;
    } cmd;
    void fn_80355D00(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.arg = arg;
    cmd.type = 0x23;
    fn_80355D00(lbl_8046DF78, &cmd);
}

void fn_8034B3A8(void *self, f32 *a, f32 *b, f32 *c, f32 *d, f32 *e, f32 f) {
    struct {
        u8 type;
        s32 pad;
        f32 a[2];
        f32 b[2];
        f32 c[2];
        f32 d[2];
        f32 e[4];
        f32 f;
        s32 pad2[2];
    } cmd;
    void fn_80355484(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.type = 0x21;
    cmd.a[0] = a[0];
    cmd.a[1] = a[1];
    cmd.b[0] = b[0];
    cmd.b[1] = b[1];
    cmd.c[0] = c[0];
    cmd.c[1] = c[1];
    cmd.d[0] = d[0];
    cmd.d[1] = d[1];
    cmd.e[0] = e[0];
    cmd.e[1] = e[1];
    cmd.e[2] = e[2];
    cmd.e[3] = e[3];
    cmd.f = f;
    fn_80355484(lbl_8046DF78, &cmd);
}

void fn_8034B444(void *self, s16 id, s32 arg, f32 *v, f32 f) {
    struct {
        u8 type;
        s16 id;
        s32 arg;
        f32 v[4];
        f32 f;
        s32 pad[2];
    } cmd;
    void fn_803575B0(void *, void *);
    extern u8 lbl_8046DF78[];
    if (id != 0) {
        cmd.type = 0x3A;
        cmd.id = id;
        cmd.arg = arg;
        cmd.v[0] = v[0];
        cmd.v[1] = v[1];
        cmd.v[2] = v[2];
        cmd.v[3] = v[3];
        cmd.f = f;
        fn_803575B0(lbl_8046DF78, &cmd);
    }
}

void fn_8034B4AC(void *self, s16 id, s32 arg, f32 *v, f32 f) {
    struct {
        u8 type;
        s16 id;
        s32 arg;
        f32 v[4];
        f32 f;
        s32 pad[2];
    } cmd;
    void fn_8035710C(void *, void *);
    extern u8 lbl_8046DF78[];
    if (id != 0) {
        cmd.type = 0x3B;
        cmd.id = id;
        cmd.arg = arg;
        cmd.v[0] = v[0];
        cmd.v[1] = v[1];
        cmd.v[2] = v[2];
        cmd.v[3] = v[3];
        cmd.f = f;
        fn_8035710C(lbl_8046DF78, &cmd);
    }
}

void fn_8034B58C(void *self, s32 arg1, s32 arg2, s32 arg3) {
    extern u8 *lbl_80495050;
    RCOpVtEnt *e;
    if (arg1 != 0) {
        e = (RCOpVtEnt *)(M2C_FIELD(self, u8 **, 0x68) + 0x110);
        ((void (*)(void *, void *, s32, s32, s32, s32))e->fn)((u8 *)self + e->delta, lbl_80495050 + 0x40, arg2 ? 4 : 1, 1, 0, arg3);
    } else {
        e = (RCOpVtEnt *)(M2C_FIELD(self, u8 **, 0x68) + 0x128);
        ((void (*)(void *, s32))e->fn)((u8 *)self + e->delta, arg3 ? 0x100 : 0x80);
    }
}

void fn_8034B620(void *self, void *obj, u8 arg2, s32 arg3, s32 arg4, s32 arg5) {
    struct {
        u8 type;
        u8 value;
        u8 flags;
        void *obj;
    } cmd;
    void fn_8035500C(void *, void *);
    extern u8 lbl_8046DF78[];
    RCOpVtEnt *e;
    u32 flags;
    if (obj != NULL) {
        cmd.obj = obj;
        cmd.type = 0x10;
        cmd.value = arg2;
        flags = arg5 ? 0x100 : 0x80;
        if (arg3) flags |= 0x200;
        if (arg4) flags |= 0x400;
        cmd.flags = flags >> 7;
        fn_8035500C(lbl_8046DF78, &cmd);
    } else {
        e = (RCOpVtEnt *)(M2C_FIELD(self, u8 **, 0x68) + 0x128);
        ((void (*)(void *, s32))e->fn)((u8 *)self + e->delta, arg5 ? 0x100 : 0x80);
    }
}

void fn_8034B6C4(void *self, u8 a, u8 b) {
    struct {
        u8 type;
        u8 a;
        u8 b;
    } cmd;
    void fn_8035BE60(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.a = a;
    cmd.type = 0x25;
    cmd.b = b;
    fn_8035BE60(lbl_8046DF78, &cmd);
}

void fn_8034B700(void) {

}

void fn_8034B704(void *self, u8 a, u8 b, u8 c, s32 d) {
    struct {
        u8 type;
        u8 a;
        u8 b;
        u8 c;
        s32 d;
    } cmd;
    void fn_80355E64(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.a = a;
    cmd.type = 0x2B;
    cmd.b = b;
    cmd.c = c;
    cmd.d = d;
    fn_80355E64(lbl_8046DF78, &cmd);
}

void fn_8034BA20(void *self, u8 a, u8 b, u8 c) {
    struct {
        u8 type;
        u8 a;
        u8 b;
        u8 c;
    } cmd;
    void fn_80357920(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.a = a;
    cmd.type = 0x41;
    cmd.b = b;
    cmd.c = c;
    fn_80357920(lbl_8046DF78, &cmd);
}

void fn_8034BA60(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s16 value) {
    struct {
        u8 type;
        s16 value;
        s32 arg;
    } cmd;
    void fn_80356414(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.type = 0x34;
    cmd.value = value;
    cmd.arg = a | (b << 2) | (c << 4) | (d << 6) | (e << 8);
    fn_80356414(lbl_8046DF78, &cmd);
}

void fn_8034BABC(void *self, s32 arg, s16 value) {
    struct {
        u8 type;
        s16 value;
        s32 arg;
    } cmd;
    void fn_803563F4(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.arg = arg;
    cmd.type = 0x33;
    cmd.value = value;
    fn_803563F4(lbl_8046DF78, &cmd);
}

void fn_8034BAF8(void) {
    void fn_803552E4(u8 *arg);
    fn_803552E4(lbl_8046DF78);
}

void fn_8034BB20(void *self, s32 arg, u8 value) {
    struct {
        u8 type;
        u8 value;
        s32 arg;
    } cmd;
    void fn_80355F58(void *, void *);
    extern u8 lbl_8046DF78[];
    cmd.arg = arg;
    cmd.type = 0x2D;
    cmd.value = value;
    fn_80355F58(lbl_8046DF78, &cmd);
}

void fn_8034BB5C(void *self, s32 size, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    void fn_8035613C(void *, s32, s32, s32, s32, s32, s32);
    extern u8 lbl_8046DF78[];
    u8 *obj;
    if (size != 0) {
        obj = *(u8 **)self;
        *(s32 *)(obj + 0x4C) += size;
        fn_8035613C(lbl_8046DF78, size, a2, a3, a4, a5, a6);
    }
}

void fn_8034BBA8(void *self, s32 arg1, s32 size) {
    void fn_803547E0(void *, s32, s32);
    void fn_802FBC60(void *, s32, s32);
    extern u8 lbl_8046DF78[];
    u8 *obj;
    if (size != 0) {
        if (*(s32 *)((u8 *)self + 0xC) == 0) {
            obj = *(u8 **)self;
            *(s32 *)(obj + 0x4C) += size;
            fn_803547E0(lbl_8046DF78, arg1, size);
        } else {
            fn_802FBC60(self, arg1, size);
        }
    }
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

void *fn_8034BC5C(u32 size) {
    extern void *fn_802D0AB8(void *);
    extern void *fn_802D197C(void *heap, u32 size, s32 align);
    extern void *fn_802DBBCC(void *heap, u32 size, s32 align);
    extern void *fn_802D0B3C(void);
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

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8034BCEC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void *fn_8034BD20(u32 size) {
    extern void *fn_802D197C(void *heap, u32 size, s32 align);
    extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
    extern void *fn_802D0B3C(void);
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0x1F) & ~0x1F;
    p = fn_802D197C(heap, size, 0x20);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x20, 0, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x20, 0, 0);
        }
    }
    return p;
}

void fn_8034BDCC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8034BE00(u32 *p, s32 size) {
    u32 *end = (u32 *)((u8 *)p + size);

    for (; p < end; p++) {
        *p = 0x10801080;
    }
}

extern u8 lbl_8041CE98[];
extern void *lbl_804950A8;
extern void fn_8036EE30(void *);
void fn_8034C028(u8 *self, s32 flags) {
    extern u8 lbl_8041CE98[];
    extern void *lbl_804950A8;
    extern void fn_8036EE30(void *);
    *(u8 **)(self + 0x338) = lbl_8041CE98;
    lbl_804950A8 = 0;
    fn_8036EE30(self);
}

void fn_8034C05C(void) {

}

s32 fn_8034C060(void *self, s32 i) {
    struct {
        u8 pad[0x4620];
        s32 vals[1];
    } *p = self;
    return p->vals[i];
}

s32 fn_8034E044();
s32 fn_8034C070(void) {
    s32 fn_8034E044();
    if (fn_8034E044() == 0) {
        return 0;
    }
    return 1;
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

s32 fn_8034D58C(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x34C) == M2C_FIELD(arg0, s32 *, 0x344)) {
        return M2C_FIELD(arg0, s32 *, 0x348);
    }
    return M2C_FIELD(arg0, s32 *, 0x344);
}

s32 fn_8034D5AC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34C);
}

M2C_UNK fn_8034D5B4(void *arg0) {
    void fn_80268ED0(s32);
    void fn_80268DA0(void);
    void fn_802678D0(void);
    struct {
        u8 pad[0x340];
        s32 idx;
        s32 buf[2];
        s32 cur;
    } *self = arg0;

    fn_80268ED0(self->cur);
    self->idx = (self->idx + 1) % 2;
    self->cur = self->buf[self->idx];
    fn_80268DA0();
    fn_802678D0();
}

void fn_8034D8E8(void) {

}

void fn_8034D8EC(void) {
    void fn_8026EAE0(void);
    extern s32 lbl_8049514C;
    extern s32 lbl_80495148;
    lbl_8049514C = 1;
    lbl_80495148 = 0;
    fn_8026EAE0();
}

void fn_8034D91C(s16 arg0) {
    extern s16 lbl_80495146;
    lbl_80495146 = arg0;
}

u16 fn_8034D924(void) {
    void fn_80270B90(u16);
    extern u16 lbl_80495144;
    lbl_80495144++;
    fn_80270B90(lbl_80495144);
    return lbl_80495144;
}

void fn_8034D958(void *arg0, u32 arg1, s32 arg2) {
    void fn_8025302C();
    extern u32 lbl_80472600[];
    if (arg1 <= 999) {
        if (lbl_80472600[arg1] <= 2) {
            fn_8025302C(arg2);
        }
        lbl_80472600[arg1]++;
    }
}

void fn_8034F440(void *arg0, s32 arg1) {
    struct {
        s32 type;
        s32 a;
        s32 b;
    } msg;
    msg.a = arg1;
    msg.type = 1;
    fn_8034F534(arg0, &msg);
}

void fn_8034F470(void *arg0, s32 arg1, s32 arg2) {
    struct {
        s32 type;
        s32 a;
        s32 b;
    } msg;
    msg.a = arg1;
    msg.type = 2;
    msg.b = arg2;
    fn_8034F58C(arg0, &msg);
}

void fn_8034F4A4(void *arg0, s32 arg1) {
    M2C_UNK fn_8034F5EC(void *, void *);
    struct {
        s32 type;
        s32 a;
        s32 b;
    } msg;
    msg.a = arg1;
    msg.type = 3;
    fn_8034F5EC(arg0, &msg);
}

void fn_8034F4D4(void *arg0, s32 arg1, s32 arg2) {
    struct {
        s32 type;
        s32 a;
        s32 b;
    } msg;
    msg.a = arg1;
    msg.type = 4;
    msg.b = arg2;
    fn_8034F840(arg0, &msg);
}

void fn_8034F508(void *arg0) {
    struct {
        s32 type;
        s32 a;
        s32 b;
    } msg;
    msg.type = 5;
    fn_8034F8BC(arg0, &msg);
}

void fn_8034F534(void *arg0, void *arg1) {
    extern f32 lbl_803F458C[];
    extern s32 lbl_8049511C;
    extern f32 lbl_804950D0;
    extern f32 lbl_804950CC;
    extern s32 lbl_804950D4;
    extern s32 lbl_804950D8;
    extern s32 lbl_804950E0;
    extern s32 lbl_804950EC;
    lbl_8049511C = 1;
    lbl_804950CC = lbl_804950D0 = lbl_803F458C[0];
    lbl_804950D4 = 0;
    lbl_804950D8 = 0;
    lbl_804950E0 = 0;
    M2C_FIELD(arg0, s32 *, 0x4630) = 0;
    fn_80348C44();
    lbl_804950EC = 0;
}

void fn_8034F58C(void *arg0, void *arg1) {
    M2C_UNK fn_802EDF08(s32, s32, s32);
    extern s32 lbl_80495050;
    s32 flag = 1;
    if (M2C_FIELD(arg1, s32 *, 8) == 0) {
        flag = 0;
    }
    fn_803529FC(arg0, M2C_FIELD(M2C_FIELD(arg1, void **, 4), u8 **, 0x40));
    if (flag != 0) {
        fn_802EDF08(lbl_80495050, M2C_FIELD(arg1, s32 *, 4), 0);
    }
}

void fn_8034F840(void *arg0, void *arg1) {
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
void fn_8034F8BC(void *arg0, void *arg1) {
    fn_80270D34();
}

void fn_8034F9CC(void *arg0) {
    M2C_UNK fn_8035C4A8(s32);
    fn_8035C4A8(M2C_FIELD(arg0, s32 *, 0x4D8));
}

void fn_803529FC(void *arg0, u8 *arg1) {
    extern RCOpPtmf lbl_80401090[];
    RCOpVtEnt ent;
    RCOpFn fn;
    u8 *pc;
    s32 op;
    s32 idx;
    s32 d;
    s32 adj;

    M2C_FIELD(arg0, u8 **, 0x4DC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4E0) = 0;
    do {
        pc = M2C_FIELD(arg0, u8 **, 0x4DC);
        op = *pc;
        M2C_FIELD(arg0, u8 **, 0x4DC) = pc + 8;
        idx = lbl_80401090[op].index;
        if (idx >= 0) {
            ent = (*(RCOpVtEnt **) ((u8 *) arg0 + lbl_80401090[op].u.delta2))[idx - 1];
            fn = ent.fn;
        } else {
            fn = lbl_80401090[op].u.pfn;
        }
        d = lbl_80401090[op].delta;
        adj = idx >= 0 ? ent.delta + d : d;
        fn((u8 *) arg0 + adj, pc);
    } while (M2C_FIELD(arg0, s32 *, 0x4E0) == 0);
}

void fn_80352D04(void *arg0, void *arg1) {
    M2C_UNK fn_80352D2C(void *, s32, u16);
    fn_80352D2C(arg0, M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, u16 *, 2));
}

void fn_8035345C(void *arg0, void *arg1) {
    M2C_UNK fn_803534B4(void *, s32, s32, s32, s32, s32, s32, s32, s32);
    u8 *p = arg1;
    s32 flag = 1;
    s32 a = M2C_FIELD(p, s32 *, 4);
    if (p[1] == 0) {
        flag = 0;
    }
    fn_803534B4(arg0, a, M2C_FIELD(p, s32 *, 8), M2C_FIELD(p, s32 *, 0xC), M2C_FIELD(p, s32 *, 0x10), M2C_FIELD(p, s32 *, 0x14), M2C_FIELD(p, s32 *, 0x18), M2C_FIELD(p, s32 *, 0x1C), flag);
}

void fn_803547B8(void *arg0, void *arg1) {
    M2C_UNK fn_803547E0(void *, s32, u16);
    fn_803547E0(arg0, M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, u16 *, 2));
}

void fn_80354908(void *arg0, void *arg1) {
    s32 *stack;
    s32 n;
    void *temp_r11;

    n = M2C_FIELD(arg0, s32 *, 0x50C);
    stack = (s32 *) ((u8 *) arg0 + 0x4E4);
    stack[n] = M2C_FIELD(arg0, s32 *, 0x4DC);
    M2C_FIELD(arg0, s32 *, 0x50C) = n + 1;
    temp_r11 = M2C_FIELD(arg1, void **, 4);
    M2C_FIELD(arg0, void **, 0x4628) = temp_r11;
    M2C_FIELD(arg0, s32 *, 0x4DC) = M2C_FIELD(temp_r11, s32 *, 0x40);
}

void fn_80354938(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x4DC) = (s32) M2C_FIELD(arg1, s32 *, 4);
}

void fn_80354944(void *arg0) {
    s32 n;
    s32 *stack;

    n = M2C_FIELD(arg0, s32 *, 0x50C);
    if (n != 0) {
        stack = (s32 *)((u8 *)arg0 + 0x4E4);
        M2C_FIELD(arg0, s32 *, 0x50C) = --n;
        M2C_FIELD(arg0, s32 *, 0x4DC) = stack[n];
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4E0) = 1;
}

void fn_80354978(void *arg0, void *arg1) {
    M2C_UNK fn_8035C2D8(s32);
    fn_8035C2D8(M2C_FIELD(arg0, s32 *, 0x4D8));
}

void fn_8035499C(void *arg0, void *arg1) {
    M2C_UNK fn_8035C370(s32);
    fn_8035C370(M2C_FIELD(arg0, s32 *, 0x4D8));
}

void fn_803549C0(void *arg0, void *arg1) {
    extern s32 lbl_8049518C;
    extern const f32 lbl_803F4628[];
    extern const f32 lbl_803F462C[];
    f32 *r;
    f32 x0;
    f32 y0;
    f32 x1;
    f32 y1;
    f32 x;
    f32 y;

    if (lbl_8049518C != 0) {
        lbl_8049518C = 0;
    }
    r = M2C_FIELD(arg1, f32 **, 0x4);
    x0 = r[0];
    y0 = r[1];
    x1 = r[4];
    y1 = r[5];
    x = -x0 + x1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), f32 *, 0x9B0) = x;
    y = y0 + y1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), f32 *, 0x9B4) = y;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), f32 *, 0x9B8) = (x0 + x1) - x;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), f32 *, 0x9BC) = (-y0 + y1) - y;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), f32 *, 0x9C0) = lbl_803F4628[0];
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), f32 *, 0x9C4) = lbl_803F462C[0];
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), u32 *, 0x6CC) |= 0x80000200;
}

void fn_80354A60(void *arg0) {
    extern s32 lbl_80495190;
    s32 v;

    v = lbl_80495190;
    M2C_FIELD(arg0, s32 *, 0x4DC) += 0x10;
    if (v != 0) {
        lbl_80495190 = 0;
    }
}

void fn_80354C18(void *arg0, void *arg1) {
    void fn_80354C40(void *, s32, u8);

    fn_80354C40(arg0, M2C_FIELD(arg1, s32 *, 0x4), M2C_FIELD(arg1, u8 *, 0x1));
}

void fn_80354C40(void *self, s64 *src, u32 count) {
    s64 *dst;
    s64 *end;
    *(u32 *)((char *)self + 0x4558) = count;
    dst = (s64 *)((char *)self + 0x758);
    end = dst + count * 8;
    while (dst != end) {
        *dst++ = *src++;
    }
    *(s32 *)((char *)self + 0x510) = 1;
}

void fn_80354D90(void *self, void *arg) {
    void fn_80354C7C(void *, s32, u8);
    u8 *p = (u8 *)arg + 4;
    s32 i;
    for (i = 0; i <= 3; i++) {
        fn_80354C7C(self, i, p[i]);
    }
}

void fn_80354F6C(void *self, void *arg) {
    typedef struct { f32 m[16]; } Mtx44;
    extern s32 lbl_80495194;
    if (lbl_80495194 != 0) {
        lbl_80495194 = 0;
        *(Mtx44 *)((char *)self + 0x498) = **(Mtx44 **)((char *)arg + 4);
    }
}

void fn_8035500C(void) {

}

void fn_80355010(void *self, void *arg1) {
    void fn_8035504C(void *, s32, u8);
    fn_8035504C(self, M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, u8 *, 1));
    M2C_FIELD(self, s32 *, 0x510) = 1;
}

void fn_80355168(void *arg0, void *arg1) {
    void *p;
    s32 flags;
    s32 v;

    flags = M2C_FIELD(arg1, s32 *, 0x4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), u32 *, 0x6CC) |= 0x80000000;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), s32 *, 0x6E8) |= flags;
    p = M2C_FIELD(arg0, void **, 0x4D8);
    v = M2C_FIELD(p, s32 *, 0x6E8);
    if (v & 4) {
        v = 1;
    } else if (v &= 2) {
        v = 2;
    }
    M2C_FIELD(p, s32 *, 0x79C) = v;
    M2C_FIELD(arg0, s32 *, 0x510) = 1;
}

void fn_803551C0(void *arg0, void *arg1) {
    void *p;
    s32 flags;
    s32 v;

    flags = M2C_FIELD(arg1, s32 *, 0x4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), u32 *, 0x6CC) |= 0x80000000;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), s32 *, 0x6E8) &= flags;
    p = M2C_FIELD(arg0, void **, 0x4D8);
    v = M2C_FIELD(p, s32 *, 0x6E8);
    if (v & 4) {
        v = 2;
    } else if (v &= 2) {
        v = 1;
    }
    M2C_FIELD(p, s32 *, 0x79C) = v;
    M2C_FIELD(arg0, s32 *, 0x510) = 1;
}

void fn_80355218(void *arg0, void *arg1) {
    void *p;
    s32 flags;
    s32 v;

    flags = M2C_FIELD(arg1, s32 *, 0x4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), u32 *, 0x6CC) |= 0x80000000;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4D8), s32 *, 0x6E8) = flags;
    p = M2C_FIELD(arg0, void **, 0x4D8);
    v = M2C_FIELD(p, s32 *, 0x6E8);
    if (v & 4) {
        v = 2;
    } else if (v &= 2) {
        v = 1;
    }
    M2C_FIELD(p, s32 *, 0x79C) = v;
    M2C_FIELD(arg0, s32 *, 0x510) = 1;
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

void fn_803552E4(u8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x3A4) = farg0;
    M2C_FIELD(arg0, s32 *, 0x510) = 1;
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

void fn_80355EC8(u8 *self, u8 *arg) {
    extern s32 lbl_803F4684[];
    u8 enable;
    u8 mode;
    u8 off;
    u8 *p;

    enable = arg[1];
    mode = arg[2];
    off = arg[3];
    p = *(u8 **)(self + 0x4D8);
    if (enable != 0) {
        RC_SetFog(p, 0, lbl_803F4684[mode], off);
    } else {
        RC_SetFog(p, 1, 7, 0);
    }
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

void fn_80356100(u8 *self, s32 *arg) {
    void fn_8035613C(void *, s32, s32, s32, s32, s32, s32);
    fn_8035613C(self, arg[1], arg[2], arg[3], arg[4], arg[5], arg[6]);
}

void fn_803563F4(u8 *self, u8 *arg) {
    struct {
        u8 pad[0x29];
        u8 val;
        u8 pad2[0x16];
    } *e;
    s32 val = *(s32 *)(arg + 4);

    e = (void *)(self + 0x540);
    e[*(u16 *)(arg + 2)].val = val;
    *(s32 *)(self + 0x510) = 1;
}

void fn_80356414(u8 *self, u8 *arg) {
    u32 val = *(u32 *)(arg + 4);
    u8 a, b, c, d, e;

    a = val & 3;
    b = (val >> 2) & 3;
    c = (val >> 4) & 3;
    d = (val >> 6) & 3;
    e = (val >> 8) & 0xFF;
    self[0x565] = b;
    self[0x564] = a;
    self[0x566] = c;
    self[0x567] = d;
    self[0x568] = e;
    *(s32 *)(self + 0x510) = 1;
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

void fn_80358CC4(void *self, void *arg1) {
    void fn_80358CEC(void *, s32, s32);
    fn_80358CEC(self, M2C_FIELD(arg1, s32 *, 4), -1);
}

void fn_80359110(void *self, void *arg1) {
    void fn_80359160(u8 *arg);
    f32 v[4];

    v[0] = M2C_FIELD(arg1, f32 *, 8);
    v[1] = M2C_FIELD(arg1, f32 *, 0xC);
    v[2] = M2C_FIELD(arg1, f32 *, 0x10);
    v[3] = M2C_FIELD(arg1, f32 *, 0x14);
    ((void (*)(void *, f32 *, f32 *, f32))fn_80359160)(self, &v[0], &v[2], M2C_FIELD(arg1, f32 *, 4));
}

void fn_80359520(void) {

}

void fn_802CA9A8(void *);
void fn_802CAA00(void *, s32);
void fn_8034BE28(void *);
extern u8 lbl_804725C8[];
extern u8 lbl_804725E4[];
extern s32 lbl_804962CC;
extern s32 lbl_80497624;
void fn_8035BC4C(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8034BE28(lbl_8046DF78);
            lbl_804962CC = lbl_80497624;
            fn_802CA9A8(lbl_804725C8);
            fn_802CA9A8(lbl_804725E4);
        } else {
            fn_802CAA00(lbl_804725E4, 2);
            fn_802CAA00(lbl_804725C8, 2);
            fn_8034C028(lbl_8046DF78, 2);
        }
    }
}

void *fn_8035BCE0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x34C) != 0) {
        return (u8 *)arg0 + 0x364;
    }
    return 0;
}

void fn_8035BCFC(void *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    *arg1 = M2C_FIELD(arg0, u8 *, 0x462C);
    *arg2 = M2C_FIELD(arg0, u8 *, 0x462D);
    *arg3 = M2C_FIELD(arg0, u8 *, 0x462E);
}

void fn_8035BC4C(s32 arg0, s32 arg1);
void fn_8035BD18(void) {
    fn_8035BC4C(1, 0xFFFF);
}

void fn_8035BD44(void) {
    fn_8035BC4C(0, 0xFFFF);
}

