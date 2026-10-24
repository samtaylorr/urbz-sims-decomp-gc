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

