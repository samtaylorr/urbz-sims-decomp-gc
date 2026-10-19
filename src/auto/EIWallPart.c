/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void fn_802D30D4(void *, s32 *);
extern void fn_802E34F0(void *, void *);
void fn_800328F8(char *self, void *arg1) {
    fn_802E34F0(arg1, self + 0x44);
}

void fn_80032BD8(void) {
    fn_802D2FD0();
}

void fn_80033054(void) {
    fn_802D2FD0();
}

void fn_80033A3C(void) {
    fn_802F4AB8();
}

void fn_80039CCC(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491C00[];
void *fn_80039D0C(void) {
    return lbl_80491C00;
}

extern s32 lbl_80491C0C[];
s32 fn_80039D18(void) {
    return lbl_80491C0C[0];
}

extern s32 lbl_80491C10[];
s32 fn_80039D24(void) {
    return lbl_80491C10[0];
}

extern u16 lbl_80491C14[];
u16 fn_80039D30(void) {
    return lbl_80491C14[0];
}

void *fn_80039D3C(void) {
    return lbl_80491C00;
}

extern u16 lbl_80491C16[];
u16 fn_80039D48(void) {
    return lbl_80491C16[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80039C54(void);
extern void fn_80039C7C(void);
extern void fn_80039CA8(void);
extern u8 lbl_803C56AC[];
extern u8 lbl_80491C50[];
void fn_80039D54(s32 arg0) {
    fn_802D6A90(lbl_80491C00, fn_80039C54, fn_80039C7C, fn_80039CA8, arg0, lbl_803C56AC, lbl_80491C50);
}

void fn_80039DA8(void) {
    fn_802D2430();
}

void fn_80039E80(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491C28[];
void *fn_80039EC0(void) {
    return lbl_80491C28;
}

extern s32 lbl_80491C34[];
s32 fn_80039ECC(void) {
    return lbl_80491C34[0];
}

extern s32 lbl_80491C38[];
s32 fn_80039ED8(void) {
    return lbl_80491C38[0];
}

extern u16 lbl_80491C3C[];
u16 fn_80039EE4(void) {
    return lbl_80491C3C[0];
}

void *fn_80039EF0(void) {
    return lbl_80491C28;
}

extern u16 lbl_80491C3E[];
u16 fn_80039EFC(void) {
    return lbl_80491C3E[0];
}

extern void fn_80039E08(void);
extern void fn_80039E30(void);
extern void fn_80039E5C(void);
extern u8 lbl_803C56B8[];
void fn_80039F08(s32 arg0) {
    fn_802D6A90(lbl_80491C28, fn_80039E08, fn_80039E30, fn_80039E5C, arg0, lbl_803C56B8, lbl_80491C00);
}

void fn_80039F5C(void) {
    fn_802D2430();
}

s32 fn_8003A0AC(void) {
    return 0;
}

