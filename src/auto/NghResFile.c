/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_801288B4(void) {

}

void fn_801289C4(M2C_UNK *arg0) {
    extern M2C_UNK *lbl_80494448;
    *arg0 = lbl_80494448;
    lbl_80494448 = arg0;
}

void fn_80129208(s32 arg0, s32 arg1) {
    M2C_UNK fn_80129194(s32, s32);
    fn_80129194(arg1, arg0);
}

s32 fn_801293D0(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_8012A39C(s32, s32, s32, s32);
    M2C_UNK fn_8012F7F0(s32);
    extern s32 lbl_8049440C;
    return fn_8012A39C(fn_8012F7F0(lbl_8049440C), arg0, arg1, arg2) == 0;
}

s32 fn_80129420(s32 arg0) {
    s32 fn_8012A01C(s32, s32);
    M2C_UNK fn_8012F7F0(s32);
    extern s32 lbl_8049440C;
    return fn_8012A01C(fn_8012F7F0(lbl_8049440C), arg0) == 0;
}

s32 fn_801294A0(s32 arg0, s32 arg1) {
    s32 fn_80129C80(s32, s32, s32);
    M2C_UNK fn_8012F7F0(s32);
    return fn_80129C80(fn_8012F7F0(arg0), arg1, arg0) == 0;
}

void fn_801294E4(void) {
    M2C_UNK fn_801296E4();
    M2C_UNK fn_8012F7F0(s32);
    extern s32 lbl_8049440C;
    fn_8012F7F0(lbl_8049440C);
    fn_801296E4();
}

s32 fn_80129544(void) {
    return 0xD6000;
}

s32 fn_80129550(void) {
    return 0x1C;
}

s32 fn_80129630(s32 arg0) {
    s32 fn_801295D8(s32 *);
    s32 sp8;
    s32 var_r30;
    s32 var_r31;

    sp8 = 0;
    M2C_FIELD(&sp8, s32 *, 4) = 0;
    var_r30 = 0;
    var_r31 = arg0;
    if (var_r31 != 0) {
        do {
            var_r30 += 1;
            var_r31 -= fn_801295D8(&sp8);
        } while (var_r31 != 0);
    }
    return var_r30;
}

s32 fn_8012A8C0(void) {
    M2C_UNK fn_8012AF90();
    fn_8012AF90();
    return 0;
}

s32 fn_8012A8E4(void) {
    return 0;
}

s32 fn_8012A8EC(void) {
    return 0;
}

s32 fn_8012A8F4(void) {
    return 0;
}

s32 fn_8012A8FC(void) {
    return 0;
}

s32 fn_8012A904(void) {
    return 0;
}

void fn_8012A90C(void) {

}

s32 fn_8012A910(void) {
    return 0;
}

void fn_8012A918(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F6A38(s32, s32);
    fn_800F6A38(arg1, arg0 + 0x2C);
}

s32 fn_8012A944(void) {
    return 1;
}

s32 fn_8012A94C(void) {
    return 0;
}

s32 fn_8012A954(void) {
    return 0;
}

s32 fn_8012A9F4(void) {
    return 0;
}

void fn_8012AA68(void) {

}

s32 fn_8012AA6C(void) {
    return 0;
}

s32 fn_8012AA74(void) {
    return 0x1C004;
}

void fn_8012AA90(void) {

}

void fn_8012AA94(void) {

}

s32 fn_8012AA98(void) {
    return 0;
}

void fn_8012AAA0(void) {

}

void fn_8012AAA4(void) {

}

s32 fn_8012AAA8(void) {
    return 1;
}

void fn_8012AAB0(void) {

}

void fn_8012ACA4(void) {

}

void fn_8012ACA8(void) {

}

void fn_8012ACAC(void) {

}

void fn_8012ACB0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (arg1 - 1);
}

s32 fn_8012F7A8(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F68E0(s32);
    M2C_UNK fn_800F68F0(s32, s32, M2C_UNK);
    s32 temp_r30;

    temp_r30 = arg0 + 0x2C;
    fn_800F68E0(temp_r30);
    fn_800F68F0(temp_r30, arg1, -1);
    return 1;
}

void *fn_8012F7F0(void *arg0) {
    void fn_801297A4(void *);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x184), s32 *, 0x7C) == 0) {
        fn_801297A4(M2C_FIELD(arg0, void **, 0x184));
    }
    return M2C_FIELD(arg0, void **, 0x184);
}

void fn_8012F7F0_dummy(void);
void fn_8012F830(void *arg0, u8 *p) {
    u8 t = p[1];
    p[1] = p[0];
    p[0] = t;
}

void fn_8012F844(void *arg0, u8 *p) {
    u8 t;
    t = p[3];
    p[3] = p[0];
    p[0] = t;
    t = p[2];
    p[2] = p[1];
    p[1] = t;
}

void fn_8012F868(void *arg0, void *arg1) {
    void fn_8012FAD0(void *, void *, void *);
    struct {
        s32 a;
        s32 b;
        s32 c;
        s32 d;
    } s, *ps;
    ps = &s;
    s.a = 0;
    ps->b = 0;
    ps->c = 0;
    ps->d = 0;
    fn_8012FAD0(arg0, arg1, ps);
}

void fn_8012FE00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x180) = arg1;
}

s32 fn_8012FE08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x180);
}

void fn_8012FE10(void) {
    extern s32 lbl_80494464;
    extern s32 lbl_80494468;
    lbl_80494468 = 0;
    lbl_80494464 = 0;
}

void fn_80130178(s32 arg0, s32 arg1) {
    extern s32 lbl_80494460;
    extern s32 lbl_80495BAC;
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        lbl_80495BAC = lbl_80494460;
    }
}

s32 fn_8013019C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28) + 1;
}

s32 fn_801301A8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

void fn_801301B0(void) {
    fn_80130178(1, 0xFFFF);
}

