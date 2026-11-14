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

void *fn_80338000(void *, s32, s32);
void *fn_8032D344(void *);
void fn_8032D498(void *, void *, s32);
void *fn_80335C1C(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    void *obj;
    void *vt;
    s32 ret;

    obj = fn_8032D344(fn_80338000(lbl_8045B980, 0x28, 4));
    M2C_FIELD(obj, s32 *, 8) = arg3;
    vt = M2C_FIELD(arg1, void **, 0x28);
    ret = M2C_FIELD(vt, s32 (**)(void *), 0x34)((u8 *)arg1 + M2C_FIELD(vt, s16 *, 0x30));
    fn_8032D498(obj, arg1, M2C_FIELD(arg0, s32 *, 0xA8));
    vt = M2C_FIELD(arg1, void **, 0x28);
    M2C_FIELD(vt, void (**)(void *, s32, s32), 0x2C)((u8 *)arg1 + M2C_FIELD(vt, s16 *, 0x28), ret + arg2, 0);
    return obj;
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

