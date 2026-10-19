/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80495C94;
extern void fn_800F1A60(s32, s32);
void fn_80176558(void) {
    fn_800F1A60((s32)&lbl_80495C94, 2);
}

M2C_UNK *fn_80177154(void) {
    extern M2C_UNK lbl_80495CA0;
    return &lbl_80495CA0;
}

void fn_80182220(void) {

}

void fn_80185868(void) {

}

void fn_8018586C(void) {

}

void fn_80185870(void) {

}

s32 fn_80185874(void) {
    return 0;
}

void fn_8018587C(void) {

}

void fn_80185880(void) {

}

void fn_80185884(void) {

}

void fn_80185DB8(void) {

}

void fn_80185E00(void) {

}

void fn_80185E04(void) {

}

u8 *fn_80185E9C(u8 *self) {
    return self + 8;
}

s16 fn_80185EA4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 8);
}

s32 fn_80185F00(s32 arg0) {
    return arg0 + 0x4C0;
}

s32 fn_80185F08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4BC);
}

u16 fn_80185F10(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x4E4);
}

s16 fn_80186020(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x9C);
}

s32 fn_80186030(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4D0);
}

