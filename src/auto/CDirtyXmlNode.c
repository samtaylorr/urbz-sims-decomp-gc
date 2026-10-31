/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800A9720(void);
extern void *fn_802D0AB8(void *);
extern void *fn_802D197C(void *heap, u32 size, s32 align);
extern void *fn_802DBBCC(void *heap, u32 size, s32 align);
extern void *fn_802D0B3C(void);
s32 fn_800C38C8(s32 arg0);

typedef struct { s32 a[4]; } Struct16_800BF7FC;
typedef struct { s16 a[9]; } Struct18_800BF784;
extern Struct16_800BF7FC lbl_80433F98;
extern Struct18_800BF784 lbl_803D02C8;
extern char lbl_803D0298[];
void *fn_800BF3FC(s32);
s32 fn_80248808(const char *);
char *fn_80248784(char *, const char *);
s32 fn_800BEF3C(void) {
    return 0x67F664FB;
}

s32 fn_800BEF48(s32 arg0, s32 arg1) {
    extern s32 fn_80317B98(s32, s32, s32, s32 *, s32 *);
    s32 sp8;
    s32 spC;
    fn_80317B98(arg0, arg1, 0, &sp8, &spC);
    return arg0 + sp8;
}

void fn_800BF5E0(void) {

}

char *fn_800BF738(void) {
    char *p;
    const char *s = lbl_803D0298;
    p = fn_800BF3FC(fn_80248808(s) + 1);
    fn_80248784(p, s);
    return p;
}

Struct18_800BF784 *fn_800BF784(void) {
    Struct18_800BF784 *p = fn_800BF3FC(0x12);
    *p = lbl_803D02C8;
    return p;
}

void fn_800BF7DC(void) {

}

s32 fn_800BF7E0(void) {
    return 0;
}

void fn_800BF7E8(void) {

}

s32 fn_800BF7EC(void) {
    return 0;
}

s32 fn_800BF7F4(void) {
    return 0;
}

Struct16_800BF7FC fn_800BF7FC(void) {
    return lbl_80433F98;
}

extern Struct16_800BF7FC lbl_80433F98;
extern Struct18_800BF784 lbl_803D02C8;
extern char lbl_803D0298[];
void *fn_800BF3FC(s32);
s32 fn_80248808(const char *);
char *fn_80248784(char *, const char *);
void fn_800BFB80(const char *fmt, ...) {
}

void fn_800BFBCC(void) {

}

void fn_800BFBD0(void) {

}

void fn_800C0338(s32 arg0) {
    extern s32 lbl_80433468[];
    extern u8 *lbl_80432EF0[];
    extern s32 lbl_804339E0[];
    extern u8 *lbl_80495050;
    u8 *obj;
    u8 *vt;

    if (lbl_80433468[arg0] != 0) {
        obj = lbl_80495050;
        vt = *(u8 **)obj;
        (*(void (**)(void *, s32))(vt + 0xFC))(obj + *(s16 *)(vt + 0xF8), lbl_80433468[arg0]);
        lbl_80433468[arg0] = 0;
    }
    obj = lbl_80432EF0[arg0];
    if (obj != 0) {
        vt = *(u8 **)obj;
        (*(void (**)(void *, s32))(vt + 0x34))(obj + *(s16 *)(vt + 0x30), 3);
        lbl_80432EF0[arg0] = 0;
    }
    lbl_804339E0[arg0] = -1;
}

void fn_800C0548(Struct16_800BF7FC *arg0) {
    extern Struct16_800BF7FC lbl_80432AA8;
    extern Struct16_800BF7FC lbl_80432AB8;
    lbl_80432AA8 = arg0[0];
    lbl_80432AB8 = arg0[1];
}

extern u8 lbl_80431650[];
void fn_802C876C(u8 *arg);
void fn_800C05A0(void) {
    fn_802C876C(lbl_80431650);
}

void fn_800C05C8(void *arg0) {
    M2C_FIELD(&lbl_80431650, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(&lbl_80431650, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(&lbl_80431650, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(&lbl_80431650, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(&lbl_80431650, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(&lbl_80431650, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
}

s32 fn_800C0604(void) {
    return 0;
}

void fn_800C060C(void) {

}

void fn_800C0610(void) {

}

void fn_800C0614(void) {

}

void fn_800C0618(void) {

}

void fn_800C061C(void) {

}

s32 fn_800C0620(u8 *arg0, s32 arg1) {
    typedef struct { s32 key; s32 value; } Pair;
    Pair *p = M2C_FIELD(arg0, Pair **, 0xC);
    p += arg1;
    return p->value;
}

void fn_800C0634(void) {

}

void fn_800C0638(u8 *arg0, s32 arg1) {
    void fn_800C3364(s32 *, s32);
    void fn_800C3640(s32 *, s32);
    void fn_800C30B4(s32 *, s32);
    s32 i;
    s32 *item;

    for (i = 0; i < M2C_FIELD(arg0, s32 *, 4); i++) {
        item = M2C_FIELD(arg0, s32 **, 8)[i];
        switch (*item) {
        case 1:
            fn_800C3364(item, arg1);
            break;
        case 4:
        case 5:
            fn_800C3640(item, arg1);
            break;
        case 6:
            fn_800C30B4(item, arg1);
            break;
        }
    }
}

void fn_800C06E0(void) {
    extern s32 lbl_80494370;
    extern s32 lbl_8049437C;
    extern s32 lbl_80495A24;

    if (lbl_80494370 != 0) {
        M2C_FIELD(M2C_FIELD(lbl_80495A24, void **, 0x68), void (**)(void *, s32, s32, s32, s32), 0x1BC)((u8 *)lbl_80495A24 + M2C_FIELD(M2C_FIELD(lbl_80495A24, void **, 0x68), s16 *, 0x1B8), 1, lbl_8049437C, 1, 0);
    } else {
        M2C_FIELD(M2C_FIELD(lbl_80495A24, void **, 0x68), void (**)(void *, s32, s32, s32, s32), 0x1BC)((u8 *)lbl_80495A24 + M2C_FIELD(M2C_FIELD(lbl_80495A24, void **, 0x68), s16 *, 0x1B8), 0, 1, 1, 0);
    }
}

void fn_800C237C(s32 *self) {
    extern void (*lbl_80443314[])(void *);
    extern s32 lbl_80494380;
    char *obj;
    char *vt;

    self[0] = 0;
    if (self[8] != 0) {
        lbl_80443314[0]((void *)self[8]);
        self[8] = 0;
    }
    obj = (char *)self[9];
    if (obj != NULL) {
        vt = *(char **)(obj + 0x30);
        (*(void (**)(void *, s32))(vt + 0xC))(obj + *(s16 *)(vt + 8), 3);
        self[9] = 0;
    }
    lbl_80494380--;
}

void fn_800C2404(s32 arg0, s32 arg1) {
    s32 fn_800BEF88(s32, void *);
    extern s32 lbl_80495A18;
    extern s32 lbl_80495A1C;
    extern s32 lbl_80495A20;
    lbl_80495A18 = fn_800BEF88(arg0, &lbl_80495A1C);
    lbl_80495A20 = arg1;
}

void fn_800C243C(void) {

}

void fn_800C2834(void) {

}

void fn_800C292C(void) {
    M2C_UNK fn_800A9628(s32);
    extern s32 lbl_80494364;
    fn_800A9628(lbl_80494364);
}

void fn_800C2950(void) {
    fn_800A9720();
}

void fn_800A9920(void);
void fn_800C2970(void) {
    fn_800A9920();
}

void fn_800C2D5C(void) {
    void fn_802D20E8(s32);
    void fn_802D1A00(void *, s32);
    void fn_80248488();
    void fn_8031EA2C(s32);
    void fn_8030FAAC(void *);
    extern s32 lbl_80494364;
    extern s32 lbl_80495A18;
    extern s32 lbl_8049435C;
    extern s32 lbl_80494378;
    extern s32 lbl_80495A28;
    extern u8 lbl_80433FA8[];
    extern u8 lbl_80432AC8[];
    extern u8 lbl_80431690[];
    extern s32 lbl_80432EC8[];

    if (lbl_80494364 != 0) {
        fn_802D20E8(lbl_80494364);
        lbl_80494364 = 0;
    }
    if (lbl_80495A18 != 0) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), lbl_80495A18);
    }
    fn_80248488(lbl_80433FA8, 0, 0xA00);
    fn_80248488(lbl_80432AC8, 0, 0x400);
    lbl_8049435C = 0;
    fn_80248488(lbl_80431690, 0, 0x400);
    fn_80248488(lbl_80432EC8, 0, 0x28);
    fn_8031EA2C(lbl_80494378);
    lbl_80494378 = 0;
    fn_8030FAAC(&lbl_80495A28);
}

extern s32 lbl_80494360;
void fn_800C2E1C(void (*cb)(void)) {
    lbl_80494360 = cb;
}

extern s32 lbl_80495A24;
void fn_800C3820(void (*cb)(void)) {
    lbl_80495A24 = cb;
}

s32 fn_800C3828(s32 arg0) {
    extern s32 lbl_80432EC8[];
    s32 i;

    if (arg0 == 0) {
        return 0;
    }
    fn_800C38C8(arg0);
    for (i = 0; i < 10; i++) {
        if (lbl_80432EC8[i] == 0) {
            lbl_80432EC8[i] = arg0;
            break;
        }
    }
    if (i != 0) {
        return lbl_80432EC8[i - 1];
    }
    return 0;
}

s32 fn_800C38C8(s32 arg0) {
    extern s32 lbl_80432EC8[];
    extern s32 lbl_80432EEC[];
    s32 found;
    s32 i;

    found = i = 0;
    for (; i < 10; i++) {
        if (arg0 == lbl_80432EC8[i]) {
            found = 1;
            break;
        }
    }
    if (found) {
        for (; i < 9; i++) {
            lbl_80432EC8[i] = lbl_80432EC8[i + 1];
        }
        lbl_80432EEC[0] = 0;
    }
    return found;
}

void fn_800C3954(s32 arg0) {
    M2C_UNK fn_80279D50(M2C_UNK);
    extern s32 lbl_80494368;
    extern s32 lbl_8049436C;
    lbl_8049436C = arg0;
    lbl_80494368 = 0;
    do {
        fn_80279D50(1);
    } while ((s32) lbl_80494368 == 0);
    lbl_8049436C = 0;
}

extern void (*lbl_8044331C[])(void);
extern u8 *lbl_80494DF0;
extern char lbl_803D04B8[];
extern char lbl_803D0268[];
extern char lbl_803D04C0[];
void fn_802D3C60(void *, void *);
void fn_802D41A8(void *, char *);
void fn_8027897C(char *, char *);
void fn_802D39F0(void *, char *);
s32 fn_800C3998(char *arg0) {
    char *str;
    char **s = &str;
    u8 *vt = *(u8 **)(lbl_80494DF0 + 0x338);

    fn_802D3C60(s, (*(void *(**)(void *))(vt + 0x24))(lbl_80494DF0 + *(s16 *)(vt + 0x20)));
    fn_802D41A8(s, lbl_803D04B8);
    fn_802D41A8(s, lbl_803D0268);
    fn_802D41A8(s, arg0);
    fn_8027897C(str, lbl_803D04C0);
    fn_802D39F0(s, str);
    return 1;
}

void *fn_800C3A38(u32 size) {
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
void fn_800C3AC8(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D22C8(void);
void fn_800C3AFC(void) {
    fn_802D22C8();
}

void fn_800C3B1C(void) {
    lbl_8044331C[0]();
}

void fn_800C3B48(u16 *src, s32 len, u8 *dst) {
    s32 i;

    if (len == -1) {
        u16 *p = src;
        len = 0;
        while (*p != 0) {
            p++;
            len++;
        }
        len++;
    }
    for (i = 0; i < len; i++) {
        u32 c = *src;
        if ((u16)c <= 0x7F) {
            *dst = *src;
        } else if ((u16)c <= 0x7FF) {
            *dst = ((c >> 6) & 0x1F) | 0xC0;
            *++dst = (*src & 0x3F) | 0x80;
        } else {
            *dst = ((c >> 12) & 0xF) | 0xE0;
            *++dst = ((*src >> 6) & 0x3F) | 0x80;
            *++dst = (*src & 0x3F) | 0x80;
        }
        dst++;
        src++;
    }
}

void fn_800C3C04(u8 *src, s32 len, u16 *dst) {
    u8 *end = src + len;

    while (src < end) {
        if (!(*src & 0x80)) {
            *dst = *src;
            src++;
        } else if ((*src & 0xE0) == 0xC0) {
            *dst = ((*src & 0x1F) << 6) | (src[1] & 0x3F);
            src += 2;
        } else if ((*src & 0xF0) == 0xE0) {
            *dst = ((*src & 0xF) << 12) | ((src[1] & 0x3F) << 6) | (src[2] & 0x3F);
            src += 3;
        } else {
            continue;
        }
        dst++;
    }
}

void fn_800C3C94(s32 arg0, s32 arg1);
void fn_800C3DC8(void) {
    fn_800C3C94(1, 0xFFFF);
}

s32 fn_800C38C8(s32 arg0);
extern void *fn_802D197C(void *heap, u32 size, s32 align);
extern void *fn_802DBBCC(void *heap, u32 size, s32 align);
extern void *fn_802D0B3C(void);
void fn_800C3DF4(void) {
    fn_800C3C94(0, 0xFFFF);
}

