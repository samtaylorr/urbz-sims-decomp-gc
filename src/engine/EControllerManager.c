/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80494F5C;

void *fn_802D0AB8(void);
void *fn_802D0B3C(void);
void *fn_802D197C(void *, u32, s32);
void *fn_802DBBCC(void *, u32, s32);

static inline void *Heap_Alloc(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DBBCC(fn_802D0B3C(), size, 0);
        }
    }
    return p;
}

typedef struct {
    s32 a;
    s32 b;
} ECtrlPair;
s32 fn_803336A8(void *arg0) {
    s32 var_ctr;
    s32 var_r9;
    void *var_r3;

    var_r3 = arg0;
    var_r9 = 0;
    var_ctr = 4;
    do {
        M2C_FIELD(var_r3, s32 *, 0) = var_r9;
        M2C_FIELD(var_r3, s32 *, 0x10) = 1;
        var_r9 += 1;
        var_r3 += 4;
        var_ctr -= 1;
    } while (var_ctr != 0);
    return 1;
}

void fn_8033372C(void) {

}

s32 fn_803338C0(void *arg0, s32 i) {
    struct TTabScratchEntryA { u8 pad[0x10]; s32 unk10[4]; } *self = arg0;
    return self->unk10[i];
}

void fn_803338AC(s32, s32);
static inline s32 ECtrl_NumPorts(void) {
    return 4;
}

void *fn_803338D0(s32, s32);
void fn_8031056C(void *, s32, s32);
void fn_80333CC8(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;

    for (i = 0; i < ECtrl_NumPorts(); i++) {
        fn_8031056C(fn_803338D0(arg0, i), arg1, arg2);
        fn_803338AC(arg0, i);
    }
}

extern u8 lbl_8041BDE8[];
void fn_802D20E8(void *);
void fn_80333D2C(void *self, s32 flags) {
    M2C_FIELD(self, u8 **, 0x20) = lbl_8041BDE8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_80333D60(void) {
    return 4;
}

extern ECtrlPair lbl_803F3724[];
extern ECtrlPair lbl_803F372C[];
extern ECtrlPair lbl_803F3734[];
extern ECtrlPair lbl_803F373C[];
void fn_80333B64(s32, ECtrlPair *, s32, s32, s32, s32, s32);
void fn_80333A04(s32, s32, ECtrlPair *, ECtrlPair *, s32, s32, s32);

void fn_80333D68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair a = lbl_803F3724[0];
    ECtrlPair b = lbl_803F3724[0];
    fn_80333A04(arg0, arg1, &a, &b, 0, arg2, arg3);
}

void fn_80333DBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair a = lbl_803F372C[0];
    ECtrlPair b = lbl_803F3724[0];
    fn_80333A04(arg0, arg1, &a, &b, 0, arg2, arg3);
}

void fn_80333E28(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair a = lbl_803F3734[0];
    ECtrlPair b = lbl_803F373C[0];
    fn_80333A04(arg0, arg1, &a, &b, 0, arg2, arg3);
}

void fn_80333E94(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair a = lbl_803F373C[0];
    ECtrlPair b = lbl_803F373C[0];
    fn_80333A04(arg0, arg1, &a, &b, 0, arg2, arg3);
}

void fn_80333F54(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3724[0];
    fn_80333B64(arg0, &p, 0, 0, arg1, arg2, arg3);
}

void fn_80333FA4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F372C[0];
    fn_80333B64(arg0, &p, 0, 0, arg1, arg2, arg3);
}

extern ECtrlPair lbl_803F3734[];
void fn_80333FF4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3734[0];
    fn_80333B64(arg0, &p, 0, 0, arg1, arg2, arg3);
}

extern ECtrlPair lbl_803F373C[];
void fn_80334044(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F373C[0];
    fn_80333B64(arg0, &p, 0, 0, arg1, arg2, arg3);
}

extern ECtrlPair lbl_803F3744[];
void fn_80334094(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3744[0];
    fn_80333B64(arg0, &p, 0, 0, arg1, arg2, arg3);
}

void fn_803340E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3724[0];
    fn_80333B64(arg0, &p, 0, 1, arg1, arg2, arg3);
}

void fn_80334134(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F372C[0];
    fn_80333B64(arg0, &p, 0, 1, arg1, arg2, arg3);
}

void fn_80334184(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3734[0];
    fn_80333B64(arg0, &p, 0, 1, arg1, arg2, arg3);
}

void fn_803341D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F373C[0];
    fn_80333B64(arg0, &p, 0, 1, arg1, arg2, arg3);
}

void fn_80334224(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3744[0];
    fn_80333B64(arg0, &p, 0, 1, arg1, arg2, arg3);
}

void fn_80334274(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair a = lbl_803F3724[0];
    ECtrlPair b = lbl_803F3724[0];
    fn_80333A04(arg0, arg1, &a, &b, 1, arg2, arg3);
}

void fn_803342C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair a = lbl_803F372C[0];
    ECtrlPair b = lbl_803F3724[0];
    fn_80333A04(arg0, arg1, &a, &b, 1, arg2, arg3);
}

void fn_80334334(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair a = lbl_803F3734[0];
    ECtrlPair b = lbl_803F373C[0];
    fn_80333A04(arg0, arg1, &a, &b, 1, arg2, arg3);
}

void fn_803343A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair a = lbl_803F373C[0];
    ECtrlPair b = lbl_803F373C[0];
    fn_80333A04(arg0, arg1, &a, &b, 1, arg2, arg3);
}

void fn_803343F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair a = lbl_803F3744[0];
    ECtrlPair b = lbl_803F3724[0];
    fn_80333A04(arg0, arg1, &a, &b, 1, arg2, arg3);
}

void fn_80334460(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3724[0];
    fn_80333B64(arg0, &p, 1, 0, arg1, arg2, arg3);
}

void fn_803344B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F372C[0];
    fn_80333B64(arg0, &p, 1, 0, arg1, arg2, arg3);
}

void fn_80334500(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3734[0];
    fn_80333B64(arg0, &p, 1, 0, arg1, arg2, arg3);
}

void fn_80334550(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F373C[0];
    fn_80333B64(arg0, &p, 1, 0, arg1, arg2, arg3);
}

void fn_803345A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3744[0];
    fn_80333B64(arg0, &p, 1, 0, arg1, arg2, arg3);
}

void fn_803345F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3724[0];
    fn_80333B64(arg0, &p, 1, 1, arg1, arg2, arg3);
}

void fn_80334640(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F372C[0];
    fn_80333B64(arg0, &p, 1, 1, arg1, arg2, arg3);
}

void fn_80334690(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3734[0];
    fn_80333B64(arg0, &p, 1, 1, arg1, arg2, arg3);
}

void fn_803346E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F373C[0];
    fn_80333B64(arg0, &p, 1, 1, arg1, arg2, arg3);
}

void fn_80334730(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    ECtrlPair p = lbl_803F3744[0];
    fn_80333B64(arg0, &p, 1, 1, arg1, arg2, arg3);
}

s32 fn_803347A4(s32 arg0) {
    return 1 << arg0;
}

void fn_8033480C(char *self, s32 arg1) {

}

void fn_80334944(char *self, s32 arg1) {
    s32 fn_80334E0C(char *, s32);
    char *vt;
    if (fn_80334E0C(self, arg1) == 0) {
        vt = *(char **)(self + 0xA4);
        (*(void (**)(void *, s32))(vt + 0x2C))(self + *(s16 *)(vt + 0x28), arg1);
        return;
    }
    fn_8033480C(self, arg1);
}

s32 fn_803349A8(s32 arg0, s32 arg1) {
    s32 fn_80334B0C();
    s32 fn_803374C8(s32, s32);
    if (lbl_80494F5C == 0 && fn_80334B0C() == 0) {
        return 1;
    }
    return fn_803374C8(arg0, arg1);
}

s32 fn_803349FC(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_80334B0C();
    s32 fn_80336F00(s32, s32, s32);
    if (lbl_80494F5C == 0 && fn_80334B0C() == 0) {
        return 1;
    }
    return fn_80336F00(arg0, arg1, arg2);
}

f32 fn_80334A58(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xA8);
}

void *fn_80334A60(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *fn_80371B64(void *);
    void fn_80371C74(void *, s32, s32);
    void *obj;

    obj = fn_80371B64(Heap_Alloc(0x2C));
    *(s32 *)((u8 *)obj + 8) = arg3;
    fn_80371C74(obj, arg1, arg2);
    return obj;
}

void fn_80334B04(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xA8) = farg0;
}

s32 fn_80334B0C(s32 arg0, s32 arg1) {
    extern s32 lbl_80494F64[];
    s32 *p;

    for (p = lbl_80494F64; p < lbl_80494F64 + 1; p++) {
        if (*p == arg1) {
            return 1;
        }
    }
    return 0;
}

void fn_80334B40(s32 arg0, void *arg1) {
    M2C_UNK fn_8033782C(s32, void *);
    if (((s32) lbl_80494F5C != 0) || (fn_80334B0C(arg0, M2C_FIELD(arg1, s32 *, 8)) != 0)) {
        fn_8033782C(arg0, arg1);
    }
}

void fn_80334B94(s32 arg0, s32 arg1) {
    s32 fn_80334B0C();
    M2C_UNK fn_8033789C(s32, s32);
    if (((s32) lbl_80494F5C != 0) || (fn_80334B0C() != 0)) {
        fn_8033789C(arg0, arg1);
    }
}

void fn_80334BE4(s32 arg0, s32 arg1) {
    M2C_UNK fn_80337950(s32, s32);
    s32 fn_80337F14(s32);
    if (((s32) lbl_80494F5C != 0) || (fn_80334B0C(arg0, fn_80337F14(arg1)) != 0)) {
        fn_80337950(arg0, arg1);
    }
}

void fn_80334C44(s32 arg0, void *arg1) {
    M2C_UNK fn_80337AEC(s32, void *);
    if (((s32) lbl_80494F5C != 0) || (fn_80334B0C(arg0, M2C_FIELD(arg1, s32 *, 8)) != 0)) {
        fn_80337AEC(arg0, arg1);
    }
}

void fn_80334C98(s32 arg0, s32 arg1) {
    M2C_UNK fn_8033798C(s32, s32);
    s32 fn_80337F14(s32);
    if (((s32) lbl_80494F5C != 0) || (fn_80334B0C(arg0, fn_80337F14(arg1)) != 0)) {
        fn_8033798C(arg0, arg1);
    }
}

void fn_80334CF8(s32 arg0, s32 arg1) {
    s32 fn_80334B0C();
    M2C_UNK fn_803379C8(s32, s32);
    if (((s32) lbl_80494F5C != 0) || (fn_80334B0C() != 0)) {
        fn_803379C8(arg0, arg1);
    }
}

s32 fn_80334D48(s32 arg0, s32 arg1) {
    s32 fn_803365B8(s32, s32, s32 *, s32 *);
    s32 fn_80337008(s32, s32);
    s32 sp8;
    s32 spC;

    if (((s32) lbl_80494F5C != 0) || (fn_80334B0C(arg0, arg1) != 0)) {
        spC = 0;
        sp8 = 0;
        if (fn_803365B8(arg0, arg1, &sp8, &spC) != 0) {
            return fn_80337008(arg0, arg1);
        }
    }
    return 1;
}

s32 fn_80334E0C(s32 arg0, s32 arg1) {
    s32 fn_80334B0C(s32, s32);
    s32 fn_80337F14(s32);
    s32 fn_80336EC4(s32, s32);
    if (lbl_80494F5C == 0) {
        if (fn_80334B0C(arg0, fn_80337F14(arg1)) == 0) {
            return 1;
        }
    }
    return fn_80336EC4(arg0, arg1);
}

s32 fn_80334E70(s32 arg0, s32 arg1) {
    s32 fn_80334B0C();
    s32 fn_80336E08(s32, s32);
    if (lbl_80494F5C == 0 && fn_80334B0C() == 0) {
        return 1;
    }
    return fn_80336E08(arg0, arg1);
}

void fn_80334EC4(void (*cb)(void)) {
    lbl_80494F5C = cb;
}

s32 fn_80334ECC(void) {
    return lbl_80494F5C;
}

void fn_80334ED4(s32 arg0) {
    extern s32 lbl_80494F60;
    fn_80334EC4(arg0 ^ 1);
    lbl_80494F60 = arg0;
}

s32 fn_80334F08(s32 arg0, s32 arg1) {
    extern u8 lbl_8045B438[];
    extern u8 lbl_8041BE20[];
    extern f32 lbl_803F3770[];
    M2C_UNK fn_80335F5C(void *);
    M2C_UNK fn_80335FD8(void *, s32);
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_8045B438;
            fn_80335F5C(p);
            *(u8 **)(p + 0xA4) = lbl_8041BE20;
            *(f32 *)(p + 0xA8) = lbl_803F3770[0];
            return;
        }
        fn_80335FD8(lbl_8045B438, 2);
    }
}

void *fn_80334F80(void *arg0) {
    extern u8 lbl_8041BE20[];
    extern f32 lbl_803F3774[];
    M2C_UNK fn_80335F5C(void *);
    fn_80335F5C(arg0);
    M2C_FIELD(arg0, f32 *, 0xA8) = lbl_803F3774[0];
    M2C_FIELD(arg0, u8 **, 0xA4) = lbl_8041BE20;
    return arg0;
}

void fn_80334FC8(void) {
    M2C_UNK fn_80334F08(M2C_UNK, M2C_UNK);
    fn_80334F08(1, 0xFFFF);
}

void fn_80334FF4(void) {
    s32 fn_80334F08(s32, s32);
    fn_80334F08(0, 0xFFFF);
}

