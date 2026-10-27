/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct EMat4Node {
    u8 pad0[0x10];
    struct EMat4Node *next;
    u8 pad14[0x4];
    s32 key;
    void *value;
} EMat4Node;


s32 fn_80364E64(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_r11 == NULL) {
        return 0;
    }
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x28);
    return M2C_FIELD(temp_r9, s32 (**)(void *), 0x24)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x20));
}

void fn_80364EAC(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK fn_80364D84();
    void *temp_r9;

    fn_80364D84();
    M2C_FIELD(arg0, s32 *, 0x24) = arg4;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    if (arg1 != NULL) {
        temp_r9 = M2C_FIELD(arg1, void **, 0x28);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, M2C_UNK), 0x2C)(arg1 + M2C_FIELD(temp_r9, s16 *, 0x28), arg3, 0);
    }
}

void fn_80364F1C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

s32 fn_80364F28(s32 *self) {
    return self[7];
}

s32 fn_80364F30(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x28);
        return M2C_FIELD(temp_r9, s32 (**)(void *), 0x34)((char *)temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x30));
    }
    return 0;
}

void *fn_80364F78(void *arg0) {
    extern char lbl_80401348[];
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 8) = lbl_80401348;
    return arg0;
}

void *fn_80364F98(void *arg0, void *arg1) {
    extern char lbl_80401348[];
    void fn_80365A64(void *, void *, s32);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 8) = lbl_80401348;
    fn_80365A64(arg0, arg1, 1);
    return arg0;
}

extern char lbl_80401348[];
void fn_80364FE4(void *arg0, void *arg1) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg1, void **, 4);
    M2C_FIELD(arg1, void **, 4) = M2C_FIELD(temp_r11, void **, 0);
    temp_r10 = M2C_FIELD(temp_r11, void **, 0);
    if (temp_r10 != lbl_80401348) {
        M2C_FIELD(temp_r10, void **, 8) = arg1;
    }
    if (temp_r11 != lbl_80401348) {
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
    if (arg1 != lbl_80401348) {
        M2C_FIELD(arg1, void **, 8) = temp_r11;
    }
}

void fn_80365060(void *arg0, void *arg1) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg1, void **, 0);
    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(temp_r11, void **, 4);
    temp_r10 = M2C_FIELD(temp_r11, void **, 4);
    if (temp_r10 != &lbl_80401348) {
        M2C_FIELD(temp_r10, void **, 8) = arg1;
    }
    if (temp_r11 != &lbl_80401348) {
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
    if (arg1 != &lbl_80401348) {
        M2C_FIELD(arg1, void **, 8) = temp_r11;
    }
}

void fn_803659DC(EMat4Node **list);
void fn_803659DC(EMat4Node **list) {
    extern void fn_802D20E8(void *);
    void *p;
    void *next;

    p = M2C_FIELD(list, void **, 4);
    while (p != NULL) {
        next = M2C_FIELD(p, void **, 0xC);
        fn_802D20E8(p);
        p = next;
    }
    M2C_FIELD(list, char **, 8) = lbl_80401348;
    M2C_FIELD(list, void **, 4) = NULL;
    M2C_FIELD(list, s32 *, 0) = 0;
}

s32 fn_80365A3C(void **arg0) {
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

void *fn_80365BB4(void *arg0) {
    M2C_UNK fn_80365C8C();
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    fn_80365C8C();
    return arg0;
}

void fn_80365D3C(void *arg0) {
    M2C_UNK fn_80248488(s32, M2C_UNK, s32);
    fn_80248488(M2C_FIELD(arg0, s32 *, 8), 0, M2C_FIELD(arg0, s32 *, 0xC) * 4);
}

s32 fn_80365D6C(void *arg0, s32 arg1) {
    void fn_803660C8(void *, s32, s32 *);
    s32 sp8;

    fn_803660C8(arg0, arg1, &sp8);
    return sp8;
}

void fn_8036619C(void *arg0) {
    M2C_UNK *var_r30;
    M2C_UNK fn_802D20E8(M2C_UNK *);
    M2C_UNK *temp_r30;

    var_r30 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (var_r30 != NULL) {
        do {
            temp_r30 = *var_r30;
            fn_802D20E8(var_r30);
            var_r30 = temp_r30;
        } while (var_r30 != NULL);
    }
    M2C_FIELD(arg0, M2C_UNK **, 4) = (int)NULL;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    fn_80365D3C(arg0);
}

s32 fn_8036625C(void **arg0) {
    s32 var_r9;
    void *var_r3;

    var_r3 = *arg0;
    var_r9 = 0;
    if (var_r3 != NULL) {
        do {
            var_r3 = M2C_FIELD(var_r3, void **, 4);
            var_r9 += 1;
        } while (var_r3 != NULL);
    }
    return var_r9;
}

s32 fn_803669C0(void *arg0) {
    s32 temp_r11;
    s32 var_r3;

    temp_r11 = M2C_FIELD(arg0, s32 *, 0x34);
    var_r3 = M2C_FIELD(arg0, s32 *, 0x30);
    if (var_r3 < temp_r11) {
        var_r3 += M2C_FIELD(arg0, s32 *, 0x38);
    }
    return var_r3 - temp_r11;
}

void fn_80366A3C(s32 arg0) {
    s32 fn_80366820(s32, M2C_UNK, M2C_UNK);
    do {

    } while (fn_80366820(arg0, 0, 0) != 0);
}

void *fn_80366A7C(void *arg0) {
    void fn_803BEC78(void *);
    extern u8 lbl_8041D7D8[];
    M2C_FIELD(arg0, void **, 0x54) = lbl_8041D7D8;
    fn_803BEC78((char *)arg0 + 0x48);
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    return arg0;
}

void fn_80367258(void *arg0, void *arg1) {
    M2C_UNK fn_80248A10(void *, void *, s32);
    fn_80248A10(arg0, arg1, 0x40);
}

void fn_8036727C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

void fn_80367284(void *arg0, s32 arg1) {
    M2C_UNK fn_8039A8DC(void *, s32, s32);
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    fn_8039A8DC((u8 *)arg0 + 0x48, arg1, 0);
}

void fn_803672B8(void) {

}

s32 fn_803672BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

s32 fn_803672C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

s32 fn_80367610(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x18) * M2C_FIELD(arg0, s16 *, 0x1C)) + 0x23;
}

void *fn_80368B40(void *arg0) {
    extern char lbl_80401368[];
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 8) = lbl_80401368;
    return arg0;
}

void *fn_80368B60(void *arg0, void *arg1) {
    extern char lbl_80401368[];
    void fn_80369900(void *, void *, s32);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 8) = lbl_80401368;
    fn_80369900(arg0, arg1, 1);
    return arg0;
}

extern char lbl_80401368[];
void fn_80368BAC(void *arg0, void *arg1) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg1, void **, 4);
    M2C_FIELD(arg1, void **, 4) = M2C_FIELD(temp_r11, void **, 0);
    temp_r10 = M2C_FIELD(temp_r11, void **, 0);
    if (temp_r10 != lbl_80401368) {
        M2C_FIELD(temp_r10, void **, 8) = arg1;
    }
    if (temp_r11 != lbl_80401368) {
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
    if (arg1 != lbl_80401368) {
        M2C_FIELD(arg1, void **, 8) = temp_r11;
    }
}

void fn_80368C28(void *arg0, void *arg1) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg1, void **, 0);
    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(temp_r11, void **, 4);
    temp_r10 = M2C_FIELD(temp_r11, void **, 4);
    if (temp_r10 != &lbl_80401368) {
        M2C_FIELD(temp_r10, void **, 8) = arg1;
    }
    if (temp_r11 != &lbl_80401368) {
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
    if (arg1 != &lbl_80401368) {
        M2C_FIELD(arg1, void **, 8) = temp_r11;
    }
}

s32 fn_80368DEC(void *arg0, s32 arg1) {
    void fn_80369670(void *, s32, s32 *);
    s32 sp8;

    fn_80369670(arg0, arg1, &sp8);
    return sp8;
}

s32 fn_80368E14(s32 arg0, s32 arg1) {
    s32 fn_802D3EE8(s32, s32);
    s32 fn_80368E80();
    s32 fn_80369088(s32, s32, s32, M2C_UNK);
    s32 temp_r3;

    temp_r3 = fn_80368E80();
    if ((temp_r3 != 0) && (fn_802D3EE8(temp_r3 + 0x1C, arg1) == 0)) {
        return temp_r3 + 0x18;
    }
    return fn_80369088(arg0, temp_r3, arg1, 0) + 0x18;
}

void *fn_80368E80(void *arg0, s32 arg1) {
    s32 fn_802D3EE8(s32, s32);
    char *var_r31;
    char *var_r30;

    var_r30 = M2C_FIELD(arg0, char **, 8);
    var_r31 = NULL;
    while (var_r30 != lbl_80401368) {
        if (fn_802D3EE8((s32)(var_r30 + 0x1C), arg1) == 0) {
            return var_r30;
        }
        var_r31 = var_r30;
        var_r30 = fn_802D3EE8((s32)(var_r30 + 0x1C), arg1) > 0 ? M2C_FIELD(var_r31, char **, 0) : M2C_FIELD(var_r31, char **, 4);
    }
    return var_r31;
}

void *fn_80368F18(void *arg0, s32 arg1) {
    s32 fn_802D3EE8(s32, s32);
    char *var_r0;
    char *var_r31;

    var_r0 = M2C_FIELD(arg0, char **, 8);
    var_r31 = NULL;
    while (var_r0 != lbl_80401368) {
        var_r31 = var_r0;
        if (fn_802D3EE8((s32)(var_r31 + 0x1C), arg1) > 0) {
            var_r0 = M2C_FIELD(var_r31, char **, 0);
        } else {
            var_r0 = M2C_FIELD(var_r31, char **, 4);
        }
    }
    return var_r31;
}

s32 fn_803693D0(void *arg0, s32 arg1) {
    void *fn_80369670(void *, s32, s32 *);
    void fn_80369418(void *, void *);
    void *node;

    node = fn_80369670(arg0, arg1, 0);
    if (node != NULL) {
        fn_80369418(arg0, node);
        return 1;
    }
    return 0;
}

void fn_80369618(void *arg0, void **arg1) {
    s32 fn_803693D0(void *, s32);
    void *node;
    s32 more;

    node = *arg1;
    more = node != NULL;
    for (; more; more = node != NULL) {
        fn_803693D0(arg0, M2C_FIELD(node, s32 *, 0x1C));
        node = M2C_FIELD(node, void **, 0x10);
    }
}

void *fn_80369670(void *arg0, s32 arg1, s32 *arg2) {
    s32 fn_802D3EE8(s32, s32);
    char *node;

    node = M2C_FIELD(arg0, char **, 8);
    while (node != lbl_80401368) {
        if (fn_802D3EE8((s32)(node + 0x1C), arg1) == 0) {
            if (arg2 != NULL) {
                *arg2 = M2C_FIELD(node, s32 *, 0x18);
            }
            return node;
        }
        node = fn_802D3EE8((s32)(node + 0x1C), arg1) > 0 ? M2C_FIELD(node, char **, 0) : M2C_FIELD(node, char **, 4);
    }
    return NULL;
}

void *fn_80369724(void *self, s32 key, s32 *out) {
    void *fn_80369670(void *, s32, s32 *);
    s32 fn_802D3EE8(s32, s32);
    char *n;
    char *next;

    n = (char *)fn_80369670(self, key, 0);
    if (n != NULL) {
    loop:
        next = M2C_FIELD(n, char **, 0xC);
        if (next != NULL && fn_802D3EE8((s32)(next + 0x1C), key) == 0) {
            n = next;
            goto loop;
        }
        if (out != NULL) {
            *out = M2C_FIELD(n, s32 *, 0x18);
        }
    }
    return (void *)n;
}

s32 fn_803698D8(void **arg0) {
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

s32 fn_80369B40(void *arg0, u8 *arg1) {
    s32 var_r10;
    s8 var_r9;
    u8 *var_r4;
    u8 var_r11;

    var_r4 = arg1;
    var_r11 = *var_r4;
    var_r10 = 0;
    if ((s32) var_r11 != 0) {
        do {
            var_r9 = (s8) var_r11;
            if ((u32) (var_r9 - 0x61) <= 0x19U) {
                var_r9 -= 0x20;
            }
            var_r11 = M2C_FIELD(var_r4, u8 *, 1);
            var_r4 += 1;
            var_r10 = (var_r10 * 5) + var_r9;
        } while ((s32) var_r11 != 0);
    }
    return var_r10 & M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80369C84(void *arg0, s32 arg1) {
    void fn_8036A04C(void *, s32, s32 *);
    s32 sp8;

    fn_8036A04C(arg0, arg1, &sp8);
    return sp8;
}

s32 fn_8036A258(void **arg0) {
    s32 var_r9;
    void *var_r3;

    var_r3 = *arg0;
    var_r9 = 0;
    if (var_r3 != NULL) {
        do {
            var_r3 = M2C_FIELD(var_r3, void **, 4);
            var_r9 += 1;
        } while (var_r3 != NULL);
    }
    return var_r9;
}

void fn_8036A73C(void) {
    M2C_UNK fn_8036A6D4(M2C_UNK, M2C_UNK);
    fn_8036A6D4(1, 0xFFFF);
}

