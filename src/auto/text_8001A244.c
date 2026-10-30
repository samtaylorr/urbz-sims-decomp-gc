/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x;
    f32 y;
} Vec2_8001C4BC;

static inline s32 fn_8001C418_isType(s32 t) {
    return t == 9 || t == 11 || t == 12 || t == 10;
}

void fn_8001B088(void *arg0) {
    void fn_8031EA2C(void *);
    u8 *self = (u8 *)arg0;
    u8 *obj;

    if (*(void **)(self + 0x0) != NULL) {
        fn_8031EA2C(*(void **)(self + 0x0));
        *(void **)(self + 0x0) = NULL;
    }
    if (*(void **)(self + 0x4) != NULL) {
        fn_8031EA2C(*(void **)(self + 0x4));
        *(void **)(self + 0x4) = NULL;
    }
    obj = *(u8 **)(self + 0x838);
    if (obj != NULL) {
        u8 *vt = *(u8 **)(obj + 0x9c);
        (*(void (**)(void *, s32))(vt + 0xc))(obj + *(s16 *)(vt + 8), 3);
        *(u8 **)(self + 0x838) = NULL;
    }
}

void fn_8001B7BC(void) {
    extern s32 lbl_80493F34;
    if (lbl_80493F34 == 0) {
        lbl_80493F34 = 1;
    }
}

void fn_8001B7D4(void) {
    extern s32 lbl_80493F34;
    lbl_80493F34 = 0;
}

void fn_8001B7E0(void *arg0, s32 arg1) {
    *M2C_FIELD(arg0, s32 **, 0x48) = arg1;
}

void fn_8001C2A0(void) {

}

void fn_8001C2A4(arg0, arg1)
    void *arg0;
    s32 arg1;
{
    extern struct { u8 pad[0xd8]; void *tbl[1]; } lbl_8041F94C;
    void fn_8009C968(void *, s32, void *);
    void *p;
    u8 *obj;
    void *r;

    p = lbl_8041F94C.tbl[M2C_FIELD(arg0, s32 *, 0x38)];
    obj = p != NULL ? M2C_FIELD(**(void ***)p, u8 **, 0x18) : NULL;
    r = obj != NULL ? M2C_FIELD(obj, void **, 0x654) : NULL;
    if (r != NULL) {
        fn_8009C968(r, arg1, lbl_8041F94C.tbl[M2C_FIELD(arg0, s32 *, 0x38)]);
    }
}

void fn_8001C32C(void *arg0, s32 arg1) {
    extern struct { u8 pad[0xd8]; void *tbl[1]; } lbl_8041F94C;
    void fn_8001C2A4(void *, s32);
    void *p;
    u8 *obj;
    void *r;

    p = lbl_8041F94C.tbl[M2C_FIELD(arg0, s32 *, 0x38)];
    obj = p != NULL ? M2C_FIELD(**(void ***)p, u8 **, 0x18) : NULL;
    r = obj != NULL ? M2C_FIELD(obj, void **, 0x654) : NULL;
    if (r != NULL) {
        fn_8001C2A4(arg0, arg1);
    }
}

void fn_8001C398(void) {
    fn_8001C2A4();
}

void fn_8001C3B8(void) {
    fn_8001C2A4();
}

void fn_8001C3D8(void) {
    fn_8001C2A4();
}

void fn_8001C3F8(void) {
    fn_8001C2A4();
}

void fn_8001C4B8(s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7,
                 s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13) {

}

void fn_8001C56C(void) {

}

void fn_8001C570(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0x16;
}

void fn_8001C57C(void) {
    M2C_UNK fn_8001C4BC(M2C_UNK, M2C_UNK);
    fn_8001C4BC(1, 0xFFFF);
}

