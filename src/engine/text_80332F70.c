/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s16 delta;
    s16 pad;
    void *func;
} VtblEntry;

extern void fn_8031E8B0(void *);

static inline void fn_80332F70_init(void *self, s32 start, s32 end) {
    fn_8031E8B0(self);
    M2C_FIELD(self, s32 *, 0x24) = start;
    M2C_FIELD(self, s32 *, 0x28) = end - 1;
}

void fn_80335F5C(void *);
void fn_80335FD8(void *, s32);
extern u8 lbl_8041BC40[];
extern u8 lbl_8045B198[];

void fn_8033740C(void);
extern void *fn_802D0AB8(void);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DBBCC(void *, u32, s32);
extern void *fn_802D0B3C(void);
extern void fn_8031E8B0(void *);
extern u8 lbl_8041BC88[];
void *fn_80332F70(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    VtblEntry *vt;
    s32 start;
    void *heap;
    void *p;

    vt = M2C_FIELD(arg1, VtblEntry **, 0x28);
    start = ((s32 (*)(void *))vt[6].func)((u8 *)arg1 + vt[6].delta);
    heap = fn_802D0AB8();
    p = fn_802D197C(heap, 0x2C, 4);
    if (p == NULL && (p = fn_802DBBCC(heap, 0x2C, 0)) == NULL && heap == fn_802D0AB8()) {
        heap = fn_802DBBCC(fn_802D0B3C(), 0x2C, 0);
    } else {
        heap = p;
    }
    fn_80332F70_init(heap, start, arg2);
    *(void **)heap = lbl_8041BC88;
    M2C_FIELD(heap, s32 *, 0x8) = arg3;
    M2C_FIELD(heap, void **, 0x20) = arg1;
    vt = M2C_FIELD(arg1, VtblEntry **, 0x28);
    ((void (*)(void *, s32, s32))vt[5].func)((u8 *)arg1 + vt[5].delta, arg2, 1);
    return heap;
}

M2C_UNK fn_80333068(M2C_UNK arg0, M2C_UNK arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            void *p = lbl_8045B198;
            fn_80335F5C(p);
            M2C_FIELD(p, s32 *, 0x68) = 1;
            M2C_FIELD(p, void **, 0xA4) = lbl_8041BC40;
        } else {
            fn_80335FD8(lbl_8045B198, 2);
        }
    }
}

void fn_803330DC(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_803330FC(void) {
    fn_80337430();
}

void *fn_8033311C(void *arg0) {
    fn_80335F5C(arg0);
    M2C_FIELD(arg0, s32 *, 0x68) = 1;
    M2C_FIELD(arg0, void **, 0xA4) = lbl_8041BC40;
    return arg0;
}

void fn_80333160(void) {
    M2C_UNK fn_80333068(M2C_UNK, M2C_UNK);
    fn_80333068(1, 0xFFFF);
}

void fn_8033318C(void) {
    fn_80333068(0, 0xFFFF);
}

