/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8028B0A4(void *arg0, void *arg1, u8 *arg2) {
    void fn_8028ABC4(void *, void *, u8 *);
    if (M2C_FIELD(arg2, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg2, s32 *, 0x1C) += (s32)arg2;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    fn_8028ABC4(arg0, arg1, arg2);
    if (M2C_FIELD(arg2, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg2, s32 *, 0x1C) -= (s32)arg2;
    }
}

s32 fn_8028B10C(void *arg0, s32 arg1) {
    s32 i;
    s32 *p;
    for (i = 0; i < M2C_FIELD(arg0, s32 *, 0xC); i++) {
        if (M2C_FIELD(arg0, s32 **, 0x10)[i] == arg1) {
            return i;
        }
    }
    return -1;
}

s32 fn_8028B150(void *arg0, s32 arg1) {
    s32 i;
    s32 n;
    u8 *p;
    i = 0;
    n = M2C_FIELD(arg0, s32 *, 0x20);
    if (i < n) {
        p = M2C_FIELD(arg0, u8 **, 0x24) + 8;
        do {
            s32 v = *(s32 *)p;
            p += 0x10;
            if (v == arg1) {
                return 1;
            }
            i++;
        } while (i < n);
    }
    return 0;
}

void *fn_8028B87C(u8 *self, s32 **arg1) {
    void fn_80290A8C(void *);
    extern s32 fn_802A661C(s32 *);
    extern s32 fn_802A6630(s32 *);
    extern void fn_802A6644(void *);
    extern u8 lbl_80418488[];
    s32 **dst;

    fn_80290A8C(self);
    M2C_FIELD(self, void **, 0x14) = lbl_80418488;
    dst = (s32 **)(self + 0x34);
    M2C_FIELD(self, s32 *, 0x30) = 0;
    *dst = NULL;
    if (arg1 != dst) {
        if ((*dst = *arg1) != NULL) {
            fn_802A661C(*dst);
        }
    }
    M2C_FIELD(self, s32 *, 0x8) = (*arg1)[4];
    if (*arg1 != NULL && fn_802A6630(*arg1) == 0) {
        fn_802A6644(*arg1);
    }
    return self;
}

void fn_8028B998(s32 arg0) {
    M2C_UNK fn_802A1420(s32);
    fn_802A1420(arg0 + 0x24);
}

void fn_8028CB54(void *arg0, void *arg1) {
    void fn_8028CBD8(void *, u32);
    s32 type = M2C_FIELD(arg1, s32 *, 0xC);

    if (type == 0x1F5) {
        M2C_FIELD(arg0, f32 *, 0x125C) = M2C_FIELD(arg1, f32 *, 0x0);
        M2C_FIELD(arg0, f32 *, 0x1260) = M2C_FIELD(arg1, f32 *, 0x4);
        M2C_FIELD(arg0, u8 *, 0x1264) = M2C_FIELD(arg1, u8 *, 0x8);
    } else if (type == 0x1F6) {
        M2C_FIELD(arg0, f32 *, 0x126C) = M2C_FIELD(arg1, f32 *, 0x0);
        M2C_FIELD(arg0, f32 *, 0x1270) = M2C_FIELD(arg1, f32 *, 0x4);
        M2C_FIELD(arg0, u8 *, 0x1274) = M2C_FIELD(arg1, u8 *, 0x8);
    }
    fn_8028CBD8(arg0, ((M2C_FIELD(arg1, u8 *, 0x8) << 2) | 1) | (M2C_FIELD(arg1, s32 *, 0xC) << 17));
}

void fn_8028CBD8(void *arg0, u32 arg1) {
    extern const s32 lbl_80494B40;
    extern s32 lbl_804960E4;
    extern void (*lbl_80443328[])(void *, s32);
    struct {
        s32 type;
        u32 value;
    } msg;

    if (M2C_FIELD(arg0, s32 *, 0x1238) < M2C_FIELD(arg0, s32 *, 0x1288)) {
        M2C_FIELD(arg0, u32 **, 0x123C)[M2C_FIELD(arg0, s32 *, 0x1238)] = arg1;
        M2C_FIELD(arg0, s32 *, 0x1238)++;
        if (lbl_80494B40 != 0) {
            msg.type = lbl_804960E4;
            msg.value = arg1;
            lbl_80443328[0](&msg, 8);
        }
    }
}

void fn_8028CC54(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void fn_8028CBD8(void *, u32);
    fn_8028CBD8(arg0, ((((arg2 & 0x7F) << 10) | 1) | (arg1 << 17)) | ((arg3 & 0xFF) << 2));
}

void fn_8028CC8C(void *arg0, s32 arg1, s32 arg2) {
    extern s32 lbl_80494B54;
    void fn_8028CBD8(void *, u32);
    if (lbl_80494B54 != 0) {
        fn_8028CBD8(arg0, (arg1 << 17) | ((arg2 & 0x7FFF) << 2));
    }
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

void fn_8028D490(void *arg0, void *arg1) {
    typedef struct {
        void *obj;
        u8 pad4[0x18];
    } Entry;
    void fn_8024839C(void *, void *, s32);
    s32 i;

    for (i = 0; i <= M2C_FIELD(arg0, s32 *, 0x818) - 1; i++) {
        if (arg1 == M2C_FIELD(arg0, Entry **, 0x81C)[i].obj) {
            char *vt = M2C_FIELD(arg1, char **, 4);
            (*(void (**)(void *))(vt + 0x14))((char *)arg1 + *(s16 *)(vt + 0x10));
            fn_8024839C(&M2C_FIELD(arg0, Entry **, 0x81C)[i], &M2C_FIELD(arg0, Entry **, 0x81C)[i + 1], (M2C_FIELD(arg0, s32 *, 0x818) - i) * sizeof(Entry));
            M2C_FIELD(arg0, s32 *, 0x818)--;
        }
    }
}

void fn_8028D540(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x127C) = arg1;
}

s32 fn_8028D548(void *arg0, void *arg1) {
    void *sel = M2C_FIELD(arg0, void **, 0x127C);
    void *it;

    if (sel == NULL) {
        return 0;
    }
    for (it = arg1; it != NULL; it = M2C_FIELD(it, void **, 0x4C)) {
        if (it == sel) {
            return 0;
        }
    }
    return 1;
}

s32 fn_8028D6E0(void *arg0) {
    s32 n = (s32)((M2C_FIELD(arg0, s32 *, 0x8) - M2C_FIELD(arg0, s32 *, 0x4)) * 0xCCCCCCCD) >> 2;
    if (n >= 0) {
        return n;
    }
    return n + M2C_FIELD(arg0, s32 *, 0x1290);
}

s32 fn_8028D714(void *arg0, s32 arg1) {
    s32 base = M2C_FIELD(arg0, s32 *, 0x0);
    s32 cap = M2C_FIELD(arg0, s32 *, 0x1290);
    s32 i = (s32)((M2C_FIELD(arg0, s32 *, 0x4) - base) * 0xCCCCCCCD) >> 2;
    i += arg1;
    i %= cap;
    if (i >= 0) {
        return base + i * 0x14;
    }
    return base + (i + cap) * 0x14;
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

void *fn_8028DC14(void *self) {
    extern u8 lbl_804189F0[];
    extern u8 lbl_804184B0[];
    extern void fn_802B6FA8(void *, s32);
    extern void fn_802ADDD8(void *, s32);
    fn_802B6FA8(self, 0x16);
    M2C_FIELD(self, u8 **, 4) = lbl_804189F0;
    fn_802ADDD8((u8 *)self + 8, 8);
    M2C_FIELD(self, s32 *, 0x24) = 0;
    M2C_FIELD(self, u8 **, 4) = lbl_804184B0;
    M2C_FIELD(self, s32 *, 0x18) = 0;
    M2C_FIELD(self, s32 *, 0x20) = 0;
    M2C_FIELD(self, s32 *, 0x1C) = 0;
    return self;
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
            if ((obj = (u8 *) (M2C_FIELD(arg0, u32 **, 0x1C)[i] & ~1)) != NULL) {
                owned = 1;
                if (!(M2C_FIELD(arg0, s32 **, 0x1C)[i] & 1)) {
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

    if (arg1 >= 0) {
        if (arg1 < M2C_FIELD(arg0, s32 *, 0x24)) {
            p = (void *) (M2C_FIELD(arg0, u32 **, 0x1C)[arg1] & ~1);
            if (p != NULL) {
                return p;
            }
            return lbl_80496130;
        }
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

s32 fn_8028EDE8(char *s) {
    extern s32 fn_80246E00(char *);
    if (fn_80246E00(s) != 0) {
        return 1;
    }
    return *s == '0';
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

