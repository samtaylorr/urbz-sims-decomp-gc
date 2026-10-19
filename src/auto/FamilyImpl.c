/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_8010A3E8(void) {
    return 0;
}

s32 fn_8010A7EC(void) {
    return 0;
}

extern u8 lbl_8040E770[];
extern void fn_802D20E8(void *);
void fn_8010B568(void **self, s32 flags) {
    *self = lbl_8040E770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8010BD50(void) {
    return 0;
}

s32 fn_8010C040(s32 *self) {
    return self[2];
}

s32 fn_8010C13C(void) {
    return 0;
}

s32 fn_8010C144(void) {
    return 0;
}

s32 fn_8010C14C(void) {
    return 0;
}

s32 fn_8010C154(void) {
    return 0;
}

s32 fn_8010C580(void) {
    return 0;
}

s32 fn_8010C5F8(void) {
    return 1;
}

s32 fn_8010C670(void) {
    return 0;
}

s32 fn_8010C678(void) {
    return 0;
}

s32 fn_8010C680(void) {
    return 0;
}

s32 fn_8010C688(void) {
    return 0;
}

s32 fn_8010D220(void) {
    return 0;
}

extern s32 lbl_80494418;
void fn_8010D22C(void (*cb)(void)) {
    lbl_80494418 = cb;
}

extern s32 lbl_8049441C;
void fn_8010D234(void (*cb)(void)) {
    lbl_8049441C = cb;
}

