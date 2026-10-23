/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802F70D4(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x38) = arg1;
}

void fn_802F7188(f32 *arg0, f32 farg0) {
    *arg0 = farg0;
}

void fn_802F79A8(void *arg0, s32 arg1) {
    M2C_UNK fn_802E2108(s32, s32);
    fn_802E2108(arg1, M2C_FIELD(arg0, s32 *, 0x3C));
}

void fn_802FB8A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s8 *, 0) = 7;
}

void fn_802FBC54(void) {

}

void fn_802FBC58(void) {

}

void fn_802FBC5C(void) {

}

void fn_802FBDC8(void) {

}

void fn_802FC0D8(void) {

}

s32 fn_802FC0DC(void) {
    return 0;
}

void fn_802FC0E4(void) {

}

void fn_802FD370(void) {

}

void fn_802FDEB0(void) {

}

void fn_802FDEB4(void) {

}

void fn_802FDF7C(void) {

}

void fn_802FDF80(void) {

}

void fn_802FE29C(void) {

}

void fn_802FE734(void) {

}

void fn_802FE858(void) {

}

void fn_802FE85C(void) {

}

void *fn_802FEAB4(s32 *arg0, s32 size, s32 align) {
    void *fn_8036375C(s32, s32, s32);
    return fn_8036375C(*arg0, size, align);
}

void fn_802FEAD8(s32 *arg0) {
    M2C_UNK fn_802CB634(s32);
    fn_802CB634(*arg0);
}

void fn_802FEAFC(s32 *arg0) {
    void fn_8036375C(s32);
    fn_8036375C(*arg0 + 0x14);
}

void fn_802FEB24(s32 *arg0) {
    void fn_802CB634(s32);
    fn_802CB634(*arg0 + 0x14);
}

void *fn_802FEB4C(s32 *arg0, void *src, s32 size) {
    void fn_802482F8(void *, void *, s32);
    void *p;

    if (src == NULL) {
        return NULL;
    }
    p = fn_802FEAB4(arg0, size, 0x20);
    fn_802482F8(p, src, size);
    return p;
}

void fn_802FEBA8(void) {
    extern char *lbl_80495050;
    char *obj = lbl_80495050;
    char *vt = *(char **)obj;
    M2C_FIELD(vt, void (**)(void *), 0x18C)(obj + M2C_FIELD(vt, s16 *, 0x188));
}

void fn_802FEC88(s32 *arg0) {
    M2C_UNK fn_8036B980(s32);
    fn_8036B980(*arg0);
}

s32 fn_802FECD8(void) {
    return 0;
}

void fn_802FECE0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    M2C_FIELD(arg0, s32 *, 0x54) = arg2;
}

void fn_802FECEC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
}

void fn_802FECF8(void) {
    M2C_UNK fn_802FEBE0(M2C_UNK, M2C_UNK);
    fn_802FEBE0(1, 0xFFFF);
}

