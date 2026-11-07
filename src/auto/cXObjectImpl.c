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
    return (u8)arg1 | (arg0 << 8);
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
    struct {
        s32 a;
        s32 b;
    } buf;
    char *obj;
    char *vt;
    s32 r;

    fn_80105534(&buf);
    obj = lbl_80496668;
    vt = *(char **)obj;
    r = (*(s32 (**)(void *, void *))(vt + 0x23C))(obj + *(s16 *)(vt + 0x238), &buf);
    if (r == 0) {
        fn_801055FC(&buf, 2);
        return 0;
    } else {
        obj = M2C_FIELD(self, char **, 4);
        vt = M2C_FIELD(obj, char **, 4);
        r = (*(s32 (**)(void *, s32))(vt + 0x44C))(obj + *(s16 *)(vt + 0x448), r);
        fn_801055FC(&buf, 2);
        return r;
    }
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

s32 fn_8013391C(s32 arg0, s32 arg1) {
    M2C_UNK fn_801336D8(s32, s32);
    fn_801336D8(arg1, arg0);
    return arg0;
}

void fn_80133954(s32 *arg0) {
    *arg0 = 0;
}

s32 fn_801339F0(s32 arg0, s32 arg1) {
    M2C_UNK fn_80133CBC(s32, s32);
    fn_80133CBC(arg1, arg0);
    return arg0;
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
    f32 g;
    if (x <= 0.0f) {
        return 0.0f;
    }
    g = x * 0.25f + 1.0f;
    g = (g + x / g) * 0.5;
    x = (g + x / g) * 0.5;
    return x;
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
    return fn_8013678C((f32)(dx * dx + dy * dy) * 0.0625f);
}

s32 fn_801375C8(void) {
    return 0x584F424A;
}

s32 fn_80137E2C(void) {
    return 0;
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
    M2C_FIELD(arg0, f32 *, 0xD0) = farg0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    M2C_FIELD(arg0, f32 *, 0xD4) = farg1;
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
    return M2C_FIELD(temp_r9, u8 (**)(void *, s32), 0x224)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x220), 0x37);
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

void fn_80148704(void *arg0) {
    M2C_UNK fn_8016D954(s32);
    fn_8016D954(M2C_FIELD(arg0, s32 *, 0x8C));
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

s32 fn_80148CB8(void *arg0) {
    return ((s32) (M2C_FIELD(arg0, s32 *, 0x94) - M2C_FIELD(arg0, s32 *, 0x90)) >> 5) - 1;
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

void fn_8016CB94(void *);
void fn_80148F04(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x8C);
    if (M2C_FIELD(p, s32 *, 0) == 0) {
        fn_8016CB94(p);
    }
}

s32 fn_80148F38(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), s16 *, 0x14) != 0;
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

s16 fn_80149048(void *arg0) {
    void *fn_8016CC44(s32);
    return M2C_FIELD(M2C_FIELD(fn_8016CC44(M2C_FIELD(arg0, s32 *, 0x8C)), void **, 0x38), s16 *, 0x8A);
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

