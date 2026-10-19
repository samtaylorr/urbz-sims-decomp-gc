/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_80331494(void) {
    fn_802D2FD0();
}

void fn_80331CDC(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493998[];
void *fn_80331D1C(void) {
    return lbl_80493998;
}

extern s32 lbl_804939A4[];
s32 fn_80331D28(void) {
    return lbl_804939A4[0];
}

extern s32 lbl_804939A8[];
s32 fn_80331D34(void) {
    return lbl_804939A8[0];
}

extern u16 lbl_804939AC[];
u16 fn_80331D40(void) {
    return lbl_804939AC[0];
}

void *fn_80331D4C(void) {
    return lbl_80493998;
}

extern u16 lbl_804939AE[];
u16 fn_80331D58(void) {
    return lbl_804939AE[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80331C64(void);
extern void fn_80331C8C(void);
extern void fn_80331CB8(void);
extern u8 lbl_803F35A8[];
extern u8 lbl_80493858[];
void fn_80331D64(s32 arg0) {
    fn_802D6A90(lbl_80493998, fn_80331C64, fn_80331C8C, fn_80331CB8, arg0, lbl_803F35A8, lbl_80493858);
}

void fn_802D2430(void);
void fn_80331DB8(void) {
    fn_802D2430();
}

