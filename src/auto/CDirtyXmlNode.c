/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800A9720(void);
void fn_800BF5E0(void) {

}

void fn_800BF7DC(void) {

}

s32 fn_800BF7E0(void) {
    return 0;
}

void fn_800BF7E8(void) {

}

s32 fn_800BF7EC(void) {
    return 0;
}

s32 fn_800BF7F4(void) {
    return 0;
}

void fn_800BFBCC(void) {

}

void fn_800BFBD0(void) {

}

s32 fn_800C0604(void) {
    return 0;
}

void fn_800C060C(void) {

}

void fn_800C0610(void) {

}

void fn_800C0614(void) {

}

void fn_800C2950(void) {
    fn_800A9720();
}

void fn_800A9920(void);
void fn_800C2970(void) {
    fn_800A9920();
}

extern s32 lbl_80494360;
void fn_800C2E1C(void (*cb)(void)) {
    lbl_80494360 = cb;
}

extern s32 lbl_80495A24;
void fn_800C3820(void (*cb)(void)) {
    lbl_80495A24 = cb;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_800C3AC8(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D22C8(void);
void fn_800C3AFC(void) {
    fn_802D22C8();
}

