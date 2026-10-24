/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_80435398[];
extern void fn_80193050(void *);
extern void fn_803AA364(void *, s32);
extern void *fn_80193260(void *, s32);
extern void fn_801961D4(void *);
extern s32 fn_80194D94(void *);
void fn_801978E4(s32 arg0, s32 arg1);

void fn_80197794(void *arg0, s32 arg1) {
    s32 *vec;
    s32 begin;
    s32 end;
    s32 p;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    fn_801961D4(lbl_80435398);
    vec = (s32 *)((u8 *)arg0 + 0x24);
    begin = vec[0];
    M2C_FIELD(arg0, s32 *, 8) = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = M2C_FIELD(arg0, s32 *, 0x14);
    end = vec[1];
    for (p = begin; p != end; p += 8) {
    }
    vec[1] = begin;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = -1;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    if (fn_80194D94(arg0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = 1;
    }
}

s32 fn_80197838(void *arg0) {
    s32 idx;
    s32 **vec;
    s32 *p;
    f32 best;
    f32 f;

    idx = 0;
    vec = (s32 **)((u8 *)arg0 + 0x3C);
    best = M2C_FIELD(fn_80193260(lbl_80435398, *M2C_FIELD(arg0, s32 **, 0x3C)), f32 *, 0x20);
    for (p = M2C_FIELD(arg0, s32 **, 0x3C) + 1; p != vec[1]; p++) {
        f = M2C_FIELD(fn_80193260(lbl_80435398, *p), f32 *, 0x20);
        if (f < best) {
            best = f;
            idx = p - M2C_FIELD(arg0, s32 **, 0x3C);
        }
    }
    return *(s32 *)((s32)M2C_FIELD(arg0, s32 **, 0x3C) + idx * 4);
}

void fn_801978E4(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_80193050(lbl_80435398);
        } else {
            fn_803AA364(lbl_80435398, 2);
        }
    }
}

void fn_80197938(void) {
    fn_801978E4(1, 0xFFFF);
}

void fn_80197964(void) {
    fn_801978E4(0, 0xFFFF);
}

