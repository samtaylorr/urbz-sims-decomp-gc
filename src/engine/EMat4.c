/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D24E8(void);
extern void *fn_802D0C44(void *);
extern void fn_802D1A00(void *, void *);
extern void fn_802C7DD0(void *);
s32 fn_802D1404(void *arg0, u32 arg1);
extern void *fn_802D0B3C(void);
extern void *fn_802D0BC0(void);
extern void fn_802CAA00(void *, s32);
extern s32 lbl_80494DCC;
extern char lbl_803FD274[];
extern u8 lbl_80446D34[];
extern const f32 lbl_803F02B0[];
extern const f32 lbl_803F02C0[];
extern u8 lbl_803F02C8[];
extern u8 lbl_8044490C[];
extern s32 lbl_80496150;
extern void fn_802D94C0(void *, s32);
extern void fn_802D0D30(void *, void *);
extern void fn_80246D44(void (*)(void));
void fn_802D0A8C(void);
void fn_802C7F78(void *self);
void fn_802C7FE8(void *self);

typedef struct EMat4Node {
    u8 pad0[0x10];
    struct EMat4Node *next;
    u8 pad14[0x4];
    s32 key;
    void *value;
} EMat4Node;

static inline s32 EMat4Node_Valid(EMat4Node *n) {
    return n != NULL;
}

typedef struct EMat4VtEnt {
    s16 delta;
    s16 pad;
    void (*fn)(void *);
} EMat4VtEnt;

typedef struct EMat4Obj {
    EMat4VtEnt *vtbl;
} EMat4Obj;

typedef struct EMat4AtExit {
    EMat4Obj *obj;
    s32 pad;
} EMat4AtExit;

void fn_802CD53C(EMat4Node **list);
void fn_802CCE6C(void *self, s32 key, void *value, s32 arg3);

s32 *fn_802C66FC(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

void fn_802C686C(void *arg0, s8 *arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s8 **, 0) = arg1;
    *arg1 = 0;
}

char **fn_802C6A40(char **arg0, char arg1) {
    (*arg0)[0] = arg1;
    (*arg0)[1] = 0;
    return arg0;
}

s32 fn_802C6A5C(s32 *arg0) {
    s32 fn_80248808(s32);
    return fn_80248808(*arg0);
}

char **fn_802C6A80(char **arg0) {
    char *p;

    for (p = *arg0; *p != 0; p++) {
        if (*p >= 'a' && *p <= 'z') {
            *p -= 0x20;
        }
    }
    return arg0;
}

char **fn_802C6AB4(char **arg0) {
    char *p;

    for (p = *arg0; *p != 0; p++) {
        if (*p >= 'A' && *p <= 'Z') {
            *p += 0x20;
        }
    }
    return arg0;
}

s32 fn_802C6AE8(char **arg0, const char *arg1) {
    const char *p = *arg0;

    do {
        if (*p < *arg1) {
            return -1;
        }
        if (*p > *arg1) {
            return 1;
        }
        p++;
        arg1++;
    } while (*p != 0 || *arg1 != 0);
    return 0;
}

void fn_802C6CCC(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_802C69B0(s32, s32);
    M2C_UNK fn_802C6D20(s32, s32, s32);
    fn_802C69B0(arg1, *arg0 + arg2);
    if (arg3 != -1) {
        fn_802C6D20(arg1, arg1, arg3);
    }
}

char **fn_802C6DE4(char **arg0, const char *arg1) {
    M2C_UNK fn_802482F8();
    s32 fn_80248808(const char *);
    s32 len;
    s32 n;
    s32 max;

    len = fn_802C6A5C((s32 *)arg0);
    n = fn_80248808(arg1) + 1;
    max = M2C_FIELD(arg0, s32 *, 4) - len - 1;
    if (n > max) {
        n = max;
    }
    if (n > 0) {
        fn_802482F8(*arg0 + len, arg1, n);
    }
    (*arg0)[M2C_FIELD(arg0, s32 *, 4) - 1] = 0;
    return arg0;
}

char **fn_802C6E70(char **arg0, s32 arg1) {
    s16 c;

    c = arg1 << 8;
    fn_802C6DE4(arg0, (const char *)&c);
    return arg0;
}

s32 fn_802C6EAC(char **arg0, s32 arg1) {
    char *p;
    s32 i;

    p = *arg0;
    i = 0;
    while (*p != 0) {
        if (*p == arg1) {
            return i;
        }
        p++;
        i++;
    }
    return -1;
}

s32 fn_802C6EEC(char **arg0, s32 arg1) {
    s32 fn_802C7AAC(s32, s32);
    char *p;
    s32 i;

    p = *arg0;
    i = 0;
    while (*p != 0) {
        if (fn_802C7AAC(*p, arg1) != 0) {
            return i;
        }
        p++;
        i++;
    }
    return -1;
}

char **fn_802C71B0(char **arg0, f32 arg1) {
    extern char lbl_803F0098[];
    s32 fn_80245BB4(char *, const char *, ...);

    fn_80245BB4(*arg0, lbl_803F0098, arg1);
    (*arg0)[M2C_FIELD(arg0, s32 *, 4) - 1] = 0;
    return arg0;
}

char **fn_802C7204(char **arg0, s32 arg1) {
    extern char lbl_803F009C[];
    s32 fn_80245BB4(char *, const char *, ...);

    fn_80245BB4(*arg0, lbl_803F009C, arg1);
    (*arg0)[M2C_FIELD(arg0, s32 *, 4) - 1] = 0;
    return arg0;
}

void fn_802C725C(u8 **arg0, s32 arg1, u8 arg2) {
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

void *fn_802C7314(void *arg0, void **arg1) {
    void *v = *arg1;
    void *vt = M2C_FIELD(arg0, void **, 0x18);

    ((void (*)(void *, void *))M2C_FIELD(vt, void **, 0x1C))((u8 *)arg0 + M2C_FIELD(vt, s16 *, 0x18), v);
    return arg0;
}

void fn_802C73FC(char **arg0) {
    M2C_UNK fn_802C6D20(s32, s32, s32);
    s32 len = fn_802C6A5C((s32 *)arg0);
    char *p;
    u8 c;

    if (len != 0) {
        p = *arg0;
        if (p[len - 1] == '\\' && len != 1) {
            if (len == 3 && p[1] == ':') {
                c = p[0];
                if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                    return;
                }
            }
            fn_802C6D20((s32)arg0, (s32)arg0, len - 1);
        }
    }
}

char **fn_802C7874(char **arg0, s32 arg1) {
    M2C_UNK fn_802C69B0(s32, s32);
    char *p;

    p = *arg0;
    if (*p == arg1) {
        do {
            p++;
        } while (*p == arg1);
        fn_802C69B0((s32)arg0, (s32)p);
    }
    return arg0;
}

s32 fn_802C78D0(s32 arg0, s32 arg1) {
    M2C_UNK fn_802C77D0(s32, s32);
    fn_802C7874((char **)arg0, arg1);
    fn_802C77D0(arg0, arg1);
    return arg0;
}

char **fn_802C7910(char **arg0, s32 arg1) {
    s32 fn_80248640(s32, s32);
    M2C_UNK fn_802C6D20(s32, s32, s32);
    s32 n;

    n = fn_802C6A5C((s32 *)arg0);
    if (n != 0 && fn_80248640(arg1, (*arg0)[n - 1]) != 0) {
        n--;
        while (n != 0 && fn_80248640(arg1, (*arg0)[n - 1]) != 0) {
            n--;
        }
        fn_802C6D20((s32)arg0, (s32)arg0, n);
    }
    return arg0;
}

char **fn_802C79A8(char **arg0, s32 arg1) {
    s32 fn_80248640(s32, s32);
    M2C_UNK fn_802C69B0(s32, s32);
    char *p;

    if (fn_80248640(arg1, **arg0) != 0) {
        p = *arg0 + 1;
        while (fn_80248640(arg1, *p) != 0) {
            p++;
        }
        fn_802C69B0((s32)arg0, (s32)p);
    }
    return arg0;
}

char **fn_802C7A28(char **arg0, s32 arg1) {
    fn_802C79A8(arg0, arg1);
    fn_802C7910(arg0, arg1);
    return arg0;
}

s32 fn_802C7A68(s32 *arg0, s32 arg1) {
    if (arg1 <= arg0[1]) {
        return arg0[0];
    }
    return 0;
}

void fn_802C7A84(void) {

}

void fn_802C7A88(f64 farg0) {
    char **fn_802C71B0(char **, f32);
    ((void (*)(f32))fn_802C71B0)((f32) farg0);
}

s32 fn_802C7AAC(s32 a, s32 b) {
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

extern s32 lbl_804935F0[];
extern s32 lbl_80494DC0;
void fn_802C7B28(s32 arg0, s32 arg1) {
    s32 *count = &lbl_80494DC0;
    s32 *e = &lbl_804935F0[*count * 2];
    e[0] = arg0;
    e[1] = arg1;
    *count += 1;
}

extern s32 lbl_80494DB8;
extern s32 lbl_80494DBC;
extern s32 lbl_80494DC4;
void fn_802C7C90(void) {
    if (lbl_80494DBC == 0) {
        lbl_80494DBC = 1;
        lbl_80494DB8 = 0;
        while (lbl_80494DC4 > 0) {
            s32 i = lbl_80494DC4 - 1;
            EMat4Obj *o = ((EMat4AtExit *)lbl_804935F0)[i].obj;
            o->vtbl[3].fn((u8 *)o + o->vtbl[3].delta);
            lbl_80494DC4--;
        }
    }
}

void *fn_802C7D1C(void *self) {
    fn_802C7DD0(self);
    return self;
}

void *fn_802C7D4C(void *arg0, s32 arg1) {
    fn_802C7DD0(arg0);
    M2C_FIELD(arg0, s32 *, 8) = arg1 < 4 ? 4 : arg1;
    return arg0;
}

void fn_802C7D90(void *self, s32 flags) {
    extern void fn_802D20E8(void *);
    fn_802C7F78(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802C7DD0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void fn_802C7F78(void *self) {
    extern void *fn_802D0AB8(void *);
    void **p;
    void **next;

    if (M2C_FIELD(self, s32 *, 8) > 0x7FC) {
        fn_802C7FE8(self);
        return;
    }
    p = M2C_FIELD(self, void ***, 4);
    M2C_FIELD(self, s32 *, 0) = 0;
    while (p != NULL) {
        next = (void **)*p;
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), p);
        p = next;
    }
    M2C_FIELD(self, void **, 4) = NULL;
}

void fn_802C829C(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8037D6D8(s32, s32, s32);
    fn_8037D6D8(arg1, arg2, arg0);
}

void *fn_802C846C(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 var_r30;
    s32 var_r31;
    s32 var_r9;
    void *temp_r9;

    var_r9 = 0;
    do {
        var_r31 = (var_r9 * 0x10) + arg1;
        var_r30 = 4;
loop_2:
        temp_r9 = M2C_FIELD(arg0, void **, 0x18);
        temp_r4 = var_r31;
        var_r31 += 4;
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, M2C_UNK), 0x34)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x30), temp_r4, 4);
        var_r30 -= 1;
        if (var_r30 != 0) {
            goto loop_2;
        }
        var_r9 += 1;
    } while (var_r9 <= 3);
    return arg0;
}

void *fn_802C87C4(void *arg0, void *arg1) {
    M2C_UNK fn_802C876C();
    void *temp_r9;

    fn_802C876C();
    temp_r9 = arg0 + 0x30;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_r9, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_r9, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    return arg0;
}

void fn_802C96D4(void) {

}

void fn_802CAA50(char *self, s32 a, s32 b, s32 c) {
    char *vt = *(char **)(self + 0x0);
    (*(void (**)(char *, s32))(vt + 0x14))(self + *(s16 *)(vt + 0x10), c);
}

void fn_802CAA88(s32 arg0, s32 arg1) {
    M2C_UNK fn_802D8334(s32);
    fn_802D8334(arg0 + 4);
}

void fn_802CAAAC(s32 arg0) {
    M2C_UNK fn_802D838C(s32);
    fn_802D838C(arg0 + 4);
}

void fn_802CAAD0(char *self) {
    char *vt = *(char **)(self + 0x0);
    (*(void (**)(char *))(vt + 0x1C))(self + *(s16 *)(vt + 0x18));
}

void *fn_802CAB04(u8 *self) {
    extern u8 lbl_80419350[];
    extern void fn_802CA9A8(void *);
    fn_802CA9A8(self);
    *(u8 **)(self + 0x0) = lbl_80419350;
    fn_802CA9A8(self + 0x1C);
    *(s32 *)(self + 0x38) = 0;
    *(s32 *)(self + 0x3C) = 0;
    return self;
}

s32 fn_802CAB54(s32 self) {
    extern s32 fn_802D9124(void);
    s32 m = self + 0x1C;

retry:
    fn_802CAA88(self, -1);
    if (*(s32 *)(self + 0x3C) == 0 || *(s32 *)(self + 0x38) == fn_802D9124()) {
        if (*(s32 *)(self + 0x3C) == 0) {
            fn_802CAA88(self + 0x1C, ~0);
            *(s32 *)(self + 0x38) = fn_802D9124();
        }
        *(s32 *)(self + 0x3C) = *(s32 *)(self + 0x3C) + 1;
    } else {
        fn_802CAAAC(self);
        fn_802CAA88(m, -1);
        fn_802CAAAC(m);
        goto retry;
    }
    fn_802CAAAC(self);
    return 1;
}

s32 fn_802CAC04(s32 self) {
    s32 p;

    fn_802CAA88(self, -1);
    if (*(s32 *)(self + 0x3C) == 1) {
        fn_802CAAAC(self + 0x1C);
        *(volatile s32 *)(self + 0x38) = 0;
        *(volatile s32 *)(self + 0x3C) = *(volatile s32 *)(self + 0x3C) - 1;
        p = self;
        fn_802CAAAC(p);
    }
    return 1;
}

void fn_802CAC68(s32 arg0) {
    M2C_UNK fn_802D83EC(s32);
    fn_802D83EC(arg0 + 4);
}

void fn_802CAC8C(s32 arg0) {
    M2C_UNK fn_802D8424(s32);
    fn_802D8424(arg0 + 4);
}

void **fn_802CACB0(void **arg0) {
    char *vt = *arg0;
    ((void (*)(void *, s32))M2C_FIELD(vt, void **, 0x14))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x10), -1);
    return arg0;
}

void **fn_802CACF8(void **arg0) {
    char *vt = *arg0;
    ((void (*)(void *, s32))M2C_FIELD(vt, void **, 0x14))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x10), -1);
    return arg0;
}

void **fn_802CAD40(void **arg0) {
    char *vt = *arg0;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x1C))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x18));
    return arg0;
}

void **fn_802CAD84(void **arg0) {
    char *vt = *arg0;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x1C))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x18));
    return arg0;
}

void fn_802CADC8(void **arg0, s32 arg1) {
    extern u8 lbl_80419350[];
    *arg0 = lbl_80419350;
    fn_802CAA00(arg0 + 7, 2);
    fn_802CAA00(arg0, arg1);
}

void *fn_802CAE18(void *arg0) {
    void fn_803B95CC(void *);
    extern u8 lbl_804193D0[];
    M2C_FIELD(arg0, void **, 0x54) = lbl_804193D0;
    fn_803B95CC((char *)arg0 + 0x48);
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    return arg0;
}

void fn_802CAE6C(void *arg0, s32 arg1) {
    extern char lbl_804193D0[];
    void fn_803B9648(void *, s32);
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, char **, 0x54) = lbl_804193D0;
    fn_803B9648((u8 *)arg0 + 0x48, 2);
    if (arg1 & 1) fn_802D20E8(arg0);
}

void *fn_802CB22C(void *arg0, void *arg1) {
    u8 *vt = *(u8 **)((u8 *)arg1 + 0x54);
    s16 offset = *(s16 *)(vt + 0x20);
    void (*func)(void *, void *) = *(void (**)(void *, void *))(vt + 0x24);
    func((u8 *)arg1 + offset, arg0);
    return arg0;
}

void *fn_802CB278(void *arg0, void *arg1) {
    void *vt;

    vt = M2C_FIELD(arg1, void **, 0x54);
    M2C_FIELD(vt, void (**)(void *, void *), 0x14)((u8 *)arg1 + M2C_FIELD(vt, s16 *, 0x10), arg0);
    return arg0;
}

void fn_802CB4E4(void *arg0, void *arg1) {
    M2C_UNK fn_80248A10(void *, void *, s32);
    fn_80248A10(arg0, arg1, 0x40);
}

void fn_802CB508(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

void fn_802CB510(void *arg0, s32 arg1) {
    M2C_UNK fn_8039A610(void *, s32, s32);
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    fn_8039A610((u8 *)arg0 + 0x48, arg1, 0);
}

void fn_802CB544(void) {

}

s32 fn_802CB548(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

s32 fn_802CB550(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

void *fn_802CB558(void *arg0, void *arg1, s32 arg2) {
    M2C_UNK fn_8039ABB0(void *, void *);
    u8 *src = M2C_FIELD(arg1, u8 **, 0x48) + arg2 * 0x50;
    f32 *d = (f32 *)((u8 *)arg0 + 4);
    f32 *s = (f32 *)(src + 4);
    M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(src, s32 *, 0);
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    fn_8039ABB0((u8 *)arg0 + 0x10, src + 0x10);
    return arg0;
}

void fn_802CB5C4(void *arg0, void *arg1) {
    void fn_802D20E8(void *);
    if ((void *) M2C_FIELD(arg0, void **, 0) == arg1) {
        M2C_FIELD(arg0, void **, 0) = (void *) M2C_FIELD(arg1, void **, 8);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 4), void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
    }
    if ((void *) M2C_FIELD(arg0, void **, 4) == arg1) {
        M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg1, void **, 4);
    } else {
        M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 4) = (void *) M2C_FIELD(arg1, void **, 4);
    }
    fn_802D20E8(arg1);
}

void fn_802CB634(void *arg0, s32 arg1) {
    void *fn_802D1FC8(M2C_UNK);
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_802D1FC8(0xC);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0) = arg1;
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r3, void **, 8) = temp_r9;
        if (temp_r9 != NULL) {
            M2C_FIELD(temp_r9, void **, 4) = temp_r3;
        } else {
            M2C_FIELD(arg0, void **, 4) = temp_r3;
        }
        M2C_FIELD(temp_r3, s32 *, 4) = 0;
        M2C_FIELD(arg0, void **, 0) = temp_r3;
    }
}

void fn_802CB69C(void *arg0, s32 arg1) {
    void *fn_802D1FC8(M2C_UNK);
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_802D1FC8(0xC);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0) = arg1;
        temp_r9 = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_r3, void **, 4) = temp_r9;
        if (temp_r9 != NULL) {
            M2C_FIELD(temp_r9, void **, 8) = temp_r3;
        } else {
            M2C_FIELD(arg0, void **, 0) = temp_r3;
        }
        M2C_FIELD(temp_r3, s32 *, 8) = 0;
        M2C_FIELD(arg0, void **, 4) = temp_r3;
    }
}

void fn_802CB8D4(void *arg0) {
    extern void fn_802D20E8(void *);
    EMat4Node *node;
    EMat4Node *next;

    node = M2C_FIELD(arg0, EMat4Node **, 4);
    while (EMat4Node_Valid(node)) {
        next = M2C_FIELD(node, EMat4Node **, 4);
        fn_802D20E8(node);
        node = next;
    }
    M2C_FIELD(arg0, void **, 4) = NULL;
    M2C_FIELD(arg0, void **, 0) = NULL;
}

void fn_802CB930(void *arg0) {
    extern void *fn_802D0AB8(void *);
    EMat4Node *n;

    for (n = M2C_FIELD(arg0, EMat4Node **, 4); EMat4Node_Valid(n); n = M2C_FIELD(n, EMat4Node **, 4)) {
        void *value = M2C_FIELD(n, void **, 0);
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), value);
    }
    fn_802CB8D4(arg0);
}

void fn_802CBB94(void) {

}

f32 *fn_802CC848(f32 *out, f32 *axis, f32 angle) {
    extern f32 lbl_803F0194[];
    f32 fn_80243694(f32);
    f32 fn_802434CC(f32);
    f32 half = angle * lbl_803F0194[0];
    f32 s = fn_80243694(half);
    f32 c = fn_802434CC(half);

    out[0] = axis[0] * s;
    out[1] = axis[1] * s;
    out[2] = axis[2] * s;
    out[3] = c;
    return out;
}

void *fn_802CC9A0(void *arg0, char *arg1) {
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

void *fn_802CCA4C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 8) = lbl_803FD274;
    return arg0;
}

void *fn_802CCA6C(void *arg0, void *arg1) {
    void fn_802CD66C(void *, void *, s32);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 8) = lbl_803FD274;
    fn_802CD66C(arg0, arg1, 1);
    return arg0;
}

void fn_802CCAB8(void *arg0, void *arg1) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg1, void **, 4);
    M2C_FIELD(arg1, void **, 4) = M2C_FIELD(temp_r11, void **, 0);
    temp_r10 = M2C_FIELD(temp_r11, void **, 0);
    if (temp_r10 != lbl_803FD274) {
        M2C_FIELD(temp_r10, void **, 8) = arg1;
    }
    if (temp_r11 != lbl_803FD274) {
        M2C_FIELD(temp_r11, void **, 8) = M2C_FIELD(arg1, void **, 8);
    }
    temp_r9 = M2C_FIELD(arg1, void **, 8);
    if (temp_r9 != NULL) {
        if (arg1 == M2C_FIELD(temp_r9, void **, 0)) {
            M2C_FIELD(temp_r9, void **, 0) = temp_r11;
        } else {
            M2C_FIELD(temp_r9, void **, 4) = temp_r11;
        }
    } else {
        M2C_FIELD(arg0, void **, 8) = temp_r11;
    }
    M2C_FIELD(temp_r11, void **, 0) = arg1;
    if (arg1 != lbl_803FD274) {
        M2C_FIELD(arg1, void **, 8) = temp_r11;
    }
}

void fn_802CCB34(void *arg0, void *arg1) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg1, void **, 0);
    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(temp_r11, void **, 4);
    temp_r10 = M2C_FIELD(temp_r11, void **, 4);
    if (temp_r10 != &lbl_803FD274) {
        M2C_FIELD(temp_r10, void **, 8) = arg1;
    }
    if (temp_r11 != &lbl_803FD274) {
        M2C_FIELD(temp_r11, void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
    }
    temp_r9 = M2C_FIELD(arg1, void **, 8);
    if (temp_r9 != NULL) {
        if (arg1 == (void *) M2C_FIELD(temp_r9, void **, 4)) {
            M2C_FIELD(temp_r9, void **, 4) = temp_r11;
        } else {
            M2C_FIELD(temp_r9, void **, 0) = temp_r11;
        }
    } else {
        M2C_FIELD(arg0, void **, 8) = temp_r11;
    }
    M2C_FIELD(temp_r11, void **, 4) = arg1;
    if (arg1 != &lbl_803FD274) {
        M2C_FIELD(arg1, void **, 8) = temp_r11;
    }
}

s32 fn_802CCCF8(void *arg0, s32 arg1) {
    void fn_802CD440(void *, s32, s32 *);
    s32 sp8;

    fn_802CD440(arg0, arg1, &sp8);
    return sp8;
}

void *fn_802CCD80(void *arg0, s32 arg1);
void *fn_802CCD20(void *arg0, s32 arg1) {
    char *fn_802CCEEC(void *, void *, s32, s32);
    char *temp_r3;

    temp_r3 = fn_802CCD80(arg0, arg1);
    if (temp_r3 != NULL && M2C_FIELD(temp_r3, s32 *, 0x18) == arg1) {
        return temp_r3 + 0x1C;
    }
    return fn_802CCEEC(arg0, temp_r3, arg1, 0) + 0x1C;
}

void *fn_802CCD80(void *arg0, s32 arg1) {
    extern char lbl_803FD274[];
    void *var_r11;
    void *var_r3;
    s32 temp_r0;

    var_r3 = M2C_FIELD(arg0, void **, 8);
    var_r11 = NULL;
    while (var_r3 != lbl_803FD274) {
        temp_r0 = M2C_FIELD(var_r3, s32 *, 0x18);
        if (arg1 == temp_r0) {
            return var_r3;
        }
        var_r11 = var_r3;
        if ((u32) arg1 < (u32) temp_r0) {
            var_r3 = M2C_FIELD(var_r11, void **, 0);
        } else {
            var_r3 = M2C_FIELD(var_r11, void **, 4);
        }
    }
    return var_r11;
}

void *fn_802CCDC8(void *arg0, u32 arg1) {
    extern char lbl_803FD274[];
    void *var_r3;
    void *var_r0;

    var_r0 = M2C_FIELD(arg0, void **, 8);
    var_r3 = NULL;
    while (var_r0 != lbl_803FD274) {
        var_r3 = var_r0;
        if (arg1 < M2C_FIELD(var_r3, u32 *, 0x18)) {
            var_r0 = M2C_FIELD(var_r3, void **, 0);
        } else {
            var_r0 = M2C_FIELD(var_r3, void **, 4);
        }
    }
    return var_r3;
}

void *fn_802CCE08(void *self, s32 key, void *value) {
    void *fn_802CCEEC(void *, void *, s32, void *);
    char *n;

    n = fn_802CCD80(self, key);
    if (n != NULL && M2C_FIELD(n, s32 *, 0x18) == key) {
        M2C_FIELD(n, void **, 0x1C) = value;
        return n;
    }
    return fn_802CCEEC(self, n, key, value);
}

s32 fn_802CD218(void *arg0, s32 arg1) {
    void *fn_802CD440(void *, s32, s32 *);
    void fn_802CD260(void *, void *);
    void *node;

    node = fn_802CD440(arg0, arg1, 0);
    if (node != NULL) {
        fn_802CD260(arg0, node);
        return 1;
    }
    return 0;
}

EMat4Node *fn_802CD498(void *self, s32 key, s32 *out) {
    EMat4Node *fn_802CD440(void *, s32, s32);
    char *n;
    char *next;

    n = (char *)fn_802CD440(self, key, 0);
    if (n != NULL) {
    loop:
        next = M2C_FIELD(n, char **, 0xC);
        if (next != NULL && M2C_FIELD(next, s32 *, 0x18) == key) {
            n = next;
            goto loop;
        }
        if (out != NULL) {
            *out = M2C_FIELD(n, s32 *, 0x1C);
        }
    }
    return (EMat4Node *)n;
}

EMat4Node *fn_802CD504(void *self, EMat4Node *n, void **out) {
    EMat4Node *next = n->next;

    if (next != NULL && next->key == n->key) {
        if (out != NULL) {
            *out = next->value;
        }
        return next;
    }
    return NULL;
}

void fn_802CD53C(EMat4Node **list) {
    extern void fn_802D20E8(void *);
    void *p;
    void *next;

    p = M2C_FIELD(list, void **, 4);
    while (p != NULL) {
        next = M2C_FIELD(p, void **, 0xC);
        fn_802D20E8(p);
        p = next;
    }
    M2C_FIELD(list, char **, 8) = lbl_803FD274;
    M2C_FIELD(list, void **, 4) = NULL;
    M2C_FIELD(list, s32 *, 0) = 0;
}

void fn_802CD59C(EMat4Node **list) {
    extern void *fn_802D0AB8(void *);
    EMat4Node *n;

    for (n = *list; EMat4Node_Valid(n); n = n->next) {
        void *value = n->value;
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), value);
    }
    fn_802CD53C(list);
}

s32 fn_802CD600(void **arg0) {
    s32 var_r9;
    void *var_r3;

    var_r3 = *arg0;
    var_r9 = 0;
    if (var_r3 != NULL) {
        do {
            var_r3 = M2C_FIELD(var_r3, void **, 0x10);
            var_r9 += 1;
        } while (var_r3 != NULL);
    }
    return var_r9;
}

void *fn_802CD66C(void *self, EMat4Node **other, s32 overwrite);
void *fn_802CD628(EMat4Node **self, EMat4Node **other) {
    EMat4Node **src = other;

    fn_802CD53C(self);
    fn_802CD66C(self, src, 1);
    return self;
}

void *fn_802CD66C(void *self, EMat4Node **other, s32 overwrite) {
    EMat4Node *n;

    for (n = *other; EMat4Node_Valid(n); n = n->next) {
        s32 key = n->key;
        void *value = n->value;
        if (overwrite) {
            fn_802CCE6C(self, key, value, 1);
        } else {
            fn_802CCE08(self, key, value);
        }
    }
}

s32 fn_802CD6F4(EMat4Node **a, EMat4Node **b) {
    EMat4Node *na = *a;
    EMat4Node *nb = *b;

    for (; EMat4Node_Valid(na); na = na->next, nb = nb->next) {
        if (!EMat4Node_Valid(nb) || na->key != nb->key || na->value != nb->value) {
            return 0;
        }
    }
    return !EMat4Node_Valid(nb);
}

void *fn_802CD778(void *arg0) {
    extern char lbl_80419400[];
    s32 i;

    M2C_FIELD(arg0, char **, 0) = lbl_80419400;
    for (i = 0x100; i != 0; i--) {
    }
    M2C_FIELD(arg0, s16 *, 0x108A) = 1;
    M2C_FIELD(arg0, s32 *, 0x1090) = 0;
    M2C_FIELD(arg0, s32 *, 0x108C) = 0;
    return arg0;
}

void fn_802CD7B0(void *arg0, s32 flags) {
    extern char lbl_80419400[];
    extern void fn_802CD800(void *);
    extern void *fn_802D0AB8(void *);

    M2C_FIELD(arg0, char **, 0) = lbl_80419400;
    fn_802CD800(arg0);
    if (flags & 1) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), arg0);
    }
}

void fn_802CDB1C(void *arg0) {
    fn_802D1A00(fn_802D0C44(arg0), arg0);
}

void fn_802CDE04(void *self, u8 *color) {
    void fn_802CDE6C(void *, u8 *, f32 *);
    void fn_802CE234(void *, f32 *, s32);
    struct {
        u8 bgr[8];
        f32 buf[4];
    } s;
    u32 c = *(u32 *)color;

    s.bgr[0] = color[3];
    s.bgr[1] = c >> 8;
    s.bgr[2] = c >> 16;
    fn_802CDE6C(self, s.bgr, s.buf);
    fn_802CE234(self, s.buf, M2C_FIELD(color, s32 *, 4));
}

void fn_802CE738(void *arg0) {
    M2C_UNK fn_802CE7C8(void *, s32);
    s32 var_r4;
    u16 temp_r9;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x10A8) > (u32) M2C_FIELD(arg0, u32 *, 0x1098)) {
        M2C_FIELD(arg0, s32 *, 0x10B0) = 1;
        do {
            temp_r9 = M2C_FIELD(arg0, u16 *, 0x1088);
            M2C_FIELD(arg0, s32 *, 0x10AC) = (s32) M2C_FIELD(arg0, s32 *, 0x10B0);
            M2C_FIELD(arg0, s32 *, 0x10B0) = -1;
            M2C_FIELD(arg0, u32 *, 0x10A8) = 0U;
            if ((s32) temp_r9 != 0) {
                var_r4 = M2C_FIELD(arg0, s32 *, 0x108C) + (temp_r9 * 0x38);
            } else {
                var_r4 = 0;
            }
            fn_802CE7C8(arg0, var_r4);
        } while ((u32) M2C_FIELD(arg0, u32 *, 0x10A8) > (u32) M2C_FIELD(arg0, u32 *, 0x1098));
    }
}

s32 fn_802CE9C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10A8);
}

s32 fn_802CE9D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1098);
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
void *fn_802CED98(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

extern void *fn_802D0AB8(void *);
void fn_802CEE44(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802CEF48(void *arg0, s32 flags) {
    extern char lbl_80419450[];
    extern void fn_802CEF98(void *);
    extern void *fn_802D0AB8(void *);

    M2C_FIELD(arg0, char **, 0) = lbl_80419450;
    fn_802CEF98(arg0);
    if (flags & 1) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), arg0);
    }
}

void fn_802CF2BC(void *arg0) {
    fn_802D1A00(fn_802D0C44(arg0), arg0);
}

void fn_802D00D4(void *arg0) {
    M2C_UNK fn_802D0164(void *, s32);
    s32 var_r4;
    u16 temp_r9;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x1024) > (u32) M2C_FIELD(arg0, u32 *, 0x1014)) {
        M2C_FIELD(arg0, s32 *, 0x102C) = 1;
        do {
            temp_r9 = M2C_FIELD(arg0, u16 *, 0x1004);
            M2C_FIELD(arg0, s32 *, 0x1028) = (s32) M2C_FIELD(arg0, s32 *, 0x102C);
            M2C_FIELD(arg0, s32 *, 0x102C) = -1;
            M2C_FIELD(arg0, u32 *, 0x1024) = 0U;
            if ((s32) temp_r9 != 0) {
                var_r4 = M2C_FIELD(arg0, s32 *, 0x1008) + (temp_r9 * 0x48);
            } else {
                var_r4 = 0;
            }
            fn_802D0164(arg0, var_r4);
        } while ((u32) M2C_FIELD(arg0, u32 *, 0x1024) > (u32) M2C_FIELD(arg0, u32 *, 0x1014));
    }
}

s32 fn_802D0334(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1024);
}

extern void *fn_802D0AB8(void *);
void fn_802D0894(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D0960(void *arg0, f32 *src, s16 *dst) {
    dst[0] = src[0] * lbl_803F02B0[0];
    dst[1] = src[1] * lbl_803F02B0[0];
    dst[2] = src[2] * lbl_803F02B0[0];
    dst[3] = src[3] * lbl_803F02B0[0];
}

void fn_802D09E0(void *arg0, u16 *src, f32 *dst) {
    dst[0] = (u32)src[0] * lbl_803F02C0[0];
    dst[1] = (u32)src[1] * lbl_803F02C0[0];
    dst[2] = (u32)src[2] * lbl_803F02C0[0];
    dst[3] = (u32)src[3] * lbl_803F02C0[0];
}

void fn_802D0A8C(void) {
    fn_802D94C0(lbl_8044490C, 2);
}

void *fn_802D0AB8(void *unused) {
    if (lbl_80496150 == 0) {
        fn_802D0D30(lbl_8044490C, lbl_803F02C8);
        lbl_80496150 = 1;
        fn_80246D44(fn_802D0A8C);
    }
    return lbl_8044490C;
}

extern u8 lbl_804450CC[];
void fn_802D0B10(void);
void fn_802D0B10(void) {
    fn_802D94C0(lbl_804450CC, 2);
}

extern u8 lbl_8044588C[];
void fn_802D0B94(void);
void fn_802D0B94(void) {
    fn_802D94C0(lbl_8044588C, 2);
}

extern u8 lbl_8044604C[];
void fn_802D0C18(void);
void fn_802D0C18(void) {
    fn_802D94C0(lbl_8044604C, 2);
}

extern u8 lbl_803F02FC[];
extern s32 lbl_8049615C;
void *fn_802D0C44(void *unused) {
    if (lbl_8049615C == 0) {
        fn_802D0D30(lbl_8044604C, lbl_803F02FC);
        lbl_8049615C = 1;
        fn_80246D44(fn_802D0C18);
    }
    return lbl_8044604C;
}

extern u8 lbl_8044680C[];
void fn_802D0C9C(void);
void fn_802D0C9C(void) {
    fn_802D94C0(lbl_8044680C, 2);
}

M2C_UNK *fn_802D0CC8(void) {
    M2C_UNK fn_802D9300(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    extern s32 lbl_80496160;
    if ((s32) lbl_80496160 == 0) {
        fn_802D9300(&lbl_8044680C, 0, 0, 1, 0, 0, 0);
        lbl_80496160 = 1;
        fn_80246D44(&fn_802D0C9C);
    }
    return &lbl_8044680C;
}

s32 fn_802D0F64(void *arg0) {
    s32 fn_802DD058(void *);
    return fn_802DD058(arg0) != 0;
}

s32 fn_802D0F94(void) {
    return 0;
}

void fn_802D0F9C(void) {

}

s32 fn_802D0FFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x52C);
}

s32 fn_802D118C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x530);
}

s32 fn_802D1194(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x534);
}

s32 fn_802D119C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x538);
}

void fn_802D11A4(void) {

}

s32 fn_802D12C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x528);
}

void fn_802D12CC(void *arg0) {
    fn_802D1A00(arg0, M2C_FIELD(arg0, void **, 0x7BC));
    M2C_FIELD(arg0, void **, 0x7BC) = 0;
    fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), (void *)lbl_80494DCC);
    lbl_80494DCC = 0;
}

s32 fn_802D1404(void *arg0, u32 arg1) {
    if (arg1 < 0x50) {
        return ((struct { u8 pad[0x53C]; s32 arr[0x50]; } *)arg0)->arr[arg1];
    }
    return 0;
}

s32 fn_802D1424(void *arg0) {
    s32 a, b, c;
    a = fn_802D1404(fn_802D0AB8(arg0), (u32)arg0);
    b = fn_802D1404(fn_802D0B3C(), (u32)arg0);
    c = fn_802D1404(fn_802D0BC0(), (u32)arg0);
    return a + b + c + fn_802D1404(((void *(*)(void))fn_802D0C44)(), (u32)arg0);
}

void fn_802D1494(void) {
    u8 *p = lbl_80446D34;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446D70[];
void fn_802D14C4(void) {
    u8 *p = lbl_80446D70;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446DAC[];
void fn_802D14F4(void) {
    u8 *p = lbl_80446DAC;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446DE8[];
void fn_802D1524(void) {
    u8 *p = lbl_80446DE8;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446E24[];
void fn_802D1554(void) {
    u8 *p = lbl_80446E24;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446E60[];
void fn_802D1584(void) {
    u8 *p = lbl_80446E60;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446E9C[];
void fn_802D15B4(void) {
    u8 *p = lbl_80446E9C;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446ED8[];
void fn_802D15E4(void) {
    u8 *p = lbl_80446ED8;
    fn_802CAA00(&p[0x20], 2);
}

void fn_802D1F94(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

extern void *fn_802DBBCC(void *heap, u32 size, s32 align);
void *fn_802D2058(u32 size);
void *fn_802D2058(u32 size) {
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

void fn_802D20E8(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D211C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void *fn_802D2150(u32 size);
void *fn_802D2150(u32 size) {
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

void fn_802D21E0(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void *fn_802D2308(u32 align, u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    size = (size + align - 1) & -align;
    p = fn_802D197C(heap, size, align);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, align, 0, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, align, 0, 0);
        }
    }
    return p;
}

void *fn_802D23C0(void *arg0, u8 *arg1, u32 arg2, u32 arg3) {
    u32 i;
    u8 *p;

    M2C_FIELD(arg0, u32 *, 0xC) = arg3;
    M2C_FIELD(arg0, void **, 4) = NULL;
    M2C_FIELD(arg0, u32 *, 8) = arg3 * arg2;
    M2C_FIELD(arg0, u8 **, 0) = arg1;
    M2C_FIELD(arg0, u32 *, 0x10) = arg2;
    M2C_FIELD(arg0, u32 *, 0x14) = arg3;
    p = arg1;
    for (i = 0; i < M2C_FIELD(arg0, u32 *, 0xC); i++) {
        if (p != NULL) {
            *(void **)p = M2C_FIELD(arg0, void **, 4);
            M2C_FIELD(arg0, void **, 4) = p;
        }
        p += arg2;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

s32 fn_802D2430(void *arg0) {
    extern void fn_802DEEB8(void *);
    extern void fn_802D2FD0(void *, void *);
    extern void *fn_802DF13C(void *);
    extern void fn_802DEF04(void *, s32);
    extern void fn_802D30D4(void *, s32 *);
    extern void fn_802DF214(void *);
    extern char lbl_80419730[];
    extern char lbl_804194F8[];
    u8 buf[0x30];
    s32 result;
    void *h;

    fn_802DEEB8(buf);
    fn_802D2FD0(buf, arg0);
    h = fn_802DF13C(buf);
    fn_802DEF04(buf, 2);
    M2C_FIELD(buf, s32 *, 0x20) = 0;
    M2C_FIELD(buf, char **, 0x18) = lbl_80419730;
    M2C_FIELD(buf, s32 *, 0) = 0;
    M2C_FIELD(buf, void **, 0x1C) = h;
    fn_802D30D4(buf, &result);
    M2C_FIELD(buf, char **, 0x18) = lbl_804194F8;
    fn_802DF214(h);
    return result;
}

void fn_802D24C8(void) {
    fn_802D24E8();
}

void *fn_802D259C(void *arg0) {
    if (arg0 == NULL) {
        return NULL;
    }
    if (((s32 (*)(void *))fn_802D24E8)(arg0) == 0) {
        return NULL;
    }
    return arg0;
}

void fn_802D26A0(void) {
    M2C_UNK fn_802D2634(M2C_UNK, M2C_UNK);
    fn_802D2634(1, 0xFFFF);
}

