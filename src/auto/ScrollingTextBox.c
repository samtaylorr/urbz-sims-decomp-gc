/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_80248488(void *, s32, u32);

static inline void *ScrollingTextBox_AllocAligned(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void fn_8009A93C(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x14) = farg0;
    M2C_FIELD(arg0, f32 *, 0x18) = farg1;
}

void fn_8009AA44(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, f32 *, 0) = farg0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), f32 *, 4) = farg1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), f32 *, 8) = farg2;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), f32 *, 0xC) = farg3;
    }
}

void fn_8009AA70(void *arg0, s32 arg1) {
    f32 fn_8039AA70(s32, M2C_UNK);
    void *temp_r30;

    temp_r30 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r30 != NULL) {
        M2C_FIELD(temp_r30, f32 *, 0) = fn_8039AA70(arg1, 0);
        M2C_FIELD(temp_r30, f32 *, 4) = fn_8039AA70(arg1, 1);
        M2C_FIELD(temp_r30, f32 *, 8) = fn_8039AA70(arg1, 2);
        M2C_FIELD(temp_r30, f32 *, 0xC) = fn_8039AA70(arg1, 3);
    }
}

void fn_8009AAF8(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x34) = farg0;
    M2C_FIELD(arg0, f32 *, 0x38) = farg1;
}

void fn_8009B19C(s32 *self, s32 value) {
    *self = value;
}

extern void fn_802D20E8(void *);
void fn_8009B1A4(void *self, s32 flags) {
    extern void fn_802D20E8(void *);
    *(s32 *)self = 0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8009B580(void) {

}

void fn_8009CBA4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8009CBD8(void) {
    M2C_UNK fn_8009CA88(M2C_UNK, M2C_UNK);
    fn_8009CA88(1, 0xFFFF);
}

