/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s32 *begin;
    s32 *end;
} ESimsIdVec;

void *fn_8001D654(u32 size, s32 arg1, void *p) {
    return p;
}

void *fn_8001D65C(u32 size, s32 arg1, void *p) {
    return p;
}

s32 fn_8001D664(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    return arg1;
}

s32 fn_8001D670(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 fn_8001D678(void) {
    return 1;
}

s32 fn_8001D680(void) {
    return 0;
}

s32 fn_8001D688(void) {
    return 0;
}

void fn_8001D690(void) {

}

s32 fn_8001D694(ESimsIdVec *arg0, s32 arg1) {
    s32 n;
    s32 i;
    s32 found;

    found = 0;
    n = arg0->end - arg0->begin;
    for (i = 0; i < n; i++) {
        if (arg0->begin[i] == arg1) {
            found = 1;
            break;
        }
    }
    return found;
}

s32 fn_8001DD04(s32 *arg0, s32 *arg1) {
    extern void fn_803365B8(void *, s32, u32 *, s32 *);
    extern u8 lbl_8045B438[];
    void *mgr;
    u32 a;
    s32 a2;
    u32 b;
    s32 b2;

    a = 0;
    b = 0;
    mgr = lbl_8045B438;
    fn_803365B8(mgr, *arg0, &a, &a2);
    fn_803365B8(mgr, *arg1, &b, &b2);
    return a < b;
}

void fn_8001DD7C(void *arg0, s32 *arg1) {
    extern void fn_8039B510(s32 *, s32 *, s32 (*)(s32 *, s32 *));
    extern void fn_803347B0(void *, s32, s32, s32);
    extern u8 lbl_8045B438[];
    s32 n;
    s32 i;

    n = M2C_FIELD(arg0, s32 **, 4) - M2C_FIELD(arg0, s32 **, 0);
    if (n != 0) {
        fn_8039B510(M2C_FIELD(arg0, s32 **, 0), M2C_FIELD(arg0, s32 **, 4), fn_8001DD04);
        for (i = 0; i < n; i++) {
            fn_803347B0(lbl_8045B438, M2C_FIELD(arg0, s32 **, 0)[i], 0, 0);
            if (arg1 != NULL) {
                (*arg1)++;
            }
        }
    }
}

void fn_8001E210(void *arg0, s32 arg1) {
    void fn_8001DD7C(void *, s32 *);
    M2C_UNK fn_802D838C(s32);
    M2C_UNK fn_8039B594(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK);
    extern s32 lbl_8049440C;
    void *temp_r9;

    fn_8039B594(M2C_FIELD(arg0, void **, 0xBC), lbl_8049440C, 0x6F626A74, 0, 0);
    temp_r9 = M2C_FIELD(arg0, void **, 0xBC);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) ((s32) (M2C_FIELD(temp_r9, s32 *, 4) - M2C_FIELD(temp_r9, s32 *, 0)) >> 2);
    fn_802D838C(arg1);
    fn_8001DD7C(M2C_FIELD(arg0, void **, 0xBC), arg0 + 0xAC);
}

void fn_8001E5B8(void *arg0, void *arg1, s32 arg2) {
    M2C_UNK fn_8001E284(void *, void *, s32);
    extern u8 lbl_8041EE24[];
    extern void *lbl_80496220;
    void *obj;
    void *vt;

    fn_8001E284(arg0, arg1, arg2);
    obj = arg0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 2;
    vt = *(void **)arg0;
    ((void (*)(void *, s32))M2C_FIELD(vt, void **, 0x14))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x10), -1);
    M2C_FIELD(arg1, s32 *, 0x600) += 1;
    vt = *(void **)obj;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x1C))((char *)obj + M2C_FIELD(vt, s16 *, 0x18));
    vt = *(void **)lbl_80496220;
    ((void (*)(void *, void *, s32, void *, void *, s32, s32))M2C_FIELD(vt, void **, 0x64))((char *)lbl_80496220 + M2C_FIELD(vt, s16 *, 0x60), arg0, 1, lbl_8041EE24, arg1, arg2, 0);
}

void fn_8001E674(void) {
    extern void *lbl_80496220;
    void *vt;

    vt = *(void **)lbl_80496220;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x4C))((char *)lbl_80496220 + M2C_FIELD(vt, s16 *, 0x48));
}

void fn_8001E734(void) {
    M2C_UNK fn_8001E6AC(M2C_UNK, M2C_UNK);
    fn_8001E6AC(1, 0xFFFF);
}

void fn_8001E760(void) {
    M2C_UNK fn_8001E6AC(M2C_UNK, M2C_UNK);
    fn_8001E6AC(0, 0xFFFF);
}

