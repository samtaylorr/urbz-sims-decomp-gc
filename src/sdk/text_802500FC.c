/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

unsigned long fn_8024FF70(void);
void fn_8024FF78(unsigned long);
void fn_802500FC(void) {
    fn_8024FF78(fn_8024FF70() & ~0x200);
}

s32 fn_8025015C(void) {
    return *(s32 *)0x80000040;
}

void fn_80250FC4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_80251714(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

extern s32 lbl_80495E08;
s32 fn_8025186C(void) {
    return lbl_80495E08;
}

extern s32 lbl_804949A8;
s32 fn_80251874(void) {
    return lbl_804949A8;
}

void fn_8025187C(s32 arg0) {
    lbl_80495E08 = arg0;
}

void fn_80251884(s32 arg0) {
    lbl_804949A8 = arg0;
}

s32 fn_80252900(void) {
    return *(s32 *)0x800000D4;
}

void fn_802530AC(void) {
    M2C_UNK fn_80378324();
    fn_80378324();
}

void fn_80253990(void) {
    extern s32 lbl_80495E10;
    lbl_80495E10 = 1;
}

s32 fn_80254A24(void) {
    return *(s32 *)0x800000C8;
}

void fn_80254F64(void) {

}

void fn_80254F68(void) {

}

void fn_80254F6C(s32 arg0) {
    *(s32 *)0x800030D0 = arg0;
}

s32 fn_80255A38(void) {
    return *(s32 *)0x80000028;
}

s32 fn_80255A44(void) {
    return *(s32 *)0x800000F0;
}

void fn_80255E5C(s32 arg0, s32 arg1) {
    extern s32 lbl_80495E30;
    extern s32 lbl_80495E34;
    lbl_80495E30 = arg0;
    lbl_80495E34 = arg1;
}

s32 fn_80256504(s32 arg0) {
    extern s32 lbl_80495E40;
    s32 temp_r0;

    temp_r0 = lbl_80495E40;
    lbl_80495E40 = arg0;
    return temp_r0;
}

void fn_80256914(void) {
    M2C_UNK fn_8025667C();
    fn_8025667C();
}

void fn_80258364(void) {

}

void fn_80258534(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

s32 fn_80258544(void) {
    return *(s32 *)0x800000E4;
}

s32 fn_802585AC(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2CC) > 0) {
        return 1;
    }
    return 0;
}

s32 fn_802599FC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2D4);
}

void fn_8025AD58(void) {
    M2C_UNK fn_8025AD78();
    fn_8025AD78();
}

void fn_8025AE20(void) {
    M2C_UNK fn_8025AE94();
    fn_8025AE94();
}

void fn_8025AE94(void) {
    M2C_UNK PPCHalt();
    PPCHalt();
}

void fn_8025B1BC(void) {
    M2C_UNK fn_80258534();
    fn_80258534();
}

void fn_8025B2B0(void) {
    M2C_UNK fn_80259838();
    fn_80259838();
}

s32 fn_8025D7FC(void) {
    return 4;
}

void fn_8025F594(void) {
    M2C_UNK fn_8025F148();
    M2C_UNK fn_8025F448();
    fn_8025F148();
    fn_8025F448();
}

void fn_8025F7F4(void) {
    extern s32 lbl_80495EA0;
    fn_8025F710(lbl_80495EA0);
}

void fn_8025F914(s32 arg0) {
    extern s32 *lbl_80495EA8;
    *lbl_80495EA8 = arg0;
}

s32 fn_80260574(void) {
    M2C_UNK fn_802646D0();
    fn_802646D0();
    return 1;
}

void fn_80260D6C(void) {
    M2C_UNK fn_802642C0();
    fn_802642C0();
}

s32 fn_80260F58(void) {
    return 1;
}

void fn_80260F60(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
}

s32 fn_80260F70(void) {
    extern void *lbl_80495EB0;
    return M2C_FIELD(lbl_80495EB0, s32 *, 0x38);
}

void fn_8026126C(void) {

}

extern s32 lbl_80494A30;
void fn_80261270(s32 arg0) {
    lbl_80494A30 = arg0;
}

extern u8 fn_80262F24[];
void *fn_80262F18(void) {
    return fn_80262F24;
}

extern s32 lbl_80495F08;
s32 fn_802642B8(void) {
    return lbl_80495F08;
}

s32 fn_802643B8(s32 arg0) {
    extern s32 lbl_80494A2C;
    s32 temp_r0;

    temp_r0 = lbl_80494A2C;
    lbl_80494A2C = arg0;
    return temp_r0;
}

s32 fn_802649F0(void) {
    return 0x80000000;
}

s32 fn_80266A24(void) {
    extern s32 lbl_80495F40;
    extern s32 lbl_80495F60;
    lbl_80495F40 = 1;
    lbl_80495F60 = 1;
    return 1;
}

s32 fn_80266B64(void) {
    return 1;
}

extern s32 lbl_80495FD8;
s32 fn_80268F3C(void) {
    return lbl_80495FD8;
}

extern s32 lbl_80495FDC;
s32 fn_80268F44(void) {
    return lbl_80495FDC;
}

extern s32 lbl_80495F8C;
s32 fn_80269134(void) {
    return lbl_80495F8C;
}

void fn_8026AD18(void) {
    M2C_UNK fn_8025F710();
    fn_8025F710();
}

extern s32 lbl_80494AC0;
s32 fn_8026AF1C(void) {
    return lbl_80494AC0;
}

void fn_8026B8F4(void) {
    extern s32 lbl_80494AB8;
    lbl_80494AB8 = 0;
}

s32 fn_8026BBB4(void) {
    return ((u16) *(u16 *)0xCC005036 >> 0xFU) & 1;
}

s32 fn_8026BBF4(void) {
    return (*(u16 *)0xCC00503A << 5) & 0xFFFE0;
}

s32 fn_8026BC20(void) {
    return (*(u16 *)0xCC005036 << 5) & 0xFFFE0;
}

extern s32 lbl_80496028;
s32 fn_8026BC30(void) {
    return lbl_80496028;
}

void fn_8026BC8C(void) {
    *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFDF) | 0x20;
}

void fn_8026BCA4(s32 arg0) {
    *(s32 *)0xCC006C0C = arg0;
}

s32 fn_8026BD98(void) {
    return *(s32 *)0xCC006C00 & 1;
}

s32 fn_8026BE88(void) {
    return (((u32) *(u32 *)0xCC006C00 >> 6U) & 1) ^ 1;
}

void fn_8026BEC4(void) {
    M2C_UNK fn_8026BEE4();
    fn_8026BEE4();
}

s32 fn_8026BFB8(void) {
    return ((u32) *(u32 *)0xCC006C00 >> 1U) & 1;
}

u8 fn_8026BFE4(void) {
    return (u8) *(s32 *)0xCC006C04;
}

u8 fn_8026C010(void) {
    return (u8) ((u32) *(u32 *)0xCC006C04 >> 8U);
}

void fn_8026C18C(void) {
    extern s32 lbl_80496028;
    lbl_80496028 = 0;
}

s32 fn_8026C4FC(void) {
    return 0;
}

void fn_8026E418(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
}

s32 fn_8026E9EC(s32 *self) {
    return *self;
}

s32 fn_8026E9F4(s32 *self) {
    return self[2];
}

void fn_8026E9FC(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0xC);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x10);
}

extern s32 lbl_80496098;
s32 fn_8026EDD8(void) {
    return lbl_80496098;
}

extern s32 lbl_80496090;
s32 fn_8026EDE0(void) {
    return lbl_80496090;
}

extern s32 lbl_80496094;
s32 fn_8026EDE8(void) {
    return lbl_80496094;
}

extern s32 lbl_804960A8;
s32 fn_8026EDF0(void) {
    return lbl_804960A8;
}

s32 fn_8026EDF8(void) {
    s32 temp_r3;

    temp_r3 = lbl_804960A8;
    lbl_804960A8 = 0;
    return temp_r3;
}

void fn_80270384(void) {
    *(s8 *)0xCC008000 = 0x48;
}

u16 fn_80270C44(void) {
    extern void *__peReg;
    return M2C_FIELD(__peReg, u16 *, 0xE);
}

void fn_802725B4(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = farg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg3;
    M2C_FIELD(arg0, f32 *, 0x20) = farg4;
    M2C_FIELD(arg0, f32 *, 0x24) = farg5;
}

void fn_802725D0(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = farg2;
}

void fn_802725E0(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0x10);
    *arg2 = M2C_FIELD(arg0, f32 *, 0x14);
    *arg3 = M2C_FIELD(arg0, f32 *, 0x18);
}

void fn_802725FC(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x1C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x20) = farg1;
    M2C_FIELD(arg0, f32 *, 0x24) = farg2;
}

void fn_8027260C(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0x1C);
    *arg2 = M2C_FIELD(arg0, f32 *, 0x20);
    *arg3 = M2C_FIELD(arg0, f32 *, 0x24);
}

void fn_80272888(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x30) = farg2;
}

void fn_80272898(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0x28);
    *arg2 = M2C_FIELD(arg0, f32 *, 0x2C);
    *arg3 = M2C_FIELD(arg0, f32 *, 0x30);
}

void fn_802728B4(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) -farg0;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) -farg1;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) -farg2;
}

void fn_80272A08(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) *arg1;
}

void fn_80272A14(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0xC);
}

void fn_80273464(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

void fn_802735E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

s32 fn_802735E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80273658(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0xC) << 5) & 0x03FFFFE0;
}

s32 fn_80273664(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x3FF) + 1;
}

s32 fn_80273674(void *arg0) {
    return (((u32) M2C_FIELD(arg0, u32 *, 8) >> 0xAU) & 0x3FF) + 1;
}

s32 fn_80273684(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_8027368C(s32 *arg0) {
    return *arg0 & 3;
}

s32 fn_80273698(u32 *arg0) {
    return ((u32) *arg0 >> 2U) & 3;
}

s32 fn_802737B4(u32 *arg0) {
    return ((u32) *arg0 >> 4U) & 1;
}

s32 fn_80273868(u32 *arg0) {
    return ((u32) *arg0 >> 0x15U) & 1;
}

s32 fn_80273888(u32 *arg0) {
    return ((u32) *arg0 >> 0x13U) & 3;
}

s32 fn_80273894(s32 *self) {
    return self[6];
}

s32 fn_80273AC8(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) << 5) & 0x03FFFFE0;
}

s32 fn_80273AD4(u32 *arg0) {
    return ((u32) *arg0 >> 0xAU) & 3;
}

u16 fn_80273AE0(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 8);
}

void fn_80273E3C(u32 *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = ((*arg0 << 9) & 0x7FE00) + 0x80000;
    *arg2 = ((u32) *arg0 >> 0xAU) & 0x7FF;
}

s32 fn_80273FD0(s32 arg0) {
    extern void *__GXData;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(__GXData, s32 *, 0x4C8);
    M2C_FIELD(__GXData, s32 *, 0x4C8) = arg0;
    return temp_r0;
}

void fn_80275168(void) {

}

void fn_80275690(void) {

}

void fn_80276D34(void) {
    extern void *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
}

void fn_802773FC(void) {

}

void fn_80277400(void) {

}

s32 fn_80277404(void) {
    return 0;
}

s32 fn_8027740C(void) {
    return 0;
}

s32 fn_80277414(void) {
    return 0;
}

void fn_8027741C(void) {

}

void fn_80277420(void) {

}

s32 fn_80277424(void) {
    return 1;
}

void fn_8027742C(void) {

}

void fn_80277430(void) {

}

void fn_802781E0(void) {

}

