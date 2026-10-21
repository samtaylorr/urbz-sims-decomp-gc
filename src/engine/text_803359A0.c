/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8033740C(void);
void fn_80335B18(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_80335B38(void) {
    fn_80337430();
}

void fn_80335F5C(void *);
extern u8 lbl_8041C018[];
void *fn_80335B58(void *arg0) {
    fn_80335F5C(arg0);
    M2C_FIELD(arg0, s32 *, 0x68) = 1;
    M2C_FIELD(arg0, void **, 0xA4) = lbl_8041C018;
    return arg0;
}

void fn_80335B9C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xA8) = arg1;
}

void fn_80335BA4(void) {
    M2C_UNK fn_80335AA4(M2C_UNK, M2C_UNK);
    fn_80335AA4(1, 0xFFFF);
}

