/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8016F980(void *arg0) {
    s32 var_r11;
    void *temp_r9;

    var_r11 = 0;
    temp_r9 = *M2C_FIELD(arg0, void ***, 0);
    if (temp_r9 != NULL) {
        var_r11 = M2C_FIELD(temp_r9, s32 *, -4);
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (var_r11 - 1);
}

void fn_8016FA20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}

s32 fn_8016FA58(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
    return 1;
}

s32 fn_8016FE18(void) {
    return 1;
}

extern u8 lbl_80434F64[];
void fn_80174B18(u8 *arg);
void fn_8017073C(void) {
    fn_80174B18(lbl_80434F64);
}

s32 fn_80170764(void) {
    return 0;
}

s32 fn_8017076C(void) {
    return 0;
}

s32 fn_80171718(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x328), s32 *, 0x18);
}

s32 fn_80171724(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x328) + 0x10;
}

s32 fn_80171960(void) {
    return 1;
}

void fn_80172464(s32 arg0) {
    M2C_UNK fn_80174A98(s32);
    fn_80174A98(arg0 + 0x18);
}

s32 fn_80173E64(void) {
    return 1;
}

s32 fn_80173E6C(void) {
    return 1;
}

s32 fn_80173E74(void) {
    return 1;
}

s32 fn_80173E7C(void) {
    return 1;
}

s32 fn_80174400(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) + 1);
    return 1;
}

s32 fn_80174418(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) - 1);
    return 1;
}

s32 fn_801746D0(void) {
    return 1;
}

s32 fn_80174C90(s32 *arg0) {
    *arg0 = 0;
    return 1;
}

s32 fn_80174D04(s32 *arg0) {
    *arg0 = 0;
    return 1;
}

s32 fn_80174E40(u32 *arg0, u32 *arg1) {
    return (u32) *arg0 < (u32) *arg1;
}

void fn_80174E84(s32 *self, s32 value) {
    *self = value;
}

void fn_80175B08(void) {
    s32 var_ctr;

    var_ctr = 0x40;
    do {
        var_ctr -= 1;
    } while (var_ctr != 0);
}

s32 fn_80175C9C(s32 *self) {
    return self[2];
}

s32 fn_80175CA4(s32 *self) {
    return self[1];
}

s32 fn_80175CAC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
    return 1;
}

s32 fn_80175CB8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xAC);
}

s32 fn_80175CC0(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_80175CC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void fn_80175CD0(void) {

}

s32 fn_80175CD4(void) {
    return 1;
}

s32 fn_80175CDC(void) {
    return 0;
}

s32 fn_80175CE4(void) {
    return 0;
}

s32 fn_80175CEC(s32 arg0) {
    return arg0 + 0x18;
}

void fn_80175CF4(s32 arg0) {
    fn_80174B18(arg0 + 0x18);
}

void fn_80175D18(s32 arg0) {
    M2C_UNK fn_80174A98(s32);
    fn_80174A98(arg0 + 0x18);
}

s32 fn_80175D3C(void) {
    return 0;
}

s32 fn_80175D44(void) {
    return 0;
}

s32 fn_80175D4C(void) {
    return 0;
}

s32 fn_80175D54(void) {
    return 0;
}

s32 fn_80175D5C(void) {
    return 1;
}

s32 fn_80175D64(void) {
    return 1;
}

s32 fn_80175D6C(void) {
    return 0x10;
}

s32 fn_80175D74(void) {
    return 0x40;
}

s32 fn_80175D7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80175D84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC4);
}

s32 fn_80175D8C(void) {
    return 1;
}

s32 fn_80175D94(void) {
    return 1;
}

s32 fn_80175D9C(void) {
    return 1;
}

s32 fn_80175DA4(void) {
    return 1;
}

s32 fn_80175DAC(void) {
    return 1;
}

s32 fn_80175DB4(void) {
    return 1;
}

s32 fn_80175DBC(void) {
    return 1;
}

s32 fn_80175DC4(void) {
    return 1;
}

s32 fn_80175DCC(void) {
    return 1;
}

s32 fn_80175DD4(void) {
    return 1;
}

s32 fn_80175DDC(void) {
    return 1;
}

s32 fn_80175DE4(void) {
    return 1;
}

s32 fn_80175DEC(void) {
    return 1;
}

s32 fn_80175DF4(void) {
    return 1;
}

s32 fn_80175DFC(void) {
    return 1;
}

s32 fn_80175E04(void) {
    return 1;
}

s32 fn_80175E0C(void) {
    return 1;
}

s32 fn_80175E14(void) {
    return 1;
}

extern s32 lbl_80495C90;
s32 fn_80175E1C(void) {
    return lbl_80495C90;
}

s32 fn_80175E24(s32 arg0, s32 arg1) {
    s32 var_r0;

    if (arg1 != 0x13) {
        var_r0 = 0;
        if (arg1 == 0x12) {
            var_r0 = arg0;
        }
        return var_r0;
    }
    return arg0;
}

s32 fn_80175E44(void) {
    return 0;
}

s32 fn_80175E4C(void) {
    return 1;
}

s32 fn_80175E54(void) {
    return 1;
}

s32 fn_80175E5C(void) {
    return 1;
}

s32 fn_80175E64(void) {
    return 1;
}

s32 fn_80175E6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xE0);
}

s32 fn_80175E74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xD4);
}

s32 fn_80175EA0(void) {
    return lbl_80495C90;
}

s32 fn_80175EA8(void) {
    return 1;
}

s32 fn_80175F54(void) {
    return 1;
}

s32 fn_80175F5C(void) {
    return 1;
}

s32 fn_80175F64(void) {
    return 1;
}

s32 fn_80175F6C(void) {
    return 1;
}

s32 fn_80175F74(void) {
    return 1;
}

s32 fn_80175F7C(void) {
    return 1;
}

s32 fn_80175F84(void) {
    return 0;
}

s32 fn_80175F8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xB4);
}

s32 fn_80176068(void) {
    return 1;
}

s32 fn_80176070(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C0);
}

s32 fn_80176090(void) {
    return 0;
}

s32 fn_80176098(void) {
    return 0;
}

s32 fn_801760B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1DC);
}

s32 fn_801760B8(void) {
    return lbl_80495C90;
}

s32 fn_801760CC(void) {
    return lbl_80495C90 + 0x10;
}

s32 fn_801760D8(void) {
    return M2C_FIELD(lbl_80495C90, s32 *, 0x14);
}

void fn_80176180(s32 arg0) {
    M2C_UNK fn_8016F910(s32);
    fn_8016F910(arg0 + 0x1A0);
}

s32 fn_80176288(s32 arg0) {
    return arg0 + 0x1E0;
}

s32 fn_80176290(s32 arg0) {
    return arg0 + 0x28C;
}

s32 fn_801762BC(void) {
    return 1;
}

s32 fn_801762C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x32C);
}

s32 fn_801762CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x330);
}

s32 fn_801762D4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x334);
}

s32 fn_801762DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x328);
}

u8 fn_801762E4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x340);
}

u8 fn_801762EC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x341);
}

void fn_801763D0(M2C_UNK *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(lbl_80495C90, s32 *, 0x58) + 0x110;
    *arg0 = M2C_FIELD(temp_r9, M2C_UNK **, 8);
    M2C_FIELD(temp_r9, M2C_UNK **, 8) = arg0;
}

