/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } SMCVec3;

static inline void SMCVec3_Set(SMCVec3 *v, f32 a) {
    v->x = a;
    v->y = a;
    v->z = a;
}

static inline SMCVec3 *SMCVec3_Copy(SMCVec3 *d, const SMCVec3 *s) {
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    return d;
}

extern s32 lbl_80495930;
extern f32 lbl_803CE168[];
extern f32 lbl_80494320;
extern f32 lbl_80495924;
extern f32 lbl_80495928;
extern s32 lbl_80495934;
extern s32 lbl_80495810;
extern s32 lbl_8045B438[];
extern void fn_800A9720(void);
void fn_8003E5E0(s32, s32);
extern u8 *lbl_80496668;
extern u8 *lbl_804961A4;
void fn_800AA018(void);
extern void fn_800A9980(void *);
extern void fn_803349A8(void *, s32);

s32 fn_800A4754(void) {
    M2C_UNK fn_802CA9A8();
    s32 fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494310;
    s32 temp_r30;

    if ((s32) lbl_80494310 == 0) {
        temp_r30 = fn_802D1FC8(0x1C);
        fn_802CA9A8();
        lbl_80494310 = temp_r30;
    }
    return lbl_80494310;
}

void fn_800A48D0(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80337AEC(void *, s32);
    extern u8 lbl_8045BA40[];

    if (arg1 != 0) {
        fn_80337AEC(lbl_8045BA40, arg1);
    }
    if (arg2 != 0) {
        fn_80337AEC(lbl_8045BA40, arg2);
    }
}

s32 fn_800A4924(s32 arg0, s32 arg1) {
    extern char *lbl_80495060;
    char *obj = lbl_80495060;
    char *vt = *(char **)obj;
    return (*(s32 (**)(void *, s32, s32))(vt + 0x34))(obj + *(s16 *)(vt + 0x30), arg0, arg1);
}

s32 fn_800A4964(void) {
    return 1;
}

s32 fn_800A496C(void) {
    return 1;
}

s32 fn_800A4974(s32 arg0, s32 arg1) {
    s32 fn_80070300(s32, s32);
    return fn_80070300(arg1, arg0) == 1;
}

void fn_800A49AC(void) {
    extern char *lbl_80495060;
    extern u8 lbl_803CDD4C[];
    char *obj;
    char *vt;

    obj = lbl_80495060;
    vt = *(char **)obj;
    (*(void (**)(void *, void *))(vt + 0xC4))(obj + *(s16 *)(vt + 0xC0), lbl_803CDD4C);
    obj = lbl_80495060;
    vt = *(char **)obj;
    (*(void (**)(void *, s32, s32))(vt + 0xBC))(obj + *(s16 *)(vt + 0xB8), 1, 0x2000);
    obj = lbl_80495060;
    vt = *(char **)obj;
    (*(void (**)(void *, s32, s32))(vt + 0xBC))(obj + *(s16 *)(vt + 0xB8), 2, 0xD6000);
}

s32 fn_800A4B14(s32 arg0, s32 *arg1);
s32 fn_800A4A38(void) {
    s32 buf[2];
    s32 ret = 1;
    s32 i;
    for (i = 0; i <= 1; i++) {
        ret = fn_800A4B14(i, buf);
        if (ret != 1) break;
    }
    return ret;
}

s32 fn_800A4A88(s32 arg0) {
    extern char *lbl_80495060;
    char *obj = lbl_80495060;
    char *vt = *(char **)obj;
    return (*(s32 (**)(void *, s32))(vt + 0x94))(obj + *(s16 *)(vt + 0x90), arg0);
}

s32 fn_800A4AC4(s32 arg0, s32 *arg1) {
    extern char *lbl_80495060;
    char *obj = lbl_80495060;
    char *vt = *(char **)obj;
    *arg1 = (*(s32 (**)(void *, s32))(vt + 0x9C))(obj + *(s16 *)(vt + 0x98), arg0);
    return 1;
}

s32 fn_800A4B14(s32 arg0, s32 *arg1) {
    extern char *lbl_80495060;
    char *obj = lbl_80495060;
    char *vt = *(char **)obj;
    *arg1 = (*(s32 (**)(void *, s32))(vt + 0xA4))(obj + *(s16 *)(vt + 0xA0), arg0);
    return 1;
}

s32 fn_800A4B64(s32 arg0, s32 *arg1) {
    extern char *lbl_80495060;
    char *obj = lbl_80495060;
    char *vt = *(char **)obj;
    *arg1 = (*(s32 (**)(void *, s32))(vt + 0xAC))(obj + *(s16 *)(vt + 0xA8), arg0);
    return 1;
}

s32 fn_800A4BB4(s32 arg0, s32 arg1) {
    extern char *lbl_80495060;
    char *obj = lbl_80495060;
    char *vt = *(char **)obj;
    return (*(s32 (**)(void *, s32, s32))(vt + 0xB4))(obj + *(s16 *)(vt + 0xB0), arg0, arg1);
}

s32 fn_800A4BF4(s32 arg0, s32 *arg1) {
    extern char *lbl_80495060;
    char *obj = lbl_80495060;
    char *vt = *(char **)obj;
    s32 buf;
    if ((*(s32 (**)(void *, s32, s32 *))(vt + 0xB4))(obj + *(s16 *)(vt + 0xB0), arg0, &buf) == -4) {
        *arg1 = 1;
    } else {
        *arg1 = 0;
    }
    return 1;
}

s32 fn_800A4C58(s32 arg0, s32 *arg1) {
    extern char *lbl_80495060;
    char *obj = lbl_80495060;
    char *vt = *(char **)obj;
    s32 buf;
    s32 v = 0;
    if ((*(s32 (**)(void *, s32, s32 *))(vt + 0xB4))(obj + *(s16 *)(vt + 0xB0), arg0, &buf) == -8) {
        v = 1;
    }
    *arg1 = v;
    return 1;
}

s32 fn_800A4FCC(s32 arg0, s32 *arg1) {
    M2C_UNK fn_800A4924(s32, s32);
    s32 fn_8012EB5C(void *, s32, s32 *);
    extern void *lbl_8049440C;
    extern s32 lbl_80494460;
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(lbl_8049440C, s32 *, 0x24);
    if (temp_r0 == 1) {
        *arg1 = temp_r0;
        return 1;
    }
    temp_r3 = fn_8012EB5C(lbl_8049440C, arg0, arg1);
    if (temp_r3 != 1) {
        *arg1 = 1;
    }
    fn_800A4924(lbl_80494460, arg0);
    return temp_r3;
}

s32 fn_800A5090(void *arg0) {
    s32 fn_80070188(void *);
    extern void *lbl_8041FAD0;
    void *self = arg0;
    s32 ret;

    ret = fn_80070188(lbl_8041FAD0);
    if (ret != 1) {
        ((s32 (*)(void *))fn_800A4964)(self);
    }
    return ret;
}

void fn_800A50DC(void *arg0, s32 arg1) {
    M2C_UNK fn_8007046C(void *, s32);
    extern void *lbl_8041FAD0[];
    fn_8007046C(lbl_8041FAD0[0], arg1);
}

void fn_800A5104(void *arg0, s32 arg1) {
    M2C_UNK fn_800704F4(void *, s32);
    extern void *lbl_8041FAD0[];
    fn_800704F4(lbl_8041FAD0[0], arg1);
}

s32 fn_800A512C(void) {
    extern void *lbl_8041FAD0[];
    return M2C_FIELD(lbl_8041FAD0[0], s32 *, 0xC);
}

s32 fn_800A513C(s32 arg0) {
    extern char *lbl_80495060;
    char *obj = lbl_80495060;
    char *vt = *(char **)obj;
    return (*(s32 (**)(void *, s32))(vt + 0x6C))(obj + *(s16 *)(vt + 0x68), arg0);
}

s32 fn_800A5178(s32 arg0) {
    extern char *lbl_80495060;
    extern s32 lbl_80494460;
    char *obj = lbl_80495060;
    char *vt = *(char **)obj;
    return (*(s32 (**)(void *, s32, s32, s32))(vt + 0x5C))(obj + *(s16 *)(vt + 0x58), lbl_80494460, arg0, 0);
}

void fn_800A51BC(void) {

}

s32 fn_800A51C0(void) {
    return 0xD6000;
}

s32 fn_800A56DC(s32 arg0, s32 arg1) {
    s32 fn_8012E150(void *, u8, s32);
    M2C_UNK fn_800A4924(s32, s32);
    extern void *lbl_8049440C;
    extern s32 lbl_80494460;
    s32 temp_r29;

    temp_r29 = fn_8012E150(lbl_8049440C, arg0, arg1);
    fn_800A4924(lbl_80494460, arg0);
    return temp_r29;
}

s32 fn_800A6154(void) {
    return 0;
}

void fn_800A615C(u32 arg0, u8 *arg1) {
    u8 a = arg0 >> 24;
    u8 r = arg0 >> 16;
    u8 g = arg0 >> 8;
    u8 b = arg0;
    arg1[0] = a;
    arg1[1] = r;
    arg1[2] = g;
    arg1[3] = b;
}

void fn_800A617C(void *arg0, s32 *arg1) {
    *arg1 = (M2C_FIELD(arg0, u8 *, 0) << 0x18) | (M2C_FIELD(arg0, u8 *, 1) << 0x10) | (M2C_FIELD(arg0, u8 *, 2) << 8) | M2C_FIELD(arg0, u8 *, 3);
}

void *fn_800A61AC(void *arg0) {
    void fn_800A6734(void *);
    M2C_FIELD(arg0, s16 *, 0) = 0x100;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    fn_800A6734(arg0);
    return arg0;
}

void fn_800A61F8(void *self, s32 flags) {
    void fn_800A6734(void *);
    void fn_802D20E8(void *);
    fn_800A6734(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800A6734(void *arg0) {
    extern char *lbl_80495050;
    char *a;
    char *vt;

    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        a = lbl_80495050;
        vt = *(char **)a;
        (*(void (**)(void *, s32))(vt + 0xAC))(a + *(s16 *)(vt + 0xA8), M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        a = lbl_80495050;
        vt = *(char **)a;
        (*(void (**)(void *, s32))(vt + 0xAC))(a + *(s16 *)(vt + 0xA8), M2C_FIELD(arg0, s32 *, 0xC));
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}

void fn_800A7368(u32 arg0, u8 *arg1) {
    u8 a = arg0 >> 24;
    u8 r = arg0 >> 16;
    u8 g = arg0 >> 8;
    u8 b = arg0;
    arg1[0] = a;
    arg1[1] = r;
    arg1[2] = g;
    arg1[3] = b;
}

void fn_800A7388(void *arg0, s32 *arg1) {
    *arg1 = (M2C_FIELD(arg0, u8 *, 0) << 0x18) | (M2C_FIELD(arg0, u8 *, 1) << 0x10) | (M2C_FIELD(arg0, u8 *, 2) << 8) | M2C_FIELD(arg0, u8 *, 3);
}

s32 *fn_800A73B8(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

extern void fn_802D20E8(void *);
void fn_800A73CC(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800A90C0(char *arg0) {
    extern char *lbl_80496648;
    if (*(s32 *)(arg0 + 0x30) == 0) {
        char *obj = lbl_80496648;
        char *vt = *(char **)obj;
        (*(void (**)(void *, s32))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), 0);
    }
}

void fn_800A9108(void) {
    extern char *lbl_80496648;
    extern void *lbl_80496644;
    extern s32 lbl_8041FAA4;
    void fn_8010CCC4(void *);
    void fn_803153B8(s32);
    char *obj = lbl_80496648;
    char *vt = *(char **)obj;
    (*(void (**)(void *))(vt + 0x54))(obj + *(s16 *)(vt + 0x50));
    fn_8010CCC4(lbl_80496644);
    if (lbl_8041FAA4 != 0) {
        fn_803153B8(lbl_8041FAA4);
    }
}

void fn_800A915C(void) {
    extern char *lbl_80496648;
    extern void *lbl_80496644;
    void fn_8010CD4C(void *);
    char *obj = lbl_80496648;
    char *vt = *(char **)obj;
    (*(void (**)(void *))(vt + 0x5C))(obj + *(s16 *)(vt + 0x58));
    fn_8010CD4C(lbl_80496644);
}

void fn_800A9624(void) {

}

s32 fn_800A9628(s32 arg0, f32 arg1) {
    extern u8 *lbl_80494FC4;
    extern s32 lbl_80494324;
    u8 *obj;
    u8 *vt;
    lbl_80494324 = arg0;
    obj = lbl_80494FC4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, s32))(vt + 0x24))(obj + *(s16 *)(vt + 0x20), arg0);
    obj = lbl_80494FC4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, s32))(vt + 0x2C))(obj + *(s16 *)(vt + 0x28), lbl_80494324);
    lbl_80495924 = arg1;
    lbl_80495930 = (u32)(arg1 * 1000.0f);
    return 1;
}

void fn_800A96DC(f32 x) {
    lbl_80494320 = x;
    if (x == lbl_803CE168[0]) {
        lbl_80495924 = lbl_80495928;
        lbl_80495930 = lbl_80495934;
    }
    fn_800A9720();
}

f32 fn_800A9910(void) {
    extern f32 lbl_80495920;
    return lbl_80495920;
}

f32 fn_800A9918(void) {
    extern f32 lbl_80495924;
    return lbl_80495924;
}

extern s32 lbl_8049592C;
s32 fn_800A9920(void) {
    return lbl_8049592C;
}

s32 fn_800A9928(void) {
    return lbl_80495930;
}

extern s32 lbl_8049627C;
s32 fn_800A9930(void) {
    return lbl_8049627C;
}

s32 fn_800A9938(void) {
    return (u32)(lbl_80495810 - 1) <= 2;
}

void *fn_800A9950(void *self) {
    fn_800A9980(self);
    return self;
}

void fn_800A9BAC(s32 *self, s32 arg1) {
    self[0x42] = arg1;
    fn_803349A8(lbl_8045B438, arg1);
}

s32 fn_800A9BD8(void *arg0) {
    s32 fn_80334E70(void *, s32);
    s32 done = fn_80334E70(lbl_8045B438, M2C_FIELD(arg0, s32 *, 0x108)) != 0;
    if (done) {
        M2C_FIELD(arg0, s32 *, 0x108) = 0;
    }
    return done;
}

void fn_800A9C30(void *arg0) {
    M2C_UNK fn_80334CF8(M2C_UNK *, s32);
    fn_80334CF8(&lbl_8045B438, M2C_FIELD(arg0, s32 *, 0x108));
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
}

void fn_800A9C70(void) {

}

s32 fn_800A9C74(void) {
    return 0;
}

void fn_800A9C7C(void *arg0) {

}

void fn_800A9C80(void) {

}

extern void fn_800A9CC4(s32);
void fn_800A9C84(s32 self, s32 flags) {
    fn_800A9CC4(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800A9E74(void *self, u8 *arg1) {
    u8 *vt = *(u8 **)(arg1 + 4);
    (*(void (**)(void *, s32, s32))(vt + 0x1AC))(arg1 + *(s16 *)(vt + 0x1A8), 0x22, 1);
}

void fn_800A9EB4(void *self, u8 **arg1) {
    u8 *obj = *arg1;
    u8 *vt = *(u8 **)(obj + 4);
    (*(void (**)(void *, s32, s32))(vt + 0x1AC))(obj + *(s16 *)(vt + 0x1A8), 0x22, 1);
    fn_8003E5E0(*(s32 *)(**(u8 ***)arg1 + 0x18), 0);
}

void fn_800A9F14(void *self, u8 *arg1) {
    u8 *vt = *(u8 **)(arg1 + 4);
    (*(void (**)(void *, s32, s32))(vt + 0x1AC))(arg1 + *(s16 *)(vt + 0x1A8), 0x22, 0);
}

void fn_800A9F54(void *self, u8 **arg1) {
    u8 *obj = *arg1;
    u8 *vt = *(u8 **)(obj + 4);
    (*(void (**)(void *, s32, s32))(vt + 0x1AC))(obj + *(s16 *)(vt + 0x1A8), 0x22, 0);
    fn_8003E5E0(*(s32 *)(**(u8 ***)arg1 + 0x18), 1);
}

s32 fn_800A9FB4(void) {
    void fn_802D85A4(void *);
    void fn_802D8640(void *, s32);
    void fn_802D85FC(void *, s32);
    extern s32 lbl_8049664C;
    u8 buf[0x40];
    s32 ret;

    fn_802D85A4(buf);
    fn_802D8640(buf, 0x10);
    ret = lbl_8049664C;
    fn_802D85FC(buf, 2);
    return ret;
}

void fn_800AA000(void) {
    extern s32 lbl_8049664C;
    lbl_8049664C = 0;
}

void fn_800AA00C(void) {
    extern s32 lbl_8049664C;
    lbl_8049664C = 1;
}

void fn_800AA018(void) {
    u8 *obj = lbl_80496668;
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *))(vt + 0x6C))(obj + *(s16 *)(vt + 0x68));
    fn_800AA00C();
}

void fn_800AA054(void) {
    u8 *obj;
    u8 *vt;

    fn_800AA000();
    obj = lbl_804961A4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), fn_800AA018);
}

void fn_800AA098(void);
void fn_800AA2AC(void) {
    u8 *obj;
    u8 *vt;

    fn_800AA000();
    obj = lbl_804961A4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), fn_800AA098);
}

void fn_800AA2F0(void) {
    void fn_8004B8B0(void *);
    void fn_8004B828(void *, s32);
    void fn_8012ACB0(void *, s32);
    extern u8 lbl_8041F94C[];
    extern void *lbl_8049440C;
    u8 *p = lbl_8041F94C;
    s32 v = *(s32 *)(p + 0x35C);
    fn_8004B8B0(p);
    fn_8004B828(p, v);
    fn_8012ACB0(lbl_8049440C, v);
    fn_800AA00C();
}

void fn_800AA344(void) {
    u8 *obj;
    u8 *vt;

    fn_800AA000();
    obj = lbl_804961A4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), fn_800AA2F0);
}

void fn_800AA388(void) {
    void fn_80126198(s32, s32);
    extern u8 lbl_8041F94C[];
    extern void *lbl_8049440C;
    extern u8 *lbl_80496688;
    extern u8 *lbl_80496650;
    u8 *p;
    s32 r;

    {
        u8 *obj = lbl_80496688;
        u8 *vt = *(u8 **)obj;
        (*(void (**)(void *))(vt + 0x94))(obj + *(s16 *)(vt + 0x90));
    }
    p = lbl_8041F94C;
    *(s32 *)(p + 0x330) = -1;
    *(s32 *)(p + 0x358) = -1;
    {
        u8 *obj = lbl_80496650;
        u8 *vt = *(u8 **)obj;
        (*(void (**)(void *, void *, s32, s32, s32))(vt + 0x64))(obj + *(s16 *)(vt + 0x60), lbl_8049440C,
            *(s32 *)(*(u8 **)(p + 0xEC) + 0x6C), -1, *(s32 *)(p + 0x194));
    }
    {
        u8 *obj = lbl_80496650;
        u8 *vt = *(u8 **)obj;
        r = (*(s32 (**)(void *))(vt + 0x1CC))(obj + *(s16 *)(vt + 0x1C8));
    }
    fn_80126198(r, *(s32 *)(*(u8 **)(p + 0xEC) + 0x6C));
    fn_800AA00C();
}

void fn_800AA438(void) {
    u8 *obj;
    u8 *vt;

    fn_800AA000();
    obj = lbl_804961A4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), fn_800AA388);
}

void fn_800AA47C(void) {
    void fn_80028FE0(s32);
    extern s32 lbl_8041FA38[];
    fn_80028FE0(lbl_8041FA38[0]);
    fn_800AA00C();
}

void fn_800AA4A8(void) {
    u8 *obj;
    u8 *vt;

    fn_800AA000();
    obj = lbl_804961A4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), fn_800AA47C);
}

void fn_800AA4EC(void) {
    M2C_UNK fn_80029A10(s32);
    extern u8 lbl_8041F94C[];
    u8 *p = lbl_8041F94C;
    fn_80029A10(M2C_FIELD(p, s32 *, 0xEC));
    fn_80029A10(M2C_FIELD(p, s32 *, 0xEC));
    fn_800AA00C();
}

void fn_800AA4EC(void);
void fn_800AA52C(void) {
    u8 *obj;
    u8 *vt;

    fn_800AA000();
    obj = lbl_804961A4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), fn_800AA4EC);
}

s32 fn_800AA570(s32 arg0) {
    s32 ret = 0;
    if (arg0) {
        ret = 1;
    }
    return ret;
}

s32 fn_800AA584(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return 0;
}

s32 fn_800AA590(void *arg0) {
    void fn_802D85A4(void *);
    void fn_802D8640(void *, s32);
    void fn_802D85FC(void *, s32);
    extern s32 lbl_8049664C;
    u8 buf[0x40];
    s32 ret;
    s32 b;

    fn_802D85A4(buf);
    fn_802D8640(buf, 0x10);
    ret = lbl_8049664C;
    fn_802D85FC(buf, 2);
    if (ret == 0) {
        return 1;
    }
    b = 1;
    if (M2C_FIELD(arg0, s32 *, 0x108) == 0) {
        b = 0;
    }
    if (b) {
        fn_800A9C30(arg0);
        return 1;
    }
    b = 1;
    if (M2C_FIELD(arg0, s32 *, 0x10C) == 0) {
        b = 0;
    }
    if (b) {
        fn_800A9C7C(arg0);
        return 1;
    }
    return 0;
}

s32 fn_800AA638(void) {
    return 1;
}

s32 fn_800AA718(void *arg0) {
    s32 ret = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10) & 1) {
        ret = 1;
    }
    return ret;
}

s32 fn_800AA730(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 1U) & 1;
}

s32 fn_800AA73C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 2U) & 1;
}

s32 fn_800AA748(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 3U) & 1;
}

s32 fn_800AA754(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 7U) & 1;
}

s32 fn_800AA760(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 4U) & 1;
}

s32 fn_800AA76C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 5U) & 1;
}

s32 fn_800AA778(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 6U) & 1;
}

void fn_800AA784(void) {

}

void fn_800AA788(void) {

}

void fn_800AAE10(void) {

}

void fn_800AAE74(void) {

}

void fn_800AAF10(f32 *out, f32 angle, f32 a, f32 b) {
    f32 fn_802434CC(f32);
    f32 fn_80243100(f32);
    *out = fn_80243100(a * a + b * b - (a + a) * b * fn_802434CC(angle));
}

void fn_800AAF74(f32 a, f32 b, f32 c, f32 *outA, f32 *outB, f32 *outC) {
    extern f32 lbl_803CE4D0[];
    f32 fn_80242ACC(f32);
    f32 bb = b * b;
    f32 cc = c * c;
    f32 aa = a * a;
    f32 angA = fn_80242ACC((bb + cc - aa) / ((b + b) * c));
    f32 angB = fn_80242ACC((aa + cc - bb) / ((a + a) * c));
    *outA = angA;
    *outB = angB;
    *outC = lbl_803CE4D0[0] - (angA + angB);
}

s32 fn_800AB030(void) {
    return 0;
}

s32 fn_800AB038(void) {
    return 0;
}

void fn_800AB040(void) {

}

void fn_800AB044(void) {

}

s32 fn_800AB1CC(u8 *arg0) {
    extern f32 lbl_803CE4D4[];
    extern f32 lbl_803CE4D8[];
    u8 *obj = *(u8 **)(arg0 + 0xE8);
    f32 k = lbl_803CE4D4[0];
    f32 lim = lbl_803CE4D8[0];
    SMCVec3 v = *(SMCVec3 *)(obj + 0xA4);
    f32 s = *(f32 *)(obj + 0xA0);
    v.x *= s;
    v.y *= s;
    v.z *= s;
    return (v.x + v.y + v.z) * k < lim;
}

void fn_800AB250(f32 x) {
    extern f32 lbl_803CE4DC[];
    if (x == lbl_803CE4DC[0]) {
    }
}

void fn_800AB260(u8 *arg0, SMCVec3 *out) {
    f32 fn_8025FC40(void *);
    void fn_802F0A84(SMCVec3 *);
    u8 *obj = *(u8 **)(arg0 + 0xE8);
    SMCVec3 *v = (SMCVec3 *)(obj + 0xC0);
    f32 s = fn_8025FC40(obj + 0xA4);
    SMCVec3 tmp;
    f32 x = v->x * s;
    f32 y = v->y * s;
    f32 z = v->z * s;
    tmp.x = x;
    tmp.y = y;
    tmp.z = z;
    *out = tmp;
    fn_802F0A84(out);
}

void fn_800AB4EC(void *arg0, void *arg1) {
    M2C_UNK fn_800AB2E0(void *, u8 *);
    u8 sp8[0xE0];
    s32 var_ctr;
    s32 var_ctr_2;
    void *temp_r9;

    var_ctr = 3;
    do {
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_ctr_2 = 4;
    do {
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
    fn_800AB2E0(arg0, sp8);
    temp_r9 = M2C_FIELD(arg1, void **, 0x68);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, u8 *), 0x164)((u8 *)arg1 + M2C_FIELD(temp_r9, s16 *, 0x160), sp8);
}

void fn_800AB550(void *arg0, void *arg1) {
    M2C_UNK fn_800AB2E0(void *, u8 *);
    u8 sp8[0xE0];
    s32 var_ctr;
    s32 var_ctr_2;
    void *temp_r9;

    var_ctr = 3;
    do {
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_ctr_2 = 4;
    do {
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
    fn_800AB2E0(arg0, sp8);
    temp_r9 = M2C_FIELD(arg1, void **, 0x68);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, u8 *), 0x164)((u8 *)arg1 + M2C_FIELD(temp_r9, s16 *, 0x160), sp8);
}

void fn_800AB5B4(void) {

}

void fn_800AB5B8(s32 arg0, s32 arg1) {
    void fn_800AB5F8(s32, s32, s32);
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x7C) + 1;
    M2C_FIELD(arg0, s32 *, 0x7C) = temp_r4;
    fn_800AB5F8(arg0, (temp_r4 - (temp_r4 & ~3)) + 2, arg1);
}

void fn_800AB5F8(s32 arg0, s32 arg1, s32 arg2) {

}

void fn_800AB5FC(u8 *arg0) {
    extern f32 lbl_803CE4F8[];
    extern s32 lbl_8041FC68[];
    extern u8 *lbl_80494FA4;
    struct { s32 flags; s32 pad[2]; f32 f; s32 pad2[2]; } sp8, *p;
    f32 temp_f31;
    s32 var_r29;
    s32 var_r28;
    s32 zero;
    s32 *var_r31;
    s32 a;

    if (lbl_8041FC68[0] != 0) {
        a = (s32)(arg0 + 0x18);
        var_r31 = (s32 *)(arg0 + 0x30);
        temp_f31 = lbl_803CE4F8[0];
        p = &sp8;
        zero = 0;
        var_r28 = 0;
        var_r29 = 6;
        do {
            s32 v = *(s32 *)(var_r28 + a);
            if (v != 0 && *var_r31 != 0) {
                char *vt;
                sp8.flags = zero;
                p->f = temp_f31;
                sp8.flags |= 4;
                vt = *(char **)lbl_80494FA4;
                M2C_FIELD(vt, void (**)(void *, s32, void *), 0xB4)(lbl_80494FA4 + M2C_FIELD(vt, s16 *, 0xB0), v, p);
            }
            var_r31++;
            var_r28 += 4;
            var_r29 -= 1;
        } while (var_r29 != 0);
    }
}

void fn_800AB6B4(u8 *arg0) {
    extern f32 lbl_803CE4FC[];
    extern s32 lbl_8041FC68[];
    extern u8 *lbl_80494FA4;
    struct { s32 flags; s32 pad[2]; f32 f; s32 pad2[2]; } sp8, *p;
    f32 temp_f31;
    s32 var_r29;
    s32 var_r28;
    s32 zero;
    s32 *var_r31;
    s32 a;

    if (lbl_8041FC68[0] != 0) {
        a = (s32)(arg0 + 0x18);
        var_r31 = (s32 *)(arg0 + 0x30);
        temp_f31 = lbl_803CE4FC[0];
        p = &sp8;
        zero = 0;
        var_r28 = 0;
        var_r29 = 6;
        do {
            s32 v = *(s32 *)(var_r28 + a);
            if (v != 0 && *var_r31 != 0) {
                char *vt;
                sp8.flags = zero;
                p->f = temp_f31;
                sp8.flags |= 4;
                vt = *(char **)lbl_80494FA4;
                M2C_FIELD(vt, void (**)(void *, s32, void *), 0xB4)(lbl_80494FA4 + M2C_FIELD(vt, s16 *, 0xB0), v, p);
            }
            var_r31++;
            var_r28 += 4;
            var_r29 -= 1;
        } while (var_r29 != 0);
    }
}

s32 fn_800AB76C(void) {
    return 0;
}

void fn_800AB774(u8 *arg0, s32 arg1) {
    extern s32 lbl_8041FC68[];
    extern u8 *lbl_80494FA4;
    u8 *a;
    u8 *b;
    s32 off;

    if (lbl_8041FC68[0] != 0) {
        off = arg1 * 4;
        a = arg0 + 0x18;
        if (*(s32 *)(a + off) != 0) {
            b = arg0 + 0x30;
            if (*(s32 *)(b + off) != 0) {
                u8 *obj = lbl_80494FA4;
                *(s32 *)(b + off) = 0;
                M2C_FIELD(*(char **)obj, void (**)(void *, s32), 0xA4)(obj + M2C_FIELD(*(char **)obj, s16 *, 0xA0), *(s32 *)(a + off));
                obj = lbl_80494FA4;
                M2C_FIELD(*(char **)obj, void (**)(void *, s32), 0xA4)(obj + M2C_FIELD(*(char **)obj, s16 *, 0xA0), *(s32 *)(a + off));
            }
        }
    }
}

f32 fn_800AB814(void) {
    extern u8 *lbl_80494FC4;
    extern u8 lbl_80452418[];
    u8 *obj = lbl_80494FC4;
    u8 *vt = *(u8 **)obj;
    return (*(f32 (**)(void *, void *))(vt + 0x2C))(obj + *(s16 *)(vt + 0x28), lbl_80452418);
}

f32 fn_800AB854(void) {
    f32 fn_800AB814();
    extern f32 lbl_804966AC;
    return fn_800AB814() - lbl_804966AC;
}

f32 fn_800AB87C(void) {
    f32 fn_800AB814();
    extern f32 lbl_804966AC;
    extern f32 lbl_804966B0;
    f32 t = fn_800AB814();
    lbl_804966B0 = t;
    return t - lbl_804966AC;
}

f32 fn_800AB8A8(void) {
    f32 fn_800AB814();
    extern f32 lbl_804966B0;
    return fn_800AB814() - lbl_804966B0;
}

void fn_800AB8D0(s32 arg0) {
    void fn_800AB5B8(s32, s32);
    extern s32 lbl_8041FC68[];
    if (lbl_8041FC68[0] != 0) {
        fn_800AB5B8(arg0, 0x2AAD8FDB);
    }
}

SMCVec3 *fn_800AB908(SMCVec3 *out) {
    extern f32 lbl_803CE500[];
    extern f32 lbl_803CE504[];
    SMCVec3 t;
    SMCVec3_Set(&t, lbl_803CE500[0]);
    t.z = lbl_803CE504[0];
    return SMCVec3_Copy(out, &t);
}

void fn_800ABD50(s32 arg0, s32 arg1) {

}

void fn_800ABD54(void) {
    fn_800ABD50(1, 0xFFFF);
}

