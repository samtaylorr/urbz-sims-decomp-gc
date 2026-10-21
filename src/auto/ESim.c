/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8003A1D0(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8003A1F0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8003A230(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_8003AD8C(void) {
    s32 fn_8003AD54();
    return fn_8003AD54() ^ 1;
}

void fn_8003CA70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_800A43F4(s32, s32, M2C_UNK, s32, s32, M2C_UNK);
    fn_800A43F4(arg1, arg0 + 0x410, 0, arg2, arg3, 0);
}

void fn_8003CFE0(s32 arg0) {
    s32 fn_8003E48C();
    M2C_UNK fn_802E77F0(s32, s32, s32);
    extern s32 lbl_80494DFC;
    if (fn_8003E48C() == 0) {
        fn_802E77F0(arg0 + 0x314, arg0 + 0xD0, lbl_80494DFC);
    }
}

void fn_8003D024(void) {

}

void fn_8003E4A8(void *arg0) {
    M2C_UNK fn_8003E50C(void *);
    M2C_UNK fn_802D8F90(s32);
    extern s32 lbl_80494DF0;
    fn_802D8F90(lbl_80494DF0);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x63C) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x600) <= 0)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x640) != 0) {
            fn_8003E50C(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x63C) = 0;
    }
}

void fn_8003E50C(void *arg0) {
    M2C_UNK fn_8003C7A8(void *, void *);
    M2C_UNK fn_800A46B4(void *, M2C_UNK);
    M2C_UNK fn_8032B9E4(s32);
    M2C_UNK fn_8032BEB8(s32);
    void *temp_r30;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x640) != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x3B8);
        if (temp_r9 != NULL) {
            fn_8032B9E4(M2C_FIELD(temp_r9, s32 *, 0x134));
        }
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x3BC);
        if (temp_r9_2 != NULL) {
            fn_8032B9E4(M2C_FIELD(temp_r9_2, s32 *, 0x134));
        }
        temp_r9_3 = M2C_FIELD(arg0, void **, 0x3C0);
        if (temp_r9_3 != NULL) {
            fn_8032B9E4(M2C_FIELD(temp_r9_3, s32 *, 0x134));
        }
        temp_r9_4 = M2C_FIELD(arg0, void **, 0x3C4);
        if (temp_r9_4 != NULL) {
            fn_8032B9E4(M2C_FIELD(temp_r9_4, s32 *, 0x134));
        }
        temp_r9_5 = M2C_FIELD(arg0, void **, 0x3C8);
        if (temp_r9_5 != NULL) {
            fn_8032B9E4(M2C_FIELD(temp_r9_5, s32 *, 0x134));
        }
        M2C_FIELD(arg0, s32 *, 0x640) = 0;
        fn_8032BEB8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B8), s32 *, 0x134));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x650) != 0) {
            temp_r30 = arg0 + 0x3B4;
            fn_800A46B4(temp_r30, 0);
            fn_8003C7A8(arg0, temp_r30);
        }
    }
}

void fn_8003ECBC(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, u8 *, 0) | (M2C_FIELD(arg0, u8 *, 1) << 8) | (M2C_FIELD(arg0, u8 *, 2) << 0x10) | (M2C_FIELD(arg0, u8 *, 3) << 0x18);
}

void fn_8003F3CC(void *arg0) {
    M2C_UNK fn_8003EE98();
    M2C_UNK fn_8003F10C();
    u32 temp_r0;

    temp_r0 = (u8) M2C_FIELD(arg0, u8 *, 0x1A) >> 3U;
    switch ((s32) temp_r0) {                        /* irregular */
    case 1:
        fn_8003EE98();
        return;
    case 2:
        fn_8003F10C();
        return;
    }
}

void fn_8003F8A0(void) {
    fn_8003F9E0();
}

void fn_8003F8C0(void *self) {
    extern void fn_8003A9F0(void *, s32);
    fn_8003A9F0(self, 2);
}

void fn_8003F8E4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491C78[];
void *fn_8003F924(void) {
    return lbl_80491C78;
}

extern s32 lbl_80491C84[];
s32 fn_8003F930(void) {
    return lbl_80491C84[0];
}

extern s32 lbl_80491C88[];
s32 fn_8003F93C(void) {
    return lbl_80491C88[0];
}

extern u16 lbl_80491C8C[];
u16 fn_8003F948(void) {
    return lbl_80491C8C[0];
}

void *fn_8003F954(void) {
    return lbl_80491C78;
}

extern u16 lbl_80491C8E[];
u16 fn_8003F960(void) {
    return lbl_80491C8E[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8003F7F8(void);
extern void fn_8003F8C0(void *);
extern u8 lbl_803C5AA0[];
extern u8 lbl_80491CA0[];
void fn_8003F96C(s32 arg0) {
    fn_802D6A90(lbl_80491C78, fn_8003F7F8, fn_8003F8A0, fn_8003F8C0, arg0, lbl_803C5AA0, lbl_80491CA0);
}

void fn_8003F9C0(void) {
    fn_802D2430();
}

void fn_8003FA80(void) {

}

s32 fn_8003FA84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x530);
}

s32 fn_8003FA8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3B0);
}

s32 fn_8003FAA4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x654);
}

void fn_8003FAAC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x52C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x46C) = arg2;
}

s32 fn_8003FAB8(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x46C);
    return M2C_FIELD(arg0, s32 *, 0x52C);
}

f32 fn_8003FAC8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x3BC), void **, 0x134), f32 *, 0x6C);
}

s32 fn_8003FAE8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x53C);
}

void fn_8003FAF0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x540) = farg0;
}

void fn_8003FAF8(void) {
    M2C_UNK fn_8003F64C(M2C_UNK, M2C_UNK);
    fn_8003F64C(1, 0xFFFF);
}

