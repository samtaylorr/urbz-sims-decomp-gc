/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_80329264(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80329284(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_803292C4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80329838(void) {

}

void fn_8032B9E4(void) {

}

void fn_8032CD5C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493948[];
void *fn_8032CD9C(void) {
    return lbl_80493948;
}

extern s32 lbl_80493954[];
s32 fn_8032CDA8(void) {
    return lbl_80493954[0];
}

extern s32 lbl_80493958[];
s32 fn_8032CDB4(void) {
    return lbl_80493958[0];
}

extern u16 lbl_8049395C[];
u16 fn_8032CDC0(void) {
    return lbl_8049395C[0];
}

void *fn_8032CDCC(void) {
    return lbl_80493948;
}

extern u16 lbl_8049395E[];
u16 fn_8032CDD8(void) {
    return lbl_8049395E[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8032CCE4(void);
extern void fn_8032CD0C(void);
extern void fn_8032CD38(void);
extern u8 lbl_803F331C[];
extern u8 lbl_80493858[];
void fn_8032CDE4(s32 arg0) {
    fn_802D6A90(lbl_80493948, fn_8032CCE4, fn_8032CD0C, fn_8032CD38, arg0, lbl_803F331C, lbl_80493858);
}

void fn_802D2430(void);
void fn_8032CE38(void) {
    fn_802D2430();
}

void *fn_8032CE88(u32 size, void *p);
void *fn_8032CE88(u32 size, void *p) {
    return p;
}

s32 fn_8032CF30(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_8032CF48(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

