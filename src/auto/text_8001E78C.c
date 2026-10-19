/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8001FC30(void) {
    fn_800A23A4();
}

s32 fn_80021248(void) {
    return 1;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80023A00(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

