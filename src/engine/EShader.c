/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    s32 x;
    s32 y;
} WrapperPanePoint;
typedef struct {
    u8 pad0[0x1C];
    WrapperPanePoint pos;
    WrapperPanePoint size;
    u8 pad2C[0x40 - 0x2C];
    s32 unk40[1];
} WrapperPaneBase;


void fn_802FFB78(void) {

}

void fn_802FFC3C(void) {

}

s32 fn_802FFC40(s32 arg0) {
    return arg0 + 0x10;
}

void fn_802FFC48(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | arg1);
}

void fn_802FFC58(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & ~arg1);
}

s32 fn_802FFC80(s32 *self) {
    return self[1];
}

s32 fn_802FFC9C(WrapperPaneBase *self, s32 i) {
    return self->unk40[i];
}

void fn_802FFCDC(void) {

}

void fn_802FFCE0(void) {

}

s32 fn_802FFCFC(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 4) >> 3U) & 1;
}

s32 fn_802FFD08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xE8);
}

void fn_802FFD20(void) {

}

