/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

static inline void ObjSelector_ClearPair(s32 *p) {
    p[0] = 0;
    p[1] = 0;
}

void *fn_8016C00C(void *arg0, s32 arg1, u32 arg2) {
    M2C_UNK fn_8016C0B8(void *);
    s32 fn_802D2058(s32);
    M2C_FIELD(arg0, u32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    if (0x7CFFU >= arg2) {
        M2C_FIELD(arg0, s32 *, 8) = fn_802D2058(arg2 * 2);
    } else {
        M2C_FIELD(arg0, u32 *, 4) = 0U;
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    fn_8016C0B8(arg0);
    return arg0;
}

void fn_8016C06C(void *arg0, s32 arg1) {
    void fn_802D211C(void *);
    void fn_802D20E8(void *);
    if (M2C_FIELD(arg0, void **, 8) != NULL) {
        fn_802D211C(M2C_FIELD(arg0, void **, 8));
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8016C0B8(void *arg0) {
    s32 i;

    for (i = 0; i < M2C_FIELD(arg0, s32 *, 4); i++) {
        M2C_FIELD(arg0, s16 **, 8)[i] = 0;
    }
}

void fn_8016C0EC(void) {
    M2C_UNK fn_8016C1A4();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x18);
    fn_8016C1A4();
}

void fn_8016C114(void) {
    M2C_UNK fn_8016C1A4();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x18);
    fn_8016C1A4();
}

void fn_8016C13C(void) {
    M2C_UNK fn_8016C1A4();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x18);
    fn_8016C1A4();
}

void fn_8016C164(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x64))((char *)obj + *(s16 *)(vt + 0x60), 3);
    }
}

void *fn_8016C1A4(void **self) {
    extern u8 lbl_804118F8[];
    void fn_801B3814(void *, s32, s32);
    *self = lbl_804118F8;
    fn_801B3814(self + 1, -1, 0);
    self[5] = 0;
    self[3] = 0;
    self[4] = 0;
    return self;
}

void fn_8016C1FC(void *arg0, s32 arg1) {
    extern char lbl_804118F8[];
    extern char lbl_80411998[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 0x0) = lbl_804118F8;
    fn_802D20E8(M2C_FIELD(arg0, void **, 0x10));
    M2C_FIELD(arg0, void **, 0x0) = lbl_80411998;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

s32 fn_8016C258(void) {
    return 1;
}

s16 fn_8016C260(void *arg0, u32 arg1) {
    struct { u8 pad[4]; s16 a[1]; } *p;
    s16 ret = 0;
    if (arg1 <= 0x1D) {
        p = M2C_FIELD(arg0, void **, 0xC);
        if (p != NULL) {
            ret = p->a[arg1];
        } else {
            p = M2C_FIELD(arg0, void **, 0x10);
            if (p != NULL) {
                ret = p->a[arg1];
            }
        }
    }
    return ret;
}

s16 fn_8016C2A4(void *arg0, u32 arg1) {
    struct { u8 pad[0x40]; s16 a[1]; } *p;
    s16 ret = 0;
    if (arg1 <= 0x1D) {
        p = M2C_FIELD(arg0, void **, 0xC);
        if (p != NULL) {
            ret = p->a[arg1];
        } else {
            p = M2C_FIELD(arg0, void **, 0x10);
            if (p != NULL) {
                ret = p->a[arg1];
            }
        }
    }
    return ret;
}

void fn_8016C2E8(void) {

}

void fn_8016C2EC(void) {

}

s32 fn_8016C374(void *arg0, void *arg1, s32 arg2);
void fn_801B3908(void *, s32);
void fn_801B3910(void *, u16);
s32 fn_8016C2F0(void *arg0, s32 arg1, s32 arg2) {
    extern u8 *lbl_8049665C;
    void fn_801B3908(void *, s32);
    void fn_801B3910(void *, u16);
    register void *a0 asm("r30") = arg0;
    register s32 a1 asm("r29") = arg1;
    register s32 a2 asm("r28") = arg2;
    void *obj;
    s32 result;

    obj = (*(void *(**)(u8 *))(*(u8 **)lbl_8049665C + 0x3C))(lbl_8049665C + *(s16 *)(*(u8 **)lbl_8049665C + 0x38));
    result = fn_8016C374(a0, obj, a2);
    if (result == 0) {
        a0 = (u8 *)a0 + 4;
        fn_801B3908(a0, a1);
        fn_801B3910(a0, a2);
    }
    return result;
}

s32 fn_8016C374(void *arg0, void *arg1, s32 arg2) {
    void *fn_803A6484(void *, void *);
    u8 *p;
    s32 n;
    void *t;

    if (arg1 != NULL) {
        t = M2C_FIELD(arg1, void **, 0xC);
        if (t != NULL) {
            p = M2C_FIELD(t, u8 **, 0x2C);
            n = 0;
            if (p != NULL) {
                n = *(s32 *)(p - 4);
            }
            M2C_FIELD(arg0, void **, 0xC) = fn_803A6484(p, p + n * 0x7C);
            return M2C_FIELD(arg0, void **, 0xC) != NULL ? 0 : -0x62;
        }
    }
    return -0x62;
}

void *fn_8016C5A0(void *arg0, u8 *arg1) {
    void fn_801B3824(void *, void *);
    fn_801B3824(arg0, arg1 + 4);
    return arg0;
}

s32 fn_8016C5D4(u8 **arg0, u8 *arg1) {
    u8 *vt = *arg0;
    return (*(s32 (**)(void *, s32, s16))(vt + 0x94))((u8 *)arg0 + *(s16 *)(vt + 0x90), *(s32 *)arg1, *(s16 *)(arg1 + 4)) == 0;
}

s32 fn_8016C618(void) {
    return 0;
}

s32 fn_8016C620(void) {
    return 0;
}

s32 fn_8016C628(void) {
    return 0;
}

s32 fn_8016C630(void *arg0, s32 arg1, void **arg2) {
    void *temp_r9;

    if (arg2 != NULL && (arg1 == 1 || arg1 == 0x4BE348E2)) {
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r9, void (**)(void *), 0x14)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x10));
        *arg2 = arg0;
        return 1;
    }
    return 0;
}

s32 fn_8016C6A0(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_8016C6B4(void *arg0) {
    s32 var_r3;
    void *temp_r9;

    var_r3 = M2C_FIELD(arg0, s32 *, 0x14) - 1;
    M2C_FIELD(arg0, s32 *, 0x14) = var_r3;
    if (var_r3 == 0) {
        if (arg0 != NULL) {
            temp_r9 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_r9, void (**)(void *, s32), 0x64)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x60), 3);
        }
        return 0;
    }
    return var_r3;
}

s32 fn_8016C710(void) {
    return 0;
}

s32 fn_8016C718(void) {
    return 0;
}

extern s32 lbl_80495C5C;
extern void fn_800F1A60(s32, s32);
void fn_8016C720(void) {
    fn_800F1A60((s32)&lbl_80495C5C, 2);
}

void *fn_8016C748(void *arg0) {
    void fn_80197AC8(void *);
    void fn_80197AD4(void *, s32, void *);
    void fn_8019F898(void *);
    extern char lbl_803D9EE8[];
    extern char lbl_80411A38[];
    fn_8019F898(arg0);
    M2C_FIELD(arg0, void **, 0x10) = lbl_80411A38;
    fn_80197AC8(arg0);
    fn_80197AD4(arg0, 2, lbl_803D9EE8);
    return arg0;
}

void fn_8016C7A0(void *arg0, s32 arg1) {
    void fn_80197B90(void *, s32);
    extern char lbl_80411A38[];
    extern u8 *lbl_8049665C;
    u8 *obj = lbl_8049665C;
    M2C_FIELD(arg0, void **, 0x10) = lbl_80411A38;
    (*(void (**)(u8 *, void *))(*(u8 **)obj + 0x11C))(obj + *(s16 *)(*(u8 **)obj + 0x118), arg0);
    fn_80197B90(arg0, arg1);
}

s32 fn_8016C804(void *arg0) {
    s32 fn_8019F95C(void *);
    extern u8 *lbl_8049665C;
    s32 ret;

    ret = fn_8019F95C(arg0);
    if (ret == 0) {
        (*(void (**)(u8 *, void *))(*(u8 **)lbl_8049665C + 0x114))(lbl_8049665C + *(s16 *)(*(u8 **)lbl_8049665C + 0x110), arg0);
    }
    return ret;
}

void *fn_8016C85C(void *arg0, s32 arg1) {
    void *ret;

    if (arg1 == 0xC) {
        return arg0;
    }
    if (arg1 == 0xD) {
        return arg0;
    }
    if (arg1 == 0xE) {
        return arg0;
    }
    if (arg1 == 0xF) {
        return arg0;
    }
    ret = NULL;
    if (arg1 == 0x10) {
        ret = arg0;
    }
    return ret;
}

extern s32 lbl_80495C70;
void fn_8016C894(void) {
    fn_800F1A60((s32)&lbl_80495C70, 2);
}

void *fn_8016C8BC(void *arg0) {
    void fn_801B3918(void *);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    fn_801B3918((char *)arg0 + 0x1C);
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    ObjSelector_ClearPair((s32 *)((char *)arg0 + 0x58));
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s16 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = -1;
    M2C_FIELD(arg0, s32 *, 0x74) = -1;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = -1;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0xFFFF0000;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    return arg0;
}

s32 fn_8016CB30(void *arg0) {
    u8 *p = M2C_FIELD(M2C_FIELD(arg0, char **, 0x38), u8 **, 0xC0);
    return p != NULL && p[4] != 0;
}

void fn_8016CB58(void *arg0) {
    extern char *lbl_8049665C;
    char *obj = lbl_8049665C;
    char *vt = *(char **)obj;
    M2C_FIELD(vt, void (**)(void *, s32), 0x24C)(obj + M2C_FIELD(vt, s16 *, 0x248), M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_8016CB94(void *arg0) {
    char *obj = M2C_FIELD(arg0, char **, 0x50);
    char *vt = *(char **)obj;
    M2C_FIELD(vt, void (**)(void *, void *), 0x154)(obj + M2C_FIELD(vt, s16 *, 0x150), arg0);
    return M2C_FIELD(arg0, s32 *, 0);
}

s16 fn_8016CBE0(void *arg0) {
    void *fn_8016CC44(void *);
    s16 x = M2C_FIELD(M2C_FIELD(arg0, char **, 0x38), s16 *, 0xE);
    if (x < 0) {
        if (x != -1) {
            return 0;
        }
        arg0 = fn_8016CC44(arg0);
        return M2C_FIELD(M2C_FIELD(arg0, char **, 0x38), s16 *, 0xE);
    }
    return x;
}

s32 fn_8016CC2C(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4);
}

void *fn_8016CC44(arg0)
    void *arg0;
{
    if (M2C_FIELD(arg0, void **, 0x60) == NULL) {
        char *obj = M2C_FIELD(arg0, char **, 0x50);
        char *vt = *(char **)obj;
        M2C_FIELD(arg0, void **, 0x60) = M2C_FIELD(vt, void *(**)(void *, void *), 0xAC)(obj + M2C_FIELD(vt, s16 *, 0xA8), arg0);
    }
    return M2C_FIELD(arg0, void **, 0x60);
}

void fn_8016CCA0(void *arg0) {
    char *obj = M2C_FIELD(arg0, char **, 0x50);
    char *vt = *(char **)obj;
    M2C_FIELD(vt, void (**)(void *, s32), 0x84)(obj + M2C_FIELD(vt, s16 *, 0x80), M2C_FIELD(M2C_FIELD(arg0, char **, 0x38), s32 *, 0x8C));
}

s32 fn_8016CCE0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s32 *, 0x1C);
}

void fn_8016CCEC(void) {

}

void fn_8016CCF0(void) {

}

void *fn_8016CCF4(void *arg0, void *arg1) {
    char *fn_8016DA34(void *);
    char *obj = fn_8016DA34(arg1);
    char *vt = *(char **)obj;
    M2C_FIELD(vt, void (**)(), 0x1C)(arg0, obj + M2C_FIELD(vt, s16 *, 0x18));
    return arg0;
}

extern s32 lbl_80495C78;
void fn_8016CDFC(void) {
    fn_800F1A60((s32)&lbl_80495C78, 2);
}

M2C_UNK *fn_8016CE24(void *arg0) {
    M2C_UNK fn_800F160C(M2C_UNK *);
    M2C_UNK fn_80246D44(M2C_UNK *);
    extern s32 lbl_80495C7C;
    M2C_UNK *var_r3;

    var_r3 = M2C_FIELD(arg0, M2C_UNK **, 0x84);
    if (var_r3 == NULL) {
        if ((s32) lbl_80495C7C == 0) {
            fn_800F160C(&lbl_80495C78);
            lbl_80495C7C = 1;
            fn_80246D44(&fn_8016CDFC);
        }
        var_r3 = &lbl_80495C78;
    }
    return var_r3;
}

void fn_8016CE78(void *arg0, s32 arg1) {
    void *fn_802D1FC8(s32);
    void *fn_800F160C(void *);
    void fn_800F1AA0(void *, s32);
    if (M2C_FIELD(arg0, void **, 0x84) == NULL) {
        M2C_FIELD(arg0, void **, 0x84) = fn_800F160C(fn_802D1FC8(4));
    }
    fn_800F1AA0(M2C_FIELD(arg0, void **, 0x84), arg1);
}

extern s32 lbl_80495C80;
void fn_8016CECC(void) {
    fn_800F1A60((s32)&lbl_80495C80, 2);
}

void fn_8016D218(void *arg0, s32 arg1) {
    extern char *lbl_80495050;
    extern char lbl_8045BA40[];
    void *fn_80338000(char *, s32, s32);
    void *fn_8032E230(void *);
    void fn_8032EBA4(void *, s32);
    s32 fn_802FF608(s32, s32);
    if (M2C_FIELD(arg0, char **, 0x94) != NULL) {
        s32 cur = fn_802FF608(M2C_FIELD(M2C_FIELD(arg0, char **, 0x94), s32 *, 0x20), 0);
        {
            char *g = lbl_80495050;
            char *vt = *(char **)g;
            void (*f)(void *, s32) = M2C_FIELD(vt, void (**)(void *, s32), 0xFC);
            f(g + M2C_FIELD(vt, s16 *, 0xF8), M2C_FIELD(M2C_FIELD(arg0, char **, 0x94), s32 *, 0x20));
        }
        if (cur != arg1) {
            char *vt = *(char **)lbl_80495050;
            M2C_FIELD(vt, void (**)(void *, s32), 0xAC)(lbl_80495050 + M2C_FIELD(vt, s16 *, 0xA8), cur);
        }
    } else {
        M2C_FIELD(arg0, void **, 0x94) = fn_8032E230(fn_80338000(lbl_8045BA40, 0x78, 4));
        fn_8032EBA4(M2C_FIELD(arg0, void *volatile *, 0x94), arg1);
    }
}

void fn_8016D2D8(void *arg0) {
    void fn_8031EA2C(void *);
    char *p = M2C_FIELD(arg0, char **, 0x94);
    if (p != NULL) {
        s32 t = M2C_FIELD(p, volatile s32 *, 0xC);
        if (M2C_FIELD(p, volatile s32 *, 0xC) != 0) {
            fn_8031EA2C(p);
            M2C_FIELD(arg0, s32 *, 0x94) = 0;
        }
    }
}

s16 fn_8016D328(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s16 *, 0x96);
}

s32 fn_8016D334(void) {
    void *fn_8016CC44();
    return (M2C_FIELD(M2C_FIELD(fn_8016CC44(), void **, 0x38), u16 *, 0x98) ^ 1) & 1;
}

s32 fn_8016D364(void) {
    return ((u32) (M2C_FIELD(M2C_FIELD(fn_8016CC44(), void **, 0x38), u16 *, 0x98) ^ 2) >> 1U) & 1;
}

extern char *lbl_80495050;
extern char lbl_8045BA40[];
void *fn_80338000(char *, s32, s32);
void *fn_8032E230(void *);
void fn_8032EBA4(void *, s32);
s32 fn_802FF608(s32, s32);
void fn_8031EA2C(void *);
s32 fn_8016D394(void *arg0) {
    char *p = M2C_FIELD(arg0, char **, 0x38);
    if (M2C_FIELD(p, s16 *, 0x14) != 0) {
        return 1;
    }
    return M2C_FIELD(p, s16 *, 0x8) != 0;
}

s32 fn_8016D3C4(void) {
    char *obj = fn_8016DBF0();
    char *vt;
    if (obj == NULL) {
        return 0;
    }
    vt = *(char **)obj;
    return M2C_FIELD(vt, s32 (**)(void *), 0x74)(obj + M2C_FIELD(vt, s16 *, 0x70)) != 0;
}

s32 fn_8016D41C(void *arg0) {
    char *p = M2C_FIELD(arg0, char **, 0x38);
    return M2C_FIELD(p, s16 *, 0x14) != 0 && M2C_FIELD(p, s16 *, 0x16) != -1;
}

void *fn_8016DBF0();
void *fn_8016D954(void);
s32 fn_800FCB50(s32, s32);
s32 fn_8016D444(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, char **, 0x38), s16 *, 0x12) == 2;
}

s16 fn_8016D45C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s16 *, 0x9E);
}

s32 fn_8016D468(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x74) == -1) {
        char *obj = fn_8016D954();
        char *vt = *(char **)obj;
        s32 v = M2C_FIELD(vt, s32 (**)(void *, s32), 0x74)(obj + M2C_FIELD(vt, s16 *, 0x70), 0);
        M2C_FIELD(arg0, s32 *, 0x74) = fn_800FCB50(M2C_FIELD(arg0, s32 *, 0xC), v);
    }
    return M2C_FIELD(arg0, s32 *, 0x74);
}

s32 fn_8016D4D0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x78) == -1) {
        char *obj = fn_8016D954();
        char *vt = *(char **)obj;
        s32 v = M2C_FIELD(vt, s32 (**)(void *, s32), 0x74)(obj + M2C_FIELD(vt, s16 *, 0x70), 1);
        M2C_FIELD(arg0, s32 *, 0x78) = fn_800FCB50(M2C_FIELD(arg0, s32 *, 0xC), v);
    }
    return M2C_FIELD(arg0, s32 *, 0x78);
}

void *fn_8016DBF0(arg0)
    void *arg0;
{
    if (M2C_FIELD(arg0, void **, 0x3C) == NULL) {
        char *obj = M2C_FIELD(arg0, char **, 0x50);
        char *vt = *(char **)obj;
        M2C_FIELD(vt, void (**)(void *, void *), 0x164)(obj + M2C_FIELD(vt, s16 *, 0x160), arg0);
    }
    return M2C_FIELD(arg0, void **, 0x3C);
}

s32 fn_8016DC48(s32 arg0) {
    extern char *lbl_8049665C;
    char *obj = lbl_8049665C;
    char *vt = *(char **)obj;
    return (*(s32 (**)(void *, s32))(vt + 0x174))(obj + *(s16 *)(vt + 0x170), arg0);
}

s32 fn_8016DC84(s32 arg0) {
    extern char *lbl_8049665C;
    char *obj = lbl_8049665C;
    char *vt = *(char **)obj;
    return (*(s32 (**)(void *, s32))(vt + 0x17C))(obj + *(s16 *)(vt + 0x178), arg0);
}

void fn_8016DCC0(void *arg0) {
    void fn_800FB720(void *);
    s16 i;

    for (i = 0; i < 4; i++) {
        if (((struct { u8 pad[0x40]; void *a[1]; } *)arg0)->a[i] != NULL) {
            fn_800FB720(((struct { u8 pad[0x40]; void *a[1]; } *)arg0)->a[i]);
            ((struct { u8 pad[0x40]; void *a[1]; } *)arg0)->a[i] = NULL;
        } else {
            ((struct { u8 pad[0x40]; void *a[1]; } *)arg0)->a[i] = NULL;
        }
    }
}

extern s32 lbl_80495C88;
void fn_8016E5DC(void) {
    fn_800F1A60((s32)&lbl_80495C88, 2);
}

void *fn_8016E604(void *self, s32 a, s32 b) {
    M2C_FIELD(self, s32 *, 0) = a;
    M2C_FIELD(self, s32 *, 4) = 0;
    M2C_FIELD(self, s32 *, 8) = b;
    M2C_FIELD(self, s32 *, 0x1C) = 0;
    return self;
}

void *fn_8016E620(void *self, s32 a, void *obj, s32 b) {
    void fn_8016E6FC(void *, void *);
    M2C_FIELD(self, s32 *, 0) = a;
    M2C_FIELD(self, s32 *, 4) = 0;
    M2C_FIELD(self, s32 *, 8) = b;
    M2C_FIELD(self, s32 *, 0x1C) = 0;
    fn_8016E6FC(self, obj);
    return self;
}

void fn_8016E668(void *self, s32 flags) {
    void fn_802D20E8(void *);
    s32 i;

    if (M2C_FIELD(self, void **, 0x1C) != NULL) {
        for (i = 0; i < 8; i++) {
            char *obj = *M2C_FIELD(self, char ***, 0x1C);
            char *vt = M2C_FIELD(obj, char **, 4);
            void (*f)(void *, s32, s16) = M2C_FIELD(vt, void (**)(void *, s32, s16), 0x1B4);
            f(obj + M2C_FIELD(vt, s16 *, 0x1B0), i, ((s16 *)((char *)self + 0xC))[i]);
        }
        M2C_FIELD(self, void **, 0x1C) = NULL;
    }
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8016E6FC(void *self, char *obj) {
    if (obj != NULL) {
        char *vt = M2C_FIELD(obj, char **, 4);
        obj = M2C_FIELD(vt, char *(**)(void *), 0x1D4)(obj + M2C_FIELD(vt, s16 *, 0x1D0));
    }
    M2C_FIELD(self, char **, 4) = obj;
}

void fn_8016ECF0(void *self, void *arg1) {
    void fn_8016F238(void *, void *);
    void fn_8016ED90(void *, void *);
    char *obj = M2C_FIELD(self, char **, 4);
    char *vt = M2C_FIELD(obj, char **, 4);
    if (M2C_FIELD(vt, s32 (**)(void *), 0x354)(obj + M2C_FIELD(vt, s16 *, 0x350)) != 0) {
        char *obj2 = M2C_FIELD(self, char **, 4);
        char *vt2 = M2C_FIELD(obj2, char **, 4);
        char *(*f)(void *) = M2C_FIELD(vt2, char *(**)(void *), 0x2D4);
        if (M2C_FIELD(f(obj2 + M2C_FIELD(vt2, s16 *, 0x2D0)), s16 *, 0x10) > 0) {
            return;
        }
    }
    if (M2C_FIELD(self, s32 *, 8) != 0) {
        fn_8016F238(self, arg1);
    } else {
        fn_8016ED90(self, arg1);
    }
}

void fn_8016F098(void *arg0, void *arg1, void *arg2) {
    extern void *lbl_804966F4;
    void fn_8016E74C(void *, void *, s32, s32, s32);
    void fn_8016F528(void *, void *);
    s32 fn_8016F500(void *);
    s32 n;

    lbl_804966F4 = arg2;
    n = fn_8016F500(arg1);
    fn_8016E74C(arg0, arg2, 0, 0, 1);
    if (n == fn_8016F500(arg1)) {
        u32 flags = M2C_FIELD(arg2, u32 *, 0x44);
        if (!(flags & 0x10)) {
            if (flags & 8) {
                fn_8016F528(arg1, arg2);
            }
        }
    }
}

s32 fn_8016F120(void) {
    extern s32 lbl_804944E0;
    extern s32 lbl_804966F0;
    extern s32 lbl_804966F4;
    return lbl_804944E0 != 0 && lbl_804966F0 != 0 && lbl_804966F4 != 0;
}

s32 *fn_8016F4AC(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

extern void fn_8016F714(s32);
extern void fn_802D20E8(s32);
void fn_8016F4C0(s32 self, s32 flags) {
    fn_8016F714(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8016F500(M2C_UNK **arg0) {
    M2C_UNK *var_r3;
    s32 var_r9;

    var_r3 = *arg0;
    var_r9 = 0;
    if (var_r3 != NULL) {
        do {
            var_r3 = *var_r3;
            var_r9 += 1;
        } while (var_r3 != NULL);
    }
    return var_r9;
}

void fn_8016F528(void **arg0, void *arg1) {
    void *fn_8011677C(s32);
    void **fn_801169A0(void *, void *);
    void **node;
    void **tail;

    node = fn_801169A0(fn_8011677C(0x58), arg1);
    *node = NULL;
    tail = (void **)arg0[1];
    if (tail != NULL) {
        *tail = node;
        arg0[1] = node;
    } else {
        arg0[0] = node;
        arg0[1] = node;
    }
}

void fn_8016F58C(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *fn_8011677C(s32);
    void **fn_80116D64(void *, s32, s32, s32, s32);
    void **node;
    void **tail;

    node = fn_80116D64(fn_8011677C(0x58), arg1, arg2, arg3, arg4);
    *node = NULL;
    tail = (void **)arg0[1];
    if (tail != NULL) {
        *tail = node;
        arg0[1] = node;
    } else {
        arg0[0] = node;
        arg0[1] = node;
    }
}

void fn_8016F714(s32 self) {
    void **list = (void **)self;
    char *node;
    char *next;
    char *vt;

    next = (char *)list[0];
    while (next != NULL) {
        node = next;
        next = *(char **)next;
        if (node != NULL) {
            vt = *(char **)(node + 0x54);
            (*(void (**)(void *, s32))(vt + 0xC))(node + *(s16 *)(vt + 8), 3);
        }
    }
    list[1] = NULL;
    list[0] = NULL;
}

void fn_8016F784(M2C_UNK **arg0) {
    M2C_UNK *temp_r9;

    temp_r9 = *arg0;
    if (temp_r9 != NULL) {
        *arg0 = *temp_r9;
    }
}

s32 fn_8016F79C(s32 *arg0) {
    s32 temp_r30;

    temp_r30 = *arg0;
    fn_8016F784(arg0);
    return temp_r30;
}

void fn_8016F7D0(s32 arg0, s32 arg1) {
    void fn_801A3204(u8 *);
    void fn_801A3280(u8 *, s32);
    extern u8 lbl_80434E48[];
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_801A3204(lbl_80434E48);
        } else {
            fn_801A3280(lbl_80434E48, 2);
        }
    }
}

void fn_8016F824(void) {
    void fn_8016F7D0(s32, s32);
    fn_8016F7D0(1, 0xFFFF);
}

void fn_8016F850(void) {
    void fn_8016F7D0(s32, s32);
    fn_8016F7D0(0, 0xFFFF);
}

