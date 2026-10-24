/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800C3B48(void);
s32 fn_801DFF98(void **arg0, s32 arg1);

static inline s32 INVList_IsNotEmpty(void *list) {
    s32 r = 0;
    if (M2C_FIELD(list, s32 *, 8) != 0 || M2C_FIELD(list, s32 *, 0) != 0) {
        r = 1;
    }
    return r;
}
void *fn_801D7224(void **arg0, s32 arg1);
void *fn_801D7224(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = arg0[0];
    while (var_r31 != NULL && M2C_FIELD(var_r31, s32 *, 8) != arg1 && fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) != 0) {
        var_r31 = M2C_FIELD(var_r31, void **, 4);
    }
    if (var_r31 != NULL && var_r31 != arg0[0]) {
        if (var_r31 == arg0[1]) {
            arg0[1] = M2C_FIELD(var_r31, void **, 0);
        } else {
            M2C_FIELD(M2C_FIELD(var_r31, void **, 4), void **, 0) = M2C_FIELD(var_r31, void **, 0);
        }
        M2C_FIELD(M2C_FIELD(var_r31, void **, 0), void **, 4) = M2C_FIELD(var_r31, void **, 4);
        M2C_FIELD(var_r31, void **, 0) = NULL;
        M2C_FIELD(var_r31, void **, 4) = arg0[0];
        M2C_FIELD(arg0[0], void **, 0) = var_r31;
        arg0[0] = var_r31;
    }
    return var_r31;
}

s32 fn_801D72DC(void **arg0, s32 arg1) {
    M2C_UNK fn_801D6FD0(void **, void *);
    void *node;

    node = fn_801D7224(arg0, arg1);
    if (node != NULL) {
        fn_801D6FD0(arg0, node);
        return 1;
    }
    return 0;
}

s32 fn_801D7320(void **arg0, s32 arg1) {
    M2C_UNK fn_801D6FD0(void **, void *);
    s32 var_r3;
    void *temp_r31;
    void *var_r4;

    var_r4 = *arg0;
    var_r3 = 0;
    if (var_r4 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r4, void **, 4);
            if (M2C_FIELD(var_r4, s32 *, 0x14) == arg1) {
                fn_801D6FD0(arg0, var_r4);
                var_r3 = 1;
            }
            var_r4 = temp_r31;
        } while (var_r4 != NULL);
    }
    return var_r3;
}

s32 fn_801D7380(void **arg0, s32 arg1) {
    return fn_801D7224(arg0, arg1) != 0;
}

s32 fn_801D7550(void) {
    s32 fn_801D6D0C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_804945F8;
    if ((s32) lbl_804945F8 == 0) {
        fn_802D1FC8(0x10);
        lbl_804945F8 = fn_801D6D0C();
    }
    return lbl_804945F8;
}

void fn_801D758C(void) {
    extern char *lbl_804945F8;
    if (lbl_804945F8 != NULL) {
        char *vt = M2C_FIELD(lbl_804945F8, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_804945F8 + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_804945F8 = NULL;
    }
}

s32 fn_801D7D3C(void *arg0) {
    s32 fn_801D7BE0(void *);
    return fn_801D7BE0(arg0) != 0;
}

void fn_801D7D6C(void **arg0) {
    M2C_UNK fn_800B9F18(s32);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            fn_800B9F18(M2C_FIELD(var_r31, s32 *, 0x1C));
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
}

s32 fn_801D7DE4(void) {
    s32 fn_801D75D8();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_804945FC;
    if ((s32) lbl_804945FC == 0) {
        fn_802D1FC8(0x20);
        lbl_804945FC = fn_801D75D8();
    }
    return lbl_804945FC;
}

s32 fn_801D8180(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_802486DC(s32, s32);
    M2C_UNK fn_801D8080(void **, s32, s32, s32);
    M2C_UNK fn_801D80E8(void **, void *);
    s32 found;
    void *var_r31;

    if (arg0[2] != NULL) {
        var_r31 = arg0[0];
        found = 0;
        if (var_r31 != NULL) {
            do {
                if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                    fn_801D80E8(arg0, var_r31);
                    found = 1;
                }
                var_r31 = M2C_FIELD(var_r31, void **, 4);
            } while (var_r31 != NULL && found == 0);
        }
        fn_801D8080(arg0, arg1, arg2, arg3);
        return 1;
    }
    return 0;
}

s32 fn_801D8228(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    M2C_UNK fn_801D80E8(void **, void *);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            if (M2C_FIELD(var_r31, s32 *, 8) == arg1 || fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                fn_801D80E8(arg0, var_r31);
                return 1;
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
    return 0;
}

s32 fn_801D82A0(void **arg0, s32 arg1) {
    M2C_UNK fn_801D80E8(void **, void *);
    s32 var_r3;
    void *temp_r31;
    void *var_r4;

    var_r4 = *arg0;
    var_r3 = 0;
    if (var_r4 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r4, void **, 4);
            if (M2C_FIELD(var_r4, s32 *, 0x10) == arg1) {
                fn_801D80E8(arg0, var_r4);
                var_r3 = 1;
            }
            var_r4 = temp_r31;
        } while (var_r4 != NULL);
    }
    return var_r3;
}

s32 fn_801D8300(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
loop_1:
        if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
            return 1;
        }
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        if (var_r31 == NULL) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return 0;
}

s32 fn_801D8360(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = arg0[0];
    if (var_r31 != NULL) {
        do {
            if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                if (var_r31 != arg0[0]) {
                    if (var_r31 == arg0[1]) {
                        arg0[1] = M2C_FIELD(var_r31, void **, 0);
                    } else {
                        M2C_FIELD(M2C_FIELD(var_r31, void **, 4), void **, 0) = M2C_FIELD(var_r31, void **, 0);
                    }
                    M2C_FIELD(M2C_FIELD(var_r31, void **, 0), void **, 4) = M2C_FIELD(var_r31, void **, 4);
                    M2C_FIELD(var_r31, void **, 0) = NULL;
                    M2C_FIELD(var_r31, void **, 4) = arg0[0];
                    M2C_FIELD(arg0[0], void **, 0) = var_r31;
                    arg0[0] = var_r31;
                }
                return M2C_FIELD(var_r31, s32 *, 0xC);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
    return 0;
}

void fn_801D8508(s32 arg0) {
    M2C_UNK fn_801D854C(s32, s32);
    s32 var_r31;

    var_r31 = 0;
    do {
        fn_801D854C(arg0, var_r31);
        var_r31 += 1;
    } while (var_r31 <= 4);
}

s32 fn_801D8AC8(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    M2C_UNK fn_801D89B4(void **, void *);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            if (M2C_FIELD(var_r31, s32 *, 8) == arg1 || fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                fn_801D89B4(arg0, var_r31);
                return 1;
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
    return 0;
}

s32 fn_801D8BA0(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
loop_1:
        if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
            return 1;
        }
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        if (var_r31 == NULL) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return 0;
}

s32 fn_801D8F9C(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    M2C_UNK fn_801D8E88(void **, void *);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            if (M2C_FIELD(var_r31, s32 *, 8) == arg1 || fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                fn_801D8E88(arg0, var_r31);
                return 1;
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
    return 0;
}

s32 fn_801D9074(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
loop_1:
        if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
            return 1;
        }
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        if (var_r31 == NULL) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return 0;
}

s32 fn_801D9464(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    M2C_UNK fn_801D9350(void **, void *);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            if (M2C_FIELD(var_r31, s32 *, 8) == arg1 || fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
                fn_801D9350(arg0, var_r31);
                return 1;
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
    return 0;
}

s32 fn_801D953C(void **arg0, s32 arg1) {
    s32 fn_802486DC(s32, s32);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
loop_1:
        if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 8), arg1) == 0) {
            return 1;
        }
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        if (var_r31 == NULL) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return 0;
}

s32 fn_801D9680(void) {
    s32 fn_801D8810();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494604;
    if ((s32) lbl_80494604 == 0) {
        fn_802D1FC8(0x10);
        lbl_80494604 = fn_801D8810();
    }
    return lbl_80494604;
}

void fn_801D96BC(void) {
    extern char *lbl_80494604;
    if (lbl_80494604 != NULL) {
        char *vt = M2C_FIELD(lbl_80494604, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_80494604 + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_80494604 = NULL;
    }
}

s32 fn_801D9708(void) {
    s32 fn_801D8CE4();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494608;
    if ((s32) lbl_80494608 == 0) {
        fn_802D1FC8(0x10);
        lbl_80494608 = fn_801D8CE4();
    }
    return lbl_80494608;
}

void fn_801D9744(void) {
    extern char *lbl_80494608;
    if (lbl_80494608 != NULL) {
        char *vt = M2C_FIELD(lbl_80494608, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_80494608 + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_80494608 = NULL;
    }
}

s32 fn_801D9790(void) {
    s32 fn_801D91AC();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_8049460C;
    if ((s32) lbl_8049460C == 0) {
        fn_802D1FC8(0x10);
        lbl_8049460C = fn_801D91AC();
    }
    return lbl_8049460C;
}

void fn_801D97CC(void) {
    extern char *lbl_8049460C;
    if (lbl_8049460C != NULL) {
        char *vt = M2C_FIELD(lbl_8049460C, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_8049460C + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_8049460C = NULL;
    }
}

void fn_801DB8B8(void *arg0, s32 arg1) {
    extern void fn_801D7CDC(void *, s32);
    extern void fn_801D8B40(void *, void *);
    extern void fn_801D9014(void *, void *);
    extern void fn_801D94DC(void *, void *);
    extern void fn_801DC030(void *, void *);
    extern void fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80416EF8[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80416EF8;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_801DBF38(void **arg0, void *arg1) {
    if (M2C_FIELD(arg1, void **, 0) != NULL) {
        M2C_FIELD(M2C_FIELD(arg1, void **, 0), void **, 4) = M2C_FIELD(arg1, void **, 4);
    }
    if (M2C_FIELD(arg1, void **, 4) != NULL) {
        M2C_FIELD(M2C_FIELD(arg1, void **, 4), void **, 0) = M2C_FIELD(arg1, void **, 0);
    }
    if (arg0[0] == arg1) {
        arg0[0] = M2C_FIELD(arg1, void **, 4);
    }
    if (arg0[1] == arg1) {
        arg0[1] = M2C_FIELD(arg1, void **, 0);
    }
    M2C_FIELD(arg1, void **, 4) = NULL;
    M2C_FIELD(arg1, void **, 0) = NULL;
    if (arg0[2] != NULL) {
        M2C_FIELD(arg1, void **, 4) = arg0[2];
        M2C_FIELD(arg0[2], void **, 0) = arg1;
    }
    arg0[2] = arg1;
    M2C_FIELD(arg0[2], s32 *, 8) = 0x4B;
    M2C_FIELD(arg0[2], s32 *, 0xC) = 0;
    M2C_FIELD(arg0[2], s32 *, 0x10) = 0;
}

s32 fn_801DBFD4(void **arg0, s32 arg1, s32 arg2) {
    void fn_801DBE6C(void **, s32, s32);
    void *it;

    if (arg0[2] != NULL) {
        for (it = arg0[0]; it != NULL; it = M2C_FIELD(it, void **, 4)) {
            if (M2C_FIELD(it, s32 *, 0xC) == arg2) {
                return 0;
            }
        }
        fn_801DBE6C(arg0, arg1, arg2);
        return 1;
    }
    return 0;
}

s32 fn_801DC084(void **arg0, s32 arg1) {
    void fn_801DBF38(void **, void *);
    s32 fn_802486DC(s32, s32);
    s32 var_r28;
    void *temp_r30;
    void *var_r31;

    var_r31 = *arg0;
    var_r28 = 0;
    if (var_r31 != NULL) {
        do {
            temp_r30 = M2C_FIELD(var_r31, void **, 4);
            if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 0x10), arg1) == 0) {
                fn_801DBF38(arg0, var_r31);
                var_r28 = 1;
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
    return var_r28;
}

s32 fn_801DC0F4(void **arg0, s32 arg1) {
    void *it;
    void *next;

    for (it = *arg0; it != NULL; it = next) {
        next = M2C_FIELD(it, void **, 4);
        if (M2C_FIELD(it, s32 *, 0xC) == arg1) {
            return 1;
        }
    }
    return 0;
}

void fn_801DC128(void **arg0, s32 arg1) {
    void *temp_r31;
    void *temp_r9;
    void *var_r3;

    var_r3 = *arg0;
    if (var_r3 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r3, void **, 4);
            if ((s32) M2C_FIELD(var_r3, s32 *, 8) > 0x32) {
                temp_r9 = M2C_FIELD(var_r3, void **, 0xC);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0xC)(temp_r9, arg1);
            }
            var_r3 = temp_r31;
        } while (var_r3 != NULL);
    }
}

void fn_801DC18C(void **arg0, s32 arg1) {
    void *temp_r31;
    void *temp_r9;
    void *var_r3;

    var_r3 = *arg0;
    if (var_r3 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r3, void **, 4);
            if ((s32) M2C_FIELD(var_r3, s32 *, 8) <= 0x32) {
                temp_r9 = M2C_FIELD(var_r3, void **, 0xC);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0xC)(temp_r9, arg1);
            }
            var_r3 = temp_r31;
        } while (var_r3 != NULL);
    }
}

s32 fn_801DC1F0(void) {
    s32 fn_801DBD24();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494614;
    if ((s32) lbl_80494614 == 0) {
        fn_802D1FC8(0x10);
        lbl_80494614 = fn_801DBD24();
    }
    return lbl_80494614;
}

void fn_801DC22C(void) {
    extern char *lbl_80494614;
    if (lbl_80494614 != NULL) {
        char *vt = M2C_FIELD(lbl_80494614, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_80494614 + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_80494614 = NULL;
    }
}

void fn_801DC704(void *arg0, s32 arg1) {
    extern void fn_801D7CDC(void *, s32);
    extern void fn_801D8B40(void *, void *);
    extern void fn_801D9014(void *, void *);
    extern void fn_801D94DC(void *, void *);
    extern void fn_801DC030(void *, void *);
    extern void fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80416FA8[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80416FA8;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

s32 fn_801DCC6C(void *arg0) {
    s32 var_r11;

    var_r11 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) == (s32) M2C_FIELD(arg0, s32 *, 0x88)) {
        var_r11 = 0;
    }
    return var_r11;
}

s32 fn_801DCC8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

void fn_801DCC94(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
}

void fn_801DD0E0(void *arg0, s32 arg1) {
    extern void fn_801D7CDC(void *, s32);
    extern void fn_801D8B40(void *, void *);
    extern void fn_801D9014(void *, void *);
    extern void fn_801D94DC(void *, void *);
    extern void fn_801DC030(void *, void *);
    extern void fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80416FE8[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80416FE8;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_801DE594(void *arg0, s32 arg1) {
    extern void fn_801D7CDC(void *, s32);
    extern void fn_801D8B40(void *, void *);
    extern void fn_801D9014(void *, void *);
    extern void fn_801D94DC(void *, void *);
    extern void fn_801DC030(void *, void *);
    extern void fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80417108[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80417108;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_801DECDC(void *arg0, s32 arg1) {
    extern void fn_801D7CDC(void *, s32);
    extern void fn_801D8B40(void *, void *);
    extern void fn_801D9014(void *, void *);
    extern void fn_801D94DC(void *, void *);
    extern void fn_801DC030(void *, void *);
    extern void fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_804170C8[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_804170C8;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_801DEFA8(void) {
    extern void *fn_801DF04C(void *);
    extern void fn_801DF0DC(void);
    extern void fn_801DF3F8(void *);
    extern void *fn_802D1FC8(s32);
    extern void *lbl_80494618;
    if (lbl_80494618 == 0) {
        lbl_80494618 = fn_802D1FC8(0xFC);
        lbl_80494618 = fn_801DF04C(lbl_80494618);
        fn_801DF0DC();
        fn_801DF3F8(lbl_80494618);
    }
}

void fn_801DEFF0(void) {
    extern void fn_801DF44C(u8 *);
    extern u8 *lbl_80494618;
    if (lbl_80494618 != 0) {
        u8 *obj;
        fn_801DF44C(lbl_80494618);
        obj = lbl_80494618;
        if (obj != 0) {
            u8 *vt = *(u8 **)(obj + 0xF8);
            (*(void (**)(void *, s32))(vt + 0xc))(obj + *(s16 *)(vt + 8), 3);
        }
        lbl_80494618 = 0;
    }
}

u8 *fn_801DF04C(u8 *self) {
    extern u8 lbl_804170B0[];
    extern f32 lbl_803E1348[];
    extern f32 lbl_803E134C[];
    s32 i;
    f32 *p;

    *(u8 **)(self + 0xF8) = lbl_804170B0;
    p = (f32 *)(self + 0xA0);
    for (i = 20; --i != -1; p++) {
        ((s32 *)p)[-20] = 0;
        *p = lbl_803E1348[0];
    }
    *(s32 *)(self + 0xF0) = 0;
    *(s32 *)(self + 0xF4) = 3;
    *(f32 *)(self + 0xB4) = lbl_803E134C[0];
    return self;
}

void fn_801DF0A8(u8 *self, s32 flags) {
    extern u8 lbl_804170B0[];
    extern void fn_802D20E8(void *);
    *(u8 **)(self + 0xF8) = lbl_804170B0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_801DF9D4(void **arg0, s32 arg1, s32 arg2) {
    void fn_801DF86C(void **, s32, s32);
    void *it;

    if (arg0[2] != NULL) {
        for (it = arg0[0]; it != NULL; it = M2C_FIELD(it, void **, 4)) {
            if (M2C_FIELD(it, s32 *, 0xC) == arg2) {
                return 0;
            }
        }
        fn_801DF86C(arg0, arg1, arg2);
        return 1;
    }
    return 0;
}

s32 fn_801DFA84(void **arg0, s32 arg1) {
    M2C_UNK fn_801DF938(void **, void *);
    s32 fn_802486DC(s32, s32);
    s32 var_r28;
    void *temp_r30;
    void *var_r31;

    var_r31 = *arg0;
    var_r28 = 0;
    if (var_r31 != NULL) {
        do {
            temp_r30 = M2C_FIELD(var_r31, void **, 4);
            if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 0x10), arg1) == 0) {
                fn_801DF938(arg0, var_r31);
                var_r28 = 1;
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
    return var_r28;
}

s32 fn_801DFAF4(void **arg0, s32 arg1) {
    void *it;
    void *next;

    for (it = *arg0; it != NULL; it = next) {
        next = M2C_FIELD(it, void **, 4);
        if (M2C_FIELD(it, s32 *, 0xC) == arg1) {
            return 1;
        }
    }
    return 0;
}

void fn_801DFB28(void **arg0) {
    void *temp_r9;
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            if ((s32) M2C_FIELD(var_r31, s32 *, 8) > 0x32) {
                temp_r9 = M2C_FIELD(var_r31, void **, 0xC);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xC)(temp_r9);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
}

void fn_801DFB84(void **arg0) {
    void *temp_r9;
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            if ((s32) M2C_FIELD(var_r31, s32 *, 8) <= 0x32) {
                temp_r9 = M2C_FIELD(var_r31, void **, 0xC);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xC)(temp_r9);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
}

s32 fn_801DFBE0(void) {
    s32 fn_801DF724();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_8049461C;
    if ((s32) lbl_8049461C == 0) {
        fn_802D1FC8(0x10);
        lbl_8049461C = fn_801DF724();
    }
    return lbl_8049461C;
}

void fn_801DFC1C(void) {
    extern char *lbl_8049461C;
    if (lbl_8049461C != NULL) {
        char *vt = M2C_FIELD(lbl_8049461C, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_8049461C + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_8049461C = NULL;
    }
}

void fn_801DFDAC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r10;
    M2C_UNK *temp_r9;

    temp_r10 = M2C_FIELD(arg0, s32 **, 8);
    temp_r9 = M2C_FIELD(temp_r10, s32 **, 4);
    M2C_FIELD(arg0, s32 **, 8) = temp_r9;
    if (temp_r9 != NULL) {
        *temp_r9 = 0;
    }
    M2C_FIELD(temp_r10, s32 *, 8) = arg1;
    M2C_FIELD(temp_r10, s32 *, 0xC) = arg2;
    M2C_FIELD(temp_r10, s32 *, 0x10) = arg3;
    temp_r0 = M2C_FIELD(arg0, s32 **, 0);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg0, s32 **, 0) = temp_r10;
        M2C_FIELD(temp_r10, M2C_UNK **, 0) = temp_r0;
        M2C_FIELD(arg0, M2C_UNK **, 4) = temp_r10;
        M2C_FIELD(temp_r10, M2C_UNK **, 4) = temp_r0;
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 4), M2C_UNK **, 4) = temp_r10;
    M2C_FIELD(temp_r10, M2C_UNK **, 0) = M2C_FIELD(arg0, M2C_UNK **, 4);
    M2C_FIELD(arg0, M2C_UNK **, 4) = temp_r10;
    M2C_FIELD(temp_r10, M2C_UNK **, 4) = NULL;
}

void *fn_801E0008(void **arg0, s32 arg1);
s32 fn_801DFF54(void **arg0, s32 arg1) {
    M2C_UNK fn_801DFE14(void **, void *);
    void *node;

    node = fn_801E0008(arg0, arg1);
    if (node != NULL) {
        fn_801DFE14(arg0, node);
        return 1;
    }
    return 0;
}

s32 fn_801DFF98(void **arg0, s32 arg1) {
    M2C_UNK fn_801DFE14(void **, void *);
    s32 fn_802486DC(s32, s32);
    s32 var_r28;
    void *temp_r30;
    void *var_r31;

    var_r31 = *arg0;
    var_r28 = 0;
    if (var_r31 != NULL) {
        do {
            temp_r30 = M2C_FIELD(var_r31, void **, 4);
            if (fn_802486DC(M2C_FIELD(var_r31, s32 *, 0x10), arg1) == 0) {
                fn_801DFE14(arg0, var_r31);
                var_r28 = 1;
            }
            var_r31 = temp_r30;
        } while (var_r31 != NULL);
    }
    return var_r28;
}

s32 fn_801E0118(void) {
    s32 fn_801DFC68();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494620;
    if ((s32) lbl_80494620 == 0) {
        fn_802D1FC8(0x10);
        lbl_80494620 = fn_801DFC68();
    }
    return lbl_80494620;
}

void fn_801E0154(void) {
    extern char *lbl_80494620;
    if (lbl_80494620 != NULL) {
        char *vt = M2C_FIELD(lbl_80494620, char **, 0xC);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(lbl_80494620 + M2C_FIELD(vt, s16 *, 8), 3);
        lbl_80494620 = NULL;
    }
}

void fn_801E0308(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x74) = (void *) M2C_FIELD(arg0, void **, 0x74);
    M2C_FIELD(arg0, void **, 0x74) = arg1;
}

s32 fn_801E0428(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

s32 fn_801E0430(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

s32 fn_801E0438(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

void fn_801E13BC(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x114) = (u8) (M2C_FIELD(arg0, u8 *, 0x114) - 1);
}

void fn_801E2140(void *arg0) {
    M2C_UNK fn_801E2180();
    M2C_UNK fn_801E2674();
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x314);
    switch ((s32) temp_r0) {                        /* irregular */
    case 1:
        fn_801E2674();
        return;
    case 2:
        fn_801E2180();
        return;
    }
}

void fn_801EA748(void) {
    extern void *lbl_80494630;
    if ((void *) lbl_80494630 != NULL) {
        M2C_FIELD(lbl_80494630, s32 *, 0xB0) = 1;
    }
}

void *fn_801F01B8(void **self, char *name, s32 mask) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804173F0[];
    s32 fn_801F0834(char *);
    s32 fn_80248808(char *);
    char *end;
    self[0] = name;
    self[2] = lbl_80417510;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804173F0;
    end = name + fn_80248808(name);
    self[3] = (void *)(((1 << ((end[-2] - '0') * 10 + (end[-1] - '0'))) & mask) != 0);
    return self;
}

void fn_801F0258(void *arg0, char *arg1) {
    struct Str7 { char s[7]; };
    extern char lbl_803E2FF4[];
    *(struct Str7 *)arg1 = *(struct Str7 *)lbl_803E2FF4;
}

void fn_801F027C(void *arg0, s32 arg1) {
    M2C_UNK fn_80248784(s32, s32);
    extern char lbl_803E2FFC[];
    extern char lbl_803E3000[];
    char *s;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        s = lbl_803E2FFC;
    } else {
        s = lbl_803E3000;
    }
    fn_80248784(arg1, (s32)s);
}

void fn_801F02C0(void *arg0, s32 arg1) {
    M2C_UNK fn_80248784(s32, s32);
    fn_80248784(arg1, M2C_FIELD(arg0, s32 *, 0xC));
}

void fn_801F02EC(s32 arg0, s32 arg1) {
    M2C_UNK fn_80248784(s32, s32);
    fn_80248784(arg1, arg0 + 0xC);
}

void fn_801F0318(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E3004[];
    fn_80245BB4(arg1, lbl_803E3004, M2C_FIELD(arg0, f64 (**)(), 0xC)());
}

void fn_801F0490(void) {

}

void fn_801F0494(void) {

}

void fn_801F0498(void) {

}

void fn_801F060C(void *arg0, s32 arg1) {
    void fn_80245C94(s32, char *, ...);
    void fn_800439BC(f32);
    void fn_80043A58(f32);
    void fn_80043950(f32);
    void fn_8004384C(void);
    extern u8 *lbl_80494630;
    extern char lbl_803E2FF0[];
    extern f32 lbl_803E300C;
    fn_80245C94(arg1, lbl_803E2FF0, lbl_80494630 + 0x98);
    if (*(s32 *)(lbl_80494630 + 0x98) == 1) {
        fn_800439BC(lbl_803E300C);
        fn_80043A58(lbl_803E300C);
        fn_80043950(lbl_803E300C);
        fn_8004384C();
    }
}

void fn_801F067C(void *arg0, s32 arg1) {
    void fn_80245C94(s32, char *, ...);
    void fn_80043390(s32);
    extern u8 *lbl_80494630;
    extern char lbl_803E2FF0[];
    fn_80245C94(arg1, lbl_803E2FF0, lbl_80494630 + 0x94);
    fn_80043390(*(s32 *)(lbl_80494630 + 0x94) - 1);
}

void fn_801F06C4(void *arg0, s32 arg1) {
    void fn_80245C94(s32, char *, ...);
    void fn_80043374(s32);
    extern u8 *lbl_80494630;
    extern char lbl_803E2FF0[];
    fn_80245C94(arg1, lbl_803E2FF0, lbl_80494630 + 0x90);
    fn_80043374(*(s32 *)(lbl_80494630 + 0x90) - 1);
}

void fn_801F070C(void *arg0, s32 arg1) {
    void fn_80245C94(s32, char *, ...);
    extern u8 *lbl_80494630;
    extern char lbl_803E2FF0[];
    fn_80245C94(arg1, lbl_803E2FF0, lbl_80494630 + 0x8C);
}

void fn_801F0744(void *arg0, s32 arg1) {
    f64 fn_80246DDC(s32);
    M2C_FIELD(arg0, M2C_UNK (**)(f32), 0xC)((f32) fn_80246DDC(arg1));
}

void fn_801F0784(void) {
    M2C_UNK fn_801EA898(s32);
    extern s32 lbl_80494630;
    fn_801EA898(lbl_80494630);
}

void fn_801F07A8(void *arg0, char *arg1) {
    u8 *fn_8004380C(s32);
    void *fn_802482F8(void *, s32, s32);
    extern u8 *lbl_80494630;
    u8 *obj;
    u8 *vt;
    u8 sp8[8];

    if (*arg1 == '0' && M2C_FIELD(lbl_80494630, s32 *, 0xB4) != 0) {
        obj = fn_8004380C(M2C_FIELD(lbl_80494630, s32 *, 0x8C));
        vt = *(u8 **)(obj + 0x24);
        fn_802482F8((*(void *(**)(void *, s32, void *, void *))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), 0, sp8, sp8),
                    M2C_FIELD(lbl_80494630, s32 *, 0xB4),
                    *(u16 *)(obj + 0x10) * *(u16 *)(obj + 0x12) * 2);
    }
}

s32 fn_801F0834(char *s) {
    s32 sum = 0;
    s32 i;
    for (i = 0; s[i] != 0; i++) {
        sum += s[i];
    }
    return sum;
}

void fn_801F086C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
}

void *fn_801F0874(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804174F0[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804174F0;
    return self;
}

void *fn_801F08C8(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804174D0[];
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804174D0;
    return self;
}

void *fn_801F091C(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804174B0[];
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804174B0;
    return self;
}

void *fn_801F0970(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417490[];
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417490;
    return self;
}

void *fn_801F09C4(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417470[];
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417470;
    return self;
}

void *fn_801F0A18(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417450[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417450;
    return self;
}

void *fn_801F0A6C(void **self, char *name, void *arg2) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417430[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[3] = arg2;
    self[2] = lbl_80417430;
    return self;
}

void *fn_801F0AC8(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417410[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417410;
    return self;
}

void *fn_801F0B1C(void **self, char *name, void *arg2) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804173D0[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[3] = arg2;
    self[2] = lbl_804173D0;
    return self;
}

void *fn_801F0B78(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417390[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417390;
    return self;
}

void *fn_801F0BCC(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417370[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417370;
    return self;
}

void *fn_801F0C20(void **self, char *name, void *arg2) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417350[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[3] = arg2;
    self[2] = lbl_80417350;
    return self;
}

void *fn_801F0C7C(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417330[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417330;
    return self;
}

void *fn_801F0CD0(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_80417310[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_80417310;
    return self;
}

void *fn_801F0D24(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804172F0[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804172F0;
    return self;
}

void *fn_801F0D78(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804172D0[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804172D0;
    return self;
}

void *fn_801F0DCC(void **self, char *name) {
    extern u8 lbl_80417510[];
    extern u8 lbl_804172B0[];
    s32 fn_801F0834(char *);
    self[2] = lbl_80417510;
    self[0] = name;
    self[1] = (void *)fn_801F0834(name);
    self[2] = lbl_804172B0;
    return self;
}

void fn_801F388C(void) {

}

void fn_801F3890(void) {

}

void fn_801F501C(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xD4);
    if (temp_r9 != NULL) {
        M2C_FIELD(arg0, void **, 0xD4) = NULL;
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xC)(temp_r9);
    }
}

void fn_801F5060(void *arg0) {
    void *temp_r0;
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg0, void **, 0xD8);
    if (temp_r11 != NULL) {
        temp_r0 = M2C_FIELD(arg0, void **, 0xA8);
        if (temp_r0 != NULL) {
            M2C_FIELD(arg0, void **, 0xD8) = NULL;
            M2C_FIELD(temp_r11, M2C_UNK (**)(void *), 0xC)(temp_r11);
            return;
        }
        M2C_FIELD(arg0, void **, 0xD8) = temp_r0;
    }
}

void fn_801F5304(void *arg0, s32 arg1) {
    extern void fn_800F1A60(void *, s32);
    extern void fn_8031EA2C(void *);
    extern void fn_802D20E8(void *);
    extern char lbl_80417628[];
    void *self = arg0;
    M2C_FIELD(self, char **, 0x7C) = lbl_80417628;
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        fn_8031EA2C(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    }
    fn_800F1A60((char *)arg0 + 0x38, 2);
    fn_800F1A60((char *)arg0 + 0x34, 2);
    fn_800F1A60((char *)arg0 + 0x30, 2);
    fn_800F1A60((char *)arg0 + 0x2C, 2);
    fn_800F1A60((char *)arg0 + 0x28, 2);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

M2C_UNK fn_801F53A0(void *arg0) {
    extern void fn_801F49B0(void *, void *);
    extern void *lbl_8041FAC8[];
    fn_801F49B0(lbl_8041FAC8[0], arg0);
}

void fn_801F53CC(void *arg0, s32 arg1) {
    M2C_UNK fn_801F50B8(void *, s32);
    extern void *lbl_8041FAC8[];
    fn_801F50B8(lbl_8041FAC8[0], arg1);
}

M2C_UNK fn_801F53F4(void *arg0) {
    extern void fn_801F4BEC(void *, void *);
    extern void *lbl_8041FAC8[];
    fn_801F4BEC(lbl_8041FAC8[0], arg0);
}

M2C_UNK fn_801F5420(s32 arg0) {
    extern void fn_800F2868(void *, s32, s32);
    extern void fn_801F4D1C(void *);
    extern void *lbl_8041FAC8[];
    char *self = (char *)arg0;
    fn_800F2868(self + 0x28, 0, -1);
    fn_800F2868(self + 0x30, 0, -1);
    fn_800F2868(self + 0x34, 0, -1);
    fn_800F2868(self + 0x38, 0, -1);
    fn_801F4D1C(lbl_8041FAC8[0]);
}

void fn_801F55A4(void) {

}

void fn_801F55A8(void) {

}

void fn_801F55AC(void) {

}

s32 fn_801F55B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xF8);
}

s32 fn_801F55B8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xE4);
}

void fn_801F55C0(void) {
    fn_800C3B48();
}

u8 fn_801F55E0(s32 arg0) {
    extern u8 lbl_80496744[8];
    u8 i = arg0 + 1;
    u8 r = 0;
    if (i <= 7) {
        r = lbl_80496744[i];
    }
    return r;
}

void fn_801F730C(s32 arg0, u8 *arg1) {
    M2C_UNK fn_801F7370(s32, u8, u8 *);
    s32 fn_80245988(s8);
    u8 *var_r31;
    u8 temp_r9;
    u8 var_r30;

    var_r31 = arg1;
    var_r30 = 0;
    if (fn_80245988((s8) *var_r31) != 0) {
        temp_r9 = *var_r31;
        var_r31 += 1;
        var_r30 = temp_r9 - 0x30;
    }
    fn_801F7370(arg0, var_r30, var_r31);
}

void fn_801F788C(s32 arg0, u8 *arg1) {
    M2C_UNK fn_801F78F0(s32, u8, u8 *);
    s32 fn_80245988(s8);
    u8 *var_r31;
    u8 temp_r9;
    u8 var_r30;

    var_r31 = arg1;
    var_r30 = 0;
    if (fn_80245988((s8) *var_r31) != 0) {
        temp_r9 = *var_r31;
        var_r31 += 1;
        var_r30 = temp_r9 - 0x30;
    }
    fn_801F78F0(arg0, var_r30, var_r31);
}

void fn_801F83BC(void) {

}

void fn_801F83C0(void) {

}

void fn_801F83C4(void) {

}

void fn_801F9D38(s32 arg0) {
    M2C_UNK fn_801F9AE0(s32);
    fn_801F9C80();
    fn_801F9AE0(arg0);
}

u8 fn_801F9D6C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xDC);
}

void fn_801FAC58(void *arg0, s8 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s8 *, 0x100) = 1;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x100) = arg1;
}

u8 fn_801FAD08(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x100);
}

s32 fn_801FAD44(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        return 1;
    case 1:
        return 2;
    case 2:
        return 3;
    default:
        return 0;
    }
}

void fn_801FE23C(s32 arg0) {
    M2C_UNK fn_801E0F64(s32);
    fn_801E0F64(arg0 + 0x79C);
}

void fn_801FE2C0(void) {

}

void fn_8020037C(s32 arg0) {
    M2C_UNK fn_80248488(s32, M2C_UNK, M2C_UNK);
    fn_80248488(arg0 + 0x38B, 0, 0x100);
    fn_80248488(arg0 + 0x48B, 0, 0x100);
    fn_80248488(arg0 + 0x58B, 0, 0x100);
}

void fn_8020064C(void) {

}

void fn_8020069C(void) {

}

void fn_802006A0(void *arg0) {
    M2C_UNK fn_801E0884(void *, void *, u8);
    fn_801E0884(arg0 + 0x79C, arg0, M2C_FIELD(arg0, u8 *, 0x87));
}

void fn_802007DC(void *arg0) {
    M2C_UNK fn_802006CC(s32, void *);
    fn_802006CC(M2C_FIELD(arg0, s32 *, 4), arg0);
}

void fn_80200B54(void *arg0) {
    M2C_UNK fn_80200A54(s32, void *);
    fn_80200A54(M2C_FIELD(arg0, s32 *, 4), arg0);
}

void fn_80200D4C(void *arg0) {
    M2C_UNK fn_80200C4C(s32, void *);
    fn_80200C4C(M2C_FIELD(arg0, s32 *, 4), arg0);
}

void fn_80200D74(void *arg0) {
    M2C_UNK fn_80200D9C(s32, void *);
    fn_80200D9C(M2C_FIELD(arg0, s32 *, 4), arg0);
}

void fn_80200FBC(void *arg0) {
    M2C_UNK fn_80200E2C(s32, void *);
    fn_80200E2C(M2C_FIELD(arg0, s32 *, 4), arg0);
}

s32 fn_802037F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    return 1;
}

void fn_80203800(void) {

}

void fn_80204078(void) {

}

void fn_80204C00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
}

void fn_8020512C(void) {

}

void fn_802055C8(void *arg0, s32 arg1) {
    s8 fn_80246E00(s32);
    M2C_FIELD(arg0, s8 *, 0x8C1) = fn_80246E00(arg1);
}

void fn_802055FC(void *arg0, char *arg1) {
    struct Str7 { char s[7]; };
    extern char lbl_803E60D8[];
    *(struct Str7 *)arg1 = *(struct Str7 *)lbl_803E60D8;
}

void fn_80205794(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    extern s32 lbl_80494640[2];
    fn_80245BB4(arg1, lbl_803E4E18, lbl_80494640[M2C_FIELD(arg0, s32 *, 0x84)]);
}

void fn_802057D4(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    extern s32 lbl_80494648[2];
    fn_80245BB4(arg1, lbl_803E4E18, lbl_80494648[M2C_FIELD(arg0, s32 *, 0x84)]);
}

void fn_80205814(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    fn_80245BB4(arg1, lbl_803E4E18, M2C_FIELD(arg0, s32 *, 0xBC));
}

void fn_80205848(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    fn_80245BB4(arg1, lbl_803E4E18, M2C_FIELD(arg0, s32 *, 0xD4));
}

void fn_8020587C(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    fn_80245BB4(arg1, lbl_803E4E18, 1);
}

void fn_802059A8(void) {

}

void fn_802059AC(void *arg0, s32 arg1) {
    void fn_80245BB4(s32, char *, ...);
    extern char lbl_803E4E18[];
    fn_80245BB4(arg1, lbl_803E4E18, 1);
}

void fn_80206190(void) {

}

void fn_80206698(void *arg0) {
    extern void fn_801FF2C0(void *, s32);
    fn_801FF2C0(arg0, 1);
}

void fn_802066BC(void *arg0) {
    extern void fn_801FF2C0(void *, s32);
    fn_801FF2C0(arg0, 1);
}

u8 fn_80207074(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x8C0);
}

void fn_802076D4(void *arg0, s32 arg1) {
    extern void fn_801D7CDC(void *, s32);
    extern void fn_801D8B40(void *, void *);
    extern void fn_801D9014(void *, void *);
    extern void fn_801D94DC(void *, void *);
    extern void fn_801DC030(void *, void *);
    extern void fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80417788[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80417788;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_80208768(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x114);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x114) = 1;
        M2C_FIELD(arg0, s32 *, 0x118) = 1;
        return;
    case 4:
    case 19:
        M2C_FIELD(arg0, s32 *, 0x118) = 1;
        return;
    }
}

void fn_80208AD8(s32 arg0) {
    M2C_UNK fn_801F5420(s32);
    fn_801F5420(arg0 + 0x84);
}

s32 fn_80208AFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x104);
}

void fn_8020ACC8(void) {

}

void fn_8020ACCC(void) {

}

void fn_8020C99C(void *arg0) {
    M2C_UNK fn_8020FA8C();
    M2C_UNK fn_8020FC34();
    M2C_UNK fn_8020FD84();
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x120);
    switch (temp_r0) {                              /* irregular */
    case 9:
        fn_8020FD84();
        return;
    case 28:
        fn_8020FA8C();
        return;
    case 29:
        fn_8020FC34();
        return;
    }
}

void fn_8020DC48(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r3;

    if (((s32) M2C_FIELD(arg2, s32 *, 0) == 0xFF) || (temp_r3 = M2C_FIELD(arg0, s32 *, 0x120), ((temp_r3 == 0x1B) != 0)) || (temp_r3 == 0x11) || (temp_r3 == 0x16)) {
        M2C_FIELD(arg2, s32 *, 0) = arg1;
        M2C_FIELD(arg2, s32 *, 4) = -1;
        return;
    }
    if ((s32) M2C_FIELD(arg2, s32 *, 4) == 0xFF) {
        M2C_FIELD(arg2, s32 *, 4) = (s32) ~(arg1 | arg1);
        return;
    }
    if ((s32) M2C_FIELD(arg2, s32 *, 8) == 0) {
        M2C_FIELD(arg2, s32 *, 8) = (s32) (arg1 + 1);
    }
}

s32 fn_8020DD78(void *arg0) {
    s32 var_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x120) == 0x13) {
        var_r3 = M2C_FIELD(arg0, s32 *, 0x110);
        if (var_r3 == -1) {
            return M2C_FIELD(arg0, s32 *, 0x114);
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_r3;
    }
    var_r3 = M2C_FIELD(arg0, s32 *, 0x104);
    if (var_r3 == -1) {
        return M2C_FIELD(arg0, s32 *, 0x108);
    }
    return var_r3;
}

extern u8 lbl_803E75EC[];
void fn_801DB18C(u8 *arg);
void fn_8020DF04(void) {
    fn_801DB18C(lbl_803E75EC);
}

void fn_8020F430(s32 arg0) {
    M2C_UNK fn_801868E4(s32, s32, s32);
    extern s32 lbl_8049440C;
    s32 temp_r3;
    s32 var_r30;
    s32 var_r31;

    var_r30 = arg0 + 0x148;
    var_r31 = 1;
    do {
        temp_r3 = var_r30;
        var_r30 += 0x1BE0;
        fn_801868E4(temp_r3, lbl_8049440C, var_r31);
        var_r31 += 1;
    } while (var_r31 <= 4);
}

s32 fn_8020F990(void) {
    M2C_UNK fn_800A4B14(M2C_UNK, s32 *);
    s32 spC;
    s32 sp8;
    s32 var_r3;

    sp8 = 0;
    fn_800A4B14(0, &sp8);
    spC = 0;
    fn_800A4B14(1, &spC);
    var_r3 = 0;
    if ((sp8 != 0) || (spC != 0)) {
        var_r3 = 1;
    }
    return var_r3;
}

void fn_802144A8(void *arg0, s32 arg1) {
    extern void fn_801D7CDC(void *, s32);
    extern void fn_801D8B40(void *, void *);
    extern void fn_801D9014(void *, void *);
    extern void fn_801D94DC(void *, void *);
    extern void fn_801DC030(void *, void *);
    extern void fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80417978[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80417978;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_80214DB0(void) {

}

void fn_802178D4(void *arg0) {
    M2C_UNK fn_801F53A0(void *);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x160) != 0) {
        M2C_FIELD(arg0, s32 *, 0x160) = 0;
        fn_801F53A0(arg0 + 0x84);
    }
}

s32 fn_80217A30(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x164);
    M2C_FIELD(arg0, s32 *, 0x164) = arg1;
    return temp_r0;
}

s32 fn_80219D14(void) {
    s32 var_r3;
    void *temp_r3;

    temp_r3 = fn_80219E28();
    if (temp_r3 != NULL) {
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x20) != 0) {
            return 2;
        }
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x24) != 0) {
            return 1;
        }
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x28) != 0) {
            return 0;
        }
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x2C) != 0) {
            return 3;
        }
        var_r3 = 4;
        if ((s32) M2C_FIELD(temp_r3, s32 *, 0x30) == 0) {
            goto block_10;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return var_r3;
    }
block_10:
    var_r3 = 6;
    return var_r3;
}

s32 fn_80219DA0(void) {
    void *fn_80219E28();
    s32 var_r3;
    void *temp_r3;

    temp_r3 = fn_80219E28();
    if ((temp_r3 == NULL) || (var_r3 = 5, (((s32) M2C_FIELD(temp_r3, s32 *, 0x34) == 0) != 0))) {
        var_r3 = 0;
    }
    return var_r3;
}

s32 fn_80219DDC(void) {
    s32 temp_r3_2;
    s32 var_r3;
    void *temp_r3;

    temp_r3 = fn_80219E28();
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, s32 *, 0x1C);
        if (temp_r3_2 > 0x21) {
            return 0;
        }
        var_r3 = 2;
        if (temp_r3_2 >= -0x22) {
            goto block_4;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_r3;
    }
block_4:
    var_r3 = 1;
    return var_r3;
}

void fn_8021BECC(s32 arg0) {
    M2C_UNK fn_801F5420(s32);
    fn_801F5420(arg0 + 0x84);
}

s32 fn_8021BEF0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x104);
}

void fn_802200F8(void *arg0, s32 arg1) {
    extern void fn_801D7CDC(void *, s32);
    extern void fn_801D8B40(void *, void *);
    extern void fn_801D9014(void *, void *);
    extern void fn_801D94DC(void *, void *);
    extern void fn_801DC030(void *, void *);
    extern void fn_801DFA30(void *, void *);
    M2C_UNK fn_802D20E8(s32);
    extern char lbl_80417BF0[];
    extern char lbl_80416F38[];

    M2C_FIELD(arg0, void **, 0x80) = lbl_80417BF0;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        fn_801D8B40(M2C_FIELD(arg0, void **, 4), (u8 *)arg0 + 0x28);
        fn_801D9014(M2C_FIELD(arg0, void **, 8), (u8 *)arg0 + 0x38);
        fn_801D94DC(M2C_FIELD(arg0, void **, 0xC), (u8 *)arg0 + 0x48);
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x58)) {
            fn_801DFA30(M2C_FIELD(arg0, void **, 0x10), (u8 *)arg0 + 0x58);
        }
        if (INVList_IsNotEmpty((u8 *)arg0 + 0x68)) {
            fn_801DC030(M2C_FIELD(arg0, void **, 0x14), (u8 *)arg0 + 0x68);
        }
        if (M2C_FIELD(arg0, void ***, 0x18) != 0) {
            fn_801DFF98(M2C_FIELD(arg0, void ***, 0x18), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x1C) != 0) {
            fn_801D7320(M2C_FIELD(arg0, void ***, 0x1C), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void **, 0x20) != 0) {
            fn_801D7CDC(M2C_FIELD(arg0, void **, 0x20), M2C_FIELD(arg0, s32 *, 0x7C));
        }
        if (M2C_FIELD(arg0, void ***, 0x24) != 0) {
            fn_801D82A0(M2C_FIELD(arg0, void ***, 0x24), M2C_FIELD(arg0, s32 *, 0x7C));
        }
    }
    M2C_FIELD(arg0, void **, 0x80) = lbl_80416F38;
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_80221924(void *arg0, s32 arg1, f32 farg0) {
    switch (arg1) {                                 /* irregular */
    case 7:
        M2C_FIELD(arg0, f32 *, 0x34) = farg0;
        return;
    case 8:
        M2C_FIELD(arg0, f32 *, 0x38) = farg0;
        return;
    case 11:
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        return;
    case 12:
        M2C_FIELD(arg0, f32 *, 0x40) = farg0;
        return;
    }
}

void fn_80221970(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022DA70(s32, s32);
    fn_8022DA70(arg1, arg0);
}

void fn_8022199C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022DABC(s32, s32);
    fn_8022DABC(arg1, arg0);
}

s32 fn_802230D0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5C) & 1;
}

s32 fn_802230EC(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 2U) & 1;
}

s32 fn_802230F8(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 3U) & 1;
}

s32 fn_80223104(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 1U) & 1;
}

s32 fn_80223110(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 4U) & 1;
}

s32 fn_8022311C(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 5U) & 1;
}

s32 fn_80223128(s32 arg0) {
    return arg0 + 0x60;
}

s32 fn_80223130(s32 arg0) {
    return arg0 + 0x90;
}

void fn_80223240(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

s32 fn_80223248(s32 *self) {
    return self[1];
}

void fn_802233F0(s32 arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, s32 *, 0) = arg0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg2, M2C_UNK (**)(void *), 0xC)(arg1);
}

void fn_8022345C(void) {

}

void fn_80223460(void) {

}

u8 *fn_80223464(u8 *self) {
    return self + 8;
}

s32 fn_8022346C(s32 arg0) {
    return arg0 + 0x20;
}

s32 fn_8022349C(void *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x44) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x48) != 0)) {
        var_r9 = 1;
    }
    return var_r9;
}

s32 fn_8022350C(s32 *self) {
    return *self;
}

void fn_80223514(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
}

s32 fn_8022351C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

s32 fn_80224A28(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_802254C0(void *arg0, s32 arg1) {
    s32 fn_80225B14();
    s32 var_r31;

    var_r31 = arg1;
    if (fn_80225B14() == 0) {
        var_r31 = 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x40) + (var_r31 * 0x10);
}

extern s32 lbl_80494674;
s32 fn_80225544(void) {
    return lbl_80494674;
}

extern s32 lbl_80494678;
s32 fn_8022554C(void) {
    return lbl_80494678;
}

s32 fn_80225554(s32 *self) {
    return *self;
}

s32 fn_80229F5C(void *arg0) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x70) - M2C_FIELD(arg0, s32 *, 0x6C)) * 0xB6DB6DB7) >> 3;
}

void fn_8022D168(s32 arg0) {
    extern void fn_80232298(s32, s32);
    fn_80232298(fn_8022554C(), arg0);
}

void fn_8022D8C4(void *arg0) {
    M2C_UNK fn_802D20E8(s32);
    fn_802D20E8(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0) = 0;
    fn_802D20E8(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_802320F8(void);
void fn_8022DA50(void) {
    fn_802320F8();
}

void fn_8022E84C(void) {
    fn_802320F8();
}

void fn_8022F404(void) {
    fn_802320F8();
}

s32 fn_802303F0(void) {
    M2C_UNK fn_80226070(s32, M2C_UNK);
    s32 fn_802311B4();
    s32 temp_r3;
    s32 var_r3;

    temp_r3 = fn_802311B4();
    var_r3 = 0;
    if (temp_r3 != 0) {
        fn_80226070(temp_r3, 0x4EBB9687);
        fn_80226070(temp_r3, 0x8BC514D2);
        var_r3 = 1;
    }
    return var_r3;
}

void fn_80230448(void) {
    fn_802320F8();
}

s32 fn_80230708(void) {
    return 1;
}

s32 fn_80230710(void) {
    return 1;
}

void fn_802323C4(void) {
    M2C_UNK fn_80232338(M2C_UNK, M2C_UNK);
    fn_80232338(1, 0xFFFF);
}

