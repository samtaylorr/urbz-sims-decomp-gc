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
    s32 *p;
    if (arg1 < 0x50) {
        p = (s32 *)((u8 *)arg0 + 0x53C);
        return p[arg1];
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

