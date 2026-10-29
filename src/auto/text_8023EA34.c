/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

char *fn_8023EA34(void) {
    int fn_80245BB4(char *, const char *, ...);
    typedef struct {
        s32 v[6];
    } Tbl;
    extern const Tbl lbl_803EB9A4;
    extern const char lbl_803EB9BC[];
    extern char lbl_80436A68[];
    Tbl t = lbl_803EB9A4;

    fn_80245BB4(lbl_80436A68, lbl_803EB9BC, 1, t.v[1]);
    return lbl_80436A68;
}

char *fn_8023EAB8(void) {
    int fn_80245BB4(char *, const char *, ...);
    extern const char lbl_803EB9CC[];
    extern const char lbl_803EB9E0[];
    extern char lbl_80436A68[];

    fn_80245BB4(lbl_80436A68, lbl_803EB9CC, lbl_803EB9E0);
    return lbl_80436A68;
}

char *fn_8023EB00(void) {
    int fn_80245BB4(char *, const char *, ...);
    extern const char lbl_803EB9EC[];
    extern const char lbl_803EBA00[];
    extern char lbl_80436A68[];

    fn_80245BB4(lbl_80436A68, lbl_803EB9EC, lbl_803EBA00);
    return lbl_80436A68;
}

s32 fn_8023EB50(u8 *dst, u8 *src, u32 n) {
    register u8 *ctx asm("r31");
    register u32 v asm("r6") = 1;

    *(volatile s32 *)(ctx + 0x6EC) = v;
    if ((v = (u32)dst & 3) == 0 && (v = (u32)src & 3) == 0 && (v = n & 3) == 0) {
        u32 *d = (u32 *)dst - 1;
        u32 *s = (u32 *)src - 1;
        n = n + (u32)s;
        do {
            v = *++s;
            *++d = v;
        } while ((u32)s < n);
        v = 0;
        *(volatile s32 *)(ctx + 0x6EC) = v;
        return 1;
    } else {
        u8 *d = dst - 1;
        u8 *s = src - 1;
        n = n + (u32)s;
        do {
            v = *++s;
            *++d = v;
        } while ((u32)s < n);
        v = 0;
        *(volatile s32 *)(ctx + 0x6EC) = v;
        return 1;
    }
}

s32 fn_8023EBC8(void) {
    register u8 *ctx asm("r31");
    register s32 z asm("r6") = 0;
    register s32 r asm("r3");

    *(volatile s32 *)(ctx + 0x6EC) = z;
    r = z;
    return r;
}

