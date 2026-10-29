/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct BootInfo {
    u8 pad[0xF8];
    u32 busClock;
} BootInfo;

extern u8 lbl_8045D260[];
extern u32 lbl_80496284;
void fn_8033E774(void *);
char *fn_8037A798(char *, s32 *);
void fn_8033F94C(s32, s32);

extern s32 lbl_80495004;
void fn_8033E768(void) {
    extern s32 lbl_80495040;
    lbl_80495040 = 1;
}

extern u8 lbl_8041C570[];
void fn_8033E7C4(void **self) {
    M2C_UNK fn_802E0CA0(void **);
    *self = lbl_8041C570;
    fn_802E0CA0(self);
}

void fn_8033E7F4(void *arg0) {
    M2C_UNK fn_802E0D34();
    M2C_FIELD(arg0, s32 *, 8) = 0;
    fn_802E0D34();
}

void fn_8033EA4C(void) {

}

void fn_8033EA90(void) {
    M2C_UNK fn_8033EB00();
    extern s32 lbl_80494FF8;
    lbl_80494FF8 = 1;
    fn_8033EB00();
}

void fn_8033EAB8(void) {

}

void fn_8033EABC(void) {

}

void fn_8033EAC0(void) {
    M2C_UNK fn_80256608(void (*)());
    s32 fn_8025667C();
    extern s32 lbl_80494FFC;
    if (fn_8025667C() != 0) {
        lbl_80494FFC = 1;
        return;
    }
    fn_80256608(fn_8033EAC0);
}

s32 fn_8033EC8C(void) {
    return lbl_80495004;
}

void fn_8033EF10(void) {
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    void fn_80259354(void *);
    extern u8 lbl_8045D2E0[];
    extern s32 lbl_80494FA0;
    s32 enabled;

    enabled = 1;
    if (fn_8025465C() == 0) {
        enabled = 0;
    }
    fn_80259354(lbl_8045D2E0);
    if (lbl_80494FA0 > 0) {
        lbl_80494FA0 -= 10;
        if (lbl_80494FA0 < 0) {
            lbl_80494FA0 = 0;
        }
    }
    fn_80254684(enabled);
}

void fn_8033EF80(void) {
    volatile s32 i = 0;
    for (;;) {
        i++;
    }
}

void fn_8033EF9C(void) {
    void fn_80258CEC(void *, void (*)(void), void *, void *, s32, s32, s32);
    void fn_80256608(void (*)(void));
    void fn_80250FC4(void *);
    void fn_80251224(void *, s64, void (*)(void));
    void fn_802595DC(void *);
    void fn_8033EF10(void);
    s32 fn_8033EC94(void);
    extern u8 lbl_8045E600[];
    extern u8 lbl_8045F920[];
    extern u8 lbl_8045D2B8[];
    extern u8 lbl_8045D2E0[];
    extern s32 lbl_80494FF4;
    extern char *lbl_80494FA4;

    fn_80258CEC(lbl_8045E600, fn_8033EF80, lbl_8045E600, lbl_8045F920, 0x1000, lbl_80494FF4, 1);
    fn_80256608(fn_8033EAC0);
    fn_80250FC4(lbl_8045D2B8);
    for (;;) {
        fn_80251224(lbl_8045D2B8, (s32)lbl_80496284, fn_8033EF10);
        fn_802595DC(lbl_8045D2E0);
        do {
            char *obj = lbl_80494FA4;
            if (obj != 0) {
                char *e = *(char **)obj + 0x20;
                (*(void (**)(char *))(e + 4))(obj + *(s16 *)e);
            }
            fn_8033EB00();
        } while (fn_8033EC94() == 0);
    }
}

void fn_8033F270(void) {
    void *fn_802D0C44(void);
    void fn_802D1A00(void *, s32);
    extern s32 lbl_8049501C;
    extern s32 lbl_80495024;
    extern s32 lbl_80495028;

    if (lbl_8049501C != 0) {
        fn_802D1A00(fn_802D0C44(), lbl_8049501C);
        lbl_8049501C = 0;
    }
    lbl_80495028 = 0;
    lbl_80495024 = 0;
}

void fn_8033F2B8(s32 arg0, s32 arg1, s32 arg2) {
    extern s32 lbl_80495024;
    extern s32 lbl_80495028;
    extern s32 lbl_8049502C;
    lbl_80495024 = arg0;
    lbl_80495028 = arg1;
    lbl_8049502C = arg2;
}

void fn_8033F2C8(void) {
    extern s32 lbl_80495024;
    extern s32 lbl_8049502C;
    u32 *p;

    for (p = (u32 *)lbl_80495024; p < (u32 *)(lbl_80495024 + lbl_8049502C); p++) {
        *p = 0x10801080;
    }
}

void fn_8033F3D0(char *s, s32 *width, s32 *count) {
    s32 n;
    u8 c;

    *width = 0;
    *count = 0;
    c = *s;
    if (c != 0) {
        do {
            if ((char)c == '\n') {
                break;
            }
            if ((char)c == ' ') {
                if (*count == 0) {
                    *count = 1;
                    fn_8037A798(s, &n);
                    *width += n;
                }
                break;
            }
            s = fn_8037A798(s, &n);
            *width += n;
            *count += 1;
            c = *s;
        } while (c != 0);
    }
}

void fn_8033F94C(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8033E774(lbl_8045D260);
            lbl_80496284 = (((BootInfo *)0x80000000)->busClock / 4000) * 10;
        } else {
            ((void (*)(void *, s32))fn_8033E7C4)(lbl_8045D260, 2);
        }
    }
}

void fn_8033F9C0(void) {
    fn_8033F94C(1, 0xFFFF);
}

void fn_8033F9EC(void) {
    fn_8033F94C(0, 0xFFFF);
}

