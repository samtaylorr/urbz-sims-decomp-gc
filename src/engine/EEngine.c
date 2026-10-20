/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 fn_802D1E4C[];
void fn_802E08F8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x454) = 0;
}

void *fn_802E0AD8(void) {
    return fn_802D1E4C;
}

extern u8 fn_802D1F94[];
void *fn_802E0AE4(void) {
    return fn_802D1F94;
}

extern u8 fn_802D1EDC[];
void *fn_802E0AF0(void) {
    return fn_802D1EDC;
}

s32 fn_802E0AFC(void *arg0) {
    return *M2C_FIELD(arg0, s32 **, 0x470);
}

extern u8 lbl_803F050C[];
void *fn_802E0B08(void) {
    return lbl_803F050C;
}

extern u8 lbl_803F0540[];
void *fn_802E0B14(void) {
    return lbl_803F0540;
}

s32 fn_802E0B20(void) {
    return 0;
}

s32 fn_802E0B28(void) {
    return 0;
}

s32 fn_802E0B30(void) {
    return 8;
}

s32 fn_802E0B38(s32 arg0) {
    return arg0 + 0x350;
}

s32 fn_802E0B40(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x468);
}

void fn_802E0B48(u8 *self, s32 value) {
    *(s32 *)(self + 0x468) = value;
}

s32 fn_802E0B50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x46C);
}

void fn_802E0B58(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x46C) = arg1;
}

void fn_802E0B60(void) {

}

void fn_802E0B64(void) {

}

void fn_802E0B68(void) {

}

s32 fn_802E0B6C(void) {
    return 0x18000;
}

void fn_802E0B78(void) {

}

void fn_802E0D24(void) {
    extern s32 lbl_80494FDC;
    lbl_80494FDC = 0;
}

void fn_802E0D30(void) {

}

s32 fn_802E0FB4(void *arg0) {
    extern s32 lbl_80494E04;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
        return lbl_80494E04;
    }
    return 1;
}

void fn_802E13B4(void) {

}

void fn_802E13B8(void) {

}

void fn_802E18CC(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) == arg1) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
}

void fn_802E18E8(void *self, void *arg1) {
    s32 fn_802D0BC0(void);
    s32 fn_802D118C(s32);
    s32 fn_802D1194(s32);
    s32 fn_802D119C(s32);
    s32 fn_802D12C4(s32);
    s32 fn_802DCFE0(s32);
    M2C_FIELD(arg1, s32 *, 0) = fn_802D12C4(fn_802D0BC0());
    M2C_FIELD(arg1, u32 *, 4) = (u32) (fn_802DCFE0(fn_802D0BC0()) + 0x3FF) >> 0xAU;
    M2C_FIELD(arg1, u32 *, 8) = (u32) (fn_802D118C(fn_802D0BC0()) + 0x3FF) >> 0xAU;
    M2C_FIELD(arg1, u32 *, 0xC) = (u32) (fn_802D1194(fn_802D0BC0()) + 0x3FF) >> 0xAU;
    M2C_FIELD(arg1, s32 *, 0x10) = fn_802D119C(fn_802D0BC0());
}

void fn_802E1964(void *self, void *arg1) {
    extern M2C_UNK lbl_803F072C;
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
    M2C_FIELD(arg1, M2C_UNK **, 0) = &lbl_803F072C;
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg1, s32 *, 8) = 0;
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
}

void fn_802E19D0(void *self, void *arg1) {
    extern M2C_UNK lbl_803F0754;
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
    M2C_FIELD(arg1, M2C_UNK **, 0) = &lbl_803F0754;
    M2C_FIELD(arg1, s32 *, 4) = 1;
    M2C_FIELD(arg1, s32 *, 8) = 0;
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
}

void fn_802E19F8(s32 arg0, s32 arg1) {
    s32 var_ctr;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        var_ctr = 3;
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}

void fn_802E1A20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void fn_802E1A28(void) {

}

void fn_802E1A2C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
}

s32 fn_802E1A34(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

void fn_802E1A3C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

s32 fn_802E1A44(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_802E1A4C(void) {

}

s32 fn_802E1A50(void) {
    return 1;
}

void fn_802E1A58(void) {
    fn_802E19F8(1, 0xFFFF);
}

