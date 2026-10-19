/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802FB604(void);
extern s32 lbl_80495198;
extern s32 lbl_8049519C;
extern s32 lbl_80495120;
extern s32 lbl_80495124;
extern s32 lbl_803F4668[];
void fn_8034F9F0(u8 *self);
void fn_80351084(u8 *self);
void *fn_80348E8C(u32 size, void *p);
void fn_80345FB0(void) {

}

void fn_80346F5C(void) {

}

void *fn_80348E8C(u32 size, void *p) {
    return p;
}

s32 fn_80348EBC(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_80348EC4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

void fn_80348F38(void) {
    fn_802FB604();
}

void fn_8034AD3C(void) {

}

void fn_8034AD40(void) {

}

extern u8 lbl_8046DF78[];
void fn_80359160(u8 *arg);
void fn_8034ADDC(void) {
    fn_80359160(lbl_8046DF78);
}

void fn_8034AFD4(void) {

}

void fn_8034B700(void) {

}

void fn_803552E4(u8 *arg);
void fn_8034BAF8(void) {
    fn_803552E4(lbl_8046DF78);
}

void fn_8034BC04(void) {

}

void fn_8034BC08(void) {

}

void fn_8035B7F8(u8 *arg);
void fn_8034BC0C(void) {
    fn_8035B7F8(lbl_8046DF78);
}

void fn_8035B8CC(u8 *arg);
void fn_8034BC34(void) {
    fn_8035B8CC(lbl_8046DF78);
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8034BCEC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8034BDCC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8034C05C(void) {

}

s32 fn_8034D5AC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34C);
}

void fn_8034D8E8(void) {

}

void fn_8034D91C(s16 arg0) {
    extern s16 lbl_80495146;
    lbl_80495146 = arg0;
}

void fn_80270D34(void);
void fn_8034F8BC(void) {
    fn_80270D34();
}

void fn_80354938(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x4DC) = (s32) M2C_FIELD(arg1, s32 *, 4);
}

void fn_8035500C(void) {

}

void fn_80355DE8(void) {
    if (lbl_80495198 != 0) {
        lbl_80495198 = 0;
    }
}

void fn_80355E00(u8 *self, u8 *arg) {
    if (lbl_8049519C != 0) {
        lbl_8049519C = 0;
    }
    lbl_80495120 = *(s32 *)(arg + 4);
    lbl_80495124 = arg[1];
}

void fn_80355E28(u8 *self) {
    fn_8034F9F0(self);
    fn_80351084(self);
    *(s32 *)(self + 0x510) = 0;
}

void fn_80355E64(u8 *self, u8 *arg) {
    u8 enable;
    u8 mode;
    u8 off;
    s32 on;
    u8 *p;
    s32 val;

    enable = arg[1];
    mode = arg[2];
    off = arg[3];
    on = 0;
    self[0x462C] = enable;
    self[0x462D] = mode;
    self[0x462E] = off;
    if (enable != 0) {
        on = 1;
    }
    p = *(u8 **)(self + 0x4D8);
    val = lbl_803F4668[mode];
    p[0x3B4] = off == 0;
    p[0x3AC] = on;
    *(s32 *)(p + 0x3B0) = val;
    *(u32 *)(p + 0x6CC) |= 0x80000000 | 0x40;
}

extern s32 lbl_804951A4;
void fn_803560D0(void) {
    if (lbl_804951A4 != 0) {
        lbl_804951A4 = 0;
    }
}

extern s32 lbl_804951A8;
void fn_803560E8(void) {
    if (lbl_804951A8 != 0) {
        lbl_804951A8 = 0;
    }
}

void fn_80273F88(void);
void fn_80357AA0(void) {
    fn_80273F88();
}

void fn_80359520(void) {

}

