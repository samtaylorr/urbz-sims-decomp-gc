/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800F0FFC(void);
s32 fn_800F4878(void **arg0);

static inline u16 *BString2_Data(void **s) {
    return fn_800F4878(s) ? *(u16 **)*s : 0;
}

static inline s32 BString2_Eq(const u16 *a, const u16 *b) {
    return *a == *b;
}

static inline s32 BString2_Ne(const u16 *a, const u16 *b) {
    s32 ne = 1;
    if (BString2_Eq(a, b)) {
        ne = 0;
    }
    return ne;
}
void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_800EF864(s32 self) {
    extern void fn_802D1A00(void *, void *);
    void *p;

    if (M2C_FIELD(self, s32 *, 8) != 0) {
        p = M2C_FIELD(self, void **, 0);
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), p);
        M2C_FIELD(self, s32 *, 8) = 0;
        M2C_FIELD(self, void **, 0) = 0;
    }
}

void fn_800EF8B4(void) {

}

void fn_800EF8B8(void) {

}

void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_800EF8BC(s32 self) {
    extern void fn_802D1A00(void *, void *);
    extern void fn_800F0658(s32, s32);
    void *p;

    M2C_FIELD(M2C_FIELD(self, void **, 0), s32 *, 0xC)--;
    if (M2C_FIELD(M2C_FIELD(self, void **, 0), s32 *, 0xC) == 0) {
        fn_800F0658(M2C_FIELD(self, s32 *, 0), 2);
        p = M2C_FIELD(self, void **, 0);
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), p);
    }
}

s32 fn_800EF91C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0xC);
}

s32 fn_800EF928(s32 **arg0) {
    return **arg0;
}

s32 fn_800EF934(s32 *arg0) {
    return *arg0 + 4;
}

s32 fn_800EFA0C(s32 arg0, s32 arg1) {
    s32 fn_800F4058(s32, s32, s32, s32);
    return fn_800F4058(arg0, arg1, 0, -1) == 0;
}

s32 fn_800EFA74(s32 arg0, s32 arg1) {
    s32 fn_800F41B8(s32, s32, s32, s32);
    return fn_800F41B8(arg1, arg0, 0, 1) == 0;
}

s32 fn_800EFBC4(s32 arg0, s32 arg1) {
    s32 fn_800F41B8(s32, s32, s32, s32);
    return fn_800F41B8(arg0, arg1, 0, 1) != 0;
}

s32 fn_800F4058(s32, s32, s32, s32);
s32 fn_800EFBFC(s32 arg0, s32 arg1) {
    return (u32)fn_800F4058(arg0, arg1, 0, -1) >> 31;
}

s32 fn_800F4150(s32, s32, s32);
s32 fn_800EFCAC(s32 arg0, s32 arg1) {
    return (u32)fn_800F4150(arg0, arg1, 0) >> 31;
}

s32 fn_800F41B8(s32, s32, s32, s32);
s32 fn_800EFCD4(s32 arg0, s32 arg1) {
    return (u32)fn_800F41B8(arg0, arg1, 0, 1) >> 31;
}

void fn_800EFD00(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EFCAC(s32, s32);
    fn_800EFCAC(arg1, arg0);
}

void fn_800EFD2C(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EFCD4(s32, s32);
    fn_800EFCD4(arg1, arg0);
}

void fn_800EFD58(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EFC28(s32, s32);
    fn_800EFC28(arg1, arg0);
}

void fn_800EFD84(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EFC68(s32, s32);
    fn_800EFC68(arg1, arg0);
}

s32 fn_800EFDB0(void) {
    s32 fn_800EFC28();
    return fn_800EFC28() ^ 1;
}

s32 fn_800EFDD4(void) {
    s32 fn_800EFC68();
    return fn_800EFC68() ^ 1;
}

s32 fn_800EFDF8(void) {
    s32 fn_800EFCAC();
    return fn_800EFCAC() ^ 1;
}

s32 fn_800EFE1C(void) {
    s32 fn_800EFCD4();
    return fn_800EFCD4() ^ 1;
}

s32 fn_800EFE40(s32 arg0, s32 arg1) {
    return fn_800EFCAC(arg1, arg0) ^ 1;
}

s32 fn_800EFE70(s32 arg0, s32 arg1) {
    return fn_800EFCD4(arg1, arg0) ^ 1;
}

s32 fn_800EFF00(void) {
    return 0;
}

void *fn_800EFF08(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC)++;
    return arg0;
}

extern void fn_800EF864(s32);
extern void fn_802D20E8(s32);
void fn_800F0658(s32 self, s32 flags) {
    fn_800EF864(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800F0698(void) {
    return 0;
}

M2C_UNK fn_800F160C(s32 arg0) {
    extern s32 lbl_80434AF8[];
    *(s32 **)arg0 = lbl_80434AF8;
    lbl_80434AF8[3]++;
    return arg0;
}

extern void fn_800EF8BC(s32);
void fn_800F1A60(s32 self, s32 flags) {
    fn_800EF8BC(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern void fn_800F07C4(void *);
void *fn_800F1FA8(void *self) {
    fn_800F07C4(self);
    return self;
}

s32 fn_800F8120(const char *arg0);
void *fn_800F1FD8(void *arg0, const char *arg1) {
    ((void (*)(void *, const char *, s32))fn_800F07C4)(arg0, arg1, arg1 ? fn_800F8120(arg1) : 0);
    return arg0;
}

extern void fn_800F06A0(void *);
void *fn_800F22C0(void *self) {
    fn_800F06A0(self);
    return self;
}

void *fn_800F22F0(void *arg0, const char *arg1) {
    ((void (*)(void *, const char *, s32))fn_800F06A0)(arg0, arg1, arg1 ? fn_800F8120(arg1) : 0);
    return arg0;
}

extern void fn_800F095C(void *);
void *fn_800F251C(void *self) {
    fn_800F095C(self);
    return self;
}

void fn_800F34EC(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F3358(s32, s32, s32);
    fn_800F3358(arg0, arg1, fn_800F0698());
}

u32 fn_800F3620(void **arg0, void *arg1, u32 arg2, u32 arg3) {
    void fn_8024839C(void *dst, const void *src, u32 n);
    if (arg3 > fn_800F4878(arg0)) {
        fn_800EF8B8();
    }
    if (arg2 > fn_800F4878(arg0) - arg3) {
        arg2 = fn_800F4878(arg0) - arg3;
    }
    if (fn_800F4878(arg0) != 0) {
        fn_8024839C(arg1, (void *)(arg3 * 2 + (u32)BString2_Data(arg0)), arg2 * 2);
    }
    return arg2;
}

void fn_800F36CC(s32 arg0, void **arg1, s32 arg2) {
    ((void (*)(s32, s32, s32, s32))fn_800F0FFC)(arg0, (s32)BString2_Data(arg1), arg2, fn_800F4878(arg1));
}

void fn_800F3738(void) {
    fn_800F0FFC();
}

void fn_800F3758(s32 arg0, const char *arg1, s32 arg2) {
    ((void (*)(s32, s32, s32, s32))fn_800F0FFC)(arg0, (s32)arg1, arg2, arg1 ? fn_800F8120(arg1) : 0);
}

u32 fn_800F37B0(void **arg0, u16 arg1, u32 arg2) {
    while (arg2 < fn_800F4878(arg0)) {
        s32 ne = 1;
        if (BString2_Eq(&BString2_Data(arg0)[arg2], &arg1)) {
            ne = 0;
        }
        if (!ne) {
            break;
        }
        arg2++;
    }
    return arg2 < fn_800F4878(arg0) ? arg2 : -1;
}

void fn_800F1120(void);
void fn_800F38C0(void) {
    fn_800F1120();
}

void fn_800F126C(void);
void fn_800F3AB0(void) {
    fn_800F126C();
}

u32 fn_800F37B0(void **arg0, u16 arg1, u32 arg2);
void fn_800F3B28(void) {
    ((void (*)(void))fn_800F37B0)();
}

void fn_800F134C(void);
void fn_800F3BB4(void) {
    fn_800F134C();
}

void fn_800F3938(void);
void fn_800F3C2C(void) {
    fn_800F3938();
}

void fn_800F1450(void);
void fn_800F3CB8(void) {
    fn_800F1450();
}

void fn_800F1510(void);
void fn_800F3E30(void) {
    fn_800F1510();
}

void fn_800F40F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_800F0F2C(s32, s32, s32, s32, s32);
    if (arg3 == -1) {
        fn_800EF8B4();
    }
    fn_800F0F2C(arg0, arg2, arg1, fn_800F4878(arg0) - arg2, arg3);
}

s32 fn_800F47E4(s32 arg0, s32 arg1) {
    s32 fn_800F4058(s32, s32, s32, s32);
    return fn_800F4058(arg0, arg1, 0, -1) == 0;
}

s32 fn_800F484C(s32 arg0, s32 arg1) {
    return (u32)fn_800F4058(arg0, arg1, 0, -1) >> 31;
}

s32 fn_800F4878(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 4);
}

s32 fn_800F4884(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 8);
}

void fn_800F4980(void) {
    M2C_UNK fn_800F4910(M2C_UNK, M2C_UNK);
    fn_800F4910(1, 0xFFFF);
}

