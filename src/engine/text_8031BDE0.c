/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void *fn_802D0B3C(void);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DBBCC(void *, u32, s32);
extern void *fn_802D0AB8();
void *fn_8031BEA0(void *);
void fn_8031C560(void);
void fn_8031C5E0(void *);
void fn_8031C600(void *);
extern u8 lbl_80493880[];
extern u8 lbl_803F2CF8[];
extern u8 lbl_80493858[];
extern s32 lbl_8049621C;

static inline void *Alloc(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DBBCC(fn_802D0B3C(), size, 0);
        }
    }
    return p;
}

void fn_802D2FD0(void);
s32 fn_8031BDE0(s32 *arg0, s32 *arg1) {
    s32 temp_r0;
    s32 temp_r9;

    temp_r9 = *arg0;
    temp_r0 = *arg1;
    if (temp_r9 >= temp_r0) {
        return temp_r9 > temp_r0;
    }
    return -1;
}

void fn_8031BE00(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8031BE20(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8031BE60(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8031BEE8(void **arg0, s32 arg1) {
    extern void fn_8031BF44(void *);
    extern void fn_8031E910(void *, s32);
    extern void *fn_802D0AB8();
    extern void fn_802D1A00(void *, void *);
    extern u8 lbl_8041B320[];

    *arg0 = lbl_8041B320;
    fn_8031BF44(arg0);
    fn_8031E910(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

s32 fn_8031C470(u8 *self, const char *name) {
    extern s32 fn_802486DC(const char *, const char *);
    u32 i;

    for (i = 0; i < *(u32 *)(self + 0x24); i++) {
        if (fn_802486DC(*(const char **)(*(u8 **)(self + 0x28) + i * 0xC + 4), name) == 0) {
            return *(s32 *)(*(u8 **)(self + 0x28) + i * 0xC);
        }
    }
    return 0;
}

void fn_8031C4F0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_8049621C = fn_802D6A90(lbl_80493880, fn_8031C560, fn_8031C5E0, fn_8031C600, 0, lbl_803F2CF8, lbl_80493858);
    }
}

void fn_8031C560(void) {
    fn_8031BEA0(Alloc(0x2C));
}

void *fn_8031BEA0(void *);
void fn_8031C5E0(void *self) {
    fn_8031BEA0(self);
}

void fn_8031C624(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493880[];
void *fn_8031C664(void) {
    return lbl_80493880;
}

extern s32 lbl_8049388C[];
s32 fn_8031C670(void) {
    return lbl_8049388C[0];
}

extern s32 lbl_80493890[];
s32 fn_8031C67C(void) {
    return lbl_80493890[0];
}

extern u16 lbl_80493894[];
u16 fn_8031C688(void) {
    return lbl_80493894[0];
}

void *fn_8031C694(void) {
    return lbl_80493880;
}

extern u16 lbl_80493896[];
u16 fn_8031C6A0(void) {
    return lbl_80493896[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8031C560(void);
extern void fn_8031C600(void *);
extern u8 lbl_803F2CF8[];
extern u8 lbl_80493858[];
void fn_8031C6AC(s32 arg0) {
    fn_802D6A90(lbl_80493880, fn_8031C560, fn_8031C5E0, fn_8031C600, arg0, lbl_803F2CF8, lbl_80493858);
}

void fn_802D2430(void);
void fn_8031C700(void) {
    fn_802D2430();
}

s32 fn_8031C720(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

void fn_8031C728(void) {
    void fn_8031C4F0(s32, s32);
    fn_8031C4F0(1, 0xFFFF);
}

