/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_804964C4;
s32 fn_8038FD1C(void) {
    return lbl_804964C4;
}

extern s32 lbl_804964C0;
void fn_8038FDB4(void (*cb)(void)) {
    lbl_804964C0 = cb;
}

extern s32 lbl_804964BC;
s32 fn_8038FDCC(void) {
    return lbl_804964BC;
}

extern s32 lbl_804964B8;
s32 fn_8038FDD4(void) {
    return lbl_804964B8;
}

extern s32 lbl_80495670;
s32 fn_8038FDDC(void) {
    return lbl_80495670;
}

extern s32 lbl_804964B4;
s32 fn_8038FDE4(void) {
    return lbl_804964B4;
}

void fn_803902D8(void (*cb)(void));
void fn_803902D0(void (*cb)(void));
void fn_803900F4(void) {
    extern void fn_80398D7C(void);
    fn_80398D7C();
    fn_803902D8((void (*)(void))1);
    fn_803902D0((void (*)(void))0);
}

void fn_80390124(u32 arg0, s32 arg1) {
    M2C_UNK fn_80398AC4(u32, u32);
    s32 fn_80398B30(u32);
    s32 fn_80398C58(u32);
    u32 var_r31;

    var_r31 = arg0;
loop_4:
    if (var_r31 < (u32) (arg0 + arg1)) {
        if (fn_80398B30(var_r31) != 0) {
            fn_80398AC4(var_r31, (u32) (fn_80398C58(var_r31) - lbl_804964B4) >> 0xCU);
        }
        var_r31 += 0x1000;
        goto loop_4;
    }
}

void fn_803902C0(s32 arg0) {
    extern s32 lbl_8049567C;
    lbl_8049567C = arg0;
}

extern s32 lbl_8049567C;
s32 fn_803902C8(void) {
    return lbl_8049567C;
}

extern s32 lbl_804964D0;
void fn_803902D0(void (*cb)(void)) {
    lbl_804964D0 = cb;
}

extern s32 lbl_80495678;
void fn_803902D8(void (*cb)(void)) {
    lbl_80495678 = cb;
}

void fn_803902E0(void) {
    extern s32 lbl_8049567C;
    extern void fn_80390324(void);
    extern void fn_803904F4(void);
    extern void fn_80390588(void);
    if (lbl_8049567C == 0) {
        fn_80390324();
    } else if (lbl_8049567C == 1) {
        fn_803904F4();
    } else {
        fn_80390588();
    }
}

