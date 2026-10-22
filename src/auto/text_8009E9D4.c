/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_804942B4;
void fn_800A0568(void) {

}

void fn_800A0A88(void) {

}

void fn_800A0A8C(void) {

}

void fn_800A0F48(s32 arg0) {
    M2C_UNK fn_800A3310(s32);
    fn_800A3310(arg0 + 0x4C);
}

void fn_800A10C8(s32 arg0) {
    M2C_UNK fn_800A3358(s32);
    fn_800A3358(arg0 + 0x4C);
}

void fn_800A13DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1A0) = arg1;
}

s32 fn_800A18A8(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x180);
    M2C_FIELD(arg0, s32 *, 0x180) = arg1;
    return temp_r0;
}

void fn_800A1B38(void) {

}

void fn_800A1B3C(void) {

}

void fn_800A1B40(void) {

}

void fn_800A1B44(void) {

}

void fn_800A22D4(void) {

}

void **fn_800A35E4(void) {
    extern void *lbl_8042F060[];
    void **p;

    p = lbl_8042F060[0];
    if (p != NULL) {
        lbl_8042F060[0] = *p;
    }
    return p;
}

void fn_800A3600(void **arg0) {
    extern void *lbl_8042F060[];
    void **head = lbl_8042F060;

    if (arg0 != NULL) {
        *arg0 = *head;
        *head = arg0;
    }
}

void *fn_800A361C(char *arg0) {
    void fn_800F160C(void *);
    void fn_8030728C(void *);
    extern f32 lbl_803CD8EC[];
    extern u8 lbl_8040A068[];
    extern f32 lbl_8049428C;
    extern f32 lbl_80494290;
    extern f32 lbl_80494294;
    extern f32 lbl_80494298;
    struct {
        f32 a;
        f32 b;
    } t;
    f32 d;

    fn_8030728C(arg0);
    M2C_FIELD(arg0, void **, 0x44) = lbl_8040A068;
    fn_800F160C(arg0 + 0x58);
    fn_800F160C(arg0 + 0x5C);
    fn_800F160C(arg0 + 0x60);
    d = lbl_80494290 - lbl_8049428C;
    t.a = d * lbl_803CD8EC[0] + d;
    t.b = lbl_80494298 - lbl_80494294;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = t.b;
    M2C_FIELD(arg0, f32 *, 0x20) = *(f32 *)&t;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    return arg0;
}

void fn_800A36B4(char *arg0, s32 arg1) {
    void fn_800A3600(void **);
    void fn_800F1A60(void *, s32);
    void fn_80307364(void *, s32);
    void fn_8031EA2C(void *);
    extern u8 lbl_8040A068[];

    M2C_FIELD(arg0, void **, 0x44) = lbl_8040A068;
    M2C_FIELD(arg0, void **, 0x68) = NULL;
    if (M2C_FIELD(arg0, void **, 0x88) != NULL) {
        fn_8031EA2C(M2C_FIELD(arg0, void **, 0x88));
        M2C_FIELD(arg0, void **, 0x88) = NULL;
    }
    if (M2C_FIELD(arg0, void **, 0x8C) != NULL) {
        fn_8031EA2C(M2C_FIELD(arg0, void **, 0x8C));
        M2C_FIELD(arg0, void **, 0x8C) = NULL;
    }
    fn_800F1A60(arg0 + 0x60, 2);
    fn_800F1A60(arg0 + 0x5C, 2);
    fn_800F1A60(arg0 + 0x58, 2);
    fn_80307364(arg0, 0);
    if (arg1 & 1) {
        fn_800A3600((void **)arg0);
    }
}

s32 fn_800A3F68(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), s32 *, 0xC);
}

void fn_800A40EC(void) {

}

void fn_800A42E8(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)obj[0x11];
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 8), 3);
    }
}

void fn_800A4328(s32 arg0) {
    M2C_UNK fn_800F3304(s32);
    fn_800F3304(arg0 + 0x58);
}

void fn_800A4370(void) {

}

s32 fn_800A4374(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x174);
}

s32 fn_800A437C(void) {
    return lbl_804942B4;
}

void fn_800A439C(void) {
    M2C_UNK fn_800A40F0(M2C_UNK, M2C_UNK);
    fn_800A40F0(1, 0xFFFF);
}

void fn_800A43C8(void) {
    M2C_UNK fn_800A40F0(M2C_UNK, M2C_UNK);
    fn_800A40F0(0, 0xFFFF);
}

