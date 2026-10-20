/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void *fn_802FFD98(void *arg0) {
    M2C_UNK fn_803BAD8C();
    fn_803BAD8C();
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    return arg0;
}

void fn_802FFE1C(u8 *self) {
    extern void fn_80300A40(u8 *);
    s32 i;

    for (i = 0; i < *(s32 *)(self + 4); i++) {
        fn_80300A40(*(u8 **)self + i * 0x6C);
    }
}

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

void fn_803042D4(s32 arg0, s32 arg1) {
    M2C_UNK fn_802E2288(s32, s32, s32, s32);
    fn_802E2288(arg1, arg0, arg0 + 0xC, arg0 + 0x18);
}

void fn_8030582C(s32 arg0, s32 arg1) {
    s32 var_ctr;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        var_ctr = 0xA;
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}

s32 fn_80305908(s32 arg0) {
    return arg0 + 0x48;
}

void fn_8030599C(void) {
    fn_8030582C(1, 0xFFFF);
}

