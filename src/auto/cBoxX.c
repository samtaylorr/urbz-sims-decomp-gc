/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { s32 node; } It_80100494;

s32 fn_800FE02C(s32 arg0, s32 arg1, s32 arg2) {
    extern s32 lbl_804943E4;
    extern s32 lbl_80495AD0;
    extern s32 lbl_80495AD4;
    extern s32 lbl_80495AD8;
    lbl_80495AD4 = arg0;
    lbl_804943E4 = 1;
    lbl_80495AD0 = arg1;
    lbl_80495AD8 = arg2;
    return 1;
}

s32 fn_800FE048(s32 arg0, ...) {
    return 0;
}

s32 fn_800FE178(s32 arg0, s32 arg1, s32 *arg2) {
    s32 fn_800FB988(s32);
    s32 var_r3;

    var_r3 = 0;
    if (arg1 <= 0x14) {
        *arg2 = fn_800FB988(arg0);
        var_r3 = 1;
    }
    return var_r3;
}

void fn_800FE28C(void *arg0, s32 arg1) {
    extern void fn_8031EA2C(void *);
    M2C_UNK fn_803A0690(void *, s32);
    M2C_UNK fn_803997AC(void *, s32);
    void fn_802D20E8(void *);
    extern s32 lbl_804943F0;
    extern char lbl_8040D5E8[];
    void *p;
    void *temp_r9;
    void *temp_r9_2;
    void *t;

    t = M2C_FIELD(arg0, void **, 0x7C);
    M2C_FIELD(arg0, void **, 0x8C) = lbl_8040D5E8;
    lbl_804943F0 = 0;
    if (t != NULL) {
        fn_8031EA2C(t);
        M2C_FIELD(arg0, void **, 0x7C) = NULL;
    }
    p = (char *)arg0 + 0x3C;
    if (M2C_FIELD(p, s32 *, 8) != 0) {
        fn_803A0690(p, M2C_FIELD(M2C_FIELD(p, void **, 4), s32 *, 4));
        temp_r9 = M2C_FIELD(p, void **, 4);
        M2C_FIELD(temp_r9, void **, 8) = temp_r9;
        M2C_FIELD(M2C_FIELD(p, void **, 4), s32 *, 4) = 0;
        temp_r9_2 = M2C_FIELD(p, void **, 4);
        M2C_FIELD(temp_r9_2, void **, 0xC) = temp_r9_2;
        M2C_FIELD(p, s32 *, 8) = 0;
    }
    if (M2C_FIELD(p, void **, 4) != NULL) {
        fn_803997AC(M2C_FIELD(p, void **, 4), 0x18);
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_800FE438(void *arg0) {
    s32 fn_8032D5C8(s32, void *);
    extern u8 lbl_803D62A0[];
    s32 *p = (s32 *)((u8 *)arg0 + 0x1C);
    s32 v = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x7C), lbl_803D62A0);
    if (v != 0) {
        if (p != NULL) {
            *p = v;
        }
    } else {
        if (p != NULL) {
            *p = 0;
        }
    }
}

void fn_800FE484(void *arg0) {
    s32 fn_8032D5C8(s32, void *);
    extern u8 lbl_803D62B4[];
    extern u8 lbl_803D62C4[];
    extern u8 lbl_803D62D8[];
    s32 *p;
    s32 v;
    p = (s32 *)((u8 *)arg0 + 0x20);
    v = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x7C), lbl_803D62B4);
    if (v != 0) {
        if (p != NULL) {
            *p = v;
        }
    } else {
        if (p != NULL) {
            *p = 0;
        }
    }
    p = (s32 *)((u8 *)arg0 + 0x24);
    v = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x7C), lbl_803D62C4);
    if (v != 0) {
        if (p != NULL) {
            *p = v;
        }
    } else {
        if (p != NULL) {
            *p = 0;
        }
    }
    p = (s32 *)((u8 *)arg0 + 0x28);
    v = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x7C), lbl_803D62D8);
    if (v != 0) {
        if (p != NULL) {
            *p = v;
        }
    } else {
        if (p != NULL) {
            *p = 0;
        }
    }
}

void fn_800FE518(void *arg0) {
    s32 fn_8032D5C8(s32, void *);
    extern u8 lbl_803D62E4[];
    extern u8 lbl_803D62F0[];
    {
        u8 *name = lbl_803D62E4;
        s32 *p = (s32 *)((u8 *)arg0 + 0x2C);
        s32 v = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x7C), name);
        if (v != 0) {
            if (p != NULL) {
                *p = v;
            }
        } else {
            if (p != NULL) {
                *p = 0;
            }
        }
    }
    {
        u8 *name = lbl_803D62F0;
        s32 *p = (s32 *)((u8 *)arg0 + 0x30);
        s32 v = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x7C), name);
        if (v != 0) {
            if (p != NULL) {
                *p = v;
            }
        } else {
            if (p != NULL) {
                *p = 0;
            }
        }
    }
}

void fn_800FE588(void *arg0) {
    s32 fn_8032D5C8(s32, void *);
    extern u8 lbl_803D6300[];
    s32 *p = (s32 *)((u8 *)arg0 + 0x34);
    s32 v = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x7C), lbl_803D6300);
    if (v != 0) {
        if (p != NULL) {
            *p = v;
        }
    } else {
        if (p != NULL) {
            *p = 0;
        }
    }
}

void fn_800FE5D4(void *arg0) {
    extern void *fn_8032D5C8(void *, void *);
    extern char lbl_803D62F0[];
    void **p = (void **)((char *)arg0 + 0x30);
    void *r = fn_8032D5C8(M2C_FIELD(arg0, void **, 0x7C), lbl_803D62F0);
    if (r != NULL) {
        if (p != NULL) {
            *p = r;
        }
    } else {
        if (p != NULL) {
            *p = NULL;
        }
    }
}

s32 fn_800FE620(void *arg0) {
    M2C_UNK fn_800F9738(void *);
    M2C_UNK fn_800F8F30(void *, s32);
    M2C_UNK fn_8017041C(void *);
    M2C_UNK fn_801702E4(void *, s32);
    M2C_UNK fn_803A094C(void *);
    void fn_802D20E8(void *);
    extern void *lbl_80495C90;
    extern s32 lbl_804943F0;

    if (M2C_FIELD(arg0, void **, 0x78) != NULL) {
        fn_800F9738(M2C_FIELD(arg0, void **, 0x78));
        if (M2C_FIELD(arg0, void **, 0x78) != NULL) {
            fn_800F8F30(M2C_FIELD(arg0, void **, 0x78), 3);
        }
        M2C_FIELD(arg0, void **, 0x78) = NULL;
    }
    if (lbl_80495C90 != NULL) {
        fn_8017041C(lbl_80495C90);
        if (lbl_80495C90 != NULL) {
            fn_801702E4(lbl_80495C90, 3);
        }
        lbl_80495C90 = NULL;
    }
    if (M2C_FIELD(arg0, void **, 0x10) != NULL) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0) = 0;
        fn_803A094C(M2C_FIELD(arg0, void **, 0x10));
        fn_802D20E8(M2C_FIELD(arg0, void **, 0x10));
        M2C_FIELD(arg0, void **, 0x10) = NULL;
    }
    lbl_804943F0 = 0;
    return 1;
}

void fn_800FE830(s32 arg0) {
    M2C_UNK fn_80101EF8(s32);
    extern s32 lbl_804943F0;
    if ((s32) lbl_804943F0 != 0) {
        fn_80101EF8(arg0 + 0x4C);
    }
}

s32 fn_800FF588(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_800FF538(void *arg0, s8 *arg1, s32 arg2) {
    s32 c = arg1[0];
    if (c == 0) {
        return 1;
    }
    return fn_800FF588(arg0, c, 0, arg2, M2C_FIELD(arg1, s32 *, 4)) == 0;
}

s32 fn_800FF588(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern char lbl_80434B38[];
    extern void *fn_802CAB54(void *, s32);
    extern void fn_802CAC04(void *);
    extern s32 fn_800FF5F8(void *, s32, s32, s32, s32);
    s32 ret;

    fn_802CAB54(lbl_80434B38, -1);
    ret = fn_800FF5F8(arg0, arg1, arg2, arg3, arg4);
    fn_802CAC04(lbl_80434B38);
    return ret;
}

void fn_801000A0(void *arg0) {
    void fn_800F98E0(void *);

    if (M2C_FIELD(arg0, void **, 0x78) != NULL) {
        fn_800F98E0(M2C_FIELD(arg0, void **, 0x78));
    }
}

s32 fn_801000CC(void *arg0) {
    extern s32 fn_800F98EC(void *);
    void *p = M2C_FIELD(arg0, void **, 0x78);
    return p != 0 ? fn_800F98EC(p) : 0;
}

s32 fn_80100210(void *arg0, s32 arg1, s32 arg2) {
    void fn_80100100(s32 *, void *, s32, s32);
    s32 it[3];

    fn_80100100(it, arg0, arg1, arg2);
    it[2] = M2C_FIELD(arg0, s32 *, 0x40);
    return it[0] != it[2];
}

void fn_80100268(void *arg0, s32 arg1, s32 arg2) {
    void fn_803A0800(void *, void *, s32 *);
    s32 pair[2];
    s32 res[2];

    if (fn_80100210(arg0, arg1, arg2) == 0) {
        pair[0] = arg1;
        pair[1] = arg2;
        fn_803A0800(res, (char *)arg0 + 0x3C, pair);
    }
}

void fn_80100494(void *arg0, s32 arg1, s32 arg2) {
    void fn_80100100(It_80100494 *, void *, s32, s32);
    void *fn_8039F9B0(It_80100494, void *, void *, void *);
    void fn_803997AC(void *, s32);
    char *tree = (char *)arg0 + 0x3C;
    It_80100494 it[2];
    It_80100494 end;
    It_80100494 pos;
    It_80100494 node;
    char *hdr;
    void *p;

    fn_80100100(it, arg0, arg1, arg2);
    end.node = M2C_FIELD(tree, s32 *, 4);
    if (it[0].node != end.node) {
        pos = it[0];
        node = pos;
        hdr = M2C_FIELD(tree, char **, 4);
        p = fn_8039F9B0(node, hdr + 4, hdr + 8, hdr + 0xC);
        if (p != NULL) {
            fn_803997AC(p, 0x18);
        }
        M2C_FIELD(tree, s32 *, 8) = M2C_FIELD(tree, s32 *, 8) - 1;
    }
}

void fn_80100534(s32 arg0, s32 arg1) {
    M2C_UNK fn_803A0874(s32, s32 *);
    s32 sp8;

    sp8 = arg1;
    fn_803A0874(arg0 + 0x3C, &sp8);
}

void fn_80100560(void **out, void *arg1, u32 key) {
    void *y = M2C_FIELD(arg1, void **, 0x40);
    const u32 *k = &key;
    void *x = M2C_FIELD(y, void **, 4);
    while (x != NULL) {
        if (!(M2C_FIELD(x, u32 *, 0x10) < *k)) {
            y = x;
            x = M2C_FIELD(y, void **, 8);
        } else {
            x = M2C_FIELD(x, void **, 0xC);
        }
    }
    *out = y;
}

void fn_801005A4(void **out, void *arg1, u32 key) {
    u32 k = key;
    void *y = M2C_FIELD(arg1, void **, 0x40);
    const u32 *kp = &k;
    void *x = M2C_FIELD(y, void **, 4);
    while (x != NULL) {
        if (*kp < M2C_FIELD(x, u32 *, 0x10)) {
            y = x;
            x = M2C_FIELD(y, void **, 8);
        } else {
            x = M2C_FIELD(x, void **, 0xC);
        }
    }
    *out = y;
}

void fn_80100D9C(s32 arg0) {
    M2C_UNK fn_80100F68(s32);
    M2C_UNK fn_80100E14(s32);
    fn_80100EDC();
    fn_80100E14(arg0);
    fn_80100F68(arg0);
}

void fn_80100DD8(s32 arg0) {
    M2C_UNK fn_80100FB4(s32);
    M2C_UNK fn_80100E74(s32);
    fn_80100F1C();
    fn_80100E74(arg0);
    fn_80100FB4(arg0);
}

void fn_80100E14(void *arg0) {
    extern void *lbl_80495C90;
    void fn_801756D4(void *, s32);
    void fn_80170F1C(void *);
    void *g = lbl_80495C90;
    M2C_FIELD(arg0, s32 *, 0x80) = M2C_FIELD(arg0, s32 *, 0x80) + 1;
    fn_801756D4(M2C_FIELD(g, void **, 0x58), 0);
    fn_801756D4(M2C_FIELD(lbl_80495C90, void **, 0x58), 1);
    fn_801756D4(M2C_FIELD(lbl_80495C90, void **, 0x58), 3);
    fn_80170F1C(lbl_80495C90);
}

void fn_80100E74(void *arg0) {
    extern void *lbl_80495C90;
    void fn_8017579C(void *, s32);
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x80) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x80) - 1;
        M2C_FIELD(arg0, s32 *, 0x80) = temp_r0;
        if (temp_r0 == 0) {
            fn_8017579C(M2C_FIELD(lbl_80495C90, void **, 0x58), 0);
            fn_8017579C(M2C_FIELD(lbl_80495C90, void **, 0x58), 1);
            fn_8017579C(M2C_FIELD(lbl_80495C90, void **, 0x58), 3);
        }
    }
}

void fn_80100EDC(void *arg0) {
    M2C_UNK fn_800F97E8(s32, M2C_UNK);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x78);
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (M2C_FIELD(arg0, s32 *, 0x88) + 1);
    if (temp_r0 != 0) {
        fn_800F97E8(temp_r0, 1);
    }
}

void fn_80100F1C(void *arg0) {
    void fn_800F97E8(void *, s32);
    s32 n = M2C_FIELD(arg0, s32 *, 0x88);

    if (n == 0 || (M2C_FIELD(arg0, s32 *, 0x88) = n - 1) == 0) {
        if (M2C_FIELD(arg0, void **, 0x78) != NULL) {
            fn_800F97E8(M2C_FIELD(arg0, void **, 0x78), 0);
        }
    }
}

void fn_80100F68(void *arg0) {
    extern void *lbl_80495C90;
    void fn_801756D4(void *, s32);
    void fn_80101244(void *);
    M2C_FIELD(arg0, s32 *, 0x84) = M2C_FIELD(arg0, s32 *, 0x84) + 1;
    fn_801756D4(M2C_FIELD(lbl_80495C90, void **, 0x58), 2);
    fn_80101244((char *)arg0 + 0x4C);
}

void fn_80100FB4(void *arg0) {
    extern void *lbl_80495C90;
    void fn_8017579C(void *, s32);
    void fn_801012A8(void *);
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x84) - 1;
        M2C_FIELD(arg0, s32 *, 0x84) = temp_r0;
        if (temp_r0 == 0) {
            fn_8017579C(M2C_FIELD(lbl_80495C90, void **, 0x58), 2);
            fn_801012A8((char *)arg0 + 0x4C);
        }
    }
}

s32 *fn_801011D4(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    arg0[4] = 0;
    arg0[5] = 0;
    arg0[6] = 0;
    arg0[7] = 0;
    arg0[8] = 0;
    arg0[9] = 0;
    arg0[10] = 0;
    return arg0;
}

void fn_8010120C(void) {
    extern void *lbl_80494FA4;
    void *vt;

    vt = *(void **)lbl_80494FA4;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x4C))((char *)lbl_80494FA4 + M2C_FIELD(vt, s16 *, 0x48));
}

void fn_80101244(s32 *arg0) {
    extern void *lbl_80494FA4;
    char *obj;
    void *vt;

    if (arg0[0] != 3) {
        obj = lbl_80494FA4;
        vt = *(void **)obj;
        ((void (*)(void *))M2C_FIELD(vt, void **, 0x54))(obj + M2C_FIELD(vt, s16 *, 0x50));
        obj = lbl_80494FA4;
        vt = *(void **)obj;
        ((void (*)(void *, s32))M2C_FIELD(vt, void **, 0x2C))(obj + M2C_FIELD(vt, s16 *, 0x28), 1);
    }
}

void fn_801012A8(void) {
    extern void *lbl_80494FA4;
    char *obj;
    void *vt;

    obj = lbl_80494FA4;
    vt = *(void **)obj;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x5C))(obj + M2C_FIELD(vt, s16 *, 0x58));
    obj = lbl_80494FA4;
    vt = *(void **)obj;
    ((void (*)(void *, s32))M2C_FIELD(vt, void **, 0x2C))(obj + M2C_FIELD(vt, s16 *, 0x28), 1);
}

void fn_80101300(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 1;
}

void fn_80101310(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 1;
}

void fn_80101320(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
}

void fn_80101330(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
}

void fn_80101340(s32 *arg0, s32 arg1) {
    extern void *lbl_80494FA4;
    char *obj;
    void *vt;

    if (arg1 != arg0[0]) {
        arg0[0] = arg1;
        if (arg1 == 3 || arg1 == 1 || arg1 == 5) {
            if (arg0[1] == 0) {
                obj = lbl_80494FA4;
                vt = *(void **)obj;
                ((void (*)(void *))M2C_FIELD(vt, void **, 0x4C))(obj + M2C_FIELD(vt, s16 *, 0x48));
                obj = lbl_80494FA4;
                vt = *(void **)obj;
                ((void (*)(void *, s32))M2C_FIELD(vt, void **, 0x2C))(obj + M2C_FIELD(vt, s16 *, 0x28), 1);
                arg0[1] = 0;
            }
        }
    }
}

s32 fn_80101BF8(void *arg0) {
    extern s32 lbl_803F6324[];
    return lbl_803F6324[M2C_FIELD(arg0, s32 *, 0x28)];
}

void fn_80101C10(void *arg0) {
    u32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, u32 *, 0x28) + 1;
    M2C_FIELD(arg0, u32 *, 0x28) = temp_r9;
    if (temp_r9 > 0x2BU) {
        M2C_FIELD(arg0, u32 *, 0x28) = 0U;
    }
}

void fn_80101C30(void *arg0) {
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x28) - 1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r9;
    if (temp_r9 < 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0x2B;
    }
}

void fn_80101C50(void *arg0) {
    s32 fn_80101BF8(void *);
    void fn_80101C90(void *, s32, f32);
    extern f32 lbl_803D67B0[];
    fn_80101C90(arg0, fn_80101BF8(arg0), lbl_803D67B0[0]);
}

void fn_80102010(s32 arg0, s32 arg1) {
    void fn_802CAA00(void *, s32);
    void fn_802CAB04(void *);
    extern char lbl_80434B38[];
    extern char lbl_80419350[];
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_802CAB04(lbl_80434B38);
            return;
        }
        *(void **)lbl_80434B38 = lbl_80419350;
        fn_802CAA00(lbl_80434B38 + 0x1C, 2);
        fn_802CAA00(lbl_80434B38, 2);
    }
}

void fn_80102088(void) {
    void fn_80102010(s32, s32);
    fn_80102010(1, 0xFFFF);
}

void fn_801020B4(void) {
    void fn_80102010(s32, s32);
    fn_80102010(0, 0xFFFF);
}

