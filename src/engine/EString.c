/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_802D32A0(void) {
    return 0;
}

s32 fn_802D38E4(s32 *self) {
    return *self;
}

void fn_802D39E4(M2C_UNK **arg0) {
    extern M2C_UNK lbl_80494DD0;
    *arg0 = &lbl_80494DD0;
}

void fn_802D3D24(s32 *arg0) {
    M2C_UNK fn_80248808(s32);
    fn_80248808(*arg0);
}

void fn_802D4874(s32 *arg0) {
    M2C_UNK fn_802DF4B8(s32, s32);
    s32 temp_r3;

    temp_r3 = *arg0;
    fn_802DF4B8(temp_r3, temp_r3);
}

void fn_802D4F24(f64 farg0) {
    M2C_UNK fn_802D4598(f32);
    fn_802D4598((f32) farg0);
}

void fn_802D51DC(f64 farg0) {
    M2C_UNK fn_802D62F0(f32);
    fn_802D62F0((f32) farg0);
}

void fn_802D5238(M2C_UNK **arg0) {
    extern M2C_UNK lbl_80494DD4;
    *arg0 = &lbl_80494DD4;
}

extern u8 lbl_803FD294[];
void fn_802D5244(M2C_UNK **arg0) {
    *arg0 = &lbl_803FD294;
}

void fn_802D58E4(s32 *arg0) {
    M2C_UNK fn_802D5200(s32);
    fn_802D5200(*arg0);
}

extern u8 lbl_80419540[];
extern void fn_802D20E8(void *);
void fn_802D6A28(void **self, s32 flags) {
    *self = lbl_80419540;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_802D6EF8(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x18) * M2C_FIELD(arg0, s16 *, 0x1C)) + 0xE3;
}

