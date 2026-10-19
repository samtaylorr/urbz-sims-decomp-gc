/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80494538;
s32 fn_8018EE50(void) {
    return 1;
}

s32 fn_8018F7F8(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 4)) >> 2;
}

void fn_8018F874(void *arg0) {
    extern void *lbl_80494534;
    M2C_FIELD(arg0, void **, 4) = (void *) lbl_80494534;
    lbl_80494534 = arg0;
}

s32 fn_8018FA7C(s32 *self) {
    return self[2];
}

void fn_8018FA84(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

s32 fn_8018FD00(s32 *self) {
    return *self;
}

s32 fn_8018FD18(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_8018FD20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

M2C_UNK *fn_8018FD28(void) {
    extern M2C_UNK lbl_80495CC0;
    return &lbl_80495CC0;
}

void fn_80191460(void) {

}

s32 fn_80192788(void *arg0) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x48);
    return (s32) (temp_r3 + (temp_r3 >> 0x1FU)) >> 1;
}

s32 fn_80192B04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

s32 fn_80192C7C(void) {
    return lbl_80494538;
}
