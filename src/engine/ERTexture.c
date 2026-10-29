/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
void fn_80331C64(void);
void fn_80331C8C(void *);
void fn_80331CB8(void *);
void fn_80331578(void **self, s32 flags);
M2C_UNK fn_80331534(void *self);
void *fn_80331E08(u32 size, void *p);
extern u8 lbl_80493998[];
extern u8 lbl_803F35A8[];
extern u8 lbl_80493858[];
extern s32 lbl_80496258;
extern void *lbl_804950A8;

void fn_802D2FD0(void);
void fn_80331494(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_803314B4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_803314F4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

M2C_UNK fn_80331534(void *self) {
    extern void fn_8031E8B0(void *);
    extern u8 lbl_8041BB50[];
    fn_8031E8B0(self);
    M2C_FIELD(self, s32 *, 0x20) = 0;
    *(void **)self = lbl_8041BB50;
    return (M2C_UNK)self;
}

void fn_80331578(void **self, s32 flags) {
    extern u8 lbl_8041BB50[];
    extern void fn_8033160C(void *);
    extern void fn_8031E910(void *, s32);
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    *self = lbl_8041BB50;
    fn_8033160C(self);
    fn_8031E910(self, 0);
    if (flags & 1) {
        fn_80338184(lbl_8045BAE8, (s32)self);
    }
}

void fn_803315D8(void *self, s32 arg1) {
    void fn_8033160C(void *);
    fn_8033160C(self);
    M2C_FIELD(self, s32 *, 0x20) = arg1;
}

void fn_8033160C(void *self) {
    extern char *lbl_80495050;
    char *obj = lbl_80495050;
    char *vt = *(char **)obj;
    (*(void (**)(void *, s32))(vt + 0xAC))(obj + *(s16 *)(vt + 0xA8), M2C_FIELD(self, s32 *, 0x20));
    M2C_FIELD(self, s32 *, 0x20) = 0;
}

void fn_80331888(void *arg0, char *arg1) {
    void fn_803318AC(void *, void *);
    fn_803318AC(arg0, arg1 + 4);
}

s32 fn_80331B68(void *self) {
    s32 i;

    if (M2C_FIELD(self, s32 *, 0x20) == 0) {
        return 1;
    }
    if (lbl_804950A8 == NULL) {
        return 1;
    }
    for (i = 0; i <= 1; i++) {
        char *vt = M2C_FIELD(lbl_804950A8, char **, 0x338);
        if ((*(s32 (**)(void *, s32))(vt + 0x1C))((char *)lbl_804950A8 + *(s16 *)(vt + 0x18), i) == M2C_FIELD(self, s32 *, 0x20)) {
            return 0;
        }
    }
    return 1;
}

void fn_80331BF4(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_80496258 = fn_802D6A90(lbl_80493998, fn_80331C64, fn_80331C8C, fn_80331CB8, 0, lbl_803F35A8, lbl_80493858);
    }
}

void fn_80331C64(void) {
    M2C_UNK fn_80331534();
    M2C_UNK fn_80331DD8(M2C_UNK);
    fn_80331DD8(0x24);
    fn_80331534();
}

void fn_80331C8C(void *self) {
    fn_80331534(fn_80331E08(0x24, self));
}

void fn_80331CB8(void *self) {
    fn_80331578(self, 2);
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

s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80331C64(void);
void fn_80331C8C(void *);
void fn_80331CB8(void *);
extern u8 lbl_803F35A8[];
extern u8 lbl_80493858[];
void fn_80331D64(s32 arg0) {
    fn_802D6A90(lbl_80493998, fn_80331C64, fn_80331C8C, fn_80331CB8, arg0, lbl_803F35A8, lbl_80493858);
}

void fn_802D2430(void);
void fn_80331DB8(void) {
    fn_802D2430();
}

void fn_80331DD8(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338000(lbl_8045BAE8, arg0, 4);
}

void *fn_80331E08(u32 size, void *p);
void *fn_80331E08(u32 size, void *p) {
    return p;
}

void fn_80331E10(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BAE8[];
    fn_80338184(lbl_8045BAE8, arg0);
}

void fn_80331E3C(void *self, char *obj) {
    char *vt = *(char **)(obj + 0x68);
    (*(void (**)(void *, s32))(vt + 0x11C))(obj + *(s16 *)(vt + 0x118), M2C_FIELD(self, s32 *, 0x20));
}

void fn_80331E78(void) {
    void fn_80331BF4(s32, s32);
    fn_80331BF4(1, 0xFFFF);
}

