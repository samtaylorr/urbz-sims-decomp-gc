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
void *fn_803204A8(void *);
extern u8 lbl_8045B634[];
extern u8 lbl_8041BEF8[];
void fn_80335F5C(void *p);
void fn_80335FD8(void *p, s32 n);
void *fn_8033536C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *obj;
    u8 *vt;

    obj = fn_803204A8(Heap_AllocAligned(0x80, 0x10));
    *(s32 *)(obj + 8) = arg3;
    vt = *(u8 **)obj;
    (*(void (**)(void *, s32))(vt + 0x4C))(obj + *(s16 *)(vt + 0x48), arg1);
    return obj;
}

void fn_8033542C(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_8045B634;
            fn_80335F5C(p);
            *(u8 **)(p + 0xA4) = lbl_8041BEF8;
            return;
        }
        fn_80335FD8(lbl_8045B634, 2);
    }
}

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

void fn_80335504(void) {
    fn_8033542C(0, 0xFFFF);
}

