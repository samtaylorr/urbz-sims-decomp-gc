/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80312DD4(void *arg0, s32 arg1) {
    extern s32 lbl_80494DBC;
    extern u8 lbl_80419328[];
    extern u8 lbl_8041B240[];
    M2C_UNK fn_802C7C90(void);
    M2C_UNK fn_8036391C(s32);
    M2C_UNK fn_802CB8D4(void *);
    M2C_UNK fn_803B9594(void *);
    M2C_UNK fn_802D20E8(void *);
    s32 flag = lbl_80494DBC;
    u8 *begin;
    u8 *p;
    M2C_FIELD(arg0, void **, 0) = lbl_8041B240;
    if (flag == 0) {
        fn_802C7C90();
    }
    begin = (u8 *)arg0 + 4;
    if (begin != NULL) {
        p = (u8 *)arg0 + 0x2C;
        while (begin != p) {
            p -= 0x14;
            fn_8036391C((s32)p);
            fn_802CB8D4(p);
        }
    }
    M2C_FIELD(arg0, void **, 0) = lbl_80419328;
    fn_803B9594(arg0);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_80312E74(s32 arg0) {
    M2C_UNK fn_8036391C(s32);
    fn_8036391C(arg0 + 4);
    fn_8036391C(arg0 + 0x18);
}

extern s32 lbl_80494DBC;
void fn_802C7C90(void);
void fn_8036391C(void *);
void fn_802CB8D4(void *);
void fn_803B9594(void *);
void fn_802D20E8(void *);
void fn_80312EAC(void *arg0) {
    s32 v = M2C_FIELD(arg0, s32 *, 0x2C) == 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = v;
    fn_8036391C((u8 *)arg0 + (v * 0x14 + 4));
}

void fn_802C7B28(void *, s32);
void fn_80363734(void *, s32);
void fn_8036375C(void *);
void fn_80312DD4(void *, s32);
extern u8 lbl_80419328[];
extern u8 lbl_8041B240[];
extern u8 lbl_80459FB0[];

void fn_80312EE8(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_80459FB0;
            u8 *q;
            s32 i;
            M2C_FIELD(p, void **, 0) = lbl_80419328;
            fn_802C7B28(p, 2);
            q = p + 4;
            M2C_FIELD(p, void **, 0) = lbl_8041B240;
            for (i = 1; i != -1; i--) {
                fn_80363734(q, 0x1000);
                q += 0x14;
            }
            M2C_FIELD(p, s32 *, 0x2C) = 0;
        } else {
            fn_80312DD4(lbl_80459FB0, 2);
        }
    }
}

void *fn_80312F90(void *arg0) {
    u8 *q;
    s32 i;
    M2C_FIELD(arg0, void **, 0) = lbl_80419328;
    fn_802C7B28(arg0, 2);
    q = (u8 *)arg0 + 4;
    M2C_FIELD(arg0, void **, 0) = lbl_8041B240;
    for (i = 1; i != -1; i--) {
        fn_80363734(q, 0x1000);
        q += 0x14;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return arg0;
}

void fn_80313008(void *arg0) {
    fn_8036375C((u8 *)arg0 + (M2C_FIELD(arg0, s32 *, 0x2C) * 0x14 + 4));
}

void fn_80313038(void) {
    fn_80312EE8(1, 0xFFFF);
}

void fn_80313064(void) {
    fn_80312EE8(0, 0xFFFF);
}
