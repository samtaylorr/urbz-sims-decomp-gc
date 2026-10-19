/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_80409228[];
extern void fn_802D20E8(void *);

void fn_800659A0(void **self, s32 flags) {
    *self = lbl_80409228;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800659D4(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_800659F4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80065A34(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern u8 lbl_80409228[];
extern void fn_802D20E8(void *);
extern void fn_80065CEC(void *, s32, s32);
void fn_80065A74(void *self, s32 arg1) {
    fn_80065CEC(self, 4, arg1);
}

void fn_80065A9C(void) {
}

void fn_80065AA0(void) {
}

void fn_80065AA4(void) {

}

void fn_80065AA8(void) {

}

void fn_80065AAC(void) {

}

void fn_80065AB0(void) {

}

void fn_80065AB4(void) {

}

void fn_80065AB8(void) {

}

void fn_80065ABC(void) {

}

s32 fn_80065AC4(void) {
    return 0;
}

void *fn_80066B10(u32 size, void *p);
void *fn_80066B10(u32 size, void *p) {
    return p;
}

void fn_80066B40(void) {
    fn_80065ADC();
}

void fn_80066B84(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491CA0[];
void *fn_80066BC4(void) {
    return lbl_80491CA0;
}

extern s32 lbl_80491CAC[];
s32 fn_80066BD0(void) {
    return lbl_80491CAC[0];
}

extern s32 lbl_80491CB0[];
s32 fn_80066BDC(void) {
    return lbl_80491CB0[0];
}

extern u16 lbl_80491CB4[];
u16 fn_80066BE8(void) {
    return lbl_80491CB4[0];
}

void *fn_80066BF4(void) {
    return lbl_80491CA0;
}

extern u16 lbl_80491CB6[];
u16 fn_80066C00(void) {
    return lbl_80491CB6[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80066B18(void);
extern void fn_80066B60(void);
extern u8 lbl_803C8578[];
extern u8 lbl_80491C50[];
void fn_80066C0C(s32 arg0) {
    fn_802D6A90(lbl_80491CA0, fn_80066B18, fn_80066B40, fn_80066B60, arg0, lbl_803C8578, lbl_80491C50);
}

void fn_80066C60(void) {
    fn_802D2430();
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80066D44(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_80066D90(void) {
    return 0;
}

