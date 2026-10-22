/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void *fn_802D0AB8(void);
void *fn_802D0B3C(void);
void *fn_802D197C(void *, u32, s32);
void *fn_802DBBCC(void *, u32, s32);
u8 *fn_80371698(void *p);
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

extern u8 lbl_8045B2E8[];
extern u8 lbl_8041BD58[];
void fn_80335F5C(void *p);
void fn_80335FD8(void *p, s32 n);
u8 *fn_80333360(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *obj;

    obj = fn_80371698(Heap_Alloc(0xA4));
    *(s32 *)(obj + 0x8) = arg3;
    fn_802C5BBC(arg1, obj);
    return obj;
}

void fn_80333400(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_8045B2E8;
            fn_80335F5C(p);
            *(u8 **)(p + 0xA4) = lbl_8041BD58;
            return;
        }
        fn_80335FD8(lbl_8045B2E8, 2);
    }
}

void fn_8033740C(void);
void fn_8033346C(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_8033348C(void) {
    fn_80337430();
}

void fn_803334AC(void) {
    fn_80333400(1, 0xFFFF);
}

void fn_803334D8(void) {
    fn_80333400(0, 0xFFFF);
}

