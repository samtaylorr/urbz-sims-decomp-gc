/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802E2390(void);
void fn_802E2288(s32 arg0) {
    M2C_UNK fn_802C8A34(s32, s32);
    M2C_UNK fn_802C98D8(s32);
    M2C_UNK fn_802E3CB4(s32);
    s32 temp_r29;

    temp_r29 = arg0 + 0xE0;
    fn_802C98D8(temp_r29);
    fn_802C8A34(arg0 + 0xA0, temp_r29);
    fn_802E3CB4(arg0);
}

void fn_802E3ED4(void) {
    fn_802E2390();
}

void fn_802E232C(void);
void fn_802E3EF4(void) {
    fn_802E232C();
}

void fn_802E4660(void *arg0, s32 arg1) {
    M2C_UNK fn_802E2460();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x31C) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x31C) = arg1;
        fn_802E2460();
    }
}

s32 fn_802E5498(s32 arg0) {
    return arg0 + 0x280;
}

s32 fn_802E54A0(s32 arg0) {
    return arg0 + 0x290;
}

s32 fn_802E54A8(s32 arg0) {
    return arg0 + 0xA0;
}

s32 fn_802E54B0(s32 arg0) {
    return arg0 + 0x160;
}

s32 fn_802E54B8(s32 arg0) {
    return arg0 + 0x1E0;
}

void fn_802E54C0(void) {

}

void fn_802E5E58(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_802E58E4(s32, s32, s32, s32);
    s32 fn_80337F14(s32);
    fn_802E58E4(arg0, fn_80337F14(arg1), arg2, arg3);
}

void fn_802E5700(void);
void fn_802E5EA4(void) {
    fn_802E5700();
}

void fn_802E66F8(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    M2C_UNK fn_802CB69C(s32, void *);
    void *fn_802D1FC8(M2C_UNK);
    void *temp_r3;

    temp_r3 = fn_802D1FC8(0xC);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0) = arg1;
        M2C_FIELD(temp_r3, f32 *, 4) = farg0;
        M2C_FIELD(temp_r3, f32 *, 8) = farg1;
        fn_802CB69C(arg0, temp_r3);
    }
}

void fn_802E7720(void *arg0) {
    s32 temp_r0;
    s32 var_ctr;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r0 > 0) {
        var_ctr = temp_r0;
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}

void fn_802E8E7C(void *arg0) {
    M2C_UNK fn_802E8EB0();
    extern s32 lbl_80494DFC;
    fn_802E8EB0();
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) lbl_80494DFC;
}

void fn_802EB650(void);
void fn_802EB590(void) {
    fn_802EB650();
}

void fn_802ED6F4(void) {
    M2C_UNK fn_802ED604(M2C_UNK, M2C_UNK);
    fn_802ED604(1, 0xFFFF);
}

