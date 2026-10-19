/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_8032E190(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8032E1B0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8032F5A0(void);
void fn_8033031C(void) {
    fn_8032F5A0();
}

void fn_803310DC(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493970[];
void *fn_8033111C(void) {
    return lbl_80493970;
}

extern s32 lbl_8049397C[];
s32 fn_80331128(void) {
    return lbl_8049397C[0];
}

extern s32 lbl_80493980[];
s32 fn_80331134(void) {
    return lbl_80493980[0];
}

extern u16 lbl_80493984[];
u16 fn_80331140(void) {
    return lbl_80493984[0];
}

void *fn_8033114C(void) {
    return lbl_80493970;
}

extern u16 lbl_80493986[];
u16 fn_80331158(void) {
    return lbl_80493986[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80331064(void);
extern void fn_8033108C(void);
extern void fn_803310B8(void);
extern u8 lbl_803F34C0[];
extern u8 lbl_80493858[];
void fn_80331164(s32 arg0) {
    fn_802D6A90(lbl_80493970, fn_80331064, fn_8033108C, fn_803310B8, arg0, lbl_803F34C0, lbl_80493858);
}

void fn_802D2430(void);
void fn_803311B8(void) {
    fn_802D2430();
}

