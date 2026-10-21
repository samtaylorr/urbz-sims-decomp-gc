/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void *fn_80371B64();
void fn_80371BB8(void *, s32);
void fn_80371C24(void *);
M2C_UNK fn_802CB8D4(void *);
void fn_80372284(void);
void fn_80372304();
void fn_80372324();
extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern u8 lbl_80493E6C[];
extern u8 lbl_803F5600[];
extern u8 lbl_80493858[];
extern s32 lbl_80496314;

void fn_802D2FD0(void);
void fn_80371AC4(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80371AE4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80371B24(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80371BB8(void *arg0, s32 arg1) {
    extern void fn_8031E910(void *, s32);
    extern void *fn_802D0AB8();
    extern void fn_802D1A00(void *, void *);
    extern u8 lbl_8041DFE0[];

    *(u8 **)arg0 = lbl_8041DFE0;
    fn_80371C24(arg0);
    fn_802CB8D4((u8 *)arg0 + 0x20);
    fn_8031E910(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

void fn_80371C1C(void) {

}

void fn_80371C20(void) {

}

void fn_80371C24(void *arg0) {
    M2C_UNK fn_802CB8D4(void *);
    M2C_UNK fn_8031EA2C(s32);
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x20);
    if (var_r31 != NULL) {
        do {
            fn_8031EA2C(M2C_FIELD(var_r31, s32 *, 0));
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
    fn_802CB8D4(arg0 + 0x20);
}

void fn_80372214(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_80496314 = fn_802D6A90(lbl_80493E6C, fn_80372284, fn_80372304, fn_80372324, 0, lbl_803F5600, lbl_80493858);
    }
}

void *fn_80371B64();
void fn_80372304(void) {
    fn_80371B64();
}

void fn_80372324(void *self) {
    fn_80371BB8(self, 2);
}

void fn_80372348(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493E6C[];
void *fn_80372388(void) {
    return lbl_80493E6C;
}

extern s32 lbl_80493E78[];
s32 fn_80372394(void) {
    return lbl_80493E78[0];
}

extern s32 lbl_80493E7C[];
s32 fn_803723A0(void) {
    return lbl_80493E7C[0];
}

extern u16 lbl_80493E80[];
u16 fn_803723AC(void) {
    return lbl_80493E80[0];
}

void *fn_803723B8(void) {
    return lbl_80493E6C;
}

extern u16 lbl_80493E82[];
u16 fn_803723C4(void) {
    return lbl_80493E82[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80372284(void);
extern void fn_80372324();
extern u8 lbl_803F5600[];
extern u8 lbl_80493858[];
void fn_803723D0(s32 arg0) {
    fn_802D6A90(lbl_80493E6C, fn_80372284, fn_80372304, fn_80372324, arg0, lbl_803F5600, lbl_80493858);
}

void fn_802D2430(void);
void fn_80372424(void) {
    fn_802D2430();
}

void fn_80372444(void) {
    void fn_80372214(s32, s32);
    fn_80372214(1, 0xFFFF);
}

