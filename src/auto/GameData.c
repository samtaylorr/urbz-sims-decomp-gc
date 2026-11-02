/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80495B9C;
extern s32 lbl_80495BA0;
extern u8 *lbl_80496650;
extern s32 lbl_8049440C;
extern s32 lbl_80494428;
extern s32 lbl_8041F7A0[];
void fn_801238C4(u8 *obj, s32 arg);

void fn_80043EA8(s16 *out, u16 idx) {
    extern f32 lbl_803F5DF8[][5];
    extern const f32 lbl_803C61D0[];
    extern const f32 lbl_803C61D4[];
    f32 *src;
    s32 i;

    if (idx <= 8) {
        src = lbl_803F5DF8[idx];
        for (i = 0; i < 5; i++) {
            *out++ = *src++ * lbl_803C61D0[0] + lbl_803C61D4[0];
        }
    }
}

void *fn_80043F0C(s32 arg0) {
    extern s32 lbl_804940B8;
    extern void **lbl_8041F730[];
    void fn_80043C40(void);
    void **p;

    if (lbl_804940B8 == 0) {
        fn_80043C40();
    }
    if (arg0 < 0) {
        arg0 = 0;
    } else if (arg0 > 8) {
        arg0 = 8;
    }
    p = lbl_8041F730[arg0];
    return p != NULL ? *p : NULL;
}

s16 fn_80043F84(void *arg0) {
    extern void **lbl_8041F730[];
    s32 fn_800F8148(void *, void *);
    void ***slot = lbl_8041F730;
    s32 i;

    for (i = 0; i <= 8; i++) {
        void **p = *slot++;
        if (fn_800F8148(p != NULL ? *p : NULL, arg0) == 0) {
            return i;
        }
    }
    return 0;
}

s32 fn_80043FF8(void) {
    M2C_UNK fn_80043C40();
    fn_80043C40();
    return 0;
}

s32 fn_8004401C(void) {
    fn_80043C40();
    return 0;
}

void *fn_80044040(void *arg0, s32 arg1) {
    extern char lbl_80407FA0[];
    M2C_FIELD(arg0, char **, 0xC) = lbl_80407FA0;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}

void fn_80044064(void *self, s32 flags) {
    void fn_802D20E8(void *);
    void fn_800440B4(void *);
    extern char lbl_80407FA0[];
    M2C_FIELD(self, char **, 0xC) = lbl_80407FA0;
    fn_800440B4(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800440B0(void) {

}

void fn_800440B4(void) {

}

void fn_80044A38(s32 *self) {
    self[1] = 1;
}

void *fn_80045190(void *arg0) {
    extern u8 lbl_80407FA0[];
    M2C_FIELD(arg0, void **, 0xC) = lbl_80407FA0;
    return arg0;
}

s32 fn_800451A4(s32 self, s32 flags) {
    return (flags >> 2) & 1;
}

u8 fn_800451AC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xB);
}

void fn_800451B4(s32 self, s32 flags) {
    void fn_80048AA0(s32);
    void fn_80047AEC(s32);
    void fn_802D20E8(s32);
    fn_80048AA0(self);
    fn_80047AEC(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_80045498(void) {
    extern s32 lbl_8041FA38[];
    extern u8 *lbl_80496650;
    void fn_80123824(void);
    u8 *obj;
    u8 *vt;
    lbl_8041FA38[0] = 0;
    obj = lbl_80496650;
    vt = *(u8 **)obj;
    (*(void (**)(void *))(vt + 0x1CC))(obj + *(s16 *)(vt + 0x1C8));
    fn_80123824();
}

void fn_800454E0(s32 *self) {
    self[0x4C / 4] = 0;
    lbl_80495B9C = 0;
    self[0x50 / 4] = 0;
    lbl_80495BA0 = 0;
    self[0x5C / 4] = 0;
    self[0x68 / 4] = 0;
}

void fn_80045600(void) {
    fn_801238C4((*(u8 *(**)(u8 *))(*(u8 **)lbl_80496650 + 0x1CC))(lbl_80496650 + *(s16 *)(*(u8 **)lbl_80496650 + 0x1C8)), lbl_8049440C);
    if (lbl_8041F7A0[0] != 0) {
        *(s16 *)((*(u8 *(**)(u8 *))(*(u8 **)lbl_80496650 + 0x1CC))(lbl_80496650 + *(s16 *)(*(u8 **)lbl_80496650 + 0x1C8)) + 0x16A) = 0;
    } else {
        *(s16 *)((*(u8 *(**)(u8 *))(*(u8 **)lbl_80496650 + 0x1CC))(lbl_80496650 + *(s16 *)(*(u8 **)lbl_80496650 + 0x1C8)) + 0x16A) = 1;
    }
}

extern s32 lbl_80495B9C;
extern s32 lbl_80495BA0;
extern u8 *lbl_80496650;
extern s32 lbl_8049440C;
extern s32 lbl_80494428;
extern s32 lbl_8041F7A0[];
extern u8 lbl_8041F754[];
void fn_801238C4(u8 *obj, s32 arg);
void fn_80045698(u8 *arg);
void fn_8004577C(u8 *arg);
void fn_800458C0(void) {
    fn_80045698(lbl_8041F754);
}

void fn_800458E8(void) {
    u8 *vt;
    u8 *obj;

    fn_8004577C(lbl_8041F754);
    obj = (*(u8 *(**)(u8 *))(*(u8 **)lbl_80496650 + 0x1CC))(lbl_80496650 + *(s16 *)(*(u8 **)lbl_80496650 + 0x1C8));
    vt = *(u8 **)obj;
    (*(void (**)(u8 *, s32, s32))(vt + 0x8C))(obj + *(s16 *)(vt + 0x88), lbl_8049440C, lbl_80494428);
}

void fn_8004681C(void *arg0) {
    void fn_80045ED4(void *);
    s32 found;
    s32 i;
    found = 0;
    for (i = 0; i < 4; i++) {
        s32 *a = (s32 *)((u8 *)M2C_FIELD(arg0, void **, 0x38) + 0x530);
        if (a[i] != 0) {
            found = 1;
            break;
        }
    }
    if (found) {
        fn_80045ED4(arg0);
    }
}

s32 fn_80046F9C(void) {
    s32 fn_8026430C();
    s32 r = fn_8026430C();
    switch (r) {
    case 4:
    case 5:
    case 6:
    case 11:
        break;
    default:
        return 1;
    }
    return 0;
}

void fn_80046FE0(void) {

}

s32 fn_80046FE4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x154) != 0;
}

void fn_80046FFC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x154) = (s32) (M2C_FIELD(arg0, s32 *, 0x154) | (1 << arg1));
}

void fn_80047014(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x154) &= ~(1 << arg1);
}

s32 fn_80047A08(void *arg0, s32 arg1) {
    extern void *lbl_80494FCC;
    extern s32 fn_803338C0(void *);
    s32 ret = 0;

    if (fn_803338C0(lbl_80494FCC) != 0) {
        if (arg1 != 0) {
            if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
                ret = 1;
            } else {
                ret = 0;
            }
        } else if (M2C_FIELD(arg0, s32 *, 8) == 0) {
            ret = 1;
        }
    }
    return ret;
}

s32 fn_80047A74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x50) == 0;
}

void fn_80047A84(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x50) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xA4) == 0)) {
        M2C_FIELD(arg0, s32 *, 0xA4) = 1;
    }
}

void fn_80047AA8(void) {
    extern void *lbl_8041E640[];
    extern s32 lbl_8041F7C4[];
    extern void fn_800D53B8(void *, s32 *);
    s32 sp8;

    lbl_8041F7C4[0] = 0;
    sp8 = 1;
    fn_800D53B8(lbl_8041E640[0], &sp8);
}

void fn_80047AE8(void) {

}

void fn_80047AEC(void) {

}

void fn_80047AF0(void) {

}

void fn_80047AF4(void *arg0) {

}

void fn_80047AF8(void) {

}

s32 fn_80047AFC(void) {
    return 1;
}

void fn_80047B04(void) {

}

void fn_80047B08(void) {

}

void fn_80047B0C(void) {

}

void fn_8004876C(void) {

}

void fn_80048770(void *arg0, s32 arg1) {
    extern const f32 lbl_803C6620[];
    void fn_800CEEC8(void *);
    void fn_800CE474(void *);
    void fn_80047EF8(void *, s32, s32);
    if (M2C_FIELD(arg0, void **, 0x104) != 0) {
        s32 *p;
        fn_800CEEC8(M2C_FIELD(arg0, void **, 0x104));
        p = M2C_FIELD(arg0, s32 **, 0x108);
        p[1] |= 1;
        fn_800CE474(p);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x108), f32 *, 0x30) = lbl_803C6620[0];
        ((void (*)(void *))fn_8004876C)(arg0);
        fn_80047EF8(arg0, M2C_FIELD(arg0, s32 *, 0x10C), arg1);
    }
}

void fn_800487EC(void *arg0) {
    M2C_UNK fn_800CE5A8(void *);
    void *temp_r9;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x104) != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x108);
        if (temp_r9 != NULL) {
            M2C_FIELD(temp_r9, s32 *, 4) = (s32) (M2C_FIELD(temp_r9, s32 *, 4) & 0xFFFFFFFE);
            fn_800CE5A8(temp_r9);
        }
    }
}

void fn_80048900(void *arg0, f32 arg1);
void fn_80048834(void *arg0, f32 arg1) {
    extern const f32 lbl_803C6624[];
    extern const f32 lbl_803C6628[];
    f32 *p;
    fn_80048770(arg0, 0);
    p = (f32 *)((u8 *)arg0 + 0x130);
    p[2] = arg1;
    p[0] = arg1;
    M2C_FIELD(p, s32 *, 0x10) = 1;
    M2C_FIELD(p, s32 *, 0xC) = 0;
    p[1] = lbl_803C6624[0] / arg1;
    fn_80048900(arg0, lbl_803C6628[0]);
}

void fn_800488AC(void *arg0, f32 arg1) {
    extern const f32 lbl_803C662C[];
    extern const f32 lbl_803C6630[];
    f32 *p;
    p = (f32 *)((u8 *)arg0 + 0x130);
    p[2] = arg1;
    p[0] = arg1;
    M2C_FIELD(p, s32 *, 0x10) = 1;
    M2C_FIELD(p, s32 *, 0xC) = 1;
    p[1] = lbl_803C662C[0] / arg1;
    fn_80048900(arg0, lbl_803C6630[0]);
}

void fn_800489CC(void *arg0, f32 arg1) {
    extern const f32 lbl_803C6638[];
    void fn_80048084(void *, s32, f32);
    void fn_80047B10(void *, f32);
    if (M2C_FIELD(arg0, void **, 0x104) != 0) {
        if (arg1 > lbl_803C6638[0]) {
            arg1 = lbl_803C6638[0];
        }
        fn_80048900(arg0, arg1);
        fn_80048084(arg0, M2C_FIELD(arg0, s32 *, 0x10C), arg1);
        fn_80047B10(arg0, arg1);
    }
}

void fn_80048A48(void *arg0, void *arg1) {
    void fn_800CEF00(void *, void *);
    char *vt = M2C_FIELD(arg1, char **, 0x68);
    void (*f)(void *) = M2C_FIELD(vt, void (**)(void *), 0x1DC);
    f((char *)arg1 + M2C_FIELD(vt, s16 *, 0x1D8));
    if (M2C_FIELD(arg0, void **, 0x104) != 0) {
        fn_800CEF00(M2C_FIELD(arg0, void **, 0x104), arg1);
    }
}

void fn_80048AA0(s32 arg0) {
    void fn_800CEE00(void *);
    u8 *self = (u8 *)arg0;
    if (*(u8 **)(self + 0x104) != 0) {
        u8 *obj;
        fn_800CEE00(*(u8 **)(self + 0x104));
        obj = *(u8 **)(self + 0x104);
        if (obj != 0) {
            u8 *vt = *(u8 **)(obj + 0x44);
            (*(void (**)(void *, s32))(vt + 0xc))(obj + *(s16 *)(vt + 8), 3);
        }
        *(s32 *)(self + 0x104) = 0;
        *(s32 *)(self + 0x108) = 0;
        *(s32 *)(self + 0x10C) = 0;
    }
}

void fn_80048DF8(void) {
    fn_80048D04();
}

s32 fn_80049014(void) {
    extern s32 lbl_8049761C;
    if (lbl_8049761C == 1) {
        return 0x7E10A3FF;
    }
    return 0xDAA5754C;
}

s32 fn_80049034(void) {
    extern s32 lbl_8049761C;
    if (lbl_8049761C == 1) {
        return 0xE8AFAC33;
    }
    return 0x6BB97944;
}

void fn_80049054(void) {
    extern f32 lbl_803C665C[];
    extern u8 *lbl_80495050;
    f32 v[3];
    f32 *p;
    u8 *obj;
    u8 *vt;
    void (*f)(void *, f32 *, s32, s32);
    void *self;

    obj = lbl_80495050;
    p = v;
    vt = *(u8 **)obj;
    self = obj + *(s16 *)(vt + 0x48);
    p[2] = lbl_803C665C[0];
    p[1] = lbl_803C665C[0];
    v[0] = lbl_803C665C[0];
    f = *(void (**)(void *, f32 *, s32, s32))(vt + 0x4C);
    f(self, p, 0xFF, 1);
}

void fn_800490B0(void) {
    extern f32 lbl_803C6660[];
    extern u8 *lbl_80495050;
    f32 v[3];
    f32 *p;
    u8 *obj;
    u8 *vt;
    void (*f)(void *, f32 *, s32, s32);
    void *self;

    obj = lbl_80495050;
    p = v;
    vt = *(u8 **)obj;
    self = obj + *(s16 *)(vt + 0x48);
    p[0] = lbl_803C6660[0];
    p[1] = lbl_803C6660[0];
    p[2] = lbl_803C6660[0];
    f = *(void (**)(void *, f32 *, s32, s32))(vt + 0x4C);
    f(self, p, 0xFF, 1);
}

extern u8 lbl_8041F94C[];
void fn_8004E824(u8 *arg);
void fn_8004910C(void) {
    fn_8004E824(lbl_8041F94C);
}

void fn_8004930C(void) {
    extern u8 lbl_80452418[];
    extern u8 *lbl_80494FC4;
    extern f32 lbl_804957D0;
    u8 *obj;
    u8 *vt;

    obj = lbl_80494FC4;
    vt = *(u8 **)obj;
    lbl_804957D0 = (*(f32 (**)(void *, void *))(vt + 0x2C))(obj + *(s16 *)(vt + 0x28), lbl_80452418);
}

void fn_80049588(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern u8 lbl_8041F754[];
    extern s32 lbl_80494F40;
    extern s32 lbl_80494F44;
    void fn_800DC198(void);
    void fn_800495E8(s32, s32);

    fn_80047AF4(lbl_8041F754);
    if (arg3 != 0) {
        lbl_80494F44 = 1;
        lbl_80494F40 = 1;
        fn_800DC198();
    }
    fn_800495E8(arg0, arg2);
}

void fn_800495E8(s32 arg0, s32 arg1) {

}

void fn_80049738(void) {
    M2C_UNK fn_800495EC(M2C_UNK, M2C_UNK);
    fn_800495EC(1, 0xFFFF);
}

void fn_80049764(void) {
    M2C_UNK fn_800495EC(M2C_UNK, M2C_UNK);
    fn_800495EC(0, 0xFFFF);
}

