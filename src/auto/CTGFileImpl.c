/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8040A890[];
extern void fn_802D20E8(void *);
extern u8 lbl_803D04CC[];
extern u8 lbl_80495A30[];
extern void *fn_802D7F48(const char *, void *);
extern void fn_802D7F94(void *);
void fn_800C3E20(void **self, s32 flags) {
    *self = lbl_8040A890;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800C3F08(void *arg0) {
    M2C_UNK fn_802D8040(s32, s32, M2C_UNK);
    s32 fn_802D80A8(s32);
    s32 temp_r28;
    s32 temp_r29;

    temp_r28 = fn_802D80A8(M2C_FIELD(arg0, s32 *, 0x110));
    fn_802D8040(M2C_FIELD(arg0, s32 *, 0x110), 0, 2);
    temp_r29 = fn_802D80A8(M2C_FIELD(arg0, s32 *, 0x110));
    fn_802D8040(M2C_FIELD(arg0, s32 *, 0x110), temp_r28, 0);
    return temp_r29;
}

s32 fn_800C3F6C(void) {
    return 0;
}

s32 fn_800C3FAC(void) {
    return 0;
}

s32 fn_800C4040(void) {
    return 0;
}

s32 fn_800C4048(void) {
    return 0;
}

s32 fn_800C4050(void) {
    return 1;
}

void fn_800C4160(char *self, void *buf) {
    char *vt = *(char **)self;
    (*(void (**)(char *, void *, s32))(vt + 0x4C))(self + *(s16 *)(vt + 0x48), buf, 4);
}

void fn_800C4198(char *self, s32 val) {
    s32 tmp = val;
    char *vt = *(char **)self;
    (*(void (**)(char *, void *, s32))(vt + 0x54))(self + *(s16 *)(vt + 0x50), &tmp, 4);
}

void fn_800C43D4(void *self) {

}

void fn_800C43D8(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800C4400(void) {
    return 1;
}

void fn_800C4408(void) {

}

void fn_800C4508(void *self, void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

s32 fn_800C4548(void) {
    return 1;
}

s32 fn_800C4550(void) {
    return 1;
}

s32 fn_800C4558(void) {
    return 1;
}

s32 fn_800C4560(void) {
    return 1;
}

s32 fn_800C4568(void *self, const char *name) {
    void *f = fn_802D7F48(name, lbl_803D04CC);
    if (f != NULL) {
        fn_802D7F94(f);
    }
    return f != NULL;
}

void fn_800C45C0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_800C43D4(lbl_80495A30);
        } else {
            fn_800C43D8(lbl_80495A30, 2);
        }
    }
}

void **fn_800C4614(void **self) {
    *self = lbl_8040A890;
    return self;
}

void fn_800C4628(s32 arg0) {
    M2C_UNK fn_800F69E8(s32);
    fn_800F69E8(arg0 + 4);
}

void fn_800C45C0(s32 arg0, s32 arg1);

void fn_800C464C(void) {
    fn_800C45C0(1, 0xFFFF);
}

void fn_800C4678(void) {
    fn_800C45C0(0, 0xFFFF);
}

