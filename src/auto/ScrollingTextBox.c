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

void fn_8009A878(void *self, s32 flags) {
    extern void fn_802D211C(void *);
    extern void fn_803379C8(void *, u32);
    extern void fn_802D20E8(void *);
    extern u8 lbl_80409F18[];
    extern u8 lbl_8045BA40[];
    void *p;
    M2C_FIELD(self, u8 **, 0x40) = lbl_80409F18;
    p = M2C_FIELD(self, void **, 0x24);
    if (p != NULL) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), p);
    }
    if (M2C_FIELD(self, void **, 0) != NULL) {
        fn_802D211C(M2C_FIELD(self, void **, 0));
    }
    fn_803379C8(lbl_8045BA40, 0x849F54BD);
    M2C_FIELD(self, s32 *, 0x3C) = 0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8009A904(void *arg0, f32 a, f32 b, f32 c, f32 d) {
    M2C_FIELD(arg0, f32 *, 0x4) = a;
    M2C_FIELD(arg0, f32 *, 0x8) = c;
    M2C_FIELD(arg0, f32 *, 0xC) = b;
    M2C_FIELD(arg0, f32 *, 0x10) = d;
}

void fn_8009A918(void *arg0, void *arg1, void *arg2) {
    s32 a = M2C_FIELD(arg1, s32 *, 0);
    s32 b = M2C_FIELD(arg1, s32 *, 4);
    s32 c;
    s32 d;
    M2C_FIELD(arg0, s32 *, 0x8) = b;
    M2C_FIELD(arg0, s32 *, 0x4) = a;
    c = M2C_FIELD(arg2, s32 *, 0);
    d = M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x10) = d;
    M2C_FIELD(arg0, s32 *, 0xC) = c;
}

void fn_8009A93C(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x14) = farg0;
    M2C_FIELD(arg0, f32 *, 0x18) = farg1;
}

void fn_8009A948(void *arg0, void *arg1) {
    s32 a = M2C_FIELD(arg1, s32 *, 0);
    s32 b = M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = b;
    M2C_FIELD(arg0, s32 *, 0x14) = a;
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

void fn_8009AAE4(void *arg0, void *arg1) {
    s32 a = M2C_FIELD(arg1, s32 *, 0);
    s32 b = M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x38) = b;
    M2C_FIELD(arg0, s32 *, 0x34) = a;
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

s32 fn_8009B29C(void ***self, s32 idx, s32 arg2) {
    extern s32 fn_8032C268(void *);
    extern s32 fn_8032C2E0(void *, s32);
    void *p = (*self)[idx];

    if (p == NULL || fn_8032C268(M2C_FIELD(p, void **, 0x134)) == 0) {
        return 0;
    }
    return fn_8032C2E0(M2C_FIELD((*self)[idx], void **, 0x134), arg2);
}

void fn_8009B308(void ***self, s32 idx, s32 arg2) {
    void *p = (*self)[idx];
    void *q;

    if (p != NULL) {
        if (M2C_FIELD(*(void **)p, s32 (**)(void *), 0xFC)((u8 *)p + M2C_FIELD(*(void **)p, s16 *, 0xF8)) != 0) {
            q = (*self)[idx];
            M2C_FIELD(*(void **)q, void (**)(void *, s32), 0x104)((u8 *)q + M2C_FIELD(*(void **)q, s16 *, 0x100), arg2);
        }
    }
}

void *fn_8009B38C(void *self, void *arg1) {
    extern void fn_8030728C(void *);
    extern void fn_802E1BF4(void *);
    extern void fn_8009B4B0(void *, s32);
    extern void fn_802C876C(void *);
    extern u8 lbl_80409F30[];

    fn_8030728C(self);
    M2C_FIELD(self, u8 **, 0x44) = lbl_80409F30;
    fn_802E1BF4((u8 *)self + 0x48);
    M2C_FIELD(self, void **, 0x39C) = arg1;
    M2C_FIELD(self, s32 *, 0x398) = 0;
    fn_8009B4B0(self, M2C_FIELD(arg1, s32 *, 0x3B0));
    fn_802C876C((u8 *)self + 0x3A0);
    return self;
}

extern s32 lbl_80494274;
extern s32 lbl_80494278;
void fn_8009B3F4(void) {
    s32 fn_8033740C(void *, u32, s32, s32);
    extern u8 lbl_8045BA40[];
    if (lbl_80494274 == 0) {
        u8 *p = lbl_8045BA40;
        lbl_80494274 = fn_8033740C(p, 0x1A18CA65, 0, 0);
        lbl_80494278 = fn_8033740C(p, 0x1239C594, 0, 0);
    }
}

void fn_8009B464(void) {
    extern void fn_8031EA2C(s32);
    if (lbl_80494274 != 0) {
        fn_8031EA2C(lbl_80494274);
        lbl_80494274 = 0;
    }
    if (lbl_80494278 != 0) {
        fn_8031EA2C(lbl_80494278);
        lbl_80494278 = 0;
    }
}

void fn_8009B4B0(void *arg0, s32 arg1) {
    extern void fn_802E1CD8(void *, f32, f32, f32, f32);
    extern f32 lbl_803CD098[];
    extern f32 lbl_803CD09C[];
    extern f32 lbl_803CD0A0[];
    extern f32 lbl_803CD0A4[];
    extern f32 lbl_80494258;
    extern f32 lbl_8049425C;
    extern f32 lbl_80494260;
    f32 a, b, c, d;
    f32 x, y, z;
    a = lbl_80494258;
    b = lbl_803CD098[0];
    c = lbl_8049425C;
    d = lbl_80494260;
    M2C_FIELD(arg0, s32 *, 0x398) = arg1;
    fn_802E1CD8((u8 *)arg0 + 0x48, a, b, c, d);
    x = lbl_803CD09C[0];
    y = lbl_803CD0A0[0];
    z = lbl_803CD0A4[0];
    M2C_FIELD(arg0, f32 *, 0x20) = x;
    M2C_FIELD(arg0, f32 *, 0x24) = y;
    M2C_FIELD(arg0, f32 *, 0x28) = z;
}

void fn_8009B51C(void *arg0, s32 arg1) {
    extern void fn_80309AE0(void *, s32);
    extern void fn_80307364(void *, s32);
    extern void *fn_802D0AB8();
    extern void fn_802D1A00(void *, void *);
    extern u8 lbl_80409F30[];

    M2C_FIELD(arg0, u8 **, 0x44) = lbl_80409F30;
    fn_80309AE0((u8 *)arg0 + 0x48, 0);
    fn_80307364(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

void fn_8009B580(void) {

}

void *fn_8009C8F4(f32 f) {
    extern f32 lbl_803CD10C[];
    extern f32 lbl_803CD110[];
    extern f32 lbl_803CD114[];
    extern u8 lbl_8041FD34[];
    extern u8 lbl_8041FD54[];
    extern u8 lbl_8041FD64[];

    if (f <= lbl_803CD10C[0]) {
        return;
    }
    if (f > lbl_803CD10C[0] && f <= lbl_803CD110[0]) {
        return lbl_8041FD54;
    }
    if (f > lbl_803CD110[0] && f <= lbl_803CD114[0]) {
        return lbl_8041FD34;
    }
    return lbl_8041FD64;
}

void fn_8009CA88(s32 arg0, s32 arg1) {
    extern f32 lbl_803CD120[];
    extern f32 lbl_803CD124[];
    extern f32 lbl_803CD128[];
    extern f32 lbl_80495898[];
    extern f32 lbl_804958A0[];
    extern f32 lbl_804958A8[];

    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_804958A0[1] = lbl_803CD124[0];
        lbl_804958A8[1] = lbl_803CD120[0];
        lbl_80495898[0] = lbl_803CD120[0];
        lbl_804958A8[0] = lbl_803CD128[0];
        lbl_80495898[1] = lbl_803CD120[0];
        lbl_804958A0[0] = lbl_803CD120[0];
    }
}

void *fn_8009CAE0(u32 size) {
    void *p = ScrollingTextBox_AllocAligned(size);

    fn_80248488(p, 0, size);
    return p;
}

void fn_8009CBA4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8009CBD8(void) {
    void fn_8009CA88(s32, s32);
    fn_8009CA88(1, 0xFFFF);
}

