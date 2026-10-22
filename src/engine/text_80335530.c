/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void *fn_802D0AB8(void);
void *fn_802D0B3C(void);
void *fn_802D197C(void *, u32, s32);
void *fn_802DBBCC(void *, u32, s32);
u8 *fn_80372510(void *p);
void fn_802C5BBC(s32 arg, void *obj);

static inline void *Heap_Alloc(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DBBCC(fn_802D0B3C(), size, 0);
        }
    }
    return p;
}

u8 *fn_80335530(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *obj;

    obj = fn_80372510(Heap_Alloc(0x2C));
    *(s32 *)(obj + 0x8) = arg3;
    fn_802C5BBC(arg1, obj);
    return obj;
}

extern u8 lbl_8045B6DC[];
extern u8 lbl_8041BF40[];
void fn_80335F5C(void *p);
void fn_80335FD8(void *p, s32 n);
void fn_803355D0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_8045B6DC;
            fn_80335F5C(p);
            *(u8 **)(p + 0xA4) = lbl_8041BF40;
            return;
        }
        fn_80335FD8(lbl_8045B6DC, 2);
    }
}

void fn_8033740C(void);
void fn_8033563C(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_8033565C(void) {
    fn_80337430();
}

void fn_8033567C(void) {
    fn_803355D0(1, 0xFFFF);
}

void fn_803356A8(void) {
    fn_803355D0(0, 0xFFFF);
}

