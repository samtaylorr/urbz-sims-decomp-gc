/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8000CA20(s32 arg0, s32 arg1) {
    extern s32 lbl_8049664C;
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        lbl_8049664C = 1;
    }
}
