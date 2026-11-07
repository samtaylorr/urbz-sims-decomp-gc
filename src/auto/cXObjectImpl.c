/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80494470;
void fn_801301DC(void) {

}

void fn_801301E0(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = (s16) M2C_FIELD(arg0, s16 *, 0x16) >> 8;
    *arg2 = (s32) M2C_FIELD(arg0, u8 *, 0x17);
}

s16 fn_801301F8(s32 arg0, s32 arg1) {
    return (arg0 << 8) | (arg1 & 0xFF);
}

extern s32 lbl_80495BB0;
extern void fn_800F1A60(s32, s32);
void fn_8013020C(void) {
    fn_800F1A60((s32)&lbl_80495BB0, 2);
}

s32 fn_80130388(void) {
    return lbl_80494470;
}

extern s32 lbl_80494474;
s32 fn_80130390(void) {
    return lbl_80494474;
}

extern s32 lbl_8049447C;
s32 fn_80130398(void) {
    return lbl_8049447C;
}

void fn_801303A0(void (*cb)(void)) {
    lbl_8049447C = cb;
}

extern s32 lbl_80494480;
s32 fn_801303A8(void) {
    return lbl_80494480;
}

void fn_801303B0(void (*cb)(void)) {
    lbl_80494480 = cb;
}

void fn_80131DA4(void) {

}

s32 fn_80132200(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84) & 0x1F;
}

void fn_80132590(s32 arg0) {
    extern void *lbl_80496648;
    extern s16 lbl_80494476;
    char *obj;
    char *vt;

    obj = lbl_80496648;
    lbl_80494474 = arg0;
    if (obj != NULL) {
        vt = *(char **)obj;
        (*(void (**)(void *, s32, s32))(vt + 0x3C))(obj + *(s16 *)(vt + 0x38), 0x1E, lbl_80494476);
    }
}

extern s32 lbl_80494478;
void fn_801325DC(void (*cb)(void)) {
    lbl_80494478 = cb;
}

s32 fn_8013358C(void *self) {
    extern void fn_80105534(void *);
    extern void fn_801055FC(void *, s32);
    extern void *lbl_80496668;
    typedef struct { s8 x; s8 y; s8 z; } Tile;
    Tile tile;
    s32 r;
    s32 ret;

    fn_80105534(&tile);
    r = (*(s32 (**)(void *, void *))(*(char **)lbl_80496668 + 0x23C))((char *)lbl_80496668 + *(s16 *)(*(char **)lbl_80496668 + 0x238), &tile);
    if (r == 0) {
        fn_801055FC(&tile, 2);
        return 0;
    }
    {
        char *obj = M2C_FIELD(self, char **, 4);
        char *vt = M2C_FIELD(obj, char **, 4);
        ret = (*(s32 (**)(void *, s32))(vt + 0x44C))(obj + *(s16 *)(vt + 0x448), r);
    }
    fn_801055FC(&tile, 2);
    return ret;
}

void fn_8013362C(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3, u16 *arg4, s32 *arg5) {
    typedef struct {
        s32 x;
        s32 y;
    } Pair;
    struct {
        s32 a;
        Pair b;
        void *p;
        u16 pad;
        u16 h;
        s32 c;
    } info;
    s32 v;
    s32 fn_8013391C(s32, s32);

    fn_8013391C((s32)&info, arg0);
    *(Pair *)arg1 = info.b;
    *arg2 = info.c;
    *arg4 = info.h;
    v = 0;
    if (info.p != NULL) {
        v = M2C_FIELD(info.p, s32 *, 4);
    }
    *arg3 = v;
    *arg5 = info.a;
}

s32 fn_801336B0(void *arg0) {
    if ((((s32) M2C_FIELD(arg0, s32 *, 0x6C) >> 4) <= 0) || (((s32) M2C_FIELD(arg0, s32 *, 0x68) >> 4) <= 0)) {
        return 0;
    }
    return 1;
}

extern void fn_801338AC(void *);
void fn_801338AC(void *self) {
    extern void *fn_80133C74(void *, s32);
    fn_80133C74(self, 0);
}

s32 fn_801338D0(char *self) {
    s16 *fn_80141C5C(s32, s32);
    void fn_80133A8C(char *);

    if (*fn_80141C5C((s32)self + 0x28, 0xE) != 0) {
        return 0;
    }
    return ((s32 (*)(char *))fn_80133A8C)(self);
}

s32 fn_8013391C(s32 arg0, s32 arg1) {
    M2C_UNK fn_801336D8(s32, s32);
    fn_801336D8(arg1, arg0);
    return arg0;
}

void fn_80133954(s32 *arg0) {
    *arg0 = 0;
}

void *fn_80133960(void *arg0, s32 arg1, s32 arg2, char *arg3, s32 arg4) {
    struct { s32 a, b; } *d;

    M2C_FIELD(arg0, s32 *, 0) = 1;
    if (arg3 != NULL) {
        d = (void *)((char *)arg0 + 4);
        *d = *(typeof(d))(arg3 + 0x68);
        M2C_FIELD(arg0, char **, 0xC) = arg3;
    }
    if (arg3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x10) = arg4;
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    return arg0;
}

void *fn_801339A4(void *arg0, void *arg1) {
    struct { s32 a, b; } *d;
    s32 n;

    M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(arg1, s32 *, 0);
    n = M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x10) = n;
    if (n != -1) {
        M2C_FIELD(arg0, s32 *, 0x10) = n + 1;
    }
    d = (void *)((char *)arg0 + 4);
    *d = *(typeof(d))((char *)arg1 + 4);
    M2C_FIELD(arg0, s32 *, 0x14) = M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0xC) = M2C_FIELD(arg1, s32 *, 0xC);
    return arg0;
}

s32 fn_801339F0(s32 arg0, s32 arg1) {
    M2C_UNK fn_80133CBC(s32, s32);
    fn_80133CBC(arg1, arg0);
    return arg0;
}

void *fn_80133A28(void *arg0, void *arg1, void *arg2, s32 arg3) {
    struct { s32 a, b; } *d;

    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
    M2C_FIELD(arg0, void **, 0xC) = arg1;
    d = (void *)((char *)arg0 + 4);
    *d = *(typeof(d))arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = M2C_FIELD(arg1, s32 *, 0x80);
    M2C_FIELD(arg0, s32 *, 0) = 1;
    return arg0;
}

void *fn_80133A58(void *arg0, void *arg1, s32 arg2) {
    struct { s32 a, b; } *d;

    d = (void *)((char *)arg0 + 4);
    *d = *(typeof(d))arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = 1;
    return arg0;
}

void fn_80133A8C(char *arg0) {
    char *obj;
    char *e;
    s16 *fn_80141C5C(s32, s32);

    obj = M2C_FIELD(arg0, char **, 4);
    e = M2C_FIELD(obj, char **, 4) + 0x448;
    (*(void (**)(void *, s32))(e + 4))(obj + *(s16 *)e, *fn_80141C5C((s32)arg0 + 0x28, 0x1A));
}

void *fn_80133AE4(void *self, s32 idx) {
    struct { s32 a[8]; } *base;

    if (idx >= 0) {
        base = M2C_FIELD(self, void **, 0x90);
        if ((u32)idx < (u32)((typeof(base))M2C_FIELD(self, void **, 0x94) - base)) {
            return &base[idx];
        }
    }
    return NULL;
}

void fn_80133C74(char *self, s32 idx) {
    char *obj = M2C_FIELD(self, char **, 4);
    char *entry = M2C_FIELD(self, char **, 0x90) + idx * 32;
    char *vt = M2C_FIELD(obj, char **, 4);
    (*(void (**)(void *, s32))(vt + 0x44C))(obj + *(s16 *)(vt + 0x448), *(s16 *)(entry + 4));
}

s32 fn_80133F68(s32 arg0) {
    struct {
        s32 a;
        s32 b[2];
        void *p;
        u16 pad;
        s16 h;
        s32 c;
    } info;
    s32 fn_8013391C(s32, s32);

    fn_8013391C((s32)&info, arg0);
    return info.p != NULL;
}

s32 fn_80133FA4(s32 arg0) {
    struct {
        s32 a;
        s32 b[2];
        void *p;
        u16 pad;
        s16 h;
        s32 c;
    } info;
    s32 fn_8013391C(s32, s32);
    char *obj;
    char *vt;

    fn_8013391C((s32)&info, arg0);
    if (info.p == NULL) {
        return 0;
    }
    obj = M2C_FIELD(info.p, char **, 4);
    vt = M2C_FIELD(obj, char **, 4);
    return (*(s32 (**)(void *))(vt + 0x2EC))(obj + *(s16 *)(vt + 0x2E8));
}

s16 fn_80133FFC(s32 arg0) {
    struct {
        s32 a;
        s32 b[2];
        void *p;
        u16 pad;
        s16 h;
        s32 c;
    } info;
    s32 fn_8013391C(s32, s32);

    fn_8013391C((s32)&info, arg0);
    return info.h;
}

void fn_80134028(char *arg0) {
    char *obj;
    char *vt;
    char *target;
    char *e;

    obj = M2C_FIELD(arg0, char **, 4);
    while ((vt = M2C_FIELD(obj, char **, 4),
            (*(char *(**)(void *))(vt + 0x2C4))(obj + *(s16 *)(vt + 0x2C0))) != NULL) {
        vt = M2C_FIELD(obj, char **, 4);
        obj = (*(char *(**)(void *))(vt + 0x2C4))(obj + *(s16 *)(vt + 0x2C0));
    }
    vt = M2C_FIELD(obj, char **, 4);
    target = M2C_FIELD(arg0, char **, 4);
    e = M2C_FIELD(target, char **, 4) + 0x448;
    (*(void (**)(void *, s32))(e + 4))(target + *(s16 *)e,
        (*(s32 (**)(void *, s32))(vt + 0x224))(obj + *(s16 *)(vt + 0x220), 0x1A));
}

s32 fn_801352DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xB0);
}

s32 fn_80135D58(void *arg0, s32 arg1) {
    return arg1 == M2C_FIELD(arg0, s32 *, 0x4);
}

void fn_80135D6C(void) {

}

f32 fn_8013678C(f32 x) {
    f32 g, h;
    if (x <= 0.0f) {
        return 0.0f;
    }
    g = x * 0.25f + 1.0f;
    h = (g + x / g) * 0.5;
    g = (h + x / h) * 0.5;
    return g;
}

f32 fn_801367EC(u8 *arg0, u8 *arg1) {
    u8 *other;
    s32 dx, dy;
    if (arg1 != NULL) {
        u8 *vt = *(u8 **)(arg1 + 4);
        other = (*(u8 *(**)(u8 *))(vt + 0x4D4))(arg1 + *(s16 *)(vt + 0x4D0));
    } else {
        other = NULL;
    }
    dy = M2C_FIELD(arg0, s32 *, 0x6C) - M2C_FIELD(other, s32 *, 0x6C);
    dx = M2C_FIELD(arg0, s32 *, 0x68) - M2C_FIELD(other, s32 *, 0x68);
    return fn_8013678C((f32)(dy * dy + dx * dx) * 0.0625f);
}

f32 fn_80136BBC(u8 *arg0, s32 *arg1) {
    s32 dx, dy;
    dy = arg1[1] - M2C_FIELD(arg0, s32 *, 0x6C);
    dx = arg1[0] - M2C_FIELD(arg0, s32 *, 0x68);
    return fn_8013678C((f32)(dy * dy + dx * dx) * 0.0625f);
}

s32 fn_801375C8(void) {
    return 0x584F424A;
}

s32 fn_80137E2C(void) {
    return 0;
}

s32 fn_80138904(void *self) {
    char *obj = *(char **)((char *)self + 4);
    char *vt = *(char **)(obj + 4);
    char *r = (*(char *(**)(void *))(vt + 0x2D4))(obj + *(s16 *)(vt + 0x2D0));
    if (*(s16 *)(r + 0x4E) != 0 || *(s16 *)(r + 0x50) != 0) {
        return 1;
    }
    return *(s16 *)(r + 0x8A) != 0;
}

s32 fn_80138970(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return (*(u16 *)fn_80141C5C((s32)self + 0x28, 8) >> 14) & 1;
}

s32 fn_801389A0(void *self, s32 arg1) {
    s16 *fn_80141C5C(s32, s32);
    void fn_80142174(s32, s32, s32);
    s32 p = (s32)self + 0x28;
    s32 v = *fn_80141C5C(p, 8);
    if (arg1 != 0) {
        fn_80142174(p, 8, v | 0x4000);
    } else {
        fn_80142174(p, 8, v & ~0x4000);
    }
    return 1;
}

s32 fn_80138DBC(void *self) {
    s16 *fn_80141C5C(s32, s32);
    s32 fn_801A0F94(s32, s32);
    s32 result = 0;
    char *obj = *(char **)((char *)self + 4);
    char *vt = *(char **)(obj + 4);
    switch ((*(s32 (**)(void *))(vt + 0x364))(obj + *(s16 *)(vt + 0x360)) & 5) {
    case 0:
        break;
    case 1:
        result = 2;
        break;
    case 4:
        result = 8;
        break;
    }
    if (result != 0) {
        s32 p = (s32)self + 0x28;
        if (*fn_80141C5C(p, 1) != 0) {
            result = fn_801A0F94(result, *fn_80141C5C(p, 1) / 2);
        }
    }
    return result;
}

s32 fn_801392E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

void fn_801392E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
}

void fn_80139440(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC4) != arg1) {
        M2C_FIELD(arg0, s32 *, 0xC4) = arg1;
    }
}

s32 fn_80139454(void *arg0, f32 *arg1, f32 *arg2) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
        *arg1 = M2C_FIELD(arg0, f32 *, 0xD0);
        *arg2 = M2C_FIELD(arg0, f32 *, 0xD4);
    }
    return M2C_FIELD(arg0, s32 *, 0xCC);
}

void fn_80139478(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    M2C_FIELD(arg0, f32 *, 0xD4) = farg1;
    M2C_FIELD(arg0, f32 *, 0xD0) = farg0;
}

void fn_8013948C(void *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0xD0);
    *arg2 = M2C_FIELD(arg0, f32 *, 0xD4);
}

void fn_801394A0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
}

s32 fn_801394AC(void) {
    return 0;
}

s32 fn_801394B4(void *arg0) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r3, void **, 4);
    return M2C_FIELD(temp_r9, s32 (**)(void *), 0x2DC)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x2D8)) == 2;
}

u8 fn_801394F8(void *arg0) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r3, void **, 4);
    return M2C_FIELD(temp_r9, s32 (**)(void *, s32), 0x224)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x220), 0x37);
}

s32 fn_80139538(void *arg0, s32 arg1) {
    void *obj;
    void *vt;
    s32 ret;

    obj = M2C_FIELD(arg0, void **, 4);
    vt = M2C_FIELD(obj, void **, 4);
    ret = M2C_FIELD(vt, s32 (**)(void *), 0x47C)(obj + M2C_FIELD(vt, s16 *, 0x478));
    obj = M2C_FIELD(arg0, void **, 4);
    vt = M2C_FIELD(obj, void **, 4);
    M2C_FIELD(vt, void (**)(void *, s32, s32), 0x1AC)(obj + M2C_FIELD(vt, s16 *, 0x1A8), 0x37, arg1);
    return ret;
}

void fn_8013966C(s32 arg0) {
    M2C_UNK fn_80145C80(s32);
    fn_80145C80(arg0 + 0x28);
}

void fn_8014843C(s32 **arg0, s32 arg1) {
    **arg0 = arg1;
}

void fn_80148448(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 4) = arg1;
}

void fn_80148454(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 8) = arg1;
}

void fn_80148460(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0xC) = arg1;
}

void fn_8014846C(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0x10) = arg1;
}

void fn_801484BC(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x58);
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *, s32))(vt + 0x5C))(obj + *(s16 *)(vt + 0x58), *(s16 *)((u8 *)self + 0x64));
}

s32 fn_801484F8(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_80148500(void) {

}

void fn_80148504(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x84) & ~arg1;
    M2C_FIELD(arg0, s32 *, 0x84) = temp_r0;
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x84) = (s32) (temp_r0 | arg1);
    }
}

s32 fn_80148524(void *arg0, s32 arg1) {
    return (M2C_FIELD(arg0, s32 *, 0x84) & arg1) != 0;
}

s32 fn_8014853C(void *arg0) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r3, void **, 4);
    return M2C_FIELD(temp_r9, s32 (**)(void *), 0x29C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x298)) ^ 1;
}

s32 fn_80148578(void *self) {
    s32 result = 0;

    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s32 (**)(void *), 0x3DC)(
            M2C_FIELD(self, char **, 4) + M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s16 *, 0x3D8)) != 0) {
        if (M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s32 (**)(void *), 0x2DC)(
                M2C_FIELD(self, char **, 4) + M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s16 *, 0x2D8)) != 8) {
            result = 1;
        }
    }
    return result;
}

s32 fn_80148664(void) {
    return lbl_80494474;
}

s32 fn_8014866C(void) {
    return lbl_8049447C;
}

void fn_80148674(void (*cb)(void)) {
    lbl_8049447C = cb;
}

s32 fn_8014867C(void) {
    return lbl_80494480;
}

void fn_80148684(void (*cb)(void)) {
    lbl_80494480 = cb;
}

s32 fn_8014868C(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x94) - M2C_FIELD(arg0, s32 *, 0x90)) >> 5;
}

s32 fn_801486A0(void *arg0) {
    u8 *obj = M2C_FIELD(arg0, u8 **, 4);
    u8 *vt = *(u8 **)(obj + 4);
    u8 *r = (*(u8 *(**)(void *))(vt + 0x18C))(obj + *(s16 *)(vt + 0x188));
    return (*(s32 (**)(void *, s32))(*(u8 **)r + 0x74))(r + *(s16 *)(*(u8 **)r + 0x70), 6) != 0;
}

void fn_80148704(void *arg0) {
    M2C_UNK fn_8016D954(s32);
    fn_8016D954(M2C_FIELD(arg0, s32 *, 0x8C));
}

void fn_80148728(void *self, s32 arg1) {
    char *obj = *(char **)((char *)self + 4);
    char *vt = *(char **)(obj + 4);
    char *r = (*(char *(**)(char *))(vt + 0x18C))(obj + *(s16 *)(vt + 0x188));
    (*(void (**)(char *, s32))(*(char **)r + 0x74))(r + *(s16 *)(*(char **)r + 0x70), arg1);
}

s32 fn_80148788(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return (*(u16 *)fn_80141C5C((s32)self + 0x28, 8) >> 5) & 1;
}

s32 fn_801487B8(void *self) {
    s32 fn_8015125C(void *, s32);
    s32 result = 0;

    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s32 (**)(void *), 0x2DC)(
            M2C_FIELD(self, char **, 4) + M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s16 *, 0x2D8)) == 8) {
        s32 t;
        if (self != 0) {
            t = fn_8015125C(*M2C_FIELD(self, void ***, 4), 6);
        } else {
            t = 0;
        }
        if (t != 0) {
            result = 1;
        }
    }
    return result;
}

s32 fn_80148838(void *self) {
    s32 fn_8015125C(void *, s32);
    s32 result = 0;

    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s32 (**)(void *), 0x2DC)(
            M2C_FIELD(self, char **, 4) + M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s16 *, 0x2D8)) == 8) {
        if (M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s32 (**)(void *, s32), 0x194)(
                M2C_FIELD(self, char **, 4) + M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s16 *, 0x190), 0xF) == 0) {
            s32 t;
            if (self != 0) {
                t = fn_8015125C(*M2C_FIELD(self, void ***, 4), 6);
            } else {
                t = 0;
            }
            if (t != 0) {
                result = 1;
            }
        }
    }
    return result;
}

s32 fn_801488E0(void *self) {
    s32 fn_8015125C(void *, s32);
    s32 result = 0;

    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s32 (**)(void *), 0x2DC)(
            M2C_FIELD(self, char **, 4) + M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s16 *, 0x2D8)) == 8) {
        if (M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s32 (**)(void *, s32), 0x194)(
                M2C_FIELD(self, char **, 4) + M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 4), void **, 4), s16 *, 0x190), 0xF) != 0) {
            if ((self != NULL ? fn_8015125C(*M2C_FIELD(self, void ***, 4), 6) : 0) != 0) {
                result = 1;
            }
        }
    }
    return result;
}

void fn_80148988(s32 arg0) {
    M2C_UNK fn_80142174(s32);
    fn_80142174(arg0 + 0x28);
}

void fn_801489AC(void *arg0, s32 i, s16 v) {
    ((struct { u8 pad[0x16]; s16 a[1]; } *)arg0)->a[i] = v;
}

void fn_801489BC(void *arg0, s32 i, s16 v) {
    M2C_FIELD(arg0, s16 **, 0x8)[i] = v;
}

s32 fn_801489CC(void) {
    return 0;
}

void fn_801489D4(void) {

}

s32 fn_801489D8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0x50);
}

s32 fn_801489E4(s32 arg0) {
    s16 *fn_80141C5C(s32);
    return *((s16 *(*)(s32, s32))fn_80141C5C)(arg0 + 0x28, 0x3C) != 0;
}

void fn_80148A20(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x58);
    temp_r9 = M2C_FIELD(temp_r11, void **, 0);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, s32), 0x234)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x230), M2C_FIELD(arg0, s16 *, 0x64), 1);
}

void fn_80148A60(void *self, s32 arg1) {
    u8 *obj = *(u8 **)((u8 *)self + 0x58);
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *, s32, s32, s32))(vt + 0x22C))(obj + *(s16 *)(vt + 0x228), *(s16 *)((u8 *)self + 0x64), 1, arg1);
}

void fn_80148AA4(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x58);
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *, s32))(vt + 0x224))(obj + *(s16 *)(vt + 0x220), *(s16 *)((u8 *)self + 0x64));
}

s32 fn_80148AE0(void *self, s32 arg1) {
    u8 *obj = M2C_FIELD(self, u8 **, 0x58);
    u8 *vt = *(u8 **)obj;
    return (*(s32 (**)(void *, s32, s32))(vt + 0x214))(obj + *(s16 *)(vt + 0x210), M2C_FIELD(self, s16 *, 0x64), arg1);
}

void fn_80148B20(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x58);
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *, s32))(vt + 0x21C))(obj + *(s16 *)(vt + 0x218), *(s16 *)((u8 *)self + 0x64));
}

s32 fn_80148B5C(s32 arg0) {
    return arg0 + 0x70;
}

s16 fn_80148B64(s32 arg0, s32 arg1) {
    s16 *fn_80141C5C(s32, s32);
    return *fn_80141C5C(arg0 + 0x28, arg1);
}

s16 fn_80148B8C(void *self, s32 i) {
    return ((struct { u8 pad[0x16]; s16 a[1]; } *)self)->a[i];
}

s16 fn_80148B9C(void *arg0, s32 arg1) {
    return ((s16 *)(M2C_FIELD(arg0, void **, 0x8)))[arg1];
}

s32 fn_80148BAC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x58);
}

void fn_80148BB4(void *arg0) {
    M2C_UNK fn_8016DD1C(s32);
    fn_8016DD1C(M2C_FIELD(arg0, s32 *, 0x8C));
}

void fn_80148BD8(void *arg0) {
    M2C_UNK fn_8016DD7C(s32);
    fn_8016DD7C(M2C_FIELD(arg0, s32 *, 0x8C));
}

s32 fn_80148BFC(void *self) {
    s16 *fn_80141C5C(s32, s32);
    s32 result = 0;
    u8 *obj = *(u8 **)((u8 *)self + 0x4);
    u8 *vt = *(u8 **)(obj + 4);
    u8 *r = (*(u8 *(**)(void *))(vt + 0x2D4))(obj + *(s16 *)(vt + 0x2D0));
    if (*(s16 *)(r + 0x5C) != 0 || (*fn_80141C5C((s32)self + 0x28, 8) & 0x400)) {
        result = 1;
    }
    return result;
}

s32 fn_80148C70(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x4);
    u8 *vt = *(u8 **)(obj + 4);
    u8 *r = (*(u8 *(**)(void *))(vt + 0x2D4))(obj + *(s16 *)(vt + 0x2D0));
    return *(s16 *)(r + 0x12) == 0xE;
}

s32 fn_80148CB8(void *arg0) {
    return ((s32) (M2C_FIELD(arg0, s32 *, 0x94) - M2C_FIELD(arg0, s32 *, 0x90)) >> 5) - 1;
}

s32 fn_80148CD0(void *self) {
    s32 result;
    u8 *r = (*(u8 *(**)(void *))(*(u8 **)(M2C_FIELD(self, u8 **, 4) + 4) + 0x27C))(M2C_FIELD(self, u8 **, 4) + *(s16 *)(*(u8 **)(M2C_FIELD(self, u8 **, 4) + 4) + 0x278));
    result = 0;
    if (r != 0) {
        result = (*(s32 (**)(void *, s32))(*(u8 **)(M2C_FIELD(self, u8 **, 4) + 4) + 0x44C))(M2C_FIELD(self, u8 **, 4) + *(s16 *)(*(u8 **)(M2C_FIELD(self, u8 **, 4) + 4) + 0x448), *(s16 *)(r + 4));
    }
    return result;
}

u16 fn_80148D40(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return *(u16 *)fn_80141C5C((s32)self + 0x28, 0x1D);
}

s32 fn_80148D6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

s16 fn_80148D74(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), s16 *, 0x12);
}

s16 fn_80148D80(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x64);
}

void fn_80148E94(void *arg0, void *arg1) {
    struct { s32 a, b; } *d = (void *)((u8 *)arg0 + 0x68);
    *d = *(typeof(d))arg1;
}

void fn_80148EA8(void *arg0, void *arg1) {
    struct { s32 a, b; } *d = arg1;
    *d = *(typeof(d))((u8 *)arg0 + 0x68);
}

s32 fn_80148EBC(s32 arg0) {
    return arg0 + 0x68;
}

void fn_80148EC4(void *arg0) {
    M2C_UNK fn_8016DBF0(s32);
    fn_8016DBF0(M2C_FIELD(arg0, s32 *, 0x8C));
}

s32 fn_80148EE8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_80148EF0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_80148EF8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0xC);
}

s32 fn_8016CB94(void *);
s32 fn_80148F04(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x8C);
    s32 r = M2C_FIELD(p, s32 *, 0);
    if (r == 0) {
        r = fn_8016CB94(p);
    }
    return r;
}

s32 fn_80148F38(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), s16 *, 0x14) != 0;
}

s16 fn_80148F54(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return *fn_80141C5C((s32)self + 0x28, 8);
}

s16 fn_80148F80(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return *fn_80141C5C((s32)self + 0x28, 0xD);
}

s32 fn_80148FAC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60);
}

s32 fn_80148FB4(void *arg0) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0xA4) - M2C_FIELD(arg0, s32 *, 0xA0)) * 0xEEEEEEEF) >> 2;
}

s32 fn_80148FD4(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0xA0) + (arg1 * 0x3C);
}

s16 fn_80148FE4(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return *fn_80141C5C((s32)self + 0x28, 0x31);
}

void fn_80149010(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x58);
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *))(vt + 0xDC))(obj + *(s16 *)(vt + 0xD8));
}

s16 fn_80149048(void *arg0) {
    void *fn_8016CC44(s32);
    return M2C_FIELD(M2C_FIELD(fn_8016CC44(M2C_FIELD(arg0, s32 *, 0x8C)), void **, 0x38), s16 *, 0x8A);
}

s32 fn_80149074(void *arg0) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r3, void **, 4);
    return M2C_FIELD(temp_r9, s32 (**)(void *), 0x3BC)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x3B8)) == 6;
}

s32 fn_801490B8(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return (*(u16 *)fn_80141C5C((s32)self + 0x28, 0x28) >> 10) & 1;
}

s16 fn_801490E8(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return *fn_80141C5C((s32)self + 0x28, 0x33);
}

s16 fn_80149114(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return *fn_80141C5C((s32)self + 0x28, 0x10);
}

s32 fn_80149140(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return *fn_80141C5C((s32)self + 0x28, 0xF) != 0;
}

s32 fn_8014917C(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return *fn_80141C5C((s32)self + 0x28, 0x27) > 0;
}

s32 fn_801491B8(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return (*(u16 *)fn_80141C5C((s32)self + 0x28, 0x8) >> 9) & 1;
}

s32 fn_801491E8(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return (*(u16 *)fn_80141C5C((s32)self + 0x28, 0x28) >> 5) & 1;
}

s32 fn_80149218(void *self) {
    s16 *fn_80141C5C(s32, s32);
    return (*(u16 *)fn_80141C5C((s32)self + 0x28, 0x8) >> 11) & 1;
}

s32 fn_80149248(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 4);
    u8 *vt = *(u8 **)(obj + 4);
    return ((*(u32 (**)(void *))(vt + 0x35C))(obj + *(s16 *)(vt + 0x358)) >> 2) & 1;
}

s32 fn_80149284(void *arg0) {
    u8 *obj;
    u8 *vt;

    if ((*(s32 (**)(void *))(*(u8 **)(M2C_FIELD(arg0, u8 **, 4) + 4) + 0x434))(M2C_FIELD(arg0, u8 **, 4) + *(s16 *)(*(u8 **)(M2C_FIELD(arg0, u8 **, 4) + 4) + 0x430)) != 0) {
        obj = M2C_FIELD(arg0, u8 **, 4);
        vt = *(u8 **)(obj + 4);
        return ((*(u32 (**)(void *))(vt + 0x35C))(obj + *(s16 *)(vt + 0x358)) & 2) == 0;
    }
    return ((*(u32 (**)(void *))(*(u8 **)(M2C_FIELD(arg0, u8 **, 4) + 4) + 0x35C))(M2C_FIELD(arg0, u8 **, 4) + *(s16 *)(*(u8 **)(M2C_FIELD(arg0, u8 **, 4) + 4) + 0x358)) >> 4) & 1;
}

s32 fn_80149318(void *arg0) {
    u8 *obj = M2C_FIELD(arg0, u8 **, 4);
    u8 *vt = *(u8 **)(obj + 4);
    u8 *r = (*(u8 *(**)(void *))(vt + 0x18C))(obj + *(s16 *)(vt + 0x188));
    return (*(s32 (**)(void *, s32))(*(u8 **)r + 0x74))(r + *(s16 *)(*(u8 **)r + 0x70), 0x1A) != 0;
}

void fn_8014937C(void *arg0) {
    u8 *obj = M2C_FIELD(arg0, u8 **, 0x58);
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *))(vt + 0x94))(obj + *(s16 *)(vt + 0x90));
}

s32 fn_801493B4(void *arg0) {
    u8 *p = M2C_FIELD(arg0, u8 **, 0x5C);
    return p != NULL ? *(s32 *)(p + 4) : 0;
}

void fn_801493CC(u8 *arg0) {
    u8 *obj;
    u8 *vt;

    obj = *(u8 **)(arg0 + 0x58);
    vt = *(u8 **)obj;
    (*(void (**)(u8 *))(vt + 0x9C))(obj + *(s16 *)(vt + 0x98));
}

s32 fn_80149404(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C);
}

void fn_8014940C(u8 *arg0) {
    u8 *obj;
    u8 *res;

    obj = *(u8 **)(arg0 + 0x58);
    res = (*(u8 *(**)(u8 *))(*(u8 **)obj + 0x9C))(obj + *(s16 *)(*(u8 **)obj + 0x98));
    (*(void (**)(u8 *))(*(u8 **)(res + 4) + 0x4D4))(res + *(s16 *)(*(u8 **)(res + 4) + 0x4D0));
}

s32 fn_8014945C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0x14);
}

void fn_80149468(void) {

}

void fn_8014946C(void *arg0, s16 arg1) {
    extern s16 lbl_804944C4;
    lbl_804944C4 = arg1;
}

void fn_80149474(void) {
    M2C_UNK fn_801482C4(M2C_UNK, M2C_UNK);
    fn_801482C4(1, 0xFFFF);
}

void fn_801494A0(void) {
    void fn_801482C4(s32, s32);
    fn_801482C4(0, 0xFFFF);
}

