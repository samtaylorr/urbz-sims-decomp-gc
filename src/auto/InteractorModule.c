/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } Vec3f;

extern void *fn_8022554C(void *);
extern void fn_8022F404(void *, void *);
void fn_80237C70(void *arg0) {
    fn_8022F404(fn_8022554C(arg0), arg0);
}

void fn_80239684(void *arg0) {
    M2C_UNK fn_80237FE8();
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0xC0);
    temp_r0 = temp_r9 & 1;
    if (temp_r0 != 0) {
        temp_r0_2 = temp_r9 & ~0x45;
        M2C_FIELD(arg0, s32 *, 0xC0) = temp_r0_2;
        if (!(temp_r9 & 0x200)) {
            M2C_FIELD(arg0, s32 *, 0xC0) = (s32) (temp_r0_2 & 0xFFFFFFF7);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xC0) = temp_r0;
        fn_80237FE8();
    }
}

void fn_802396D4(s32 arg0) {
    M2C_UNK fn_8022A394(s32, s32, M2C_UNK);
    fn_8022A394(arg0 + 8, arg0 + 0x20, 2);
}

void fn_80239E3C(void *arg0, s32 arg1, f32 farg0) {
    switch (arg1) {                                 /* irregular */
    case 7:
        M2C_FIELD(arg0, f32 *, 0x34) = farg0;
        return;
    case 8:
        M2C_FIELD(arg0, f32 *, 0x38) = farg0;
        return;
    case 11:
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        return;
    case 12:
        M2C_FIELD(arg0, f32 *, 0x40) = farg0;
        return;
    }
}

void fn_80239EB0(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022F424(s32, s32);
    fn_8022F424(arg1, arg0);
}

void fn_80239EDC(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022F480(s32, s32);
    fn_8022F480(arg1, arg0);
}

s32 fn_8023C218(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 7U) & 1;
}

s32 fn_8023C224(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 4U) & 1;
}

s32 fn_8023C230(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 2U) & 1;
}

s32 fn_8023C23C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 3U) & 1;
}

s32 fn_8023C248(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 8U) & 1;
}

s32 fn_8023C254(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0xC0) >> 9U) & 1;
}

s32 fn_8023C260(void *arg0) {
    return (M2C_FIELD(arg0, u32 *, 0xC0) & 0x100) ? *M2C_FIELD(arg0, s32 **, 0xD4) : 0;
}

void fn_8023C280(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x5C) = *arg1;
}

void fn_8023C2A0(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x68) = *arg1;
}

s32 fn_8023C2C0(s32 arg0) {
    return arg0 + 0x5C;
}

s32 fn_8023C2C8(s32 arg0) {
    return arg0 + 0x68;
}

f32 fn_8023C2D0(void) {
    extern f32 lbl_80496760;
    return lbl_80496760;
}

f32 fn_8023C2D8(void *arg0) {
    extern f32 lbl_80496764;
    extern f32 lbl_80496768;
    return (M2C_FIELD(arg0, u32 *, 0xC0) & 0x100) ? lbl_80496768 : lbl_80496764;
}

void fn_8023C2F0(void) {

}

extern void fn_8022E84C(void *, void *);
void fn_8023C45C(void *arg0) {
    fn_8022E84C(fn_8022554C(arg0), arg0);
}

void fn_8023D840(void *arg0, s32 arg1, f32 farg0) {
    switch (arg1) {                                 /* irregular */
    case 7:
        M2C_FIELD(arg0, f32 *, 0x34) = farg0;
        return;
    case 8:
        M2C_FIELD(arg0, f32 *, 0x38) = farg0;
        return;
    case 11:
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        return;
    case 12:
        M2C_FIELD(arg0, f32 *, 0x40) = farg0;
        return;
    }
}

void fn_8023D88C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022E86C(s32, s32);
    fn_8022E86C(arg1, arg0);
}

void fn_8023D8B8(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022E8C8(s32, s32);
    fn_8022E8C8(arg1, arg0);
}

s32 fn_8023E77C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 8);
}

s32 fn_8023E89C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x84) >> 7U) & 1;
}

s32 fn_8023E8A8(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x84) >> 4U) & 1;
}

s32 fn_8023E8B4(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x84) >> 2U) & 1;
}

s32 fn_8023E8C0(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x84) >> 3U) & 1;
}

f32 fn_8023E8CC(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x80);
}

void fn_8023E8D4(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x5C) = *arg1;
}

void fn_8023E8F4(u8 *arg0, Vec3f *arg1) {
    *(Vec3f *)(arg0 + 0x68) = *arg1;
}

s32 fn_8023E934(s32 arg0) {
    return arg0 + 0x5C;
}

s32 fn_8023E93C(s32 arg0) {
    return arg0 + 0x68;
}

s32 fn_8023E944(s32 arg0) {
    return arg0 + 0x74;
}

f32 fn_8023E94C(void) {
    extern f32 lbl_80496770;
    return lbl_80496770;
}

f32 fn_8023E954(void) {
    extern f32 lbl_80496774;
    return lbl_80496774;
}

void fn_8023EA08(void) {
    M2C_UNK fn_8023E850(M2C_UNK, M2C_UNK);
    fn_8023E850(1, 0xFFFF);
}

