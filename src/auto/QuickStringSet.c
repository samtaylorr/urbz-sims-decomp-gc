/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80495A94;
extern s32 lbl_804943C0;
void fn_800F6690(void (*cb)(void)) {
    lbl_804943C0 = cb;
}

s32 fn_800F6698(void) {
    return lbl_80495A94;
}

void fn_800F66A0(void (*cb)(void)) {
    lbl_80495A94 = cb;
}

s32 fn_800F68B4(s32 *self) {
    return self[1];
}

s32 fn_800F69E8(s32 *self) {
    return *self;
}

s32 fn_800F69F0(s32 *self) {
    return *self;
}

s32 fn_800F6FEC(s32 *self) {
    return self[1];
}

extern u8 lbl_8040D2A8[];
extern void fn_802D20E8(void *);
void fn_800F78B8(void **self, s32 flags) {
    *self = lbl_8040D2A8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800F7A20(void) {
    return 0;
}

void fn_800F68E0(void *);
void fn_800F7A2C(void *self, void *arg) {
    fn_800F68E0(arg);
}

s32 fn_800F7E98(void) {
    return 0;
}

s32 fn_800F7EA0(void) {
    return 0;
}

s32 fn_800F7EA8(void) {
    return 0;
}

s32 fn_800F7F4C(void) {
    return 0;
}

s32 fn_800F7F54(void) {
    return 0;
}

s32 fn_800F7F5C(void) {
    return 0;
}

s32 fn_800F7F64(void) {
    return 0;
}

s32 fn_800F7F6C(void) {
    return 1;
}

s32 fn_800F7F74(void) {
    return 0;
}

s32 fn_800F873C(void) {
    return 0;
}

extern s32 lbl_804943C8;
void fn_800F8820(void (*cb)(void)) {
    lbl_804943C8 = cb;
}

s32 fn_800F8EA4(void) {
    return 0;
}

s32 fn_800F98F4(s32 *self) {
    return self[2];
}

s32 fn_800FB614(s32 *self) {
    return self[1];
}

extern u8 lbl_8040D458[];
void fn_800FB77C(void **self, s32 flags) {
    *self = lbl_8040D458;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800FB8A4(void) {
    return 0;
}

extern u8 lbl_8040D5A0[];
void fn_800FC178(void **self, s32 flags) {
    *self = lbl_8040D5A0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern s32 lbl_804944B0;
s32 fn_800FC378(void) {
    return lbl_804944B0;
}

s32 fn_800FDF38(s32 *self) {
    return self[1];
}

s32 fn_800FDF40(s32 *self) {
    return self[2];
}

