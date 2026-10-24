/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D3C60(s32 *, char *);

static inline s32 *EString_Init(s32 *s, char *str) {
    fn_802D3C60(s, str);
    return s;
}

s32 fn_802D32A0(void) {
    return 0;
}

void *fn_802D34B0(void *arg0, f32 *arg1) {
    void *vt;
    void (*f)(void *, void *, s32);
    void *self;
    f32 x;
    f32 y;
    f32 z;

    vt = M2C_FIELD(arg0, void **, 0x18);
    f = M2C_FIELD(vt, void (**)(void *, void *, s32), 0x3C);
    self = (char *)arg0 + M2C_FIELD(vt, s16 *, 0x38);
    x = arg1[0];
    f(self, &x, 4);
    vt = M2C_FIELD(arg0, void **, 0x18);
    f = M2C_FIELD(vt, void (**)(void *, void *, s32), 0x3C);
    self = (char *)arg0 + M2C_FIELD(vt, s16 *, 0x38);
    y = arg1[1];
    f(self, &y, 4);
    vt = M2C_FIELD(arg0, void **, 0x18);
    f = M2C_FIELD(vt, void (**)(void *, void *, s32), 0x3C);
    self = (char *)arg0 + M2C_FIELD(vt, s16 *, 0x38);
    z = arg1[2];
    f(self, &z, 4);
    return arg0;
}

void *fn_802D3558(void *arg0, f32 *arg1) {
    void *vt;
    void (*f)(void *, void *, s32);
    void *self;
    f32 x;
    f32 y;

    vt = M2C_FIELD(arg0, void **, 0x18);
    f = M2C_FIELD(vt, void (**)(void *, void *, s32), 0x3C);
    self = (char *)arg0 + M2C_FIELD(vt, s16 *, 0x38);
    x = arg1[0];
    f(self, &x, 4);
    vt = M2C_FIELD(arg0, void **, 0x18);
    f = M2C_FIELD(vt, void (**)(void *, void *, s32), 0x3C);
    self = (char *)arg0 + M2C_FIELD(vt, s16 *, 0x38);
    y = arg1[1];
    f(self, &y, 4);
    return arg0;
}

void *fn_802D35D8(void *arg0, f32 *arg1) {
    return fn_802D34B0(fn_802D34B0(arg0, arg1), arg1 + 3);
}

void *fn_802D360C(void *arg0, f32 *arg1) {
    void *s;
    void *vt;
    void (*f)(void *, void *, s32);
    void *self;
    f32 w;

    s = fn_802D34B0(arg0, arg1);
    vt = M2C_FIELD(s, void **, 0x18);
    f = M2C_FIELD(vt, void (**)(void *, void *, s32), 0x3C);
    self = (char *)s + M2C_FIELD(vt, s16 *, 0x38);
    w = arg1[3];
    f(self, &w, 4);
    return s;
}

void *fn_802D3668(void *arg0, char *arg1) {
    void *vt;

    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1, 4);
    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1 + 4, 4);
    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1 + 8, 4);
    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1 + 0xC, 4);
    return arg0;
}

void *fn_802D3714(void *arg0, void *arg1) {
    void *vt;

    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1, 4);
    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), (char *)arg1 + 4, 4);
    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), (char *)arg1 + 8, 4);
    return arg0;
}

void *fn_802D37A0(void *arg0, char *arg1) {
    void *vt;

    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1, 4);
    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1 + 4, 4);
    return arg0;
}

void *fn_802D380C(void *arg0, void *arg1) {
    void *fn_802D3714(void *, void *);
    return fn_802D3714(fn_802D3714(arg0, arg1), (char *)arg1 + 0xC);
}

void *fn_802D3840(void *arg0, void *arg1) {
    void *fn_802D3714(void *, void *);
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_802D3714(arg0, arg1);
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x18);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, void *, s32), 0x34)((s8 *)temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x30), (s8 *)arg1 + 0xC, 4);
    return temp_r3;
}

void *fn_802D3894(void *arg0) {
    extern u8 lbl_804194F8[];
    M2C_FIELD(arg0, void **, 0x18) = lbl_804194F8;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return arg0;
}

void fn_802D38B0(void *arg0, s32 arg1) {
    extern u8 lbl_804194F8[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804194F8;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

s32 fn_802D38E4(s32 *self) {
    return *self;
}

char **fn_802D38EC(char **arg0, s32 arg1) {
    s16 c;

    c = arg1 << 8;
    fn_802D3C60(arg0, (const char *)&c);
    return arg0;
}

s32 *fn_802D3928(s32 *arg0, char *arg1, char *arg2) {
    M2C_UNK fn_802482F8();
    s32 fn_80248808(const char *);
    char *fn_802D3A1C(s32 *, s32);
    void fn_802D39E4(s32 *);
    char *buf;
    s32 len1;
    s32 len2;
    s32 total;

    if (arg1 != 0) {
        len1 = fn_80248808(arg1);
    } else {
        len1 = 0;
    }
    if (arg2 != 0) {
        len2 = fn_80248808(arg2);
    } else {
        len2 = 0;
    }
    total = len1 + len2;
    if (total != 0 && (buf = fn_802D3A1C(arg0, total + 1)) != 0) {
        fn_802482F8(buf, arg1, len1);
        fn_802482F8(buf + len1, arg2, len2 + 1);
        *arg0 = (s32)buf;
    } else {
        fn_802D39E4(arg0);
    }
    return arg0;
}

void fn_802D39E4(M2C_UNK **arg0) {
    extern M2C_UNK lbl_80494DD0;
    *arg0 = &lbl_80494DD0;
}

void fn_802D39F0(s32 *self, s32 arg1) {
    extern M2C_UNK lbl_80494DD0;
    void fn_802D3AAC(void *, void *);
    if (arg1 != (s32)&lbl_80494DD0) {
        fn_802D3AAC(self, (void *)arg1);
    }
}

void fn_802D3AAC(void *self, void *arg1) {
    void fn_802D1A00(s32, void *);
    s32 fn_802D0AB8(void);
    fn_802D1A00(fn_802D0AB8(), arg1);
}

s32 fn_802D3AE0(s32 *arg0, char *delim, void *out) {
    char *fn_80248B90(char *, char *);
    void fn_803B9FC4(void *, s32 *);
    char *fn_803B9FEC(s32 *);
    void fn_802D39F0(s32 *, s32);
    s32 buf[2];
    char *p;
    s32 count;

    if (*(char *)*arg0 == 0) {
        return 0;
    }
    fn_802D3C60(buf, fn_803B9FEC(arg0));
    p = fn_80248B90((char *)buf[0], delim);
    while (p != 0) {
        s32 tok[2];
        s32 *t = EString_Init(tok, p);
        fn_803B9FC4(out, t);
        fn_802D39F0(t, *t);
        p = fn_80248B90(0, delim);
    }
    count = M2C_FIELD(out, s32 *, 4);
    fn_802D39F0(buf, buf[0]);
    return count;
}

s32 fn_802D3BA0(s32 *arg0, s32 arg1) {
    void fn_802D39F0(s32 *, s32);
    void fn_802D3C60(s32 *, char *);
    s32 fn_802D7FC8(char *, s32, s32, s32);
    char buf[1024];
    char c;
    s32 n;
    s32 i;

    i = 0;
    do {
        n = fn_802D7FC8(&c, 1, 1, arg1);
        if (n == 0 || c == '\n') {
            buf[i++] = 0;
            break;
        }
        buf[i++] = c;
    } while (n == 1);
    if (i > 1 && buf[i - 2] == '\r') {
        buf[i - 2] = 0;
        i--;
    }
    fn_802D39F0(arg0, *arg0);
    fn_802D3C60(arg0, buf);
    return i - 1;
}

void fn_802D3C60(s32 *arg0, char *arg1) {
    M2C_UNK fn_802482F8();
    s32 fn_80248808(const char *);
    char *fn_802D3A1C(s32 *, s32);
    char *buf;
    s32 len;
    s32 size;

    if (arg1 != 0) {
        len = fn_80248808(arg1);
    } else {
        len = 0;
    }
    if (len != 0 && (buf = fn_802D3A1C(arg0, size = len + 1)) != 0) {
        fn_802482F8(buf, arg1, size);
        *arg0 = (s32)buf;
    } else {
        fn_802D39E4((M2C_UNK **)arg0);
    }
}

s32 *fn_802D3CE4(s32 *arg0, char *arg1) {
    void fn_802D39F0(s32 *, s32);
    s32 *self = arg0;
    s32 old = *self;

    fn_802D3C60(self, arg1);
    fn_802D39F0(self, old);
    return self;
}

s32 fn_802D3D24(s32 *arg0) {
    s32 fn_80248808(s32);
    return fn_80248808(*arg0);
}

char **fn_802D3D48(char **arg0) {
    char *p;

    for (p = *arg0; *p != 0; p++) {
        if (*p >= 'a' && *p <= 'z') {
            *p -= 0x20;
        }
    }
    return arg0;
}

s32 *fn_802D3D7C(s32 *arg0) {
    M2C_UNK fn_803783F0(s32);
    fn_803783F0(*arg0);
    return arg0;
}

s32 fn_802D3DB0(s32 *arg0, s32 arg1) {
    M2C_UNK fn_802482F8();
    void fn_802D39F0(s32 *, s32);
    char *fn_802D3A1C(s32 *, s32);
    void fn_802D3E40(s32 *);
    char *buf;
    s32 len;

    if (arg1 != 0) {
        len = fn_802D3D24(arg0);
        if (arg1 > len) {
            buf = fn_802D3A1C(arg0, arg1 + 1);
            if (buf != 0) {
                fn_802482F8(buf, *arg0, len + 1);
                fn_802D39F0(arg0, *arg0);
                *arg0 = (s32)buf;
            } else {
                return 0;
            }
        }
    } else {
        fn_802D3E40(arg0);
    }
    return 1;
}

void fn_802D3E40(s32 *arg0) {
    void fn_802D39F0(s32 *, s32);
    fn_802D39F0(arg0, *arg0);
    fn_802D39E4((void *)arg0);
}

s32 fn_802D3E78(char **arg0, char *arg1) {
    s32 fn_802486DC(char *, char *);
    char *s = *arg0;
    if (*s == 0) {
        if (arg1 == 0 || *arg1 == 0) {
            return 0;
        }
        return -1;
    }
    if (arg1 == 0 || *arg1 == 0) {
        return 1;
    }
    return fn_802486DC(s, arg1);
}

s32 fn_802D3EE8(char **arg0, char *arg1) {
    s32 fn_8024851C(char *, char *);
    char *s = *arg0;
    if (*s == 0) {
        if (arg1 == 0 || *arg1 == 0) {
            return 0;
        }
        return -1;
    }
    if (arg1 == 0 || *arg1 == 0) {
        return 1;
    }
    return fn_8024851C(s, arg1);
}

s32 *fn_802D406C(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    void fn_802D39F0(s32 *, s32);
    s32 *fn_802D40E4(s32 *, s32 *, s32);
    s32 sp8;

    if (arg3 == -1) {
        fn_802D3C60(arg0, (char *)(*arg1 + arg2));
    } else {
        fn_802D3C60(&sp8, (char *)(*arg1 + arg2));
        fn_802D40E4(arg0, &sp8, arg3);
        fn_802D39F0(&sp8, sp8);
    }
    return arg0;
}

s32 *fn_802D40E4(s32 *arg0, s32 *arg1, s32 arg2) {
    void fn_802D39F0(s32 *, s32);
    char *fn_803B9FEC(s32 *);
    s32 sp8;

    fn_802D3C60(&sp8, fn_803B9FEC(arg1));
    ((char *)sp8)[arg2] = 0;
    fn_802D3C60(arg0, fn_803B9FEC(&sp8));
    fn_802D39F0(&sp8, sp8);
    return arg0;
}

s32 *fn_802D4158(s32 *arg0, s32 *arg1, s32 arg2) {
    fn_802D3C60(arg0, (char *)(*arg1 + (fn_802D3D24(arg1) - arg2)));
    return arg0;
}

s32 *fn_802D41A8(s32 *arg0, char *arg1) {
    void fn_802D39F0(s32 *, s32);
    typedef struct { s32 p; } Str;
    Str tmp = ((Str (*)(char *, char *))fn_802D3928)((char *)*arg0, arg1);

    fn_802D3CE4(arg0, (char *)tmp.p);
    fn_802D39F0(&tmp.p, tmp.p);
    return arg0;
}

s32 *fn_802D4200(s32 *arg0, s32 *arg1, s32 arg2) {
    s16 c;

    c = arg2 << 8;
    fn_802D3928(arg0, (char *)*arg1, (char *)&c);
    return arg0;
}

s32 *fn_802D4240(s32 *arg0, s32 arg1) {
    void fn_802D39F0(s32 *, s32);
    s32 tmp;
    s32 *p;

    fn_802D4200(p = &tmp, arg0, arg1);
    fn_802D3CE4(arg0, (char *)tmp);
    fn_802D39F0(p, tmp);
    return arg0;
}

s32 fn_802D4298(char **arg0, char *arg1, s32 arg2) {
    char *fn_80248640(char *, char *);
    char *p;

    if (**arg0 == 0) {
        return -1;
    }
    p = fn_80248640(*arg0 + arg2, arg1);
    return p != 0 ? p - *arg0 : -1;
}

s32 fn_802D42F8(char **arg0, s32 arg1) {
    s32 fn_802D4F48(s32, s32);
    char *p;
    s32 i;

    p = *arg0;
    i = 0;
    while (*p != 0) {
        if (fn_802D4F48(*p, arg1) != 0) {
            return i;
        }
        p++;
        i++;
    }
    return -1;
}

s32 fn_802D4364(char **arg0, char *arg1, s32 arg2) {
    char *fn_80248B28(char *, char *);
    char *p;

    if (**arg0 == 0) {
        return -1;
    }
    p = fn_80248B28(*arg0 + arg2, arg1);
    return p != 0 ? p - *arg0 : -1;
}

s32 fn_802D453C(char **arg0) {
    char *fn_80248ADC(char *);
    char *p;

    if (**arg0 == 0) {
        return -1;
    }
    p = fn_80248ADC(*arg0);
    return p != 0 ? p - *arg0 : -1;
}

s32 *fn_802D45E4(s32 *arg0, s32 arg1) {
    s32 fn_80245BB4(char *, const char *, ...);
    extern char lbl_803F032C[];
    char buf[40];

    fn_80245BB4(buf, lbl_803F032C, arg1);
    fn_802D3CE4(arg0, buf);
    return arg0;
}

void fn_802D4634(u8 **arg0, s32 arg1, u8 arg2) {
    u8 *var_r3;
    u8 var_r0;

    var_r3 = *arg0;
    var_r0 = *var_r3;
    if ((s32) var_r0 != 0) {
        do {
            if ((s8) var_r0 == arg1) {
                M2C_FIELD(var_r3, u8 *, 0) = arg2;
            }
            var_r0 = M2C_FIELD(var_r3, u8 *, 1);
            var_r3 += 1;
        } while ((s32) var_r0 != 0);
    }
}

void fn_802D4664(s32 *arg0, s32 arg1) {
    void fn_802D39F0(s32 *, s32);
    char *fn_803B9FEC(s32 *);
    s32 sp8;
    s32 *p;
    char *src;
    char *dst;
    char c;

    if (fn_802D4298((char **)arg0, (char *)arg1, 0) != -1) {
        p = &sp8;
        fn_802D3C60(p, fn_803B9FEC(arg0));
        src = (char *)*arg0;
        dst = (char *)sp8;
        for (c = *src; c != 0; c = *++src) {
            if (c != arg1) {
                *dst++ = c;
            }
        }
        *dst = 0;
        fn_802D3CE4(arg0, (char *)sp8);
        fn_802D39F0(p, sp8);
    }
}

s32 *fn_802D4710(s32 *arg0, s32 arg1, s32 *arg2) {
    s16 c;

    c = arg1 << 8;
    fn_802D3928(arg0, (char *)&c, (char *)*arg2);
    return arg0;
}

void *fn_802D4798(void *arg0, s32 arg1) {
    s32 *fn_802D3CE4(s32 *, char *);
    char sp8[1024];
    void *vt;

    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, char *, s32), 0x14)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x10), sp8, 0x400);
    fn_802D3CE4((s32 *)arg1, sp8);
    return arg0;
}

void fn_802D47F4(s32 *arg0) {
    s32 *fn_802D3CE4(s32 *, char *);
    char *fn_802DF448(char *, s32);
    char sp8[0x104];

    fn_802D3CE4(arg0, fn_802DF448(sp8, *arg0));
}

void fn_802D4834(s32 *arg0) {
    s32 *fn_802D3CE4(s32 *, char *);
    char *fn_802DF534(char *, s32);
    char sp8[0x104];

    fn_802D3CE4(arg0, fn_802DF534(sp8, *arg0));
}

void fn_802D4874(s32 *arg0) {
    M2C_UNK fn_802DF4B8(s32, s32);
    s32 temp_r3;

    temp_r3 = *arg0;
    fn_802DF4B8(temp_r3, temp_r3);
}

s32 fn_802D489C(s32 arg0, s32 *arg1) {
    void fn_802D3C60(s32 *, char *);
    char *fn_802DF5D8(char *, s32);
    char sp8[0x104];

    fn_802D3C60((s32 *)arg0, fn_802DF5D8(sp8, *arg1));
    return arg0;
}

s32 fn_802D48E0(s32 arg0, s32 *arg1) {
    void fn_802D3C60(s32 *, char *);
    char *fn_802DF65C(char *, s32);
    char sp8[0x104];

    fn_802D3C60((s32 *)arg0, fn_802DF65C(sp8, *arg1));
    return arg0;
}

s32 fn_802D4924(s32 arg0, s32 *arg1) {
    void fn_802D3C60(s32 *, char *);
    char *fn_802DF728(char *, s32);
    char sp8[0x104];

    fn_802D3C60((s32 *)arg0, fn_802DF728(sp8, *arg1));
    return arg0;
}

s32 fn_802D4968(s32 arg0, s32 *arg1) {
    void fn_802D3C60(s32 *, char *);
    char *fn_802DF7BC(char *, s32);
    char sp8[0x104];

    fn_802D3C60((s32 *)arg0, fn_802DF7BC(sp8, *arg1));
    return arg0;
}

s32 *fn_802D49AC(s32 *arg0) {
    M2C_UNK fn_802DF358(s32, s32);
    s32 temp_r3;

    temp_r3 = *arg0;
    fn_802DF358(temp_r3, temp_r3);
    return arg0;
}

s32 *fn_802D49E4(s32 *arg0, s32 arg1) {
    void fn_802D39F0(s32 *, s32);
    s32 *fn_802D3CE4(s32 *, char *);
    s32 *fn_802D40E4(s32 *, s32 *, s32);
    s32 sp8;
    s32 len;
    s32 i;

    len = fn_802D3D24(arg0);
    if (len != 0) {
        i = len;
        while (i > 0 && arg1 == ((s8 *)*arg0)[i - 1]) {
            i--;
        }
        if (i != len) {
            fn_802D40E4(&sp8, arg0, i);
            fn_802D3CE4(arg0, sp8);
            fn_802D39F0(&sp8, sp8);
        }
    }
    return arg0;
}

s32 *fn_802D4A90(s32 *arg0, s32 arg1) {
    s32 *fn_802D3CE4(s32 *, char *);
    s8 *start;
    s8 *p;

    p = (s8 *)*arg0;
    if (*p == arg1) {
        start = p;
        for (p++; *p == arg1; p++) {
        }
        if (p != start) {
            fn_802D3CE4(arg0, (char *)p);
        }
    }
    return arg0;
}

s32 *fn_802D4B04(s32 *arg0, s32 arg1) {
    fn_802D4A90(arg0, arg1);
    fn_802D49E4(arg0, arg1);
    return arg0;
}

s32 *fn_802D4B44(s32 *arg0, s32 arg1) {
    void fn_802D39F0(s32 *, s32);
    s32 *fn_802D3CE4(s32 *, char *);
    s32 *fn_802D40E4(s32 *, s32 *, s32);
    char *fn_80248640(char *, char *);
    s32 sp8;
    s32 len;
    s32 i;

    len = fn_802D3D24(arg0);
    if (len != 0) {
        for (i = len; i > 0; i--) {
            if (fn_80248640((char *)arg1, (char *)(s32)((s8 *)*arg0)[i - 1]) == 0) {
                break;
            }
        }
        if (i != len) {
            fn_802D40E4(&sp8, arg0, i);
            fn_802D3CE4(arg0, (char *)sp8);
            fn_802D39F0(&sp8, sp8);
        }
    }
    return arg0;
}

s32 *fn_802D4BE8(s32 *arg0, s32 arg1) {
    s32 *fn_802D3CE4(s32 *, char *);
    char *fn_80248640(char *, char *);
    s8 *start;
    s8 *p;

    start = (s8 *)*arg0;
    if (*start != 0) {
        p = start;
        while (*p != 0 && fn_80248640((char *)arg1, (char *)(s32)*p) != 0) {
            p++;
        }
        if (p != (s8 *)*arg0) {
            fn_802D3CE4(arg0, (char *)p);
        }
    }
    return arg0;
}

s32 *fn_802D4C6C(s32 *arg0, s32 arg1) {
    s32 *fn_802D4BE8(s32 *, s32);
    s32 *fn_802D4B44(s32 *, s32);

    fn_802D4BE8(arg0, arg1);
    fn_802D4B44(arg0, arg1);
    return arg0;
}

s32 fn_802D4D78(s32 *arg0, s32 arg1, s8 arg2) {
    void fn_8024839C(char *, char *, s32);
    s32 fn_802D4EC4(s32 *, s32);
    void fn_802D4F00(s32 *);
    char *buf;
    s32 size;

    if (arg1 > fn_802D3D24(arg0)) {
        arg1 = fn_802D3D24(arg0);
    }
    size = fn_802D3D24(arg0) + 1;
    buf = (char *)fn_802D4EC4(arg0, size);
    fn_8024839C(buf + arg1 + 1, buf + arg1, size - arg1);
    buf[arg1] = arg2;
    fn_802D4F00(arg0);
    return size;
}

s32 fn_802D4EC4(s32 *arg0, s32 arg1) {
    s32 fn_802D3DB0(s32 *, s32);
    return fn_802D3DB0(arg0, arg1) != 0 ? *arg0 : 0;
}

void fn_802D4F00(s32 *arg0) {
    s32 *fn_802D3CE4(s32 *, char *);
    fn_802D3CE4(arg0, (char *)*arg0);
}

void fn_802D4F24(s32 *arg0, f64 farg0) {
    s32 *fn_802D4598(s32 *, f32);
    fn_802D4598(arg0, (f32) farg0);
}

s32 fn_802D4F48(s32 a, s32 b) {
    if (a == b) {
        return 1;
    }
    if ((u32)(a - 'a') <= 25 && b >= 'A' && b <= 'Z') {
        return a - 0x20 == b;
    }
    if ((u32)(b - 'a') <= 25 && a >= 'A' && a <= 'Z') {
        return b - 0x20 == a;
    }
    return 0;
}

void fn_802D4FC4(u8 **arg0) {
    u8 *var_r3;
    u8 var_r0;

    var_r3 = *arg0;
    var_r0 = *var_r3;
    if ((s32) var_r0 != 0) {
        do {
            if ((s32) var_r0 == 0x2F) {
                M2C_FIELD(var_r3, u8 *, 0) = 0x5C;
            }
            var_r0 = M2C_FIELD(var_r3, u8 *, 1);
            var_r3 += 1;
        } while ((s32) var_r0 != 0);
    }
}

void fn_802D4FF4(u8 **arg0) {
    u8 *var_r3;
    u8 var_r0;

    var_r3 = *arg0;
    var_r0 = *var_r3;
    if ((s32) var_r0 != 0) {
        do {
            if ((s32) var_r0 == 0x5C) {
                M2C_FIELD(var_r3, u8 *, 0) = 0x2F;
            }
            var_r0 = M2C_FIELD(var_r3, u8 *, 1);
            var_r3 += 1;
        } while ((s32) var_r0 != 0);
    }
}

void fn_802D5024(u8 *arg0) {
    u8 *var_r3;
    u8 var_r0;

    var_r3 = arg0;
    var_r0 = *var_r3;
    if ((s32) var_r0 != 0) {
        do {
            if ((s32) var_r0 == 0x2F) {
                M2C_FIELD(var_r3, u8 *, 0) = 0x5C;
            }
            var_r0 = M2C_FIELD(var_r3, u8 *, 1);
            var_r3 += 1;
        } while ((s32) var_r0 != 0);
    }
}

void fn_802D5050(u8 *arg0) {
    u8 *var_r3;
    u8 var_r0;

    var_r3 = arg0;
    var_r0 = *var_r3;
    if ((s32) var_r0 != 0) {
        do {
            if ((s32) var_r0 == 0x5C) {
                M2C_FIELD(var_r3, u8 *, 0) = 0x2F;
            }
            var_r0 = M2C_FIELD(var_r3, u8 *, 1);
            var_r3 += 1;
        } while ((s32) var_r0 != 0);
    }
}

s32 *fn_802D507C(s32 *arg0, u16 arg1) {
    M2C_UNK fn_802D56C4(s32 *, u16 *);
    u16 sp8[2];

    sp8[0] = arg1;
    sp8[1] = 0;
    fn_802D56C4(arg0, sp8);
    return arg0;
}

void fn_802D51DC(f64 farg0) {
    M2C_UNK fn_802D62F0(f32);
    fn_802D62F0((f32) farg0);
}

s32 fn_802D5200(u16 *arg0) {
    s32 n;

    if (arg0 == NULL) {
        return 0;
    }
    n = 0;
    while (*arg0 != 0) {
        arg0++;
        n++;
    }
    return n;
}

void fn_802D5238(M2C_UNK **arg0) {
    extern M2C_UNK lbl_80494DD4;
    *arg0 = &lbl_80494DD4;
}

extern u8 lbl_803FD294[];
void fn_802D5244(M2C_UNK **arg0) {
    *arg0 = &lbl_803FD294;
}

void fn_802D5254(s32 *arg0, s32 arg1) {
    extern M2C_UNK lbl_80494DD4;
    void fn_802D1A00(s32, s32);
    s32 fn_802D0AB8(void);

    if (arg1 != (s32)&lbl_80494DD4 && arg1 != (s32)lbl_803FD294) {
        fn_802D1A00(fn_802D0AB8(), arg1);
    }
}

s32 *fn_802D5564(s32 *arg0, u16 arg1) {
    M2C_UNK fn_802D56C4(s32 *, u16 *);
    u16 sp8[2];

    sp8[0] = arg1;
    sp8[1] = 0;
    fn_802D56C4(arg0, sp8);
    return arg0;
}

s32 *fn_802D57BC(s32 *arg0, u16 *arg1) {
    void fn_802D5254(s32 *, s32);
    void fn_802D56C4(s32 *, u16 *);
    s32 *self = arg0;
    s32 old = *self;

    fn_802D56C4(self, arg1);
    fn_802D5254(self, old);
    return self;
}

s32 *fn_802D57FC(s32 *arg0, char *arg1) {
    void fn_802D5254(s32 *, s32);
    void fn_802D544C(s32 *, char *);
    s32 *self = arg0;
    s32 old = *self;

    fn_802D544C(self, arg1);
    fn_802D5254(self, old);
    return self;
}

s32 *fn_802D583C(s32 *arg0, u16 arg1) {
    void fn_802D5254(s32 *, s32);
    void fn_802D56C4(s32 *, u16 *);
    s32 *self = arg0;
    u16 buf[2];
    s32 old;

    buf[0] = arg1;
    buf[1] = 0;
    old = *self;
    fn_802D56C4(self, buf);
    fn_802D5254(self, old);
    return self;
}

s32 *fn_802D5890(s32 *arg0, u16 arg1) {
    void fn_802D5254(s32 *, s32);
    void fn_802D56C4(s32 *, u16 *);
    s32 *self = arg0;
    u16 buf[2];
    s32 old;

    buf[0] = arg1;
    buf[1] = 0;
    old = *self;
    fn_802D56C4(self, buf);
    fn_802D5254(self, old);
    return self;
}

static inline void EString_WUpper(u16 *p) {
    u32 c;

    while ((c = *p) != 0) {
        if (c - 'a' <= 25) {
            *p = c + 0xFFE0;
        }
        p++;
    }
}

void fn_802D58E4(s32 *arg0) {
    s32 fn_802D5200(u16 *);
    fn_802D5200(*arg0);
}

void fn_802D5908(u16 **arg0) {
    EString_WUpper(*arg0);
}

void fn_802D5A94(s32 *arg0) {
    void fn_802D5254(s32 *, s32);
    fn_802D5254(arg0, *arg0);
    fn_802D5238((void *)arg0);
}

s32 *fn_802D5D08(s32 *arg0, s32 *arg1, s32 arg2) {
    void fn_802D5254(s32 *, s32);
    void fn_802D56C4(s32 *, u16 *);
    u16 *fn_803BA3EC(s32 *);
    u16 *sp8;

    fn_802D56C4((s32 *)&sp8, fn_803BA3EC(arg1));
    sp8[arg2] = 0;
    fn_802D56C4(arg0, fn_803BA3EC((s32 *)&sp8));
    fn_802D5254((s32 *)&sp8, (s32)sp8);
    return arg0;
}

s32 *fn_802D5D80(s32 *arg0, s32 *arg1, s32 arg2) {
    void fn_802D56C4(s32 *, u16 *);
    fn_802D56C4(arg0, (u16 *)(((((s32 (*)(s32 *))fn_802D58E4)(arg1) - arg2) * 2) + *arg1));
    return arg0;
}

s32 fn_802D5E2C(s32 arg0, s32 *arg1, u16 arg2) {
    M2C_UNK fn_802D50BC(s32, s32, s32);
    u16 buf[2];

    buf[0] = arg2;
    buf[1] = 0;
    fn_802D50BC(arg0, *arg1, (s32)buf);
    return arg0;
}

s32 fn_802D5EC8(s32 arg0, s32 *arg1, s32 arg2) {
    M2C_UNK fn_802D50BC(s32, s32, s32);
    void fn_802D5254(s32 *, s32);
    M2C_UNK fn_802D544C(s32 *, s32);
    s32 sp8;
    s32 temp_r29;

    temp_r29 = *arg1;
    fn_802D544C(&sp8, arg2);
    fn_802D50BC(arg0, temp_r29, sp8);
    fn_802D5254(&sp8, sp8);
    return arg0;
}

s32 fn_802D5F24(s32 arg0, s32 *arg1, s32 *arg2) {
    M2C_UNK fn_802D50BC(s32, s32, s32);
    void fn_802D5254(s32 *, s32);
    M2C_UNK fn_802D544C(s32 *, s32);
    s32 sp8;
    s32 temp_r30;

    temp_r30 = *arg1;
    fn_802D544C(&sp8, *arg2);
    fn_802D50BC(arg0, temp_r30, sp8);
    fn_802D5254(&sp8, sp8);
    return arg0;
}

s32 fn_802D5F80(s32 arg0, s32 *arg1, u16 arg2) {
    M2C_UNK fn_802D50BC(s32, s32, s32);
    u16 buf[2];

    buf[0] = arg2;
    buf[1] = 0;
    fn_802D50BC(arg0, *arg1, (s32)buf);
    return arg0;
}

s32 *fn_802D633C(s32 *arg0, s32 arg1) {
    s32 fn_80245BB4(char *, const char *, ...);
    extern char lbl_803F0338[];
    char buf[40];

    fn_80245BB4(buf, lbl_803F0338, arg1);
    fn_802D57FC(arg0, buf);
    return arg0;
}

u16 **fn_802D6934(u16 **arg0) {
    u16 *p;

    p = *arg0;
    for (;;) {
        switch (*p) {
        case 0:
            return arg0;
        case '"':
        case '#':
        case '*':
        case '/':
        case ':':
        case '<':
        case '>':
        case '?':
        case '\\':
        case '|':
            *p = '_';
            break;
        }
        p++;
    }
}

void fn_802D69B4(u16 **arg0) {
    u16 *var_r3;
    u16 var_r0;

    var_r3 = *arg0;
    var_r0 = *var_r3;
    if ((s32) var_r0 != 0) {
        do {
            if ((s32) var_r0 == 0x2F) {
                M2C_FIELD(var_r3, u16 *, 0) = 0x5C;
            }
            var_r0 = M2C_FIELD(var_r3, u16 *, 2);
            var_r3 += 1;
        } while ((s32) var_r0 != 0);
    }
}

void fn_802D69E4(u16 **arg0) {
    u16 *var_r3;
    u16 var_r0;

    var_r3 = *arg0;
    var_r0 = *var_r3;
    if ((s32) var_r0 != 0) {
        do {
            if ((s32) var_r0 == 0x5C) {
                M2C_FIELD(var_r3, u16 *, 0) = 0x2F;
            }
            var_r0 = M2C_FIELD(var_r3, u16 *, 2);
            var_r3 += 1;
        } while ((s32) var_r0 != 0);
    }
}

void **fn_802D6A14(void **self) {
    extern u8 lbl_80419540[];
    *self = lbl_80419540;
    return self;
}

extern u8 lbl_80419540[];
extern void fn_802D20E8(void *);
void fn_802D6A28(void **self, s32 flags) {
    *self = lbl_80419540;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802D6A5C(char *self) {
    char *vt = *(char **)(self + 0x0);
    (*(void (**)(char *))(vt + 0x1C))(self + *(s16 *)(vt + 0x18));
}

void *fn_802D6A90(void *arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s32 arg5, s32 arg6) {
    s32 fn_802C5240(s32);
    M2C_UNK fn_802D6B18(void *);
    extern s32 lbl_80494DE0;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg5;
    M2C_FIELD(arg0, s32 *, 0x10) = fn_802C5240(arg5);
    M2C_FIELD(arg0, s16 *, 0x14) = arg4;
    M2C_FIELD(arg0, s16 *, 0x16) = -1;
    if (arg6 != arg0) {
        M2C_FIELD(arg0, s32 *, 0x18) = arg6;
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    lbl_80494DE0 += 1;
    fn_802D6B18(arg0);
    return arg0;
}

void *fn_802D6BA0(u32 arg0) {
    extern void *lbl_80494DD8;
    u32 temp_r0;
    void *var_r9;

    var_r9 = lbl_80494DD8;
loop_1:
    if (var_r9 != NULL) {
        temp_r0 = M2C_FIELD(var_r9, u32 *, 0x10);
        if (arg0 < temp_r0) {
            var_r9 = M2C_FIELD(var_r9, void **, 0x1C);
            goto loop_1;
        }
        if (arg0 > temp_r0) {
            var_r9 = M2C_FIELD(var_r9, void **, 0x20);
            goto loop_1;
        }
    }
    return var_r9;
}

s32 fn_802D6EF8(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x18) * M2C_FIELD(arg0, s16 *, 0x1C)) + 0xE3;
}

void fn_802D7DF4(void) {
    M2C_UNK fn_802D7D9C(M2C_UNK, M2C_UNK);
    fn_802D7D9C(1, 0xFFFF);
}

