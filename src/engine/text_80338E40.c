/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D0B3C(void);
void fn_80338E40(void) {
    fn_802D0B3C();
}

extern u8 lbl_8045BAE8[];
extern u8 lbl_8041C138[];
void *fn_80338000(void *p, s32 size, s32 align);
u8 *fn_80331534(void);
u8 *fn_80338E60(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *obj;

    fn_80338000(lbl_8045BAE8, 0x24, 4);
    obj = fn_80331534();
    *(s32 *)(obj + 0x8) = arg3;
    (*(void (**)(u8 *, s32))(*(u8 **)obj + 0x4C))(obj + *(s16 *)(*(u8 **)obj + 0x48), arg1);
    return obj;
}

void fn_80335F5C(void *p);
void fn_80335FD8(void *p, s32 n);
void fn_80338ECC(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_8045BAE8;
            fn_80335F5C(p);
            *(u8 **)(p + 0xA4) = lbl_8041C138;
            return;
        }
        fn_80335FD8(lbl_8045BAE8, 2);
    }
}

void fn_8033740C(void);
void fn_80338F38(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_80338F58(void) {
    fn_80337430();
}

void fn_80338F78(void) {
    fn_80338ECC(1, 0xFFFF);
}

void fn_80338FA4(void) {
    fn_80338ECC(0, 0xFFFF);
}

