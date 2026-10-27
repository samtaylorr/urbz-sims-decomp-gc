/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct ERMLock {
    char *obj;
    u8 unk4[3];
} ERMLock;

static inline void ERMLock_Lock(ERMLock *l, char *obj) {
    char *vt;
    l->obj = obj;
    vt = *(char **)obj;
    (*(void (**)(void *, s32))(vt + 0x14))(obj + *(s16 *)(vt + 0x10), -1);
}

static inline void ERMLock_Unlock(ERMLock *l) {
    char *vt = *(char **)l->obj;
    (*(void (**)(void *))(vt + 0x1C))(l->obj + *(s16 *)(vt + 0x18));
}

extern u8 lbl_8041B4F0[];
extern void fn_802D20E8(void *);
void **fn_8031C754(void **self) {
    *self = lbl_8041B4F0;
    return self;
}

void fn_8031C768(void **self, s32 flags) {
    *self = lbl_8041B4F0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8031C7E8(s32 arg0) {
    M2C_UNK fn_802CA9A8(s32);
    M2C_UNK fn_803664B0();
    fn_803664B0();
    fn_802CA9A8(arg0 + 0x4C);
    return arg0;
}

void fn_8031CC10(s32 arg0) {
    M2C_UNK fn_803669E4(s32);
    fn_803669E4(arg0 + 0x37C);
}

void fn_8031CC34(s32 arg0) {
    M2C_UNK fn_803669C0(s32);
    fn_803669C0(arg0 + 0x37C);
}

void fn_8031CFA0(s32 arg0) {
    M2C_UNK fn_802D1FC8(M2C_UNK);
    s32 *fn_8031C7B4();
    M2C_UNK fn_8031D084(s32, s32 *);
    s32 *temp_r3;

    fn_802D1FC8(0x28);
    temp_r3 = fn_8031C7B4();
    *temp_r3 = 2;
    fn_8031D084(arg0, temp_r3);
}

void fn_802D8F90();
void fn_8031CFE8(char *self) {
    extern void fn_802D8F90(void *);
    fn_802D8F90(self + 8);
}

void fn_8031D080(void) {

}

void fn_8031D300(s32 arg0) {
    M2C_UNK fn_8031C91C(s32);
    fn_8031C91C(arg0 + 0x37C);
}

void fn_8031D324(s32 arg0) {
    M2C_UNK fn_8031C820(s32);
    fn_8031C820(arg0 + 0x37C);
}

void *fn_8031D910(void *arg0, s32 arg1) {
    s32 fn_8024851C(s32, s32);
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x348);
    if (var_r31 != NULL) {
loop_1:
        if (fn_8024851C(M2C_FIELD(var_r31, s32 *, 0x54), arg1) == 0) {
            return var_r31;
        }
        var_r31 = M2C_FIELD(var_r31, void **, 0xA0);
        if (var_r31 == NULL) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return NULL;
}

void fn_8031DDBC(void *arg0) {
    M2C_UNK fn_80337F84(void *);
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x348);
    if (var_r31 != NULL) {
        do {
            fn_80337F84(var_r31);
            var_r31 = M2C_FIELD(var_r31, void **, 0xA0);
        } while (var_r31 != NULL);
    }
}

s32 fn_8031DE84(void *arg0) {
    s32 fn_80337FDC(void *);
    s32 temp_r3;
    s32 var_r30;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x348);
    var_r30 = 0;
    if (var_r31 != NULL) {
        do {
            temp_r3 = fn_80337FDC(var_r31);
            var_r31 = M2C_FIELD(var_r31, void **, 0xA0);
            var_r30 += temp_r3;
        } while (var_r31 != NULL);
    }
    return var_r30;
}

s32 fn_8031E254(void *arg0, s32 arg1) {
    s32 fn_802D3EE8(s32, s32);
    void fn_803BBD88(s32 *, s32);
    s32 fn_803BBD94(s32 *, s32);
    s32 sp8[2];
    s32 *tbl;
    s32 n;
    s32 k;
    s32 i;

    tbl = (s32 *)((char *)arg0 + 0x354);
    for (k = 0; k <= 2; k++) {
        s32 p = *tbl++;
        if (p != 0) {
            i = 0;
            fn_803BBD88(sp8, p);
            n = *(s32 *)sp8[0];
            for (; i < n; i += 2) {
                if (fn_802D3EE8(arg1, sp8[1] + fn_803BBD94(sp8, i)) == 0) {
                    return sp8[1] + fn_803BBD94(sp8, i + 1);
                }
            }
        }
    }
    return 0;
}

void fn_8031E310(void *arg0) {
    M2C_UNK fn_802D8334(void *, M2C_UNK);
    s32 fn_8031CB40(s32, s32 *, M2C_UNK);
    M2C_UNK fn_8031E368(void *, s32);
    s32 sp8;

loop_1:
    if (fn_8031CB40(arg0 + 0x37C, &sp8, 1) != 0) {
        fn_8031E368(arg0, sp8);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3F0) == 0) {
        goto loop_1;
    }
    fn_802D8334(arg0 + 0x3F4, -1);
    goto loop_1;
}

void *fn_8031E664(void *arg0, void *arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5) {
    void fn_802D3E40(void *);
    void *fn_8033627C(void *);
    void fn_80337354(void *, void *, s32);
    char *vt;
    char *res;
    char *obj;

    obj = arg3;
    if (obj == NULL) {
        obj = fn_8033627C(arg1);
    }
    vt = *(char **)(obj + 0x28);
    (*(void (**)(void *, s32, s32))(vt + 0x2C))(obj + *(s16 *)(vt + 0x28), arg4, 0);
    vt = *(char **)((char *)arg1 + 0xA4);
    res = (*(void *(**)(void *, void *, s32, s32))(vt + 0x3C))((char *)arg1 + *(s16 *)(vt + 0x38), obj, arg5, arg2);
    if (res != NULL) {
        if (*(s32 *)(res + 0x1C) == 0) {
            *(s32 *)(res + 0x1C) = arg5;
        }
        fn_802D3E40(res + 0x18);
        fn_80337354(arg1, res, arg2);
    }
    return res;
}

void fn_8031E724(s32 arg0, s32 arg1) {
    extern u8 lbl_8045A228[];
    void fn_8031CC58(void *);
    void fn_8031CD18(void *, s32);

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8031CC58(lbl_8045A228);
        } else {
            fn_8031CD18(lbl_8045A228, 2);
        }
    }
}

void fn_8031E778(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3EC) = arg1;
}

void fn_8031E780(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3F0) = 1;
}

void fn_8031E78C(void *arg0) {
    M2C_UNK fn_802D838C(void *);
    M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
    fn_802D838C(arg0 + 0x3F4);
}

void fn_8031E7B8(void) {
    void fn_8031E724(s32, s32);
    fn_8031E724(1, 0xFFFF);
}

void fn_8031E7E4(void) {
    void fn_8031E724(s32, s32);
    fn_8031E724(0, 0xFFFF);
}

