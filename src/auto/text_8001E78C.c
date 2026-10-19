/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8001FC30(void) {
    fn_800A23A4();
}

void fn_8001FC50(void) {

}

void fn_8001FC54(void) {

}

void fn_80021104(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
}

s32 fn_80021248(void) {
    return 1;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80023A00(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_80023A74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 fn_80023A7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}

s32 fn_80023A84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x7C);
}

void fn_80023B38(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

