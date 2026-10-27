/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

static inline s32 fn_802E5F90_flags(void *arg0, s32 idx) {
    if (idx != -1) {
        return M2C_FIELD(M2C_FIELD(arg0, char **, 0x40) + idx * 0xB0, s32 *, 0x30);
    }
    return 0;
}

static inline s32 fn_802E5EC4_inline(void *arg0, s32 arg1) {
    s32 i;

    if (arg1 & 0x103F) {
        if (fn_802E5F90_flags(arg0, M2C_FIELD(arg0, s32 *, 4)) & arg1) {
            return M2C_FIELD(arg0, s32 *, 4);
        }
    }
    for (i = M2C_FIELD(arg0, s32 *, 0x34); i < M2C_FIELD(arg0, s32 *, 0x3C); i++) {
        if ((arg1 >> i) & 1) {
            return i;
        }
    }
    return -1;
}

static inline void *fn_802E5F90_inline(void *arg0, s32 arg1) {
    s32 i;

    if (arg1 & 0x103F) {
        if (fn_802E5F90_flags(arg0, M2C_FIELD(arg0, s32 *, 4)) & arg1) {
            return M2C_FIELD(arg0, char **, 0x40) + M2C_FIELD(arg0, s32 *, 4) * 0xB0;
        }
        return NULL;
    }
    for (i = M2C_FIELD(arg0, s32 *, 0x34); i < M2C_FIELD(arg0, s32 *, 0x3C); i++) {
        if ((arg1 >> i) & 1) {
            return M2C_FIELD(arg0, char **, 0x40) + i * 0xB0;
        }
    }
    return NULL;
}

void fn_802ED364(void *arg0, void *arg1, s32 arg2);
void fn_802EAF44(void *arg0, void *arg1, s32 arg2, f32 arg3);

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

s32 fn_802E5EC4(void *arg0, s32 arg1) {
    s32 idx = fn_802E5EC4_inline(arg0, arg1);
    if (idx == -1) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(arg0, char **, 0x40) + idx * 0xB0, s32 *, 0xA8) == 1;
}

void fn_802E5F6C(void *arg0, void *arg1) {
    if (arg1 != NULL && M2C_FIELD(arg1, s32 *, 0xA8) == 1) {
        M2C_FIELD(arg1, s32 *, 0x30) |= 0x08000000;
    }
}

void fn_802E5F6C(void *arg0, void *arg1);
void fn_802E5F90(void *arg0, s32 arg1) {
    fn_802E5F6C(arg0, fn_802E5F90_inline(arg0, arg1));
}

void fn_802E6030(void *arg0, s32 arg1) {
    void *win = fn_802E5F90_inline(arg0, arg1);
    if (win != NULL && M2C_FIELD(win, s32 *, 0xA8) == 1) {
        M2C_FIELD(win, s32 *, 0x30) &= ~0x08000000;
    }
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

void fn_802E9D34(void *arg0, void *arg1);
void fn_802EA264(void *arg0, s32 arg1) {
    fn_802E9D34(arg0, fn_802E5F90_inline(arg0, arg1));
}

void fn_802EB384(void *arg0, void *arg1);
void fn_802EB3E4(void *arg0, s32 arg1) {
    fn_802EB384(arg0, fn_802E5F90_inline(arg0, arg1));
}

void fn_802EB484(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4) {
    extern const f32 lbl_803F0A98;
    if (arg1 != NULL && M2C_FIELD(arg1, s32 *, 0xA8) == 1 && arg2 != M2C_FIELD(arg1, f32 *, 0x64)) {
        M2C_FIELD(arg1, u8 *, 0xA0) = 2;
        M2C_FIELD(arg1, f32 *, 0x58) = arg4;
        M2C_FIELD(arg1, f32 *, 0x68) = arg3;
        M2C_FIELD(arg1, f32 *, 0x64) = arg2;
        M2C_FIELD(arg1, f32 *, 0x54) = arg3;
        if (arg2 != lbl_803F0A98) {
            fn_802ED364(arg0, arg1, 1);
        }
    }
}

void fn_802EB484(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4);
void fn_802EB4F0(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    fn_802EB484(arg0, fn_802E5F90_inline(arg0, arg1), arg2, arg3, arg4);
}

void fn_802EB650(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
void fn_802EB590(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    fn_802EB650(arg0, arg1, arg2, arg3, arg4, arg5);
}

void fn_802ED364(void *arg0, void *arg1, s32 arg2);
void fn_802EAF44(void *arg0, void *arg1, s32 arg2, f32 arg3);
void fn_802EB5B0(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    fn_802EB590(arg0, fn_802E5F90_inline(arg0, arg1), arg2, arg3, arg4, arg5);
}

void fn_802EB650(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    extern const f32 lbl_803F0A9C[];
    f32 diff;
    if (arg1 != NULL && M2C_FIELD(arg1, s32 *, 0xA8) == 1 && arg2 != M2C_FIELD(arg1, f32 *, 0x64)) {
        diff = M2C_FIELD(arg1, f32 *, 0x50) - arg2;
        M2C_FIELD(arg1, u8 *, 0xA0) = 1;
        M2C_FIELD(arg1, f32 *, 0x6C) = arg4;
        M2C_FIELD(arg1, f32 *, 0x70) = arg5;
        M2C_FIELD(arg1, f32 *, 0x60) = M2C_FIELD(arg1, f32 *, 0x50);
        M2C_FIELD(arg1, f32 *, 0x64) = arg2;
        M2C_FIELD(arg1, f32 *, 0x5C) = lbl_803F0A9C[0];
        if (diff >= lbl_803F0A9C[0]) {
            arg3 *= diff;
        } else {
            arg3 *= -diff;
        }
        if (arg3 == lbl_803F0A9C[0]) {
            fn_802EAF44(arg0, arg1, 1, arg2);
        } else {
            M2C_FIELD(arg1, f32 *, 0x68) = arg3;
            if (arg2 != lbl_803F0A9C[0]) {
                fn_802ED364(arg0, arg1, 1);
            }
        }
    }
}

void fn_802EB708(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    extern const f32 lbl_803F0AA0;
    fn_802EB650(arg0, fn_802E5F90_inline(arg0, arg1), arg3, arg4, arg5, lbl_803F0AA0);
}

void fn_802EC460(void *arg0, void *arg1);
void fn_802EC4C8(void *arg0, s32 arg1) {
    fn_802EC460(arg0, fn_802E5F90_inline(arg0, arg1));
}

void fn_802EC74C(void *arg0, void *arg1);
void fn_802EC790(void *arg0, s32 arg1) {
    fn_802EC74C(arg0, fn_802E5F90_inline(arg0, arg1));
}

void fn_802ED6F4(void) {
    M2C_UNK fn_802ED604(M2C_UNK, M2C_UNK);
    fn_802ED604(1, 0xFFFF);
}

