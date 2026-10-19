/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void *fn_802D197C(void *heap, u32 size, s32 align);
extern void *fn_802DBBCC(void *heap, u32 size, s32 align);
extern void *fn_802DC3C0(void *heap, u32 size, s32 align, s32, s32);
extern void *fn_802D0B3C(void);
extern void fn_8003FD30(void *);
extern u8 lbl_80407F88[];
extern void *lbl_8049444C;
extern void *lbl_80494450;
void *fn_8003FB24(u32 size);
void fn_8003FBB4(void *arg0);
void *fn_8003FB24(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DBBCC(fn_802D0B3C(), size, 0);
        }
    }
    return p;
}

void fn_8003FBB4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8003FBE8(void) {
    lbl_8049444C = fn_8003FB24;
    lbl_80494450 = fn_8003FBB4;
}

void fn_8003FC04(void) {

}

void fn_8003FCD8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, void **, 0xE8) = lbl_80407F88;
    fn_8003FD30(arg0);
    M2C_FIELD(arg0, s32 *, 0x8) = 0;
    if (arg1 & 1) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), arg0);
    }
}

void fn_800402BC(s32 arg0, void *arg1) {
    M2C_UNK fn_800402E8(s32, s32);
    fn_800402E8(M2C_FIELD(arg1, s32 *, 0x18), arg0);
}

void fn_80041458(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8004148C(s32 *self) {
    return self[2];
}

s32 fn_80041494(s32 *self) {
    return *self;
}

s32 fn_8004149C(s32 *self) {
    return self[1];
}

void fn_800414A4(s32 *self) {
    self[0] = 1;
}

void fn_800414B0(s32 *self) {
    self[1] = 1;
}

void fn_80041580(void **arg0) {
    M2C_UNK fn_8003FE70(s32);
    M2C_UNK fn_800415D0(void **);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            fn_8003FE70(M2C_FIELD(var_r31, s32 *, 0));
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
    fn_800415D0(arg0);
}

void fn_80041664(void **arg0) {
    M2C_UNK fn_80040038(s32);
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            fn_80040038(M2C_FIELD(var_r31, s32 *, 0));
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}

void fn_800417FC(void **arg0, s32 arg1) {
    void *temp_r9;
    void *var_r3;

    var_r3 = *arg0;
    if (var_r3 != NULL) {
        do {
            temp_r9 = M2C_FIELD(var_r3, void **, 0);
            if ((s32) M2C_FIELD(temp_r9, s32 *, 8) == arg1) {
                M2C_FIELD(temp_r9, s32 *, 0) = 1;
            }
            var_r3 = M2C_FIELD(var_r3, void **, 8);
        } while (var_r3 != NULL);
    }
}

void fn_80041A5C(void) {
    M2C_UNK fn_8004198C(M2C_UNK, M2C_UNK);
    fn_8004198C(1, 0xFFFF);
}

void fn_80041A88(void) {
    M2C_UNK fn_8004198C(M2C_UNK, M2C_UNK);
    fn_8004198C(0, 0xFFFF);
}

