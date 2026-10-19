/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802FF4EC(void);
void fn_8035F6E4(void) {
    fn_802FF4EC();
}

void fn_8035F704(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BA40[];
    fn_80338000(lbl_8045BA40, arg0, 4);
}

void *fn_8035F734(u32 size, void *p);
void *fn_8035F734(u32 size, void *p) {
    return p;
}

void fn_8035F73C(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BA40[];
    fn_80338184(lbl_8045BA40, arg0);
}

void fn_803601FC(void) {
    M2C_UNK fn_80254684(s32);
    extern s32 lbl_804962E0;
    extern s32 lbl_804962E4;
    s32 temp_r0;

    if ((s32) lbl_804962E4 != 0) {
        temp_r0 = lbl_804962E4 - 1;
        lbl_804962E4 = temp_r0;
        if (temp_r0 == 0) {
            fn_80254684(lbl_804962E0);
        }
    }
}

s32 fn_80361238(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0x70);
}

void fn_80361244(void *arg0) {
    M2C_UNK fn_80361568(s32);
    fn_80361568(M2C_FIELD(arg0, s32 *, 0x28));
}

void fn_803613A4(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_803613D4(u32 size, void *p);
void *fn_803613D4(u32 size, void *p) {
    return p;
}

void fn_803613DC(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

s32 fn_803615D8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
    return 1;
}

void fn_803615F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) - 1);
}

void fn_80361600(void) {

}

s32 fn_80361944(void *arg0, s32 arg1) {
    M2C_UNK fn_802CAA88(s32, M2C_UNK);
    fn_802CAA88(arg0 + 0x28, -1);
    M2C_FIELD(arg0, s32 *, 0x98) = arg1;
    return 1;
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

void fn_80361EC8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFC);
}

void fn_80361F18(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x80);
}

void fn_80361F28(void) {

}

void fn_80361F74(void *arg0, s32 arg1) {
    void fn_80361484(void *, s32);
    void fn_80338184(void *, void *);
    extern u8 lbl_8041D1F8[];
    extern u8 lbl_8045BAE8[];
    M2C_FIELD(arg0, void **, 0x24) = lbl_8041D1F8;
    fn_80361484(arg0, 0);
    if (arg1 & 1) {
        fn_80338184(lbl_8045BAE8, arg0);
    }
}

void fn_80361FCC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_80363220(s32, s32, s32, s32);
    fn_80363220(arg1, arg2, arg3, arg4);
}

void fn_80361FFC(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_8036202C(u32 size, void *p);
void *fn_8036202C(u32 size, void *p) {
    return p;
}

void fn_80362034(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

s32 fn_80362520(void) {
    return 2;
}

s32 fn_80362528(void) {
    return 2;
}

void fn_80362530(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_80362560(u32 size, void *p);
void *fn_80362560(u32 size, void *p) {
    return p;
}

void fn_80362568(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

void fn_80362694(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_803626C4(u32 size, void *p);
void *fn_803626C4(u32 size, void *p) {
    return p;
}

void fn_803626CC(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

s32 fn_80362D30(void) {
    return 2;
}

s32 fn_80362D38(void) {
    return 2;
}

void fn_80362D40(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_80362D70(u32 size, void *p);
void *fn_80362D70(u32 size, void *p) {
    return p;
}

void fn_80362D78(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

void fn_80362E44(void) {

}

void fn_80362E48(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_80362E78(u32 size, void *p);
void *fn_80362E78(u32 size, void *p) {
    return p;
}

void fn_80362E80(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

void fn_80362FAC(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_80362FDC(u32 size, void *p);
void *fn_80362FDC(u32 size, void *p) {
    return p;
}

void fn_80362FE4(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

void fn_80363110(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_80363140(u32 size, void *p);
void *fn_80363140(u32 size, void *p) {
    return p;
}

void fn_80363148(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

void fn_80363720(void) {

}

void fn_80363918(void) {

}

void fn_8036391C(void *arg0) {
    M2C_UNK fn_802CB930();
    fn_802CB930();
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) * 2);
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

void fn_80363F50(void) {
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x28);
    fn_80363D2C();
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

void fn_803640CC(void) {
    M2C_UNK fn_80363EE0(M2C_UNK, M2C_UNK);
    fn_80363EE0(1, 0xFFFF);
}

