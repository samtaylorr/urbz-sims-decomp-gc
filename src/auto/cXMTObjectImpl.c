/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_801181F0(void) {

}

void fn_801181F4(void) {

}

extern s32 lbl_80495B6C;
extern void fn_800F1A60(s32, s32);
void fn_80118300(void) {
    fn_800F1A60((s32)&lbl_80495B6C, 2);
}

s32 fn_8011BE28(void) {
    return 0x584D544F;
}

void fn_8011BF84(void *arg0, s32 arg1) {
    M2C_UNK fn_801319F8(s32);
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    fn_801319F8(M2C_FIELD(arg0, s32 *, 0));
    if (arg1 <= 0x39) {
        temp_r3 = M2C_FIELD(arg0, void **, 4);
        temp_r9 = M2C_FIELD(temp_r3, void **, 4);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x2C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x28));
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 4);
    temp_r9_2 = M2C_FIELD(temp_r3_2, void **, 4);
    if (M2C_FIELD(temp_r9_2, s32 (**)(void *), 0x44)(temp_r3_2 + M2C_FIELD(temp_r9_2, s16 *, 0x40)) != 0) {
        temp_r3_3 = M2C_FIELD(arg0, void **, 4);
        temp_r9_3 = M2C_FIELD(temp_r3_3, void **, 4);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x4C)(temp_r3_3 + M2C_FIELD(temp_r9_3, s16 *, 0x48));
    }
}

void fn_8011CCA8(void ***arg0, s32 arg1) {
    M2C_FIELD(**arg0, s32 *, 8) = arg1;
}

void fn_8011CCB8(void ***arg0, s32 arg1) {
    M2C_FIELD(**arg0, s32 *, 0xC) = arg1;
}

void fn_8011CCC8(void ***arg0, s32 arg1) {
    M2C_FIELD(**arg0, s32 *, 0x10) = arg1;
}

s32 fn_8011CD4C(u8 *self) {
    u8 *p = *(u8 **)(self + 8);
    return p != NULL ? *(s32 *)(p + 4) : 0;
}

void fn_8011CD64(void) {

}

s32 fn_8011D7D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

void *fn_8011DA7C(void *arg0, s16 arg1, s32 arg2) {
    M2C_UNK fn_800F687C(void *, void *, M2C_UNK);
    M2C_UNK fn_80117DE4(void *);
    s32 fn_8016CCE0(s32);
    M2C_UNK fn_8016DAB4(s32, void *);
    s32 fn_8018ED98();
    void *temp_r29;

    M2C_FIELD(arg0, s16 *, 4) = arg1;
    temp_r29 = arg0 + 0x24;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    fn_800F687C(temp_r29, arg0 + 0x2C, 0x40);
    fn_80117DE4(arg0 + 0x10C);
    M2C_FIELD(arg0, s32 *, 8) = fn_8016CCE0(M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x10) = fn_8018ED98();
    fn_8016DAB4(arg2, temp_r29);
    return arg0;
}

s32 fn_8011DCBC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80122288(void) {
    return 7;
}

s32 fn_8012242C(s32 *self) {
    return self[2];
}

void fn_80122434(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

s16 fn_801229CC(void *arg0) {
    M2C_UNK fn_80122700();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        fn_80122700();
    }
    return M2C_FIELD(arg0, s16 *, 0x18);
}

s16 fn_80122A08(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        fn_80122700();
    }
    return M2C_FIELD(arg0, s16 *, 0x1A);
}

s16 fn_80122A44(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        fn_80122700();
    }
    return M2C_FIELD(arg0, s16 *, 0x1C);
}

void fn_80123040(s32 arg0) {
    M2C_UNK fn_8011D830(s32);
    fn_8011D830(arg0 + 0x6C);
}

void fn_80123108(void) {
    M2C_UNK fn_80123064(M2C_UNK, M2C_UNK);
    fn_80123064(1, 0xFFFF);
}

