/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80495D10;
extern void fn_800F1A60(s32, s32);
void fn_80197AC8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
}

void fn_8019882C(void) {
    fn_800F1A60((s32)&lbl_80495D10, 2);
}

void fn_801991B4(void) {

}

void fn_801991B8(void) {

}

void fn_80199EB8(s32 *self) {
    self[0] = 1;
}

void fn_80199FF8(s32 arg0, s32 arg1);

void fn_8019A04C(void) {
    fn_80199FF8(1, 0xFFFF);
}

extern u8 lbl_804353F4[];
void fn_8019A078(void) {
    fn_80199FF8(0, 0xFFFF);
}

