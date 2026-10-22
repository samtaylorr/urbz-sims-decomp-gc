/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80335F5C(void *);
void fn_80335FD8(void *, s32);
void fn_80337F84(void *);
extern u8 lbl_8041C060[];
extern u8 lbl_8045B980[];

void fn_802D0C44(void);
void fn_80335BFC(void) {
    fn_802D0C44();
}

void fn_80335DD0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            void *p = lbl_8045B980;
            fn_80335F5C(p);
            M2C_FIELD(p, s32 *, 0xA8) = 0;
            M2C_FIELD(p, void **, 0xA4) = lbl_8041C060;
        } else {
            fn_80335FD8(lbl_8045B980, 2);
        }
    }
}

void fn_8033740C(void);
void fn_80335E44(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_80335E64(void) {
    fn_80337430();
}

void *fn_80335E84(void *arg0) {
    fn_80335F5C(arg0);
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, void **, 0xA4) = lbl_8041C060;
    return arg0;
}

s32 fn_80335EC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA8);
}

void fn_80335ED0(void *arg0, s32 arg1) {
    fn_80337F84(arg0);
    M2C_FIELD(arg0, s32 *, 0xA8) = arg1;
}

void fn_80335F04(void) {
    fn_80335DD0(1, 0xFFFF);
}

void fn_80335F30(void) {
    fn_80335DD0(0, 0xFFFF);
}

