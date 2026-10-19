/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8040E9C8[];
extern void fn_802D20E8(void *);
void fn_8010D324(void **self, s32 flags) {
    *self = lbl_8040E9C8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_8040EBA0[];
void fn_8010D784(void **self, s32 flags) {
    *self = lbl_8040EBA0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8010EA58(void) {
    return 1;
}

s32 fn_8010F020(void) {
    return 1;
}

s32 fn_8010F028(void) {
    return 1;
}

s32 fn_8010F2AC(void) {
    return 1;
}

s32 fn_8010F2B4(void) {
    return 1;
}

s32 fn_8010F578(void) {
    return 1;
}

s32 fn_8010F724(s32 *self) {
    return self[2];
}

s32 fn_8010F82C(void) {
    return 1;
}

s32 fn_8010F834(void) {
    return 1;
}

s32 fn_8010FAC4(void) {
    return 1;
}

s32 fn_8010FACC(void) {
    return 1;
}

s32 fn_80111F5C(s32 *self) {
    return self[2];
}

s32 fn_8011747C(s32 *self) {
    return self[2];
}

s32 fn_801175AC(s32 *self) {
    return self[1];
}

s32 fn_8011785C(void) {
    return 0;
}
