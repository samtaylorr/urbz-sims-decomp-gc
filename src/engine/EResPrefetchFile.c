/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D2FD0(void);
void fn_8031FB44(void) {

}

s32 fn_8031FC74(void) {
    return 0;
}

s32 fn_8031FC7C(void) {
    return 1;
}

s32 fn_8031FC84(void) {
    return 0;
}

s32 fn_8031FC8C(void) {
    return 0;
}

s32 fn_8031FC94(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

void fn_8031FD08(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_UNK fn_8031FD64(s32, s32, s32, s32, s32, s32);
    s32 fn_80337F14(s32);
    fn_8031FD64(arg0, arg1, fn_80337F14(arg2), arg3, arg4, arg5);
}

s32 fn_8031FE04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

void fn_8031FE0C(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8031FE2C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8031FE6C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8031FEF0(void **self, s32 flags) {
    extern u8 lbl_8041B778[];
    extern void fn_8031FF50(void *);
    extern void fn_8031E910(void *, s32);
    void fn_80338184(void *, s32);
    extern u8 lbl_8045B58C[];
    *self = lbl_8041B778;
    fn_8031FF50(self);
    fn_8031E910(self, 0);
    if (flags & 1) {
        fn_80338184(lbl_8045B58C, (s32)self);
    }
}

void fn_80320010(void) {

}

s32 fn_8032015C(void *arg0) {
    M2C_UNK fn_8031EA90();
    s32 temp_r3;

    fn_8031EA90();
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return temp_r3;
}

void fn_80320204(void) {
    M2C_UNK fn_8031FEAC();
    M2C_UNK fn_80320378(M2C_UNK);
    fn_80320378(0x24);
    fn_8031FEAC();
}

void fn_8032027C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_804938A8[];
void *fn_803202BC(void) {
    return lbl_804938A8;
}

extern s32 lbl_804938B4[];
s32 fn_803202C8(void) {
    return lbl_804938B4[0];
}

extern s32 lbl_804938B8[];
s32 fn_803202D4(void) {
    return lbl_804938B8[0];
}

extern u16 lbl_804938BC[];
u16 fn_803202E0(void) {
    return lbl_804938BC[0];
}

void *fn_803202EC(void) {
    return lbl_804938A8;
}

extern u16 lbl_804938BE[];
u16 fn_803202F8(void) {
    return lbl_804938BE[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80320204(void);
extern void fn_8032022C(void);
extern void fn_80320258(void);
extern u8 lbl_803F2F20[];
extern u8 lbl_80493858[];
void fn_80320304(s32 arg0) {
    fn_802D6A90(lbl_804938A8, fn_80320204, fn_8032022C, fn_80320258, arg0, lbl_803F2F20, lbl_80493858);
}

void fn_802D2430(void);
void fn_80320358(void) {
    fn_802D2430();
}

void fn_80320378(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045B58C[];
    fn_80338000(lbl_8045B58C, arg0, 4);
}

void *fn_803203A8(u32 size, void *p);
void *fn_803203A8(u32 size, void *p) {
    return p;
}

void fn_803203B0(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045B58C[];
    fn_80338184(lbl_8045B58C, arg0);
}

void fn_803203DC(void) {
    M2C_UNK fn_80320194(M2C_UNK, M2C_UNK);
    fn_80320194(1, 0xFFFF);
}

