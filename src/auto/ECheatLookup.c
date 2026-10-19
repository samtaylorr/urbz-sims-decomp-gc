/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802C5240();
int fn_802486DC(const char *a, const char *b);
char *fn_80248A10(char *dst, const char *src, int n);
unsigned int fn_80248808(const char *s);
extern char lbl_803C2A3C[];
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

