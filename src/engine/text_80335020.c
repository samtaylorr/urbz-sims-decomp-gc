/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void *fn_802D0AB8(void);
void *fn_802D0B3C(void);
void *fn_802D197C(void *, u32, s32);
void *fn_802DBBCC(void *, u32, s32);

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

void fn_802D0C44(void);
void fn_80335020(void) {
    fn_802D0C44();
}

extern u8 lbl_8045B4E4[];
extern u8 lbl_8041BE68[];
void fn_80335F5C(void *p);
void fn_80335FD8(void *p, s32 n);
M2C_UNK fn_803350E4(M2C_UNK arg0, M2C_UNK arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_8045B4E4;
            fn_80335F5C(p);
            *(u8 **)(p + 0xA4) = lbl_8041BE68;
            return;
        }
        fn_80335FD8(lbl_8045B4E4, 2);
    }
}

void fn_8033740C(void);
void fn_80335150(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_80335170(void) {
    fn_80337430();
}

void fn_80335190(void) {
    M2C_UNK fn_803350E4(M2C_UNK, M2C_UNK);
    fn_803350E4(1, 0xFFFF);
}

void fn_803351BC(void) {
    fn_803350E4(0, 0xFFFF);
}

