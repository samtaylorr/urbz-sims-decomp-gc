/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
s32 fn_8031FC74(void) {
    return 0;
}

s32 fn_8031FC7C(void) {
    return 1;
}

s32 fn_8031FC84(void) {
    return 0;
}

s32 fn_8031FC8C(void) {
    return 0;
}

void fn_8031FE0C(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8031FE2C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8032027C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_804938A8[];
void *fn_803202BC(void) {
    return lbl_804938A8;
}

extern s32 lbl_804938B4[];
s32 fn_803202C8(void) {
    return lbl_804938B4[0];
}

extern s32 lbl_804938B8[];
s32 fn_803202D4(void) {
    return lbl_804938B8[0];
}

extern u16 lbl_804938BC[];
u16 fn_803202E0(void) {
    return lbl_804938BC[0];
}

void *fn_803202EC(void) {
    return lbl_804938A8;
}

extern u16 lbl_804938BE[];
u16 fn_803202F8(void) {
    return lbl_804938BE[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80320204(void);
extern void fn_8032022C(void);
extern void fn_80320258(void);
extern u8 lbl_803F2F20[];
extern u8 lbl_80493858[];
void fn_80320304(s32 arg0) {
    fn_802D6A90(lbl_804938A8, fn_80320204, fn_8032022C, fn_80320258, arg0, lbl_803F2F20, lbl_80493858);
}

void fn_802D2430(void);
void fn_80320358(void) {
    fn_802D2430();
}

