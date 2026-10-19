/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80495C94;
extern void fn_800F1A60(s32, s32);
void fn_80176558(void) {
    fn_800F1A60((s32)&lbl_80495C94, 2);
}

M2C_UNK *fn_80177154(void) {
    extern M2C_UNK lbl_80495CA0;
    return &lbl_80495CA0;
}

s32 fn_80181314(void) {
    return 0x50455253;
}

s32 fn_80181A20(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5FC) ^ 1;
}

void fn_80182220(void) {

}

void fn_80183830(void *arg0) {
    M2C_UNK fn_80134F20(s32);
    void *temp_r11;
    void *temp_r9;

    fn_80134F20(M2C_FIELD(arg0, s32 *, 0));
    temp_r11 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r11, void **, 4);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x16C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x168));
}

s32 fn_80183B60(void **arg0) {
    return ((u32) M2C_FIELD(*arg0, u32 *, 0x84) >> 1U) & 1;
}

void fn_80184F48(void *arg0) {
    M2C_UNK fn_80176C18(void *, M2C_UNK);
    M2C_UNK fn_80184488(void *);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x5FC) != 0) {
        fn_80176C18(arg0 + 0x130, 0);
        M2C_FIELD(arg0, s32 *, 0x5FC) = 0;
        fn_80184488(arg0);
    }
}

void fn_80185868(void) {

}

void fn_8018586C(void) {

}

void fn_80185870(void) {

}

s32 fn_80185874(void) {
    return 0;
}

void fn_8018587C(void) {

}

void fn_80185880(void) {

}

void fn_80185884(void) {

}

void fn_80185DA8(void ***arg0, s32 arg1) {
    M2C_FIELD(**arg0, s32 *, 4) = arg1;
}

void fn_80185DB8(void) {

}

void fn_80185E00(void) {

}

void fn_80185E04(void) {

}

s32 fn_80185E08(void *arg0, s32 arg1) {
    s32 temp_r3;
    void *temp_r9;

    temp_r9 = arg0 + 0x130;
    temp_r3 = M2C_FIELD(temp_r9, s32 *, 0x374) - M2C_FIELD(temp_r9, s32 *, 0x370);
    if ((arg1 == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x5FC) != 0)) {
        return temp_r3 - 1;
    }
    return temp_r3;
}

u8 *fn_80185E9C(u8 *self) {
    return self + 8;
}

s16 fn_80185EA4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 8);
}

s32 fn_80185F00(s32 arg0) {
    return arg0 + 0x4C0;
}

s32 fn_80185F08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4BC);
}

u16 fn_80185F10(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x4E4);
}

void fn_80185F54(void *arg0, s32 arg1) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r11, void **, 4);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, s32), 0x114)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x110), 0x1F, arg1);
}

s32 fn_80185F94(void *arg0) {
    s32 fn_8017F6A8(void *);
    return fn_8017F6A8(arg0) != 0;
}

s32 fn_80185FC4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x48) != 0;
}

s32 fn_80185FDC(void **arg0) {
    return M2C_FIELD(M2C_FIELD(*arg0, void **, 0x8C), s32 *, 0x8C);
}

s32 fn_80185FEC(void **arg0) {
    return M2C_FIELD(M2C_FIELD(*arg0, void **, 0x8C), s32 *, 0x90);
}

s32 fn_80185FFC(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x90) & 1;
}

s32 fn_80186008(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x9C) & 1;
}

s32 fn_80186014(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x9C) >> 1U) & 1;
}

s16 fn_80186020(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x9C);
}

s32 fn_80186028(s32 arg0) {
    return arg0 + 0xA8;
}

s32 fn_80186030(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4D0);
}

s32 fn_80186038(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4F8);
}

s32 fn_80186040(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4FC);
}

void fn_80186048(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4FC) = arg1;
}

s32 fn_80186050(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x500);
}

void fn_80186058(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x500) = arg1;
}

s32 fn_80186060(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x508);
}

s32 fn_80186068(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x504);
}

s32 fn_80186070(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x50C);
}

s32 fn_80186078(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x510);
}

s32 fn_80186080(void *arg0) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x4D8) - M2C_FIELD(arg0, s32 *, 0x4D4)) * 0xC18F9C19) >> 2;
}

void fn_801860A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x5F8) = arg1;
}

s32 fn_801860A8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x600);
}

void fn_801860B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x600) = arg1;
}

s32 fn_801860B8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x604);
}

void fn_801860C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x604) = arg1;
}

void fn_801860C8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x604) = 0;
}

void fn_80186160(void) {
    M2C_UNK fn_80185A90(M2C_UNK, M2C_UNK);
    fn_80185A90(1, 0xFFFF);
}

