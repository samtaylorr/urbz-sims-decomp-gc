/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 fn_802D1E4C[];
extern u8 lbl_80419898[];
extern void *lbl_80494DF0;
extern void fn_802D8BEC(void *);
extern void *fn_802D1FC8(s32);
extern void fn_802D39E4(void *);
extern void fn_802D3CE4(void *, void *);
extern void *fn_802E0A18(void *, void *);
extern u8 lbl_803F054C[];
extern u8 lbl_803F0550[];
extern void fn_802D8B34(void *);
extern void fn_802D8CA4(void *, s32, s32, s32);
extern void fn_802D8EF8(void *);
extern u8 lbl_803F0554[];
static inline void EEngine_VCall0(u8 *o, s32 off) {
    u8 *vt = *(u8 **)(o + 0x338);
    (*(void (**)(void *))(vt + off + 4))(o + *(s16 *)(vt + off));
}

static inline void EEngine_VCall1(u8 *o, s32 off, s32 arg) {
    u8 *vt = *(u8 **)o;
    (*(void (**)(void *, s32))(vt + off + 4))(o + *(s16 *)(vt + off), arg);
}

u8 *fn_802E0460(u8 *self) {
    extern u8 lbl_80419898[];
    extern void *lbl_80494DF0;
    extern void fn_802D8B34(void *);
    fn_802D8B34(self);
    *(s32 *)(self + 0x340) = 0;
    *(u8 **)(self + 0x338) = lbl_80419898;
    *(s32 *)(self + 0x450) = 0;
    *(s32 *)(self + 0x454) = 0;
    *(s32 *)(self + 0x458) = 0;
    *(s32 *)(self + 0x45C) = 0;
    lbl_80494DF0 = self;
    *(s32 *)(self + 0x468) = 0;
    return self;
}

void fn_802E04BC(u8 *self) {
    extern u8 lbl_80419898[];
    extern void *lbl_80494DF0;
    extern void fn_802D8BEC(void *);
    *(u8 **)(self + 0x338) = lbl_80419898;
    lbl_80494DF0 = 0;
    fn_802D8BEC(self);
}

void fn_802E04F0(u8 *self) {
    extern void *fn_802D1FC8(s32);
    extern void fn_802D39E4(void *);
    extern void fn_802D3CE4(void *, void *);
    extern void *fn_802E0A18(void *, void *);
    extern u8 lbl_803F054C[];
    extern u8 lbl_803F0550[];
    void *p;
    if (*(void **)(self + 0x470) == 0) {
        void *mem = fn_802D1FC8(4);
        fn_802D39E4(mem);
        *(void **)(self + 0x470) = mem;
    }
    p = fn_802E0A18(self, lbl_803F054C);
    if (p != 0) {
        fn_802D3CE4(*(void **)(self + 0x470), p);
    } else {
        fn_802D3CE4(*(void **)(self + 0x470), lbl_803F0550);
    }
}

void fn_802E056C(u8 *self) {
    extern void *lbl_80494DF0;
    extern u8 *lbl_80494FDC;
    {
        u8 *e = (u8 *)lbl_80494DF0;
        u8 *vt = *(u8 **)(e + 0x338);
        (*(void (**)(void *))(vt + 0x1C))(e + *(s16 *)(vt + 0x18));
    }
    if (({
            u8 *o = lbl_80494FDC;
            u8 *vt = *(u8 **)o;
            (*(s32 (**)(void *))(vt + 0x24))(o + *(s16 *)(vt + 0x20));
        }) != 0) {
        {
            u8 *vt = *(u8 **)(self + 0x338);
            void *a = self + *(s16 *)(vt + 0xB0);
            (*(void (**)(void *))(vt + 0xB4))(a);
        }
        {
            u8 *vt = *(u8 **)(self + 0x338);
            (*(void (**)(void *))(vt + 0xBC))(self + *(s16 *)(vt + 0xB8));
        }
        if (*(s32 *)(self + 0x340) != 0) {
            u8 *vt = *(u8 **)(self + 0x338);
            void (*f)(void *) = *(void (**)(void *))(vt + 0xCC);
            f(self + *(s16 *)(vt + 0xC8));
        }
        {
            u8 *o = lbl_80494FDC;
            u8 *v = *(u8 **)o;
            void *a = o + *(s16 *)(v + 0x50);
            (*(void (**)(void *, s32))(v + 0x54))(a, 1);
        }
    }
}

void fn_802E0648(u8 *self) {
    extern u8 lbl_803F0554[];
    u8 *vt = *(u8 **)(self + 0x338);
    s32 r = (*(s32 (**)(void *))(vt + 0xC4))(self + *(s16 *)(vt + 0xC0));
    {
        u8 *p = self;
        s32 n = r;
        fn_802D8CA4(p, 0x18, n, 0);
        *(u8 **)(p + 0x32C) = lbl_803F0554;
        fn_802D8EF8(p);
    }
}

void fn_802E06B0(u8 *self) {
    u8 *vt = *(u8 **)(self + 0x338);
    (*(void (**)(void *))(vt + 0xA4))(self + *(s16 *)(vt + 0xA0));
}

void fn_802E08D8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x45C) = arg1;
        M2C_FIELD(arg0, s32 *, 0x454) = 1;
        M2C_FIELD(arg0, s32 *, 0x460) = arg2;
        M2C_FIELD(arg0, s32 *, 0x464) = arg3;
    }
}

void fn_802E08F8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x454) = 0;
}

s32 fn_802E0904(void *arg0) {
    return (u32)(M2C_FIELD(arg0, s32 *, 0x454) - 1) <= 1;
}

s32 fn_802E091C(void *arg0) {
    return (u32)(M2C_FIELD(arg0, s32 *, 0x450) - 1) <= 1;
}

void fn_802E0934(void *self, u32 count, char **list) {
    extern char *fn_802485B0(char *, char *);
    extern char *fn_80248784(char *, char *);
    extern void fn_802C686C(void *, void *, s32);
    extern void fn_802C69B0(void *, void *);
    extern void fn_802C728C(void *, void *, s32);
    extern char lbl_803F0560[];
    struct {
        char *data;
        u8 hdr[4];
        u8 buf[0x200];
    } str;
    struct {
        char *data;
        u8 hdr[4];
        u8 buf[0x200];
    } tmp;
    s32 i;

    M2C_FIELD(self, u8 *, 0x350) = 0;
    if (count > 100) {
        count = 0;
    }
    for (i = 0; i < (s32)count; i++) {
        if (i != 0) {
            fn_802485B0((char *)self + 0x350, lbl_803F0560);
        }
        fn_802485B0((char *)self + 0x350, list[i]);
        {
            char *s = list[i];
            void *sp = &str;
            fn_802C686C(sp, (u8 *)sp + 8, 0x200);
            fn_802C69B0(sp, s);
        }
        {
            void *tp = &tmp;
            fn_802C686C(tp, (u8 *)tp + 8, 0x200);
            fn_802C728C(&str, tp, 0x22);
        }
        fn_80248784(list[i], str.data);
    }
    M2C_FIELD(self, char ***, 0x34C) = list;
    M2C_FIELD(self, u32 *, 0x348) = count;
}

void *fn_802E0A18(void *self, void *key) {
    extern s32 fn_80248808(void *);
    extern void fn_802C686C(void *, void *, s32);
    extern void fn_802C69B0(void *, void *);
    extern s32 fn_802C7008(void *, void *);
    struct {
        u8 hdr[8];
        u8 buf[0x200];
    } str;
    u8 *result = 0;
    s32 i;

    if (key == 0) {
        result = *M2C_FIELD(self, u8 ***, 0x34C);
    } else {
        for (i = 0; i < M2C_FIELD(self, s32 *, 0x348); i++) {
            u8 *s = M2C_FIELD(self, u8 ***, 0x34C)[i];
            void *sp = &str;
            fn_802C686C(sp, (u8 *)sp + 8, 0x200);
            fn_802C69B0(sp, s);
            if (fn_802C7008(sp, key) == 0) {
                u8 **arr = M2C_FIELD(self, u8 ***, 0x34C);
                result = arr[i] + fn_80248808(key);
                goto done;
            }
        }
    }
done:
    return result;
}

void *fn_802E0AD8(void) {
    return fn_802D1E4C;
}

extern u8 fn_802D1F94[];
void *fn_802E0AE4(void) {
    return fn_802D1F94;
}

extern u8 fn_802D1EDC[];
void *fn_802E0AF0(void) {
    return fn_802D1EDC;
}

s32 fn_802E0AFC(void *arg0) {
    return *M2C_FIELD(arg0, s32 **, 0x470);
}

extern u8 lbl_803F050C[];
void *fn_802E0B08(void) {
    return lbl_803F050C;
}

extern u8 lbl_803F0540[];
void *fn_802E0B14(void) {
    return lbl_803F0540;
}

s32 fn_802E0B20(void) {
    return 0;
}

s32 fn_802E0B28(void) {
    return 0;
}

s32 fn_802E0B30(void) {
    return 8;
}

s32 fn_802E0B38(s32 arg0) {
    return arg0 + 0x350;
}

s32 fn_802E0B40(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x468);
}

void fn_802E0B48(u8 *self, s32 value) {
    *(s32 *)(self + 0x468) = value;
}

s32 fn_802E0B50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x46C);
}

void fn_802E0B58(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x46C) = arg1;
}

void fn_802E0B60(void) {

}

void fn_802E0B64(void) {

}

void fn_802E0B68(void) {

}

s32 fn_802E0B6C(void) {
    return 0x18000;
}

void fn_802E0B78(void) {

}

void fn_802E0CA0(u8 *self, s32 flags) {
    extern s32 lbl_80494DBC;
    extern u8 lbl_80419970[];
    extern u8 lbl_80419328[];
    void fn_802C7C90(void);
    void fn_802D8328(void *);
    void fn_802D8260(void *, s32);
    void fn_803B9594(void *);
    void fn_802D20E8(void *);
    s32 v = lbl_80494DBC;
    *(u8 **)self = lbl_80419970;
    if (v == 0) {
        fn_802C7C90();
    }
    fn_802D8328(self + 0x34);
    fn_802D8260(self + 0x34, 2);
    *(u8 **)self = lbl_80419328;
    fn_803B9594(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802E0D24(void) {
    extern s32 lbl_80494FDC;
    lbl_80494FDC = 0;
}

void fn_802E0D30(void) {

}

s32 fn_802E0D34(u8 *self) {
    extern u8 *lbl_80494FC4;
    extern u8 lbl_80452418[];
    extern s32 lbl_80496194;
    void fn_802D0F9C(void *);
    void fn_802E13B4(void);
    void fn_802E13B8(void);
    void fn_802DFB40(void);
    void fn_802D838C(void *);
    void fn_80363724(void);
    u8 *obj;
    u8 *vt;

    fn_802D0F9C(self);
    ((void (*)(void *))fn_802E0D30)(self);
    ((void (*)(void *))fn_802E13B4)(self);
    ((void (*)(void *))fn_802E0D30)(self);
    ((void (*)(void *))fn_802E13B8)(self);
    ((void (*)(void *))fn_802E0D30)(self);
    vt = *(u8 **)self;
    if ((*(s32 (**)(void *))(vt + 0x8C))(self + *(s16 *)(vt + 0x88)) == 0) {
        return 0;
    }
    ((void (*)(void *))fn_802E0D30)(self);
    fn_802DFB40();
    ((void (*)(void *))fn_802E0D30)(self);
    obj = lbl_80494FC4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, void *))(vt + 0x24))(obj + *(s16 *)(vt + 0x20), lbl_80452418);
    obj = lbl_80494FC4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, void *))(vt + 0x24))(obj + *(s16 *)(vt + 0x20), self + 0x10);
    fn_802D838C(self + 0x34);
    fn_802D838C(self + 0x34);
    *(s32 *)(self + 4) = 1;
    fn_80363724();
    lbl_80496194 = 1;
    return 1;
}

void fn_802E0E2C(u8 *self, s32 arg1) {
    extern u8 *lbl_80494FCC;
    extern u8 *lbl_80494FA4;
    u8 *obj;
    u8 *vt;
    obj = lbl_80494FCC;
    if (obj != 0) {
        vt = *(u8 **)(obj + 0x20);
        (*(void (**)(void *))(vt + 0x24))(obj + *(s16 *)(vt + 0x20));
    }
    obj = lbl_80494FA4;
    if (obj != 0) {
        vt = *(u8 **)obj;
        (*(void (**)(void *))(vt + 0x1C))(obj + *(s16 *)(vt + 0x18));
    }
    vt = *(u8 **)self;
    (*(void (**)(void *))(vt + 0xA4))(self + *(s16 *)(vt + 0xA0));
    if (arg1 != 0) {
        vt = *(u8 **)self;
        (*(void (**)(void *))(vt + 0xAC))(self + *(s16 *)(vt + 0xA8));
    }
}

void fn_802E0ED8(void *self, f32 dt) {
    extern s32 lbl_80494E00;
    extern s32 lbl_80494E04;
    extern f32 lbl_80494E18;
    extern f32 lbl_80494E1C;
    extern f32 lbl_80494E24;
    extern f32 lbl_80494E28;
    extern f32 lbl_804961B0;
    if ((s32) M2C_FIELD(self, s32 *, 8) != 0) {
        f32 a = lbl_80494E18 > lbl_80494E1C ? lbl_80494E18 : lbl_80494E1C;
        f32 b = lbl_80494E24 > lbl_80494E28 ? lbl_80494E24 : lbl_80494E28;
        dt = a > b ? a : b;
    }
    lbl_80494E04 = (s32) (dt / lbl_804961B0 + 0.5);
    if (lbl_80494E04 > 0) {
        if (lbl_80494E04 > 15) {
            lbl_80494E04 = 15;
        }
    } else {
        lbl_80494E04 = 1;
    }
    lbl_80494E00 += lbl_80494E04;
}

s32 fn_802E0FB4(void *arg0) {
    extern s32 lbl_80494E04;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
        return lbl_80494E04;
    }
    return 1;
}

void fn_802E0FCC(void) {
    extern s32 fn_80339244(void);
    extern char *lbl_80496220;
    char *vt;
    fn_80339244();
    vt = *(char **)lbl_80496220;
    (*(void (**)(void *))(vt + 0x114))(lbl_80496220 + *(s16 *)(vt + 0x110));
}

void fn_802E1008(void) {
    extern u8 *lbl_80496220;
    void fn_80339258(void);
    u8 *obj = lbl_80496220;
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *))(vt + 0x11C))(obj + *(s16 *)(vt + 0x118));
    fn_80339258();
}

void fn_802E12F8(u8 *self) {
    extern u8 *lbl_80495050;
    extern u8 *lbl_80494FC4;
    extern f32 lbl_80494E18;
    extern f32 lbl_80494E1C;
    extern f32 lbl_80494E20;
    void fn_802EE73C(void *);
    u8 *obj;
    u8 *vt;
    f32 (*fn)(void *, void *);
    void *arg;
    fn_802EE73C(lbl_80495050);
    obj = lbl_80495050;
    vt = *(u8 **)obj;
    (*(void (**)(void *))(vt + 0x3C))(obj + *(s16 *)(vt + 0x38));
    obj = lbl_80494FC4;
    vt = *(u8 **)obj;
    fn = *(f32 (**)(void *, void *))(vt + 0x2C);
    arg = obj + *(s16 *)(vt + 0x28);
    lbl_80494E20 = lbl_80494E1C;
    lbl_80494E1C = lbl_80494E18;
    lbl_80494E18 = fn(arg, self + 0x20);
}

void fn_802E1378(u8 *self) {
    extern u8 *lbl_80495220;
    u8 *obj = lbl_80495220;
    u8 *vt = *(u8 **)(obj + 0x338);
    (*(void (**)(void *, void *))(vt + 0x3C))(obj + *(s16 *)(vt + 0x38), self + 0x34);
}

void fn_802E13B4(void) {

}

void fn_802E13B8(void) {

}

void fn_802E1538(void) {
    extern u8 lbl_804448E8[];
    void fn_802D7EB0(void *, u32);
    fn_802D7EB0(lbl_804448E8, 0x80000000);
}

void fn_802E18CC(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) == arg1) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
}

void fn_802E18E4(void) {
    for (;;) {
    }
}

void fn_802E18E8(void *self, void *arg1) {
    s32 fn_802D0BC0(void);
    s32 fn_802D118C(s32);
    s32 fn_802D1194(s32);
    s32 fn_802D119C(s32);
    s32 fn_802D12C4(s32);
    s32 fn_802DCFE0(s32);
    M2C_FIELD(arg1, s32 *, 0) = fn_802D12C4(fn_802D0BC0());
    M2C_FIELD(arg1, u32 *, 4) = (u32) (fn_802DCFE0(fn_802D0BC0()) + 0x3FF) >> 0xAU;
    M2C_FIELD(arg1, u32 *, 8) = (u32) (fn_802D118C(fn_802D0BC0()) + 0x3FF) >> 0xAU;
    M2C_FIELD(arg1, u32 *, 0xC) = (u32) (fn_802D1194(fn_802D0BC0()) + 0x3FF) >> 0xAU;
    M2C_FIELD(arg1, s32 *, 0x10) = fn_802D119C(fn_802D0BC0());
}

void fn_802E1964(void *self, void *arg1) {
    extern char lbl_803F072C[];
    M2C_FIELD(arg1, char **, 0) = lbl_803F072C;
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg1, s32 *, 8) = 0;
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
}

void fn_802E1988(void *self, void *arg1) {
    extern char lbl_803F0738[];
    M2C_FIELD(arg1, char **, 0) = lbl_803F0738;
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg1, s32 *, 8) = 0;
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
}

void fn_802E19AC(void *self, void *arg1) {
    extern char lbl_803F0748[];
    M2C_FIELD(arg1, char **, 0) = lbl_803F0748;
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg1, s32 *, 8) = 0;
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
}

void fn_802E19D0(void *self, void *arg1) {
    extern char lbl_803F0754[];
    M2C_FIELD(arg1, char **, 0) = lbl_803F0754;
    M2C_FIELD(arg1, s32 *, 4) = 1;
    M2C_FIELD(arg1, s32 *, 8) = 0;
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
}

void fn_802E19F8(s32 arg0, s32 arg1) {
    s32 var_ctr;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        var_ctr = 3;
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}

void fn_802E1A20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void fn_802E1A28(void) {

}

void fn_802E1A2C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
}

s32 fn_802E1A34(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

void fn_802E1A3C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

s32 fn_802E1A44(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_802E1A4C(void) {

}

s32 fn_802E1A50(void) {
    return 1;
}

void fn_802E1A58(void) {
    fn_802E19F8(1, 0xFFFF);
}

