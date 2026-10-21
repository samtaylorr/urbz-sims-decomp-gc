/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} FamilyQuad;


extern s32 lbl_80494F54;
FamilyQuad *fn_80331EA4(FamilyQuad *q) {
    q->a = 0;
    q->b = 0;
    q->c = 0;
    q->d = 0;
    return q;
}

void fn_803321CC(void) {
    extern s32 lbl_80494F54;
    lbl_80494F54 = 1;
}

void fn_803321D8(void) {
    extern s32 lbl_80494F54;
    lbl_80494F54 = 0;
}

s32 fn_803321E4(void) {
    return lbl_80494F54;
}

s32 fn_803326F0(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 4) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0) != 0)) {
        return M2C_FIELD(arg0, s32 *, 0x10);
    }
    return 0;
}

s32 fn_80332824(s32 *self) {
    return *self;
}

s32 fn_8033282C(s32 *self) {
    return self[2];
}

s32 fn_80332834(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_803328F0(void) {

}

s32 fn_803328F4(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x5C4) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x5C0) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x5C8) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x5CC) != 0) || (fn_803321E4() != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}

void fn_80332960(void *arg0) {
    M2C_UNK fn_803329A0();
    fn_803329A0();
    M2C_FIELD(arg0, s32 *, 0x5C0) = 1;
}

void fn_80332994(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x5C4) = 1;
}

void fn_803329A0(void *arg0) {
    fn_803321CC();
    M2C_FIELD(arg0, s32 *, 0x5C4) = 0;
}

void fn_80332A0C(void *arg0) {
    fn_803329A0(arg0);
    M2C_FIELD(arg0, s32 *, 0x5CC) = 1;
}

void fn_80332A40(void) {

}

void fn_80332A44(void) {

}

s32 fn_80332A48(s32 arg0, s32 arg1) {
    s32 fn_803327E0(s32, s32);
    s32 i;
    s32 p;

    p = arg0 + 0x340;
    for (i = 0; i < 32; i++) {
        if (fn_803327E0(p, arg1) != 0) {
            return i;
        }
        p += 0x14;
    }
    return -1;
}

void fn_80332AA8(s32 arg0) {
    s32 fn_80332A48();
    M2C_UNK fn_80332AE0(s32, s32);
    fn_80332AE0(arg0, fn_80332A48());
}

s32 fn_80332AE0(char *arg0, u32 arg1) {
    s32 var_r3;

    var_r3 = 0;
    if (arg1 <= 0x1FU) {
        var_r3 = fn_803326F0(&arg0[arg1 * 0x14 + 0x340]);
    }
    return var_r3;
}

s32 *fn_80332B94(char *arg0, u32 arg1) {
    extern s32 lbl_803F35E0[];
    if (arg1 <= 0x1FU) {
        return (s32 *)fn_80332824((s32 *)&arg0[arg1 * 0x14 + 0x340]);
    }
    return lbl_803F35E0;
}

s32 fn_80332BD8(char *arg0, u32 arg1) {
    s32 var_r3;

    var_r3 = 0;
    if (arg1 <= 0x1FU) {
        var_r3 = fn_8033282C(&arg0[arg1 * 0x14 + 0x340]);
    }
    return var_r3;
}

s32 fn_80332C14(char *arg0, u32 arg1) {
    s32 var_r3;

    var_r3 = 0;
    if (arg1 <= 0x1FU) {
        var_r3 = fn_80332834(&arg0[arg1 * 0x14 + 0x340]);
    }
    return var_r3;
}

void fn_80332D00(void *arg0) {
    M2C_FIELD((int)arg0, s32 *, (int)0x5C0) = 0;
    M2C_FIELD(arg0, s32 *, (unsigned)0x5C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x5CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C4) = 0;
    fn_803321D8();
}

void fn_80332D88(void) {
    M2C_UNK fn_80332D34(M2C_UNK, M2C_UNK);
    fn_80332D34(1, 0xFFFF);
}

