/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D0C44(void);
void fn_803351E8(void) {
    fn_802D0C44();
}

extern u8 lbl_8045B58C[];
extern u8 lbl_8041BEB0[];
void *fn_8031FEAC(void);
void fn_80320014(s32 a, s32 b);
void fn_80338000(void *p, s32 a, s32 b);
void fn_80335F5C(void *p);
void fn_80335FD8(void *p, s32 n);

void *fn_80335208(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *p;

    fn_80338000(lbl_8045B58C, 0x24, 4);
    p = fn_8031FEAC();
    *(s32 *)((u8 *)p + 8) = arg3;
    fn_80320014(arg1, arg2);
    return p;
}

void fn_80335268(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_8045B58C;
            fn_80335F5C(p);
            *(u8 **)(p + 0xA4) = lbl_8041BEB0;
            return;
        }
        fn_80335FD8(lbl_8045B58C, 2);
    }
}

void fn_8033740C(void);
void fn_803352D4(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_803352F4(void) {
    fn_80337430();
}

void fn_80335314(void) {
    fn_80335268(1, 0xFFFF);
}

void fn_80335340(void) {
    fn_80335268(0, 0xFFFF);
}

