/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void *fn_8016C00C(void *arg0, s32 arg1, u32 arg2) {
    M2C_UNK fn_8016C0B8(void *);
    s32 fn_802D2058(s32);
    M2C_FIELD(arg0, u32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    if (0x7CFFU >= arg2) {
        M2C_FIELD(arg0, s32 *, 8) = fn_802D2058(arg2 * 2);
    } else {
        M2C_FIELD(arg0, u32 *, 4) = 0U;
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    fn_8016C0B8(arg0);
    return arg0;
}

void fn_8016C0EC(void) {
    M2C_UNK fn_8016C1A4();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x18);
    fn_8016C1A4();
}

void fn_8016C114(void) {
    M2C_UNK fn_8016C1A4();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x18);
    fn_8016C1A4();
}

void fn_8016C13C(void) {
    M2C_UNK fn_8016C1A4();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x18);
    fn_8016C1A4();
}

void fn_8016C164(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x64))((char *)obj + *(s16 *)(vt + 0x60), 3);
    }
}

s32 fn_8016C258(void) {
    return 1;
}

void fn_8016C2E8(void) {

}

void fn_8016C2EC(void) {

}

void *fn_8016C5A0(void *arg0, u8 *arg1) {
    void fn_801B3824(void *, void *);
    fn_801B3824(arg0, arg1 + 4);
    return arg0;
}

s32 fn_8016C618(void) {
    return 0;
}

s32 fn_8016C620(void) {
    return 0;
}

s32 fn_8016C628(void) {
    return 0;
}

s32 fn_8016C630(void *arg0, s32 arg1, void **arg2) {
    void *temp_r9;

    if (arg2 != NULL && (arg1 == 1 || arg1 == 0x4BE348E2)) {
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r9, void (**)(void *), 0x14)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x10));
        *arg2 = arg0;
        return 1;
    }
    return 0;
}

s32 fn_8016C6A0(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_8016C6B4(void *arg0) {
    s32 var_r3;
    void *temp_r9;

    var_r3 = M2C_FIELD(arg0, s32 *, 0x14) - 1;
    M2C_FIELD(arg0, s32 *, 0x14) = var_r3;
    if (var_r3 == 0) {
        if (arg0 != NULL) {
            temp_r9 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_r9, void (**)(void *, s32), 0x64)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x60), 3);
        }
        return 0;
    }
    return var_r3;
}

s32 fn_8016C710(void) {
    return 0;
}

s32 fn_8016C718(void) {
    return 0;
}

extern s32 lbl_80495C5C;
extern void fn_800F1A60(s32, s32);
void fn_8016C720(void) {
    fn_800F1A60((s32)&lbl_80495C5C, 2);
}

void *fn_8016C748(void *arg0) {
    void fn_80197AC8(void *);
    void fn_80197AD4(void *, s32, void *);
    void fn_8019F898(void *);
    extern char lbl_803D9EE8[];
    extern char lbl_80411A38[];
    fn_8019F898(arg0);
    M2C_FIELD(arg0, void **, 0x10) = lbl_80411A38;
    fn_80197AC8(arg0);
    fn_80197AD4(arg0, 2, lbl_803D9EE8);
    return arg0;
}

extern s32 lbl_80495C70;
void fn_8016C894(void) {
    fn_800F1A60((s32)&lbl_80495C70, 2);
}

s32 fn_8016CCE0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s32 *, 0x1C);
}

void fn_8016CCEC(void) {

}

void fn_8016CCF0(void) {

}

extern s32 lbl_80495C78;
void fn_8016CDFC(void) {
    fn_800F1A60((s32)&lbl_80495C78, 2);
}

M2C_UNK *fn_8016CE24(void *arg0) {
    M2C_UNK fn_800F160C(M2C_UNK *);
    M2C_UNK fn_80246D44(M2C_UNK *);
    extern s32 lbl_80495C7C;
    M2C_UNK *var_r3;

    var_r3 = M2C_FIELD(arg0, M2C_UNK **, 0x84);
    if (var_r3 == NULL) {
        if ((s32) lbl_80495C7C == 0) {
            fn_800F160C(&lbl_80495C78);
            lbl_80495C7C = 1;
            fn_80246D44(&fn_8016CDFC);
        }
        var_r3 = &lbl_80495C78;
    }
    return var_r3;
}

extern s32 lbl_80495C80;
void fn_8016CECC(void) {
    fn_800F1A60((s32)&lbl_80495C80, 2);
}

s16 fn_8016D328(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s16 *, 0x96);
}

s32 fn_8016D334(void) {
    void *fn_8016CC44();
    return (M2C_FIELD(M2C_FIELD(fn_8016CC44(), void **, 0x38), u16 *, 0x98) ^ 1) & 1;
}

s32 fn_8016D364(void) {
    return ((u32) (M2C_FIELD(M2C_FIELD(fn_8016CC44(), void **, 0x38), u16 *, 0x98) ^ 2) >> 1U) & 1;
}

s16 fn_8016D45C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s16 *, 0x9E);
}

extern s32 lbl_80495C88;
void fn_8016E5DC(void) {
    fn_800F1A60((s32)&lbl_80495C88, 2);
}

s32 *fn_8016F4AC(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

extern void fn_8016F714(s32);
extern void fn_802D20E8(s32);
void fn_8016F4C0(s32 self, s32 flags) {
    fn_8016F714(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8016F500(M2C_UNK **arg0) {
    M2C_UNK *var_r3;
    s32 var_r9;

    var_r3 = *arg0;
    var_r9 = 0;
    if (var_r3 != NULL) {
        do {
            var_r3 = *var_r3;
            var_r9 += 1;
        } while (var_r3 != NULL);
    }
    return var_r9;
}

void fn_8016F784(M2C_UNK **arg0) {
    M2C_UNK *temp_r9;

    temp_r9 = *arg0;
    if (temp_r9 != NULL) {
        *arg0 = *temp_r9;
    }
}

s32 fn_8016F79C(s32 *arg0) {
    s32 temp_r30;

    temp_r30 = *arg0;
    fn_8016F784(arg0);
    return temp_r30;
}

void fn_8016F824(void) {
    void fn_8016F7D0(s32, s32);
    fn_8016F7D0(1, 0xFFFF);
}

void fn_8016F850(void) {
    void fn_8016F7D0(s32, s32);
    fn_8016F7D0(0, 0xFFFF);
}

