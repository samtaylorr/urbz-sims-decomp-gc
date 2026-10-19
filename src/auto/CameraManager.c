/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void fn_802D20E8(void *);
s32 *fn_80014DCC(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

void fn_80014DE0(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_80014E08(void) {

}

void fn_80014E0C(void) {

}

s32 fn_80014EE0(void) {
    void *fn_802D1FC8(s32);
    extern s32 lbl_80493F2C;
    s32 *p;
    if ((s32)lbl_80493F2C == 0) {
        p = fn_802D1FC8(8);
        lbl_80493F2C = (s32)fn_80014DCC(p);
        fn_80014E08();
    }
    return lbl_80493F2C;
}

void fn_80014F24(s32 *arg0, s32 arg1, s32 arg2) {
    s32 off = arg1 << 2;
    *(s32 *)((s32)arg0 + off) = arg2;
}

s32 fn_80014F30(s32 *arg0, s32 arg1) {
    return *(s32 *)(arg1 * 4 + (s32)arg0);
}

void fn_80014F3C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_80014F48(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800150A8(void *arg0) {
    M2C_UNK fn_800159F4(s32);
    fn_800159F4(M2C_FIELD(arg0, s32 *, 4));
}

f32 fn_8001529C(void) {
    extern f32 lbl_8049570C;
    return lbl_8049570C;
}

void fn_80015404(void) {

}

void fn_800156E8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x550) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x578) != 0) {
        M2C_FIELD(arg0, s32 *, 0x554) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x554) = 1;
}

void fn_80015710(void) {
    extern s32 lbl_80495100;
    extern s32 lbl_80495704;
    lbl_80495704 = 0;
    lbl_80495100 = 0;
}

void fn_800157CC(void) {

}

void fn_800159F0(void) {

}

void fn_80016354(void) {

}

void fn_80016358(void) {

}

void fn_8001635C(void) {

}

void fn_80016810(void) {
    M2C_UNK fn_80043F0C(M2C_UNK);
    fn_80043F0C(0);
}

void fn_80016C78(void) {

}

void fn_800170FC(void) {

}

void fn_800176DC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_800177CC(void) {
    M2C_UNK fn_80017100(M2C_UNK, M2C_UNK);
    fn_80017100(1, 0xFFFF);
}

