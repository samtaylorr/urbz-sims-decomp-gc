/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80307CCC(void);
s32 fn_80307998(void) {
    return 0;
}

extern s32 lbl_80494EB0;
void fn_80307BBC(void (*cb)(void)) {
    lbl_80494EB0 = cb;
}

extern s32 lbl_80494EB4;
void fn_80307BC4(void (*cb)(void)) {
    lbl_80494EB4 = cb;
}

extern s32 lbl_80494EB8;
void fn_80307BCC(void (*cb)(void)) {
    lbl_80494EB8 = cb;
}

void fn_803081EC(void) {
    fn_80307CCC();
}

void fn_80308518(void);
void fn_80309178(void) {
    fn_80308518();
}

void fn_8030861C(void);
void fn_80309198(void) {
    fn_8030861C();
}

extern s32 lbl_80494EC0;
s32 fn_8030A9B4(void) {
    return lbl_80494EC0;
}

extern s32 lbl_80494EC4;
s32 fn_8030A9BC(void) {
    return lbl_80494EC4;
}

s32 fn_8030A9D0(void) {
    return 0;
}

