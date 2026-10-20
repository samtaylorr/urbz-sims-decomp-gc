/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

f32 fn_800B3238(f32 farg0) {
    extern f32 lbl_803CECD0[];
    return farg0 / lbl_803CECD0[0];
}

f32 fn_800B3248(f32 farg0) {
    extern f32 lbl_803CECD4[];
    return farg0 / lbl_803CECD4[0];
}

f32 fn_800B3258(f32 farg0) {
    extern f32 lbl_803CECD8[];
    return farg0 * lbl_803CECD8[0];
}

void fn_800B3278(void *arg0, s32 arg1) {
    void fn_8000AA2C(s32, const char *, ...);
    extern char lbl_803CECE0[];
    extern s32 lbl_8041FA1C[];
    s32 group;
    s32 index;

    if (arg1 > 40) {
        arg1 = 0;
    }
    if (arg1 <= 9) {
        index = arg1 + 1;
        group = 1;
    } else if (arg1 <= 19) {
        index = arg1 - 9;
        group = 2;
    } else if (arg1 <= 29) {
        index = arg1 - 19;
        group = 3;
    } else if (arg1 <= 37) {
        index = arg1 - 29;
        group = 4;
    } else {
        index = arg1 - 37;
        group = 5;
    }
    M2C_FIELD(arg0, s32 *, 0xB4) = group;
    M2C_FIELD(arg0, s32 *, 0xB0) = index;
    fn_8000AA2C(lbl_8041FA1C[0], lbl_803CECE0, 0, 0, 0);
}

void fn_800B3324(void *arg0, char *name, s32 arg2) {
    void fn_802D57BC(void *, const char *);
    extern char lbl_803CECF4[];
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xC4) = arg2;
    if (name != NULL) {
        fn_802D57BC((char *)arg0 + 0x60, name);
    } else {
        fn_802D57BC((char *)arg0 + 0x60, lbl_803CECF4);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xE4);
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0xF0) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = M2C_FIELD(arg0, s32 *, 0x10C);
    fn_800B49F0(arg0, M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, s32 *, 0x94));
    if (M2C_FIELD(arg0, s32 *, 0x104) != 0 && M2C_FIELD(arg0, s32 *, 0xE4) != 0) {
        fn_800B49F0(arg0, M2C_FIELD(arg0, s32 *, 0x9C), 1);
    }
}

s32 fn_800B3420(s32 arg0) {
    return arg0 + 0x60;
}

s32 fn_800B3428(s32 arg0) {
    return arg0 + 0x64;
}

s32 fn_800B3470(void) {
    return 0;
}

void fn_800B3A88(void) {

}

void fn_800B3A8C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x8C) = arg1;
}

s32 fn_800B49E0(void) {
    return 0;
}

s32 fn_800B49E8(void) {
    return 0;
}

void fn_800B49F0(void *arg0, s32 arg1, s32 arg2) {

}

s32 fn_800B4C20(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

void fn_800B4C28(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
}

s32 fn_800B4C34(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xD4);
}

void fn_800B5098(void) {
    M2C_UNK fn_800B4C3C(M2C_UNK, M2C_UNK);
    fn_800B4C3C(1, 0xFFFF);
}

