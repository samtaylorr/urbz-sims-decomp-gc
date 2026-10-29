/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
void fn_8037380C(void);
void fn_80373834(void *);
void fn_80373860(void *);
void fn_80372A2C(void **self, s32 flags);
M2C_UNK fn_803729C8(void *self);
void *fn_803739B0(u32 size, void *p);
extern u8 lbl_80493EBC[];
extern u8 lbl_803F567C[];
extern u8 lbl_80493858[];
extern s32 lbl_8049631C;

void fn_802D2FD0(void);
void fn_80372928(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80372948(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80372988(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

M2C_UNK fn_803729C8(void *self) {
    extern u8 lbl_8041E0F0[];
    extern void fn_8031E8B0(void *);
    s32 i;
    fn_8031E8B0(self);
    *(u8 **)self = lbl_8041E0F0;
    M2C_FIELD(self, s32 *, 0x20) = 0;
    M2C_FIELD(self, s32 *, 0x24) = 0;
    for (i = 7; i >= 0; i--) {
        ((s32 *)((char *)self + 0x28))[i] = 0;
    }
    return (M2C_UNK)self;
}

void fn_80372A2C(void **self, s32 flags) {
    extern u8 lbl_8041E0F0[];
    extern void fn_80372A8C(void *);
    extern void fn_8031E910(void *, s32);
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BBA0[];
    *self = lbl_8041E0F0;
    fn_80372A8C(self);
    fn_8031E910(self, 0);
    if (flags & 1) {
        fn_80338184(lbl_8045BBA0, (s32)self);
    }
}

void fn_80372A8C(void *self) {
    extern u8 lbl_8045BBA0[];
    void fn_80338184(void *, s32);
    char *vt = *(char **)self;
    (*(void (**)(void *))(vt + 0x6C))((char *)self + *(s16 *)(vt + 0x68));
    fn_80338184(lbl_8045BBA0, M2C_FIELD(self, s32 *, 0x20));
    M2C_FIELD(self, s32 *, 0x20) = 0;
}

void fn_80372AE4(void *arg0) {
    extern void fn_8031EA2C(void *);
    typedef struct { void *p; char pad[0x80]; } Slot;
    s32 i;
    char *base;
    void *obj;
    void *next;

    base = M2C_FIELD(arg0, char **, 0x20);
    if (base != NULL) {
        for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x24); i++) {
            s32 *flags = (s32 *)((char *)arg0 + 0x28);
            Slot *slots = (Slot *)(base + 0x16C);
            if (flags[i] != 0) {
                obj = slots[i].p;
                next = M2C_FIELD(obj, void **, 8);
                fn_8031EA2C(obj);
                flags[i] = 0;
                slots[i].p = next;
            }
        }
    }
}

void fn_8037379C(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_8049631C = fn_802D6A90(lbl_80493EBC, fn_8037380C, fn_80373834, fn_80373860, 0, lbl_803F567C, lbl_80493858);
    }
}

void fn_8037380C(void) {
    M2C_UNK fn_803729C8();
    M2C_UNK fn_80373980(M2C_UNK);
    fn_80373980(0x48);
    fn_803729C8();
}

void fn_80373834(void *self) {
    fn_803729C8(fn_803739B0(0x48, self));
}

void fn_80373860(void *self) {
    fn_80372A2C(self, 2);
}

void fn_80373884(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493EBC[];
void *fn_803738C4(void) {
    return lbl_80493EBC;
}

extern s32 lbl_80493EC8[];
s32 fn_803738D0(void) {
    return lbl_80493EC8[0];
}

extern s32 lbl_80493ECC[];
s32 fn_803738DC(void) {
    return lbl_80493ECC[0];
}

extern u16 lbl_80493ED0[];
u16 fn_803738E8(void) {
    return lbl_80493ED0[0];
}

void *fn_803738F4(void) {
    return lbl_80493EBC;
}

extern u16 lbl_80493ED2[];
u16 fn_80373900(void) {
    return lbl_80493ED2[0];
}

s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8037380C(void);
void fn_80373834(void *);
void fn_80373860(void *);
extern u8 lbl_803F567C[];
extern u8 lbl_80493858[];
void fn_8037390C(s32 arg0) {
    fn_802D6A90(lbl_80493EBC, fn_8037380C, fn_80373834, fn_80373860, arg0, lbl_803F567C, lbl_80493858);
}

void fn_802D2430(void);
void fn_80373960(void) {
    fn_802D2430();
}

void fn_80373980(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BBA0[];
    fn_80338000(lbl_8045BBA0, arg0, 4);
}

void *fn_803739B0(u32 size, void *p);
void *fn_803739B0(u32 size, void *p) {
    return p;
}

void fn_803739B8(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BBA0[];
    fn_80338184(lbl_8045BBA0, arg0);
}

s32 fn_803739E4(u8 *self) {
    return *(s32 *)(self + 0x20);
}

void fn_803739EC(void) {
    void fn_8037379C(s32, s32);
    fn_8037379C(1, 0xFFFF);
}

