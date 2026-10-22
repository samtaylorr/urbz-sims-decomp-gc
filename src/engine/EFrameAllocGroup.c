/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80312E74(s32 arg0) {
    M2C_UNK fn_8036391C(s32);
    fn_8036391C(arg0 + 4);
    fn_8036391C(arg0 + 0x18);
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
            i = 1;
            M2C_FIELD(p, void **, 0) = lbl_8041B240;
            do {
                fn_80363734(q, 0x1000);
                q += 0x14;
            } while (i-- != 0);
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
    i = 1;
    M2C_FIELD(arg0, void **, 0) = lbl_8041B240;
    do {
        fn_80363734(q, 0x1000);
        q += 0x14;
    } while (i-- != 0);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return arg0;
}

void fn_80313008(void *arg0) {
    fn_8036375C((u8 *)arg0 + M2C_FIELD(arg0, s32 *, 0x2C) * 0x14 + 4);
}

void fn_80313038(void) {
    fn_80312EE8(1, 0xFFFF);
}

void fn_80313064(void) {
    fn_80312EE8(0, 0xFFFF);
}
