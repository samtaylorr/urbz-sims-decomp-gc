/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8000C5C8(void) {
    extern void **lbl_80496650;
    extern struct {
        u8 pad0[0xEC];
        char *unkEC;
        u8 pad1[0x194 - 0xF0];
        s32 unk194;
        u8 pad2[0x330 - 0x198];
        s32 unk330;
    } lbl_8041F94C;
    extern s32 lbl_8049440C;
    extern s32 lbl_8049664C;
    char *vt = (char *)*lbl_80496650;
    (*(void (**)(void *, s32, s32, s32, s32))(vt + 0x64))(
        (char *)lbl_80496650 + *(s16 *)(vt + 0x60), lbl_8049440C,
        *(s32 *)(lbl_8041F94C.unkEC + 0x6C), lbl_8041F94C.unk330, lbl_8041F94C.unk194);
    lbl_8049664C = 1;
}

void fn_8000C624(void) {
    extern void **lbl_804961A4;
    extern s32 lbl_8049664C;
    char *vt = (char *)*lbl_804961A4;
    lbl_8049664C = 0;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(
        (char *)lbl_804961A4 + *(s16 *)(vt + 0x40), fn_8000C5C8);
}

void fn_8000C66C(void) {
    M2C_UNK fn_80028FE0(s32);
    extern s32 lbl_8041FA38[];
    extern s32 lbl_8049664C;
    fn_80028FE0(lbl_8041FA38[0]);
    lbl_8049664C = 1;
}

void fn_8000C69C(void) {
    extern void **lbl_804961A4;
    extern s32 lbl_8049664C;
    char *vt = (char *)*lbl_804961A4;
    lbl_8049664C = 0;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(
        (char *)lbl_804961A4 + *(s16 *)(vt + 0x40), fn_8000C66C);
}

void fn_8000C6E4(void) {
    extern void **lbl_80496220;
    extern s32 lbl_8049664C;
    char *vt = (char *)*lbl_80496220;
    (*(void (**)(void *))(vt + 0x4C))((char *)lbl_80496220 + *(s16 *)(vt + 0x48));
    lbl_8049664C = 1;
}

void fn_8000C724(void) {
    extern void **lbl_804961A4;
    extern s32 lbl_8049664C;
    char *vt = (char *)*lbl_804961A4;
    lbl_8049664C = 0;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(
        (char *)lbl_804961A4 + *(s16 *)(vt + 0x40), fn_8000C6E4);
}

void fn_8000C76C(void) {
    M2C_UNK fn_8004B828(void *, s32);
    extern struct {
        u8 pad0[0x35C];
        s32 unk35C;
    } lbl_8041F94C;
    extern s32 lbl_8049664C;
    fn_8004B828(&lbl_8041F94C, lbl_8041F94C.unk35C);
    lbl_8049664C = 1;
}

void fn_8000C7A0(void) {
    extern void **lbl_804961A4;
    extern s32 lbl_8049664C;
    char *vt = (char *)*lbl_804961A4;
    lbl_8049664C = 0;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(
        (char *)lbl_804961A4 + *(s16 *)(vt + 0x40), fn_8000C76C);
}

void fn_8000C8E0(void) {
    M2C_UNK fn_8010C96C(s32, M2C_UNK);
    M2C_UNK fn_8010CD4C(s32);
    extern s32 lbl_80496644;
    fn_8010C96C(lbl_80496644, 1);
    fn_8010CD4C(lbl_80496644);
}

void fn_8000C910(void) {
    s32 fn_801E34AC();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern struct {
        u8 pad0[0x18];
        s32 unk18;
    } lbl_8041F754;
    extern s32 lbl_8049664C;
    if (lbl_8041F754.unk18 == 0) {
        fn_802D1FC8(0xF54);
        lbl_8041F754.unk18 = fn_801E34AC();
    }
    lbl_8049664C = 1;
}

void fn_8000C960(void) {
    extern void **lbl_804961A4;
    extern s32 lbl_8049664C;
    char *vt = (char *)*lbl_804961A4;
    lbl_8049664C = 0;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(
        (char *)lbl_804961A4 + *(s16 *)(vt + 0x40), fn_8000C910);
}

void fn_8000C9A8(void) {
    M2C_UNK fn_8004AF40(void *);
    extern s32 lbl_8041F94C[];
    extern s32 lbl_8049664C;
    fn_8004AF40(lbl_8041F94C);
    lbl_8049664C = 1;
}

void fn_8000C9D8(void) {
    extern void **lbl_804961A4;
    extern s32 lbl_8049664C;
    char *vt = (char *)*lbl_804961A4;
    lbl_8049664C = 0;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(
        (char *)lbl_804961A4 + *(s16 *)(vt + 0x40), fn_8000C9A8);
}

void fn_8000CA20(s32 arg0, s32 arg1) {
    extern s32 lbl_8049664C;
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        lbl_8049664C = 1;
    }
}

void fn_8000CA44(void) {
    fn_8000CA20(1, 0xFFFF);
}

void fn_8000CA70(void) {
    fn_8000CA20(0, 0xFFFF);
}

