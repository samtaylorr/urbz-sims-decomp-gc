/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct PadStatus {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s8 err;
    s8 unkB;
} PadStatus;

typedef struct VtEntry {
    s16 delta;
    s16 pad;
    void (*fn)(void *);
} VtEntry;

extern u8 lbl_8041BDE8[];
void fn_802D20E8(void *);
void fn_80333694(void *);
extern u8 lbl_8041C538[];
extern void *lbl_80494FCC;
void *fn_8033E370(void *self) {
    fn_80333694(self);
    M2C_FIELD(self, u8 **, 0x20) = lbl_8041C538;
    lbl_80494FCC = self;
    return self;
}

void fn_8033E3B0(void *self, s32 flags) {
    M2C_FIELD(self, u8 **, 0x20) = lbl_8041BDE8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8026A7B4(u32);
void fn_8026A8C8(void);
void *fn_802D1FC8(s32);
void fn_80310264(void *);
extern u8 lbl_8041C478[];
extern u8 lbl_804939C0[];
extern void **lbl_80494FC8;
s32 fn_8033E3E4(void) {
    s32 i;
    void **arr;
    void *obj;

    fn_8026A8C8();
    fn_8026A7B4(0x80000000);
    fn_8026A7B4(0x40000000);
    fn_8026A7B4(0x20000000);
    fn_8026A7B4(0x10000000);
    lbl_80494FC8 = (void **)lbl_804939C0;
    for (i = 0; i <= 3; i++) {
        arr = lbl_80494FC8;
        obj = fn_802D1FC8(0x20C);
        fn_80310264(obj);
        M2C_FIELD(obj, u8 **, 0x204) = lbl_8041C478;
        arr[i] = obj;
        M2C_FIELD(lbl_80494FC8[i], s32 *, 0x208) = i;
    }
    return 1;
}

void fn_8033E484(void) {

}

void fn_8026A6A4(u32);
void fn_8026AA18(PadStatus *);
void fn_80348984(PadStatus *);
void fn_803104FC(void *);
void fn_80310C98(void *, s32);
void fn_80310CBC(void *, s32);
void fn_80310DE4(void *, s32, s32);
void fn_803336D4(void *);
s32 fn_803BE7A0(void *, PadStatus *);
void fn_803BE99C(void *, PadStatus *, s32, s32);
void fn_8033E488(void *self) {
    PadStatus *pads;
    u32 mask;
    s32 i;

    pads = (PadStatus *)((u8 *)self + 0x24);
    fn_8026AA18(pads);
    fn_80348984(pads);
    mask = 0;
    if (M2C_FIELD(self, s8 *, 0x2E) == -1) {
        mask |= 0x80000000;
    }
    if (M2C_FIELD(self, s8 *, 0x3A) == -1) {
        mask |= 0x40000000;
    }
    if (M2C_FIELD(self, s8 *, 0x46) == -1) {
        mask |= 0x20000000;
    }
    if (M2C_FIELD(self, s8 *, 0x52) == -1) {
        mask |= 0x10000000;
    }
    if (mask != 0) {
        fn_8026A6A4(mask);
    }
    for (i = 0; i < 4; i++) {
        PadStatus st = *pads;
        void *obj = lbl_80494FC8[i];
        VtEntry *e;

        e = (VtEntry *)(M2C_FIELD(obj, u8 **, 0x204) + 0x80);
        e->fn((u8 *)obj + e->delta);
        if (st.err == 0) {
            M2C_FIELD(obj, s32 *, 4) |= 7;
            fn_80310C98(obj, 1);
            fn_80310CBC(obj, M2C_FIELD(obj, s32 *, 0x1AC) != 0 ? M2C_FIELD(obj, s32 *, 0x1B0) : fn_803BE7A0(obj, &st));
            fn_803BE99C(obj, &st, 0, 0);
            fn_80310DE4(obj, 0, 0);
            fn_803BE99C(obj, &st, 0, 1);
            fn_80310DE4(obj, 0, 1);
            fn_803BE99C(obj, &st, 1, 0);
            fn_80310DE4(obj, 1, 0);
            fn_803BE99C(obj, &st, 1, 1);
            fn_80310DE4(obj, 1, 1);
        } else if (st.err == -2 || st.err == -3) {
            M2C_FIELD(obj, s32 *, 4) &= ~2;
        } else if (st.err == -1) {
            M2C_FIELD(obj, s32 *, 4) &= ~7;
            fn_803104FC(obj);
        } else {
            M2C_FIELD(obj, s32 *, 4) = ~7;
            fn_803104FC(obj);
        }
        pads++;
    }
    fn_803336D4(self);
}

extern u8 lbl_8045D1FC[];
void fn_8033E6BC(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8033E370(lbl_8045D1FC);
        } else {
            fn_8033E3B0(lbl_8045D1FC, 2);
        }
    }
}

void fn_8033E710(void) {
    fn_8033E6BC(1, 0xFFFF);
}

void fn_8033E73C(void) {
    fn_8033E6BC(0, 0xFFFF);
}

