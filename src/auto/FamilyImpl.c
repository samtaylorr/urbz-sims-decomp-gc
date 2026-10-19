/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80106008(s32 *arg0) {
    M2C_UNK fn_8011AA6C(s32);
    fn_8011AA6C(*arg0);
}

s32 fn_8010A3E8(void) {
    return 0;
}

void fn_8010A3F0(void) {

}

s32 fn_8010A610(void) {
    return 0x43555253;
}

s32 fn_8010A7EC(void) {
    return 0;
}

s32 fn_8010A7F4(void *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 8) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xC) != 0)) {
        var_r9 = 1;
    }
    return var_r9;
}

s32 fn_8010A89C(s32 *self) {
    return self[7];
}

void fn_8010A8A4(void) {

}

void fn_8010AB64(void *arg0, s32 arg1) {
    extern s16 lbl_804944C4;
    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
    }
    lbl_804944C4 = 1;
}

s32 fn_8010B4E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

void fn_8010B528(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

extern u8 lbl_8040E770[];
extern void fn_802D20E8(void *);
void fn_8010B568(void **self, s32 flags) {
    *self = lbl_8040E770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8010B9A0(s32 arg0, s32 arg1) {
    s32 fn_800F3304(s32);
    M2C_UNK fn_800F7148(s32, s32);
    fn_800F7148(arg1, fn_800F3304(arg0 + 4));
}

s32 fn_8010B9DC(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(arg0, s32 *, 0x24)) >> 2;
}

void fn_8010BD14(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F22F0(s32, s32);
    s32 fn_800F7138(s32);
    fn_800F22F0(arg0 + 4, fn_800F7138(arg1));
}

s32 fn_8010BD50(void) {
    return 0;
}

void fn_8010BF98(s32 arg0, s32 arg1) {
    M2C_UNK fn_8018D8DC(s32, s32, M2C_UNK);
    fn_8018D8DC(arg1, arg0, 1);
}

void **fn_8010C02C(void **self) {
    *self = lbl_8040E770;
    return self;
}

s32 fn_8010C040(s32 *self) {
    return self[2];
}

void fn_8010C048(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

s32 fn_8010C050(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_8010C058(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

s32 fn_8010C060(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void fn_8010C068(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

s32 fn_8010C070(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void fn_8010C078(void *arg0, s32 arg1) {
    if (arg1 <= 0xF423F) {
        M2C_FIELD(arg0, s32 *, 0x14) = arg1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0xF423F;
}

s32 fn_8010C098(s32 *self) {
    return self[6];
}

void fn_8010C0A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

void fn_8010C0A8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}

void fn_8010C0B8(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x34) & 0xFFFFFFFE;
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r0 | 1);
    }
}

s32 fn_8010C0D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34) & 1;
}

void fn_8010C0E4(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x34) & 0xFFFFFFFD;
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r0 | 2);
    }
}

s32 fn_8010C104(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 1U) & 1;
}

void fn_8010C110(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x34) & 0xFFFFFFFB;
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r0 | 4);
    }
}

s32 fn_8010C130(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 2U) & 1;
}

s32 fn_8010C13C(void) {
    return 0;
}

s32 fn_8010C144(void) {
    return 0;
}

s32 fn_8010C14C(void) {
    return 0;
}

s32 fn_8010C154(void) {
    return 0;
}

void fn_8010C15C(void) {
    M2C_UNK fn_8010C214();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_8010C214();
}

void fn_8010C184(void) {
    M2C_UNK fn_8010C214();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_8010C214();
}

void fn_8010C1AC(void) {
    M2C_UNK fn_8010C214();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_8010C214();
}

s32 fn_8010C580(void) {
    return 0;
}

s32 fn_8010C5F8(void) {
    return 1;
}

s32 fn_8010C670(void) {
    return 0;
}

s32 fn_8010C678(void) {
    return 0;
}

s32 fn_8010C680(void) {
    return 0;
}

s32 fn_8010C688(void) {
    return 0;
}

s32 fn_8010C9E8(void) {
    extern void *lbl_80495ADC;
    if ((void *) lbl_80495ADC != NULL) {
        return M2C_FIELD(lbl_80495ADC, s32 *, 0x4C);
    }
    return 3;
}

void fn_8010CFA0(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8010D220(void) {
    return 0;
}

void fn_8010D228(void) {

}

extern s32 lbl_80494418;
void fn_8010D22C(void (*cb)(void)) {
    lbl_80494418 = cb;
}

extern s32 lbl_8049441C;
void fn_8010D234(void (*cb)(void)) {
    lbl_8049441C = cb;
}

void fn_8010D290(void) {
    M2C_UNK fn_8010D23C(M2C_UNK, M2C_UNK);
    fn_8010D23C(1, 0xFFFF);
}

