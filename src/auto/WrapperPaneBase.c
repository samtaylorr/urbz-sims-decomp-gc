/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800CD09C(void);
void fn_800CCF70(void) {
    fn_800CD09C();
}

void fn_800CD104(void);
void fn_800CED30(void) {
    fn_800CD104();
}

void fn_800CEEC0(void) {

}

void fn_800CEEC4(void) {

}

void fn_800CEEC8(void) {

}

void fn_800CF02C(void) {

}

void fn_800CF648(s32 *self) {
    self[1] = 1;
}

void fn_800CF868(u8 *self, s32 on) {
    u8 *p = self + 0x20;
    if (on) {
        *(u32 *)(p + 0x38) |= 0x20;
    } else {
        *(u32 *)(p + 0x38) &= ~0x20;
    }
}

s32 fn_800CF894(u8 *self) {
    return *(s32 *)(self + 0x20);
}

void fn_8039D8D8(void *);
void fn_800CF89C(u8 *self, s32 arg1) {
    u8 *p = self + 0x20;
    *(s32 *)(p + 0x30) = arg1;
    fn_8039D8D8(p);
    *(u32 *)(self + 0x4) |= 2;
}

s32 fn_800CF8DC(u8 *self) {
    return *(s32 *)(self + 0x50);
}

s32 fn_800CFFE4(s32 *self) {
    return *self;
}

void fn_800CFFEC(void) {

}

