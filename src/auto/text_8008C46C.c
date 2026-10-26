/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { s32 x, y, z; } Vec3i;

void fn_8008CD40(void) {
    fn_803073C4();
}

void fn_8008D5BC(void) {

}

extern s32 lbl_804941F0;
void fn_8008DCCC(void (*cb)(void)) {
    lbl_804941F0 = cb;
}

void fn_8008DCD4(void) {

}

void fn_8008E250(void) {

}

void fn_8008E254(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
}

void fn_8008F240(void) {

}

s32 fn_8008F83C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) != 0;
}

s32 fn_8008F854(void) {
    return 1;
}

s32 fn_8008F85C(void) {
    return 0;
}

s32 fn_8008F864(void) {
    return 1;
}

void fn_8008F86C(void) {

}

void fn_8008F870(void) {

}

void fn_8008F874(void) {

}

void fn_8008F878(void) {

}

s32 fn_8008F87C(void *arg0, s32 *arg1) {
    void *fn_8024839C(void *dst, const void *src, u32 n);
    s32 **vec = (s32 **)(arg0 + 0xD4);
    s32 ret = 0;
    if ((u32)((char *)vec[1] - (char *)vec[0]) >> 2) {
        s32 *dst;
        s32 *src;
        s32 *end;
        *arg1 = *vec[0];
        dst = M2C_FIELD(arg0, s32 **, 0xD4);
        end = vec[1];
        src = dst + 1;
        if (end != src) {
            u32 n = (char *)end - (char *)src;
            dst = (s32 *)((char *)fn_8024839C(dst, src, n) + n);
        }
        vec[1] = dst;
        ret = 1;
    }
    return ret;
}

void fn_8008FEE0(void) {

}

void fn_8008FEE4(void) {

}

s32 fn_8008FEE8(void *arg0, void *arg1) {
    void *obj = M2C_FIELD(arg0, void **, 4);
    void *vt = M2C_FIELD(obj, void **, 4);
    if (M2C_FIELD(vt, s32 (**)(void *), 0x1D4)(obj + M2C_FIELD(vt, s16 *, 0x1D0)) == 0 && M2C_FIELD(arg1, s32 *, 4) != 0) {
        return M2C_FIELD(arg1, s32 *, 4);
    }
    return M2C_FIELD(arg1, s32 *, 0);
}

s32 fn_80090108(void *arg0, void *arg1) {
    s32 fn_8008FEE8(void *arg0, void *arg1);
    s32 fn_80337008(void *, s32);
    extern u8 lbl_8045B82C[];
    s32 s = fn_8008FEE8(arg0, arg1);
    if (s != 0) {
        return !!fn_80337008(lbl_8045B82C, s);
    }
    return 0;
}

u32 fn_80090244(void *arg0) {
    void *a = M2C_FIELD(arg0, void **, 4);
    void *b = M2C_FIELD(a, void **, 0);
    void *c = M2C_FIELD(b, void **, 4);
    s16 offset = M2C_FIELD(c, s16 *, 0x308);
    void *func = M2C_FIELD(c, void **, 0x30C);
    void *result = ((void *(*)(void *))func)((u8 *)b + offset);
    return *(u32 *)((u8 *)result + 4);
}

u32 fn_80090284(void *arg0) {
    void *a = M2C_FIELD(arg0, void **, 4);
    void *b = M2C_FIELD(a, void **, 0);
    void *c = M2C_FIELD(b, void **, 4);
    s16 offset = M2C_FIELD(c, s16 *, 0x308);
    void *func = M2C_FIELD(c, void **, 0x30C);
    void *result = ((void *(*)(void *))func)((u8 *)b + offset);
    return *(u32 *)result;
}

void fn_8009053C(void *arg0, f32 *arg1, f32 *arg2, f32 arg3) {
    void fn_80098880(f32);
    void fn_80090F90(void *, f32, f32, f32);
    extern f32 lbl_803CC738;
    if (*arg2 != lbl_803CC738) {
        if (!(M2C_FIELD(arg0, u32 *, 0x4D4) & 0x20)) {
            fn_80098880(*arg2);
            fn_80090F90(arg0, arg3, *arg1, *arg2);
        }
    }
}

void fn_800906B8(void *arg0, f32 *arg1, f32 *arg2, f32 arg3) {
    void fn_80098880(f32);
    void fn_80090F90(void *, f32, f32, f32);
    if (!(M2C_FIELD(arg0, u32 *, 0x4D4) & 0x20)) {
        fn_80098880(*arg2);
        fn_80090F90(arg0, arg3, *arg1, *arg2);
    }
}

void fn_80091980(void *arg0) {
    M2C_UNK fn_8000CD30(s32);
    void *var_r30;
    void *var_r30_2;
    void *var_r31;
    void *var_r31_2;

    var_r30 = M2C_FIELD(arg0, void **, 0x458);
    if (var_r30 != NULL) {
        do {
            var_r31 = *M2C_FIELD(var_r30, void ***, 0x1C);
            if (var_r31 != NULL) {
                do {
                    fn_8000CD30(M2C_FIELD(var_r31, s32 *, 0x1C));
                    var_r31 = M2C_FIELD(var_r31, void **, 0x10);
                } while (var_r31 != NULL);
            }
            var_r30 = M2C_FIELD(var_r30, void **, 0x10);
        } while (var_r30 != NULL);
    }
    var_r30_2 = M2C_FIELD(arg0, void **, 0x464);
    if (var_r30_2 != NULL) {
        do {
            var_r31_2 = *M2C_FIELD(var_r30_2, void ***, 0x1C);
            if (var_r31_2 != NULL) {
                do {
                    fn_8000CD30(M2C_FIELD(var_r31_2, s32 *, 0x1C));
                    var_r31_2 = M2C_FIELD(var_r31_2, void **, 0x10);
                } while (var_r31_2 != NULL);
            }
            var_r30_2 = M2C_FIELD(var_r30_2, void **, 0x10);
        } while (var_r30_2 != NULL);
    }
}

void fn_800934F0(void *arg0) {
    M2C_UNK fn_802ED144(s32);
    fn_802ED144(M2C_FIELD(arg0, s32 *, 8) + 0x314);
}

s32 fn_80093598(void) {
    return 0;
}

void fn_8009415C(void) {
    fn_80091BE8();
}

extern f32 lbl_803CC9A4;
void fn_800945A0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = M2C_FIELD(arg0, s32 *, 0xD4);
    M2C_FIELD(arg0, f32 *, 0xC8) = lbl_803CC9A4;
    M2C_FIELD(arg0, u32 *, 0x4D4) &= ~0x800;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
}

void fn_80094EF4(void *arg0) {
    M2C_UNK fn_802EC178(s32, s32, void *);
    extern u8 lbl_8049212C[];
    void *obj = M2C_FIELD(arg0, void **, 8);
    s32 status = M2C_FIELD(obj, s32 *, 0x334) == 0;
    fn_802EC178((s32)obj + 0x314, 0x80, lbl_8049212C);
}

void fn_80094F44(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_802EC15C(s32, s32, s32);
    void *obj = M2C_FIELD(arg0, void **, 8);
    s32 status = M2C_FIELD(obj, s32 *, 0x334) != 0;
    if (status) {
    }
    fn_802EC15C((s32)M2C_FIELD(arg0, void **, 8) + 0x314, arg2, arg1);
}

s32 fn_80095A44(void) {
    return 1;
}

void fn_80095A4C(void *arg0, Vec3i *arg1, Vec3i *arg2, s32 arg3) {
    extern void fn_802ED00C(s32, s32, s32);
    *arg1 = *(Vec3i *)((u8 *)arg0 + 0x134);
    *arg2 = *(Vec3i *)((u8 *)arg0 + 0x140);
    fn_802ED00C((s32)M2C_FIELD(arg0, void **, 8) + 0x314, M2C_FIELD(arg0, s32 *, 0x4C4), arg3);
}

void fn_80095AB8(void *arg0, s32 arg1, Vec3i *arg2) {
    switch (arg1) {
    case 0:
        *arg2 = *(Vec3i *)((u8 *)arg0 + 0x134);
        break;
    case 1:
        *arg2 = *(Vec3i *)((u8 *)arg0 + 0x14C);
        break;
    case 2:
        *arg2 = *(Vec3i *)((u8 *)arg0 + 0x158);
        break;
    }
}

void fn_800969B0(void) {

}

void fn_800969B4(s32 arg0, s32 arg1) {
    M2C_UNK fn_80248784(s32, s32);
    s32 var_r29;
    s32 var_r30;
    s32 var_r31;

    var_r30 = arg0 + 0x258;
    var_r31 = arg0 + 0x1D8;
    var_r29 = 4;
    do {
        fn_80248784(var_r31, var_r30);
        var_r30 += 0x80;
        var_r31 += 0x80;
        var_r29 -= 1;
    } while (var_r29 != 0);
    fn_80248784(arg0 + 0x3D8, arg1);
}

void fn_80096DA4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x114) = arg1;
}

void fn_80096DAC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x118) = arg1;
}

void fn_80096DB4(void *arg0) {
    s32 temp_r9;
    s32 var_r0;
    s32 var_r10;
    void *temp_r11;

    var_r10 = 1;
    temp_r11 = M2C_FIELD(arg0, void **, 8) + 0x314;
    temp_r9 = M2C_FIELD(temp_r11, s32 *, 4);
    if (temp_r9 >= 0) {
        var_r0 = M2C_FIELD(temp_r11, s32 *, 0x40) + (temp_r9 * 0xB0);
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        var_r10 = 0;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x374) = var_r10;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80097B40(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80097B74(void *arg0, s32 arg1) {
    if (arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0x4D4) = (s32) (M2C_FIELD(arg0, s32 *, 0x4D4) | 0x40);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4D4) = (s32) (M2C_FIELD(arg0, s32 *, 0x4D4) & 0xFFFFFFBF);
}

s32 fn_80097B9C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x4D4) >> 6U) & 1;
}

void fn_80097BA8(void *arg0) {
    f32 fn_80097C84();
    M2C_FIELD(arg0, f32 *, 0x34) = fn_80097C84();
}

s32 fn_80097BD8(s32 arg0) {
    return arg0 + 0x188;
}

f32 fn_80097BF8(void *arg0, f32 farg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0xFC);
    M2C_FIELD(arg0, f32 *, 0xFC) = farg0;
    return temp_f0;
}

f32 fn_80097C08(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xFC);
}

void fn_80097C20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C4) = arg1;
}

void fn_80097C28(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C8) = arg1;
}

void fn_80097C30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4CC) = arg1;
}

void fn_80097C38(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4D0) = arg1;
}

s32 fn_80097C50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C4);
}

s32 fn_80097C58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C8);
}

s32 fn_80097C60(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4CC);
}

s32 fn_80097C68(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4D0);
}

void fn_80097F38(void *arg0) {
    M2C_UNK fn_802E6030(s32, M2C_UNK);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4D4);
    if (temp_r0 & 0x4000) {
        M2C_FIELD(arg0, s32 *, 0x4D4) = (s32) (temp_r0 & 0xFFFFBFFF);
        fn_802E6030(M2C_FIELD(arg0, s32 *, 8) + 0x314, 0x80);
    }
}

void fn_800983AC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 5;
}

s32 fn_8009A418(void *arg0) {
    s32 fn_802EC568(s32, M2C_UNK);
    s32 temp_r9;
    s32 var_r30;
    s32 var_r9;
    void *temp_r11;
    void *temp_r3;
    void *temp_r9_2;

    var_r30 = 0;
    if (fn_802EC568(M2C_FIELD(arg0, s32 *, 8) + 0x314, 0x30) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x4D4) & 0x40) {
            temp_r11 = M2C_FIELD(arg0, s32 *, 8) + 0x314;
            temp_r9 = M2C_FIELD(temp_r11, s32 *, 4);
            if (temp_r9 != -1) {
                var_r9 = M2C_FIELD(((temp_r9 * 0xB0) + M2C_FIELD(temp_r11, s32 *, 0x40)), s32 *, 0x30);
            } else {
                var_r9 = 0;
            }
            if (var_r9 & 0x20) {
                temp_r3 = M2C_FIELD(arg0, void **, 4);
                temp_r9_2 = M2C_FIELD(temp_r3, void **, 4);
                if (M2C_FIELD(temp_r9_2, s32 (**)(void *, M2C_UNK), 0xAC)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0xA8), 0) > 0) {
                    goto block_7;
                }
            }
        }
    } else {
block_7:
        var_r30 = 1;
    }
    return var_r30;
}

s32 fn_8009A6CC(void *arg0) {
    s32 temp_r9;
    s32 var_r11;
    void *temp_r3;
    void *var_r3;

    var_r11 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) != 4) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 8) + 0x314;
        temp_r9 = M2C_FIELD(temp_r3, s32 *, 4);
        if (temp_r9 >= 0) {
            var_r3 = M2C_FIELD(temp_r3, s32 *, 0x40) + (temp_r9 * 0xB0);
        } else {
            var_r3 = NULL;
        }
        if ((var_r3 == NULL) || (M2C_FIELD(var_r3, s32 *, 8) & 0x200)) {
            goto block_6;
        }
    } else {
block_6:
        var_r11 = 0;
    }
    return var_r11;
}

void fn_8009A724(void) {
    M2C_UNK fn_80097A3C(M2C_UNK, M2C_UNK);
    fn_80097A3C(1, 0xFFFF);
}

