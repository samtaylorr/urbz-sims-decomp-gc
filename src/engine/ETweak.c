/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

static inline s32 ETweakNode_Valid(void *n) {
    return n != NULL;
}

void fn_802435CC(void);

typedef struct ETweakEntry {
    s32 key;
    s32 str;
    s32 value;
} ETweakEntry;

static inline void ETweakEntry_Ctor(ETweakEntry *e, s32 key, s32 value) {
    void fn_802D39E4(void *);
    fn_802D39E4(&e->str);
    e->key = key;
    e->value = value;
}

static inline void ETweakEntry_Init(ETweakEntry *e, s32 key, s32 str, s32 value) {
    s32 fn_802D3CE4(void *, s32);
    ETweakEntry_Ctor(e, key, value);
    fn_802D3CE4(&e->str, str);
}
void fn_80313090(void *arg0, s32 arg1) {
    s32 fn_802D118C(s32);
    s32 fn_802D1194(s32);
    s32 fn_802D119C(s32);
    s32 fn_802D12C4(s32);
    s32 fn_802DCFE0(s32);
    M2C_FIELD(arg0, s32 *, 0) = fn_802D12C4(arg1);
    M2C_FIELD(arg0, u32 *, 4) = (u32) ((u32) (fn_802DCFE0(arg1) + 0x3FF) >> 0xAU);
    M2C_FIELD(arg0, u32 *, 8) = (u32) ((u32) (fn_802D118C(arg1) + 0x3FF) >> 0xAU);
    M2C_FIELD(arg0, u32 *, 0xC) = (u32) ((u32) (fn_802D1194(arg1) + 0x3FF) >> 0xAU);
    M2C_FIELD(arg0, s32 *, 0x10) = fn_802D119C(arg1);
}

s32 fn_80313110(s32 arg0) {
    s32 var_r3;
    s32 var_r9;

    var_r3 = arg0;
    var_r9 = -1;
    do {
        var_r9 += 1;
        var_r3 = var_r3 >> 1;
    } while (var_r3 != 0);
    return var_r9;
}

s32 fn_803131C4(f32 x) {
    extern const f32 lbl_803F2410[];
    extern const f32 lbl_803F2414[];
    s32 sign;
    u32 n;
    u32 i;
    s32 c;

    if (x < lbl_803F2410[0]) {
        x = lbl_803F2410[0] / x;
        sign = -1;
    } else {
        sign = 1;
    }
    n = (s32)(x + lbl_803F2414[0]);
    c = 0;
    for (i = 1; i < n; i <<= 1) {
        c++;
    }
    return sign * c;
}

s32 fn_8031322C(u32 n) {
    u32 i;
    s32 c;

    c = 0;
    for (i = 1; i < n; i <<= 1) {
        c++;
    }
    return c;
}

void fn_80313298(s32 *p, s32 val, u32 size) {
    s32 *end = (s32 *)((u8 *)p + (size & ~3));
    while (p != end) {
        *p++ = val;
    }
}

f32 fn_803132BC(f32 cur, f32 target, f32 rate, f32 eps) {
    extern f32 lbl_80494E08;
    extern const f32 lbl_803F241C[];
    extern const f32 lbl_803F2420[];
    f32 t;
    f32 r;
    f32 d;
    if (target == cur) {
        return cur;
    }
    t = rate * lbl_80494E08;
    if (t > lbl_803F241C[0]) {
        t = lbl_803F241C[0];
    }
    r = (cur - target) * t + target;
    d = r - cur;
    if ((d >= lbl_803F2420[0] ? d : -d) < eps) {
        return cur;
    }
    return r;
}

f32 fn_803133E8(f32 a, f32 b) {
    extern const f32 lbl_803F2430[];
    extern const f32 lbl_803F2434[];
    extern const f32 lbl_803F2438[];
    f32 k = lbl_803F2430[0];
    f32 d;
    while (a > k) {
        a -= k;
    }
    while (a < lbl_803F2434[0]) {
        a += k;
    }
    while (b > k) {
        b -= k;
    }
    while (b < lbl_803F2434[0]) {
        b += k;
    }
    d = b - a;
    if (d < lbl_803F2434[0]) {
        d = -d;
    }
    if (d > lbl_803F2438[0]) {
        d = k - d;
    }
    return d;
}

f32 fn_8031347C(f32 a, f32 b) {
    extern const f32 lbl_803F243C[];
    extern const f32 lbl_803F2440[];
    extern const f32 lbl_803F2444[];
    extern const f32 lbl_803F2448[];
    f32 k = lbl_803F243C[0];
    f32 d;
    while (a > k) {
        a -= k;
    }
    while (a < lbl_803F2440[0]) {
        a += k;
    }
    while (b > k) {
        b -= k;
    }
    while (b < lbl_803F2440[0]) {
        b += k;
    }
    d = b - a;
    if (d < lbl_803F2444[0]) {
        d += k;
    } else if (d > lbl_803F2448[0]) {
        d -= k;
    }
    return d;
}

f32 fn_80313514(f32 a, f32 b, f32 t) {
    extern const f32 lbl_803F244C[];
    return b * t + (lbl_803F244C[0] - t) * a;
}

f32 fn_8031352C(s32 *arg0, f32 x) {
    extern const f32 lbl_803F2450[];
    extern const f32 lbl_803F2454[];
    extern const f32 lbl_803F2458[];
    extern const f32 lbl_803F245C[];
    extern const f32 lbl_803F2460[];
    while (x > lbl_803F2450[0]) {
        x -= lbl_803F2454[0];
    }
    while (x < lbl_803F2458[0]) {
        x += lbl_803F2454[0];
    }
    if (x < lbl_803F245C[0]) {
        *arg0 ^= 1;
        x += lbl_803F2450[0];
    } else if (x > lbl_803F2460[0]) {
        *arg0 ^= 1;
        x -= lbl_803F2450[0];
    }
    return x;
}

void fn_803135D4(void) {
    fn_802435CC();
}

f32 fn_803135F4(s32 arg0) {
    extern const f32 lbl_803F2470[];
    extern const f32 lbl_803F2474[];
    s32 n = (arg0 << 13) ^ arg0;

    return lbl_803F2474[0] - (f32)((n * (n * n * 15731 + 789221) + 1376312589) & 0x7FFFFFFF) * lbl_803F2470[0];
}

void *fn_80313F10(void *arg0) {
    void fn_803140EC(void *);
    void fn_80314124(void *, s32);
    fn_803140EC(arg0);
    fn_80314124(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    return arg0;
}

void *fn_80313F58(void *arg0, s32 arg1) {
    void fn_803140EC(void *);
    void fn_80314124(void *, s32);
    fn_803140EC(arg0);
    fn_80314124(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    return arg0;
}

M2C_UNK fn_80313FA0(void *arg0, s32 arg1) {
    extern u8 *lbl_80494FC4;
    extern u8 lbl_80452418[];
    void fn_80314560(void *);
    u8 *obj = lbl_80494FC4;
    u8 *vt = *(u8 **)obj;
    M2C_FIELD(arg0, f64 *, 8) = (*(f32 (**)(void *, void *))(vt + 0x2C))(obj + *(s16 *)(vt + 0x28), lbl_80452418);
    if (arg1 == 0) {
        fn_80314560(arg0);
    }
}

void fn_803140DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + arg1);
}

void fn_803140EC(void *arg0) {
    extern const f64 lbl_803F2520[];
    extern const f64 lbl_803F2528[];
    M2C_FIELD(arg0, f64 *, 0x18) = lbl_803F2520[0];
    M2C_FIELD(arg0, f64 *, 8) = lbl_803F2528[0];
    M2C_FIELD(arg0, f64 *, 0) = lbl_803F2520[0];
    M2C_FIELD(arg0, f64 *, 0x20) = lbl_803F2520[0];
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}

void fn_8031411C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

void fn_80314124(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
}

void fn_8031412C(void *arg0) {
    extern const f64 lbl_803F2580[];
    extern const f64 lbl_803F2588[];
    extern char lbl_803F2574[];
    extern char lbl_803F2530[];
    void fn_80378278(const char *, ...);
    f64 v;
    s32 n;
    char *name;

    n = M2C_FIELD(arg0, s32 *, 0x2C);
    if (n != 0) {
        v = M2C_FIELD(arg0, f64 *, 0x18) / (f64)n;
    } else {
        v = lbl_803F2580[0];
    }
    name = M2C_FIELD(arg0, char **, 0x28);
    if (name == NULL) {
        name = lbl_803F2574;
    }
    fn_80378278(lbl_803F2530, name, M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, f64 *, 0) * lbl_803F2588[0], v * lbl_803F2588[0], M2C_FIELD(arg0, f64 *, 0x20) * lbl_803F2588[0]);
}

void fn_80314534(void *arg0) {
    M2C_UNK fn_80313FA0(void *, s32);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    fn_80313FA0(arg0, 1);
}

void fn_80314560(void *arg0) {
    M2C_UNK fn_80314004();
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    fn_80314004();
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) - 1);
}

void fn_803145A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
}

f32 fn_803145A8(void *arg0) {
    extern const f64 lbl_803F25F0[];
    extern const f64 lbl_803F25F8[];
    f64 v;
    s32 n;

    n = M2C_FIELD(arg0, s32 *, 0x2C);
    if (n != 0) {
        v = M2C_FIELD(arg0, f64 *, 0x18) / (f64)n;
    } else {
        v = lbl_803F25F0[0];
    }
    return v * lbl_803F25F8[0];
}

f32 fn_80314604(void *arg0) {
    extern const f64 lbl_803F2600[];
    return M2C_FIELD(arg0, f64 *, 0) * lbl_803F2600[0];
}

M2C_UNK fn_8031461C(void *arg0) {
    M2C_UNK fn_802D39E4(void *);
    M2C_UNK fn_80369A74(void *);
    extern const f32 lbl_803F2608[];
    s8 *list;

    list = (s8 *)arg0 + 0xC;
    M2C_FIELD(list, s32 *, 4) = 0;
    M2C_FIELD(list, s32 *, 0) = 0;
    M2C_FIELD(list, s32 *, 8) = 1;
    fn_802D39E4((s8 *)arg0 + 0x18);
    fn_802D39E4((s8 *)arg0 + 0x20);
    list = (s8 *)arg0 + 0x24;
    M2C_FIELD(list, s32 *, 4) = 0;
    M2C_FIELD(list, s32 *, 0) = 0;
    M2C_FIELD(list, s32 *, 8) = 1;
    fn_80369A74((s8 *)arg0 + 0x30);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, f32 *, 4) = lbl_803F2608[0];
    M2C_FIELD(arg0, f32 *, 0) = lbl_803F2608[0];
    return (M2C_UNK)arg0;
}

s32 fn_80314784(void *arg0) {
    M2C_UNK fn_80314808(void *);
    extern const f32 lbl_803F260C[];
    extern f32 lbl_80494E08;
    s32 done;
    f32 limit;
    f32 t;

    if (*M2C_FIELD(arg0, u8 **, 0x18) == 0) {
        return 0;
    }
    limit = M2C_FIELD(arg0, f32 *, 4);
    done = 0;
    if (limit != lbl_803F260C[0]) {
        t = M2C_FIELD(arg0, f32 *, 0) + lbl_80494E08;
        M2C_FIELD(arg0, f32 *, 0) = t;
        if (t > limit) {
            M2C_FIELD(arg0, f32 *, 0) = lbl_803F260C[0];
            done = 1;
        }
    }
    if (done) {
        fn_80314808(arg0);
    }
    return done;
}

void fn_80314A18(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_802D1FC8(M2C_UNK);
    M2C_UNK fn_802D39E4(void *);
    M2C_UNK fn_802D3CE4(void *, s32);
    M2C_UNK fn_802CB69C(void *, void *);
    s32 *obj;

    obj = (s32 *)fn_802D1FC8(0xC);
    fn_802D39E4(&obj[1]);
    obj[0] = arg1;
    obj[2] = arg3;
    fn_802D3CE4(&obj[1], arg2);
    fn_802CB69C((s8 *)arg0 + 0xC, obj);
    M2C_FIELD(arg0, s32 *, 8)++;
}

void fn_80314B08(void *arg0, s32 arg1) {
    M2C_UNK fn_802CB5C4(void *, void *);
    M2C_UNK fn_802D20E8(void *);
    M2C_UNK fn_802D39F0(void *, s32);
    s32 *obj;
    void *node;
    void *next;

    node = M2C_FIELD(arg0, void **, 0xC);
    if (node != NULL) {
        do {
            obj = M2C_FIELD(node, s32 **, 0);
            next = M2C_FIELD(node, void **, 8);
            if (obj[0] == arg1) {
                fn_802CB5C4((s8 *)arg0 + 0xC, node);
                if (obj != NULL) {
                    fn_802D39F0(&obj[1], obj[1]);
                    fn_802D20E8(obj);
                }
                M2C_FIELD(arg0, s32 *, 8)--;
                return;
            }
            node = next;
        } while (node != NULL);
    }
}

void fn_80314B90(void *arg0) {
    M2C_UNK fn_802CB8D4(void *);
    M2C_UNK fn_802D20E8(void *);
    M2C_UNK fn_802D39F0(void *, s32);
    s8 *list;
    void *node;
    void *next;
    s32 *obj;

    list = (s8 *)arg0 + 0xC;
    next = M2C_FIELD(list, void **, 4);
    while (ETweakNode_Valid(node = next)) {
        obj = M2C_FIELD(node, s32 **, 0);
        next = M2C_FIELD(node, void **, 4);
        if (M2C_FIELD(list, s32 *, 8) != 0 && obj != NULL) {
            fn_802D39F0(&obj[1], obj[1]);
            fn_802D20E8(obj);
        }
    }
    fn_802CB8D4(list);
}

s32 fn_80314C14(s32 arg0, s32 arg1) {
    extern u8 lbl_8045A034[];
    M2C_UNK fn_8031461C(void *);
    M2C_UNK fn_803146A0(void *, s32);
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8031461C(lbl_8045A034);
        } else {
            fn_803146A0(lbl_8045A034, 2);
        }
    }
}

void fn_80314C68(void) {
    M2C_UNK fn_80314C14(M2C_UNK, M2C_UNK);
    fn_80314C14(1, 0xFFFF);
}

void fn_80314C94(void) {
    s32 fn_80314C14(s32, s32);
    fn_80314C14(0, 0xFFFF);
}

