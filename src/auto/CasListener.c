/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_803074F0(void);
s32 fn_801B68E8(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801B793C(void) {

}

void fn_801B7940(void) {

}

s32 fn_801B872C(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_801BB33C(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_801BB774(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_801BB930(void) {
    return 0;
}

s32 fn_801BBAB0(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801BF79C(void) {
    fn_803074F0();
}

s32 fn_801C04DC(char *self) {
    return *(s32 *)(self + 0xC);
}

extern void fn_801C5778(void *);
void *fn_801C5720(void *self) {
    fn_801C5778(self);
    return self;
}

extern void fn_802D20E8(void *);
void fn_801C5750(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_801C5E3C(s32 *self, s32 value) {
    *self = value;
}

s32 fn_801C5E44(s32 *self) {
    return *self;
}

s32 fn_801C62C0(s32 *self) {
    return self[2];
}

s32 fn_801C94E8(void) {
    return 1;
}

extern s32 lbl_804945C0;
s32 fn_801C95CC(void) {
    return lbl_804945C0;
}

