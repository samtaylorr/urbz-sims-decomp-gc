/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D0B3C(void);
void fn_803357FC(void) {
    fn_802D0B3C();
}

extern u8 lbl_8045B82C[];
void fn_80338000(void *p, s32 size, s32 align);
u8 *fn_80329304(void);
void fn_802C5BBC(s32 arg0, u8 *obj);
u8 *fn_8033581C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *obj;

    fn_80338000(lbl_8045B82C, 0x1A4, 4);
    obj = fn_80329304();
    *(s32 *)(obj + 0x8) = arg3;
    if ((*(s32 (**)(u8 *, s32))(*(u8 **)obj + 0x8C))(obj + *(s16 *)(*(u8 **)obj + 0x88), arg1) == 0) {
        fn_802C5BBC(arg1, obj);
    }
    return obj;
}

void fn_8033740C(void);
void fn_80335908(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_80335928(void) {
    fn_80337430();
}

void fn_80335948(void) {
    M2C_UNK fn_8033589C(M2C_UNK, M2C_UNK);
    fn_8033589C(1, 0xFFFF);
}

