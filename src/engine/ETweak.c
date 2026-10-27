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

static inline void ETweakEntry_Init(ETweakEntry *e, s32 key, s32 str, s32 value) {
    void fn_802D39E4(void *);
    void fn_802D3CE4(void *, s32);
    fn_802D39E4(&e->str);
    e->key = key;
    e->value = value;
    fn_802D3CE4(&e->str, str);
}

static inline void ETweakEntry_Ctor(ETweakEntry *e, s32 key, s32 value) {
    void fn_802D39E4(void *);
    fn_802D39E4(&e->str);
    e->key = key;
    e->value = value;
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

void fn_803135D4(void) {
    fn_802435CC();
}

void fn_803140DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + arg1);
}

void fn_8031411C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

void fn_80314124(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
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
    M2C_UNK fn_802CB69C(void *, void *);
    ETweakEntry *obj;

    obj = fn_802D1FC8(0xC);
    ETweakEntry_Init(obj, arg1, arg2, arg3);
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

