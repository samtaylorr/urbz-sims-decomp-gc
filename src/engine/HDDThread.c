/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80494F54;
void fn_803321CC(void) {
    extern s32 lbl_80494F54;
    lbl_80494F54 = 1;
}

void fn_803321D8(void) {
    extern s32 lbl_80494F54;
    lbl_80494F54 = 0;
}

s32 fn_803321E4(void) {
    return lbl_80494F54;
}

s32 fn_803326F0(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 4) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0) != 0)) {
        return M2C_FIELD(arg0, s32 *, 0x10);
    }
    return 0;
}

s32 fn_80332824(s32 *self) {
    return *self;
}

s32 fn_8033282C(s32 *self) {
    return self[2];
}

s32 fn_80332834(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_803328F0(void) {

}

void fn_80332960(void *arg0) {
    M2C_UNK fn_803329A0();
    fn_803329A0();
    M2C_FIELD(arg0, s32 *, 0x5C0) = 1;
}

void fn_80332994(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x5C4) = 1;
}

void fn_803329A0(void *arg0) {
    fn_803321CC();
    M2C_FIELD(arg0, s32 *, 0x5C4) = 0;
}

void fn_80332A40(void) {

}

void fn_80332A44(void) {

}

void fn_80332D88(void) {
    M2C_UNK fn_80332D34(M2C_UNK, M2C_UNK);
    fn_80332D34(1, 0xFFFF);
}

