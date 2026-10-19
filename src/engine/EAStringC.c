/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802999D4(void);
void fn_80299A50(void) {
    fn_802999D4();
}

void fn_80299AF4(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    *arg0 = (temp_r0 & 0xF000FFFF) | ((temp_r0 & 0x0FFF0000) + 0x10000);
}

void fn_80299B6C(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x60) & 0xFFFFFFFE;
    M2C_FIELD(arg0, s32 *, 0x60) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (temp_r0 | 1);
    }
}

s32 fn_80299B8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60) & 1;
}

s32 fn_80299C74(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C7C(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C84(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C8C(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C94(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299C9C(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299CA4(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299CAC(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_80299CB4(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_8029A0DC(void) {
    return 0;
}

void fn_8029A0E4(void) {

}

s32 fn_8029A0E8(void) {
    return 1;
}

extern s32 lbl_80496130;
s32 fn_8029D95C(void) {
    return lbl_80496130;
}

s32 fn_8029F4CC(void) {
    return 0;
}

void fn_8029F4D4(void) {

}

s32 fn_802A1514(s32 *self) {
    return *self;
}

void fn_802A151C(s32 *self, s32 value) {
    *self = value;
}

s32 fn_802A2014(s32 arg0) {
    return arg0 - 8;
}

s32 fn_802A201C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, -4);
}

s32 fn_802A2024(void *arg0) {
    return M2C_FIELD(arg0, s32 *, -8);
}

void fn_802A204C(void);
void fn_802A202C(void) {
    fn_802A204C();
}

s32 fn_802A4354(void) {
    return 1;
}

void fn_802ACAF8(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18) & 0xFFFFFFFE;
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_r0 | 1);
    }
}

s32 fn_802ACB18(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) & 1;
}

void fn_802ACB24(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18) & 0xFFFFFFFD;
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_r0 | 2);
    }
}

s32 fn_802ACB44(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) & 2;
}

void fn_802AEA9C();
void fn_802ACB50(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802AEABC();
void fn_802ACB74(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

void fn_802ADE44();
void fn_802ACB98(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

s32 fn_802ACBBC(void) {
    return 1;
}

void fn_802ADFFC();
void fn_802ACBC4(char *self) {
    extern void fn_802ADFFC(void *);
    fn_802ADFFC(self + 8);
}

void fn_802AE360();
void fn_802ACBE8(char *self) {
    extern void fn_802AE360(void *);
    fn_802AE360(self + 8);
}

void fn_803B72E0();
void fn_802ACC0C(char *self) {
    extern void fn_803B72E0(void *);
    fn_803B72E0(self + 8);
}

void fn_803B739C();
void fn_802ACC30(char *self) {
    extern void fn_803B739C(void *);
    fn_803B739C(self + 8);
}

u8 *fn_802ACC54(u8 *self) {
    return self + 8;
}

u8 *fn_802ACC5C(u8 *self) {
    return self + 8;
}

s32 fn_802ACC64(void) {
    return 1;
}

s32 fn_802ACCFC(void) {
    return 0;
}

void fn_802ACD04(void) {

}

void fn_802ACDE4(void) {

}

void fn_802ACDE8(void) {

}

void fn_802ACDEC(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_802ACE10(u8 *self) {
    return self + 8;
}

u8 *fn_802ACE18(u8 *self) {
    return self + 8;
}

s32 fn_802ACE20(void) {
    return 1;
}

s32 fn_802ACE28(void) {
    return 1;
}

void fn_802ACE30(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802ACE54(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

s32 fn_802ACF08(void) {
    return 0;
}

void fn_802ACF10(void) {

}

void fn_802ACFF0(void) {

}

void fn_802ACFF4(void) {

}

void fn_802ACFF8(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_802AD01C(u8 *self) {
    return self + 8;
}

u8 *fn_802AD024(u8 *self) {
    return self + 8;
}

s32 fn_802AD02C(void) {
    return 1;
}

s32 fn_802AD034(void) {
    return 1;
}

void fn_802AD03C(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802AD060(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

s32 fn_802AD114(void) {
    return 0;
}

void fn_802AD11C(void) {

}

void fn_802AD1FC(void) {

}

void fn_802AD200(void) {

}

void fn_802AD204(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_802AD228(u8 *self) {
    return self + 8;
}

u8 *fn_802AD230(u8 *self) {
    return self + 8;
}

s32 fn_802AD238(void) {
    return 1;
}

s32 fn_802AD240(void) {
    return 1;
}

void fn_802AD248(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802AD26C(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

s32 fn_802AD320(void) {
    return 0;
}

void fn_802AD328(void) {

}

s32 fn_802AD498(void) {
    return 0;
}

void fn_802AD4A0(void) {

}

void fn_802AE440(void);
void fn_802AE5EC(void) {
    fn_802AE440();
}

void fn_802AF384(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x20) = farg0;
    M2C_FIELD(arg0, f32 *, 0x24) = farg1;
}

s32 fn_802AF390(s32 arg0) {
    return arg0 + 0x10;
}

s32 fn_802AF398(s32 arg0) {
    return arg0 + 0x28;
}

void fn_8027873C(void);
void fn_802B092C(void) {
    fn_8027873C();
}

s32 fn_802B094C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) + 8;
}

s32 fn_802B0958(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

s32 fn_802B0D24(void) {
    return lbl_80496130;
}

s32 fn_802B1020(void) {
    return 0;
}

void fn_802B1028(void) {

}

s32 fn_802B201C(void) {
    return lbl_80496130;
}

void fn_803B6FFC();
void fn_802B3A50(char *self) {
    extern void fn_803B6FFC(void *);
    fn_803B6FFC(self + 8);
}

void fn_802BC17C();
void fn_802B3ABC(char *self) {
    extern void fn_802BC17C(void *);
    fn_802BC17C(self + 8);
}

void fn_802BC36C();
void fn_802B3AE0(char *self) {
    extern void fn_802BC36C(void *);
    fn_802BC36C(self + 8);
}

u8 *fn_802B3B04(u8 *self) {
    return self + 8;
}

void fn_802B3B0C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

s32 fn_802B3B14(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_802B3B1C(void) {
    return 0;
}

s32 fn_802B3B24(void) {
    return 0;
}

extern void (*lbl_80443314[])(void);
void fn_802B3CA8(void) {
    lbl_80443314[0]();
}

s32 fn_802B46AC(void) {
    return 0;
}

void fn_802B46B4(void) {

}

s32 fn_802B4E80(void) {
    return lbl_80496130;
}

void fn_802B6E08(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    *arg0 = (temp_r0 & 0xF000FFFF) | ((temp_r0 & 0x0FFF0000) + 0x10000);
}

s32 fn_802B6F38(void) {
    return 0;
}

s32 fn_802B6F40(void) {
    return 0;
}

s32 fn_802B6F48(void) {
    return 0;
}

s32 fn_802B6F50(void) {
    return 0;
}

s32 fn_802B6F58(void) {
    return 0;
}

void fn_802B6FA0(void) {

}

void fn_802B6FA4(void) {

}

s32 fn_802B70DC(s32 *arg0) {
    return *arg0 & 0x3F;
}

s32 fn_802B70E8(u32 *arg0) {
    return ((u32) *arg0 >> 0xEU) & 1;
}

u8 fn_802B70F4(u32 *arg0) {
    return (u8) ((u32) *arg0 >> 6U);
}

s32 fn_802B7100(s32 *arg0) {
    return *arg0 & 0x8000;
}

void fn_802B710C(s32 *arg0, s32 arg1) {
    *arg0 = (*arg0 & 0xF000FFFF) | (arg1 << 0x10);
}

void fn_802B7124(s32 *arg0, s32 arg1) {
    *arg0 = (*arg0 & 0xFFFFFFC0) | arg1;
}

void fn_802B7138(s32 *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = *arg0 & 0xFFFF7FFF;
    *arg0 = temp_r0;
    if (arg1 != 0) {
        *arg0 = temp_r0 | 0x8000;
    }
}

void fn_802B7158(s32 *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = *arg0 & 0xFFFFBFFF;
    *arg0 = temp_r0;
    if (arg1 != 0) {
        *arg0 = temp_r0 | 0x4000;
    }
}

void fn_802B71A8(s32 *arg0) {
    *arg0 += 0x40;
}

void fn_802B71B8(s32 *arg0) {
    *arg0 -= 0x40;
}

void fn_802B71C8(s32 *arg0) {
    *arg0 |= 0x40000000;
}

void fn_802B71D8(s32 *arg0) {
    *arg0 &= 0xBFFFFFFF;
}

s32 fn_802B71E8(u32 *arg0) {
    return ((u32) *arg0 >> 0x1EU) & 1;
}

void fn_802B71F4(void) {

}

void fn_802B71F8(void) {

}

void fn_802B71FC(void) {

}

void fn_802B7200(void) {

}

void fn_802B7204(void) {

}

void fn_802B7208(void) {

}

void fn_802B720C(void) {

}

void fn_802B7210(void) {

}

void fn_802B7214(void) {

}

void fn_802B7218(void) {

}

void fn_802B721C(void) {

}

void fn_802B7220(void) {

}

void fn_802B7224(void) {

}

void fn_802B7228(void) {

}

void fn_802B722C(void) {

}

void fn_802B7230(void) {

}

void fn_802B7234(void) {

}

void fn_802B7238(void) {

}

void fn_802B723C(void) {

}

s32 fn_802B7240(s32 arg0) {
    return arg0 - 0x10;
}

void fn_802B7248(void) {

}

void fn_802B724C(void) {

}

void fn_802B7250(void) {

}

void fn_802B7254(void) {

}

void fn_802B7258(void) {

}

s32 fn_802B72E8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 8) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7308(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 1) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7328(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 5) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7348(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 7) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7368(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 4) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7388(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 6) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B73A8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 9) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B73C8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0xA) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B73E8(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0xB) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7408(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x14) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7428(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x16) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7448(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x15) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

s32 fn_802B7468(u32 *arg0) {
    s32 var_r9;
    u32 temp_r3;

    temp_r3 = *arg0;
    var_r9 = 0;
    if ((s32) (temp_r3 & 0x3F) == 0x18) {
        var_r9 = (temp_r3 >> 0xFU) & 1;
    }
    return var_r9;
}

void fn_802B76E0(void) {

}

void fn_802B76E4(void) {

}

void fn_802B76E8(char *self) {
    extern void fn_802ADE44(void *);
    fn_802ADE44(self + 8);
}

u8 *fn_802B770C(u8 *self) {
    return self + 8;
}

u8 *fn_802B7714(u8 *self) {
    return self + 8;
}

s32 fn_802B771C(void) {
    return 1;
}

s32 fn_802B7724(void) {
    return 1;
}

void fn_802B772C(char *self) {
    extern void fn_802AEA9C(void *);
    fn_802AEA9C(self + 8);
}

void fn_802B7750(char *self) {
    extern void fn_802AEABC(void *);
    fn_802AEABC(self + 8);
}

s32 fn_802B7804(void) {
    return 0;
}

void fn_802B780C(void) {

}

void fn_802B7888(char *self) {
    extern void fn_802ADFFC(void *);
    fn_802ADFFC(self + 8);
}

void fn_802B78AC(char *self) {
    extern void fn_802AE360(void *);
    fn_802AE360(self + 8);
}

s32 fn_802B8D70(void) {
    return 0;
}

void fn_802B8D78(void) {

}

void fn_802B8F3C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}

s32 fn_802B90B4(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802B914C(void) {
    return 0;
}

void fn_802B9154(void) {

}

s32 fn_802BA098(void) {
    return 0;
}

void fn_802BA0A0(void) {

}

void fn_802BA10C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

s32 fn_802BAFDC(void) {
    return lbl_80496130;
}

s32 fn_802BAFE4(void) {
    return lbl_80496130;
}

s32 fn_802BB1A8(void) {
    return lbl_80496130;
}

s32 fn_802BB1B0(void) {
    return lbl_80496130;
}

s32 fn_802BB38C(void) {
    return 0;
}

void fn_802BB394(void) {

}

void fn_802BB41C(void *arg0) {
    extern void *lbl_80494D94;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D94;
    lbl_80494D94 = arg0;
}

void fn_802BB42C(void *arg0) {
    extern void *lbl_80494D94;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D94;
    lbl_80494D94 = arg0;
}

s32 fn_802BB43C(void) {
    return 0;
}

s32 fn_802BB444(void) {
    return 0;
}

void fn_802BB630(void *arg0) {
    extern void *lbl_80494D94;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D94;
    lbl_80494D94 = arg0;
}

s32 fn_802BB640(s32 *self) {
    return self[2];
}

void fn_802BB6CC(void) {
    lbl_80443314[0]();
}

void fn_802BB77C(void *arg0) {
    extern void *lbl_80494D98;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D98;
    lbl_80494D98 = arg0;
}

void fn_802BB78C(void *arg0) {
    extern void *lbl_80494D98;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D98;
    lbl_80494D98 = arg0;
}

s32 fn_802BB79C(void) {
    return 0;
}

s32 fn_802BB7A4(void) {
    return 0;
}

void fn_802BB99C(void *arg0) {
    extern void *lbl_80494D98;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D98;
    lbl_80494D98 = arg0;
}

f32 fn_802BB9AC(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 8);
}

void fn_802BBA38(void) {
    lbl_80443314[0]();
}

void fn_802BBAE8(void *arg0) {
    extern void *lbl_80494D9C;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D9C;
    lbl_80494D9C = arg0;
}

void fn_802BBAF8(void *arg0) {
    extern void *lbl_80494D9C;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D9C;
    lbl_80494D9C = arg0;
}

s32 fn_802BBB08(void) {
    return 0;
}

s32 fn_802BBB10(void) {
    return 0;
}

void fn_802BBCFC(void *arg0) {
    extern void *lbl_80494D9C;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80494D9C;
    lbl_80494D9C = arg0;
}

s32 fn_802BBD0C(s32 *self) {
    return self[2];
}

void fn_802BBD98(void) {
    lbl_80443314[0]();
}

s32 fn_802BC640(void **arg0, u32 arg1) {
    return arg1 < (u16) M2C_FIELD(*arg0, u16 *, 4);
}

s32 fn_802BCA14(void) {
    return 0;
}

s32 fn_802BCA1C(void) {
    return 0;
}

s32 fn_802BCBBC(void) {
    return 0;
}

s32 fn_802BCBC4(void) {
    return 0;
}

