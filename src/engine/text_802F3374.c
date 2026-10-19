/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_802F3374(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_802F3394(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_802F33D4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_802F3414(void);
void fn_802F3D08(void) {
    fn_802F3414();
}

void fn_802F3D4C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_804937E0[];
void *fn_802F3D8C(void) {
    return lbl_804937E0;
}

extern s32 lbl_804937EC[];
s32 fn_802F3D98(void) {
    return lbl_804937EC[0];
}

extern s32 lbl_804937F0[];
s32 fn_802F3DA4(void) {
    return lbl_804937F0[0];
}

extern u16 lbl_804937F4[];
u16 fn_802F3DB0(void) {
    return lbl_804937F4[0];
}

void *fn_802F3DBC(void) {
    return lbl_804937E0;
}

extern u16 lbl_804937F6[];
u16 fn_802F3DC8(void) {
    return lbl_804937F6[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_802F3CE0(void);
extern void fn_802F3D28(void);
extern u8 lbl_803F1054[];
extern u8 lbl_80493740[];
void fn_802F3DD4(s32 arg0) {
    fn_802D6A90(lbl_804937E0, fn_802F3CE0, fn_802F3D08, fn_802F3D28, arg0, lbl_803F1054, lbl_80493740);
}

void fn_802D2430(void);
void fn_802F3E28(void) {
    fn_802D2430();
}

