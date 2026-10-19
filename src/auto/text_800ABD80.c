/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void fn_800ABE24(s32);
extern void fn_802D20E8(s32);
s32 *fn_800ABD80(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

void fn_800ABD94(s32 self, s32 flags) {
    fn_800ABE24(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800ACA14(void) {

}

void fn_800ACA18(void) {

}

void fn_800ACA1C(void) {

}

void fn_800ACBE8(void) {

}

void fn_800ACE5C(s32 arg0, s32 arg1) {
    s32 fn_800ABE88(s32, s32);
    s32 var_r30;
    s32 var_r31;

    if (arg1 != 0) {
        var_r31 = arg0 + 0x3C;
        var_r30 = 0;
loop_2:
        if (fn_800ABE88(var_r31, arg1) != 0) {
            fn_800ABE24(var_r31);
            return;
        }
        var_r30 += 1;
        var_r31 += 8;
        if (var_r30 > 0x7F) {

        } else {
            goto loop_2;
        }
    }
}

void fn_800ACF2C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 4;
}

void fn_800ADBEC(void) {

}

void fn_800ADD24(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 4;
    M2C_FIELD(arg0, s32 *, 0x470) = 3;
    M2C_FIELD(arg0, s32 *, 0x468) = 3;
}

s32 fn_800AEB28(void) {
    return 1;
}

void *fn_800AF0C8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4C4) = 1;
    return arg0 + 0x1C;
}

void fn_800AFD2C(void) {

}

void fn_800B01B4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4E0) = 3;
    M2C_FIELD(arg0, s32 *, 0x14) = 4;
}

void fn_800B1DCC(void) {

}

void fn_800B20E8(void *arg0) {
    s32 fn_800B2190(void *);
    M2C_UNK fn_800B2384(void *, s32);
    s32 fn_800B2710(void *, s32 *);
    s32 fn_800B2750(void *, s32 *);
    s32 sp8;
    void *temp_r29;

    temp_r29 = arg0 + 0x444;
    sp8 = M2C_FIELD(arg0, s32 *, 0x7AC);
    sp8 = fn_800B2710(temp_r29, &sp8);
    if ((fn_800B2750(temp_r29, &sp8) != 0) && (fn_800B2190(arg0) != 0)) {
        sp8 = M2C_FIELD(arg0, s32 *, 0x7AC);
        sp8 = fn_800B2710(temp_r29, &sp8);
    }
    if (fn_800B2750(arg0 + 0x444, &sp8) == 0) {
        fn_800B2384(arg0, sp8);
    }
}

void *fn_800B2614(void *arg0) {
    return arg0 + (M2C_FIELD(arg0, s32 *, 0x360) * 0x6C);
}

void *fn_800B2624(void *arg0) {
    return arg0 + (M2C_FIELD(arg0, s32 *, 0x364) * 0x6C);
}

void fn_800B2634(void *arg0) {
    s32 temp_r11;
    s32 temp_r9;
    s32 var_r0;

    temp_r11 = M2C_FIELD(arg0, s32 *, 0x360);
    if (temp_r11 == M2C_FIELD(arg0, s32 *, 0x364)) {
        M2C_FIELD(arg0, s32 *, 0x364) = -1;
        M2C_FIELD(arg0, s32 *, 0x360) = -1;
        return;
    }
    temp_r9 = temp_r11 + 1;
    var_r0 = temp_r9;
    if (0 > temp_r9) {
        var_r0 = temp_r11 + 8;
    }
    M2C_FIELD(arg0, s32 *, 0x360) = (s32) (temp_r9 - (var_r0 & 0xFFFFFFF8));
}

s32 fn_800B2678(void *arg0) {
    s32 fn_800B26F4();
    s32 temp_r11;
    s32 temp_r9;
    s32 var_r0;
    s32 var_r0_2;

    if (fn_800B26F4() != 0) {
        var_r0 = 0;
        M2C_FIELD(arg0, s32 *, 0x360) = 0;
        goto block_6;
    }
    temp_r9 = M2C_FIELD(arg0, s32 *, 0x364);
    temp_r11 = temp_r9 + 1;
    var_r0_2 = temp_r11;
    if (temp_r11 < 0) {
        var_r0_2 = temp_r9 + 8;
    }
    var_r0 = temp_r11 - (var_r0_2 & 0xFFFFFFF8);
    if (var_r0 == (s32) M2C_FIELD(arg0, s32 *, 0x360)) {
        return 0;
    }
block_6:
    M2C_FIELD(arg0, s32 *, 0x364) = var_r0;
    return 1;
}

s32 fn_800B2708(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x360);
}

s32 fn_800B2764(s32 arg0, s32 *arg1) {
    return arg0 + (*arg1 * 0x6C);
}

s32 fn_800B2EF4(char *self) {
    return *(s32 *)(self + 0xC);
}

s16 fn_800B2EFC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x10);
}

s32 fn_800B2F04(s32 arg0) {
    return arg0 + 0x10;
}

s32 fn_800B2F0C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s16 fn_800B2F14(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x18);
}

s32 fn_800B2F1C(s32 arg0) {
    return arg0 + 0x18;
}

s32 fn_800B2F3C(s32 arg0) {
    return arg0 + 0x1A;
}

s32 fn_800B2F44(s32 arg0) {
    return arg0 + 0x1C;
}

s32 fn_800B2F4C(s32 *self) {
    return self[1];
}

s32 fn_800B2F54(s32 *self) {
    return self[2];
}

u16 fn_800B2F5C(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x1E);
}

u8 fn_800B2F64(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x20);
}

u8 fn_800B2F6C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x21);
}

u8 fn_800B2F74(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x22);
}

void fn_800B2F94(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) (M2C_FIELD(arg0, u8 *, 0x10) | arg1);
}

void fn_800B2FA4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) (M2C_FIELD(arg0, u8 *, 0x10) & ~arg1);
}

s32 fn_800B2FB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 fn_800B2FBC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}

s32 fn_800B2FC4(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_800B2FCC(void) {
    s32 fn_801D7E6C();
    M2C_UNK fn_801D841C(s32, M2C_UNK);
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494600;
    if ((s32) lbl_80494600 == 0) {
        fn_802D1FC8(0x78);
        lbl_80494600 = fn_801D7E6C();
    }
    fn_801D841C(lbl_80494600, 0xF926C0B2);
}

void fn_800B3014(void) {
    M2C_UNK fn_800B2C98(M2C_UNK, M2C_UNK);
    fn_800B2C98(1, 0xFFFF);
}

