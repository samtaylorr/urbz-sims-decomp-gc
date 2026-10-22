/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8030DA64(void);
s32 fn_8030CC3C(void) {
    M2C_UNK fn_8030FAAC(M2C_UNK *);
    M2C_UNK fn_8030FDC4();
    M2C_UNK fn_8036F334();
    extern M2C_UNK lbl_804961F4;
    extern M2C_UNK lbl_804961F8;
    extern M2C_UNK lbl_804961FC;
    fn_8030FAAC(&lbl_804961F4);
    fn_8030FAAC(&lbl_804961F8);
    fn_8030FAAC(&lbl_804961FC);
    fn_8030FDC4();
    fn_8036F334();
    return 0;
}

void fn_8030EF10(void) {
    fn_8030DA64();
}

void fn_8030FA1C(s32 *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        *arg0 |= arg1;
        return;
    }
    *arg0 &= ~arg1;
}

s32 fn_8030FA44(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x84);
}

void fn_8030FAAC(s32 *arg0) {
    M2C_UNK fn_8036F45C(s32);
    M2C_UNK fn_8036FB28(s32, s32);
    extern s32 lbl_80494EE4;
    fn_8036F45C(*arg0);
    fn_8036FB28(lbl_80494EE4, *arg0);
    *arg0 = 0;
}

s32 fn_8030FE2C(void) {
    extern void *lbl_80494EEC;
    return M2C_FIELD(lbl_80494EEC, s32 *, 8);
}

extern void fn_802D20E8(void *);
void fn_803100F0(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_80310118(void *arg0, void *arg1) {
    void *temp_r9;

    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(arg0, void **, 4);
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, void **, 4) = arg1;
    } else {
        M2C_FIELD(arg0, void **, 0) = arg1;
    }
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg0, void **, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
}

void fn_80310154(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
        if ((void **) M2C_FIELD(arg0, void ***, 0) == arg1) {
            M2C_FIELD(arg0, void ***, 0) = (void **) M2C_FIELD(arg1, void ***, 4);
        } else {
            M2C_FIELD(M2C_FIELD(arg1, void **, 0), void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
        }
        if ((void *) M2C_FIELD(arg0, void **, 4) == arg1) {
            M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0);
        } else {
            *M2C_FIELD(arg1, void ***, 4) = M2C_FIELD(arg1, void **, 0);
        }
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
    }
}

void fn_8031020C(void) {
    void fn_803101B8(s32, s32);
    fn_803101B8(1, 0xFFFF);
}

