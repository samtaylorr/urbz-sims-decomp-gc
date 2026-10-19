/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_801181F0(void) {

}

void fn_801181F4(void) {

}

extern s32 lbl_80495B6C;
extern void fn_800F1A60(s32, s32);
void fn_80118300(void) {
    fn_800F1A60((s32)&lbl_80495B6C, 2);
}

s32 fn_8011BE28(void) {
    return 0x584D544F;
}

void fn_8011CCA8(void ***arg0, s32 arg1) {
    M2C_FIELD(**arg0, s32 *, 8) = arg1;
}

void fn_8011CCB8(void ***arg0, s32 arg1) {
    M2C_FIELD(**arg0, s32 *, 0xC) = arg1;
}

void fn_8011CCC8(void ***arg0, s32 arg1) {
    M2C_FIELD(**arg0, s32 *, 0x10) = arg1;
}

void fn_8011CD64(void) {

}

s32 fn_8011D7D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 fn_8011DCBC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80122288(void) {
    return 7;
}

s32 fn_8012242C(s32 *self) {
    return self[2];
}

void fn_80122434(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

