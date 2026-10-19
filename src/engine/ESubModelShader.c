/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_802FFF68(void) {
    return 0;
}

void fn_802FFF70(void) {

}

void fn_8030089C(void) {

}

void fn_803008A0(void) {

}

extern u8 lbl_8045B82C[];
void fn_80338000(u8 *arg);
void fn_8030091C(void) {
    fn_80338000(lbl_8045B82C);
}

void fn_80338184(u8 *arg);
void fn_80300944(void) {
    fn_80338184(lbl_8045B82C);
}

void fn_80302228(void) {

}

void fn_8030222C(void) {

}

void fn_80302230(void) {

}

s32 fn_8030417C(void *arg0) {
    void *temp_r11;

    temp_r11 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0x20);
    return ((u32) (M2C_FIELD(temp_r11, s32 *, 0x74) | M2C_FIELD(temp_r11, s32 *, 0xB4)) >> 5U) & 1;
}

s32 fn_80305908(s32 arg0) {
    return arg0 + 0x48;
}

