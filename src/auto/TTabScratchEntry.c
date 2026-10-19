/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_801A1B50(void);
s16 fn_8019AFE8(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x34);
}

s32 fn_8019B1D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}

s16 fn_8019B418(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x4C);
}

s32 fn_8019B448(void) {
    return 0;
}

s32 fn_8019B89C(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x68) & 0x1FF;
}

s32 fn_8019B8A8(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x68) >> 9U) & 1;
}

void fn_8019B8B4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x6A) = arg1;
}

void fn_8019B8BC(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x6C) = arg1;
}

void fn_8019B8C4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x6E) = arg1;
}

f32 fn_8019B8F4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xB0);
}

s16 fn_8019B928(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x3A);
}

void fn_8019B930(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x3A) = arg1;
}

s32 fn_8019B938(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

void fn_8019B978(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x1C) = arg1;
}

s32 fn_8019B9C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

void fn_8019B9D0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x8C) = arg1;
}

s32 fn_8019B9D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x94);
}

s32 fn_8019BA10(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

s32 fn_8019BA48(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x9C);
}

void fn_8019BA50(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x9C) = arg1;
}

s32 fn_8019C804(void) {
    extern void *lbl_8049454C;
    return M2C_FIELD(lbl_8049454C, s32 *, 0x18);
}

void fn_8019C850(void) {

}

void fn_8019CA14(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFF00);
}

void fn_8019CA24(void *arg0, u32 arg1) {
    if (arg1 <= 7U) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | (1 << arg1));
    }
}

void fn_8019CA44(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 0x100);
}

void fn_8019CA54(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = -3;
}

void fn_8019CA60(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = -2;
}

void fn_8019CA6C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
}

void fn_8019CA78(void *arg0, u32 arg1) {
    if (arg1 <= 7U) {
        M2C_FIELD(arg0, u32 *, 0x34) = arg1;
    }
}

extern u8 lbl_80414770[];
extern void fn_802D20E8(void *);
void fn_8019CE74(void **self, s32 flags) {
    *self = lbl_80414770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8019CFDC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) | 0x40);
}

s32 fn_8019E508(void) {
    return 1;
}

void fn_8019E510(void) {

}

void fn_8019E514(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_804148D0[];
extern void fn_802D20E8(void *);
void fn_8019E5B0(void **self, s32 flags) {
    *self = lbl_804148D0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8019F070(void) {
    return 0;
}

s32 fn_8019F078(void) {
    return 0;
}

s32 fn_8019F098(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x54) + (arg1 * 0x48);
}

s32 fn_8019F0A8(void) {
    return 0;
}

void fn_8019F0B0(void) {

}

s32 fn_8019F0B4(void) {
    return 0;
}

s32 fn_8019F0BC(void) {
    return 1;
}

s32 fn_8019F0C4(void) {
    return 0;
}

s32 fn_8019F1C0(void *arg0) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x58) - M2C_FIELD(arg0, s32 *, 0x54)) * 0x38E38E39) >> 3;
}

s32 fn_8019F1E0(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x54) + (arg1 * 0x48);
}

s32 fn_8019F1F0(void) {
    return 0;
}

void fn_8019F1F8(void) {

}

s32 fn_8019F1FC(void) {
    return 2;
}

void fn_8019F204(void **self, s32 flags) {
    *self = lbl_80414770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8019F238(void **self, s32 flags) {
    *self = lbl_80414770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8019F26C(s32 *self) {
    return self[2];
}

s32 fn_8019F28C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 1U) & 1;
}

s32 fn_8019F298(s32 arg0) {
    return 1 << (arg0 - 1);
}

s32 fn_8019F2A8(void) {
    return 0xC;
}

void fn_8019F310(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}

void fn_8019F318(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

void fn_8019F320(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
}

void fn_8019F328(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x5C) = farg0;
}

s32 fn_8019F34C(s32 *self) {
    return self[6];
}

s32 fn_8019F354(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3C);
}

s32 fn_8019F35C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

s32 fn_8019F364(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 fn_8019F36C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64);
}

void fn_8019F374(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}

s32 fn_8019F37C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

s32 fn_8019F384(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

s32 fn_8019F38C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x48) >> 4U) & 1;
}

s32 fn_8019F398(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60);
}

void fn_8019F3A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x60) = arg1;
}

f32 fn_8019F3A8(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xC);
}

void fn_8019F3B0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
}

f32 fn_8019F3B8(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x50);
}

f32 fn_8019F3C0(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x54);
}

f32 fn_8019F3C8(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x58);
}

void fn_8019F3D0(void **self, s32 flags) {
    *self = lbl_80414770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8019F484(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}

s32 fn_8019F4C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_8019F4CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

s32 fn_8019F4D4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 fn_8019F4DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

f32 fn_8019F4E4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x30);
}

s32 fn_8019F4FC(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_8019F548(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 9U) & 1;
}

s32 fn_8019F554(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 0xDU) & 1;
}

s32 fn_8019F5A0(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 0xEU) & 1;
}

s32 fn_8019F5CC(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 0xFU) & 1;
}

s32 fn_8019F5F8(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x1C) & 1;
}

void fn_8019F604(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

f32 fn_8019F60C(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 4);
}

f32 fn_8019F614(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 8);
}

f32 fn_8019F61C(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xC);
}

extern u8 lbl_80414970[];
void fn_8019F844(void **self, s32 flags) {
    *self = lbl_80414970;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8019F878(void) {
    return 0;
}

s32 fn_8019F880(void) {
    return 0;
}

s32 fn_8019F888(void) {
    return 1;
}

s32 fn_8019F890(void) {
    return 0;
}

void fn_801A0858(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_801A0E48(s32 *arg0) {
    *arg0 = 0;
}

s32 fn_801A0FCC(void) {
    return 0x1E;
}

s32 fn_801A0FD4(void) {
    return 0x168;
}

void fn_801A1340(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x30) = arg1;
}

s16 fn_801A1348(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x30);
}

void fn_801A1350(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
}

void fn_803AB7D4();
void fn_801A135C(char *self) {
    extern void fn_803AB7D4(void *);
    fn_803AB7D4(self + 8);
}

void fn_801A1E30(void) {
    fn_801A1B50();
}

void fn_801A2EF4();
void fn_801A2600(char *self) {
    extern void fn_801A2EF4(void *);
    fn_801A2EF4(self + 8);
}

void fn_801A264C(void) {

}

s32 fn_801A29A8(s32 arg0) {
    return arg0 + 0x10;
}

void *fn_801A29B0(void *arg0) {
    return arg0 + ((M2C_FIELD(arg0, u8 *, 7) * 2) + 0x10);
}

s32 fn_801A29C4(void *arg0) {
    return (((M2C_FIELD(arg0, u8 *, 6) + M2C_FIELD(arg0, u8 *, 7) + 3) * 2) & 0x7F8) + 0x10;
}

s32 fn_801A2B54(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0);
}

void fn_801A2EE8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 8);
}

s32 fn_801A2F28(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(arg0, s32 *, 8)) >> 2;
}

void fn_801A2FF8(s32 *self, s32 value) {
    *self = value;
}

void fn_801A3000(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

void fn_801A3008(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void fn_801A3010(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

void fn_801A3018(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

s32 fn_801A3020(s32 *self) {
    return self[1];
}

s32 fn_801A3028(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void fn_801A3030(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
}

s32 fn_801A3038(s32 *self) {
    return self[6];
}

void fn_801A3040(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

extern s32 lbl_80494554;
s32 fn_801A3048(void) {
    return lbl_80494554;
}

void fn_801A3050(void (*cb)(void)) {
    lbl_80494554 = cb;
}

extern s32 lbl_80494558;
s32 fn_801A3058(void) {
    return lbl_80494558;
}

f32 fn_801A3060(void) {
    extern f32 lbl_8049455C;
    return lbl_8049455C;
}

extern s32 lbl_80494560;
s32 fn_801A3074(void) {
    return lbl_80494560;
}

void fn_801A307C(void (*cb)(void)) {
    lbl_80494560 = cb;
}

extern s32 lbl_80494564;
s32 fn_801A3084(void) {
    return lbl_80494564;
}

void fn_801A308C(void (*cb)(void)) {
    lbl_80494564 = cb;
}

extern s32 lbl_80494550;
s32 fn_801A3094(void) {
    return lbl_80494550;
}

s32 fn_801A309C(s32 *self) {
    return self[1];
}

s32 fn_801A30A4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

extern s32 lbl_80495D3C;
extern void fn_800F1A60(s32, s32);
void fn_801A30AC(void) {
    fn_800F1A60((s32)&lbl_80495D3C, 2);
}

extern u8 lbl_80414FD0[];
void fn_801A37C4(void **self, s32 flags) {
    *self = lbl_80414FD0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s16 fn_801A38DC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 4);
}

void fn_801A38E4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = arg1;
}

s16 fn_801A38EC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 6);
}

void fn_801A38F4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 6) = arg1;
}

s32 fn_801A38FC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 6) + M2C_FIELD(arg0, s16 *, 8);
}

void fn_801A390C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = (s16) (arg1 - M2C_FIELD(arg0, u16 *, 6));
}

s16 fn_801A391C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 8);
}

void fn_801A3924(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = arg1;
}

s16 fn_801A392C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x112);
}

s32 fn_801A3934(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x110) & 1;
}

s32 fn_801A3960(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 1U) & 1;
}

s32 fn_801A398C(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 2U) & 1;
}

s32 fn_801A39B8(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 3U) & 1;
}

s32 fn_801A39E4(void *arg0) {
    return ((u32) (M2C_FIELD(arg0, u16 *, 0x110) ^ 0x10) >> 4U) & 1;
}

s32 fn_801A3A14(void *arg0) {
    return ((u32) (M2C_FIELD(arg0, u16 *, 0x110) ^ 0x40) >> 6U) & 1;
}

s32 fn_801A3A44(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 5U) & 1;
}

s16 fn_801A3A70(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x116);
}

void fn_801A3A78(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x116) = arg1;
}

s32 fn_801A3A80(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 7U) & 1;
}

s32 fn_801A3AAC(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 8U) & 1;
}

s32 fn_801A3AD8(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 9U) & 1;
}

s32 fn_801A3B04(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 0xAU) & 1;
}

s32 fn_801A3B30(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 0xBU) & 1;
}

s32 fn_801A3B70(void) {
    return 0x10;
}

s16 fn_801A3C58(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 6);
}

void fn_801A3C60(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 6) = arg1;
}

s16 fn_801A3C68(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 4);
}

void fn_801A3C70(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = arg1;
}

s32 fn_801A3C78(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x108);
}

void fn_801A3C80(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x108) = arg1;
}

f32 fn_801A3C88(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x10C);
}

void fn_801A3C90(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x10C) = farg0;
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
}

s16 fn_801A3CA0(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x114);
}

void fn_801A3CA8(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x114) = arg1;
}

void fn_801A3CFC(void) {

}

s16 fn_801A3D00(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x110);
}

s32 fn_801A3D08(void) {
    return 0;
}

void fn_801A3D10(void) {

}

u8 fn_801A4308(s32 arg0, s32 arg1) {
    return (u8) ((s32) ((arg0 * 0x10) | arg0) >> ((s32) (8 - arg1) >> 1));
}

s32 fn_801A4FA8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 fn_801A4FB0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

s32 fn_801A9EBC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_801A9EC4(s32 *self) {
    return self[6];
}

s32 fn_801A9ECC(void) {
    return 0x40;
}

void fn_801AA4A8(void) {

}

void fn_801AA4AC(void) {

}

void fn_801AA4B0(void) {

}

s32 fn_801AA4B4(void) {
    return 0;
}

s32 fn_801AA4BC(void) {
    return 0;
}

s32 fn_801AA4C4(void) {
    return 0;
}

s32 fn_801AA4E0(void) {
    return 0x80;
}

s32 fn_801AA930(s32 *self) {
    return self[1];
}

s32 fn_801AB074(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0)) >> 4;
}

s32 fn_801AB088(s32 *arg0, s32 arg1) {
    return *arg0 + (arg1 * 0x10);
}

void fn_801AB0E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
}

s32 fn_801AB13C(s32 arg0) {
    return arg0 + 0x10;
}

s32 fn_801AB348(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 0x54) * 0x10);
}

void fn_801AB5C8(void) {

}

s32 fn_801B1824(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 4) & 0x7FFF;
}

s32 fn_801B19F4(void) {
    return 0;
}

void fn_801B1CBC(void) {

}

s32 fn_801B24B8(void) {
    return 0;
}

s32 fn_801B24C0(void) {
    return 1;
}

s32 fn_801B24C8(void) {
    return 0;
}

s32 fn_801B2570(void) {
    return 2;
}

