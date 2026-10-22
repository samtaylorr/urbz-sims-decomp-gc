/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D0B3C(void);
void fn_80333504(void) {
    fn_802D0B3C();
}

extern u8 lbl_8045B390[];
extern u8 lbl_8041BDA0[];
void *fn_80338000(void *p, s32 size, s32 align);
u8 *fn_8031B7A8(void);
void fn_80335F5C(void *p);
void fn_80335FD8(void *p, s32 n);
u8 *fn_80333524(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *obj;

    fn_80338000(lbl_8045B390, 0x40, 4);
    obj = fn_8031B7A8();
    *(s32 *)(obj + 0x8) = arg3;
    (*(void (**)(u8 *, s32))(*(u8 **)obj + 0x4C))(obj + *(s16 *)(*(u8 **)obj + 0x48), arg1);
    return obj;
}

void fn_8033740C(void);
void fn_803335FC(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_8033361C(void) {
    fn_80337430();
}

void fn_8033363C(void) {
    M2C_UNK fn_80333590(M2C_UNK, M2C_UNK);
    fn_80333590(1, 0xFFFF);
}

