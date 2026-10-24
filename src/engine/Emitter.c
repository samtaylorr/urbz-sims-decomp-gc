/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8030AA98(void);
extern f32 lbl_803F2088[];
extern f32 lbl_803F208C[];
extern f32 lbl_803F2090[];
extern void *lbl_80494EC4;
void fn_8030C0E8(void *arg0);
s32 fn_8030AA04(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_8030AB88(void *arg0, s32 arg1);
void fn_8030B800(void);
void fn_8030B280(void);
s32 fn_8030ACB0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

void fn_8030ADA0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp8, s32 arg_spC) {
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg0, void **, 0x8C);
    if (temp_r11 != NULL) {
        if (arg1 != 0xFFFF) {
            M2C_FIELD(temp_r11, s32 *, 0x90) = arg1;
        }
        if (arg3 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0x98) = arg3;
        }
        if (arg5 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0xA0) = arg5;
        }
        if (arg4 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0x9C) = arg4;
        }
        if (arg6 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0xA4) = arg6;
        }
        if (arg7 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0xA8) = arg7;
        }
        if (arg2 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0x94) = arg2;
        }
        if (arg_spC != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0xB0) = arg_spC;
        }
        if (arg_sp8 != 0xFFFF) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0xAC) = arg_sp8;
        }
    }
}

void fn_8030AF88(void *arg0, f32 farg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), f32 *, 0xBC) = farg0;
}

s32 fn_8030AFC8(void) {
    return 0;
}

void fn_8030C1D8(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = M2C_FIELD(lbl_80494EC4, f32 *, 0x280);
    M2C_FIELD(arg0, f32 *, 0x3C) = M2C_FIELD(lbl_80494EC4, f32 *, 0x284);
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_803F2088[0];
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), f32 *, 0xD4) = lbl_803F208C[0];
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), f32 *, 0xD0) = lbl_803F208C[0];
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), f32 *, 0x110) = lbl_803F2090[0];
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), f32 *, 0x10C) = lbl_803F2090[0];
    fn_8030C0E8(arg0);
}

s32 fn_8030C24C(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 id;
    s32 p;

    id = fn_8030AA04(arg0, arg1, arg2, (s32)arg3, 0, 0, 0, 0);
    if (id != -1) {
        fn_8030ADA0(arg0, (s32)fn_8030B800, (s32)fn_8030B280, (s32)fn_8030C0E8, 0, fn_8030ACB0(arg0), NULL, 0, 0, 0);
        p = fn_8030ACB0(arg0);
        M2C_FIELD(p, s32 *, 0x80) = M2C_FIELD(arg3, s32 *, 0x16C);
        fn_8030AB88(arg0, M2C_FIELD(p, s32 *, 0x88));
    }
    return id;
}

void fn_8030C490(void) {
    fn_8030AA98();
}

extern f32 lbl_803F2088[];
extern f32 lbl_803F208C[];
extern f32 lbl_803F2090[];
extern void *lbl_80494EC4;
void fn_8030C0E8(void *arg0);
s32 fn_8030AA04(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_8030AB88(void *arg0, s32 arg1);
void fn_8030B800(void);
void fn_8030B280(void);
extern void *lbl_80494ED4;
extern f32 lbl_803F2094[];
void fn_8030C598(void) {
    void *vt = M2C_FIELD(lbl_80494ED4, void **, 0x68);
    M2C_FIELD(vt, void (**)(void *, f32), 0x254)((u8 *)lbl_80494ED4 + M2C_FIELD(vt, s16 *, 0x250), lbl_803F2094[0]);
}

void fn_8030CB5C(s32 arg0, s32 arg1) {

}

void fn_8030CB60(void) {
    fn_8030CB5C(1, 0xFFFF);
}

