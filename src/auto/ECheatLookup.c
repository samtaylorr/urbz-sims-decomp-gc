/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802C5240();
int fn_802486DC(const char *a, const char *b);
char *fn_80248A10(char *dst, const char *src, int n);
unsigned int fn_80248808(const char *s);
void fn_80312504(void *);
void fn_8001A124(s32, s32);
extern char lbl_803C2A3C[];
extern u8 lbl_80406DB8[];
extern u8 lbl_80406DF8[];
extern u8 lbl_8041ED28[];
void fn_80018D98(s32 arg0) {
    M2C_UNK fn_80018DCC(s32);
    fn_800194C0();
    fn_80018DCC(arg0);
}

void fn_800194C0(void) {

}

void fn_8001991C(char *self) {
    *(s32 *)(self + 0x4) = -1;
    self[8] = 0;
    *(s32 *)(self + 0x4C) = 2;
    *(s32 *)(self + 0x5C) = 0;
    *(char **)(self + 0x48) = lbl_803C2A3C;
    *(s32 *)(self + 0x50) = 0;
    *(s32 *)(self + 0x54) = 0;
    *(s32 *)(self + 0x58) = 0;
}

char *fn_8001995C(char *self, s32 arg1, const char *arg2, s32 arg3, s32 arg4, char *arg5, s32 arg6, s32 arg7) {
    *(s32 *)(self + 0x4) = arg1;
    fn_80248A10(self + 8, arg2, 0x40);
    *(s32 *)(self + 0x4C) = arg3;
    *(s32 *)(self + 0x50) = arg4;
    self[0x47] = 0;
    fn_80248808(arg5);
    if (fn_80248808(arg5) + 1 > 0x15E) {
        *(char **)(self + 0x48) = lbl_803C2A3C;
    } else {
        *(char **)(self + 0x48) = arg5;
    }
    *(s32 *)(self + 0x54) = arg7;
    *(s32 *)(self + 0x58) = arg6;
    *(s32 *)(self + 0x5C) = 0;
    return self;
}

void fn_80019C58(char *self) {
    extern void fn_802C5240(void *);
    fn_802C5240(self + 8);
}

void fn_80019C7C(void) {
    fn_802C5240();
}

int fn_80019C9C(char *self, const char *name) {
    return fn_802486DC(name, self + 8) == 0;
}

void fn_80019CD0(char *self, char *buf, int size) {
    fn_80248A10(buf, *(char **)(self + 0xC) + 8, size);
    buf[size - 1] = 0;
}

void fn_8001A124(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_8041ED28;
            fn_80312504(p);
            *(u8 **)(p + 8) = lbl_80406DF8;
            return;
        }
        *(u8 **)(lbl_8041ED28 + 8) = lbl_80406DF8;
    }
}

void *fn_8001A190(void **self, s32 arg1) {
    fn_80312504(self);
    self[3] = (void *)arg1;
    self[2] = lbl_80406DB8;
    return self;
}

s32 fn_8001A1D4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x4C);
}

s32 fn_8001A1E0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x50);
}

void fn_8001A1EC(void) {
    fn_8001A124(1, 0xFFFF);
}

void fn_8001A218(void) {
    fn_8001A124(0, 0xFFFF);
}

