/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_80409228[];
extern void fn_802D20E8(void *);
extern void *fn_802D0AB8(void *);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_80248488(void *, s32, u32);

static inline void *ISimInstance_AllocAligned(u32 size) {
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

static inline s32 ISimInstance_Call9C(u8 *obj, void *g) {
    u8 *vt = *(u8 **)obj;
    return (*(s32 (**)(void *, void *))(vt + 0x9C))(obj + *(s16 *)(vt + 0x98), g);
}

static inline void ISimInstance_Call44(u8 *obj) {
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *))(vt + 0x44))(obj + *(s16 *)(vt + 0x40));
}

static inline void ISimInstance_Call94(u8 *obj, void *g) {
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *, void *))(vt + 0x94))(obj + *(s16 *)(vt + 0x90), g);
}

static inline s32 ISimInstance_IterValid(void *it) {
    return it != NULL;
}

void *fn_80063ED0(void *arg0, s32 arg1) {
    M2C_UNK fn_802CCA4C(void *);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    fn_802CCA4C(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    return arg0;
}

s32 fn_80063F14(void *it) {
    return it != NULL;
}

void fn_80063F28(void) {
    extern u8 *lbl_80495050;
    extern void *lbl_80494130;
    extern const f32 lbl_803C8408[];
    extern void fn_802F8FC4(void *, f32, f32);
    u8 *obj;
    u8 *vt;
    void *r;

    obj = lbl_80495050;
    vt = *(u8 **)obj;
    r = (*(void *(**)(void *, s32))(vt + 0x6C))(obj + *(s16 *)(vt + 0x68), 1);
    fn_802F8FC4(r, lbl_803C8408[0], lbl_803C8408[0]);
    obj = lbl_80495050;
    vt = *(u8 **)obj;
    lbl_80494130 = (*(void *(**)(void *, void *))(vt + 0x74))(obj + *(s16 *)(vt + 0x70), r);
}

void fn_80063FA4(void *self, s32 flags) {
    extern u8 *lbl_80495050;
    extern void *lbl_80494130;
    M2C_UNK fn_802CD53C(void *);
    register void *g asm("r4");

    if (lbl_80494130 != NULL) {
        g = lbl_80494130;
        if (ISimInstance_Call9C(lbl_80495050, g) != 0) {
            ISimInstance_Call44(lbl_80495050);
        }
        ISimInstance_Call94(lbl_80495050, lbl_80494130);
        lbl_80494130 = NULL;
    }
    fn_802CD53C((char *)self + 4);
    M2C_FIELD(self, s32 *, 0) = 0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_80064064(void *self, void *obj) {
    void *node;
    for (node = M2C_FIELD(self, void **, 4); node != NULL; node = M2C_FIELD(node, void **, 0x10)) {
        if (obj == M2C_FIELD(node, void **, 0x1C)) {
            return 1;
        }
    }
    return 0;
}

s32 fn_80064098(void) {
    void *fn_80225508(void);
    s32 fn_80225458(void *, s32, s32);
    s32 fn_80049B6C(void *);
    extern u8 lbl_8041F94C[];
    s32 result = 1;

    if (fn_80225458(fn_80225508(), 0, 0) == 0) {
        result = 0;
    } else if (fn_80049B6C(lbl_8041F94C) != 0 && fn_80225458(fn_80225508(), 1, 0) == 0) {
        result = 0;
    }
    return result;
}

void fn_80064368(void *arg0, s32 arg1) {
    u32 mask;
    void *node;

    mask = 0;
    switch (arg1) {
    case 0:
        mask = 1;
        break;
    case 1:
        mask = 8;
        break;
    }
    for (node = M2C_FIELD(arg0, void **, 4); node != NULL; node = M2C_FIELD(node, void **, 0x10)) {
        void *obj = M2C_FIELD(node, void **, 0x1C);
        M2C_FIELD(obj, u32 *, 0x30C) &= ~mask;
    }
}

void fn_800643BC(void *arg0, s32 arg1, void *arg2) {
    M2C_UNK fn_802CB69C(void *, void *);
    u32 mask;
    void *node;

    mask = 8;
    if (arg1 == 0) {
        mask = 1;
    }
    for (node = M2C_FIELD(arg0, void **, 4); node != NULL; node = M2C_FIELD(node, void **, 0x10)) {
        void *obj = M2C_FIELD(node, void **, 0x1C);
        if (M2C_FIELD(obj, u32 *, 0x30C) & mask) {
            fn_802CB69C(arg2, obj);
        }
    }
}

void fn_800645CC(void *arg0, void *arg1) {
    M2C_UNK fn_802CD218(void *, s32);
    void *node;
    s32 id;
    void *vt;

    for (node = M2C_FIELD(arg0, void **, 4); node != NULL; node = M2C_FIELD(node, void **, 0x10)) {
        if (arg1 == M2C_FIELD(node, void **, 0x1C)) {
            id = M2C_FIELD(node, s32 *, 0x18);
            goto found;
        }
    }
    id = -1;
found:
    fn_802CD218((char *)arg0 + 4, id);
    if (arg1 != NULL) {
        vt = *(void **)arg1;
        M2C_FIELD(vt, void (**)(void *, s32), 0x34)((char *)arg1 + M2C_FIELD(vt, s16 *, 0x30), 3);
    }
}

void fn_80064650(s32 *arg0, s32 arg1) {
    M2C_UNK fn_802CCE6C(void *, s32, s32, s32);
    s32 id;

    id = *arg0;
    *arg0 = id + 1;
    fn_802CCE6C((char *)arg0 + 4, id, arg1, 0);
}

void fn_8006488C(void *arg0, s32 arg1) {
    M2C_UNK fn_802CD53C(void *);
    M2C_UNK fn_80325C50(s32, void *);
    void *node;
    char *list;
    void *it;

    for (node = M2C_FIELD(arg0, void **, 4); node != NULL; node = M2C_FIELD(node, void **, 0x10)) {
        char *obj = M2C_FIELD(node, char **, 0x1C);
        char *vt;
        fn_80325C50(arg1, obj);
        vt = *(char **)obj;
        (*(void (**)(void *, s32))(vt + 0x16C))(obj + *(s16 *)(vt + 0x168), arg1);
    }
    list = (char *)arg0 + 4;
    it = M2C_FIELD(list, void **, 0);
    while (ISimInstance_IterValid(it)) {
        char *obj = M2C_FIELD(it, char **, 0x1C);
        void *next = M2C_FIELD(it, void **, 0x10);
        char *vt = *(char **)obj;
        (*(void (**)(void *))(vt + 0xC))(obj + *(s16 *)(vt + 8));
        it = next;
    }
    fn_802CD53C(list);
}

s32 fn_80064948(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) == 0;
}

extern void fn_80064EC4(void *);
void fn_80064EC4(void *self) {
    extern void *fn_800650DC(void *, s32);
    fn_800650DC(self, 0);
}

void fn_800650DC(void *arg0) {
    s32 fn_80065D14(void *);
    void *node;
    u8 *obj;
    u8 *sub;
    void *vt;

    for (node = M2C_FIELD(arg0, void **, 4); node != NULL; node = M2C_FIELD(node, void **, 0x10)) {
        obj = M2C_FIELD(node, u8 **, 0x1C);
        if (fn_80065D14(obj) == 0) {
            sub = obj + 0x300;
            vt = M2C_FIELD(sub, void **, 0);
            M2C_FIELD(vt, void (**)(void *), 0x14)(sub + M2C_FIELD(vt, s16 *, 0x10));
        }
    }
}

s32 fn_80065148(s32 id) {
    extern void *lbl_8041FA38[];
    void *p = lbl_8041FA38[0];

    if (p == NULL) {
        return -1;
    }
    p = M2C_FIELD(p, void **, 4);
    if (p == NULL) {
        return -1;
    }
    p = M2C_FIELD(p, void **, 4);
    while (p != NULL) {
        if (id == M2C_FIELD(p, s32 *, 0x1C)) {
            return M2C_FIELD(p, s32 *, 0x18);
        }
        p = M2C_FIELD(p, void **, 0x10);
    }
    return -1;
}

void *fn_800651A8(s32 key) {
    extern void *lbl_8041FA38[];
    s32 fn_802CD440(void *, s32, void **);
    void *p = lbl_8041FA38[0];
    void *result;

    if (p == NULL || (p = M2C_FIELD(p, void **, 4)) == NULL) {
        return NULL;
    }
    result = NULL;
    if (fn_802CD440((u8 *)p + 4, key, &result) != 0 && result != NULL) {
        return result;
    }
    return NULL;
}

void fn_8006521C(f32 *rect, void *pos) {
    s32 fn_80065508(f32 *, void *);
    void fn_80065424(f32 *, void *);

    if (fn_80065508(rect, pos) == 0) {
        f32 r[4];
        f32 *pr = r;
        fn_80065424(pr, pos);
        rect[0] = rect[0] < r[0] ? rect[0] : r[0];
        rect[2] = rect[2] < pr[2] ? rect[2] : pr[2];
        rect[1] = rect[1] > r[1] ? rect[1] : r[1];
        rect[3] = rect[3] > r[3] ? rect[3] : r[3];
    }
}

void fn_80065424(f32 *out, void *pos) {
    extern const f32 lbl_803C8458[];
    s32 fn_80105B78(void *);
    s32 fn_80105B84(void *);
    f32 x = (f32)fn_80105B78(pos);
    f32 y = (f32)fn_80105B84(pos);
    f32 c = lbl_803C8458[0];
    out[0] = x - c;
    out[1] = x + c;
    out[2] = y - c;
    out[3] = y + c;
}

extern const f32 lbl_803C8458[];
extern const f32 lbl_803C845C[];
extern const f32 lbl_803C8468[];
s32 fn_80105B78(void *);
s32 fn_80105B84(void *);
void fn_800654D4(f32 *out, f32 *in) {
    extern const f32 lbl_803C845C[];
    f32 x = in[0];
    f32 y = in[1];
    f32 c = lbl_803C845C[0];
    out[0] = x - c;
    out[1] = x + c;
    out[2] = y - c;
    out[3] = y + c;
}

s32 fn_80065508(f32 *rect, void *pos) {
    f32 x = (f32)fn_80105B78(pos);
    f32 y = (f32)fn_80105B84(pos);
    return x > rect[0] && x < rect[1] && y > rect[2] && y < rect[3];
}

void fn_800655C8(f32 *rect, f32 *out) {
    f32 c = lbl_803C8468[0];
    out[0] = (rect[1] - rect[0]) * c + rect[0];
    out[1] = (rect[3] - rect[2]) * c + rect[2];
}

void fn_8006572C(f32 *arg0, f32 arg1, f32 arg2) {
    f32 dx;
    f32 dy;

    dx = arg0[0] - arg0[1];
    if (dx >= 0.0f) {
        arg1 = 0.5f * (dx * arg1);
    } else {
        arg1 = (-dx * arg1) * 0.5f;
    }
    arg0[0] -= arg1;
    arg0[1] += arg1;
    dy = arg0[3] - arg0[2];
    if (dy >= 0.0f) {
        arg2 = 0.5f * (dy * arg2);
    } else {
        arg2 = (-dy * arg2) * 0.5f;
    }
    arg0[3] -= arg2;
    arg0[2] += arg2;
}

void fn_800659A0(void **self, s32 flags) {
    *self = lbl_80409228;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800659D4(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_800659F4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80065A34(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern u8 lbl_80409228[];
extern void fn_802D20E8(void *);
extern void fn_80065CEC(void *, s32, s32);
void fn_80065A74(void *self, s32 arg1) {
    fn_80065CEC(self, 4, arg1);
}

void fn_80065A9C(void) {
}

void fn_80065AA0(void) {
}

void fn_80065AA4(void) {

}

void fn_80065AA8(void) {

}

void fn_80065AAC(void) {

}

void fn_80065AB0(void) {

}

void fn_80065AB4(void) {

}

void fn_80065AB8(void) {

}

void fn_80065ABC(void) {

}

void fn_80065AC0(void) {

}

s32 fn_80065AC4(void) {
    return 0;
}

void fn_80065ACC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x308) = arg1;
}

s32 fn_80065AD4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x308);
}

void fn_80065CEC(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x30C) = (s32) (M2C_FIELD(arg0, s32 *, 0x30C) | arg1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30C) = (s32) (M2C_FIELD(arg0, s32 *, 0x30C) & ~arg1);
}

s32 fn_8016D444(s32);
s32 fn_80065D14(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x308);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 4);
        return fn_8016D444(M2C_FIELD(temp_r9, s32 (**)(void *), 0x32C)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x328)));
    }
    return 0;
}

s32 fn_80065D60(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x308);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 4);
        return M2C_FIELD(temp_r9, s32 (**)(void *), 0x32C)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x328));
    }
    return 0;
}

f32 *fn_80066A50(f32 *out, u8 *obj) {
    f32 *p = (f32 *)(obj + 0x110);
    out[0] = p[0];
    out[1] = p[1];
    out[2] = p[2];
    return out;
}

void fn_80066A74(s32 arg0, s32 arg1) {
    extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
    extern void fn_80066B18(void);
    extern void fn_80066B40(void);
    extern void fn_80066B60(void *);
    extern u8 lbl_80491CA0[];
    extern u8 lbl_803C8578[];
    extern u8 lbl_80491C50[];
    extern s32 lbl_8049583C;
    s32 i;
    if (arg1 == 0xFFFF && arg0 != 0) {
        for (i = 0; i < 3; i++) {
        }
        for (i = 0; i < 4; i++) {
        }
        lbl_8049583C = fn_802D6A90(lbl_80491CA0, fn_80066B18, fn_80066B40, fn_80066B60, 0, lbl_803C8578, lbl_80491C50);
    }
}

void **fn_80066AFC(void **self) {
    *self = lbl_80409228;
    return self;
}

void *fn_80066B10(u32 size, void *p);
void *fn_80066B10(u32 size, void *p) {
    return p;
}

void fn_80066B18(void) {
    void *fn_80066C80(u32);
    fn_80066C80(0x3A8);
    fn_80065ADC();
}

void fn_80066B40(void) {
    fn_80065ADC();
}

void fn_80066B60(void *self) {
    extern void fn_80065BA4(void *, s32);
    fn_80065BA4(self, 2);
}

void fn_80066B84(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491CA0[];
void *fn_80066BC4(void) {
    return lbl_80491CA0;
}

extern s32 lbl_80491CAC[];
s32 fn_80066BD0(void) {
    return lbl_80491CAC[0];
}

extern s32 lbl_80491CB0[];
s32 fn_80066BDC(void) {
    return lbl_80491CB0[0];
}

extern u16 lbl_80491CB4[];
u16 fn_80066BE8(void) {
    return lbl_80491CB4[0];
}

void *fn_80066BF4(void) {
    return lbl_80491CA0;
}

extern u16 lbl_80491CB6[];
u16 fn_80066C00(void) {
    return lbl_80491CB6[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80066B18(void);
extern void fn_80066B60(void *);
extern u8 lbl_803C8578[];
extern u8 lbl_80491C50[];
void fn_80066C0C(s32 arg0) {
    fn_802D6A90(lbl_80491CA0, fn_80066B18, fn_80066B40, fn_80066B60, arg0, lbl_803C8578, lbl_80491C50);
}

void fn_80066C60(void) {
    fn_802D2430();
}

void *fn_80066C80(u32 size) {
    void *p = ISimInstance_AllocAligned(size);

    fn_80248488(p, 0, size);
    return p;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80066D44(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80066D78(void) {

}

void fn_80066D7C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30C) = arg1;
}

s32 fn_80066D84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30C);
}

void fn_80066D8C(void) {

}

s32 fn_80066D90(void) {
    return 0;
}

s32 fn_80066D98(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x134) != 0;
}

s32 fn_80066DB0(s32 arg0) {
    return arg0 + 0x314;
}

void fn_80066DB8(void) {
    void fn_80066A74(s32, s32);
    fn_80066A74(1, 0xFFFF);
}

