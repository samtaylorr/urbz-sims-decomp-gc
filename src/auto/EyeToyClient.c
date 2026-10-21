/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void (*lbl_804940B0)(void);

extern s32 lbl_804957B8;
void fn_80041CDC(void) {

}

s32 fn_80041D94(void) {
    return lbl_804957B8;
}

void fn_80041D9C(void) {

}

s32 fn_80041FBC(s32 arg0) {
    extern s32 lbl_8049408C;
    return ((s32) lbl_8049408C >> arg0) & 1;
}

void fn_80042A60(void (*cb)(void)) {
    lbl_804940B0 = cb;
}

void fn_80042A68(void) {
    if (lbl_804940B0 != 0) {
        lbl_804940B0();
    }
}

extern void (*lbl_804940B0)(void);
extern s32 lbl_8049407C;
extern s32 lbl_80494084;
extern s32 lbl_80494088;
extern s32 lbl_804940AC;
extern char *lbl_803C6188[];
extern char lbl_8045BA40[];
void fn_800426A4(void);
s32 fn_80336E08(void *a, char *b);
void fn_803374C8(void *a, char *b);
void fn_80042C88(void) {
    if (lbl_8049407C != -1) {
        if (lbl_804940AC != 0) {
            fn_800426A4();
        } else if (lbl_80494084 == -1) {
            if (lbl_80494088 != -1) {
                lbl_80494084 = lbl_80494088;
                fn_803374C8(lbl_8045BA40, lbl_803C6188[lbl_80494088]);
            }
        } else {
            lbl_804940AC = fn_80336E08(lbl_8045BA40, lbl_803C6188[lbl_80494084]);
            if (lbl_804940AC != 0) {
                fn_800426A4();
            }
        }
    }
}

extern s32 lbl_804940A4;
s32 fn_80042D2C(void) {
    return lbl_804940A4;
}

void fn_80042D34(void) {
}

s32 fn_80043218(void) {
    return 0xB;
}

s32 fn_80043220(void) {
    return 5;
}

s32 fn_80043228(void) {
    return 5;
}

void fn_80043374(s32 arg0) {
    extern s32 lbl_80494090;
    extern s32 lbl_80494098;
    if (arg0 != (s32) lbl_80494090) {
        lbl_80494090 = arg0;
        lbl_80494098 = 1;
    }
}

void fn_80043390(s32 arg0) {
    if (arg0 != (s32) lbl_80494088) {
        lbl_80494088 = arg0;
    }
}

void fn_8004342C(s32 arg0) {
    M2C_UNK fn_800433A4(s32, s32, M2C_UNK);
    extern s32 lbl_8049409C;
    if (((s32) lbl_8049409C != 0) && (fn_80043480() != 0)) {
        fn_800433A4(arg0, fn_80043480(), 1);
    }
}

extern s32 lbl_804940A8;
s32 fn_80043480(void) {
    return lbl_804940A8;
}

f32 fn_80043938(void) {
    extern f32 lbl_803C6164[];
    extern f32 lbl_8041F658[];
    return lbl_8041F658[0] * lbl_803C6164[0];
}

void fn_80043BB4(void) {

}

void fn_80043C14(void) {
    M2C_UNK fn_80043BB8(M2C_UNK, M2C_UNK);
    fn_80043BB8(1, 0xFFFF);
}

