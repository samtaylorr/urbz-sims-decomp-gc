/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_8022554C(void *);
extern void fn_8022F404(void *, void *);
void fn_80237C70(void *arg0) {
    fn_8022F404(fn_8022554C(arg0), arg0);
}

s32 fn_8023C218(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 7U) & 1;
}

s32 fn_8023C224(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 4U) & 1;
}

s32 fn_8023C230(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 2U) & 1;
}

s32 fn_8023C23C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 3U) & 1;
}

s32 fn_8023C248(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 8U) & 1;
}

s32 fn_8023C254(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 9U) & 1;
}

s32 fn_8023C2C0(s32 arg0) {
    return arg0 + 0x5C;
}

s32 fn_8023C2C8(s32 arg0) {
    return arg0 + 0x68;
}

f32 fn_8023C2D0(void) {
    extern f32 lbl_80496760;
    return lbl_80496760;
}

void fn_8023C2F0(void) {

}

extern void fn_8022E84C(void *, void *);
void fn_8023C45C(void *arg0) {
    fn_8022E84C(fn_8022554C(arg0), arg0);
}

s32 fn_8023E77C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 8);
}

s32 fn_8023E89C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x84) >> 7U) & 1;
}

s32 fn_8023E8A8(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x84) >> 4U) & 1;
}

f32 fn_8023E8CC(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x80);
}

s32 fn_8023E934(s32 arg0) {
    return arg0 + 0x5C;
}

s32 fn_8023E93C(s32 arg0) {
    return arg0 + 0x68;
}

s32 fn_8023E944(s32 arg0) {
    return arg0 + 0x74;
}

f32 fn_8023E94C(void) {
    extern f32 lbl_80496770;
    return lbl_80496770;
}

f32 fn_8023E954(void) {
    extern f32 lbl_80496774;
    return lbl_80496774;
}

