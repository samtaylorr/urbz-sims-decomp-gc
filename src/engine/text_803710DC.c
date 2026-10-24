/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
void *fn_80371404(void);
void *fn_8037117C(void *);
void fn_80371484(void *);
void fn_803714A4(void *);
extern void *fn_802D0B3C(void);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DBBCC(void *, u32, s32);
extern void *fn_802D0AB8();

static inline void *Alloc(u32 size) {
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
extern u8 lbl_80493E1C[];
extern u8 lbl_803F5530[];
extern u8 lbl_80493858[];
extern s32 lbl_8049630C;

void fn_802D2FD0(void);
void fn_803710DC(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_803710FC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8037113C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void *fn_8037117C(void *self) {
    extern void fn_8031E8B0(void *);
    extern u8 lbl_8041DED0[];
    fn_8031E8B0(self);
    M2C_FIELD(self, s32 *, 0x20) = 0;
    *(void **)self = lbl_8041DED0;
    return self;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_803711C0(void **arg0, s32 arg1) {
    extern void fn_8037121C(void *);
    extern void fn_8031E910(void *, s32);
    extern void *fn_802D0AB8();
    extern void fn_802D1A00(void *, void *);
    extern u8 lbl_8041DED0[];

    *arg0 = lbl_8041DED0;
    fn_8037121C(arg0);
    fn_8031E910(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

void fn_80371258(void *self, void *stream) {
    extern void fn_8031E988(void *, void *);
    char *vt;
    void (*func)(void *, void *, s32);
    void *obj;
    s32 size;

    fn_8031E988(self, stream);
    vt = M2C_FIELD(stream, char **, 0x18);
    func = (void (*)(void *, void *, s32))M2C_FIELD(vt, void **, 0x3C);
    obj = (char *)stream + M2C_FIELD(vt, s16 *, 0x38);
    size = M2C_FIELD(self, s32 *, 0x1C);
    func(obj, &size, 4);
    {
        char *vt2 = M2C_FIELD(stream, char **, 0x18);
        ((void (*)(void *, void *, s32))M2C_FIELD(vt2, void **, 0x3C))((char *)stream + M2C_FIELD(vt2, s16 *, 0x38), M2C_FIELD(self, void **, 0x20), M2C_FIELD(self, s32 *, 0x1C));
    }
}

void fn_803712D0(void) {

}

void fn_803712D4(void *arg0, void *arg1, u32 size) {
    extern void fn_8037121C(void *);
    void *p;
    char *vt;

    fn_8037121C(arg0);
    p = Alloc(size);
    *(void **)((char *)arg0 + 0x20) = p;
    vt = *(char **)((char *)arg1 + 0x28);
    (*(void (**)(void *, void *, u32))(vt + 0x1C))((char *)arg1 + *(s16 *)(vt + 0x18), p, size);
}

void fn_80371394(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_8049630C = fn_802D6A90(lbl_80493E1C, fn_80371404, fn_80371484, fn_803714A4, 0, lbl_803F5530, lbl_80493858);
    }
}

void *fn_80371404(void) {
    return fn_8037117C(Alloc(0x24));
}

void *fn_8037117C(void *);
void fn_80371484(void *self) {
    fn_8037117C(self);
}

void fn_803714A4(void *self) {
    fn_803711C0(self, 2);
}

void fn_803714C8(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493E1C[];
void *fn_80371508(void) {
    return lbl_80493E1C;
}

extern s32 lbl_80493E28[];
s32 fn_80371514(void) {
    return lbl_80493E28[0];
}

extern s32 lbl_80493E2C[];
s32 fn_80371520(void) {
    return lbl_80493E2C[0];
}

extern u16 lbl_80493E30[];
u16 fn_8037152C(void) {
    return lbl_80493E30[0];
}

void *fn_80371538(void) {
    return lbl_80493E1C;
}

extern u16 lbl_80493E32[];
u16 fn_80371544(void) {
    return lbl_80493E32[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void *fn_80371404(void);
extern void fn_803714A4(void *);
extern u8 lbl_803F5530[];
extern u8 lbl_80493858[];
void fn_80371550(s32 arg0) {
    fn_802D6A90(lbl_80493E1C, fn_80371404, fn_80371484, fn_803714A4, arg0, lbl_803F5530, lbl_80493858);
}

void fn_802D2430(void);
void fn_803715A4(void) {
    fn_802D2430();
}

s32 fn_803715C4(u8 *self) {
    return *(s32 *)(self + 0x20);
}

void fn_80371394(s32 arg0, s32 arg1);

void fn_803715CC(void) {
    fn_80371394(1, 0xFFFF);
}

