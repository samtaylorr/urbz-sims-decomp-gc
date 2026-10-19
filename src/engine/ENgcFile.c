/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_802DFEEC(void) {
    return 0;
}

s32 fn_802DFF50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 fn_802DFF58(void) {
    return 1;
}

s32 fn_802DFF60(void) {
    return 0;
}

s32 fn_802DFF68(s32 arg0) {
    return arg0 + 0x2C;
}

extern u8 lbl_80419848[];
extern void fn_802D20E8(void *);
void fn_802DFF84(void **self, s32 flags) {
    *self = lbl_80419848;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802E010C(s32 arg0) {
    s32 *fn_802D1FC8(M2C_UNK);
    M2C_UNK fn_802E0208(s32, s32 *);
    s32 *temp_r3;

    temp_r3 = fn_802D1FC8(0xC);
    *temp_r3 = 2;
    fn_802E0208(arg0, temp_r3);
}

void fn_802E01B8(void) {

}

void fn_802D8F90();
void fn_802E03E4(char *self) {
    extern void fn_802D8F90(void *);
    fn_802D8F90(self + 8);
}

void fn_802E0408(void) {
    M2C_UNK fn_802E0390(M2C_UNK, M2C_UNK);
    fn_802E0390(1, 0xFFFF);
}

