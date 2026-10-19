/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80307CCC(void);
void fn_80306D28(void) {

}

s32 fn_80306F6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

s32 fn_80306F74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60);
}

void fn_80307018(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x8C) = arg1;
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

s32 fn_803079E4(s32 *self) {
    return self[6];
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

f32 fn_80307AC4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x24);
}

s32 fn_80307ACC(s32 arg0) {
    return arg0 + 0x20;
}

s32 fn_80307AD4(char *self) {
    return *(s32 *)(self + 0xC);
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

void fn_80307DF0(void) {

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

s32 fn_803099E8(s32 arg0) {
    return arg0 + 0x80;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8030A738(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
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

