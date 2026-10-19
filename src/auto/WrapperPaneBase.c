/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s32 x;
    s32 y;
} WrapperPanePoint;

typedef struct {
    u8 pad0[0x1C];
    WrapperPanePoint pos;
    WrapperPanePoint size;
    u8 pad2C[0x40 - 0x2C];
    s32 unk40[1];
} WrapperPaneBase;

void fn_800CD09C(void);
s32 fn_800C5630(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}

s32 fn_800C5638(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

void fn_800C56B4(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x80) = farg0;
}

void fn_800C56BC(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x84) = farg0;
}

s32 fn_800C56C4(s32 arg0) {
    return arg0 + 0x80;
}

f32 fn_800C56CC(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x80);
}

f32 fn_800C56D4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x84);
}

s32 fn_800C57A8(s32 arg0) {
    return arg0 + 0x88;
}

s32 fn_800C60BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}

s32 fn_800CAA04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 fn_800CBD30(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}

s32 fn_800CBD38(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x7C);
}

s32 fn_800CBD40(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

s32 fn_800CBD48(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

void fn_800CCF70(void) {
    fn_800CD09C();
}

void fn_800CD104(void);
void fn_800CED30(void) {
    fn_800CD104();
}

void fn_800CEEC0(void) {

}

void fn_800CEEC4(void) {

}

void fn_800CEEC8(void) {

}

void fn_800CF02C(void) {

}

void fn_800CF648(s32 *self) {
    self[1] = 1;
}

f32 fn_800CF7DC(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x2C);
}

void fn_800CF868(u8 *self, s32 on) {
    u8 *p = self + 0x20;
    if (on) {
        *(u32 *)(p + 0x38) |= 0x20;
    } else {
        *(u32 *)(p + 0x38) &= ~0x20;
    }
}

s32 fn_800CF894(u8 *self) {
    return *(s32 *)(self + 0x20);
}

void fn_8039D8D8(void *);
void fn_800CF89C(u8 *self, s32 arg1) {
    u8 *p = self + 0x20;
    *(s32 *)(p + 0x30) = arg1;
    fn_8039D8D8(p);
    *(u32 *)(self + 0x4) |= 2;
}

s32 fn_800CF8DC(u8 *self) {
    return *(s32 *)(self + 0x50);
}

f32 fn_800CFE34(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x2C);
}

s32 fn_800CFFE4(s32 *self) {
    return *self;
}

void fn_800CFFEC(void) {

}

s32 fn_800D0788(s32 *self) {
    return self[6];
}

void fn_800D0790(WrapperPaneBase *self, WrapperPanePoint *pos, WrapperPanePoint *size) {
    s32 px = pos->x;
    s32 py = pos->y;
    s32 sx;
    s32 sy;
    self->pos.x = px;
    self->pos.y = py;
    sx = size->x;
    sy = size->y;
    self->size.x = sx;
    self->size.y = sy;
}

extern s32 fn_80248808(s32);
void fn_800D07BC(s32 *self, s32 arg) {
    self[14] = arg;
    if (arg == 0) {
        self[15] = arg;
    } else {
        self[15] = fn_80248808(arg);
    }
}

s32 fn_800D0804(WrapperPaneBase *self, s32 i) {
    return self->unk40[i];
}

s32 fn_800D0F08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

void fn_800CE8F4(u8 *self, s32 arg);
void fn_800CE924(u8 *self, s32 arg);
void fn_800D0FF0(u8 *self) {
    u8 *obj = *(u8 **)(self + 0x48);
    u8 *vt = *(u8 **)(obj + 0x1C);
    (*(void (**)(void *))(vt + 0x3C))(obj + *(s16 *)(vt + 0x38));
    fn_800CE8F4(self, 2);
    fn_800CE924(self, 2);
}

void fn_800D104C(u8 *self) {
    u8 *obj = *(u8 **)(self + 0x48);
    u8 *vt = *(u8 **)(obj + 0x1C);
    (*(void (**)(void *))(vt + 0x4C))(obj + *(s16 *)(vt + 0x48));
    fn_800CE8F4(self, 2);
}

void fn_800D109C(u8 *self) {
    u8 *obj = *(u8 **)(self + 0x48);
    u8 *vt = *(u8 **)(obj + 0x1C);
    (*(void (**)(void *))(vt + 0x5C))(obj + *(s16 *)(vt + 0x58));
    fn_800CE924(self, 2);
}

u8 *fn_800D10EC(u8 *self) {
    return self + 8;
}

