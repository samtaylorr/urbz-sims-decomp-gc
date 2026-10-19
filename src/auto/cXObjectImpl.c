/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80494470;
void fn_801301DC(void) {

}

void fn_801301E0(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = (s16) M2C_FIELD(arg0, s16 *, 0x16) >> 8;
    *arg2 = (s32) M2C_FIELD(arg0, u8 *, 0x17);
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

extern s32 lbl_80494478;
void fn_801325DC(void (*cb)(void)) {
    lbl_80494478 = cb;
}

void fn_80133954(s32 *arg0) {
    *arg0 = 0;
}

s32 fn_801352DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xB0);
}

void fn_80135D6C(void) {

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

s32 fn_801489CC(void) {
    return 0;
}

void fn_801489D4(void) {

}

s32 fn_801489D8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0x50);
}

s32 fn_80148B5C(s32 arg0) {
    return arg0 + 0x70;
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

s32 fn_80148EE8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_80148EF0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_80148EF8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0xC);
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

s32 fn_80149404(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C);
}

s32 fn_8014945C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), s32 *, 0x14);
}

void fn_80149468(void) {

}

