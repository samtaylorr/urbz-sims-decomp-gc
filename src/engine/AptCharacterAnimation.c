/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8028B998(s32 arg0) {
    M2C_UNK fn_802A1420(s32);
    fn_802A1420(arg0 + 0x24);
}

void fn_8028CE18(void *arg0) {
    void *var_r9;
    void *temp_r0_2;
    void *temp_r9;
    void *temp_r11_2;
    void *temp_r11_3;
    register void *temp_r9_2;
    void *temp_r11;
    void *temp_r3;
    void *temp_r9_3;
    void *var_r31;
    u32 temp_r0;

    var_r31 = M2C_FIELD(arg0, void **, 4);
    if (var_r31 != (void *) M2C_FIELD(arg0, void **, 8)) {
        do {
            temp_r0 = M2C_FIELD(var_r31, s32 *, 0);
            if (!temp_r0) {
                register temp_r3 = M2C_FIELD(var_r31, void **, 0x10);
                temp_r9 = M2C_FIELD(temp_r3, void **, 4);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x14)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x10));
            } else if (temp_r0 == 1) {
                temp_r11 = M2C_FIELD(var_r31, void **, 8);
                temp_r9_2 = M2C_FIELD(temp_r11, void **, 4);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x14)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x10));
                temp_r11_2 = M2C_FIELD(var_r31, void **, 0xC);
                temp_r9_3 = M2C_FIELD(temp_r11_2, void **, 4);
                M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x14)(temp_r11_2 + M2C_FIELD(temp_r9_3, s16 *, 0x10));
            }
            var_r9 = var_r31 + 0x14;
            temp_r11_3 = M2C_FIELD(arg0, void **, 0);
            if (var_r9 == (s32) (temp_r11_3 + (M2C_FIELD(arg0, s32 *, 0x1290) * 0x14))) {
                var_r9 = temp_r11_3;
            }
            var_r31 = var_r9;
        } while ((int)var_r31 != (void *) M2C_FIELD(arg0, void **, 8));
    }
    temp_r0_2 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, void **, 8) = temp_r0_2;
    M2C_FIELD(arg0, void **, 4) = temp_r0_2;
}

void fn_8028D540(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x127C) = arg1;
}

void fn_8028DA5C(void) {
    extern void (*lbl_80443310[])(void);
    lbl_80443310[0]();
}

void fn_8028DA88(void) {
    extern void (*lbl_80443318[])(void);
    lbl_80443318[0]();
}

void fn_8028DAB4(void) {
    extern void (*lbl_80443310[])(void);
    lbl_80443310[0]();
}

void fn_8028DAE0(void) {
    extern void (*lbl_80443314[])(void);
    lbl_80443314[0]();
}

void fn_8028DFA0(void *arg0) {
    extern void fn_802ADE44(void *);
    s32 i;
    u8 *obj;
    s32 owned;
    u8 *vt;

    fn_802ADE44((u8 *) arg0 + 8);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    if (M2C_FIELD(arg0, u32 **, 0x1C) != NULL) {
        for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x24); i++) {
            obj = (u8 *) (M2C_FIELD(arg0, u32 **, 0x1C)[i] & ~1);
            if (obj != NULL) {
                owned = 1;
                if (!(M2C_FIELD(arg0, u32 **, 0x1C)[i] & 1)) {
                    owned = 0;
                }
                if (owned) {
                    vt = *(u8 **) (obj + 4);
                    (*(void (**)(void *)) (vt + 0x14))(obj + *(s16 *) (vt + 0x10));
                }
            }
            M2C_FIELD(arg0, u32 **, 0x1C)[i] = 0;
        }
    }
}

s32 fn_8028E05C(void *arg0) {
    s32 fn_802AEA9C(s32);
    s32 var_r3;

    var_r3 = fn_802AEA9C(arg0 + 8);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        var_r3 += M2C_FIELD(arg0, s32 *, 0x24);
    }
    return var_r3;
}

void *fn_8028E0A0(void *arg0, s32 arg1) {
    extern void *fn_802AEABC(void *, s32);
    u32 v;
    s32 owned;

    if (arg1 < M2C_FIELD(arg0, s32 *, 0x24) && M2C_FIELD(arg0, u32 **, 0x1C) != NULL) {
        v = M2C_FIELD(arg0, u32 **, 0x1C)[arg1];
        if (v != 0) {
            owned = 1;
            if (!(v & 1)) {
                owned = 0;
            }
            if (!owned) {
                return NULL;
            }
        }
        return (void *) (v & ~1);
    }
    return fn_802AEABC((u8 *) arg0 + 8, arg1 - M2C_FIELD(arg0, s32 *, 0x24));
}

void *fn_8028E2B8(void *arg0, s32 arg1) {
    extern void *lbl_80496130;
    void *p;

    if (arg1 < 0 || arg1 >= M2C_FIELD(arg0, s32 *, 0x24)) {
        return lbl_80496130;
    }
    p = (void *) (M2C_FIELD(arg0, u32 **, 0x1C)[arg1] & ~1);
    if (p != NULL) {
        return p;
    }
    return lbl_80496130;
}

void fn_8028E2F0(void *arg0, void *arg1) {
    extern u16 lbl_803FCE5C[];
    extern void **lbl_80494DA0;
    extern void fn_8028E374(void *, u16 **);
    extern void fn_80248784(void *, void *);
    u16 *p;
    u16 *q;

    p = lbl_803FCE5C;
    lbl_803FCE5C[0]++;
    fn_8028E374(arg0, &p);
    fn_80248784(arg1, (u8 *) p + 8);
    q = p;
    if (--*q == 0) {
        ((void (*)(void *)) lbl_80494DA0[1])(q);
    }
}

void *fn_8028FB40(u32 *self) {
    extern void *lbl_80496130;
    s32 ok;
    s32 i;

    ok = 0;
    if ((self[0] & 0x3F) == 0x16) {
        ok = (self[0] >> 15) & 1;
    }
    if (ok != 0) {
        for (i = 0; i < (s32)self[9] / 2; i++) {
            s32 tmp = ((s32 *)self[7])[i];
            ((s32 *)self[7])[i] = ((s32 *)self[7])[self[9] - i - 1];
            ((s32 *)self[7])[self[9] - i - 1] = tmp;
        }
        return self;
    }
    return lbl_80496130;
}

void fn_8028FF8C(s32 arg0, s32 arg1) {
    extern u16 lbl_803FCE5C[];
    extern u16 *lbl_80496104;
    extern void **lbl_80494DA0;

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            lbl_80496104 = lbl_803FCE5C;
            lbl_803FCE5C[0]++;
        } else {
            u16 *p = lbl_80496104;
            if (--*p == 0) {
                ((void (*)(void *))lbl_80494DA0[1])(p);
            }
        }
    }
}

s32 fn_80290008(s32 arg0) {
    return arg0 & 0xFFFFFFFE;
}

s32 fn_80290010(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_80290018(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 **, 0x1C)[arg1] & 1) {
        return 1;
    }
    return 0;
}

s32 fn_80290038(void *arg0, s32 arg1) {
    return (*(s32 **)((u8 *)arg0 + 0x1C))[arg1] & ~1;
}

void fn_8029004C(void *arg0, s32 arg1, u8 *arg2) {
    u32 p;

    p = (*(u32 **)((u8 *)arg0 + 0x1C))[arg1];
    p &= ~1;
    (*(void (**)(u8 *))(*(u8 **)(arg2 + 4) + 0xC))(arg2 + *(s16 *)(*(u8 **)(arg2 + 4) + 0x8));
    if (p != 0) {
        (*(void (**)(u8 *))(*(u8 **)(p + 4) + 0x14))((u8 *)p + *(s16 *)(*(u8 **)(p + 4) + 0x10));
    }
    p = (u32)arg2;
    if ((*(s32 (**)(u8 *))(*(u8 **)(p + 4) + 0x34))((u8 *)p + *(s16 *)(*(u8 **)(p + 4) + 0x30)) == 1) {
        p |= 1;
    }
    (*(u32 **)((u8 *)arg0 + 0x1C))[arg1] = p;
}

s32 fn_802900F0(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_80290138(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_80290180(void) {
    return 0;
}

void fn_80290188(void) {

}

void fn_8029018C(void) {
    void fn_8028FF8C(s32, s32);
    fn_8028FF8C(1, 0xFFFF);
}

void fn_802901B8(void) {
    void fn_8028FF8C(s32, s32);
    fn_8028FF8C(0, 0xFFFF);
}

