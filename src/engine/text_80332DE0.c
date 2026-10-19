/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80332E6C(s32 arg0, s32 arg1);

void fn_802D0C44(void);
void fn_80332DE0(void) {
    fn_802D0C44();
}

extern u8 lbl_8045B0F0[];
extern u8 lbl_8041BBF8[];
void *fn_80338000(void *heap, s32 size, s32 align);
u8 *fn_803700B0(void *p);
void fn_80335F5C(void *p);
void fn_80335FD8(void *p, s32 n);
u8 *fn_80332E00(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *obj;

    obj = fn_803700B0(fn_80338000(lbl_8045B0F0, 0x9C, 4));
    *(s32 *)(obj + 0x8) = arg3;
    (*(void (**)(u8 *, s32))(*(u8 **)obj + 0x4C))(obj + *(s16 *)(*(u8 **)obj + 0x48), arg1);
    return obj;
}

void fn_80332E6C(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_80335F5C(lbl_8045B0F0);
            *(u8 **)(lbl_8045B0F0 + 0xA4) = lbl_8041BBF8;
            return;
        }
        fn_80335FD8(lbl_8045B0F0, 2);
    }
}

void fn_8033740C(void);
void fn_80332ED8(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_80332EF8(void) {
    fn_80337430();
}

void fn_80332F18(void) {
    fn_80332E6C(1, 0xFFFF);
}

void fn_80332F44(void) {
    fn_80332E6C(0, 0xFFFF);
}

