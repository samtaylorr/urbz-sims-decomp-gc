/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct TreeKey {
    s32 a;
    u16 b;
} TreeKey;

typedef struct TTQDPtrVec {
    void **begin;
    void **end;
    void *unk8;
    void **cap;
} TTQDPtrVec;

static inline void TTQDPtrVec_DestroyRange(void **it, void **end) {
    void *obj;
    void *vt;
    for (; it != end; it++) {
        obj = *it;
        if (obj != NULL) {
            vt = *(void **)obj;
            M2C_FIELD(vt, void (**)(void *), 0x1C)((char *)obj + M2C_FIELD(vt, s16 *, 0x18));
        }
    }
}

static inline void TTQDPtrVec_Erase(TTQDPtrVec *vec, void **first, void **last) {
    TTQDPtrVec_DestroyRange(first, last);
    vec->end = first;
}

static inline void TTQDPtrVec_Clear(TTQDPtrVec *vec) {
    TTQDPtrVec_Erase(vec, vec->begin, vec->end);
}

static inline void TTQDPtrVec_Dtor(TTQDPtrVec *vec) {
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    void *p;
    u32 size;
    TTQDPtrVec_DestroyRange(vec->begin, vec->end);
    p = vec->begin;
    if (p != NULL) {
        size = (u32)(vec->cap - (void **)p) * sizeof(void *);
        if (size > 0x80) {
            fn_802D20E8(p);
        } else {
            fn_803997AC(p, size);
        }
    }
}

static inline void TTQD_DtorBody(s32 *self) {
    extern u8 lbl_80415928[];
    self[0] = (s32)lbl_80415928;
    self[1] = 0;
    TTQDPtrVec_Clear((TTQDPtrVec *)(self + 2));
}

static inline void TTQD_DtorVecs(s32 *self, TTQDPtrVec *a, TTQDPtrVec *b) {
    extern u8 lbl_80415928[];
    self[0] = (s32)lbl_80415928;
    self[1] = 0;
    TTQDPtrVec_Clear(a);
    TTQDPtrVec_Dtor(b);
}

static inline void TTQD_Dtor(s32 *self) {
    TTQDPtrVec *vec = (TTQDPtrVec *)(self + 2);
    TTQD_DtorBody(self);
    TTQDPtrVec_Dtor(vec);
}

void fn_800F77AC(void);
extern s32 lbl_80495D68;
extern void fn_800F1A60(s32, s32);
void fn_801B3724(void) {
    fn_800F1A60((s32)&lbl_80495D68, 2);
}

void fn_801B374C(void) {
    fn_800F77AC();
}

s32 fn_801B376C(void) {
    return 0;
}

s32 fn_801B3774(void) {
    return 0;
}

void fn_8016C0EC(void);
void fn_801B377C(void) {
    fn_8016C0EC();
}

s32 fn_801B379C(void) {
    return 0;
}

s32 fn_801B37A4(void) {
    return 0;
}

void fn_8010C15C(void);
void fn_801B37AC(void) {
    fn_8010C15C();
}

s32 fn_801B37CC(void) {
    return 0;
}

s32 fn_801B37D4(void) {
    return 0;
}

void fn_801B37DC(void) {
    M2C_UNK fn_801B5A68();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x24);
    fn_801B5A68();
}

s32 fn_801B3804(void) {
    return 0;
}

s32 fn_801B380C(void) {
    return 0;
}

TreeKey *fn_801B3814(TreeKey *self, s32 a, s16 b) {
    self->a = a;
    self->b = b;
    return self;
}

TreeKey *fn_801B3824(TreeKey *self, TreeKey *src) {
    self->a = src->a;
    self->b = src->b;
    return self;
}

TreeKey *fn_801B383C(TreeKey *self, TreeKey *src) {
    self->a = src->a;
    self->b = src->b;
    return self;
}

s32 fn_801B3854(void *arg0, void *arg1) {
    s32 var_r11;
    u32 temp_r0;
    u32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, u32 *, 0);
    var_r11 = 0;
    temp_r0 = M2C_FIELD(arg1, u32 *, 0);
    if ((temp_r9 < temp_r0) || (((s32) temp_r9 == (s32) temp_r0) && ((u16) M2C_FIELD(arg0, u16 *, 4) < (u16) M2C_FIELD(arg1, u16 *, 4)))) {
        var_r11 = 1;
    }
    return var_r11;
}

s32 fn_801B388C(TreeKey *a, TreeKey *b) {
    return a->a == b->a && a->b == b->b;
}

s32 fn_801B38BC(void) {
    s32 fn_801B388C();
    return fn_801B388C() ^ 1;
}

s32 fn_801B38E0(void *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0) != 0) && ((s32) M2C_FIELD(arg0, u16 *, 4) != 0)) {
        var_r9 = 1;
    }
    return var_r9;
}

void fn_801B3908(s32 *self, s32 value) {
    *self = value;
}

void fn_801B3910(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = arg1;
}

void fn_801B3B88(void *arg0, s32 flags) {
    extern u8 lbl_804155D8[];
    extern void fn_801B3C08(void *);
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    s32 *self = arg0;
    void *p;
    u32 size;
    self[0] = (s32)lbl_804155D8;
    fn_801B3C08(self);
    p = (void *)self[1];
    size = (u32)(self[4] - self[1]);
    if (p != 0) {
        if (size > 0x80) {
            fn_802D20E8(p);
        } else {
            fn_803997AC(p, size);
        }
    }
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_801B3BFC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1A) = 0;
}

void fn_801B3C50(void) {

}

s32 fn_801B3E30(void) {
    return 0;
}

s32 fn_801B3F08(void) {
    return 0x4F424A44;
}

s32 fn_801B44A8(void) {
    return 0;
}

s32 fn_801B44B0(void) {
    return 0;
}

s32 fn_801B4528(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x14);
}

s16 fn_801B47D4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x18);
}

void fn_801B47DC(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x18) = arg1;
}

s32 fn_801B47E4(s32 *self) {
    return self[7];
}

s32 fn_801B47EC(s32 *self) {
    return self[7];
}

s32 fn_801B49B8(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x14);
}

extern s32 lbl_80495D88;
void fn_801B5624(void) {
    fn_800F1A60((s32)&lbl_80495D88, 2);
}

void fn_801B57DC(void *arg0, s32 flags) {
    extern u8 lbl_80415928[];
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    s32 *self = arg0;
    void ***vec1;
    void ***vec2;
    void **begin;
    void **end;
    void **it;
    void *obj;
    void *vt;
    void *p;
    u32 size;

    self[0] = (s32)lbl_80415928;
    self[1] = 0;
    vec1 = (void ***)(self + 2);
    vec2 = (void ***)(self + 2);
    begin = (void **)self[2];
    end = vec1[1];
    for (it = begin; it != end; it++) {
        obj = *it;
        if (obj != NULL) {
            vt = *(void **)obj;
            M2C_FIELD(vt, void (**)(void *), 0x1C)((char *)obj + M2C_FIELD(vt, s16 *, 0x18));
        }
    }
    vec1[1] = begin;
    end = vec2[1];
    for (it = (void **)self[2]; it != end; it++) {
        obj = *it;
        if (obj != NULL) {
            vt = *(void **)obj;
            M2C_FIELD(vt, void (**)(void *), 0x1C)((char *)obj + M2C_FIELD(vt, s16 *, 0x18));
        }
    }
    p = vec2[0];
    if (p != NULL) {
        size = (u32)(vec2[3] - (void **)p) * sizeof(void *);
        if (size > 0x80) {
            fn_802D20E8(p);
        } else {
            fn_803997AC(p, size);
        }
    }
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_801B5DC8(void) {
    return 0;
}

s32 fn_801B5DD0(void) {
    return 1;
}

s32 fn_801B5F24(void *arg0, s32 arg1) {
    s32 fn_801A3698(void *, s16);
    void *temp_r9;
    s32 ret;

    if (M2C_FIELD(arg0, void **, 4) != NULL) {
        s16 temp = fn_801A3698(M2C_FIELD(arg0, void **, 4), arg1);
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        ret = M2C_FIELD(temp_r9, s32 (**)(void *, s16), 0x7C)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x78), temp);
    } else {
        ret = 0;
    }
    return ret;
}

s32 fn_801B5F84(void *arg0) {
    s32 fn_801A3700(void *);
    void *temp_r9;
    s32 ret;

    if (M2C_FIELD(arg0, void **, 4) != NULL) {
        s16 temp = fn_801A3700(M2C_FIELD(arg0, void **, 4));
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        ret = M2C_FIELD(temp_r9, s32 (**)(void *, s16), 0x7C)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x78), temp);
    } else {
        ret = 0;
    }
    return ret;
}

s32 fn_801B5FE0(void *arg0) {
    s32 fn_801A375C(void *);
    void *temp_r9;
    s32 ret;

    if (M2C_FIELD(arg0, void **, 4) != NULL) {
        s16 temp = fn_801A375C(M2C_FIELD(arg0, void **, 4));
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        ret = M2C_FIELD(temp_r9, s32 (**)(void *, s16), 0x7C)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x78), temp);
    } else {
        ret = 0;
    }
    return ret;
}

void fn_801B603C(void) {
    M2C_UNK fn_801B5A68();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x24);
    fn_801B5A68();
}

s32 fn_801B6064(void *arg0, s32 arg1, void **arg2) {
    void *temp_r9;

    if (arg2 != NULL) {
        if (arg1 == 1 || arg1 == 0x6BF32227) {
            temp_r9 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_r9, void (**)(void *), 0x14)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x10));
            *arg2 = arg0;
            return 1;
        }
    }
    return 0;
}

s32 fn_801B60D4(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 8);
}

s32 fn_801B60E8(void *arg0) {
    s32 var_r3;
    void *temp_r9;

    var_r3 = --M2C_FIELD(arg0, s32 *, 8);
    if (var_r3 == 0) {
        if (arg0 != NULL) {
            temp_r9 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_r9, void (**)(void *, s32), 0x6C)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x68), 3);
        }
        return 0;
    }
    return var_r3;
}

s32 fn_801B6144(void *arg0, s32 arg1, void **arg2) {
    void *temp_r9;

    if (arg2 != NULL) {
        if (arg1 == 1 || arg1 == 0x6BF3222B) {
            temp_r9 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_r9, void (**)(void *), 0x14)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x10));
            *arg2 = arg0;
            return 1;
        }
    }
    return 0;
}

s16 fn_801B6338(void *arg0) {
    return *M2C_FIELD(arg0, s16 **, 4);
}

s16 fn_801B6344(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 2);
}

s32 fn_801B6350(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 4);
    return M2C_FIELD(temp_r9, s16 *, 2) + M2C_FIELD(temp_r9, s16 *, 4);
}

s16 fn_801B6364(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 4);
}

void fn_801B6370(void) {

}

void fn_801B6374(void) {

}

void fn_801B6378(void) {

}

void fn_801B637C(void) {

}

void fn_801B6380(void) {

}

s32 fn_801B6384(s32 *self) {
    return self[1];
}

s16 fn_801B638C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x14);
}

s16 fn_801B6398(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x1A);
}

s32 fn_801B63C0(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 1U) & 1;
}

s32 fn_801B63D0(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 2U) & 1;
}

s32 fn_801B63E0(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 3U) & 1;
}

s32 fn_801B63F0(void *arg0) {
    return ((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x10) ^ 0x10) >> 4U) & 1;
}

s32 fn_801B6404(void *arg0) {
    return ((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x10) ^ 0x40) >> 6U) & 1;
}

s32 fn_801B6418(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 5U) & 1;
}

s16 fn_801B6428(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x18);
}

s32 fn_801B6470(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 8U) & 1;
}

s32 fn_801B6480(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 9U) & 1;
}

s32 fn_801B64A8(void) {
    return 0x10;
}

s32 fn_801B64B0(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 0xAU) & 1;
}

s32 fn_801B64C0(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 0xBU) & 1;
}

s32 fn_801B64D0(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4) + (arg1 * 8) + 4;
}

s32 fn_801B64E8(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4) + (arg1 * 8) + 2;
}

s32 fn_801B6500(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4) + (arg1 * 8);
}

s16 fn_801B6514(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 2);
}

s16 fn_801B6520(void *arg0) {
    return *M2C_FIELD(arg0, s16 **, 4);
}

u16 fn_801B652C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xE);
}

void fn_801B6538(void *arg0) {
    M2C_UNK fn_801A31D4(s32);
    fn_801A31D4(M2C_FIELD(arg0, s32 *, 4));
}

f32 fn_801B655C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 8);
}

s16 fn_801B6568(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x16);
}

s16 fn_801B6574(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x12);
}

void fn_801B6580(void) {

}

void fn_801B6584(void) {

}

void fn_801B6588(void) {

}

void fn_801B658C(void) {

}

void fn_801B6590(void) {

}

void fn_801B6594(void) {

}

void fn_801B6598(void) {

}

void fn_801B659C(void) {

}

void fn_801B65A0(void) {

}

void fn_801B65A4(void) {

}

void fn_801B65A8(void) {

}

void fn_801B65AC(void) {

}

void fn_801B65B0(void) {

}

void fn_801B65B4(void) {

}

s32 fn_801B65B8(void) {
    return 0;
}

void fn_801B65C0(void) {

}

void fn_801B65C4(void) {

}

void fn_801B65C8(void) {

}

void fn_801B65CC(void) {

}

void fn_801B65D0(void) {

}

void fn_801B65D4(void) {

}

void fn_801B65D8(void) {

}

s32 fn_801B65DC(s32 *self) {
    return self[1];
}

s32 fn_801B65E4(void) {
    return 0;
}

s32 fn_801B65EC(void) {
    return 0;
}

s32 fn_801B65F4(void) {
    return 0;
}

s32 fn_801B65FC(void) {
    return 0;
}

s16 fn_801B6620(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 4);
    if (temp_r9 != NULL) {
        return M2C_FIELD(temp_r9, s16 *, 4);
    }
    return 0;
}

void fn_801B6680(void) {

}

s32 fn_801B6684(void) {
    return 0;
}

s32 fn_801B668C(void) {
    return 0;
}

s32 fn_801B6694(void) {
    return 0;
}

void fn_801B669C(void) {

}

s32 fn_801B66A0(void) {
    return 1;
}

s32 fn_801B66A8(void) {
    return -0x2D;
}

s32 fn_801B66B0(void) {
    return -0x2D;
}

s32 fn_801B66B8(void) {
    return 0;
}

void fn_801B66C0(void) {

}

s32 fn_801B66C4(void) {
    return 0;
}

s32 fn_801B66CC(void) {
    return 0;
}

void fn_801B66D4(void) {

}

s32 fn_801B66D8(s32 *self) {
    return self[1];
}

void fn_801B66E0(void) {
    M2C_UNK fn_801B6304(M2C_UNK, M2C_UNK);
    fn_801B6304(1, 0xFFFF);
}

