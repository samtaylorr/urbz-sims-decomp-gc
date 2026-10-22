/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80496130;

extern void *lbl_80494B48;
extern void *lbl_80494D98;

void fn_802999D4(void);
void fn_80290C24(s32 arg0) {
    M2C_UNK fn_802A14A0(s32);
    fn_802A14A0(arg0 + 0x24);
}

void fn_802927E8(void *self, void *arg1) {
    M2C_UNK fn_802922B8(void *, void *, s32);
    fn_802922B8(self, arg1, 0);
}

void fn_8029280C(void *self, void *arg1) {
    M2C_UNK fn_802922B8(void *, void *, s32);
    fn_802922B8(self, arg1, 1);
}

s32 fn_80292CBC(void *self) {
    extern void fn_802A0890(s32, void *);
    extern void fn_802BE53C(u16 **, char *);
    extern void fn_802A5EE0(s32, u16 **, u16 **);
    extern char lbl_803ECA4C[];
    extern char lbl_803EC8D8[];
    extern s32 lbl_804960F4;
    extern struct { void *unk0; void (*free)(void *); } *lbl_80494DA0;
    void *obj;
    u16 *name;
    u16 *str;

    obj = M2C_FIELD(self, void **, 0x4C);
    if (obj != NULL) {
        fn_802A0890(M2C_FIELD(obj, s32 *, 0x50) + 0x24, self);
    } else {
        fn_802BE53C(&name, lbl_803ECA4C);
        fn_802BE53C(&str, lbl_803EC8D8);
        fn_802A5EE0(lbl_804960F4, &str, &name);
        if (--*str == 0) {
            lbl_80494DA0->free(str);
        }
    }
    return lbl_80496130;
}

s32 fn_80292D68(s32 arg0, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern s32 fn_802B490C(s32);
    extern void fn_8027D504(void *, s32, s32, s32, s32, s32, s32);
    s32 a;
    s32 b;
    s32 c;

    a = ((s32 *)lbl_804433C4[2])[lbl_804433C4[0] - 1];
    b = ((s32 *)lbl_804433C4[2])[lbl_804433C4[0] - 1 - 1];
    if (arg1 > 2) {
        c = ((s32 *)lbl_804433C4[2])[lbl_804433C4[0] - 2 - 1];
    } else {
        c = 0;
    }
    fn_8027D504(lbl_804433C4, arg0, 0, arg0, a, fn_802B490C(b) + 0x4000, c);
    return lbl_80496130;
}

s32 fn_80292E08(s32 arg0) {
    extern void fn_8027DA94(s32, s32, void **);
    extern void fn_802A0980(s32, void *);
    void *obj;
    u32 flags;
    s32 enabled;

    obj = NULL;
    fn_8027DA94(0, arg0, &obj);
    if (obj != NULL) {
        flags = *(u32 *)obj;
        enabled = 0;
        if ((s32)(flags & 0x3F) > 0xB && (s32)(flags & 0x3F) <= 0x13) {
            enabled = (flags >> 15) & 1;
        }
        if (enabled != 0) {
            fn_802A0980(M2C_FIELD(M2C_FIELD(obj, void **, 0x4C), s32 *, 0x50) + 0x24, obj);
        }
    }
    return lbl_80496130;
}

void fn_80298018(s32 arg0) {
    M2C_UNK fn_802A14A0(s32);
    fn_802A14A0(arg0 + 0x20);
}

void fn_80299A50(void) {
    fn_802999D4();
}

void fn_80299AF4(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    *arg0 = (temp_r0 & 0xF000FFFF) | ((temp_r0 & 0x0FFF0000) + 0x10000);
}

void fn_80299B6C(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x60) & 0xFFFFFFFE;
    M2C_FIELD(arg0, s32 *, 0x60) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (temp_r0 | 1);
    }
}

s32 fn_80299B8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60) & 1;
}

s32 fn_80299C74(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C7C(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C84(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C8C(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C94(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C9C(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299CA4(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299CAC(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299CB4(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_8029A04C(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_8029A094(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_8029A0DC(void) {
    return 0;
}

void fn_8029A0E4(void) {

}

s32 fn_8029A0E8(void) {
    return 1;
}

extern s32 lbl_80496130;
s32 fn_8029D95C(void) {
    return lbl_80496130;
}

s32 fn_8029F43C(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_8029F484(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_8029F4CC(void) {
    return 0;
}

void fn_8029F4D4(void) {

}

s32 fn_8029F660(void **arg0) {
    s32 var_r9;
    void *var_r3;

    var_r3 = *arg0;
    var_r9 = 0;
    if (var_r3 != NULL) {
        do {
            var_r3 = M2C_FIELD(var_r3, void **, 0x58);
            var_r9 += 1;
        } while (var_r3 != NULL);
    }
    return var_r9;
}

void *fn_8029F8BC(void *arg0) {
    void *temp_r11;
    void *temp_r11_2;

    temp_r11 = M2C_FIELD(arg0, void **, 0x54);
    if (temp_r11 != NULL) {
        M2C_FIELD(temp_r11, void **, 0x58) = (void *) M2C_FIELD(arg0, void **, 0x58);
    }
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x58);
    if (temp_r11_2 != NULL) {
        M2C_FIELD(temp_r11_2, void **, 0x54) = (void *) M2C_FIELD(arg0, void **, 0x54);
    }
    M2C_FIELD(arg0, void **, 0x54) = NULL;
    M2C_FIELD(arg0, void **, 0x58) = NULL;
    return arg0;
}

void fn_802A14A0(void ***arg0) {
    M2C_UNK fn_802A1420();
    M2C_UNK fn_803B79BC(void **, M2C_UNK);
    void **temp_r31;
    void *temp_r11;
    void *temp_r9;

    fn_802A1420();
    temp_r31 = *arg0;
    if (temp_r31 != NULL) {
        M2C_FIELD(*temp_r31, s32 *, 0x50) = 0;
        temp_r11 = *temp_r31;
        temp_r9 = M2C_FIELD(temp_r11, void **, 4);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x18));
        fn_803B79BC(temp_r31, 4);
    }
    *arg0 = NULL;
}

s32 fn_802A1514(s32 *self) {
    return *self;
}

void fn_802A151C(s32 *self, s32 value) {
    *self = value;
}

s32 fn_802A2014(s32 arg0) {
    return arg0 - 8;
}

s32 fn_802A201C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, -4);
}

s32 fn_802A2024(void *arg0) {
    return M2C_FIELD(arg0, s32 *, -8);
}

void fn_802A204C(void);
void fn_802A202C(void) {
    fn_802A204C();
}

s32 fn_802A2784(s32 arg0) {
    s32 var_r0;

    var_r0 = 0;
    if (arg0 & 8) {
        var_r0 = 0x800;
    }
    if (arg0 & 4) {
        var_r0 |= 0x400;
    }
    if (arg0 & 0x40) {
        var_r0 |= 0x1000;
    }
    if (arg0 & 1) {
        var_r0 |= 0x2000;
    }
    if (arg0 & 2) {
        var_r0 |= 0x4000;
    }
    if (arg0 & 0x20) {
        var_r0 |= 0x8000;
    }
    if (arg0 & 0x10) {
        var_r0 |= 0x10000;
    }
    return var_r0;
}

void fn_802A2AE4(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(arg0, f32 *, 4)) + M2C_FIELD(arg1, f32 *, 0x10));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 0xC) * M2C_FIELD(arg0, f32 *, 4)) + M2C_FIELD(arg1, f32 *, 0x14));
}

s32 fn_802A4354(void) {
    return 1;
}

s32 fn_802A661C(s32 *arg0) {
    return ++*arg0;
}

s32 fn_802A6630(s32 *arg0) {
    return --*arg0;
}

void fn_802A6644(void *arg0) {
    void fn_802A452C(s32, void *);
    void fn_8028B198(s32, s32);
    void fn_803B6F94(void *, s32);
    void fn_803B7DCC(void *, s32);
    extern s32 lbl_804960F0;
    extern void (*lbl_80443334[])(s32);

    if (arg0 != NULL) {
        fn_802A452C(lbl_804960F0, arg0);
        if ((u32)(M2C_FIELD(arg0, s32 *, 8) - 3) <= 1U) {
            fn_8028B198(M2C_FIELD(arg0, s32 *, 0x10) + 8, M2C_FIELD(arg0, s32 *, 0xC));
            lbl_80443334[0](M2C_FIELD(arg0, s32 *, 0x14));
        }
        fn_803B6F94((u8 *)arg0 + 4, 2);
        fn_803B7DCC(arg0, 0x18);
    }
}

s32 fn_802A66C8(s32 *arg0) {
    return ++*arg0;
}

s32 fn_802A66DC(s32 *arg0) {
    return --*arg0;
}

void fn_802A66F0(void *arg0) {
    extern void (*lbl_80443318[])(void *, s32);

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 **, 4) != NULL && fn_802A6630(M2C_FIELD(arg0, s32 **, 4)) == 0) {
            fn_802A6644(M2C_FIELD(arg0, s32 **, 4));
        }
        lbl_80443318[0](arg0, 0x10);
    }
}

void fn_802A6E10(s32 arg0) {
    M2C_UNK fn_802A6CE0();
    s32 fn_802D2058(M2C_UNK);
    extern s32 lbl_804966FC;
    extern s32 lbl_80496700;
    extern s32 lbl_80496704;
    s32 temp_r3;

    temp_r3 = fn_802D2058(0x4000);
    lbl_80496700 = temp_r3;
    lbl_80496704 = temp_r3 + arg0;
    lbl_804966FC = temp_r3;
    fn_802A6CE0();
}

static inline void *fn_802A8240_new(f32 value) {
    extern u8 lbl_80418D70[];
    extern u8 lbl_804190F0[];
    extern void *fn_802BB9B4(s32);
    extern void fn_802B7124(void *, s32);
    extern void fn_802B710C(void *, s32);
    extern void fn_802B7138(void *, s32);
    extern void fn_802B7158(void *, s32);
    extern void fn_802B7178(void *, s32);
    extern void fn_802B71C8(void *);
    extern void fn_803B76C8(void *, void *);

    if (lbl_80494D98 != NULL) {
        void *obj = lbl_80494D98;
        void *pool = lbl_80494B48;
        s32 count = M2C_FIELD(pool, s32 *, 4);
        s32 cap = M2C_FIELD(pool, s32 *, 0);
        lbl_80494D98 = M2C_FIELD(obj, void **, 8);
        if (count >= cap) {
            M2C_FIELD(obj, u32 *, 0) &= ~0x40000000;
        } else {
            M2C_FIELD(pool, void ***, 8)[count] = obj;
            M2C_FIELD(pool, s32 *, 4) = count + 1;
        }
        M2C_FIELD(obj, f32 *, 8) = value;
        return obj;
    } else {
        void *obj = fn_802BB9B4(0xC);
        M2C_FIELD(obj, void **, 4) = lbl_80418D70;
        fn_802B7124(obj, 6);
        fn_802B710C(obj, 0);
        fn_802B7138(obj, 1);
        fn_802B7158(obj, 0);
        fn_802B7178(obj, 0);
        fn_802B71C8(obj);
        fn_803B76C8(lbl_80494B48, obj);
        M2C_FIELD(obj, f32 *, 8) = value;
        M2C_FIELD(obj, void **, 4) = lbl_804190F0;
        return obj;
    }
}

void *fn_802A8240(void *self, s32 arg1) {
    extern s32 lbl_804433C4[];
    extern void fn_802B4998(s32);
    extern f32 fn_80243694(void);

    if (arg1 < 1) {
        return (void *)lbl_80496130;
    }
    fn_802B4998(((s32 *)lbl_804433C4[2])[lbl_804433C4[0] - 1]);
    return fn_802A8240_new3(fn_80243694());
}

void fn_802ACAF8(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18) & 0xFFFFFFFE;
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_r0 | 1);
    }
}

s32 fn_802ACB18(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) & 1;
}

void fn_802ACB24(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18) & 0xFFFFFFFD;
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_r0 | 2);
    }
}

s32 fn_802ACB44(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) & 2;
}

void fn_802AEA9C();
void fn_802ACB50(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802AEABC();
void fn_802ACB74(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

void fn_802ADE44();
void fn_802ACB98(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

s32 fn_802ACBBC(void) {
    return 1;
}

void fn_802ADFFC();
void fn_802ACBC4(char *self) {
    extern void fn_802ADFFC(void *);
    fn_802ADFFC(self + 8);
}

void fn_802AE360();
void fn_802ACBE8(char *self) {
    extern void fn_802AE360(void *);
    fn_802AE360(self + 8);
}

void fn_803B72E0();
void fn_802ACC0C(char *self) {
    extern void fn_803B72E0(void *);
    fn_803B72E0(self + 8);
}

void fn_803B739C();
void fn_802ACC30(char *self) {
    extern void fn_803B739C(void *);
    fn_803B739C(self + 8);
}

u8 *fn_802ACC54(u8 *self) {
    return self + 8;
}

u8 *fn_802ACC5C(u8 *self) {
    return self + 8;
}

s32 fn_802ACC64(void) {
    return 1;
}

s32 fn_802ACC6C(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802ACCB4(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802ACCFC(void) {
    return 0;
}

void fn_802ACD04(void) {

}

void fn_802ACD08(void *arg0, s32 arg1) {
    extern char lbl_804189F0[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_804189F0;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x24);
    }
}

void *fn_802ACD80(void *arg0) {
    extern char lbl_80418970[];
    extern void fn_802B6FA8(void *, s32);
    extern void fn_802ADDD8(void *, s32);
    extern void fn_802B7178(s32 *, s32);
    extern void fn_802B710C(s32 *, s32);
    fn_802B6FA8(arg0, 0x17);
    M2C_FIELD(arg0, void **, 4) = lbl_80418970;
    fn_802ADDD8(&M2C_FIELD(arg0, s32 *, 8), 8);
    fn_802B7178(arg0, 1);
    fn_802B710C(arg0, 0xFFF);
    return arg0;
}

void fn_802ACDE4(void) {

}

void fn_802ACDE8(void) {

}

void fn_802ACDEC(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_802ACE10(u8 *self) {
    return self + 8;
}

u8 *fn_802ACE18(u8 *self) {
    return self + 8;
}

s32 fn_802ACE20(void) {
    return 1;
}

s32 fn_802ACE28(void) {
    return 1;
}

void fn_802ACE30(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802ACE54(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

s32 fn_802ACE78(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802ACEC0(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802ACF08(void) {
    return 0;
}

void fn_802ACF10(void) {

}

void fn_802ACF14(void *arg0, s32 arg1) {
    extern char lbl_80418970[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_80418970;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x20);
    }
}

void *fn_802ACF8C(void *arg0) {
    extern char lbl_804188F0[];
    extern void fn_802B6FA8(void *, s32);
    extern void fn_802ADDD8(s32 *, s32);
    extern void fn_802B7178(s32 *, s32);
    extern void fn_802B710C(s32 *, s32);
    fn_802B6FA8(arg0, 0x18);
    ((void **)arg0)[1] = lbl_804188F0;
    fn_802ADDD8((s32 *)arg0 + 2, 8);
    fn_802B7178(arg0, 1);
    fn_802B710C(arg0, 0xFFF);
    return arg0;
}

void fn_802ACFF0(void) {

}

void fn_802ACFF4(void) {

}

void fn_802ACFF8(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_802AD01C(u8 *self) {
    return self + 8;
}

u8 *fn_802AD024(u8 *self) {
    return self + 8;
}

s32 fn_802AD02C(void) {
    return 1;
}

s32 fn_802AD034(void) {
    return 1;
}

void fn_802AD03C(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802AD060(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

s32 fn_802AD084(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802AD0CC(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802AD114(void) {
    return 0;
}

void fn_802AD11C(void) {

}

void fn_802AD120(void *arg0, s32 arg1) {
    extern char lbl_804188F0[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_804188F0;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x20);
    }
}

void fn_802AD1FC(void) {

}

void fn_802AD200(void) {

}

void fn_802AD204(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_802AD228(u8 *self) {
    return self + 8;
}

u8 *fn_802AD230(u8 *self) {
    return self + 8;
}

s32 fn_802AD238(void) {
    return 1;
}

s32 fn_802AD240(void) {
    return 1;
}

void fn_802AD248(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802AD26C(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

s32 fn_802AD290(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802AD2D8(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802AD320(void) {
    return 0;
}

void fn_802AD328(void) {

}

void fn_802AD32C(void *arg0, s32 arg1) {
    extern char lbl_80418870[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_80418870;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x20);
    }
}

s32 fn_802AD408(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802AD450(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802AD498(void) {
    return 0;
}

void fn_802AD4A0(void) {

}

void fn_802AE440(void);
void fn_802AE5EC(void) {
    fn_802AE440();
}

void fn_802AF384(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x20) = farg0;
    M2C_FIELD(arg0, f32 *, 0x24) = farg1;
}

s32 fn_802AF390(s32 arg0) {
    return arg0 + 0x10;
}

s32 fn_802AF398(s32 arg0) {
    return arg0 + 0x28;
}

void fn_802AF3A0(void *arg0, void *arg1, void *arg2, f32 farg0) {
    f32 temp_f13;
    f32 temp_f13_10;
    f32 temp_f13_11;
    f32 temp_f13_12;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f13_4;
    f32 temp_f13_5;
    f32 temp_f13_6;
    f32 temp_f13_7;
    f32 temp_f13_8;
    f32 temp_f13_9;

    temp_f13 = M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg2, f32 *, 0x20) = (f32) (((M2C_FIELD(arg1, f32 *, 0x20) - temp_f13) * farg0) + temp_f13);
    temp_f13_2 = M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg2, f32 *, 0x24) = (f32) (((M2C_FIELD(arg1, f32 *, 0x24) - temp_f13_2) * farg0) + temp_f13_2);
    temp_f13_3 = M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg2, f32 *, 0x10) = (f32) (((M2C_FIELD(arg1, f32 *, 0x10) - temp_f13_3) * farg0) + temp_f13_3);
    temp_f13_4 = M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(arg2, f32 *, 0x1C) = (f32) (((M2C_FIELD(arg1, f32 *, 0x1C) - temp_f13_4) * farg0) + temp_f13_4);
    temp_f13_5 = M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(arg2, f32 *, 0x28) = (f32) (((M2C_FIELD(arg1, f32 *, 0x28) - temp_f13_5) * farg0) + temp_f13_5);
    temp_f13_6 = M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD(arg2, f32 *, 0x2C) = (f32) (((M2C_FIELD(arg1, f32 *, 0x2C) - temp_f13_6) * farg0) + temp_f13_6);
    temp_f13_7 = M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg2, f32 *, 0x30) = (f32) (((M2C_FIELD(arg1, f32 *, 0x30) - temp_f13_7) * farg0) + temp_f13_7);
    temp_f13_8 = M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg2, f32 *, 0x34) = (f32) (((M2C_FIELD(arg1, f32 *, 0x34) - temp_f13_8) * farg0) + temp_f13_8);
    temp_f13_9 = M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg2, f32 *, 0x38) = (f32) (((M2C_FIELD(arg1, f32 *, 0x38) - temp_f13_9) * farg0) + temp_f13_9);
    temp_f13_10 = M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(arg2, f32 *, 0x3C) = (f32) (((M2C_FIELD(arg1, f32 *, 0x3C) - temp_f13_10) * farg0) + temp_f13_10);
    temp_f13_11 = M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(arg2, f32 *, 0x40) = (f32) (((M2C_FIELD(arg1, f32 *, 0x40) - temp_f13_11) * farg0) + temp_f13_11);
    temp_f13_12 = M2C_FIELD(arg0, f32 *, 0x44);
    M2C_FIELD(arg2, f32 *, 0x44) = (f32) (((M2C_FIELD(arg1, f32 *, 0x44) - temp_f13_12) * farg0) + temp_f13_12);
}

void fn_802AFF78(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((M2C_FIELD(arg2, f32 *, 0x10) * M2C_FIELD(arg1, f32 *, 0)) + M2C_FIELD(arg1, f32 *, 0x10));
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) ((M2C_FIELD(arg2, f32 *, 0x14) * M2C_FIELD(arg1, f32 *, 4)) + M2C_FIELD(arg1, f32 *, 0x14));
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) ((M2C_FIELD(arg2, f32 *, 0x18) * M2C_FIELD(arg1, f32 *, 8)) + M2C_FIELD(arg1, f32 *, 0x18));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) ((M2C_FIELD(arg2, f32 *, 0x1C) * M2C_FIELD(arg1, f32 *, 0xC)) + M2C_FIELD(arg1, f32 *, 0x1C));
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg2, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg2, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg2, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8));
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (M2C_FIELD(arg2, f32 *, 0xC) * M2C_FIELD(arg1, f32 *, 0xC));
}

void fn_802B0084(s32 arg0, s32 arg1) {
    M2C_UNK fn_802B000C(M2C_UNK, s32, s32);
    fn_802B000C(0, arg0, arg1);
}

void fn_8027873C(void);
void fn_802B092C(void) {
    fn_8027873C();
}

s32 fn_802B094C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) + 8;
}

s32 fn_802B0958(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

s32 fn_802B0D24(void) {
    return lbl_80496130;
}

s32 fn_802B0F90(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802B0FD8(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802B1020(void) {
    return 0;
}

void fn_802B1028(void) {

}

void fn_802B102C(void *arg0, s32 arg1) {
    extern char lbl_804189F0[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_804189F0;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x30);
    }
}

void fn_802B143C(void *arg0, s32 arg1) {
    extern char lbl_80418AF0[];
    extern char lbl_80418D70[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void (**lbl_80494DA0)(void *);
    u16 *ref;

    M2C_FIELD(arg0, void **, 4) = lbl_80418AF0;
    ref = M2C_FIELD(arg0, u16 **, 8);
    if (--*ref == 0) {
        lbl_80494DA0[1](ref);
    }
    M2C_FIELD(arg0, void **, 4) = lbl_80418D70;
    if (arg1 & 1) {
        lbl_80443318[0](arg0, 0x10);
    }
}

void fn_802B14CC(void *arg0) {
    extern s32 fn_802BC640(void *, s32);
    extern void fn_803B8C04(void *);
    extern void *lbl_80494DAC;
    u8 *str;

    str = (u8 *)arg0 + 8;
    M2C_FIELD(arg0, void **, 0xC) = lbl_80494DAC;
    lbl_80494DAC = arg0;
    if (fn_802BC640(str, 0x21) != 0) {
        fn_803B8C04(str);
    }
}

s32 fn_802B201C(void) {
    return lbl_80496130;
}

void fn_803B6FFC();
void fn_802B3A50(char *self) {
    extern void fn_803B6FFC(void *);
    fn_803B6FFC(self + 8);
}

void fn_802BC17C();
void fn_802B3ABC(char *self) {
    extern void fn_802BC17C(void *);
    fn_802BC17C(self + 8);
}

void fn_802BC36C();
void fn_802B3AE0(char *self) {
    extern void fn_802BC36C(void *);
    fn_802BC36C(self + 8);
}

u8 *fn_802B3B04(u8 *self) {
    return self + 8;
}

void fn_802B3B0C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

s32 fn_802B3B14(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_802B3B1C(void) {
    return 0;
}

s32 fn_802B3B24(void) {
    return 0;
}

extern void (*lbl_80443314[])(void);
void fn_802B3CA8(void) {
    lbl_80443314[0]();
}

s32 fn_802B461C(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802B4664(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802B46AC(void) {
    return 0;
}

void fn_802B46B4(void) {

}

s32 fn_802B4E80(void) {
    return lbl_80496130;
}

void fn_802B6E08(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    *arg0 = (temp_r0 & 0xF000FFFF) | ((temp_r0 & 0x0FFF0000) + 0x10000);
}

s32 fn_802B6F38(void) {
    return 0;
}

s32 fn_802B6F40(void) {
    return 0;
}

s32 fn_802B6F48(void) {
    return 0;
}

s32 fn_802B6F50(void) {
    return 0;
}

s32 fn_802B6F58(void) {
    return 0;
}

void fn_802B6FA0(void) {

}

void fn_802B6FA4(void) {

}

extern void fn_802D20E8(void *);
void fn_802B709C(void *self, s32 flags) {
    extern u8 lbl_80418D70[];
    extern void fn_802D20E8(void *);
    M2C_FIELD(self, void **, 4) = lbl_80418D70;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_802B70DC(s32 *arg0) {
    return *arg0 & 0x3F;
}

s32 fn_802B70E8(u32 *arg0) {
    return ((u32) *arg0 >> 0xEU) & 1;
}

u8 fn_802B70F4(u32 *arg0) {
    return (u8) ((u32) *arg0 >> 6U);
}

s32 fn_802B7100(s32 *arg0) {
    return *arg0 & 0x8000;
}

void fn_802B710C(s32 *arg0, s32 arg1) {
    *arg0 = (*arg0 & 0xF000FFFF) | (arg1 << 0x10);
}

void fn_802B7124(s32 *arg0, s32 arg1) {
    *arg0 = (*arg0 & 0xFFFFFFC0) | arg1;
}

void fn_802B7138(s32 *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = *arg0 & 0xFFFF7FFF;
    *arg0 = temp_r0;
    if (arg1 != 0) {
        *arg0 = temp_r0 | 0x8000;
    }
}

void fn_802B7158(s32 *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = *arg0 & 0xFFFFBFFF;
    *arg0 = temp_r0;
    if (arg1 != 0) {
        *arg0 = temp_r0 | 0x4000;
    }
}

void fn_802B7178(s32 *arg0, s32 arg1) {
    if (arg1 == 0) {
        *arg0 &= 0xFFFFC03F;
        return;
    }
    *arg0 = (*arg0 & 0xFFFFC03F) | (arg1 << 6);
}

void fn_802B71A8(s32 *arg0) {
    *arg0 += 0x40;
}

void fn_802B71B8(s32 *arg0) {
    *arg0 -= 0x40;
}

void fn_802B71C8(s32 *arg0) {
    *arg0 |= 0x40000000;
}

void fn_802B71D8(s32 *arg0) {
    *arg0 &= 0xBFFFFFFF;
}

s32 fn_802B71E8(u32 *arg0) {
    return ((u32) *arg0 >> 0x1EU) & 1;
}

void fn_802B71F4(void) {

}

void fn_802B71F8(void) {

}

void fn_802B71FC(void) {

}

void fn_802B7200(void) {

}

void fn_802B7204(void) {

}

void fn_802B7208(void) {

}

void fn_802B720C(void) {

}

void fn_802B7210(void) {

}

void fn_802B7214(void) {

}

void fn_802B7218(void) {

}

void fn_802B721C(void) {

}

void fn_802B7220(void) {

}

void fn_802B7224(void) {

}

void fn_802B7228(void) {

}

void fn_802B722C(void) {

}

void fn_802B7230(void) {

}

void fn_802B7234(void) {

}

void fn_802B7238(void) {

}

void fn_802B723C(void) {

}

s32 fn_802B7240(s32 arg0) {
    return arg0 - 0x10;
}

void fn_802B7248(void) {

}

void fn_802B724C(void) {

}

void fn_802B7250(void) {

}

void fn_802B7254(void) {

}

void fn_802B7258(void) {

}

s32 fn_802B72E8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 8) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7308(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 1) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7328(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 5) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7348(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 7) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7368(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 4) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7388(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 6) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B73A8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 9) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B73C8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0xA) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B73E8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0xB) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7408(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x14) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7428(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x16) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7448(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x15) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7468(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x18) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7488(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x1F) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B74A8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x17) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B74C8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x1A) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7520(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x1B) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7540(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x1C) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7560(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x1D) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7580(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x24) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B75A0(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x1E) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

void fn_802B76E0(void) {

}

void fn_802B76E4(void) {

}

void fn_802B76E8(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_802B770C(u8 *self) {
    return self + 8;
}

u8 *fn_802B7714(u8 *self) {
    return self + 8;
}

s32 fn_802B771C(void) {
    return 1;
}

s32 fn_802B7724(void) {
    return 1;
}

void fn_802B772C(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802B7750(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

s32 fn_802B7774(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802B77BC(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802B7804(void) {
    return 0;
}

void fn_802B780C(void) {

}

void fn_802B7810(void *arg0, s32 arg1) {
    extern char lbl_80418DF0[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, void **, 4) = lbl_80418DF0;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x20);
    }
}

void fn_802B7888(char *self) {
    extern void fn_802ADFFC(void *);
    fn_802ADFFC(self + 8);
}

void fn_802B78AC(char *self) {
    extern void fn_802AE360(void *);
    fn_802AE360(self + 8);
}

s32 fn_802B8CE0(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802B8D28(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802B8D70(void) {
    return 0;
}

void fn_802B8D78(void) {

}

void fn_802B8F3C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}

s32 fn_802B90B4(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802B90BC(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802B9104(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802B914C(void) {
    return 0;
}

void fn_802B9154(void) {

}

s32 fn_802BA008(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802BA050(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802BA098(void) {
    return 0;
}

void fn_802BA0A0(void) {

}

void fn_802BA10C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

s32 fn_802BAFDC(void) {
    return lbl_80496130;
}

s32 fn_802BAFE4(void) {
    return lbl_80496130;
}

s32 fn_802BB1A8(void) {
    return lbl_80496130;
}

s32 fn_802BB1B0(void) {
    return lbl_80496130;
}

s32 fn_802BB2FC(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802BB344(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802BB38C(void) {
    return 0;
}

void fn_802BB394(void) {

}

void fn_802BB41C(void *arg0) {
    extern void *lbl_80494D94;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D94;
    lbl_80494D94 = arg0;
}

void fn_802BB42C(void *arg0) {
    extern void *lbl_80494D94;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D94;
    lbl_80494D94 = arg0;
}

s32 fn_802BB43C(void) {
    return 0;
}

s32 fn_802BB444(void) {
    return 0;
}

void fn_802BB630(void *arg0) {
    extern void *lbl_80494D94;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D94;
    lbl_80494D94 = arg0;
}

s32 fn_802BB640(s32 *self) {
    return self[2];
}

void fn_802BB6CC(void) {
    lbl_80443314[0]();
}

void fn_802BB6F8(void) {
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;

    if ((void *) lbl_80494D98 != NULL) {
        do {
            temp_r9 = M2C_FIELD(lbl_80494D98, void **, 4);
            temp_r31 = M2C_FIELD(lbl_80494D98, void **, 8);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x74)(lbl_80494D98 + M2C_FIELD(temp_r9, s16 *, 0x70));
            if ((void *) lbl_80494D98 != NULL) {
                temp_r9_2 = M2C_FIELD(lbl_80494D98, void **, 4);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x64)(lbl_80494D98 + M2C_FIELD(temp_r9_2, s16 *, 0x60), 3);
            }
            lbl_80494D98 = temp_r31;
        } while (temp_r31 != NULL);
    }
}

void fn_802BB77C(void *arg0) {
    extern void *lbl_80494D98;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D98;
    lbl_80494D98 = arg0;
}

void fn_802BB78C(void *arg0) {
    extern void *lbl_80494D98;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D98;
    lbl_80494D98 = arg0;
}

s32 fn_802BB79C(void) {
    return 0;
}

s32 fn_802BB7A4(void) {
    return 0;
}

void fn_802BB99C(void *arg0) {
    extern void *lbl_80494D98;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D98;
    lbl_80494D98 = arg0;
}

f32 fn_802BB9AC(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 8);
}

void fn_802BBA38(void) {
    lbl_80443314[0]();
}

void fn_802BBAE8(void *arg0) {
    extern void *lbl_80494D9C;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D9C;
    lbl_80494D9C = arg0;
}

void fn_802BBAF8(void *arg0) {
    extern void *lbl_80494D9C;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D9C;
    lbl_80494D9C = arg0;
}

s32 fn_802BBB08(void) {
    return 0;
}

s32 fn_802BBB10(void) {
    return 0;
}

void fn_802BBCFC(void *arg0) {
    extern void *lbl_80494D9C;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D9C;
    lbl_80494D9C = arg0;
}

s32 fn_802BBD0C(s32 *self) {
    return self[2];
}

void fn_802BBD98(void) {
    lbl_80443314[0]();
}

s32 fn_802BC640(void **arg0, u32 arg1) {
    return arg1 < (u16) M2C_FIELD(*arg0, u16 *, 4);
}

s32 fn_802BCA14(void) {
    return 0;
}

s32 fn_802BCA1C(void) {
    return 0;
}

s32 fn_802BCBBC(void) {
    return 0;
}

s32 fn_802BCBC4(void) {
    return 0;
}

void fn_802BD608(s32 arg0, s32 arg1) {
    M2C_UNK fn_802BD324();
    M2C_UNK fn_802BD494(s32, s32);
    fn_802BD324();
    fn_802BD494(arg0, arg1);
}

void fn_802C43BC(void) {
    extern void *lbl_80494DAC;
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;

    if ((void *) lbl_80494DAC != NULL) {
        do {
            temp_r9 = M2C_FIELD(lbl_80494DAC, void **, 4);
            temp_r31 = M2C_FIELD(lbl_80494DAC, void **, 0xC);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x74)(lbl_80494DAC + M2C_FIELD(temp_r9, s16 *, 0x70));
            if ((void *) lbl_80494DAC != NULL) {
                temp_r9_2 = M2C_FIELD(lbl_80494DAC, void **, 4);
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x64)(lbl_80494DAC + M2C_FIELD(temp_r9_2, s16 *, 0x60), 3);
            }
            lbl_80494DAC = temp_r31;
        } while (temp_r31 != NULL);
    }
}

void fn_802C45A0(void) {
    M2C_UNK fn_802C44DC(M2C_UNK, M2C_UNK);
    fn_802C44DC(1, 0xFFFF);
}

