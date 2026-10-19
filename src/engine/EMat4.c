/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D24E8(void);
extern void *fn_802D0C44(void *);
extern void fn_802D1A00(void *, void *);
extern void fn_802C7DD0(void *);
void fn_802C7A84(void) {

}

void *fn_802C7D1C(void *self) {
    fn_802C7DD0(self);
    return self;
}

void fn_802C96D4(void) {

}

void fn_802CB508(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

void fn_802CB544(void) {

}

s32 fn_802CB548(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

s32 fn_802CB550(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

void fn_802CBB94(void) {

}

void fn_802CDB1C(void *arg0) {
    fn_802D1A00(fn_802D0C44(arg0), arg0);
}

s32 fn_802CE9C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10A8);
}

s32 fn_802CE9D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1098);
}

extern void *fn_802D0AB8(void *);
void fn_802CEE44(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802CF2BC(void *arg0) {
    fn_802D1A00(fn_802D0C44(arg0), arg0);
}

s32 fn_802D0334(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1024);
}

extern void *fn_802D0AB8(void *);
void fn_802D0894(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_802D0F94(void) {
    return 0;
}

void fn_802D0F9C(void) {

}

s32 fn_802D0FFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x52C);
}

s32 fn_802D118C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x530);
}

s32 fn_802D1194(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x534);
}

s32 fn_802D119C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x538);
}

void fn_802D11A4(void) {

}

s32 fn_802D12C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x528);
}

void fn_802D1F94(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D20E8(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D211C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D21E0(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D24C8(void) {
    fn_802D24E8();
}
