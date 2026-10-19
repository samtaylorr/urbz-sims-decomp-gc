/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_8036D4B8(void) {
    fn_802D2FD0();
}

void fn_8036D558(void);
void fn_8036D65C(void) {
    fn_8036D558();
}

void fn_8036D6A0(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493808[];
void *fn_8036D6E0(void) {
    return lbl_80493808;
}

extern s32 lbl_80493814[];
s32 fn_8036D6EC(void) {
    return lbl_80493814[0];
}

extern s32 lbl_80493818[];
s32 fn_8036D6F8(void) {
    return lbl_80493818[0];
}

extern u16 lbl_8049381C[];
u16 fn_8036D704(void) {
    return lbl_8049381C[0];
}

void *fn_8036D710(void) {
    return lbl_80493808;
}

extern u16 lbl_8049381E[];
u16 fn_8036D71C(void) {
    return lbl_8049381E[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8036D634(void);
extern void fn_8036D67C(void);
extern u8 lbl_803F5200[];
extern u8 lbl_80491E1C[];
void fn_8036D728(s32 arg0) {
    fn_802D6A90(lbl_80493808, fn_8036D634, fn_8036D65C, fn_8036D67C, arg0, lbl_803F5200, lbl_80491E1C);
}

void fn_802D2430(void);
void fn_8036D77C(void) {
    fn_802D2430();
}

