/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_80375CB8(s32 arg0, s32 arg1, s32 arg2);
void fn_80375D08(void) {
    ((void (*)(void))fn_80375CB8)();
}

void fn_80240EC8(void);
void fn_80375D28(void) {
    fn_80240EC8();
}

s32 fn_80375D48(s32 arg0, s32 *arg1) {
    arg1[1] = 0x2000;
    return 0;
}

void fn_80240EE0(void);
void fn_80375D58(void) {
    fn_80240EE0();
}

void fn_80240ED0(void);
void fn_80375D78(void) {
    fn_80240ED0();
}

s32 fn_80375D98(s32 arg0, s32 arg1, ...) {
    if (arg1 & 0x200) {
        s32 r = fn_80240EB8(arg0, 0);
        if (r != -1) {
            if (((s32 (*)(s32))fn_80240EC8)(r) != 0) {
                return -1;
            }
        }
    }
    return fn_80240EC0(arg0, arg1, 0);
}

s32 fn_80375C5C(s32, s32);
s32 fn_80240ED8(s32);
s32 fn_80240EB8(s32, s32);
s32 fn_80240EC0(s32, s32, s32);
s32 fn_80375E3C(u32 arg0) {
    return __cntlzw(arg0);
}

s32 fn_80375E44(void) {
    return 0;
}

s32 fn_80375E4C(void) {
    return 0;
}

