/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802C46DC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

s32 fn_802C4764(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802C47AC(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802C47F4(void) {
    return 0;
}

void fn_802C47FC(void) {

}

extern s32 lbl_80494DB0;
void fn_802C54FC(void (*cb)(void)) {
    lbl_80494DB0 = cb;
}

s32 fn_802C5CEC(void) {
    return 0;
}

s32 fn_802C5CF4(s32 *self) {
    return self[2];
}

s32 fn_802C5CFC(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_802C5D04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_802C5D0C(s32 *self) {
    return self[6];
}

s32 fn_802C5D14(s32 *self) {
    return self[7];
}

s32 fn_802C5D1C(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802C5D24(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_802C5D2C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void fn_802C5D34(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

void fn_802C5D3C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

void fn_802C5D44(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void fn_802C5E30(s32 arg0) {
    M2C_UNK fn_803B9128(s32);
    fn_803B9128(arg0 + 4);
}

void *fn_802C5E8C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5) {
    M2C_UNK fn_80248A10(void *, u8 *, M2C_UNK);
    u8 *var_r4;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    var_r4 = arg5;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x13) = 0;
    if (var_r4 != NULL) {
        if ((s32) *var_r4 == 0x2E) {
            var_r4 += 1;
        }
        fn_80248A10(arg0 + 0x10, var_r4, 3);
        M2C_FIELD(arg0, s8 *, 0x13) = 0;
    }
    return arg0;
}

s32 fn_802C605C(s32 *self) {
    return *self;
}

s32 fn_802C6434(void *arg0, s32 arg1) {
    M2C_UNK fn_802C7B54();
    extern s32 lbl_80494DB8;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        if ((s32) lbl_80494DB8 == 0) {
            fn_802C7B54();
        }
        M2C_FIELD(arg0, s32 *, 0x10) = arg1;
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
        return 1;
    }
    return 0;
}

s32 fn_802C6494(void) {
    return 1;
}

s32 fn_802C649C(void) {
    return 0;
}

s32 fn_802C64B8(s32 *self) {
    return self[6];
}

s32 fn_802C64D4(s32 *self) {
    return self[7];
}

s32 fn_802C64F0(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802C64F8(void) {
    return 0;
}

s32 fn_802C6500(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_802C6508(u8 *self, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5) {
    s32 fn_802C5F04(void *, u8 *);
    void fn_803B9520(void *, void *);
    u8 entry[0x14];
    s32 i;

    fn_802C5E8C(entry, (s32)arg5, arg1, arg2, arg3, (u8 *)arg4);
    for (i = 0; i < ListCount(self + 4); i++) {
        if (fn_802C5F04(entry, *(u8 **)(self + 4) + i * 0x14) != 0) {
            return 1;
        }
    }
    fn_803B9520(self + 4, entry);
    return 1;
}

s32 fn_802C65B4(s32 arg0, s32 arg1, s32 *arg2) {
    s32 fn_80248640(s32, s32);
    s32 flags;

    flags = 0;
    if (fn_80248640(arg1, 'r') != 0) {
        flags = 1;
    }
    if (fn_80248640(arg1, 'w') != 0) {
        flags |= 0x10002;
    }
    if (fn_80248640(arg1, 'a') != 0) {
        flags |= 6;
    }
    if (fn_80248640(arg1, '+') != 0) {
        flags |= 3;
    }
    *arg2 = flags;
    return 1;
}

void fn_802C6650(s32 arg0, s32 arg1) {
    extern u8 lbl_804448E8[];
    void fn_802D7E20(void *);
    void fn_802D7E5C(void *, s32);

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_802D7E20(lbl_804448E8);
        } else {
            fn_802D7E5C(lbl_804448E8, 2);
        }
    }
}

void fn_802C66A4(void) {
    void fn_802C6650(s32, s32);
    fn_802C6650(1, 0xFFFF);
}

