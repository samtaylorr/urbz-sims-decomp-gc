/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80307CCC(void);
void fn_80306D28(void) {

}

void fn_80306F64(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x88) = farg0;
}

s32 fn_80306F6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

s32 fn_80306F74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60);
}

s32 fn_80306F7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C);
}

f32 fn_80306F84(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x7C);
}

void fn_80306FC8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
}

void fn_80307018(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x8C) = arg1;
}

void fn_80307748(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) (M2C_FIELD(arg1, s32 *, 0x18) | 0x20);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | 0x40);
}

void fn_8030793C(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 4);
}

void fn_80307994(void) {

}

s32 fn_80307998(void) {
    return 0;
}

void fn_803079A0(void) {

}

void fn_803079A4(void) {

}

void fn_803079A8(void) {

}

s32 fn_803079D4(s32 arg0) {
    return arg0 + 0x14;
}

void fn_803079DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

s32 fn_803079E4(s32 *self) {
    return self[6];
}

s32 fn_80307A6C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 1U) & 1;
}

s32 fn_80307A78(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 2U) & 1;
}

s32 fn_80307A84(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 3U) & 1;
}

s32 fn_80307A90(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 4U) & 1;
}

s32 fn_80307A9C(s32 arg0) {
    return arg0 + 0x2C;
}

s32 fn_80307AA4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

s32 fn_80307AAC(s32 *self) {
    return self[7];
}

f32 fn_80307AB4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x28);
}

f32 fn_80307ABC(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x20);
}

f32 fn_80307AC4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x24);
}

s32 fn_80307ACC(s32 arg0) {
    return arg0 + 0x20;
}

s32 fn_80307AD4(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_80307ADC(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0xC) = arg0;
}

s32 fn_80307BB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
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

extern s32 lbl_80494EBC;
void fn_80307BD4(void (*cb)(void)) {
    lbl_80494EBC = cb;
}

void fn_80307BDC(void) {
    extern s32 lbl_80494EB0;
    lbl_80494EB0 = 0;
}

void fn_80307BE8(void) {
    extern s32 lbl_80494EB4;
    lbl_80494EB4 = 0;
}

void fn_80307BF4(void) {
    extern s32 lbl_80494EB8;
    lbl_80494EB8 = 0;
}

void fn_80307C00(void) {
    extern s32 lbl_80494EBC;
    lbl_80494EBC = 0;
}

void fn_80307DF0(void) {

}

void fn_803081EC(void) {
    fn_80307CCC();
}

f32 fn_803082B4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xA8);
}

void fn_803082BC(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xA8) = farg0;
}

s32 fn_803082C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}

void fn_80308518(void);
void fn_80309178(void) {
    fn_80308518();
}

void fn_8030861C(void);
void fn_80309198(void) {
    fn_8030861C();
}

void fn_80309928(s32 arg0) {
    M2C_UNK fn_80309214(s32);
    fn_80309214(arg0 + 0x9C);
}

void fn_80309970(s32 arg0) {
    M2C_UNK fn_8030935C(s32);
    fn_8030935C(arg0 + 0x9C);
}

s32 fn_803099E8(s32 arg0) {
    return arg0 + 0x80;
}

void fn_803099F0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x8C) = farg0;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8030A738(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8030A8A0(void *arg0, f32 *arg1, f32 *arg2, f32 farg0, f32 farg1) {
    *arg1 = farg0 * M2C_FIELD(arg0, f32 *, 0);
    *arg2 = farg1 * M2C_FIELD(arg0, f32 *, 0x14);
}

extern s32 lbl_80494EC0;
s32 fn_8030A9B4(void) {
    return lbl_80494EC0;
}

extern s32 lbl_80494EC4;
s32 fn_8030A9BC(void) {
    return lbl_80494EC4;
}

void fn_8030A9C4(void) {

}

void fn_8030A9C8(void) {

}

void fn_8030A9CC(void) {

}

s32 fn_8030A9D0(void) {
    return 0;
}

