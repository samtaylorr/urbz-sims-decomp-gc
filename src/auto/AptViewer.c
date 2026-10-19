/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800C3828(void *);
void fn_8000A794(void) {

}

s32 fn_8000B210(void) {
    return 0;
}

s32 fn_8000C12C(u8 *self, u32 index) {
    if (*(s32 *)(self + 0x3A8) == 0) {
        return -1;
    }
    if (index > 1) {
        index = 0;
    }
    return ((s32 (*)[10][2])(self + 0x3B0))[index][((s32 *)(self + 0x450))[index]][0];
}

extern void *lbl_80494FCC;
s32 fn_803338C0(void *);
s32 fn_803338D0(void *, s32);
s32 fn_803338F0(void *, s32);
s32 fn_8033394C(void *);
s32 fn_8000C170(void *self, s32 arg) {
    s32 idx;
    s32 result;

    result = 0;
    if (fn_803338C0(lbl_80494FCC)) {
        void *mgr = lbl_80494FCC;
        idx = fn_803338F0(mgr, arg);
        result = fn_803338D0(mgr, idx);
    } else {
        idx = fn_8033394C(lbl_80494FCC);
        if (idx != -1) {
            result = fn_803338D0(lbl_80494FCC, idx);
        }
    }
    return result;
}

s32 fn_8000C1EC(void) {
    return 0;
}

void fn_8000C1F4(void *self, void *arg) {
    fn_800C3828(arg);
}

s32 fn_8000C218(void) {
    return 1;
}

void fn_800C38C8(void *);
void fn_8000C220(void *self, void *arg) {
    fn_800C38C8(arg);
}

s32 fn_8000C244(void) {
    return 1;
}

