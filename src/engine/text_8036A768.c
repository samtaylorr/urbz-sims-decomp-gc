/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8036A768(void) {

}

void fn_8036A76C(f32 *src, u8 *dst) {
    s32 i;

    for (i = 0; i < 4; i++) {
        f32 v = src[i] * 255.0f;
        if (v < 0.0f) {
            dst[i] = 0;
        } else if (v > 255.0f) {
            dst[i] = 255;
        } else {
            dst[i] = (s32)v;
        }
    }
}

void fn_8036A7E4(f32 *dst, u8 *src) {
    s32 i;

    for (i = 0; i < 4; i++) {
        dst[i] = (u32)src[i] * (1.0f / 255.0f);
    }
}

extern f32 lbl_804754CC[4];
extern f32 lbl_804754DC[4];
extern f32 lbl_804754EC[4];
extern f32 lbl_804754FC[4];
extern f32 lbl_8047550C[4];

void fn_8036A83C(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_804754CC[0] = 0.0f;
        lbl_804754CC[1] = 0.0f;
        lbl_804754CC[2] = 0.0f;
        lbl_804754CC[3] = 0.0f;
        lbl_804754DC[0] = 1.0f;
        lbl_804754DC[1] = 0.0f;
        lbl_804754DC[2] = 0.0f;
        lbl_804754DC[3] = 0.0f;
        lbl_804754EC[0] = 0.0f;
        lbl_804754EC[1] = 1.0f;
        lbl_804754EC[2] = 0.0f;
        lbl_804754EC[3] = 0.0f;
        lbl_804754FC[0] = 0.0f;
        lbl_804754FC[1] = 0.0f;
        lbl_804754FC[2] = 1.0f;
        lbl_804754FC[3] = 0.0f;
        lbl_8047550C[0] = 0.0f;
        lbl_8047550C[1] = 0.0f;
        lbl_8047550C[2] = 0.0f;
        lbl_8047550C[3] = 1.0f;
    }
}

void fn_8036A8F0(void) {
    fn_8036A83C(1, 0xFFFF);
}

