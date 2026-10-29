/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8040A890[];
extern void fn_802D20E8(void *);
extern u8 lbl_803D04CC[];
extern u8 lbl_80495A30[];
extern void *fn_802D7F48(const char *, void *);
extern void fn_802D7F94(void *);

static inline void CTGFile_Write(char *self, void *buf, s32 size) {
    char *vt = *(char **)self;
    (*(void (**)(char *, void *, s32))(vt + 0x54))(self + *(s16 *)(vt + 0x50), buf, size);
}
void fn_800C3E20(void **self, s32 flags) {
    *self = lbl_8040A890;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_8040A7D8[];
s32 fn_800C4050(void *self);

void **fn_800C3E54(void **self) {
    extern void fn_800F687C(void *, void *, s32);
    *self = lbl_8040A7D8;
    fn_800F687C(self + 1, self + 3, 0x104);
    self[0x44] = 0;
    return self;
}

void fn_800C3EA4(void **self, s32 flags) {
    *self = lbl_8040A7D8;
    if (self[0x44] != 0) {
        fn_802D7F94(self[0x44]);
    }
    self[0x44] = 0;
    fn_800C4050(self);
    fn_800C3E20(self, flags);
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

s32 fn_800C3F74(void *self, void *buf, s32 size) {
    s32 fn_802D7FC8(void *, s32, s32, s32);
    s32 f = M2C_FIELD(self, s32 *, 0x110);
    if (f == 0) {
        return 0;
    }
    return fn_802D7FC8(buf, 1, size, f);
}

s32 fn_800C3FAC(void) {
    return 0;
}

s32 fn_800C3FB4(void *self, s32 pos) {
    M2C_UNK fn_802D8040(s32, s32, M2C_UNK);
    fn_802D8040(M2C_FIELD(self, s32 *, 0x110), pos, 0);
    return 1;
}

s32 fn_800C3FE0(void *self, s32 pos) {
    M2C_UNK fn_802D8040(s32, s32, M2C_UNK);
    fn_802D8040(M2C_FIELD(self, s32 *, 0x110), pos, 0);
    return 0;
}

s32 fn_800C400C(void *self) {
    s32 fn_802D80A8(s32);
    s32 f = M2C_FIELD(self, s32 *, 0x110);
    return f != 0 ? fn_802D80A8(f) : 0;
}

s32 fn_800C4040(void) {
    return 0;
}

s32 fn_800C4048(void) {
    return 0;
}

s32 fn_800C4050(void *self) {
    return 1;
}

s32 fn_800C4058(char *self) {
    char *vt = *(char **)self;
    return (*(s32 (**)(char *))(vt + 0x14))(self + *(s16 *)(vt + 0x10)) != 0;
}

s32 fn_800C409C(char *self, s32 arg1, s32 arg2) {
    char *vt = *(char **)self;
    return (*(s32 (**)(char *, s32, s32))(vt + 0x1C))(self + *(s16 *)(vt + 0x18), arg1, arg2) == arg2;
}

void fn_800C40E8(char *self, void *buf) {
    char *vt = *(char **)self;
    (*(void (**)(char *, void *, s32))(vt + 0x4C))(self + *(s16 *)(vt + 0x48), buf, 1);
}

void fn_800C4120(char *self, s8 val) {
    s8 tmp = val;
    char *vt = *(char **)self;
    (*(void (**)(char *, void *, s32))(vt + 0x54))(self + *(s16 *)(vt + 0x50), &tmp, 1);
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

void fn_800C41D8(char *self, void *buf) {
    char *vt = *(char **)self;
    (*(void (**)(char *, void *, s32))(vt + 0x4C))(self + *(s16 *)(vt + 0x48), buf, 4);
}

void fn_800C4210(char *self, f32 val) {
    f32 tmp;
    char *vt = *(char **)self;
    tmp = val;
    (*(void (**)(char *, void *, s32))(vt + 0x54))(self + *(s16 *)(vt + 0x50), &tmp, 4);
}

s32 fn_800C4250(char *self, char *buf) {
    u8 b;
    s32 len;
    char *vt = *(char **)self;
    if ((*(s32 (**)(char *, void *))(vt + 0x5C))(self + *(s16 *)(vt + 0x58), &b) == 0) {
        goto fail;
    }
    if (b == 0xFF) {
        vt = *(char **)self;
        (*(s32 (**)(char *, void *))(vt + 0x6C))(self + *(s16 *)(vt + 0x68), &len);
    } else {
        len = b;
    }
    vt = *(char **)self;
    if ((*(s32 (**)(char *, void *, s32))(vt + 0x4C))(self + *(s16 *)(vt + 0x48), buf, len) == 0) {
    fail:
        return 0;
    }
    buf[len] = 0;
    return 1;
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

