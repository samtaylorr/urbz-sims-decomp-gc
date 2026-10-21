/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

static inline s32 ListCount(u8 *list) {
    return *(s32 *)(list + 4);
}

extern void fn_802482F8(void *, void *, s32);
static inline u8 *ReadData(void *dst, u8 *src, s32 size) {
    fn_802482F8(dst, src, size);
    return src + size;
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8032CCE4(void);
extern void fn_8032CD0C(void *);
extern void fn_8032CD38(void *);
void *fn_8032CE88(u32 size, void *p);
extern u8 lbl_80493948[];
extern u8 lbl_803F331C[];
extern u8 lbl_80493858[];
extern f32 lbl_803F33B4;
extern f32 lbl_803F33B8;
extern f32 lbl_80496244;
extern s32 lbl_80496248;

void fn_802D2FD0(void);
void fn_80329264(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80329284(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_803292C4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_803296D4(u8 *self) {
    extern void fn_802FFE1C(u8 *);
    s32 i;

    for (i = 0; i < ListCount(self + 0x20); i++) {
        fn_802FFE1C(*(u8 **)(self + 0x20) + i * 0x18);
    }
}

void fn_80329738(u8 *self) {
    extern void fn_802FFE78(u8 *);
    s32 i;

    for (i = 0; i < ListCount(self + 0x20); i++) {
        fn_802FFE78(*(u8 **)(self + 0x20) + i * 0x18);
    }
}

s32 fn_8032979C(u8 *self) {
    extern void fn_802FFE1C(u8 *);
    extern s32 fn_802FFED4(u8 *);
    s32 i;
    s32 j;

    for (i = 0; i < ListCount(self + 0x20); i++) {
        if (fn_802FFED4(*(u8 **)(self + 0x20) + i * 0x18) == 0) {
            for (j = i - 1; j >= 0; j--) {
                fn_802FFE1C(*(u8 **)(self + 0x20) + j * 0x18);
            }
            return 0;
        }
    }
    return 1;
}

void fn_80329838(void) {

}

s32 fn_80329DB8(u32 arg0) {
    if ((arg0 >> 16) != 0) {
        return 1;
    }
    return (u16)arg0 == 0x26;
}

s32 fn_80329DDC(u8 *self, s32 data) {
    extern void *fn_80338000(void *, s32, s32);
    extern void fn_80338184(void *, void *);
    extern u8 lbl_8045B82C[];
    s32 start = data;
    s32 size;

    fn_802482F8(self + 0x164, (void *)data, 4);
    data += 4;
    if (*(void **)(self + 0x168) != 0) {
        fn_80338184(lbl_8045B82C, *(void **)(self + 0x168));
        *(void **)(self + 0x168) = 0;
    }
    if (*(s32 *)(self + 0x164) != 0) {
        *(void **)(self + 0x168) = fn_80338000(lbl_8045B82C, *(s32 *)(self + 0x164) << 6, 0x10);
        size = *(s32 *)(self + 0x164) << 6;
        fn_802482F8(*(void **)(self + 0x168), (void *)data, size);
        data += size;
    }
    return data - start;
}

s32 fn_8032A3DC(u8 *self) {
    s32 i;
    s32 total = 0;

    for (i = 0; i < ListCount(self + 0x20); i++) {
        total += *(s32 *)(*(u8 **)(self + 0x20) + i * 0x18 + 4);
    }
    return total;
}

void *fn_8032A410(u8 *self) {
    extern void *fn_80338000(void *, s32, s32);
    extern void fn_802C8814(void *, f32 *);
    extern void fn_802C876C(void *);
    extern u8 lbl_8045B82C[];
    extern f32 lbl_803F3360[];
    f32 v[3];
    f32 s;
    void *p;

    if (*(void **)(self + 0x1A0) == 0) {
        p = fn_80338000(lbl_8045B82C, 0x40, 0x10);
        s = *(f32 *)(self + 0x6C);
        if (s != lbl_803F3360[0]) {
            *(void **)(self + 0x1A0) = p;
            v[2] = s;
            v[1] = s;
            v[0] = s;
            fn_802C8814(p, v);
        } else {
            *(void **)(self + 0x1A0) = p;
            fn_802C876C(p);
        }
    }
    return *(void **)(self + 0x1A0);
}

void fn_8032A490(u8 *self) {
    extern void fn_80338184(void *, void *);
    extern u8 lbl_8045B82C[];

    if (*(void **)(self + 0x1A0) != 0) {
        fn_80338184(lbl_8045B82C, *(void **)(self + 0x1A0));
        *(void **)(self + 0x1A0) = 0;
    }
}

void fn_8032A5B4(u8 *self, s32 arg1) {
    extern void fn_80300104(u8 *, s32);
    s32 i;

    for (i = 0; i < ListCount(self + 0x20); i++) {
        fn_80300104(*(u8 **)(self + 0x20) + i * 0x18, arg1);
    }
}

void fn_8032A620(u8 *self, s32 arg1) {
    extern void fn_8030019C(u8 *, s32);
    s32 i;

    for (i = 0; i < ListCount(self + 0x20); i++) {
        fn_8030019C(*(u8 **)(self + 0x20) + i * 0x18, arg1);
    }
}

void fn_8032A68C(u8 *self, s32 arg1) {
    extern void fn_80300200(u8 *, s32);
    s32 i;

    for (i = 0; i < ListCount(self + 0x20); i++) {
        fn_80300200(*(u8 **)(self + 0x20) + i * 0x18, arg1);
    }
}

s32 fn_8032A6F8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x140);
}

s32 fn_8032A700(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14C);
}

s32 fn_8032A708(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x158);
}

void fn_8032A710(u8 *self, s32 arg1) {
    extern void fn_80300044(u8 *, s32);
    s32 i;

    for (i = 0; i < ListCount(self + 0x20); i++) {
        fn_80300044(*(u8 **)(self + 0x20) + i * 0x18, arg1);
    }
}

void fn_8032B9E4(void) {

}

void fn_8032BF88(s32 arg0) {
    M2C_UNK fn_8032BF30();
    M2C_UNK fn_8032C204(s32);
    M2C_UNK fn_803BC284(s32);
    fn_8032BF30();
    fn_803BC284(arg0 + 0x130);
    fn_8032C204(arg0);
}

void fn_8032BFC4(u8 *self) {
    extern void fn_803006F4(u8 *);
    s32 i;

    for (i = 0; i < ListCount(self + 0x20); i++) {
        fn_803006F4(*(u8 **)(self + 0x20) + i * 0x18);
    }
}

void fn_8032C028(u8 *self) {
    extern void fn_80300750(u8 *);
    s32 i;

    for (i = 0; i < ListCount(self + 0x20); i++) {
        fn_80300750(*(u8 **)(self + 0x20) + i * 0x18);
    }
}

void fn_8032C08C(void *arg0, s32 arg1, s32 arg2) {
    s32 fn_8031AEB4(s32, s32);
    if (fn_8031AEB4(M2C_FIELD(arg0, s32 *, 0x130) + (arg1 * 0xE0), arg2) != 0) {
        M2C_FIELD(arg0, s32 *, 0x12C) = 1;
    }
}

s32 fn_8032C194(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x134);
}

void fn_8032C204(u8 *self) {
    extern void fn_80300698(u8 *);
    s32 i;

    for (i = 0; i < ListCount(self + 0x20); i++) {
        fn_80300698(*(u8 **)(self + 0x20) + i * 0x18);
    }
}

void fn_8032CCE4(void) {
    M2C_UNK fn_80329304();
    M2C_UNK fn_8032CE58(M2C_UNK);
    fn_8032CE58(0x1A4);
    fn_80329304();
}

void fn_8032CD0C(void *self) {
    M2C_UNK fn_80329304();
    fn_80329304(fn_8032CE88(0x1A4, self));
}

extern f32 lbl_803F33B4;
extern f32 lbl_803F33B8;
extern f32 lbl_80496244;
extern s32 lbl_80496248;
void fn_8032CD38(void *self) {
    void fn_8032952C(void *, s32);
    fn_8032952C(self, 2);
}

void fn_8032CD5C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493948[];
void *fn_8032CD9C(void) {
    return lbl_80493948;
}

extern s32 lbl_80493954[];
s32 fn_8032CDA8(void) {
    return lbl_80493954[0];
}

extern s32 lbl_80493958[];
s32 fn_8032CDB4(void) {
    return lbl_80493958[0];
}

extern u16 lbl_8049395C[];
u16 fn_8032CDC0(void) {
    return lbl_8049395C[0];
}

void *fn_8032CDCC(void) {
    return lbl_80493948;
}

extern u16 lbl_8049395E[];
u16 fn_8032CDD8(void) {
    return lbl_8049395E[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8032CCE4(void);
extern void fn_8032CD0C(void *);
extern void fn_8032CD38(void *);
extern u8 lbl_803F331C[];
extern u8 lbl_80493858[];
void fn_8032CDE4(s32 arg0) {
    fn_802D6A90(lbl_80493948, fn_8032CCE4, fn_8032CD0C, fn_8032CD38, arg0, lbl_803F331C, lbl_80493858);
}

void fn_802D2430(void);
void fn_8032CE38(void) {
    fn_802D2430();
}

void fn_8032CE58(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045B82C[];
    fn_80338000(lbl_8045B82C, arg0, 4);
}

void *fn_8032CE88(u32 size, void *p);
void *fn_8032CE88(u32 size, void *p) {
    return p;
}

void fn_8032CE90(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045B82C[];
    fn_80338184(lbl_8045B82C, arg0);
}

void fn_8032CEBC(void *arg0, void *arg1, void *arg2) {
    void fn_802C4F6C(void *, void *, void *);
    fn_802C4F6C(arg2, (u8 *)arg0 + 0x3C, arg1);
}

s32 fn_8032CEF0(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x13C) + (arg1 * 0xB0);
}

s32 fn_8032CF00(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x148) + (arg1 * 0x58);
}

s32 fn_8032CF10(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x154) + (arg1 * 0x58);
}

s32 fn_8032CF20(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

s32 fn_8032CF28(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

s32 fn_8032CF30(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_8032CF38(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

s32 fn_8032CF40(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

s32 fn_8032CF48(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_8032CF50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

s32 fn_8032CF58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x98);
}

s32 fn_8032CF60(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x94);
}

u8 fn_8032CF68(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x160);
}

void fn_8032CF70(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x161) = -1;
}

s32 fn_8032CF7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x164);
}

s32 fn_8032CF84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x16C);
}

s32 fn_8032CF8C(s32 arg0) {
    return arg0 + 0x170;
}

void fn_8032CF94(void) {
    void fn_8032CC5C(s32, s32);
    fn_8032CC5C(1, 0xFFFF);
}

