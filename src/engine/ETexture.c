/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041DC30[];
void fn_802D8BEC(void *);
s32 fn_8036ED88(void) {
    return 0;
}

void fn_8036ED90(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}

void fn_8036ED9C(void) {

}

void fn_8036EDA0(void) {

}

s32 fn_8036EDA4(void) {
    return 1;
}

void fn_8036EDAC(void *arg0, s32 arg1) {
    extern u8 lbl_8041DBE8[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_8041DBE8;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void *fn_8036EDF4(void *arg0) {
    M2C_UNK fn_802D8B34();
    fn_802D8B34();
    M2C_FIELD(arg0, M2C_UNK **, 0x338) = &lbl_8041DC30;
    return arg0;
}

void fn_8036EE30(u8 *self) {
    *(u8 **)(self + 0x338) = lbl_8041DC30;
    fn_802D8BEC(self);
}

s32 fn_8036EE60(void) {
    return 0;
}

extern u8 lbl_8041DC58[];
void fn_802D20E8(void *);
void fn_8036EEE0(void *self, s32 flags) {
    M2C_FIELD(self, u8 **, 0x20) = lbl_8041DC58;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8036EF14(void *arg0, void *arg1) {
    struct Blk { s32 v[8]; };
    *(struct Blk *)arg0 = *(struct Blk *)arg1;
    return 1;
}

s32 fn_8036EF74(s32 *self) {
    return *self;
}

s32 fn_8036EF7C(s32 *self) {
    return self[1];
}

void fn_8036EF84(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

s32 fn_8036EF8C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    return 1;
}

void fn_8036EFA4(void *arg0, void *arg1) {
    extern f32 lbl_803F53E0[];
    M2C_FIELD(arg1, f32 *, 4) = lbl_803F53E0[0];
    M2C_FIELD(arg1, f32 *, 8) = M2C_FIELD(arg0, s32 *, 0) - 1;
    M2C_FIELD(arg1, f32 *, 0) = lbl_803F53E0[0];
    M2C_FIELD(arg1, f32 *, 0xC) = M2C_FIELD(arg0, s32 *, 4) - 1;
}

s32 fn_8036F018(s32 *self) {
    return self[2];
}

s32 fn_8036F0D0(void *arg0, void *arg1) {
    struct Blk { s32 v[8]; };
    *(struct Blk *)arg0 = *(struct Blk *)arg1;
    return 1;
}

void fn_8036F130(void) {

}

void fn_8036F134(void) {

}

void fn_8036F138(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_8036F168(u32 size, void *p);
void *fn_8036F168(u32 size, void *p) {
    return p;
}

void fn_8036F170(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

u8 fn_8036F19C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x18);
}

u8 fn_8036F1A4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A);
}

u16 fn_8036F1AC(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x10);
}

u16 fn_8036F1B4(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x12);
}

u8 fn_8036F1BC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x19);
}

u8 fn_8036F1C4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1B);
}

u16 fn_8036F1CC(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x14);
}

s32 fn_8036F1D4(s32 *self) {
    return self[2];
}

s32 fn_8036F1DC(void) {
    return 1;
}

void fn_8036F1E4(void) {

}

void fn_8036F1E8(void) {

}

void fn_8036F1EC(void) {

}

s32 fn_8036F1F0(void) {
    return 0;
}

s32 fn_8036F1F8(void) {
    return 0;
}

void fn_8036F200(char *self) {
    char *vt = *(char **)(self + 0x24);
    (*(void (**)(char *))(vt + 0x4C))(self + *(s16 *)(vt + 0x48));
}

void fn_8036F234(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFC);
}

void fn_8036F244(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFF7F);
}

void fn_8036F254(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x80);
}

s32 fn_8036F334(void) {
    M2C_UNK fn_8036FA90(M2C_UNK *);
    extern M2C_UNK lbl_80495238;
    extern M2C_UNK lbl_8049523C;
    fn_8036FA90(&lbl_80495238);
    fn_8036FA90(&lbl_8049523C);
    return 0;
}

s32 fn_8036FB28(void *arg0, void *arg1) {
    void **temp_r9;
    void *temp_r10;
    void *temp_r9_2;

    temp_r10 = arg1 - 8;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) == 0) {
        return -1;
    }
    if (temp_r10 == (void *) M2C_FIELD(arg0, void **, 0x10)) {
        M2C_FIELD(arg0, void **, 0x10) = (void *) M2C_FIELD(arg1, void **, -8);
    }
    temp_r9 = M2C_FIELD(temp_r10, void ***, 4);
    if (temp_r9 != NULL) {
        *temp_r9 = M2C_FIELD(arg1, void **, -8);
    }
    temp_r9_2 = M2C_FIELD(arg1, void **, -8);
    if (temp_r9_2 != NULL) {
        M2C_FIELD(temp_r9_2, void ***, 4) = (void **) M2C_FIELD(temp_r10, void ***, 4);
    }
    M2C_FIELD(temp_r10, void ***, 4) = NULL;
    M2C_FIELD(arg1, void **, -8) = (void *) M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(arg0, void **, 0xC) = temp_r10;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
    return 0;
}

void fn_8036FE3C(void *arg0, void *arg1) {
    s32 fn_8036FBA8(void *, s32);
    s32 fn_8036FBC8(void *, s32);
    M2C_UNK fn_8036FBE8(void *, s32, s32);
    M2C_UNK fn_8036FC20(void *, s32, s32);
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r9;
    s32 var_ctr;
    s32 var_r31;
    void *var_r10;
    void *var_r11;

    var_ctr = 2;
    var_r10 = arg0 + 0x6C;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    var_r11 = arg1 + 0x6C;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    do {
        M2C_FIELD(var_r10, f32 *, -0x44) = (f32) M2C_FIELD(var_r11, f32 *, -0x44);
        M2C_FIELD(var_r10, f32 *, -0x40) = (f32) M2C_FIELD(var_r11, f32 *, -0x40);
        M2C_FIELD(var_r10, f32 *, -0x34) = (f32) M2C_FIELD(var_r11, f32 *, -0x34);
        M2C_FIELD(var_r10, f32 *, -0x30) = (f32) M2C_FIELD(var_r11, f32 *, -0x30);
        M2C_FIELD(var_r10, f32 *, -0x24) = (f32) M2C_FIELD(var_r11, f32 *, -0x24);
        M2C_FIELD(var_r10, f32 *, -0x20) = (f32) M2C_FIELD(var_r11, f32 *, -0x20);
        M2C_FIELD(var_r10, f32 *, -0x14) = (f32) M2C_FIELD(var_r11, f32 *, -0x14);
        M2C_FIELD(var_r10, f32 *, -0x10) = (f32) M2C_FIELD(var_r11, f32 *, -0x10);
        M2C_FIELD(var_r10, s32 *, -4) = (s32) M2C_FIELD(var_r11, s32 *, -4);
        temp_r9 = M2C_FIELD(var_r11, s32 *, 0);
        var_r11 += 8;
        M2C_FIELD(var_r10, s32 *, 0) = temp_r9;
        var_r10 += 8;
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_r31 = 0;
    do {
        fn_8036FC20(arg0, var_r31, fn_8036FBC8(arg1, var_r31));
        temp_r5 = fn_8036FBA8(arg1, var_r31);
        temp_r4 = var_r31;
        var_r31 += 1;
        fn_8036FBE8(arg0, temp_r4, temp_r5);
    } while (var_r31 <= 0x1F);
}

void *fn_8036FF6C(void *arg0) {
    extern u8 lbl_8041DD60[];
    M2C_FIELD(arg0, void **, 4) = lbl_8041DD60;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return arg0;
}

void fn_8036FF88(void) {

}

void fn_8036FF8C(void) {

}

void fn_8036FF90(void) {

}

s32 fn_8036FF94(void) {
    return 0;
}

s32 fn_8036FF9C(void) {
    return 0;
}

s32 fn_8036FFA4(void) {
    return 0;
}

s32 fn_8036FFAC(void) {
    return 0;
}

void fn_8036FFB4(void) {

}

s32 fn_8036FFB8(s32 *self) {
    return *self;
}

s32 fn_8036FFC0(s32 *p) {
    if (*p == 0) {
        *p = 1;
        return 1;
    }
    return 0;
}

s32 fn_8036FFE8(s32 *p) {
    if (*p == 0) {
        return 0;
    }
    *p = 0;
    return 1;
}

void fn_802D2FD0(void);
void fn_80370010(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80370030(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80370070(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_803701E8(void *self, s32 flags) {
    extern u8 lbl_8041DDC8[];
    extern u8 lbl_8041DE50[];
    extern u8 lbl_80419678[];
    extern u8 lbl_8045B0F0[];
    extern s32 lbl_80495244;
    void fn_803BFB20(void *, s32);
    void fn_803BFA34(void *, s32);
    void fn_803BF948(void *, s32);
    void fn_802DDC18(void *);
    void fn_8031E910(void *, s32);
    void fn_80338184(void *, s32);
    u8 *p;

    lbl_80495244--;
    M2C_FIELD(self, void **, 0) = lbl_8041DDC8;
    fn_803BFB20((u8 *)self + 0x90, 2);
    p = (u8 *)self + 0x58;
    M2C_FIELD(p, void **, 0x10) = lbl_8041DE50;
    fn_802DDC18(p);
    M2C_FIELD(p, void **, 0x10) = lbl_80419678;
    fn_802DDC18(p);
    fn_803BFA34((u8 *)self + 0x4C, 2);
    fn_803BF948((u8 *)self + 0x3C, 2);
    fn_8031E910(self, 0);
    if (flags & 1) {
        fn_80338184(lbl_8045B0F0, (s32)self);
    }
}

s32 fn_803702A0(u32 arg0) {
    s32 i;

    for (i = 0; i < 4; i++) {
        if ((u8)arg0 > 0x20) {
            return 1;
        }
        arg0 >>= 8;
    }
    return 0;
}

s32 fn_80370428(s32 *arr, u8 *data) {
    void *fn_802482F8(void *, const void *, u32);
    void fn_803BFDA0(void *, s32, s32);
    u8 *start = data;
    s32 n;
    s32 i;

    fn_802482F8(&n, data, 4);
    data += 4;
    fn_803BFDA0(arr, n, 0);
    for (i = 0; i < n; i++) {
        fn_802482F8((u8 *)*arr + i * 4, data, 4);
        data += 4;
    }
    return data - start;
}

M2C_UNK fn_80370E68(s32 arg0, s32 arg1) {
    extern s32 lbl_80496308;
    extern u8 lbl_80493DCC[];
    extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
    extern void fn_80370ED8(void);
    extern void fn_80370F00(void *);
    extern void fn_80370F2C(void *);
    extern u8 lbl_803F54B0[];
    extern u8 lbl_80493858[];
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_80496308 = fn_802D6A90(lbl_80493DCC, fn_80370ED8, fn_80370F00, fn_80370F2C, 1, lbl_803F54B0, lbl_80493858);
    }
}

void fn_80370ED8(void) {
    M2C_UNK fn_803700B0();
    M2C_UNK fn_8037104C(M2C_UNK);
    fn_8037104C(0x9C);
    fn_803700B0();
}

void fn_80370F00(void *self) {
    void *fn_8037107C(u32 size, void *p);
    M2C_UNK fn_803700B0(void *);
    fn_803700B0(fn_8037107C(0x9C, self));
}

extern void fn_803701E8(void *, s32);
void *fn_802482F8(void *, const void *, u32);
void fn_803BFDA0(void *, s32, s32);
void fn_80370F2C(void *self) {
    fn_803701E8(self, 2);
}

void fn_80370F50(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493DCC[];
void *fn_80370F90(void) {
    return lbl_80493DCC;
}

extern s32 lbl_80493DD8[];
s32 fn_80370F9C(void) {
    return lbl_80493DD8[0];
}

extern s32 lbl_80493DDC[];
s32 fn_80370FA8(void) {
    return lbl_80493DDC[0];
}

extern u16 lbl_80493DE0[];
u16 fn_80370FB4(void) {
    return lbl_80493DE0[0];
}

void *fn_80370FC0(void) {
    return lbl_80493DCC;
}

extern u16 lbl_80493DE2[];
u16 fn_80370FCC(void) {
    return lbl_80493DE2[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80370ED8(void);
extern void fn_80370F00();
extern void fn_80370F2C();
extern u8 lbl_803F54B0[];
extern u8 lbl_80493858[];
void fn_80370FD8(s32 arg0) {
    fn_802D6A90(lbl_80493DCC, fn_80370ED8, fn_80370F00, fn_80370F2C, arg0, lbl_803F54B0, lbl_80493858);
}

void fn_802D2430(void);
void fn_8037102C(void) {
    fn_802D2430();
}

void fn_8037104C(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045B0F0[];
    fn_80338000(lbl_8045B0F0, arg0, 4);
}

void *fn_8037107C(u32 size, void *p);
void *fn_8037107C(u32 size, void *p) {
    return p;
}

void fn_80371084(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045B0F0[];
    fn_80338184(lbl_8045B0F0, arg0);
}

void fn_803710B0(void) {
    M2C_UNK fn_80370E68(M2C_UNK, M2C_UNK);
    fn_80370E68(1, 0xFFFF);
}

