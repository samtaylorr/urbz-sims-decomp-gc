/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8036EFA4(void);
void fn_8035BED8(void) {

}

void fn_8035DB44(void) {
    fn_8036EFA4();
}

extern void fn_802D20E8(void *);
void fn_8035DFB8(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8035EC18(void);
void fn_8035EA70(void) {
    fn_8035EC18();
}

extern u8 lbl_8046DF78[];
void fn_8034F440(u8 *arg);
void fn_8035F07C(void) {
    fn_8034F440(lbl_8046DF78);
}

void fn_8034F470(u8 *arg);
void fn_8035F0A4(void) {
    fn_8034F470(lbl_8046DF78);
}

void fn_8035F144(void) {

}

void fn_8035F148(void) {

}

s32 fn_8035F14C(void) {
    return 1;
}

void fn_8035F30C(void) {

}

