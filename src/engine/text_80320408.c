/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_80320408(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80320428(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80320468(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80320590(void *arg0) {
    M2C_UNK fn_8036C508(s32);
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x24);
    if (var_r31 != NULL) {
        do {
            fn_8036C508(M2C_FIELD(var_r31, s32 *, 0));
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}

void fn_80323460(void *arg0) {
    M2C_UNK fn_803233D4();
    fn_803233D4();
    M2C_FIELD(arg0, s32 *, 0x74) = -1;
}

void fn_80323D3C(void) {
    M2C_UNK fn_803204A8();
    M2C_UNK fn_80323EB0(M2C_UNK);
    fn_80323EB0(0x78);
    fn_803204A8();
}

void fn_80323DB4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_804938D0[];
void *fn_80323DF4(void) {
    return lbl_804938D0;
}

extern s32 lbl_804938DC[];
s32 fn_80323E00(void) {
    return lbl_804938DC[0];
}

extern s32 lbl_804938E0[];
s32 fn_80323E0C(void) {
    return lbl_804938E0[0];
}

extern u16 lbl_804938E4[];
u16 fn_80323E18(void) {
    return lbl_804938E4[0];
}

void *fn_80323E24(void) {
    return lbl_804938D0;
}

extern u16 lbl_804938E6[];
u16 fn_80323E30(void) {
    return lbl_804938E6[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80323D3C(void);
extern void fn_80323D64(void);
extern void fn_80323D90(void);
extern u8 lbl_803F2F74[];
extern u8 lbl_80493858[];
void fn_80323E3C(s32 arg0) {
    fn_802D6A90(lbl_804938D0, fn_80323D3C, fn_80323D64, fn_80323D90, arg0, lbl_803F2F74, lbl_80493858);
}

void fn_802D2430(void);
void fn_80323E90(void) {
    fn_802D2430();
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
void *fn_80323EB0(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void *fn_80323F5C(u32 size, void *p);
void *fn_80323F5C(u32 size, void *p) {
    return p;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80323F64(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

f32 fn_80323F98(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x58);
}

f32 fn_80323FA0(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x5C);
}

s32 fn_803240A0(s32 arg0) {
    return arg0 + 0x64;
}

void fn_8032413C(void) {
    M2C_UNK fn_80323CB8(M2C_UNK, M2C_UNK);
    fn_80323CB8(1, 0xFFFF);
}

