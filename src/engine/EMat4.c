/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D24E8(void);
extern void *fn_802D0C44(void *);
extern void fn_802D1A00(void *, void *);
extern void fn_802C7DD0(void *);
s32 fn_802D1404(void *arg0, u32 arg1);
extern void *fn_802D0B3C(void);
extern void *fn_802D0BC0(void);
extern void fn_802CAA00(void *, s32);
extern s32 lbl_80494DCC;
extern u8 lbl_80446D34[];
extern f32 lbl_803F02B0;
extern f32 lbl_803F02C0;
extern u8 lbl_803F02C8[];
extern u8 lbl_8044490C[];
extern s32 lbl_80496150;
extern void fn_802D94C0(void *, s32);
extern void fn_802D0D30(void *, void *);
extern void fn_80246D44(void (*)(void));
void fn_802D0A8C(void);
s32 *fn_802C66FC(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

void fn_802C686C(void *arg0, s8 *arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s8 **, 0) = arg1;
    *arg1 = 0;
}

void fn_802C6A5C(s32 *arg0) {
    M2C_UNK fn_80248808(s32);
    fn_80248808(*arg0);
}

void fn_802C725C(u8 **arg0, s32 arg1, u8 arg2) {
    u8 *var_r3;
    u8 var_r0;

    var_r3 = *arg0;
    var_r0 = *var_r3;
    if ((s32) var_r0 != 0) {
        do {
            if ((s8) var_r0 == arg1) {
                M2C_FIELD(var_r3, u8 *, 0) = arg2;
            }
            var_r0 = M2C_FIELD(var_r3, u8 *, 1);
            var_r3 += 1;
        } while ((s32) var_r0 != 0);
    }
}

void fn_802C7A84(void) {

}

void fn_802C7A88(f64 farg0) {
    M2C_UNK fn_802C71B0(f32);
    fn_802C71B0((f32) farg0);
}

void *fn_802C7D1C(void *self) {
    fn_802C7DD0(self);
    return self;
}

void fn_802C7DD0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void fn_802C829C(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8037D6D8(s32, s32, s32);
    fn_8037D6D8(arg1, arg2, arg0);
}

void *fn_802C87C4(void *arg0, void *arg1) {
    M2C_UNK fn_802C876C();
    void *temp_r9;

    fn_802C876C();
    temp_r9 = arg0 + 0x30;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_r9, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_r9, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    return arg0;
}

void fn_802C96D4(void) {

}

void fn_802CAA88(s32 arg0) {
    M2C_UNK fn_802D8334(s32);
    fn_802D8334(arg0 + 4);
}

void fn_802CAAAC(s32 arg0) {
    M2C_UNK fn_802D838C(s32);
    fn_802D838C(arg0 + 4);
}

void fn_802CAC68(s32 arg0) {
    M2C_UNK fn_802D83EC(s32);
    fn_802D83EC(arg0 + 4);
}

void fn_802CAC8C(s32 arg0) {
    M2C_UNK fn_802D8424(s32);
    fn_802D8424(arg0 + 4);
}

void fn_802CB508(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

void fn_802CB544(void) {

}

s32 fn_802CB548(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

s32 fn_802CB550(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

void fn_802CBB94(void) {

}

s32 fn_802CD600(void **arg0) {
    s32 var_r9;
    void *var_r3;

    var_r3 = *arg0;
    var_r9 = 0;
    if (var_r3 != NULL) {
        do {
            var_r3 = M2C_FIELD(var_r3, void **, 0x10);
            var_r9 += 1;
        } while (var_r3 != NULL);
    }
    return var_r9;
}

void fn_802CDB1C(void *arg0) {
    fn_802D1A00(fn_802D0C44(arg0), arg0);
}

s32 fn_802CE9C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10A8);
}

s32 fn_802CE9D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1098);
}

extern void *fn_802D0AB8(void *);
void fn_802CEE44(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802CF2BC(void *arg0) {
    fn_802D1A00(fn_802D0C44(arg0), arg0);
}

s32 fn_802D0334(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1024);
}

extern void *fn_802D0AB8(void *);
void fn_802D0894(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D0960(void *arg0, f32 *src, s16 *dst) {
    dst[0] = src[0] * lbl_803F02B0;
    dst[1] = src[1] * lbl_803F02B0;
    dst[2] = src[2] * lbl_803F02B0;
    dst[3] = src[3] * lbl_803F02B0;
}

void fn_802D09E0(void *arg0, u16 *src, f32 *dst) {
    dst[0] = src[0] * lbl_803F02C0;
    dst[1] = src[1] * lbl_803F02C0;
    dst[2] = src[2] * lbl_803F02C0;
    dst[3] = src[3] * lbl_803F02C0;
}

void fn_802D0A8C(void) {
    fn_802D94C0(lbl_8044490C, 2);
}

void *fn_802D0AB8(void *unused) {
    if (lbl_80496150 == 0) {
        fn_802D0D30(lbl_8044490C, lbl_803F02C8);
        lbl_80496150 = 1;
        fn_80246D44(fn_802D0A8C);
    }
    return lbl_8044490C;
}

s32 fn_802D0F94(void) {
    return 0;
}

void fn_802D0F9C(void) {

}

s32 fn_802D0FFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x52C);
}

s32 fn_802D118C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x530);
}

s32 fn_802D1194(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x534);
}

s32 fn_802D119C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x538);
}

void fn_802D11A4(void) {

}

s32 fn_802D12C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x528);
}

void fn_802D12CC(void *arg0) {
    fn_802D1A00(arg0, M2C_FIELD(arg0, void **, 0x7BC));
    M2C_FIELD(arg0, void **, 0x7BC) = 0;
    fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), (void *)lbl_80494DCC);
    lbl_80494DCC = 0;
}

s32 fn_802D1404(void *arg0, u32 arg1) {
    if (arg1 < 0x50) {
        return ((struct { u8 pad[0x53C]; s32 arr[0x50]; } *)arg0)->arr[arg1];
    }
    return 0;
}

s32 fn_802D1424(void *arg0) {
    s32 a, b, c;
    a = fn_802D1404(fn_802D0AB8(arg0), (u32)arg0);
    b = fn_802D1404(fn_802D0B3C(), (u32)arg0);
    c = fn_802D1404(fn_802D0BC0(), (u32)arg0);
    return a + b + c + fn_802D1404(((void *(*)(void))fn_802D0C44)(), (u32)arg0);
}

void fn_802D1494(void) {
    u8 *p = lbl_80446D34;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446D70[];
void fn_802D14C4(void) {
    u8 *p = lbl_80446D70;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446DAC[];
void fn_802D14F4(void) {
    u8 *p = lbl_80446DAC;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446DE8[];
void fn_802D1524(void) {
    u8 *p = lbl_80446DE8;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446E24[];
void fn_802D1554(void) {
    u8 *p = lbl_80446E24;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446E60[];
void fn_802D1584(void) {
    u8 *p = lbl_80446E60;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446E9C[];
void fn_802D15B4(void) {
    u8 *p = lbl_80446E9C;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446ED8[];
void fn_802D15E4(void) {
    u8 *p = lbl_80446ED8;
    fn_802CAA00(&p[0x20], 2);
}

void fn_802D1F94(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D20E8(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D211C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D21E0(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D24C8(void) {
    fn_802D24E8();
}

void fn_802D26A0(void) {
    M2C_UNK fn_802D2634(M2C_UNK, M2C_UNK);
    fn_802D2634(1, 0xFFFF);
}

