/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 pad0[0x14];
    void *unk14;
    u8 pad18[0x2C - 0x18];
    s32 unk2C[1];
} EIWallPartFlags;

extern void fn_802D30D4(void *, s32 *);
extern void fn_802E34F0(void *, void *);
void fn_800328F8(char *self, void *arg1) {
    fn_802E34F0(arg1, self + 0x44);
}

s32 fn_80032924(EIWallPartFlags *self, s32 i) {
    return self->unk2C[i];
}

s32 fn_80032934(EIWallPartFlags *self, s32 i) {
    char *node = (char *)self->unk14;

    if (node == NULL) {
        self->unk2C[i] = (s32)node;
        return 0;
    }
    self->unk2C[i] = 1;
    for (; node != NULL; node = *(char **)(node + 8)) {
        void **obj = *(void ***)node;
        char *vt = (char *)*obj;
        s32 r = (*(s32 (**)(void *))(vt + 0x144))((char *)obj + *(s16 *)(vt + 0x140));
        if (r == 0) {
            self->unk2C[i] = r;
            break;
        }
    }
    return self->unk2C[i];
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80032BA4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80032BD8(void) {
    fn_802D2FD0();
}

s32 fn_80032BF8(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80032C38(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80033054(void) {
    fn_802D2FD0();
}

s32 fn_80033074(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_800330B4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80033A3C(void) {
    fn_802F4AB8();
}

void fn_80035CD4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
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

void fn_8003A030(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8003A0AC(void) {
    return 0;
}

