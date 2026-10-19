/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_8001D664(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    return arg1;
}

s32 fn_8001D670(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 fn_8001D678(void) {
    return 1;
}

s32 fn_8001D680(void) {
    return 0;
}

s32 fn_8001D688(void) {
    return 0;
}

void fn_8001D690(void) {

}

void fn_8001E210(void *arg0, s32 arg1) {
    M2C_UNK fn_8001DD7C(void *, void *);
    M2C_UNK fn_802D838C(s32);
    M2C_UNK fn_8039B594(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK);
    extern s32 lbl_8049440C;
    void *temp_r9;

    fn_8039B594(M2C_FIELD(arg0, void **, 0xBC), lbl_8049440C, 0x6F626A74, 0, 0);
    temp_r9 = M2C_FIELD(arg0, void **, 0xBC);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) ((s32) (M2C_FIELD(temp_r9, s32 *, 4) - M2C_FIELD(temp_r9, s32 *, 0)) >> 2);
    fn_802D838C(arg1);
    fn_8001DD7C(M2C_FIELD(arg0, void **, 0xBC), arg0 + 0xAC);
}

void fn_8001E734(void) {
    M2C_UNK fn_8001E6AC(M2C_UNK, M2C_UNK);
    fn_8001E6AC(1, 0xFFFF);
}

