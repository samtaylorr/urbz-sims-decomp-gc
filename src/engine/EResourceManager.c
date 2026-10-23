/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802C52EC(void);
void fn_80336E04(void) {

}

void fn_80337480(s32 arg0, s32 arg1) {
    M2C_UNK fn_803370B8(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 fn_80337F14(s32);
    fn_803370B8(arg0, fn_80337F14(arg1), 0, 0, 0);
}

void fn_80337F14(void) {
    fn_802C52EC();
}

s32 fn_80337F34(void) {
    return 0;
}

void fn_80337FDC(s32 arg0) {
    M2C_UNK fn_8033983C(s32);
    fn_8033983C(arg0 + 0x6C);
}

s32 fn_8033891C(s32 *self) {
    return self[1];
}

s32 fn_80338924(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) == 0;
}

void fn_80338934(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_80338940(void) {

}

void fn_80338944(void) {

}

s32 fn_80338948(s32 *self) {
    return self[1];
}

s32 fn_80338950(s32 *self) {
    return self[2];
}

s32 fn_80338958(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_80338960(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80338968(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C);
}

void fn_803365B8(void);
void fn_80338970(void) {
    fn_803365B8();
}

void fn_80338C58(void) {
    void fn_80338C04(s32, s32);
    fn_80338C04(1, 0xFFFF);
}

