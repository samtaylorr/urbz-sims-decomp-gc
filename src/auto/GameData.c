/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80495B9C;
extern s32 lbl_80495BA0;
extern u8 *lbl_80496650;
extern s32 lbl_8049440C;
extern s32 lbl_80494428;
extern s32 lbl_8041F7A0[];
void fn_801238C4(u8 *obj, s32 arg);

void fn_800440B0(void) {

}

void fn_800440B4(void) {

}

void fn_80044A38(s32 *self) {
    self[1] = 1;
}

u8 fn_800451AC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xB);
}

void fn_800454E0(s32 *self) {
    self[0x4C / 4] = 0;
    lbl_80495B9C = 0;
    self[0x50 / 4] = 0;
    lbl_80495BA0 = 0;
    self[0x5C / 4] = 0;
    self[0x68 / 4] = 0;
}

void fn_80045600(void) {
    fn_801238C4((*(u8 *(**)(u8 *))(*(u8 **)lbl_80496650 + 0x1CC))(lbl_80496650 + *(s16 *)(*(u8 **)lbl_80496650 + 0x1C8)), lbl_8049440C);
    if (lbl_8041F7A0[0] != 0) {
        *(s16 *)((*(u8 *(**)(u8 *))(*(u8 **)lbl_80496650 + 0x1CC))(lbl_80496650 + *(s16 *)(*(u8 **)lbl_80496650 + 0x1C8)) + 0x16A) = 0;
    } else {
        *(s16 *)((*(u8 *(**)(u8 *))(*(u8 **)lbl_80496650 + 0x1CC))(lbl_80496650 + *(s16 *)(*(u8 **)lbl_80496650 + 0x1C8)) + 0x16A) = 1;
    }
}

extern s32 lbl_80495B9C;
extern s32 lbl_80495BA0;
extern u8 *lbl_80496650;
extern s32 lbl_8049440C;
extern s32 lbl_80494428;
extern s32 lbl_8041F7A0[];
extern u8 lbl_8041F754[];
void fn_801238C4(u8 *obj, s32 arg);
void fn_80045698(u8 *arg);
void fn_8004577C(u8 *arg);
void fn_800458C0(void) {
    fn_80045698(lbl_8041F754);
}

void fn_800458E8(void) {
    u8 *vt;
    u8 *obj;

    fn_8004577C(lbl_8041F754);
    obj = (*(u8 *(**)(u8 *))(*(u8 **)lbl_80496650 + 0x1CC))(lbl_80496650 + *(s16 *)(*(u8 **)lbl_80496650 + 0x1C8));
    vt = *(u8 **)obj;
    (*(void (**)(u8 *, s32, s32))(vt + 0x8C))(obj + *(s16 *)(vt + 0x88), lbl_8049440C, lbl_80494428);
}

void fn_80046FE0(void) {

}

void fn_80047AE8(void) {

}

void fn_80047AEC(void) {

}

void fn_80047AF0(void) {

}

void fn_80047AF4(void) {

}

void fn_80047AF8(void) {

}

s32 fn_80047AFC(void) {
    return 1;
}

void fn_80047B04(void) {

}

void fn_80047B08(void) {

}

void fn_80047B0C(void) {

}

void fn_8004876C(void) {

}

void fn_80048DF8(void) {
    fn_80048D04();
}

extern u8 lbl_8041F94C[];
void fn_8004E824(u8 *arg);
void fn_8004910C(void) {
    fn_8004E824(lbl_8041F94C);
}

void fn_800495E8(void) {

}

