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

void fn_80258364(void) {

}

s32 fn_802599FC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2D4);
}

s32 fn_8025D7FC(void) {
    return 4;
}

s32 fn_80260F58(void) {
    return 1;
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

s32 fn_802649F0(void) {
    return 0x80000000;
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

extern s32 lbl_80494AC0;
s32 fn_8026AF1C(void) {
    return lbl_80494AC0;
}

void fn_8026B8F4(void) {
    extern s32 lbl_80494AB8;
    lbl_80494AB8 = 0;
}

extern s32 lbl_80496028;
s32 fn_8026BC30(void) {
    return lbl_80496028;
}

void fn_8026C18C(void) {
    extern s32 lbl_80496028;
    lbl_80496028 = 0;
}

s32 fn_8026C4FC(void) {
    return 0;
}

s32 fn_8026E9EC(s32 *self) {
    return *self;
}

s32 fn_8026E9F4(s32 *self) {
    return self[2];
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

void fn_80273464(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

void fn_802735E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

s32 fn_802735E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80273684(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_80273894(s32 *self) {
    return self[6];
}

u16 fn_80273AE0(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 8);
}

void fn_80275168(void) {

}

void fn_80275690(void) {

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

