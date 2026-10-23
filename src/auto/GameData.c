/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80495B9C;
extern s32 lbl_80495BA0;
extern u8 *lbl_80496650;
extern s32 lbl_8049440C;
extern s32 lbl_80494428;
extern s32 lbl_8041F7A0[];
void fn_801238C4(u8 *obj, s32 arg);

s32 fn_80043FF8(void) {
    M2C_UNK fn_80043C40();
    fn_80043C40();
    return 0;
}

s32 fn_8004401C(void) {
    fn_80043C40();
    return 0;
}

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

void fn_80046FFC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x154) = (s32) (M2C_FIELD(arg0, s32 *, 0x154) | (1 << arg1));
}

void fn_80047A84(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x50) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xA4) == 0)) {
        M2C_FIELD(arg0, s32 *, 0xA4) = 1;
    }
}

void fn_80047AE8(void) {

}

void fn_80047AEC(void) {

}

void fn_80047AF0(void) {

}

void fn_80047AF4(void *arg0) {

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

void fn_800487EC(void *arg0) {
    M2C_UNK fn_800CE5A8(void *);
    void *temp_r9;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x104) != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x108);
        if (temp_r9 != NULL) {
            M2C_FIELD(temp_r9, s32 *, 4) = (s32) (M2C_FIELD(temp_r9, s32 *, 4) & 0xFFFFFFFE);
            fn_800CE5A8(temp_r9);
        }
    }
}

void fn_80048DF8(void) {
    fn_80048D04();
}

extern u8 lbl_8041F94C[];
void fn_8004E824(u8 *arg);
void fn_8004910C(void) {
    fn_8004E824(lbl_8041F94C);
}

void fn_8004930C(void) {
    extern u8 lbl_80452418[];
    extern u8 *lbl_80494FC4;
    extern f32 lbl_804957D0;
    u8 *obj;
    u8 *vt;

    obj = lbl_80494FC4;
    vt = *(u8 **)obj;
    lbl_804957D0 = (*(f32 (**)(void *, void *))(vt + 0x2C))(obj + *(s16 *)(vt + 0x28), lbl_80452418);
}

void fn_80049588(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern u8 lbl_8041F754[];
    extern s32 lbl_80494F40;
    extern s32 lbl_80494F44;
    void fn_800DC198(void);

    fn_80047AF4(lbl_8041F754);
    if (arg3 != 0) {
        lbl_80494F40 = 1;
        lbl_80494F44 = 1;
        fn_800DC198();
    }
    fn_800495E8(arg0, arg2);
}

void fn_800495E8(s32 arg0, s32 arg1) {

}

void fn_80049738(void) {
    M2C_UNK fn_800495EC(M2C_UNK, M2C_UNK);
    fn_800495EC(1, 0xFFFF);
}

void fn_80049764(void) {
    M2C_UNK fn_800495EC(M2C_UNK, M2C_UNK);
    fn_800495EC(0, 0xFFFF);
}

