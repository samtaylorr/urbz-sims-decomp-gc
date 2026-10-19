/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802FF4EC(void);
void fn_8035F6E4(void) {
    fn_802FF4EC();
}

void *fn_8035F734(u32 size, void *p);
void *fn_8035F734(u32 size, void *p) {
    return p;
}

void *fn_803613D4(u32 size, void *p);
void *fn_803613D4(u32 size, void *p) {
    return p;
}

void fn_80361600(void) {

}

s32 fn_80361ADC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

s32 fn_80361D14(void) {
    return 1;
}

s32 fn_80361D1C(void) {
    return 1;
}

void fn_80361F28(void) {

}

void *fn_8036202C(u32 size, void *p);
void *fn_8036202C(u32 size, void *p) {
    return p;
}

s32 fn_80362520(void) {
    return 2;
}

s32 fn_80362528(void) {
    return 2;
}

void *fn_80362560(u32 size, void *p);
void *fn_80362560(u32 size, void *p) {
    return p;
}

void *fn_803626C4(u32 size, void *p);
void *fn_803626C4(u32 size, void *p) {
    return p;
}

s32 fn_80362D30(void) {
    return 2;
}

s32 fn_80362D38(void) {
    return 2;
}

void *fn_80362D70(u32 size, void *p);
void *fn_80362D70(u32 size, void *p) {
    return p;
}

void fn_80362E44(void) {

}

void *fn_80362E78(u32 size, void *p);
void *fn_80362E78(u32 size, void *p) {
    return p;
}

void *fn_80362FDC(u32 size, void *p);
void *fn_80362FDC(u32 size, void *p) {
    return p;
}

void *fn_80363140(u32 size, void *p);
void *fn_80363140(u32 size, void *p) {
    return p;
}

void fn_80363720(void) {

}

void fn_80363918(void) {

}

void fn_802D2FD0(void);
void fn_80363C8C(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80363CAC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80363CEC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80363D2C(void);
void fn_80363F78(void) {
    fn_80363D2C();
}

void fn_80363FA8(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493920[];
void *fn_80363FE8(void) {
    return lbl_80493920;
}

extern s32 lbl_8049392C[];
s32 fn_80363FF4(void) {
    return lbl_8049392C[0];
}

extern s32 lbl_80493930[];
s32 fn_80364000(void) {
    return lbl_80493930[0];
}

extern u16 lbl_80493934[];
u16 fn_8036400C(void) {
    return lbl_80493934[0];
}

void *fn_80364018(void) {
    return lbl_80493920;
}

extern u16 lbl_80493936[];
u16 fn_80364024(void) {
    return lbl_80493936[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80363F50(void);
extern void fn_80363F98(void);
extern u8 lbl_803F4F30[];
extern u8 lbl_804936F0[];
void fn_80364030(s32 arg0) {
    fn_802D6A90(lbl_80493920, fn_80363F50, fn_80363F78, fn_80363F98, arg0, lbl_803F4F30, lbl_804936F0);
}

void fn_802D2430(void);
void fn_80364084(void) {
    fn_802D2430();
}

