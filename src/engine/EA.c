/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct __va_list_tag {
    char gpr;
    char fpr;
    char *overflow_arg_area;
    char *reg_save_area;
} va_list[1];

#define va_start(AP, LASTARG) \
    (__builtin_next_arg(LASTARG), *(AP) = *(struct __va_list_tag *)__builtin_saveregs())

s32 fn_80258544(void);

static inline void EA_SetBlockHeader(char *base, s32 off, s32 size, s32 flags) {
    *(s32 *)(base + off) = size;
    *(s32 *)(base + off + 4) = flags;
}
M2C_UNK **fn_802D7E20(M2C_UNK **arg0) {
    M2C_UNK fn_802C5D4C();
    extern M2C_UNK lbl_80419570[];
    fn_802C5D4C();
    *arg0 = lbl_80419570;
    return arg0;
}

void fn_802D7E5C(M2C_UNK **arg0, s32 arg1) {
    M2C_UNK fn_802C5DB8(M2C_UNK **, s32);
    M2C_UNK fn_802C7C90();
    extern M2C_UNK lbl_80419570[];
    extern s32 lbl_80494DBC;
    s32 temp = lbl_80494DBC;
    *arg0 = lbl_80419570;
    if (temp == 0) {
        fn_802C7C90();
    }
    fn_802C5DB8(arg0, arg1);
}

s32 fn_802D7EB0(s32 arg0, s32 arg1) {
    M2C_UNK fn_80261278();
    s32 fn_802C6434(s32, s32);
    M2C_UNK fn_802C6508(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *);
    void fn_802D87A0();
    void fn_802DFC94();
    s32 temp_r3;
    s32 var_r31;

    var_r31 = arg1;
    fn_80261278();
    if (var_r31 == 0x80000000) {
        var_r31 = 3;
    }
    temp_r3 = fn_802C6434(arg0, var_r31);
    if (temp_r3 != 0) {
        fn_802C6508(arg0, 0x80000000, 0x80000000, 0x80000000, 0, fn_802DFC94);
        fn_802C6508(arg0, 0x80000000, 2, 0x80000000, 0, fn_802D87A0);
    }
    return temp_r3;
}

s32 fn_802D7F48(s32 arg0, s32 arg1) {
    M2C_UNK fn_802C6290(M2C_UNK *, s32 *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_804448E8[];
    s32 sp8;

    sp8 = 0;
    fn_802C6290(lbl_804448E8, &sp8, arg0, arg1, 0x80000000, 0x80000000, 0);
    return sp8;
}

s32 fn_802D7F94(s32 arg0) {
    void fn_802C63E8(void *, s32 *);
    extern M2C_UNK lbl_804448E8[];
    s32 sp8;

    sp8 = arg0;
    fn_802C63E8(lbl_804448E8, &sp8);
    return 0;
}

s32 fn_802D7FC8(void *buf, s32 size, s32 n, char *f) {
    char *vt = *(char **)(f + 0x28);
    return (*(s32 (**)(char *, void *, s32))(vt + 0x1C))(f + *(s16 *)(vt + 0x18), buf, size * n);
}

s32 fn_802D8004(void *buf, s32 size, s32 n, char *f) {
    char *vt = *(char **)(f + 0x28);
    return (*(s32 (**)(char *, void *, s32))(vt + 0x24))(f + *(s16 *)(vt + 0x20), buf, size * n);
}

void fn_802D8040(char *self, s32 pos, s32 whence) {
    extern s32 lbl_803FD2A4[];
    char *vt = *(char **)(self + 0x28);
    char *vt2;

    (*(void (**)(char *, s32, s32))(vt + 0x2C))(self + *(s16 *)(vt + 0x28), pos, lbl_803FD2A4[whence]);
    vt2 = *(char **)(self + 0x28);
    (*(void (**)(char *))(vt2 + 0x44))(self + *(s16 *)(vt2 + 0x40));
}

s32 fn_802D80A8(char *self) {
    char *vt = *(char **)(self + 0x28);
    return (*(s32 (**)(char *))(vt + 0x34))(self + *(s16 *)(vt + 0x30));
}

s32 fn_802D80DC(char *self) {
    char *vt = *(char **)(self + 0x28);
    return (*(s32 (**)(char *))(vt + 0x3C))(self + *(s16 *)(vt + 0x38));
}

char *fn_802D8110(char *buf, s32 n, char *stream) {
    char *ret = buf;
    char *p = ret;
    char c;

    if (n <= 0) {
        return 0;
    }
    while (--n != 0) {
        char *vt = *(char **)(stream + 0x28);
        if ((*(s32 (**)(char *, char *, s32))(vt + 0x1C))(stream + *(s16 *)(vt + 0x18), &c, 1) == 0) {
            if (p == buf) {
                ret = 0;
                goto end;
            }
            break;
        }
        if ((*p++ = c) == '\n') {
            break;
        }
    }
    *p = 0;
end:
    return ret;
}

void *fn_802D81B8(void *arg0) {
    extern void **fn_802D6A14(void **);
    extern u8 lbl_804195C8[];

    fn_802D6A14(arg0);
    M2C_FIELD(arg0, s32 *, 0x4) = 0;
    M2C_FIELD(arg0, void **, 0x0) = lbl_804195C8;
    M2C_FIELD(arg0, s32 *, 0x8) = 0;
    return arg0;
}

void fn_802D8260(void *arg0, s32 arg1) {
    extern void fn_802D6A28(void *, s32);
    extern void fn_802D8328(void *);
    extern u8 lbl_804195C8[];
    M2C_FIELD(arg0, void **, 0) = lbl_804195C8;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        fn_802D8328(arg0);
    }
    fn_802D6A28(arg0, arg1);
}

s32 fn_802D82B4(void) {
    return 0;
}

s32 fn_802D82BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) != 0;
}

s32 fn_802D82D4(void *arg0, s32 arg1, s32 arg2) {
    extern void fn_8037ABB0(void *, s32);
    void *p;

    if (arg2 == -1) {
        arg2 = arg1;
    }
    p = (char *)arg0 + 0xC;
    fn_8037ABB0(p, arg2);
    M2C_FIELD(arg0, void **, 4) = p;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 1;
}

void fn_802D8328(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

s32 fn_802D8334(void *arg0, s32 arg1) {
    extern void fn_8037AC08(void *);
    extern s32 fn_8037AC78(void *);

    if (arg1 == -1) {
        fn_8037AC08((char *)arg0 + 0xC);
        return 1;
    }
    if (fn_8037AC78((char *)arg0 + 0xC) == M2C_FIELD(arg0, s32 *, 0xC)) {
        return 0;
    }
    return 1;
}

s32 fn_802D838C(void *arg0) {
    s32 fn_8025465C();
    M2C_UNK fn_80254684(M2C_UNK);
    M2C_UNK fn_8037ACCC(void *);
    M2C_UNK var_r30;

    var_r30 = 1;
    if (fn_8025465C() == 0) {
        var_r30 = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) < (s32) M2C_FIELD(arg0, s32 *, 8)) {
        fn_8037ACCC(arg0 + 0xC);
    }
    fn_80254684(var_r30);
    return 1;
}

void fn_802D83EC(char *self) {
    char *vt = *(char **)self;
    (*(void (**)(char *, s32))(vt + 0x14))(self + *(s16 *)(vt + 0x10), 0);
}

M2C_UNK fn_802D8424(s32 arg0) {
    extern void fn_8037ACCC(void *);

    if (M2C_FIELD(arg0, s32 *, 0xC) < M2C_FIELD(arg0, s32 *, 0x8)) {
        fn_8037ACCC((char *)arg0 + 0xC);
    }
}

s32 fn_802D8458(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_802D8460(s32 *self) {
    return self[2];
}

void **fn_802D8468(void **arg0) {
    char *vt = *arg0;
    ((void (*)(void *, s32))M2C_FIELD(vt, void **, 0x14))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x10), -1);
    return arg0;
}

void **fn_802D84B0(void **arg0) {
    char *vt = *arg0;
    ((void (*)(void *, s32))M2C_FIELD(vt, void **, 0x14))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x10), -1);
    return arg0;
}

void **fn_802D84F8(void **arg0) {
    char *vt = *arg0;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x1C))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x18));
    return arg0;
}

void **fn_802D853C(void **arg0) {
    char *vt = *arg0;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x1C))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x18));
    return arg0;
}

void fn_802D8580(void *arg0) {
    M2C_UNK fn_802D8424(s32);
    fn_802D8424(M2C_FIELD(arg0, s32 *, 4));
}

void *fn_802D85A4(void *arg0) {
    void fn_80250FC4(void *);
    void fn_80251714(void *, void *);
    char *p = (char *)arg0 + 0x18;

    fn_802D81B8(arg0);
    fn_802D82D4(arg0, 1, 0);
    fn_80250FC4(p);
    fn_80251714(p, arg0);
    return arg0;
}

void fn_802D85FC(void *arg0, s32 arg1) {
    extern void fn_802D20E8(s32);
    fn_802D8260(arg0, 2);
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_802D8640(void *arg0, s32 arg1) {
    typedef struct { u8 pad[0xF8]; u32 busClock; } BootInfo;
    void fn_80251224(void *, u32, u32, u32, void (*)(void *));
    u32 ticks = arg1 * (((BootInfo *)0x80000000)->busClock / 4000);
    fn_80251224((char *)arg0 + 0x18, ticks, 0, ticks, fn_802D8580);
    fn_802D8334(arg0, -1);
}

static inline void *EA_AllocAligned800(void) {
    s32 fn_802D0AB8();
    s32 fn_802D0B3C(void);
    void *fn_802D197C(s32, u32, s32);
    s32 fn_802DC3C0(void *, s32, s32, s32, s32);
    s32 heap;
    void *p;

    heap = fn_802D0AB8();
    p = fn_802D197C(heap, 0x800, 0x20);
    if (p != NULL) {
        return p;
    }
    p = (void *)fn_802DC3C0((void *)heap, 0x800, 0x20, 0, 0);
    if (p == NULL && heap == fn_802D0AB8()) {
        return (void *)fn_802DC3C0((void *)fn_802D0B3C(), 0x800, 0x20, 0, 0);
    }
    return p;
}

void *fn_802D86A8(void *arg0) {
    extern char lbl_804195F8[];
    extern void fn_802C5440(void *);

    fn_802C5440(arg0);
    M2C_FIELD(arg0, char **, 0x28) = lbl_804195F8;
    M2C_FIELD(arg0, void **, 0x34) = EA_AllocAligned800();
    return arg0;
}

void fn_802D8750(void *arg0, s32 arg1) {
    extern char lbl_804195F8[];
    extern void fn_802C5484(void *, s32);
    void *fn_802D0AB8(void);
    void fn_802D1A00(void *, void *);

    M2C_FIELD(arg0, char **, 0x28) = lbl_804195F8;
    fn_802D1A00(fn_802D0AB8(), M2C_FIELD(arg0, void **, 0x34));
    fn_802C5484(arg0, arg1);
}

void fn_802D88C8(void *arg0) {
    M2C_UNK fn_80240EC8(s32);
    void *temp_r9;

    fn_80240EC8(M2C_FIELD(arg0, s32 *, 0x2C));
    if (arg0 != NULL) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x28);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(arg0 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
}

s32 fn_802D891C(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_802D8988(s32, s32, s32);
    s32 temp_r3;
    s32 var_r30;
    s32 var_r31;

    var_r30 = arg1;
    var_r31 = arg2;
    if (arg2 != 0) {
loop_1:
        temp_r3 = fn_802D8988(arg0, var_r30, var_r31);
        if (temp_r3 == 0) {
            return 0;
        }
        var_r30 += temp_r3;
        var_r31 -= temp_r3;
        if (var_r31 == 0) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return arg2;
}

void fn_802D8AAC(void *arg0) {
    M2C_UNK fn_80240ED8(s32);
    fn_80240ED8(M2C_FIELD(arg0, s32 *, 0x2C));
}

s32 fn_802D8AD0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r0;

    if (arg2 == 1) {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x30) + arg1;
        goto block_5;
    }
    if (arg2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    } else {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x14) - arg1;
block_5:
        M2C_FIELD(arg0, s32 *, 0x30) = var_r0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = 1;
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 fn_802D8B14(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 fn_802D8B1C(void) {
    return 1;
}

s32 fn_802D8B24(void) {
    return 0;
}

s32 fn_802D8B2C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

void *fn_802D8B34(void *arg0) {
    extern u8 lbl_80419658[];
    extern char lbl_803F03B4[];
    void fn_80248488();
    M2C_FIELD(arg0, void **, 0x338) = lbl_80419658;
    fn_80248488(arg0, 0, 0x318);
    M2C_FIELD(arg0, char **, 0x32C) = lbl_803F03B4;
    M2C_FIELD(arg0, s32 *, 0x318) = 0;
    M2C_FIELD(arg0, s32 *, 0x31C) = 0;
    M2C_FIELD(arg0, s32 *, 0x320) = 0;
    M2C_FIELD(arg0, s32 *, 0x324) = 0;
    M2C_FIELD(arg0, s32 *, 0x328) = 0;
    M2C_FIELD(arg0, s32 *, 0x330) = 0;
    M2C_FIELD(arg0, s32 *, 0x334) = 0;
    return arg0;
}

void *fn_802D8BA8(void *arg0) {
    extern u8 lbl_80419658[];
    void fn_802D8CA4(void *);
    M2C_FIELD(arg0, void **, 0x338) = lbl_80419658;
    M2C_FIELD(arg0, s32 *, 0x318) = 0;
    fn_802D8CA4(arg0);
    return arg0;
}

void fn_802D8BEC(void *arg0, s32 arg1) {
    extern u8 lbl_80419658[];
    M2C_UNK fn_802D8C4C(void *);
    void fn_802D8E50(void *);
    extern void fn_802D20E8(s32);
    M2C_FIELD(arg0, void **, 0x338) = lbl_80419658;
    if (M2C_FIELD(arg0, s32 *, 0x318) != 0) {
        fn_802D8E50(arg0);
    }
    fn_802D8C4C(arg0);
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

M2C_UNK fn_802D8C4C(void *arg0) {
    extern void *fn_802D0AB8(void *);
    extern void fn_802D1A00(void *, void *);
    if (M2C_FIELD(arg0, s32 *, 0x324) != 0) {
        fn_802D1A00(fn_802D0AB8(arg0), M2C_FIELD(arg0, void **, 0x31C));
        M2C_FIELD(arg0, s32 *, 0x324) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x31C) = 0;
    M2C_FIELD(arg0, s32 *, 0x320) = 0;
    M2C_FIELD(arg0, s32 *, 0x328) = 0;
}

s32 fn_802D8D6C(void *arg0) {
    void *vt = M2C_FIELD(arg0, void **, 0x338);
    M2C_FIELD(vt, void (**)(void *), 0x14)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x10));
    return 0;
}

M2C_UNK fn_802D8DA4(void *arg0, s32 arg1) {
    M2C_UNK fn_802D8C4C(void *);
    void fn_80248488(void *, s32, s32);
    s32 fn_802D9020(void *);
    s32 fn_802D9028(void *);
    extern void *lbl_8049619C;
    extern void *lbl_804961A0;
    void *p;

    fn_802D8C4C(arg0);
    M2C_FIELD(arg0, s32 *, 0x318) = arg1;
    M2C_FIELD(arg0, s32 *, 0x31C) = fn_802D9020(arg0);
    M2C_FIELD(arg0, s32 *, 0x320) = fn_802D9028(arg0);
    M2C_FIELD(arg0, s32 *, 0x324) = 0;
    M2C_FIELD(arg0, s32 *, 0x328) = 0;
    if (M2C_FIELD(arg0, void **, 0x31C) != NULL) {
        fn_80248488(M2C_FIELD(arg0, void **, 0x31C), 0xDBDBDBDB, 0x1000);
        M2C_FIELD(arg0, s32 *, 0x328) = 1;
    }
    M2C_FIELD(arg0, void **, 0x330) = lbl_804961A0;
    p = lbl_804961A0;
    if (p != NULL) {
        M2C_FIELD(p, void **, 0x334) = arg0;
    } else {
        lbl_8049619C = arg0;
    }
    M2C_FIELD(arg0, void **, 0x334) = NULL;
    lbl_804961A0 = arg0;
}

void fn_802D8E50(void *arg0) {
    M2C_UNK fn_80258ED4(M2C_UNK);
    M2C_UNK fn_80258FB8(s32);
    M2C_UNK fn_802D8C4C(void *);
    s32 fn_802D8F90(void *);
    extern void *lbl_8049619C;
    extern void *lbl_804961A0;
    s32 temp_r3;

    if ((void *) lbl_8049619C == arg0) {
        lbl_8049619C = M2C_FIELD(arg0, void **, 0x334);
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x330), void **, 0x334) = (void *) M2C_FIELD(arg0, void **, 0x334);
    }
    if ((void *) lbl_804961A0 == arg0) {
        lbl_804961A0 = M2C_FIELD(arg0, void **, 0x330);
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x334), void **, 0x330) = (void *) M2C_FIELD(arg0, void **, 0x330);
    }
    temp_r3 = fn_802D8F90(arg0);
    if (temp_r3 != 0) {
        M2C_FIELD(arg0, s32 *, 0x318) = 0;
        fn_80258ED4(0);
        return;
    }
    fn_80258FB8(M2C_FIELD(arg0, s32 *, 0x318));
    fn_802D8C4C(arg0);
    M2C_FIELD(arg0, s32 *, 0x318) = temp_r3;
}

void fn_802D8EF8(void *arg0) {
    M2C_UNK fn_80259354(s32);
    fn_80259354(M2C_FIELD(arg0, s32 *, 0x318));
}

void fn_802D8F1C(void *arg0) {
    void fn_802595DC(void *);

    if (M2C_FIELD(arg0, void **, 0x318) != NULL) {
        fn_802595DC(M2C_FIELD(arg0, void **, 0x318));
    }
}

void fn_802D8F48(void *arg0) {
    M2C_UNK fn_8025993C(s32);
    fn_8025993C(M2C_FIELD(arg0, s32 *, 0x318));
}

void fn_802D8F6C(void *arg0) {
    M2C_UNK fn_802599FC(s32);
    fn_802599FC(M2C_FIELD(arg0, s32 *, 0x318));
}

s32 fn_802D8F90(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x318) == fn_802D9124();
}

M2C_UNK fn_802D8FCC(s32 arg0) {
    extern void *lbl_8049619C;
    void *it;
    void *ret = NULL;

    for (it = lbl_8049619C; it != NULL; it = M2C_FIELD(it, void **, 0x334)) {
        if (M2C_FIELD(it, s32 *, 0x318) == arg0) {
            ret = it;
            break;
        }
    }
    return (M2C_UNK) ret;
}

void fn_802D8FFC(void) {
    M2C_UNK fn_802D8FCC();
    M2C_UNK fn_802D9124();
    fn_802D9124();
    fn_802D8FCC();
}

s32 fn_802D9020(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x31C);
}

s32 fn_802D9028(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x320);
}

s32 fn_802D9030(void *arg0) {
    s32 fn_802D9060(void *);
    return fn_802D9060(arg0) != 0;
}

void *fn_802D9060(u32 arg0) {
    extern void *lbl_8049619C;
    void *it;

    if (arg0 != 0) {
        for (it = lbl_8049619C; it != NULL; it = M2C_FIELD(it, void **, 0x334)) {
            u32 base = M2C_FIELD(it, u32 *, 0x31C);
            if (arg0 >= base && arg0 < base + M2C_FIELD(it, u32 *, 0x320)) {
                return it;
            }
        }
    }
    return NULL;
}

s32 fn_802D90A4(u32 arg0, u32 arg1) {
    extern void *lbl_8049619C;
    void *it;

    if (arg0 != 0) {
        for (it = lbl_8049619C; it != NULL; it = M2C_FIELD(it, void **, 0x334)) {
            u32 end = arg0 + arg1;
            u32 base = M2C_FIELD(it, u32 *, 0x31C);
            if (end > base) {
                u32 top = base + M2C_FIELD(it, u32 *, 0x320);
                if (arg0 < top) {
                    if (arg0 >= base && end <= top) {
                        return 1;
                    }
                    return 0;
                }
            }
        }
        return 1;
    }
    return 1;
}

void fn_802D9110(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x32C) = arg1;
}

s32 fn_802D9118(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x32C);
}

void fn_802D9120(void) {

}

s32 fn_802D9124(void) {
    return fn_80258544();
}

s32 fn_802D9144(char *str, u32 size, const char *fmt, ...) {
    s32 fn_80246CB8(char *, u32, const char *, void *);
    va_list ap;
    va_start(ap, fmt);
    return fn_80246CB8(str, size, fmt, ap);
}

s32 fn_802D91D4(void *arg0, s32 arg1) {
    return arg1 == 0;
}

extern void fn_8025AEB4(void *);
void *fn_802D91E0(void *self) {
    fn_8025AEB4(self);
    return self;
}

void fn_802D9210(void) {

}

s32 fn_802D9214(void *arg0) {
    M2C_UNK fn_8025AEEC();
    fn_8025AEEC();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 fn_802D9244(void *arg0) {
    M2C_UNK fn_8025AFC8();
    s32 temp_r30;

    temp_r30 = M2C_FIELD(arg0, s32 *, 0xC) - 1;
    fn_8025AFC8();
    return temp_r30;
}

s32 fn_802D9278(char *self) {
    return *(s32 *)(self + 0xC);
}

extern void fn_802D96A8(s32);
extern void fn_802D20E8(s32);
void fn_802D94C0(s32 self, s32 flags) {
    fn_802D96A8(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802D9A0C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4C4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C8) = arg2;
}

void fn_802D9A18(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4BC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C0) = arg2;
}

void fn_802D9A24(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4D8) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4DC) = arg2;
}

void fn_802D9A30(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s8 *, 0x484) = arg1;
    M2C_FIELD(arg0, s8 *, 0x485) = arg2;
}

s32 fn_802D9A3C(void) {
    return 0x1000;
}

char *fn_802D9A44(void *arg0, char *arg1) {
    char **fn_802DD058(void *, void *);
    char **h;
    char *q;
    char *next;
    if (*(s32 *)arg1 != 0) {
        h = fn_802DD058(arg0, arg1);
        if (h != NULL) {
            q = *h;
            if (arg1 > q) {
                while ((next = q + (*(u32 *)(q + 4) & ~7)) < arg1) {
                    q = next;
                }
                return q;
            }
        }
    }
    return 0;
}

u32 fn_802D9AC4(u32 size) {
    u32 r;
    if ((size >> 6) <= 32) {
        r = (size >> 6) + 0x38;
    } else if ((size >> 9) <= 20) {
        r = (size >> 9) + 0x5B;
    } else if ((size >> 12) <= 10) {
        r = (size >> 12) + 0x6E;
    } else if ((size >> 15) <= 4) {
        r = (size >> 15) + 0x77;
    } else if ((size >> 18) <= 2) {
        r = (size >> 18) + 0x7C;
    } else {
        r = 0x7E;
    }
    return r;
}

s32 fn_802D9C00(void *arg0, char *arg1) {
    char **fn_802DD058(void *, void *);
    char *h;
    if ((*(u32 *)(arg1 + 4) & ~7) <= 15) {
        h = (char *)fn_802DD058(arg0, arg1);
        if (arg1 >= h + *(s32 *)(h + 4) - 16) {
            return 1;
        }
    }
    return 0;
}

void fn_802D9DE4(void) {

}

void fn_802D9DE8(void *arg0, void *arg1, s32 arg2) {
    void *temp_r9;
    void *temp_r10;
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg0, void **, 0x444);
    temp_r10 = arg0 + 0x34;
    M2C_FIELD(arg0, void **, 0x444) = arg1;
    M2C_FIELD(arg1, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8) = arg1;
    if ((temp_r11 != temp_r10) && (arg2 != 0)) {
        temp_r9 = M2C_FIELD(temp_r10, void **, 0xC);
        M2C_FIELD(temp_r11, void **, 8) = temp_r10;
        M2C_FIELD(temp_r11, void **, 0xC) = temp_r9;
        M2C_FIELD(temp_r10, void **, 0xC) = temp_r11;
        M2C_FIELD(temp_r9, void **, 8) = temp_r11;
    }
}

void fn_802D9E24(s32 arg0, char *arg1, s32 arg2) {
    *(char **)(arg1 + 0xC) = arg1;
    *(s32 *)(arg1 + 4) = arg2 | 1;
    *(char **)(arg1 + 8) = arg1;
    *(s32 *)(arg1 + arg2) = arg2;
}

s32 fn_802D9E3C(void) {
    return 1;
}

s32 fn_802D9E44(void *arg0, s32 arg1) {
    s32 temp_r3;

    if ((s32) (arg1 & 6) == 6) {
        return 1;
    }
    temp_r3 = M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 4) & 0xFFFFFFF8)), s32 *, 4) & 1;
    if (!(arg1 & 2)) {
        if (!(arg1 & 4)) {
            return 0;
        }
        return temp_r3 ^ 1;
    }
    return temp_r3;
}

void fn_802D9E8C(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + arg1) = arg1;
    arg0 += arg1;
    *(s32 *)(arg0 + 4) = 8;
    *(s32 *)(arg0 + 8) = 8;
    *(s32 *)(arg0 + 0xC) = 9;
}

void fn_802D9EAC(char *arg0, s32 arg1) {
    u32 v = *(u32 *)(arg0 + 4);
    u32 size = (v & ~7) - 0x10;
    *(u32 *)(arg0 + 4) = (v & 7) | size;
    EA_SetBlockHeader(arg0, size, size, arg1 | 8);
    EA_SetBlockHeader(arg0, size + 8, 8, 9);
}

char *fn_802D9EF0(char *arg0, s32 arg1, s32 arg2) {
    *(s32 *)(arg0 + 4) = arg1 | arg2;
    *(s32 *)(arg0 + 0) = 0;
    fn_802D9EAC(arg0, 0);
    return arg0;
}

void fn_802D9F34(void *arg0, u32 *arg1, u32 *arg2) {
    *(u8 *)((char *)arg2 + 0x10) = 8;
    arg2[0] = arg1[0];
    arg2[1] = arg1[1];
    arg2[5] = 0;
}

void fn_802DB018();
void fn_802DAFB0(void) {
    fn_802DB018();
}

void fn_802DAFD0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4D0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4D4) = arg2;
}

void fn_802DAFDC(void *arg0, s32 arg1) {
    void (*fn)(s32, s32) = M2C_FIELD(arg0, void (**)(s32, s32), 0x4D0);
    if (fn != 0) {
        fn(arg1, M2C_FIELD(arg0, s32 *, 0x4D4));
    }
}

void fn_802DB018(arg0)
    s32 arg0;
{
    void fn_80378278(char *, ...);
    extern char lbl_803F03C8[];
    fn_80378278(lbl_803F03C8, arg0);
}

void fn_802DB1A8(void *arg0, s32 arg1) {
    extern void fn_802DB048(void *, s32);
    fn_802DB048(arg0, arg1 - 8);
}

s32 fn_802DB2EC(void *arg0, s32 (*arg1)(s32, s32), s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    extern void *fn_802DB3A4(void *, s32, s32, s32, s32, s32);
    extern s32 fn_802DB410(void *, void *, s32);
    extern void fn_802DB5F0(void *, void *);
    void *p;
    s32 r;
    s32 result = 0;
    if (arg1 != 0) {
        p = fn_802DB3A4(arg0, 0, arg3, arg4, arg5, arg6);
        if (p != 0) {
            result = 1;
            r = fn_802DB410(arg0, p, arg3);
            if (r != 0) {
                do {
                    result = arg1(r, arg2);
                    r = fn_802DB410(arg0, p, arg3);
                } while (result != 0 && r != 0);
            }
        }
        fn_802DB5F0(arg0, p);
    }
    return result;
}

void *fn_802DB640(void *arg0, s32 arg1, s32 arg2) {
    extern void fn_80248488(void *, s32, s32);
    fn_80248488(arg0, 0, arg1);
    M2C_FIELD(arg0, s32 *, 0x4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x0) = 0x534E4150;
    M2C_FIELD(arg0, s32 *, 0x8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    return arg0;
}

void fn_802DB9F8(void *arg0, s32 *arg1) {
    extern void fn_802DC220(void *, s32 *);
    if (arg1[0] == 0x534E4150 && arg1[3] == 0) {
        fn_802DC220(arg0, arg1);
    }
}

s32 fn_802DBB54(void *arg0) {
    extern s32 fn_802DA824(void *);
    s32 old = M2C_FIELD(arg0, s32 *, 0x494);
    s32 ret = 0;

    if (old == 0) {
        M2C_FIELD(arg0, s32 *, 0x494) = 1;
        ret = fn_802DA824(arg0);
        M2C_FIELD(arg0, s32 *, 0x494) = old;
    }
    return ret == 0;
}

void fn_802DBBA8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x48C) = arg2;
    if (arg2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x48C) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x488) = arg1;
    M2C_FIELD(arg0, s32 *, 0x490) = 0;
}

void *fn_802DBBCC(s32 arg0, u32 arg1, s32 arg2) {
    extern void *fn_802DBC38(s32, u32, s32);
    void *volatile p;
    void *q;
    void *r;
    void *ret;

    q = M2C_FIELD(arg0, void **, 0x4FC);
    p = q;
    if (q != NULL) {
        fn_802D9214(q);
    }
    ret = fn_802DBC38(arg0, arg1, arg2);
    r = p;
    if (r != NULL) {
        fn_802D9244(r);
    }
    return ret;
}

void fn_802DC1C4(void *arg0, s32 arg1) {
    extern void fn_802DC220(void *, s32);
    void *volatile p;
    void *q;
    void *r;

    q = M2C_FIELD(arg0, void **, 0x4FC);
    p = q;
    if (q != NULL) {
        fn_802D9214(q);
    }
    fn_802DC220(arg0, arg1);
    r = p;
    if (r != NULL) {
        fn_802D9244(r);
    }
}

s32 fn_802DC3C0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern s32 fn_802DC43C(void *, s32, s32, s32, s32);
    void *volatile p;
    void *q;
    void *r;
    s32 ret;

    q = M2C_FIELD(arg0, void **, 0x4FC);
    p = q;
    if (q != NULL) {
        fn_802D9214(q);
    }
    ret = fn_802DC43C(arg0, arg1, arg2, arg3, arg4);
    r = p;
    if (r != NULL) {
        fn_802D9244(r);
    }
    return ret;
}

s32 fn_802DC6B4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern s32 fn_802DC728(void *, s32, s32, s32);
    void *volatile p;
    void *q;
    void *r;
    s32 ret;

    q = M2C_FIELD(arg0, void **, 0x4FC);
    p = q;
    if (q != NULL) {
        fn_802D9214(q);
    }
    ret = fn_802DC728(arg0, arg1, arg2, arg3);
    r = p;
    if (r != NULL) {
        fn_802D9244(r);
    }
    return ret;
}

s32 fn_802DC9F4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern s32 fn_802DCA68(void *, s32, s32, s32);
    void *volatile p;
    void *q;
    void *r;
    s32 ret;

    q = M2C_FIELD(arg0, void **, 0x4FC);
    p = q;
    if (q != NULL) {
        fn_802D9214(q);
    }
    ret = fn_802DCA68(arg0, arg1, arg2, arg3);
    r = p;
    if (r != NULL) {
        fn_802D9244(r);
    }
    return ret;
}

s32 fn_802DCB78(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern s32 fn_802DCC78(void *, s32, s32, s32 *, s32, s32);
    void *volatile p;
    void *q;
    void *r;
    s32 ret;

    q = M2C_FIELD(arg0, void **, 0x4FC);
    p = q;
    if (q != NULL) {
        fn_802D9214(q);
    }
    ret = fn_802DCC78(arg0, arg1, 1, &arg2, arg3, arg4);
    r = p;
    if (r != NULL) {
        fn_802D9244(r);
    }
    return ret;
}

s32 fn_802DCBF8(void *arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4) {
    extern s32 fn_802DCC78(void *, s32, s32, s32 *, s32, s32);
    void *volatile p;
    void *q;
    void *r;
    s32 ret;

    q = M2C_FIELD(arg0, void **, 0x4FC);
    p = q;
    if (q != NULL) {
        fn_802D9214(q);
    }
    ret = fn_802DCC78(arg0, arg1, arg1, arg2, arg3, arg4);
    r = p;
    if (r != NULL) {
        fn_802D9244(r);
    }
    return ret;
}

u32 fn_802DCFA0(void *arg0, char *arg1) {
    char *h;
    u32 size;

    if (arg1 != NULL) {
        h = arg1 - 8;
        size = *(u32 *)(h + 4) & ~7;
        if (*(u32 *)(h + 4) & 2) {
            return size - 8;
        }
        if (*(u32 *)(h + size + 4) & 1) {
            return size - 4;
        }
    }
    return 0;
}

s32 fn_802DCFE0(void *arg0) {
    void *it;
    s32 total;

    total = 0;
    for (it = M2C_FIELD(arg0, void **, 0x46C); it != (char *)arg0 + 0x44C; it = M2C_FIELD(it, void **, 0x20)) {
        total += M2C_FIELD(it, s32 *, 4);
    }
    return total;
}

u32 fn_802DD014(void *arg0, void *arg1) {
    return M2C_FIELD(arg1, u32 *, -4) & ~7;
}

void fn_802DD020(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, void **, 0x24) = arg2;
    M2C_FIELD(arg1, void **, 0x20) = M2C_FIELD(arg2, void **, 0x20);
    M2C_FIELD(arg2, void **, 0x20) = arg1;
    M2C_FIELD(M2C_FIELD(arg1, void **, 0x20), void **, 0x24) = arg1;
}

void fn_802DD03C(void *arg0, void *arg1) {
    M2C_FIELD(M2C_FIELD(arg1, void **, 0x20), void **, 0x24) = M2C_FIELD(arg1, void **, 0x24);
    M2C_FIELD(M2C_FIELD(arg1, void **, 0x24), void **, 0x20) = M2C_FIELD(arg1, void **, 0x20);
}

char **fn_802DD058(void *arg0, void *arg1) {
    char *it;

    for (it = M2C_FIELD(arg0, char **, 0x46C); it != (char *)arg0 + 0x44C; it = *(char **)(it + 0x20)) {
        if ((u32)arg1 >= (u32)it && (u32)arg1 < (u32)(it + *(s32 *)(it + 4))) {
            return (char **)it;
        }
    }
    return NULL;
}

s32 fn_802DD3DC(void *arg0, void *arg1) {
    s32 ret = 0;

    if (M2C_FIELD(arg1, s32 *, 0x10) != 0) {
        void (*f)(void *, void *, s32, s32) = M2C_FIELD(arg1, void (**)(void *, void *, s32, s32), 0x18);
        if (f != NULL) {
            f(arg0, arg1, M2C_FIELD(arg1, s32 *, 0x4), M2C_FIELD(arg1, s32 *, 0x1C));
            ret = 1;
        }
    }
    return ret;
}

void *fn_802DD568(void *self, s32 arg1, s32 *out) {
    void *fn_802D2150(u32 size);
    void *p = fn_802D2150(arg1);
    if (p != NULL && out != NULL) {
        *out = arg1;
    }
    return p;
}

void fn_802D21E0(void *);
void fn_802DD5B0(void *self, void *arg) {
    fn_802D21E0(arg);
}

extern void fn_802CAA00(void *, s32);
extern u8 lbl_80451F84[];
void fn_802DD5D4(void);
void fn_802DD5D4(void) {
    fn_802CAA00(lbl_80451F84, 2);
}

void fn_802DD82C(void *arg0, s32 arg1) {
    M2C_UNK fn_802DDCAC(s32, s32, s32);
    fn_802DDCAC(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), arg1);
}

void fn_802DD858(s32 *arg0, s32 arg1) {
    s32 fn_802DDC6C(s32, s32);
    M2C_UNK fn_802DDCAC(s32, s32, s32);
    s32 a = arg0[0];
    s32 b = arg0[1];
    fn_802DDCAC(a, b, (fn_802DDC6C(a, b) != 0) | (arg1 != 0));
}

void fn_802DD8C4(s32 *arg0, s32 arg1) {
    s32 fn_802DDC6C(s32, s32);
    M2C_UNK fn_802DDCAC(s32, s32, s32);
    s32 a = arg0[0];
    s32 b = arg0[1];
    fn_802DDCAC(a, b, (fn_802DDC6C(a, b) != 0) & (arg1 != 0));
}

void fn_802DD930(s32 *arg0, s32 arg1) {
    s32 fn_802DDC6C(s32, s32);
    M2C_UNK fn_802DDCAC(s32, s32, s32);
    s32 a = arg0[0];
    s32 b = arg0[1];
    u8 has = fn_802DDC6C(a, b) != 0;
    fn_802DDCAC(a, b, arg1 ? has == 0 : has != 0);
}

s32 fn_802DD9B0(s32 *arg0) {
    s32 fn_802DDC6C(s32, s32);
    return fn_802DDC6C(arg0[0], arg0[1]);
}

void *fn_802DD9D8(void *arg0) {
    extern u8 lbl_80419678[];
    void fn_802DDDC8(void *, s32);
    M2C_FIELD(arg0, u8 **, 0x10) = lbl_80419678;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    fn_802DDDC8(arg0, 0x1000);
    return arg0;
}

void *fn_802DDA28(void *arg0, s32 arg1) {
    extern u8 lbl_80419678[];
    void fn_802DDDC8(void *, s32);
    M2C_UNK fn_802DDDD8(void *, s32, s32);
    void *self = arg0;
    M2C_FIELD(self, u8 **, 0x10) = lbl_80419678;
    M2C_FIELD(self, s32 *, 0) = 0;
    M2C_FIELD(self, s32 *, 8) = 0;
    M2C_FIELD(self, s32 *, 4) = 0;
    fn_802DDDC8(self, 0x1000);
    fn_802DDDD8(self, arg1, 0);
    return self;
}

void *fn_802DDA8C(void *arg0, s32 arg1, s32 arg2) {
    extern u8 lbl_80419678[];
    void fn_802DDDC8(void *, s32);
    void fn_802DDDD8(void *, s32, s32);
    M2C_FIELD(arg0, u8 **, 0x10) = lbl_80419678;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    fn_802DDDC8(arg0, arg2);
    fn_802DDDD8(arg0, arg1, 0);
    return arg0;
}

s32 fn_802D0B3C(void);
void *fn_802D197C(s32, u32, s32);
void *fn_802DBBCC(s32, u32, s32);
char *fn_802DDB50(s32 *arg0, s32 size) {
    s32 heap;
    char *p;

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

void fn_802DDBE0(void *arg0, void *arg1) {
    void *fn_802D0AB8(void *);
    void fn_802D1A00(void *, void *);

    if (arg1 != NULL) {
        fn_802D1A00(fn_802D0AB8(arg0), arg1);
    }
}

void fn_802DDC18(void *arg0) {
    s32 *self = arg0;
    char *vt = *(char **)((char *)self + 0x10);
    (*(void (**)(void *, s32))(vt + 0x1C))((char *)self + *(s16 *)(vt + 0x18), self[0]);
    self[0] = 0;
    self[2] = 0;
    self[1] = 0;
}

s32 fn_802DDC6C(arg0, i)
    s32 arg0;
    s32 i;
{
    u32 **self = (u32 **)arg0;
    u32 mask;
    if (i >= ((s32 *)self)[1]) {
        return 0;
    }
    mask = 1 << (i & 31);
    return (self[0][(u32)i >> 5] & mask) != 0;
}

M2C_UNK fn_802DDCAC(s32 arg0, s32 i, s32 set) {
    u32 off = ((u32)i >> 5) * 4;
    u32 mask = 1 << (i & 31);
    char *bits = *(char **)arg0;
    if (set != 0) {
        *(u32 *)(bits + off) |= mask;
    } else {
        *(u32 *)(bits + off) &= ~mask;
    }
}

void fn_802DDDC8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((arg1 + 0x1F) & 0xFFFFFFE0);
}

void fn_802DDF1C(void *self, s32 bit, s32 pos) {
    void fn_802DE030(void *, s32, s32);
    M2C_UNK fn_802DDCAC(s32, s32, s32);
    fn_802DE030(self, pos, 1);
    fn_802DDCAC((s32)self, pos, bit);
}

void fn_802DDF68(void *self, void *src, s32 from, s32 to, s32 n) {
    s32 fn_802DDC6C(s32, s32);
    M2C_UNK fn_802DDCAC(s32, s32, s32);
    s32 i;

    for (i = 0; i < n; i++) {
        fn_802DDCAC((s32)self, to + i, fn_802DDC6C((s32)src, from + i));
    }
}

void fn_802DDFD4(void *self, void *src, s32 from, s32 to, s32 n) {
    void fn_802DE030(void *, s32, s32);
    void fn_802DDF68(void *, void *, s32, s32, s32);
    fn_802DE030(self, to, n);
    fn_802DDF68(self, src, from, to, n);
}

void fn_802DE030(void *self, s32 pos, s32 n) {
    s32 fn_802DDC6C(s32, s32);
    M2C_UNK fn_802DDCAC(s32, s32, s32);
    M2C_UNK fn_802DDDD8(void *, s32, s32);
    s32 old = M2C_FIELD(self, s32 *, 4);
    s32 size = old + n;
    s32 count;
    s32 grow;

    if (size > M2C_FIELD(self, s32 *, 8)) {
        grow = old + M2C_FIELD(self, s32 *, 0xC);
        if (grow < size) {
            grow = size;
        }
        fn_802DDDD8(self, size, grow);
    } else {
        M2C_FIELD(self, s32 *, 4) = size;
    }
    for (count = old - pos; count > 0; count--) {
        fn_802DDCAC((s32)self, size--, fn_802DDC6C((s32)self, old--));
    }
}

u32 fn_802DE1B0(void *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 4) + 0x1F) >> 5U;
}

void fn_802DE598(void) {

}

void fn_802DE59C(void *self, u32 bits, s32 count) {
    void fn_802DDF1C(void *, s32, s32);
    s32 i;

    for (i = 0; i < count; i++) {
        fn_802DDF1C(self, (bits & (1 << i)) != 0, M2C_FIELD(self, s32 *, 4));
    }
}

void fn_802DE608(void *self, f32 value) {
    void fn_802DE59C(void *, u32, s32);
    union {
        f32 f;
        u32 u;
    } conv;
    conv.f = value;
    fn_802DE59C(self, conv.u, 32);
}

u32 fn_802DE634(u32 **self, s32 pos, s32 count) {
    s32 word;
    s32 shift;
    u32 end;
    u32 endWord;
    u32 mask;

    if (count != 0) {
        end = pos + count;
        word = pos >> 5;
        shift = pos & 31;
        endWord = (end - 1) >> 5;
        if (word == endWord) {
            mask = (1 << count) - 1;
            if (mask != 0) {
                return ((*self)[word] >> shift) & mask;
            }
            return (*self)[word];
        }
        return (((*self)[endWord] & ((1 << (end & 31)) - 1)) << (32 - shift)) | ((*self)[word] >> shift);
    }
    return 0;
}

f32 fn_802DE6DC(u32 **self, s32 pos) {
    union {
        f32 f;
        u32 u;
    } conv;
    conv.u = fn_802DE634(self, pos, 32);
    return conv.f;
}

s32 fn_802DE818(void *self, f32 f) {
    s32 n;
    for (n = 2; n < 32; n++) {
        if (1.0f / (f32) ((1 << n) - 1) <= f) {
            break;
        }
    }
    return n;
}

s32 fn_802DE8AC(s32 x) {
    s32 n;
    for (n = 1; n < 32; n++) {
        if (x <= (1 << n) - 1) {
            break;
        }
    }
    return n;
}

s32 fn_802DE8E0(void *self, f32 f, s32 bits) {
    f32 max = (f32) ((1 << (bits - 1)) - 1);
    f32 v;
    f *= max;
    if (f < 0.0f) {
        f -= 0.5f;
    } else {
        f += 0.5f;
    }
    if (f < -max) {
        v = -max;
    } else if (f > max) {
        v = max;
    } else {
        v = f;
    }
    return (s32) v;
}

s32 fn_802DE978(void *self, f32 f, s32 bits) {
    f32 max = (f32) ((1 << bits) - 1);
    f32 t = f * max + 0.5f;
    f32 v;
    if (t < 0.0f) {
        v = 0.0f;
    } else if (t > max) {
        v = max;
    } else {
        v = t;
    }
    return (s32) v;
}

f32 fn_802DE9F8(void *self, s32 bits) {
    return 1.0f / (f32) ((1 << (bits - 1)) - 1);
}

f32 fn_802DEA44(void *self, s32 bits) {
    return 1.0f / (f32) ((1 << bits) - 1);
}

u32 fn_802DEA8C(s32 *arg0) {
    return arg0[0] != 0 ? ((u32) (arg0[1] + 0x1F) >> 5) * 4 : 0;
}

void *fn_802DEAB0(void *self, s32 **arg1) {
    struct vte { s16 delta; s16 pad; void *pfn; };
    s32 n;
    s32 i;
    s32 tmp;

    tmp = (s32) arg1[1];
    {
        struct vte *vt = *(struct vte **)((char *)self + 0x18);
        ((void (*)(void *, void *, s32))vt[7].pfn)((char *)self + vt[7].delta, &tmp, 4);
    }
    n = fn_802DE1B0(arg1);
    for (i = 0; i < n; i++) {
        struct vte *vt = *(struct vte **)((char *)self + 0x18);
        s32 v = arg1[0][i];
        ((void (*)(void *, void *, s32))vt[7].pfn)((char *)self + vt[7].delta, &v, 4);
    }
    return self;
}

void fn_802DEBE4(void *arg0, s32 arg1) {
    extern void fn_802DDC18(void *);
    extern u8 lbl_80419678[];
    M2C_FIELD(arg0, u8 **, 0x10) = lbl_80419678;
    fn_802DDC18(arg0);
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_802DEC30(void *arg0) {
    M2C_UNK fn_802DDDD8(void *, s32, s32);
    fn_802DDDD8(arg0, M2C_FIELD(arg0, s32 *, 4), 0);
}

s32 fn_802DEC58(s32 *self) {
    return self[1];
}

void fn_802DEC60(void *arg0, void *arg1, s32 arg2) {
    void fn_802DDFD4(void *, void *, s32, s32, s32);
    fn_802DDFD4(arg0, arg1, 0, arg2, M2C_FIELD(arg1, s32 *, 4));
}

void fn_802DEC8C(void *arg0, s32 arg1) {
    void fn_802DDF1C(void *, s32, s32);
    fn_802DDF1C(arg0, arg1, M2C_FIELD(arg0, s32 *, 4));
}

void fn_802DECB0(void *arg0, void *arg1) {
    extern void fn_802DDFD4(void *, void *, s32, s32, s32);
    fn_802DDFD4(arg0, arg1, 0, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 4));
}

void fn_802DECDC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void fn_802DDFD4(void *, void *, s32, s32, s32);
    fn_802DDFD4(arg0, (void *)arg1, arg2, M2C_FIELD(arg0, s32 *, 4), arg3);
}

s32 fn_802DED04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) == 0;
}

void fn_802DED14(void *self) {
    M2C_UNK fn_802DDDD8(void *, s32, s32);
    fn_802DDDD8(self, 0, 0);
}

void fn_802DED3C(void *self) {
    M2C_UNK fn_802DDDD8(void *, s32, s32);
    fn_802DDDD8(self, 0, 0);
}

void fn_802DED64(void *self, void *arg1) {
    M2C_UNK fn_802DDCAC(s32, s32, s32);
    fn_802DDCAC((s32)self, (s32)arg1, 0);
}

extern void fn_802DED88(void *);
void fn_802DED88(void *self) {
    extern void *fn_802DDCE8(void *, s32);
    fn_802DDCE8(self, 0);
}

s32 fn_802DDC6C();
void fn_802DEDAC(void) {
    fn_802DDC6C();
}

s32 *fn_802DEDCC(s32 *arg0, s32 arg1, s32 arg2) {
    arg0[0] = arg1;
    arg0[1] = arg2;
    return arg0;
}

s32 fn_802DEDDC(void) {
    s32 fn_802DE2F8();
    return fn_802DE2F8() ^ 1;
}

s32 fn_802DEE00(s32 *self) {
    return *self;
}

s32 fn_802DEE08(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_802482F8(s32, s32);
    if (arg1 != 0) {
        fn_802482F8(arg1, M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x20));
    }
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + arg2);
    return arg2;
}

s32 fn_802DEE5C(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_802482F8();
    s32 dst = M2C_FIELD(arg0, s32 *, 0x1C);
    if (dst != 0) {
        fn_802482F8(dst, arg1 + M2C_FIELD(arg0, s32 *, 0x20));
    }
    M2C_FIELD(arg0, s32 *, 0x20) += arg2;
    return arg2;
}

void *fn_802DEEB8(void *arg0) {
    extern char lbl_804196A0[];
    M2C_UNK fn_803BA408(void *);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, void **, 0x18) = lbl_804196A0;
    fn_803BA408((char *)arg0 + 0x20);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

void fn_802DEF04(void *arg0, s32 arg1) {
    extern char lbl_804196A0[];
    extern char lbl_804194F8[];
    M2C_UNK fn_803BA4E0(void *);
    M2C_UNK fn_803BA4A0(void *, s32);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804196A0;
    fn_803BA4E0((char *)arg0 + 0x20);
    fn_803BA4A0((char *)arg0 + 0x20, 2);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804194F8;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

u8 fn_802DF0E4(void *arg0, s32 arg1) {
    s32 idx = (arg1 / 0x1000) * 4;
    return (*(u8 **)((char *)M2C_FIELD(arg0, u8 ***, 0x20) + idx))[arg1 & 0xFFF];
}

u8 *fn_802DF110(void *arg0, s32 arg1) {
    s32 idx = (arg1 / 0x1000) * 4;
    return *(u8 **)((char *)M2C_FIELD(arg0, u8 ***, 0x20) + idx) + (arg1 & 0xFFF);
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_802DF214(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802DF248(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 n;
    char *page;
    char *src;
    void *vt;
    s32 idx;
    s32 off;

    while (arg3 != 0) {
        idx = (arg2 / 0x1000) * 4;
        page = *(char **)((char *)M2C_FIELD(arg0, char ***, 0x20) + idx);
        off = arg2 & 0xFFF;
        n = 0x1000 - off;
        src = page + off;
        if (arg3 < n) {
            n = arg3;
        }
        vt = M2C_FIELD(arg1, void **, 0x18);
        arg2 += n;
        M2C_FIELD(vt, void (**)(void *, char *, s32), 0x3C)((char *)arg1 + M2C_FIELD(vt, s16 *, 0x38), src, n);
        arg3 -= n;
    }
}

void *fn_802DF2E0(void *arg0, s32 arg1) {
    extern char lbl_80419730[];
    M2C_FIELD(arg0, char **, 0x18) = lbl_80419730;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return arg0;
}

s32 fn_802DF304(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802DF30C(void) {
    return 0;
}

void *fn_802DF314(void *arg0, s32 arg1) {
    extern char lbl_804196E8[];
    M2C_FIELD(arg0, char **, 0x18) = lbl_804196E8;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return arg0;
}

s32 fn_802DF338(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802DF340(void) {
    return 0;
}

s32 fn_802DF348(s32 *self) {
    return self[7];
}

s32 fn_802DF350(void) {
    return 0;
}

char *fn_802DF358(char *dst, char *src) {
    char *p = dst;

    while (*src != 0) {
        switch (*src) {
        case '"':
        case '#':
        case '*':
        case '/':
        case ':':
        case '<':
        case '>':
        case '?':
        case '\\':
        case '|':
            *p = '_';
            break;
        default:
            *p = *src;
            break;
        }
        src++;
        p++;
    }
    return dst;
}

s32 fn_802DF3F0(s32 arg0) {
    s32 fn_80248640(s32, M2C_UNK);
    s32 p;

    p = fn_80248640(arg0, 0x5C);
    while (p != 0) {
        *(char *)p = '/';
        p = fn_80248640(p, 0x5C);
    }
    return arg0;
}

s32 fn_802DF448(s32 arg0, s32 arg1) {
    M2C_UNK fn_80248784(s32, s32);
    s32 fn_80248808(s32);
    M2C_UNK fn_802485B0(s32, char *);
    extern char lbl_803F0498[];
    s32 len;

    if (arg0 != arg1) {
        fn_80248784(arg0, arg1);
    }
    fn_802DF3F0(arg0);
    len = fn_80248808(arg0);
    if (len != 0 && *(char *)(len + arg0 - 1) != '/') {
        fn_802485B0(arg0, lbl_803F0498);
    }
    return arg0;
}

s32 fn_802DF4B8(s32 arg0, s32 arg1) {
    s32 fn_80248640(s32, M2C_UNK);
    M2C_UNK fn_80248784(s32, s32);
    M2C_UNK fn_802DF3F0(s32);
    s32 temp_r3;

    temp_r3 = fn_80248640(arg1, 0x3A);
    if ((temp_r3 != 0) && (temp_r3 == (s32) (arg1 + 1))) {
        fn_80248784(arg0, temp_r3 + 1);
    } else if (arg0 != arg1) {
        fn_80248784(arg0, arg1);
    }
    fn_802DF3F0(arg0);
    return arg0;
}

char *fn_802DF728(char *dst, char *src) {
    char *fn_80248ADC(char *, s32);
    char *fn_80248784(char *, char *);
    char *p;
    char *q;

    if (dst != src) {
        fn_80248784(dst, src);
    }
    fn_802DF3F0(dst);
    p = fn_80248ADC(dst, '/');
    if (p != NULL) {
        p[1] = 0;
    } else {
        q = fn_80248ADC(dst, ':');
        if (q != NULL) {
            q[1] = (char) (s32) p;
        } else {
            __builtin_memcpy(dst, "./", 3);
        }
    }
    return dst;
}

char *fn_802DF7BC(char *dst, char *src) {
    char *fn_80248ADC(char *, s32);
    char *fn_80248640(char *, s32);
    char *fn_80248784(char *, char *);
    char *p;

    p = fn_80248ADC(src, '.');
    if (p != NULL) {
        if (fn_80248640(p, '/') != NULL || fn_80248640(p, '\\') != NULL) {
            dst[0] = 0;
        } else {
            fn_80248784(dst, p + 1);
        }
    } else {
        dst[0] = (char) (s32) p;
    }
    return dst;
}

void fn_802DF8DC(void *, s32);
s32 *fn_802DF844(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0[0] = arg1;
    arg0[1] = 0;
    arg0[2] = arg3;
    if (arg2 != 0) {
        fn_802DF8DC(arg0, -1);
    }
    return arg0;
}

void fn_802DF890(void *arg0, s32 arg1) {
    M2C_UNK fn_802DF924();
    if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
        fn_802DF924();
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_802DF8DC(void *arg0, s32 arg1) {
    void *obj = M2C_FIELD(arg0, void **, 0);
    void *vt = M2C_FIELD(obj, void **, 0);
    M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(vt, s32 (**)(void *), 0x14)((u8 *)obj + M2C_FIELD(vt, s16 *, 0x10));
}

s32 fn_802DF924(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        void *obj = M2C_FIELD(arg0, void **, 0);
        void *vt = M2C_FIELD(obj, void **, 0);
        M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(vt, s32 (**)(void *), 0x1C)((u8 *)obj + M2C_FIELD(vt, s16 *, 0x18)) ^ 1;
    }
    return M2C_FIELD(arg0, s32 *, 4) ^ 1;
}

s32 fn_802DF984(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        void *obj = M2C_FIELD(arg0, void **, 0);
        void *vt = M2C_FIELD(obj, void **, 0);
        M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(vt, s32 (**)(void *), 0x24)((u8 *)obj + M2C_FIELD(vt, s16 *, 0x20)) ^ 1;
    }
    return M2C_FIELD(arg0, s32 *, 4) ^ 1;
}

void fn_802DF9E4(s32 arg0) {
    M2C_UNK fn_802D8DA4(void *, s32);
    fn_802D8DA4((void *)arg0, fn_802D9124());
}

void fn_802DFB30(void) {

}

void fn_802DFB34(void) {

}

s32 fn_802DFB38(void) {
    return 0;
}

void fn_802DFB40(void) {

}

void fn_802DFB44(s32 arg0, s32 arg1) {
    extern void *lbl_8049619C;
    if (arg1 == 0xFFFF && arg0 != 0) {
        s32 *p = (s32 *)&lbl_8049619C;
        p[1] = 0;
        p[0] = 0;
    }
}

void fn_802DFB70(void) {
    void fn_802DFB44(s32, s32);
    fn_802DFB44(1, 0xFFFF);
}

