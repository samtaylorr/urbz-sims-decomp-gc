/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_803074F0(void);
s32 fn_801B68E8(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801B7920(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xC);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 4) != 0) {
        M2C_FIELD(temp_r9, s32 *, 4) = 0;
    }
}

void fn_801B793C(void) {

}

void fn_801B7940(void) {

}

void fn_801B7C94(void) {

}

void fn_801B8424(void) {

}

void fn_801B8614(void) {

}

void fn_801B8618(void) {

}

s32 fn_801B872C(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801B9CB8(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xC);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 4) != 0) {
        M2C_FIELD(temp_r9, s32 *, 4) = 0;
    }
}

void fn_801B9CD4(void) {

}

void fn_801B9CD8(void) {

}

void fn_801B9CDC(void) {

}

s32 fn_801BB33C(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801BB5CC(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xC);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 4) != 0) {
        M2C_FIELD(temp_r9, s32 *, 4) = 0;
    }
}

void fn_801BB5E8(void) {

}

void fn_801BB5EC(void) {

}

void fn_801BB5F0(void) {

}

s32 fn_801BB774(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801BB8F4(void) {

}

void fn_801BB8F8(void) {

}

void fn_801BB92C(void) {

}

s32 fn_801BB930(void) {
    return 0;
}

s32 fn_801BBAB0(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801BBFCC(void) {

}

void fn_801BBFD0(void) {

}

s32 fn_801BC084(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) & 1;
}

s32 fn_801BD6CC(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return temp_r0;
}

void fn_801BF628(void) {

}

void fn_801BF714(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | arg1);
}

void fn_801BF724(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) & ~arg1);
}

void fn_801BF79C(void) {
    fn_803074F0();
}

s32 fn_801BF7BC(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 1U) & 1;
}

s32 fn_801BFD60(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x38);
}

s32 fn_801BFD6C(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_801BFD74(s32 *self) {
    return self[6];
}

s32 fn_801BFD7C(s32 *self) {
    return self[7];
}

void fn_801C0120(void) {

}

void fn_801C019C(void) {

}

s32 fn_801C02BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

s32 fn_801C031C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_801C04DC(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_801C089C(void) {

}

s32 fn_801C0A50(s32 *self) {
    return self[7];
}

s32 fn_801C0A58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) & 1;
}

void fn_801C465C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

extern void fn_801C5778(void *);
void *fn_801C5720(void *self) {
    fn_801C5778(self);
    return self;
}

extern void fn_802D20E8(void *);
void fn_801C5750(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_801C5E3C(s32 *self, s32 value) {
    *self = value;
}

s32 fn_801C5E44(s32 *self) {
    return *self;
}

void fn_801C5E4C(void) {

}

void fn_801C5E50(void) {

}

void fn_801C5E54(void) {

}

void fn_801C5E58(void) {

}

void fn_801C5E5C(void) {

}

void fn_801C5E60(void) {

}

void fn_801C5E64(void) {

}

void fn_801C5E68(void) {

}

s32 fn_801C62C0(s32 *self) {
    return self[2];
}

void fn_801C6790(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

s32 fn_801C94E8(void) {
    return 1;
}

extern s32 lbl_804945C0;
s32 fn_801C95CC(void) {
    return lbl_804945C0;
}

u8 *fn_801C98C8(u8 *self) {
    return self + 8;
}

s32 fn_801C98D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x504);
}

