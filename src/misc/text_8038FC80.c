/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u32 *lbl_804964DC;

static inline u32 *PageTableAt(u32 n) {
    return lbl_804964DC + n;
}

extern s32 lbl_804964C4;
s32 fn_8038FD1C(void) {
    return lbl_804964C4;
}

void fn_8038FD24(void) {
    extern s32 lbl_804964C4;
    extern s32 lbl_804964B0;
    extern s32 lbl_804964B4;
    extern s32 lbl_804964B8;
    extern s32 lbl_80495670;
    extern s32 lbl_804964BC;
    extern s32 lbl_804964C0;
    extern void fn_80398A00(void);
    void fn_803902D8(void (*cb)(void));
    void fn_803902D0(void (*cb)(void));
    void fn_803902C0(s32 arg0);
    if (lbl_804964C4 == 1) {
        fn_80398A00();
        fn_803902D8((void (*)(void))1);
        fn_803902D0((void (*)(void))0);
        fn_803902C0(1);
        lbl_804964B0 = 0;
        lbl_804964B4 = 0;
        lbl_804964B8 = 0;
        lbl_80495670 = 0x4000;
        lbl_804964BC = 0;
        lbl_804964C0 = 0;
        lbl_804964C4 = 0;
    }
}

void fn_8038FD8C(s32 arg0, s32 arg1) {
    extern s32 lbl_80495670;
    extern s32 lbl_804964B8;
    extern void fn_803907FC(void);
    lbl_80495670 = arg0;
    lbl_804964B8 = arg1;
    fn_803907FC();
}

extern s32 lbl_804964C0;
void fn_8038FDB4(void (*cb)(void)) {
    lbl_804964C0 = cb;
}

s32 fn_8038FDBC(s32 arg0) {
    extern s32 lbl_804964B4;
    s32 base = lbl_804964B4;
    s32 off = arg0 << 12;
    return base + off;
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

void fn_8038FDEC(void) {
    extern s32 lbl_804964B0;
    extern s32 lbl_804964B4;
    extern s32 fn_80251874(void);
    extern void fn_80251884(s32);
    lbl_804964B4 = fn_80251874();
    fn_80251884(lbl_804964B4 + lbl_804964B0);
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

void fn_80390994(s32 arg0) {
    extern char lbl_80406900[];
    int fn_80245BB4(char *, const char *, ...);
    void PPCHalt(void);
    char buf[0x400];

    fn_80245BB4(buf, lbl_80406900, arg0);
    PPCHalt();
}

extern u32 *lbl_804964DC;
void fn_803909CC(u32 arg0) {
    lbl_804964DC[(arg0 >> 12) & 0x1FFF] |= 0x80000000;
}

u32 fn_803909E4(u32 arg0) {
    return lbl_804964DC[(arg0 >> 12) & 0x1FFF] >> 31;
}

void fn_803909F8(void) {
    extern s32 fn_80251874(void);
    extern void fn_80251884(s32);
    u32 i;

    lbl_804964DC = (u32 *)fn_80251874();
    fn_80251884((s32)lbl_804964DC + 0x8000);
    for (i = 0; i < 0x2000; i++) {
        *(s32 *)PageTableAt(i) = 0;
    }
}