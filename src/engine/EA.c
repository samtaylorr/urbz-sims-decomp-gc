/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80258544(void);
s32 fn_802D82B4(void) {
    return 0;
}

void fn_802D8328(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
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

s32 fn_802D8458(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_802D8460(s32 *self) {
    return self[2];
}

void fn_802D8580(void *arg0) {
    M2C_UNK fn_802D8424(s32);
    fn_802D8424(M2C_FIELD(arg0, s32 *, 4));
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

void fn_802D8F48(void *arg0) {
    M2C_UNK fn_8025993C(s32);
    fn_8025993C(M2C_FIELD(arg0, s32 *, 0x318));
}

void fn_802D8F6C(void *arg0) {
    M2C_UNK fn_802599FC(s32);
    fn_802599FC(M2C_FIELD(arg0, s32 *, 0x318));
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

void fn_802D9110(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x32C) = arg1;
}

s32 fn_802D9118(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x32C);
}

void fn_802D9120(void) {

}

void fn_802D9124(void) {
    fn_80258544();
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

void fn_802DB018(void);
void fn_802DAFB0(void) {
    fn_802DB018();
}

void fn_802DAFD0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4D0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4D4) = arg2;
}

void fn_802DBBA8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x48C) = arg2;
    if (arg2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x48C) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x488) = arg1;
    M2C_FIELD(arg0, s32 *, 0x490) = 0;
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

void fn_802DDDC8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((arg1 + 0x1F) & 0xFFFFFFE0);
}

u32 fn_802DE1B0(void *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 4) + 0x1F) >> 5U;
}

void fn_802DE598(void) {

}

s32 fn_802DEC58(s32 *self) {
    return self[1];
}

extern void fn_802DED88(void *);
void fn_802DED88(void *self) {
    extern void *fn_802DDCE8(void *, s32);
    fn_802DDCE8(self, 0);
}

void fn_802DDC6C(void);
void fn_802DEDAC(void) {
    fn_802DDC6C();
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

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_802DF214(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_802DF304(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802DF30C(void) {
    return 0;
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

void fn_802DF890(void *arg0, s32 arg1) {
    M2C_UNK fn_802DF924();
    if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
        fn_802DF924();
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
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

void fn_802DFB70(void) {
    M2C_UNK fn_802DFB44(M2C_UNK, M2C_UNK);
    fn_802DFB44(1, 0xFFFF);
}

