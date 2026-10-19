/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8003FBB4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8003FC04(void) {

}

void fn_80041458(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8004148C(s32 *self) {
    return self[2];
}

s32 fn_80041494(s32 *self) {
    return *self;
}

s32 fn_8004149C(s32 *self) {
    return self[1];
}

void fn_800414A4(s32 *self) {
    self[0] = 1;
}

void fn_800414B0(s32 *self) {
    self[1] = 1;
}

