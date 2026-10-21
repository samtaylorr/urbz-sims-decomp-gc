/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80335F5C(void *);
void fn_80335FD8(void *, s32);
extern u8 lbl_8041BC40[];
extern u8 lbl_8045B198[];

void fn_8033740C(void);
M2C_UNK fn_80333068(M2C_UNK arg0, M2C_UNK arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_80335F5C(lbl_8045B198);
            M2C_FIELD(lbl_8045B198, s32 *, 0x68) = 1;
            M2C_FIELD(lbl_8045B198, void **, 0xA4) = lbl_8041BC40;
        } else {
            fn_80335FD8(lbl_8045B198, 2);
        }
    }
}

void fn_803330DC(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_803330FC(void) {
    fn_80337430();
}

void *fn_8033311C(void *arg0) {
    fn_80335F5C(arg0);
    M2C_FIELD(arg0, s32 *, 0x68) = 1;
    M2C_FIELD(arg0, void **, 0xA4) = lbl_8041BC40;
    return arg0;
}

void fn_80333160(void) {
    M2C_UNK fn_80333068(M2C_UNK, M2C_UNK);
    fn_80333068(1, 0xFFFF);
}

void fn_8033318C(void) {
    fn_80333068(0, 0xFFFF);
}

