/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
void fn_8036EA50(void);
void fn_8036EA78();
void fn_8036EAA4();
s32 fn_8036D868();
void *fn_8036EC70(u32 size, void *p);
extern u8 lbl_803F52F0[];
extern u8 lbl_80491E1C[];
extern u8 lbl_80493D04[];
extern s32 lbl_80496304;

typedef struct { f32 x, y, z; } ECamVec3;

static inline void ECamVec3_Set(ECamVec3 *dst, f32 x, f32 y, f32 z) {
    ECamVec3 v;
    v.x = x;
    v.z = z;
    v.y = y;
    *dst = v;
}

void fn_802D2FD0(void);
void fn_8036D7C8(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8036D7E8(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8036D828(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_8036D868(void *arg0) {
    extern void fn_802F04BC(void *);
    extern void fn_803BAB78(void *);
    extern f32 lbl_803F5304[];
    extern u8 lbl_8041DAB0[];
    ECamVec3 *q;
    f32 c;

    q = (ECamVec3 *)((char *)arg0 + 0x90);
    fn_802F04BC(arg0);
    *(void **)arg0 = lbl_8041DAB0;
    fn_803BAB78(q);
    c = lbl_803F5304[0];
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    ECamVec3_Set(q, c, c, c);
    M2C_FIELD(q, f32 *, 0xC) = c;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    return (s32)arg0;
}

void fn_8036D904(void **arg0, s32 arg1) {
    extern void fn_8036D960(void *);
    extern void fn_802F05AC(void *, s32);
    extern void *fn_802D0AB8();
    extern void fn_802D1A00(void *, void *);
    extern u8 lbl_8041DAB0[];

    *arg0 = lbl_8041DAB0;
    fn_8036D960(arg0);
    fn_802F05AC(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

void fn_8036DBA8();
void fn_8036D960(void) {
    fn_8036DBA8();
}

void fn_8036D980(void *self, void *stream) {
    extern void fn_802F0604(void *, void *);
    extern void fn_802D360C(void *, void *);
    char *vt;
    void (*func)(void *, void *, s32);
    void *obj;
    s32 a;
    s32 b;

    fn_802F0604(self, stream);
    vt = M2C_FIELD(stream, char **, 0x18);
    func = (void (*)(void *, void *, s32))M2C_FIELD(vt, void **, 0x3C);
    obj = (char *)stream + M2C_FIELD(vt, s16 *, 0x38);
    a = M2C_FIELD(self, s32 *, 0xA0);
    func(obj, &a, 4);
    vt = M2C_FIELD(stream, char **, 0x18);
    func = (void (*)(void *, void *, s32))M2C_FIELD(vt, void **, 0x3C);
    obj = (char *)stream + M2C_FIELD(vt, s16 *, 0x38);
    b = M2C_FIELD(self, s32 *, 0x8C);
    func(obj, &b, 4);
    fn_802D360C(stream, (char *)self + 0x90);
}

void fn_8036DA0C(void *self, void *stream) {
    extern void fn_802F06A4(void *, void *);
    extern void fn_802D3840(void *, void *);
    extern void fn_8036DC68(void *);
    extern u16 lbl_80493D1A[];
    char *vt;

    ((void (*)(void *))fn_8036D960)(self);
    fn_802F06A4(self, stream);
    if (lbl_80493D1A[0] == 0) {
        vt = M2C_FIELD(stream, char **, 0x18);
        (*(void (**)(void *, void *, s32))(vt + 0x34))((char *)stream + *(s16 *)(vt + 0x30), (char *)self + 0xA0, 4);
        vt = M2C_FIELD(stream, char **, 0x18);
        (*(void (**)(void *, void *, s32))(vt + 0x34))((char *)stream + *(s16 *)(vt + 0x30), (char *)self + 0x8C, 4);
        fn_802D3840(stream, (char *)self + 0x90);
    }
    fn_8036DC68(self);
}

void fn_8036DB80(void *self, void *out) {
    struct TVec3Raw { s32 x, y, z; };
    char *p = (char *)self + 0x90;
    *(struct TVec3Raw *)out = *(struct TVec3Raw *)p;
    M2C_FIELD(out, f32 *, 0xC) = M2C_FIELD(p, f32 *, 0xC);
}

void fn_8036DBA8(void *self) {
    extern void fn_8031EA2C(void *);
    extern void *fn_802D0AB8();
    extern void fn_802D1A00(void *, void *);
    s32 i;

    if (M2C_FIELD(self, void **, 0xB4) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0xB4));
        M2C_FIELD(self, void **, 0xB4) = NULL;
    }
    if (M2C_FIELD(self, void **, 0xA8) != NULL) {
        fn_802D1A00(fn_802D0AB8(), M2C_FIELD(self, void **, 0xA8));
        M2C_FIELD(self, void **, 0xA8) = NULL;
    }
    if (M2C_FIELD(self, void ***, 0xAC) != NULL) {
        for (i = 0; i < M2C_FIELD(self, s32 *, 0xB0); i++) {
            fn_8031EA2C(M2C_FIELD(self, void ***, 0xAC)[i]);
        }
        fn_802D1A00(fn_802D0AB8(), M2C_FIELD(self, void ***, 0xAC));
        M2C_FIELD(self, void ***, 0xAC) = NULL;
    }
    M2C_FIELD(self, s32 *, 0xA4) = 0;
    M2C_FIELD(self, s32 *, 0xB0) = 0;
}

extern void fn_802E34F0(void *, void *);
void fn_8036DF8C(char *self, void *arg1) {
    fn_802E34F0(arg1, self + 0x44);
}

void fn_8036E318(char *self, char *obj) {
    extern void fn_80300200(u8 *, char *);
    char *vt = *(char **)(obj + 0x68);
    (*(void (**)(void *))(vt + 0xEC))(obj + *(s16 *)(vt + 0xE8));
    fn_80300200(*(u8 **)(*(char **)(self + 0xB4) + 0x20) + *(s32 *)(self + 0x8C) * 0x18, obj);
}

s32 fn_8036E97C(void *arg0) {
    u32 i;
    void **list;

    for (i = 0; i < M2C_FIELD(arg0, u32 *, 0xB0); i++) {
        void *p = M2C_FIELD(M2C_FIELD(arg0, void ***, 0xAC)[i], void **, 0x20);
        if ((M2C_FIELD(p, s32 *, 0x74) | M2C_FIELD(p, s32 *, 0xB4)) & 0x20) {
            return 1;
        }
    }
    return 0;
}

void fn_8036E9D0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xA4) = arg1;
}

s32 fn_8036E9D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}

void fn_8036E9E0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_80496304 = fn_802D6A90(lbl_80493D04, fn_8036EA50, fn_8036EA78, fn_8036EAA4, 0, lbl_803F52F0, lbl_80491E1C);
    }
}

void fn_8036EA50(void) {
    M2C_UNK fn_8036D868();
    M2C_UNK fn_8036EBC4(M2C_UNK);
    fn_8036EBC4(0x27C);
    fn_8036D868();
}

void fn_8036EA78(void *self) {
    s32 fn_8036D868(void *);
    fn_8036D868(fn_8036EC70(0x27C, self));
}

void fn_8036EAA4(void *self) {
    fn_8036D904(self, 2);
}

void fn_8036EAC8(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493D04[];
void *fn_8036EB08(void) {
    return lbl_80493D04;
}

extern s32 lbl_80493D10[];
s32 fn_8036EB14(void) {
    return lbl_80493D10[0];
}

extern s32 lbl_80493D14[];
s32 fn_8036EB20(void) {
    return lbl_80493D14[0];
}

extern u16 lbl_80493D18[];
u16 fn_8036EB2C(void) {
    return lbl_80493D18[0];
}

void *fn_8036EB38(void) {
    return lbl_80493D04;
}

extern u16 lbl_80493D1A[];
u16 fn_8036EB44(void) {
    return lbl_80493D1A[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8036EA50(void);
extern void fn_8036EA78();
extern void fn_8036EAA4();
extern u8 lbl_803F52F0[];
extern u8 lbl_80491E1C[];
void fn_8036EB50(s32 arg0) {
    fn_802D6A90(lbl_80493D04, fn_8036EA50, fn_8036EA78, fn_8036EAA4, arg0, lbl_803F52F0, lbl_80491E1C);
}

void fn_802D2430(void);
void fn_8036EBA4(void) {
    fn_802D2430();
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
void *fn_8036EBC4(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void *fn_8036EC70(u32 size, void *p);
void *fn_8036EC70(u32 size, void *p) {
    return p;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8036EC78(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8036ECAC(s32 arg0) {
    return arg0 + 0x90;
}

void fn_8036ECB4(void) {
    void fn_8036E9E0(s32, s32);
    fn_8036E9E0(1, 0xFFFF);
}

