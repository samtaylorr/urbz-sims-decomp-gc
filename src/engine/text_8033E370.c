/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

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

void fn_8033E710(void) {
    M2C_UNK fn_8033E6BC(M2C_UNK, M2C_UNK);
    fn_8033E6BC(1, 0xFFFF);
}

