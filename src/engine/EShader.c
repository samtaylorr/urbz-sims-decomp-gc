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


s32 fn_802FEFA0(void *arg0) {
    M2C_UNK fn_802FEFE4(void *);
    M2C_UNK fn_803BABAC();
    fn_803BABAC();
    if (M2C_FIELD(arg0, s32 *, 4) & 0x84000000) {
        fn_802FEFE4(arg0);
    }
    return 1;
}

void fn_802FFB78(void) {

}

void fn_802FFB7C(s32 arg0, s32 arg1) {
    void fn_802CA9A8(void *);
    void fn_802CAA00(void *, s32);
    extern u8 lbl_80454A38[];
    extern s32 lbl_804961E4[2];
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            s32 *p = lbl_804961E4;
            p[1] = 0;
            p[0] = 0;
            fn_802CA9A8(lbl_80454A38);
        } else {
            fn_802CAA00(lbl_80454A38, 2);
        }
    }
}

void fn_802FFBE0(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BA40[];
    fn_80338000(lbl_8045BA40, arg0, 4);
}

void fn_802FFC10(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BA40[];
    fn_80338184(lbl_8045BA40, arg0);
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

s32 fn_802FFC68(void *arg0, s32 arg1) {
    return (M2C_FIELD(arg0, s32 *, 4) & arg1) != 0;
}

s32 fn_802FFC80(s32 *self) {
    return self[1];
}

s32 fn_802FFC88(void *arg0) {
    return ((u32) (M2C_FIELD(arg0, s32 *, 0x74) | M2C_FIELD(arg0, s32 *, 0xB4)) >> 5U) & 1;
}

s32 fn_802FFC9C(WrapperPaneBase *self, s32 i) {
    return self->unk40[i];
}

void fn_802FFCCC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & 0xFDFFFFFF);
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

void fn_802FFD40(void) {
    void fn_802FFB7C(s32, s32);
    fn_802FFB7C(1, 0xFFFF);
}

void fn_802FFD6C(void) {
    fn_802FFB7C(0, 0xFFFF);
}

