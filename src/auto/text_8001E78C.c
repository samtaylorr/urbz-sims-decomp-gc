/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8001FC30(void) {
    fn_800A23A4();
}

void fn_8001FC50(void) {

}

void fn_8001FC54(void) {

}

void fn_80021104(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
}

s32 fn_80021248(void) {
    return 1;
}

void fn_800235FC(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), f32 *, 0x10) = farg0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), f32 *, 0x14) = farg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), f32 *, 0x18) = farg2;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), f32 *, 0x1C) = farg3;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
void fn_80023A00(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80023A34(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)obj[0x11];
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 8), 3);
    }
}

s32 fn_80023A74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 fn_80023A7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}

s32 fn_80023A84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x7C);
}

void *fn_80023A8C(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8((void *)size);
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == fn_802D0AB8(p)) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void fn_80023B38(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_80023B6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14) != 0;
}

void fn_80023BD4(void) {
    M2C_UNK fn_80023864(M2C_UNK, M2C_UNK);
    fn_80023864(1, 0xFFFF);
}

