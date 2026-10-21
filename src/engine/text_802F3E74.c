/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } ECamVec3;

void fn_802D2FD0(void);
void fn_802F3E74(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_802F3E94(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_802F3ED4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void *fn_802F3F14(void *arg0) {
    extern void fn_8036D558(void *);
    extern void fn_803BAB78(void *);
    extern void fn_802C876C(void *);
    extern f32 lbl_803F11AC[];
    extern u8 lbl_8041A678[];
    char *q;
    ECamVec3 v;
    f32 c;

    q = (char *)arg0 + 0x110;
    fn_8036D558(arg0);
    *(void **)arg0 = lbl_8041A678;
    fn_803BAB78(q);
    c = lbl_803F11AC[0];
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    v.x = c;
    v.z = c;
    v.y = c;
    *(ECamVec3 *)q = v;
    M2C_FIELD(q, f32 *, 0xC) = c;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
    M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    fn_802C876C((char *)arg0 + 0x90);
    fn_802C876C((char *)arg0 + 0xD0);
    M2C_FIELD(arg0, s32 *, 0x64) |= 0x200;
    return arg0;
}

void fn_802F3FC8(void **arg0, s32 arg1) {
    extern void fn_802F41E8(void *);
    extern void fn_8036D594(void *, s32);
    extern void *fn_802D0AB8();
    extern void fn_802D1A00(void *, void *);
    extern u8 lbl_8041A678[];

    *arg0 = lbl_8041A678;
    fn_802F41E8(arg0);
    fn_8036D594(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

void fn_802F4024(void *arg0, void *arg1) {
    extern void fn_802F0604(void *, void *);
    extern void fn_802C83E4(void *, void *);
    void *vt;
    void (*func)(void *, s32 *, s32);
    void *obj;
    s32 val;

    fn_802F0604(arg0, arg1);
    vt = M2C_FIELD(arg1, void **, 0x18);
    func = M2C_FIELD(vt, void (**)(void *, s32 *, s32), 0x3C);
    obj = (char *)arg1 + M2C_FIELD(vt, s16 *, 0x38);
    val = M2C_FIELD(arg0, s32 *, 0x120);
    func(obj, &val, 4);
    fn_802C83E4(arg1, (char *)arg0 + 0x90);
}

void fn_802F4088(void *arg0, void *arg1) {
    extern void fn_802F06A4(void *, void *);
    extern void fn_802C846C(void *, void *);
    extern void fn_802F412C(void *, s32, s32);
    extern u16 lbl_80491C66[];
    void *vt;

    fn_802F06A4(arg0, arg1);
    if (lbl_80491C66[0] == 0) {
        vt = M2C_FIELD(arg1, void **, 0x18);
        M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg1 + M2C_FIELD(vt, s16 *, 0x30), (char *)arg0 + 0x120, 4);
        fn_802C846C(arg1, (char *)arg0 + 0x90);
    }
    fn_802F412C(arg0, 0, 0);
}

void fn_802F42E4(s32 arg0, s32 arg1) {
    M2C_UNK fn_802F42A8(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 fn_80337F14(s32);
    fn_802F42A8(arg0, fn_80337F14(arg1), 0, 0, 0);
}

extern void fn_802E34F0(void *, void *);
void fn_802F4A8C(char *self, void *arg1) {
    fn_802E34F0(arg1, self + 0x44);
}

void fn_802F56A4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x124) = arg1;
}

s32 fn_802F56AC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x124);
}

void fn_802F5830(void) {
    void *fn_802F3F14();
    M2C_UNK fn_802F59A4(M2C_UNK);
    fn_802F59A4(0x300);
    fn_802F3F14();
}

extern s32 lbl_804961E0;
void fn_802F5884(void *self) {
    fn_802F3FC8(self, 2);
}

void fn_802F58A8(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491C50[];
void *fn_802F58E8(void) {
    return lbl_80491C50;
}

extern s32 lbl_80491C5C[];
s32 fn_802F58F4(void) {
    return lbl_80491C5C[0];
}

extern s32 lbl_80491C60[];
s32 fn_802F5900(void) {
    return lbl_80491C60[0];
}

extern u16 lbl_80491C64[];
u16 fn_802F590C(void) {
    return lbl_80491C64[0];
}

void *fn_802F5918(void) {
    return lbl_80491C50;
}

extern u16 lbl_80491C66[];
u16 fn_802F5924(void) {
    return lbl_80491C66[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_802F5830(void);
extern void fn_802F5858(void *);
extern void fn_802F5884(void *);
extern u8 lbl_803F1140[];
extern u8 lbl_80493808[];
void fn_802F5930(s32 arg0) {
    fn_802D6A90(lbl_80491C50, fn_802F5830, fn_802F5858, fn_802F5884, arg0, lbl_803F1140, lbl_80493808);
}

void fn_802D2430(void);
void fn_802F5984(void) {
    fn_802D2430();
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
void *fn_802F59A4(u32 size) {
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

void *fn_802F5A50(u32 size, void *p);
void *fn_802F5A50(u32 size, void *p) {
    return p;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_802F5A58(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_802F5B14(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x120);
}

s32 fn_802F5B1C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x134);
}

s32 fn_802F5B24(s32 arg0) {
    return arg0 + 0x90;
}

s32 fn_802F5B2C(s32 arg0) {
    return arg0 + 0xD0;
}

void fn_802F5B34(void) {
    M2C_UNK fn_802F57C0(M2C_UNK, M2C_UNK);
    fn_802F57C0(1, 0xFFFF);
}

