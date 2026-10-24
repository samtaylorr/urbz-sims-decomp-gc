/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

static inline s32 ListCount(u8 *list) {
    return *(s32 *)(list + 4);
}

s32 fn_80317758(s32, s32, s32, s32 *, s32);
s32 fn_80317514(void *arg0) {
    s32 temp_r3;
    s32 var_r7;
    u8 temp_r10;
    u8 temp_r8;

    temp_r8 = M2C_FIELD(arg0, u8 *, 0);
    temp_r10 = M2C_FIELD(arg0, u8 *, 1);
    var_r7 = 0;
    if ((s32) ((temp_r8 << 8) | temp_r10) == 0xC0FB) {
        var_r7 = 1;
    } else {
        temp_r3 = (temp_r8 << 0x18) | (temp_r10 << 0x10) | (M2C_FIELD(arg0, u8 *, 2) << 8) | M2C_FIELD(arg0, u8 *, 3);
        if (temp_r3 == 0x42494746) {
            var_r7 = 2;
        } else if ((s32) (temp_r3 & 0xFFFFFF00) == 0x42494700) {
            var_r7 = 3;
        }
    }
    return var_r7;
}

s32 fn_80317B98(s32 arg0, s32 arg1, s32 arg2, s32 *arg3, s32 arg4) {
    return fn_80317758(arg0, arg1, arg2, arg3, arg4);
}

s32 fn_80317BB8(s32 arg0, s32 arg1) {
    s32 sp8;

    sp8 = 0;
    if (arg1 != 0) {
        fn_80317B98(arg0, arg1, 0, &sp8, 0);
    }
    return sp8;
}

s32 fn_80317BF8(s32 arg0, s32 arg1) {
    s32 sp8;

    sp8 = 0;
    if (arg1 != 0) {
        fn_80317758(arg0, arg1, 0, &sp8, 0);
    }
    return sp8;
}

s32 fn_80317C38(s32 arg0, s32 arg1) {
    s32 result;
    s32 sp8;
    s32 found = fn_80317B98(arg0, 0, arg1, &sp8, 0);

    result = 0;
    if (found != 0) {
        result = arg0 + sp8;
    }
    return result;
}

s32 fn_80317BB8(s32, s32);
s32 fn_80317CD8(s32 arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r30;

    var_r30 = 0;
    temp_r3 = fn_80317BB8(arg0, arg1);
    if (temp_r3 != 0) {
        var_r30 = arg0 + temp_r3;
    }
    return var_r30;
}

s32 fn_80317D18(s32 arg0) {
    s32 fn_80317BF8();
    s32 temp_r3;
    s32 var_r30;

    var_r30 = 0;
    temp_r3 = fn_80317BF8();
    if (temp_r3 != 0) {
        var_r30 = arg0 + temp_r3;
    }
    return var_r30;
}

s32 fn_80317D58(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8;
    s32 var_r31;

    var_r31 = 0;
    sp8 = 0;
    fn_80317758(arg0, arg1, 0, &sp8, arg2);
    if (sp8 != 0) {
        var_r31 = arg0 + sp8;
    }
    return var_r31;
}

void fn_80317DAC(s32 arg0, char *arg1, s32 *arg2) {
    char *fn_80248640(char *, s32);
    char *p;

    do {
        p = fn_80248640(arg1, ',');
        if (p != 0) {
            *p = 0;
        }
        *arg2++ = fn_80317CD8(arg0, (s32)arg1);
        if (p == 0) {
            break;
        }
        *p = ',';
        arg1 = p + 1;
    } while (arg1 != 0);
}

s32 fn_80317E3C(u8 *arg0) {
    s32 ret = 0;
    switch (fn_80317514(arg0)) {
    case 1:
        ret = (arg0[4] << 8) | arg0[5];
        break;
    case 2:
    case 3:
        ret = (arg0[8] << 24) | (arg0[9] << 16) | (arg0[10] << 8) | arg0[11];
        break;
    }
    return ret;
}

char *fn_80317EC4(s32 arg0, s32 arg1, char *buf) {
    void fn_80248784(char *, char *);
    s32 s = fn_80317B98(arg0, 0, arg1, 0, 0);
    if (s == 0) {
        *buf = 0;
        return NULL;
    }
    fn_80248784(buf, (char *)s);
    return buf;
}

void fn_80317F84(void) {
    extern s16 *lbl_80496210;
    extern s16 *lbl_80496214;
    s16 *p;
    s32 i;
    p = lbl_80496210 + 0x1001;
    for (i = 0; i < 0x100; i++) {
        *p++ = 0x1000;
    }
    p = lbl_80496214 + 0xFFF;
    for (i = 0; i < 0x1000; i++) {
        *p-- = 0x1000;
    }
}

s32 fn_80318260(void) {
    extern u8 *lbl_80494F04;
    extern u8 *lbl_80494F08;
    if (lbl_80494F04 == lbl_80494F08) {
        return -1;
    }
    return *lbl_80494F04++;
}

void fn_803188C8(const char *arg0) {
    int fn_80245BB4(char *, const char *, ...);
    s32 fn_802D7F48(const char *, const char *);
    extern const char lbl_803F26F0[];
    extern const char lbl_803F26F4[];
    extern const char lbl_803F26FC[];
    extern s32 lbl_80494F18;
    const char *prefix = lbl_803F26F0;
    char buf[128];

    fn_80245BB4(buf, lbl_803F26F4, prefix, arg0);
    lbl_80494F18 = fn_802D7F48(buf, lbl_803F26FC);
}

void fn_80318918(void) {
    int fn_80245BB4(char *, const char *, ...);
    void fn_803188C8(const char *);
    extern const char lbl_803F2700[];
    extern s32 lbl_80494F1C;
    char buf[128];

    fn_80245BB4(buf, lbl_803F2700, lbl_80494F1C);
    fn_803188C8(buf);
    lbl_80494F1C++;
}

void fn_80318960(void) {
    int fn_80245BB4(char *, const char *, ...);
    void fn_803188C8(const char *);
    extern const char lbl_803F2710[];
    extern s32 lbl_80494F20;
    char buf[128];

    fn_80245BB4(buf, lbl_803F2710, lbl_80494F20);
    fn_803188C8(buf);
    lbl_80494F20++;
}

void fn_803189A8(void) {
    int fn_80245BB4(char *, const char *, ...);
    void fn_803188C8(const char *);
    extern const char lbl_803F2720[];
    extern s32 lbl_80494F24;
    char buf[128];

    fn_80245BB4(buf, lbl_803F2720, lbl_80494F24);
    fn_803188C8(buf);
    lbl_80494F24++;
}

void fn_803189F0(void) {
    void fn_802D7F94(s32);
    extern s32 lbl_80494F18;

    if (lbl_80494F18 != 0) {
        fn_802D7F94(lbl_80494F18);
    }
    lbl_80494F18 = 0;
}

void fn_80318A24(void) {
    int fn_80245BB4(char *, const char *, ...);
    void fn_803188C8(const char *);
    void fn_803189F0(void);
    extern const char lbl_803F2730[];
    extern s32 lbl_80494F28;
    char buf[128];

    fn_803189F0();
    fn_80245BB4(buf, lbl_803F2730, lbl_80494F28);
    fn_803188C8(buf);
    lbl_80494F28++;
}

void fn_80318A70(const char *fmt, ...) {
}

void fn_80318ABC(s32 arg0) {
    void fn_80318918(void);
    void fn_803189F0(void);
    void fn_80318A70(const char *fmt, ...);
    extern char lbl_803F2740[];
    extern char lbl_803F277C[];
    extern char lbl_803F279C[];
    extern char lbl_803F27C8[];
    extern void *lbl_80496220;
    void *obj;
    char *vt;

    fn_80318918();
    fn_80318A70(lbl_803F2740);
    fn_80318A70(lbl_803F277C, arg0, lbl_803F279C, 0xB1);
    obj = lbl_80496220;
    vt = *(char **)obj;
    ((void (*)(void *, s32))*(void **)(vt + 0xD4))((char *)obj + *(s16 *)(vt + 0xD0), arg0);
    fn_80318A70(lbl_803F27C8, arg0, lbl_803F279C, 0xB3);
    fn_80318A70(lbl_803F2740);
    fn_803189F0();
}

void fn_8031A4F8(void) {

}

s32 fn_8031AE8C(void *arg0) {
    s32 temp_r3;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x94) == 0) || (temp_r3 = M2C_FIELD(arg0, s32 *, 0x90), ((temp_r3 > 1) == 0))) {
        return 0;
    }
    return temp_r3 - 1;
}

s32 fn_8031AEB4(u8 *self, s32 idx, f32 value) {
    f32 *arr = *(f32 **)(self + 0xA4);

    if (arr[idx] != value) {
        arr[idx] = value;
        *(s32 *)(self + 0xA0) = 1;
        return 1;
    }
    return *(s32 *)(self + 0xA0);
}

void fn_8031B228(f32 *out, f32 t) {
    extern f32 lbl_803F2C88[];
    extern f32 lbl_803F2C8C[];
    f32 t2 = t * t;
    f32 t3 = t2 * t;
    f32 a = (t3 + t3) - t2 * lbl_803F2C88[0];

    out[0] = a + lbl_803F2C8C[0];
    out[3] = -t2 + t3;
    out[1] = -a;
    out[2] = (t - (t2 + t2)) + t3;
}

s32 fn_8031B700(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

void fn_802D2FD0(void);
void fn_8031B708(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8031B728(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8031B768(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void *fn_8031B7A8(void *arg0) {
    extern void fn_8031E8B0(void *);
    extern void fn_803BB814(void *);
    extern u8 lbl_8041B298[];

    fn_8031E8B0(arg0);
    *(u8 **)arg0 = lbl_8041B298;
    fn_803BB814((u8 *)arg0 + 0x20);
    return arg0;
}

void fn_8031B7EC(void *self, s32 flags) {
    extern u8 lbl_8041B298[];
    extern void fn_803BB98C(void *, s32);
    extern void fn_8031E910(void *, s32);
    void fn_80338184(void *, s32);
    extern u8 lbl_8045B390[];
    *(u8 **)self = lbl_8041B298;
    fn_803BB98C((u8 *)self + 0x20, 2);
    fn_8031E910(self, 0);
    if (flags & 1) {
        fn_80338184(lbl_8045B390, (s32)self);
    }
}

s32 fn_8031BAD4(u8 *self, s32 arg1) {
    s32 fn_802D3EE8(void *, s32);
    s32 i;

    for (i = 0; i < ListCount(self + 0x20); i++) {
        if (fn_802D3EE8(*(u8 **)(self + 0x20) + i * 0xB8 + 0xB4, arg1) == 0) {
            return i;
        }
    }
    return -1;
}

void fn_8031BB58(void) {

}

void fn_8031BB5C(s32 arg0, s32 arg1) {
    extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
    extern void fn_8031BBCC(void);
    extern void fn_8031BBF4(void *);
    extern void fn_8031BC20(void *);
    extern u8 lbl_80493830[];
    extern u8 lbl_803F2CC0[];
    extern u8 lbl_80493858[];
    extern s32 lbl_80496218;
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_80496218 = fn_802D6A90(lbl_80493830, fn_8031BBCC, fn_8031BBF4, fn_8031BC20, 0, lbl_803F2CC0, lbl_80493858);
    }
}

void fn_8031BBCC(void) {
    void *fn_8031B7A8(void *);
    void *fn_8031BD40(u32 size);
    fn_8031B7A8(fn_8031BD40(0x40));
}

void fn_8031BBF4(void *self) {
    void *fn_8031B7A8(void *);
    void *fn_8031BD70(u32 size, void *p);
    fn_8031B7A8(fn_8031BD70(0x40, self));
}

void fn_8031BC20(void *self) {
    void fn_8031B7EC(void *, s32);
    fn_8031B7EC(self, 2);
}

void fn_8031BC44(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493830[];
void *fn_8031BC84(void) {
    return lbl_80493830;
}

extern s32 lbl_8049383C[];
s32 fn_8031BC90(void) {
    return lbl_8049383C[0];
}

extern s32 lbl_80493840[];
s32 fn_8031BC9C(void) {
    return lbl_80493840[0];
}

extern u16 lbl_80493844[];
u16 fn_8031BCA8(void) {
    return lbl_80493844[0];
}

void *fn_8031BCB4(void) {
    return lbl_80493830;
}

extern u16 lbl_80493846[];
u16 fn_8031BCC0(void) {
    return lbl_80493846[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8031BBCC(void);
extern void fn_8031BBF4(void *);
extern void fn_8031BC20(void *);
extern u8 lbl_803F2CC0[];
extern u8 lbl_80493858[];
void fn_8031BCCC(s32 arg0) {
    fn_802D6A90(lbl_80493830, fn_8031BBCC, fn_8031BBF4, fn_8031BC20, arg0, lbl_803F2CC0, lbl_80493858);
}

void fn_802D2430(void);
void fn_8031BD20(void) {
    fn_802D2430();
}

void fn_8031BD40(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045B390[];
    fn_80338000(lbl_8045B390, arg0, 4);
}

void *fn_8031BD70(u32 size, void *p);
void *fn_8031BD70(u32 size, void *p) {
    return p;
}

void fn_8031BD78(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045B390[];
    fn_80338184(lbl_8045B390, arg0);
}

s32 fn_8031BDA4(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 0xB8);
}

void fn_8031BDB4(void) {
    void fn_8031BB5C(s32, s32);
    fn_8031BB5C(1, 0xFFFF);
}

