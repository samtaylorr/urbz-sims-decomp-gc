/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
s32 *fn_80324168(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

void fn_8032417C(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8032419C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_803241DC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_803256E0(s32 arg0, s32 arg1) {
    M2C_UNK fn_8032588C();
    M2C_UNK fn_80325978(s32, s32);
    fn_8032588C();
    fn_80325978(arg0, arg1);
}

void fn_803257E8(void *arg0, void *arg1) {
    s32 fn_802CB69C(s32);
    M2C_FIELD(arg1, s32 *, 0x88) = fn_802CB69C(arg0 + 0x48EFC);
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
}

void fn_80325888(void) {

}

void fn_80325A7C(s32 arg0, s32 arg1) {
    s32 fn_802C52EC(s32);
    M2C_UNK fn_80325AB8(s32, s32);
    fn_80325AB8(arg0, fn_802C52EC(arg1));
}

void fn_80325AF4(s32 arg0) {
    M2C_UNK fn_803660C8(s32);
    fn_803660C8(arg0 + 0x490B0);
}

void fn_80325B1C(s32 arg0) {
    M2C_UNK fn_80366120(s32);
    fn_80366120(arg0 + 0x490B0);
}

void fn_80326190(void *arg0) {
    M2C_UNK fn_802F5D80(void *, void *, void *, s32, s32);
    fn_802F5D80(arg0 + 0x28, arg0 + 0x48EFC, arg0 + 0x49120, M2C_FIELD(arg0, s32 *, 0x4B120), M2C_FIELD(arg0, s32 *, 0x4911C));
}

void fn_80327A68(s32 arg0) {
    void fn_80328DD4(void *);
    fn_80328AE0();
    fn_80328DD4((void *)arg0);
}

void fn_80328CF8(s32 arg0) {
    M2C_UNK fn_802F5BD0(s32);
    fn_802F5BD0(arg0 + 0x28);
}

void fn_80328E5C(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x28) = (void *) M2C_FIELD(arg0, void **, 0x4D130);
    M2C_FIELD(arg0, void **, 0x4D130) = arg1;
}

void fn_8032421C(void);
void fn_80329080(void) {
    fn_8032421C();
}

void fn_803290C4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_804938F8[];
void *fn_80329104(void) {
    return lbl_804938F8;
}

extern s32 lbl_80493904[];
s32 fn_80329110(void) {
    return lbl_80493904[0];
}

extern s32 lbl_80493908[];
s32 fn_8032911C(void) {
    return lbl_80493908[0];
}

extern u16 lbl_8049390C[];
u16 fn_80329128(void) {
    return lbl_8049390C[0];
}

void *fn_80329134(void) {
    return lbl_804938F8;
}

extern u16 lbl_8049390E[];
u16 fn_80329140(void) {
    return lbl_8049390E[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80328FF4(void);
extern void fn_803290A0(void);
extern u8 lbl_803F3210[];
extern u8 lbl_80493858[];
void fn_8032914C(s32 arg0) {
    fn_802D6A90(lbl_804938F8, fn_80328FF4, fn_80329080, fn_803290A0, arg0, lbl_803F3210, lbl_80493858);
}

void fn_802D2430(void);
void fn_803291A0(void) {
    fn_802D2430();
}

void fn_803291C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4D134) = arg1;
}

s32 fn_803291CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4D134);
}

void fn_803291D8(s32 arg0) {
    M2C_UNK fn_80366328(s32);
    fn_80366328(arg0 + 0x490B0);
}

extern s32 lbl_80494F38;
s32 fn_80329200(void) {
    return lbl_80494F38;
}

s32 fn_80329208(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x49118);
}

s32 fn_80329214(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4911C);
}

void fn_80329220(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x4D13C) = farg0;
}

void fn_8032922C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4D138) = arg1;
}

void fn_80329238(void) {
    void fn_80328F84(s32, s32);
    fn_80328F84(1, 0xFFFF);
}

