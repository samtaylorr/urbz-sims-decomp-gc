/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8008CD40(void) {
    fn_803073C4();
}

extern s32 lbl_804941F0;
void fn_8008DCCC(void (*cb)(void)) {
    lbl_804941F0 = cb;
}

s32 fn_8008F854(void) {
    return 1;
}

s32 fn_8008F85C(void) {
    return 0;
}

s32 fn_8008F864(void) {
    return 1;
}

s32 fn_80093598(void) {
    return 0;
}

void fn_8009415C(void) {
    fn_80091BE8();
}

s32 fn_80095A44(void) {
    return 1;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80097B40(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

