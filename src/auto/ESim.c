/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

static inline void *ESim_AllocAligned(s32 size) {
    void *fn_802D0AB8(void);
    void *fn_802D0B3C(void);
    void *fn_802D197C(void *, s32, s32);
    void *fn_802DC3C0(void *, s32, s32, s32, s32);
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void fn_8003A1D0(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8003A1F0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8003A230(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8003ACD4(void *self) {
    extern void fn_803379C8(void *, s32);
    extern u8 lbl_8045B82C[];
    if (M2C_FIELD(self, s32 *, 0x5D8) != 0) {
        fn_803379C8(lbl_8045B82C, M2C_FIELD(self, s32 *, 0x5D8));
    }
    if (M2C_FIELD(self, s32 *, 0x5DC) != 0) {
        fn_803379C8(lbl_8045B82C, M2C_FIELD(self, s32 *, 0x5DC));
    }
    if (M2C_FIELD(self, s32 *, 0x5E0) != 0) {
        fn_803379C8(lbl_8045B82C, M2C_FIELD(self, s32 *, 0x5E0));
    }
    M2C_FIELD(self, s32 *, 0x5E0) = 0;
    M2C_FIELD(self, s32 *, 0x5DC) = 0;
    M2C_FIELD(self, s32 *, 0x5D8) = 0;
}

s32 fn_8003AD54(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x3B0);
    u8 *vt = *(u8 **)(obj + 4);
    return (*(s32 (**)(void *))(vt + 0x1C4))(obj + *(s16 *)(vt + 0x1C0));
}

s32 fn_8003AD8C(void) {
    s32 fn_8003AD54();
    return fn_8003AD54() ^ 1;
}

void fn_8003ADB0(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x3B0);
    u8 *vt = *(u8 **)(obj + 4);
    (*(void (**)(void *))(vt + 0x1D4))(obj + *(s16 *)(vt + 0x1D0));
}

void fn_8003ADE8(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x3B0);
    u8 *vt = *(u8 **)(obj + 4);
    (*(void (**)(void *))(vt + 0x1BC))(obj + *(s16 *)(vt + 0x1B8));
}

void fn_8003AE20(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x3B0);
    u8 *vt = *(u8 **)(obj + 4);
    (*(void (**)(void *))(vt + 0x19C))(obj + *(s16 *)(vt + 0x198));
}

void fn_8003AE58(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x3B0);
    u8 *vt = *(u8 **)(obj + 4);
    (*(void (**)(void *))(vt + 0x1A4))(obj + *(s16 *)(vt + 0x1A0));
}

void fn_8003AE90(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x3B0);
    u8 *vt = *(u8 **)(obj + 4);
    (*(void (**)(void *))(vt + 0x1AC))(obj + *(s16 *)(vt + 0x1A8));
}

void fn_8003AEC8(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x3B0);
    u8 *vt = *(u8 **)(obj + 4);
    (*(void (**)(void *))(vt + 0x1B4))(obj + *(s16 *)(vt + 0x1B0));
}

void fn_8003CA1C(u8 *self, void *arg1) {
    extern void fn_802F4DA4(void *, void *);
    extern void fn_80095CDC(void *, void *);
    u8 *obj;
    u8 *vt;

    fn_802F4DA4(self, arg1);
    obj = *(u8 **)(self + 0x300);
    vt = *(u8 **)(obj + 4);
    fn_80095CDC((*(void *(**)(void *))(vt + 0x14C))(obj + *(s16 *)(vt + 0x148)), arg1);
}

void fn_8003CA70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_800A43F4(s32, s32, M2C_UNK, s32, s32, M2C_UNK);
    fn_800A43F4(arg1, arg0 + 0x410, 0, arg2, arg3, 0);
}

void fn_8003CFE0(s32 arg0) {
    s32 fn_8003E48C();
    M2C_UNK fn_802E77F0(s32, s32, s32);
    extern s32 lbl_80494DFC;
    if (fn_8003E48C() == 0) {
        fn_802E77F0(arg0 + 0x314, arg0 + 0xD0, lbl_80494DFC);
    }
}

void fn_8003D024(void) {

}

void fn_8003E19C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x668) = 0;
    M2C_FIELD(arg0, s32 *, 0x66C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x65C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x660) = arg2;
}

void fn_8003E1B4(void *arg0, s32 arg1) {
    typedef struct {
        s16 adj;
        s16 pad;
        void *fn;
    } VEntry;
    extern void fn_800A61AC(void *);
    extern void fn_800A61F8(void *, s32);
    extern void fn_800A6238(void *, s32, s32, s32, s32);
    char buf[0x18];

    fn_800A61AC(buf);
    {
        char *obj = M2C_FIELD(arg0, char **, 0x3B0);
        VEntry *e = (VEntry *)(*(char **)(obj + 4) + 0x120);
        fn_800A6238(buf, M2C_FIELD(M2C_FIELD(arg0, void **, 0x674), s32 *, 0x20),
                    ((s32 (*)(void *))e->fn)(obj + e->adj), arg1, 1);
    }
    {
        char *obj = M2C_FIELD(arg0, char **, 0x3B0);
        char *vt = *(char **)(obj + 4);
        VEntry *e = (VEntry *)(vt + 0x110);
        VEntry *g = (VEntry *)(vt + 0x120);
        ((void (*)(void *, s32, s32))e->fn)(obj + e->adj, 0x3C,
            *(s8 *)(((char *(*)(void *))g->fn)(obj + g->adj) + 0xA8));
    }
    fn_800A61F8(buf, 2);
}

void fn_8003E3A0(void *arg0, s32 arg1) {
    extern void fn_8009CCE4(void *);
    extern void fn_8009CD40(void *, s32);
    extern void fn_8009D0F8(void *, s32);
    extern void fn_8009D108(void *, s32, s32);
    extern void fn_8009E244(void *, s32);
    s32 fn_8003AD54(void *);
    u8 buf[0x1F8];
    s32 *p;
    s32 i;
    s32 v;

    p = (s32 *)((char *)arg0 + 0x410);
    fn_8009CCE4(buf);
    fn_8009D0F8(buf, fn_8003AD54(arg0));
    for (i = 0; i <= 0x16; i++) {
        v = *p++;
        if (v != 0) {
            fn_8009D108(buf, i, v);
        }
    }
    fn_8009E244(buf, arg1);
    fn_8009CD40(buf, 2);
}

void fn_8003E430(void *arg0, s32 arg1) {
    extern void fn_8003AF00(void *);
    switch (arg1) {
    case 0:
        fn_8003AF00(arg0);
        break;
    case 1:
        fn_8003E1B4(arg0, M2C_FIELD(arg0, s32 *, 0x658));
        M2C_FIELD(arg0, s32 *, 0x658) = 0;
        break;
    }
}

s32 fn_8003E48C(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x600) > 0) {
        return 1;
    }
    return M2C_FIELD(arg0, s32 *, 0x63C);
}

void fn_8003E4A8(void *arg0) {
    M2C_UNK fn_8003E50C(void *);
    M2C_UNK fn_802D8F90(s32);
    extern s32 lbl_80494DF0;
    fn_802D8F90(lbl_80494DF0);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x63C) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x600) <= 0)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x640) != 0) {
            fn_8003E50C(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x63C) = 0;
    }
}

void fn_8003E50C(void *arg0) {
    M2C_UNK fn_8003C7A8(void *, void *);
    M2C_UNK fn_800A46B4(void *, M2C_UNK);
    M2C_UNK fn_8032B9E4(s32);
    M2C_UNK fn_8032BEB8(s32);
    void *temp_r30;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x640) != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x3B8);
        if (temp_r9 != NULL) {
            fn_8032B9E4(M2C_FIELD(temp_r9, s32 *, 0x134));
        }
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x3BC);
        if (temp_r9_2 != NULL) {
            fn_8032B9E4(M2C_FIELD(temp_r9_2, s32 *, 0x134));
        }
        temp_r9_3 = M2C_FIELD(arg0, void **, 0x3C0);
        if (temp_r9_3 != NULL) {
            fn_8032B9E4(M2C_FIELD(temp_r9_3, s32 *, 0x134));
        }
        temp_r9_4 = M2C_FIELD(arg0, void **, 0x3C4);
        if (temp_r9_4 != NULL) {
            fn_8032B9E4(M2C_FIELD(temp_r9_4, s32 *, 0x134));
        }
        temp_r9_5 = M2C_FIELD(arg0, void **, 0x3C8);
        if (temp_r9_5 != NULL) {
            fn_8032B9E4(M2C_FIELD(temp_r9_5, s32 *, 0x134));
        }
        M2C_FIELD(arg0, s32 *, 0x640) = 0;
        fn_8032BEB8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B8), s32 *, 0x134));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x650) != 0) {
            temp_r30 = arg0 + 0x3B4;
            fn_800A46B4(temp_r30, 0);
            fn_8003C7A8(arg0, temp_r30);
        }
    }
}

void fn_8003E5E0(void *arg0, s32 arg1) {
    char *obj = M2C_FIELD(arg0, char **, 0x3B0);
    char *vt = *(char **)(obj + 4);
    M2C_FIELD(arg0, s32 *, 0x5EC) = (((s32 (*)(void *))M2C_FIELD(vt, void **, 0x1E4))(obj + M2C_FIELD(vt, s16 *, 0x1E0)) != 0) ? 0 : arg1;
}

void fn_8003EB40(void *arg0) {
    extern void fn_8006D99C(void *, s32);
    extern void fn_8006D9D4(void *, s32);
    extern void fn_8006D9A4(void *, s32);
    char *o = M2C_FIELD(arg0, char **, 0x3B0);
    char *vt = *(char **)(o + 4);
    s32 v = ((s32 (*)(void *))M2C_FIELD(vt, void **, 0x124))(o + M2C_FIELD(vt, s16 *, 0x120));
    {
        s32 buf[2];
        fn_8006D99C(buf, (s32)((char *)arg0 + 0x3B4));
        fn_8006D9D4(buf, v);
        M2C_FIELD(arg0, s32 *, 0x650) = 1;
        fn_8006D9A4(buf, 2);
    }
}

void fn_8003EBB4(void *arg0) {
    extern void fn_8009B19C(void *, s32);
    extern void fn_8009B1D4(void *, s32);
    extern void fn_8009B1A4(void *, s32);
    char *o = M2C_FIELD(arg0, char **, 0x3B0);
    s32 v = ((s32 (*)(void *))M2C_FIELD(*(char **)(o + 4), void **, 0x124))(o + M2C_FIELD(*(char **)(o + 4), s16 *, 0x120));
    {
        s32 buf[2];
        fn_8009B19C(buf, (s32)((char *)arg0 + 0x3B4));
        fn_8009B1D4(buf, v);
        fn_8009B1A4(buf, 2);
    }
}

void fn_8003EC20(void *arg0) {
    s32 fn_8003AD54(void *);
    void fn_802F52DC(s32, u32, s32);
    u32 color;
    s32 *arr;
    s32 *p;
    s32 i;

    color = 0x955B73F2;
    if (fn_8003AD54(arg0) != 0) {
        color = 0xCF80584F;
    }
    arr = (s32 *)((char *)arg0 + 0x3B4);
    p = arr;
    for (i = 0; i <= 0x16; i++) {
        if (*p++ != 0) {
            if (i == 4) {
                fn_802F52DC(arr[4], color, M2C_FIELD(M2C_FIELD(arg0, void **, 0x678), s32 *, 8));
            } else {
                fn_802F52DC(p[-1], color, M2C_FIELD(M2C_FIELD(arg0, void **, 0x674), s32 *, 8));
            }
        }
    }
}

void fn_8003ECBC(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, u8 *, 0) | (M2C_FIELD(arg0, u8 *, 1) << 8) | (M2C_FIELD(arg0, u8 *, 2) << 0x10) | (M2C_FIELD(arg0, u8 *, 3) << 0x18);
}

void fn_8003ECEC(u32 arg0, u8 *arg1) {
    arg1[0] = arg0;
    arg1[1] = arg0 >> 8;
    arg1[2] = arg0 >> 16;
    arg1[3] = arg0 >> 24;
}

u32 fn_8003ED0C(u8 *arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    u32 r = 0;
    u32 g = 0;
    u32 b = 0;
    u32 a = 0;
    u32 y;
    u8 *p;

    for (y = arg1; y < arg1 + arg3; y++) {
        for (p = arg0; p < arg0 + arg3; p++) {
            r += p[y * arg4 + arg2];
        }
    }
    arg3 *= arg3;
    return (r / arg3) | ((g / arg3) << 8) | ((b / arg3) << 16) | ((a / arg3) << 24);
}

void fn_8003F3CC(void *arg0) {
    M2C_UNK fn_8003EE98();
    M2C_UNK fn_8003F10C();
    u32 temp_r0;

    temp_r0 = (u8) M2C_FIELD(arg0, u8 *, 0x1A) >> 3U;
    switch ((s32) temp_r0) {                        /* irregular */
    case 1:
        fn_8003EE98();
        return;
    case 2:
        fn_8003F10C();
        return;
    }
}

void fn_8003F410(void *arg0) {
    typedef struct {
        s16 adj;
        s16 pad;
        void *fn;
    } VEntry;
    extern void fn_801CAFCC(void *);
    extern void fn_801CB05C(void *, s32);
    extern char **fn_801CB188(void *);
    extern s32 fn_801CB6F8(void *, s32, s32);
    extern void fn_801CB130(void *, s32);
    extern void fn_8003F4C0(void *, s32);
    char buf[0x18];
    char *info;

    {
        char *obj = M2C_FIELD(arg0, char **, 0x3B0);
        VEntry *e = (VEntry *)(*(char **)(obj + 4) + 0x120);
        info = ((char *(*)(void *))e->fn)(obj + e->adj);
    }
    fn_801CAFCC(buf);
    fn_801CB05C(buf, M2C_FIELD(info, s32 *, 0x80));
    if ((*fn_801CB188(buf))[*(s8 *)(info + 0x89) * 0x1C + 8] != 0) {
        fn_8003F4C0(arg0, fn_801CB6F8(buf, 0xC, *(s8 *)(info + 0x8A)));
    }
    fn_801CB130(buf, 2);
}

void *fn_8003F758(void *arg0, s32 arg1) {
    void *fn_802F3F14(void *);
    extern u8 lbl_80407E40[];
    fn_802F3F14(arg0);
    M2C_FIELD(arg0, s32 *, 0x300) = arg1;
    M2C_FIELD(arg0, void **, 0) = lbl_80407E40;
    return arg0;
}

void fn_8003F79C(void *arg0, s32 arg1) {
    void fn_802F3FC8(void *, s32);
    void *fn_802D0AB8(void);
    void fn_802D1A00(void *, void *);
    extern u8 lbl_80407E40[];
    M2C_FIELD(arg0, void **, 0x300) = 0;
    M2C_FIELD(arg0, void **, 0) = lbl_80407E40;
    fn_802F3FC8(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

void fn_8003F7F8(void) {
    void fn_80248488();
    void *fn_8003F9E0(void *);
    void *obj;

    obj = ESim_AllocAligned(0x680);
    fn_80248488(obj, 0, 0x680);
    fn_8003F9E0(obj);
}

void fn_8003F8A0(void) {
    fn_8003F9E0();
}

void fn_8003F8C0(void *self) {
    extern void fn_8003A9F0(void *, s32);
    fn_8003A9F0(self, 2);
}

void fn_8003F8E4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491C78[];
void *fn_8003F924(void) {
    return lbl_80491C78;
}

extern s32 lbl_80491C84[];
s32 fn_8003F930(void) {
    return lbl_80491C84[0];
}

extern s32 lbl_80491C88[];
s32 fn_8003F93C(void) {
    return lbl_80491C88[0];
}

extern u16 lbl_80491C8C[];
u16 fn_8003F948(void) {
    return lbl_80491C8C[0];
}

void *fn_8003F954(void) {
    return lbl_80491C78;
}

extern u16 lbl_80491C8E[];
u16 fn_8003F960(void) {
    return lbl_80491C8E[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8003F7F8(void);
extern void fn_8003F8C0(void *);
extern u8 lbl_803C5AA0[];
extern u8 lbl_80491CA0[];
void fn_8003F96C(s32 arg0) {
    fn_802D6A90(lbl_80491C78, fn_8003F7F8, fn_8003F8A0, fn_8003F8C0, arg0, lbl_803C5AA0, lbl_80491CA0);
}

void fn_8003F9C0(void) {
    fn_802D2430();
}

void *fn_8003F9E0(void *arg0) {
    void fn_80065ADC(void *);
    extern f32 lbl_803C5D44[];
    extern u8 lbl_80407C40[];
    extern u8 lbl_80407C78[];
    s32 i;
    u8 *p;
    f32 f;

    fn_80065ADC(arg0);
    M2C_FIELD(arg0, void **, 0x300) = lbl_80407C40;
    M2C_FIELD(arg0, void **, 0) = lbl_80407C78;
    for (i = 8; i != 0; i--) {
    }
    p = (u8 *)arg0 + 0x604;
    M2C_FIELD(p, s32 *, 0) = 0;
    M2C_FIELD(p, s32 *, 4) = 0;
    M2C_FIELD(p, s32 *, 8) = 0;
    M2C_FIELD(p, s32 *, 0xC) = 0;
    M2C_FIELD(p, s32 *, 0x10) = 0;
    M2C_FIELD(p, s32 *, 0x14) = 0;
    M2C_FIELD(p, s32 *, 0x18) = 0;
    M2C_FIELD(p, s32 *, 0x1C) = 0;
    M2C_FIELD(p, s32 *, 0x20) = 0;
    M2C_FIELD(p, s32 *, 0x24) = 0;
    M2C_FIELD(p, s32 *, 0x28) = 0;
    f = lbl_803C5D44[0];
    M2C_FIELD(p, s32 *, 0x34) = 0;
    M2C_FIELD(p, f32 *, 0x2C) = f;
    M2C_FIELD(p, f32 *, 0x30) = f;
    M2C_FIELD(arg0, s32 *, 0x65C) = 0;
    return arg0;
}

void fn_8003FA80(void) {

}

s32 fn_8003FA84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x530);
}

s32 fn_8003FA8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3B0);
}

s32 fn_8003FA94(void *arg0, s32 i) {
    typedef struct { u8 pad[0x3B4]; s32 arr[1]; } S;
    return ((S *)arg0)->arr[i];
}

s32 fn_8003FAA4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x654);
}

void fn_8003FAAC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x52C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x46C) = arg2;
}

s32 fn_8003FAB8(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x46C);
    return M2C_FIELD(arg0, s32 *, 0x52C);
}

f32 fn_8003FAC8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x3BC), void **, 0x134), f32 *, 0x6C);
}

void *fn_8003FAD8(void *arg0, s32 i) {
    return (u8 *)arg0 + (i * 8 + 0x558);
}

s32 fn_8003FAE8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x53C);
}

void fn_8003FAF0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x540) = farg0;
}

void fn_8003FAF8(void) {
    M2C_UNK fn_8003F64C(M2C_UNK, M2C_UNK);
    fn_8003F64C(1, 0xFFFF);
}

