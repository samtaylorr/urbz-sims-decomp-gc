/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800F77AC(void);
extern s32 lbl_80495D68;
extern void fn_800F1A60(s32, s32);
void fn_801B3724(void) {
    fn_800F1A60((s32)&lbl_80495D68, 2);
}

void fn_801B374C(void) {
    fn_800F77AC();
}

s32 fn_801B376C(void) {
    return 0;
}

s32 fn_801B3774(void) {
    return 0;
}

void fn_8016C0EC(void);
void fn_801B377C(void) {
    fn_8016C0EC();
}

s32 fn_801B379C(void) {
    return 0;
}

s32 fn_801B37A4(void) {
    return 0;
}

void fn_8010C15C(void);
void fn_801B37AC(void) {
    fn_8010C15C();
}

s32 fn_801B37CC(void) {
    return 0;
}

s32 fn_801B37D4(void) {
    return 0;
}

s32 fn_801B3804(void) {
    return 0;
}

s32 fn_801B380C(void) {
    return 0;
}

void fn_801B3908(s32 *self, s32 value) {
    *self = value;
}

void fn_801B3910(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = arg1;
}

void fn_801B3BFC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1A) = 0;
}

void fn_801B3C50(void) {

}

s32 fn_801B3E30(void) {
    return 0;
}

s32 fn_801B3F08(void) {
    return 0x4F424A44;
}

s32 fn_801B44A8(void) {
    return 0;
}

s32 fn_801B44B0(void) {
    return 0;
}

s16 fn_801B47D4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x18);
}

void fn_801B47DC(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x18) = arg1;
}

s32 fn_801B47E4(s32 *self) {
    return self[7];
}

s32 fn_801B47EC(s32 *self) {
    return self[7];
}

extern s32 lbl_80495D88;
void fn_801B5624(void) {
    fn_800F1A60((s32)&lbl_80495D88, 2);
}

s32 fn_801B5DC8(void) {
    return 0;
}

s32 fn_801B5DD0(void) {
    return 1;
}

s16 fn_801B6338(void *arg0) {
    return *M2C_FIELD(arg0, s16 **, 4);
}

s16 fn_801B6344(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 2);
}

s32 fn_801B6350(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 4);
    return M2C_FIELD(temp_r9, s16 *, 2) + M2C_FIELD(temp_r9, s16 *, 4);
}

s16 fn_801B6364(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 4);
}

void fn_801B6370(void) {

}

void fn_801B6374(void) {

}

void fn_801B6378(void) {

}

void fn_801B637C(void) {

}

void fn_801B6380(void) {

}

s32 fn_801B6384(s32 *self) {
    return self[1];
}

s16 fn_801B638C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x14);
}

s16 fn_801B6398(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x1A);
}

s32 fn_801B63C0(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 1U) & 1;
}

s32 fn_801B63D0(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 2U) & 1;
}

s32 fn_801B63E0(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 3U) & 1;
}

s32 fn_801B63F0(void *arg0) {
    return ((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x10) ^ 0x10) >> 4U) & 1;
}

s32 fn_801B6404(void *arg0) {
    return ((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x10) ^ 0x40) >> 6U) & 1;
}

s32 fn_801B6418(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 5U) & 1;
}

s16 fn_801B6428(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x18);
}

s32 fn_801B6470(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 8U) & 1;
}

s32 fn_801B6480(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 9U) & 1;
}

s32 fn_801B64A8(void) {
    return 0x10;
}

s32 fn_801B64B0(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 0xAU) & 1;
}

s32 fn_801B64C0(void *arg0) {
    return ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x10) >> 0xBU) & 1;
}

s32 fn_801B64D0(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4) + (arg1 * 8) + 4;
}

s32 fn_801B64E8(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4) + (arg1 * 8) + 2;
}

s32 fn_801B6500(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4) + (arg1 * 8);
}

s16 fn_801B6514(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 2);
}

s16 fn_801B6520(void *arg0) {
    return *M2C_FIELD(arg0, s16 **, 4);
}

u16 fn_801B652C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xE);
}

void fn_801B6538(void *arg0) {
    M2C_UNK fn_801A31D4(s32);
    fn_801A31D4(M2C_FIELD(arg0, s32 *, 4));
}

f32 fn_801B655C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 8);
}

s16 fn_801B6568(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x16);
}

s16 fn_801B6574(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x12);
}

void fn_801B6580(void) {

}

void fn_801B6584(void) {

}

void fn_801B6588(void) {

}

void fn_801B658C(void) {

}

void fn_801B6590(void) {

}

void fn_801B6594(void) {

}

void fn_801B6598(void) {

}

void fn_801B659C(void) {

}

void fn_801B65A0(void) {

}

void fn_801B65A4(void) {

}

void fn_801B65A8(void) {

}

void fn_801B65AC(void) {

}

void fn_801B65B0(void) {

}

void fn_801B65B4(void) {

}

s32 fn_801B65B8(void) {
    return 0;
}

void fn_801B65C0(void) {

}

void fn_801B65C4(void) {

}

void fn_801B65C8(void) {

}

void fn_801B65CC(void) {

}

void fn_801B65D0(void) {

}

void fn_801B65D4(void) {

}

void fn_801B65D8(void) {

}

s32 fn_801B65DC(s32 *self) {
    return self[1];
}

s32 fn_801B65E4(void) {
    return 0;
}

s32 fn_801B65EC(void) {
    return 0;
}

s32 fn_801B65F4(void) {
    return 0;
}

s32 fn_801B65FC(void) {
    return 0;
}

s16 fn_801B6620(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 4);
    if (temp_r9 != NULL) {
        return M2C_FIELD(temp_r9, s16 *, 4);
    }
    return 0;
}

void fn_801B6680(void) {

}

s32 fn_801B6684(void) {
    return 0;
}

s32 fn_801B668C(void) {
    return 0;
}

s32 fn_801B6694(void) {
    return 0;
}

void fn_801B669C(void) {

}

s32 fn_801B66A0(void) {
    return 1;
}

s32 fn_801B66A8(void) {
    return -0x2D;
}

s32 fn_801B66B0(void) {
    return -0x2D;
}

s32 fn_801B66B8(void) {
    return 0;
}

void fn_801B66C0(void) {

}

s32 fn_801B66C4(void) {
    return 0;
}

s32 fn_801B66CC(void) {
    return 0;
}

void fn_801B66D4(void) {

}

s32 fn_801B66D8(s32 *self) {
    return self[1];
}

