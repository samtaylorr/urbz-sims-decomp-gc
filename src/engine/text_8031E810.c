/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_8031E810(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8031E830(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8031E870(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8031EC10(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493858[];
void *fn_8031EC50(void) {
    return lbl_80493858;
}

extern s32 lbl_80493864[];
s32 fn_8031EC5C(void) {
    return lbl_80493864[0];
}

extern s32 lbl_80493868[];
s32 fn_8031EC68(void) {
    return lbl_80493868[0];
}

extern u16 lbl_8049386C[];
u16 fn_8031EC74(void) {
    return lbl_8049386C[0];
}

void *fn_8031EC80(void) {
    return lbl_80493858;
}

extern u16 lbl_8049386E[];
u16 fn_8031EC8C(void) {
    return lbl_8049386E[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8031EB98(void);
extern void fn_8031EBC0(void);
extern void fn_8031EBEC(void);
extern u8 lbl_803F2E48[];
extern u8 lbl_804936F0[];
void fn_8031EC98(s32 arg0) {
    fn_802D6A90(lbl_80493858, fn_8031EB98, fn_8031EBC0, fn_8031EBEC, arg0, lbl_803F2E48, lbl_804936F0);
}

void fn_802D2430(void);
void fn_8031ECEC(void) {
    fn_802D2430();
}

s32 fn_8031ED0C(void) {
    return 1;
}

s32 fn_8031ED14(s32 *self) {
    return self[2];
}

s32 fn_8031ED24(char *self) {
    return *(s32 *)(self + 0xC);
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8031EE00(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8031EE44(void) {
    return 1;
}

