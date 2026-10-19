/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void (*lbl_804940B0)(void);

extern s32 lbl_804957B8;
s32 fn_80041D94(void) {
    return lbl_804957B8;
}

extern void (*lbl_804940B0)(void);
extern s32 lbl_8049407C;
extern s32 lbl_80494084;
extern s32 lbl_80494088;
extern s32 lbl_804940AC;
extern char *lbl_803C6188[];
extern char lbl_8045BA40[];
void fn_800426A4(void);
s32 fn_80336E08(void *a, char *b);
void fn_803374C8(void *a, char *b);
void fn_80042C88(void) {
    if (lbl_8049407C != -1) {
        if (lbl_804940AC != 0) {
            fn_800426A4();
        } else if (lbl_80494084 == -1) {
            if (lbl_80494088 != -1) {
                lbl_80494084 = lbl_80494088;
                fn_803374C8(lbl_8045BA40, lbl_803C6188[lbl_80494088]);
            }
        } else {
            lbl_804940AC = fn_80336E08(lbl_8045BA40, lbl_803C6188[lbl_80494084]);
            if (lbl_804940AC != 0) {
                fn_800426A4();
            }
        }
    }
}

extern s32 lbl_804940A4;
s32 fn_80042D2C(void) {
    return lbl_804940A4;
}

void fn_80042D34(void) {
}

extern s32 lbl_804940A8;
s32 fn_80043480(void) {
    return lbl_804940A8;
}

