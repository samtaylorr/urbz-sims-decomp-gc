/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

unsigned long fn_8024FF70(void);
void fn_8024FF78(unsigned long);
void fn_802500FC(void) {
    fn_8024FF78(fn_8024FF70() & ~0x200);
}

extern s32 lbl_80495E08;
s32 fn_8025186C(void) {
    return lbl_80495E08;
}

extern s32 lbl_804949A8;
s32 fn_80251874(void) {
    return lbl_804949A8;
}

s32 fn_8026C4FC(void) {
    return 0;
}

s32 fn_80277404(void) {
    return 0;
}

s32 fn_8027740C(void) {
    return 0;
}

s32 fn_80277414(void) {
    return 0;
}

