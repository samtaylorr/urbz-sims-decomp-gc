/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_80435398[];
extern void fn_80193050(void *);
extern void fn_803AA364(void *, s32);
extern void *fn_80193260(void *, s32);
extern void fn_801961D4(void *);
extern s32 fn_80194D94(void *);
void fn_801978E4(s32 arg0, s32 arg1);

void fn_80197938(void) {
    fn_801978E4(1, 0xFFFF);
}

void fn_80197964(void) {
    fn_801978E4(0, 0xFFFF);
}

