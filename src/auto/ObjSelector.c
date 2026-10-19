/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_8016C258(void) {
    return 1;
}

void fn_8016C2E8(void) {

}

void fn_8016C2EC(void) {

}

s32 fn_8016C618(void) {
    return 0;
}

s32 fn_8016C620(void) {
    return 0;
}

s32 fn_8016C628(void) {
    return 0;
}

s32 fn_8016C710(void) {
    return 0;
}

s32 fn_8016C718(void) {
    return 0;
}

extern s32 lbl_80495C5C;
extern void fn_800F1A60(s32, s32);
void fn_8016C720(void) {
    fn_800F1A60((s32)&lbl_80495C5C, 2);
}

extern s32 lbl_80495C70;
void fn_8016C894(void) {
    fn_800F1A60((s32)&lbl_80495C70, 2);
}

s32 fn_8016CCE0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s32 *, 0x1C);
}

void fn_8016CCEC(void) {

}

void fn_8016CCF0(void) {

}

extern s32 lbl_80495C78;
void fn_8016CDFC(void) {
    fn_800F1A60((s32)&lbl_80495C78, 2);
}

extern s32 lbl_80495C80;
void fn_8016CECC(void) {
    fn_800F1A60((s32)&lbl_80495C80, 2);
}

s16 fn_8016D328(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s16 *, 0x96);
}

s16 fn_8016D45C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s16 *, 0x9E);
}

extern s32 lbl_80495C88;
void fn_8016E5DC(void) {
    fn_800F1A60((s32)&lbl_80495C88, 2);
}

extern void fn_8016F714(s32);
extern void fn_802D20E8(s32);
void fn_8016F4C0(s32 self, s32 flags) {
    fn_8016F714(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

