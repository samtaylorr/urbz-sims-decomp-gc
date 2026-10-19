/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802A1E68(void);
void fn_80278618(void) {
    fn_802A1E68();
}

s32 fn_80278974(void) {
    return 1;
}

void fn_80279B04(void);
void fn_80279D50(void) {
    fn_80279B04();
}

void fn_80279D00(void);
void fn_80279D70(void) {
    fn_80279D00();
}

extern s32 lbl_80496100;
void fn_8027A680(void (*cb)(void)) {
    lbl_80496100 = cb;
}

