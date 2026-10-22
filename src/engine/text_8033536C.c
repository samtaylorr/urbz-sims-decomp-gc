/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8033542C(s32 arg0, s32 arg1);

void *fn_802D0AB8(void);
void *fn_802D0B3C(void);
void *fn_802D197C(void *, u32, s32);
void *fn_802DC3C0(void *, u32, s32, s32, s32);

static inline void *Heap_AllocAligned(u32 size, s32 align) {
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, align);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, align, 0, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DC3C0(fn_802D0B3C(), size, align, 0, 0);
        }
    }
    return p;
}

void fn_8033740C(void);
void fn_80335498(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_803354B8(void) {
    fn_80337430();
}

void fn_803354D8(void) {
    fn_8033542C(1, 0xFFFF);
}

