/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void fn_802D20E8(void *);
void fn_80014DE0(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_80014E08(void) {

}

void fn_80014E0C(void) {

}

void fn_80014F3C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_80014F48(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

f32 fn_8001529C(void) {
    extern f32 lbl_8049570C;
    return lbl_8049570C;
}

void fn_80015404(void) {

}

void fn_800157CC(void) {

}

void fn_800159F0(void) {

}

void fn_80016354(void) {

}

void fn_80016358(void) {

}

void fn_8001635C(void) {

}

void fn_80016C78(void) {

}

void fn_800170FC(void) {

}

void fn_800176DC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}
