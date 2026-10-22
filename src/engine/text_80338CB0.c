/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D0C44(void);
void fn_80338CB0(void) {
    fn_802D0C44();
}

extern u8 lbl_8045BA40[];
extern u8 lbl_8041C0F0[];
u8 *fn_8032E230(void);
void fn_80338000(void *p, s32 a, s32 b);
void fn_80335F5C(void *p);
void fn_80335FD8(void *p, s32 n);

u8 *fn_80338CD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *obj;

    fn_80338000(lbl_8045BA40, 0x78, 4);
    obj = fn_8032E230();
    *(s32 *)(obj + 0x8) = arg3;
    (*(void (**)(u8 *, s32))(*(u8 **)obj + 0x4C))(obj + *(s16 *)(*(u8 **)obj + 0x48), arg1);
    return obj;
}

void fn_80338D3C(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_8045BA40;
            fn_80335F5C(p);
            *(u8 **)(p + 0xA4) = lbl_8041C0F0;
            return;
        }
        fn_80335FD8(lbl_8045BA40, 2);
    }
}

void fn_8033740C(void);
void fn_80338DA8(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_80338DC8(void) {
    fn_80337430();
}

void fn_80338DE8(void) {
    fn_80338D3C(1, 0xFFFF);
}

void fn_80338E14(void) {
    fn_80338D3C(0, 0xFFFF);
}

