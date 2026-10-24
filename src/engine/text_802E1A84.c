/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_802E1A84(s32 arg0, s32 arg1) {
    struct App { u8 pad[0x32C]; void *unk32C; };
    void fn_80378528(void);
    void fn_8033E8B4(void);
    void fn_8033E81C(void);
    void fn_802C7B54(void);
    void fn_802C7C90(void);
    void fn_802E0934(s32, s32, s32);
    void fn_802DF9E4(struct App *);
    void fn_802E0648(s32);
    void fn_802D8F48(struct App *, s32);
    extern struct App lbl_80452428;
    extern u8 lbl_803F07A0[];
    extern s32 lbl_80494DF0;
    extern u8 *lbl_80494FDC;
    extern s32 lbl_80494E48;
    u8 *vt;

    fn_80378528();
    fn_8033E8B4();
    fn_8033E81C();
    fn_802C7B54();
    fn_802E0934(lbl_80494DF0, arg0, arg1);
    fn_802DF9E4(&lbl_80452428);
    lbl_80452428.unk32C = lbl_803F07A0;
    fn_802E0648(lbl_80494DF0);
    fn_802D8F48(&lbl_80452428, 0x1E);
    vt = *(u8 **)lbl_80494FDC;
    (*(void (**)(void *))(vt + 0x4C))(lbl_80494FDC + *(s16 *)(vt + 0x48));
    fn_802C7C90();
    if (lbl_80494E48 != 0) {
        ((void (*)(void))lbl_80494E48)();
    }
    return 0;
}

s32 fn_802E1B38(void) {
    return 1;
}

extern s32 lbl_80494E48;
void fn_802E1B40(void (*cb)(void)) {
    lbl_80494E48 = cb;
}

M2C_UNK fn_802E1B48(M2C_UNK arg0, M2C_UNK arg1) {
    void fn_802D8B34(u8 *);
    void fn_802D8BEC(u8 *, s32);
    extern u8 lbl_80452428[];
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_802D8B34(lbl_80452428);
        } else {
            fn_802D8BEC(lbl_80452428, 2);
        }
    }
}

void fn_802E1B9C(void) {
    M2C_UNK fn_802E1B48(M2C_UNK, M2C_UNK);
    fn_802E1B48(1, 0xFFFF);
}

void fn_802E1BC8(void) {
    M2C_UNK fn_802E1B48(M2C_UNK, M2C_UNK);
    fn_802E1B48(0, 0xFFFF);
}

