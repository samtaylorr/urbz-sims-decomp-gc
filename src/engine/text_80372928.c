/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_80372928(void) {
    fn_802D2FD0();
}

void fn_80373884(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493EBC[];
void *fn_803738C4(void) {
    return lbl_80493EBC;
}

extern s32 lbl_80493EC8[];
s32 fn_803738D0(void) {
    return lbl_80493EC8[0];
}

extern s32 lbl_80493ECC[];
s32 fn_803738DC(void) {
    return lbl_80493ECC[0];
}

extern u16 lbl_80493ED0[];
u16 fn_803738E8(void) {
    return lbl_80493ED0[0];
}

void *fn_803738F4(void) {
    return lbl_80493EBC;
}

extern u16 lbl_80493ED2[];
u16 fn_80373900(void) {
    return lbl_80493ED2[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8037380C(void);
extern void fn_80373834(void);
extern void fn_80373860(void);
extern u8 lbl_803F567C[];
extern u8 lbl_80493858[];
void fn_8037390C(s32 arg0) {
    fn_802D6A90(lbl_80493EBC, fn_8037380C, fn_80373834, fn_80373860, arg0, lbl_803F567C, lbl_80493858);
}

void fn_802D2430(void);
void fn_80373960(void) {
    fn_802D2430();
}

