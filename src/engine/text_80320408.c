/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    f32 x;
    f32 y;
} Vec2Arg;

void fn_802D2FD0(void);
void fn_80320408(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80320428(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80320468(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80320528(void *arg0, s32 arg1) {
    extern void fn_80320590(void *);
    extern void fn_8036C92C(void *, s32);
    extern void fn_8031E910(void *, s32);
    extern void *fn_802D0AB8();
    extern void fn_802D1A00(void *, void *);
    extern u8 lbl_8041B800[];

    *(u8 **)arg0 = lbl_8041B800;
    fn_80320590(arg0);
    fn_8036C92C((u8 *)arg0 + 0x20, 2);
    fn_8031E910(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

void fn_80320590(void *arg0) {
    M2C_UNK fn_8036C508(s32);
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x24);
    if (var_r31 != NULL) {
        do {
            fn_8036C508(M2C_FIELD(var_r31, s32 *, 0));
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}

void fn_803205D4(void *arg0, void *arg1) {
    extern void fn_802D39E4(void *);
    extern void fn_802C5B1C(void *, void *);
    extern void fn_802D3CE4(void *, s32);
    extern void fn_802C5BBC(void *, void *);
    extern void fn_802D39F0(void *, s32);
    struct {
        s32 a;
        s32 pad[3];
    } buf;
    void *p;

    fn_80320590(arg0);
    fn_802D39E4(&buf);
    fn_802C5B1C(arg1, &buf);
    fn_802D3CE4((char *)arg0 + 0x18, buf.a);
    fn_802C5BBC(arg1, (char *)arg0 + 0x20);
    p = M2C_FIELD(arg0, void **, 0x24);
    if (p != NULL) {
        p = *(void **)p;
        M2C_FIELD(arg0, void **, 0x60) = p;
        M2C_FIELD(arg0, f32 *, 0x58) = M2C_FIELD(p, s32 *, 4);
    }
    fn_802D39F0(&buf, buf.a);
}

void fn_80322898(s32 arg0, Vec2Arg *arg1, s32 arg2, s32 arg3) {
    extern f32 lbl_803F301C[];

    if (arg2 != 0) {
        arg1->x = (s32)(arg1->x + lbl_803F301C[0]);
    }
    if (arg3 != 0) {
        arg1->y = (s32)(arg1->y + lbl_803F301C[0]);
    }
}

void fn_80323460(void *arg0) {
    M2C_UNK fn_803233D4();
    fn_803233D4();
    M2C_FIELD(arg0, s32 *, 0x74) = -1;
}

void fn_80323CB8(s32 arg0, s32 arg1) {
    extern f32 lbl_8049622C[2];
    extern f32 lbl_803F30E4[];
    extern s32 lbl_80496234;
    extern u8 lbl_804938D0[];
    extern u8 lbl_803F2F74[];
    extern u8 lbl_80493858[];
    s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
    void fn_80323D3C(void);
    void fn_80323D64(void *);
    void fn_80323D90(void *);

    if (arg1 == 0xFFFF && arg0 != 0) {
        f32 *p = lbl_8049622C;
        p[0] = lbl_803F30E4[0];
        p[1] = lbl_803F30E4[0];
        lbl_80496234 = fn_802D6A90(lbl_804938D0, fn_80323D3C, fn_80323D64, fn_80323D90, 0, lbl_803F2F74, lbl_80493858);
    }
}

void fn_80323D3C(void) {
    void *fn_803204A8();
    M2C_UNK fn_80323EB0(M2C_UNK);
    fn_80323EB0(0x78);
    fn_803204A8();
}

void fn_80323D64(void *self) {
    void *fn_803204A8(void *);
    void *fn_80323F5C(u32 size, void *p);
    fn_803204A8(fn_80323F5C(0x78, self));
}

void fn_80323D90(void *self) {
    void fn_80320528(void *, s32);
    fn_80320528(self, 2);
}

void fn_80323DB4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_804938D0[];
void *fn_80323DF4(void) {
    return lbl_804938D0;
}

extern s32 lbl_804938DC[];
s32 fn_80323E00(void) {
    return lbl_804938DC[0];
}

extern s32 lbl_804938E0[];
s32 fn_80323E0C(void) {
    return lbl_804938E0[0];
}

extern u16 lbl_804938E4[];
u16 fn_80323E18(void) {
    return lbl_804938E4[0];
}

void *fn_80323E24(void) {
    return lbl_804938D0;
}

extern u16 lbl_804938E6[];
u16 fn_80323E30(void) {
    return lbl_804938E6[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80323D3C(void);
extern void fn_80323D64(void *);
extern void fn_80323D90(void *);
extern u8 lbl_803F2F74[];
extern u8 lbl_80493858[];
void fn_80323E3C(s32 arg0) {
    fn_802D6A90(lbl_804938D0, fn_80323D3C, fn_80323D64, fn_80323D90, arg0, lbl_803F2F74, lbl_80493858);
}

void fn_802D2430(void);
void fn_80323E90(void) {
    fn_802D2430();
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
void *fn_80323EB0(u32 size) {
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

void *fn_80323F5C(u32 size, void *p);
void *fn_80323F5C(u32 size, void *p) {
    return p;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80323F64(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

f32 fn_80323F98(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x58);
}

f32 fn_80323FA0(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x5C);
}

extern void fn_80320528(void *, s32);
extern f32 lbl_8049622C[2];
extern f32 lbl_803F30E4[];
extern s32 lbl_80496234;
extern void fn_803227C4(s32, s32, s32, s32, s32, s32);
s32 fn_80323FA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    fn_803227C4(arg0, arg1, arg2, 0, arg4, arg3);
    return arg0;
}

s32 fn_80323FE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    fn_803227C4(arg0, arg1, arg2, 1, arg4, arg3);
    return arg0;
}

void fn_80324018(void *arg0, s32 arg1) {
    f32 fn_8039AA70(s32, M2C_UNK);
    void *temp_r29;

    temp_r29 = arg0 + 0x64;
    M2C_FIELD(arg0, f32 *, 0x64) = fn_8039AA70(arg1, 0);
    M2C_FIELD(temp_r29, f32 *, 4) = fn_8039AA70(arg1, 1);
    M2C_FIELD(temp_r29, f32 *, 8) = fn_8039AA70(arg1, 2);
    M2C_FIELD(temp_r29, f32 *, 0xC) = fn_8039AA70(arg1, 3);
}

void fn_80324088(void *arg0, f32 arg1) {
    f32 *v = (f32 *)((char *)arg0 + 0x64);
    v[0] = arg1;
    v[1] = arg1;
    v[2] = arg1;
    v[3] = arg1;
}

s32 fn_803240A0(s32 arg0) {
    return arg0 + 0x64;
}

void fn_803240A8(s32 arg0, s32 arg1, s32 arg2, Vec2Arg *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    extern void fn_80322ACC(s32, s32, s32, s32, Vec2Arg *, s32, s32, s32, s32, s32, s32, s32);
    Vec2Arg v;

    v.x = arg3->x;
    v.y = arg3->y;
    fn_80322ACC(arg0, arg1, arg2, 1, &v, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

u32 fn_80324120(s32 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    if (arg2 == 0) {
        return arg1[arg3];
    }
    return ((u16 *)arg1)[arg3];
}

void fn_8032413C(void) {
    void fn_80323CB8(s32, s32);
    fn_80323CB8(1, 0xFFFF);
}

