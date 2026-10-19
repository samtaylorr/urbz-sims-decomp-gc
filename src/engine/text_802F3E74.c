/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_802F3E74(void) {
    fn_802D2FD0();
}

void fn_802F58A8(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491C50[];
void *fn_802F58E8(void) {
    return lbl_80491C50;
}

extern s32 lbl_80491C5C[];
s32 fn_802F58F4(void) {
    return lbl_80491C5C[0];
}

extern s32 lbl_80491C60[];
s32 fn_802F5900(void) {
    return lbl_80491C60[0];
}

extern u16 lbl_80491C64[];
u16 fn_802F590C(void) {
    return lbl_80491C64[0];
}

void *fn_802F5918(void) {
    return lbl_80491C50;
}

extern u16 lbl_80491C66[];
u16 fn_802F5924(void) {
    return lbl_80491C66[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_802F5830(void);
extern void fn_802F5858(void);
extern void fn_802F5884(void);
extern u8 lbl_803F1140[];
extern u8 lbl_80493808[];
void fn_802F5930(s32 arg0) {
    fn_802D6A90(lbl_80491C50, fn_802F5830, fn_802F5858, fn_802F5884, arg0, lbl_803F1140, lbl_80493808);
}

void fn_802D2430(void);
void fn_802F5984(void) {
    fn_802D2430();
}

