/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80024440(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80024474(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)obj[0x11];
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 8), 3);
    }
}

void fn_800245B0(void) {
    s32 fn_800245DC();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80493FA0;
    fn_802D1FC8(0x28);
    lbl_80493FA0 = fn_800245DC();
}

void fn_800275A0(void) {

}

void fn_80028650(void) {

}

s32 fn_80028698(void) {
    return 0;
}

extern u8 lbl_803C4E2C[];
void *fn_800287FC(void) {
    return lbl_803C4E2C;
}

s32 fn_80028808(s32 arg0) {
    return arg0 + 0x58;
}

void fn_800288D8(void) {

}

extern s32 lbl_80493F9C;
s32 fn_800288DC(void) {
    return lbl_80493F9C;
}

void fn_800288FC(void) {

}

s32 fn_80028940(void) {
    return 0;
}

void fn_800289C8(void *arg0) {
    M2C_UNK fn_80028948(s32);
    fn_80028948(M2C_FIELD(arg0, s32 *, 0x6C));
}

void fn_80028FE0(void *arg0) {
    M2C_UNK fn_8002907C();
    fn_8002907C();
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
}

void fn_80029290(void *arg0, s32 arg1) {
    M2C_UNK fn_80038110(s32);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    if (temp_r0 != 0) {
        fn_80038110(temp_r0);
    }
}

void fn_8002A698(void *arg0) {
    M2C_UNK fn_8002A618(void *);
    M2C_UNK fn_8008DCCC(M2C_UNK);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        fn_8008DCCC(0);
        fn_8002A618(arg0);
    }
}

void fn_8002B83C(s32 arg0, void *arg1) {
    M2C_UNK fn_801BFDF8(s32, s32);
    fn_801BFDF8(M2C_FIELD(arg1, s32 *, 0x18), arg0);
}

void fn_8002B868(void) {

}

void fn_8002B940(void) {

}

