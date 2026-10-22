/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8033740C(void);
void fn_80325374(void *);
void fn_803356D4(void *self, void *arg) {
    fn_80325374(arg);
}

extern u8 lbl_8045B784[];
extern u8 lbl_8041BF88[];
void fn_80335F5C(void *p);
void fn_80335FD8(void *p, s32 n);
void fn_803356F8(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_8045B784;
            fn_80335F5C(p);
            *(u8 **)(p + 0xA4) = lbl_8041BF88;
            return;
        }
        fn_80335FD8(lbl_8045B784, 2);
    }
}

void fn_80335764(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_80335784(void) {
    fn_80337430();
}

void fn_803357A4(void) {
    fn_803356F8(1, 0xFFFF);
}

