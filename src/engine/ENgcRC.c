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
    void fn_802FB578(void);
    extern u8 lbl_8041CB50[];
    fn_802FB578();
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

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8034BCEC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8034BDCC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
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

