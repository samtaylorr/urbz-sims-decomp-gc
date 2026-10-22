/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802DFD50(void *arg0) {
    M2C_UNK fn_80260574(s32);
    void *temp_r9;

    fn_80260574(arg0 + 0x2C);
    if (arg0 != NULL) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x28);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(arg0 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
}

s32 fn_802DFDA4(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_802DFE00(s32, s32, s32);
    s32 temp_r3;
    s32 var_r30;
    s32 var_r31;

    var_r30 = arg1;
    var_r31 = arg2;
    if (arg2 != 0) {
        do {
            temp_r3 = fn_802DFE00(arg0, var_r30, var_r31);
            var_r30 += temp_r3;
            var_r31 -= temp_r3;
        } while (var_r31 != 0);
    }
    return arg2;
}

s32 fn_802DFEEC(void) {
    return 0;
}

s32 fn_802DFEF4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r11;
    s32 var_r0;
    u32 temp_r9;

    temp_r11 = M2C_FIELD(arg0, s32 *, 0x68);
    if (arg2 == 1) {
        var_r0 = temp_r11 + arg1;
        goto block_5;
    }
    if (arg2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x68) = arg1;
    } else {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x60) - arg1;
block_5:
        M2C_FIELD(arg0, s32 *, 0x68) = var_r0;
    }
    temp_r9 = M2C_FIELD(arg0, u32 *, 0x70) + (M2C_FIELD(arg0, s32 *, 0x68) - temp_r11);
    M2C_FIELD(arg0, u32 *, 0x70) = temp_r9;
    if (temp_r9 > 0xFFFU) {
        M2C_FIELD(arg0, s32 *, 0x74) = 1;
    }
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 fn_802DFF50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 fn_802DFF58(void) {
    return 1;
}

s32 fn_802DFF60(void) {
    return 0;
}

s32 fn_802DFF68(s32 arg0) {
    return arg0 + 0x2C;
}

void **fn_802DFF70(void **self) {
    extern u8 lbl_80419848[];
    *self = lbl_80419848;
    return self;
}

extern u8 lbl_80419848[];
extern void fn_802D20E8(void *);
void fn_802DFF84(void **self, s32 flags) {
    *self = lbl_80419848;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void *fn_802DFFB8(char *self) {
    extern void **fn_802DFF70(void **);
    extern void fn_802D8B34(void *);
    extern void fn_802CA9A8(void *);
    extern void fn_803664B0(void *);
    extern u8 lbl_804197D8[];
    extern u8 lbl_804197F8[];
    extern void *lbl_804961A4;
    fn_802DFF70((void **)self);
    fn_802D8B34(self + 8);
    M2C_FIELD(self, void **, 0x340) = lbl_804197D8;
    M2C_FIELD(self, void **, 0) = lbl_804197F8;
    fn_802CA9A8(self + 0x34C);
    fn_803664B0(self + 0x368);
    M2C_FIELD(self, s32 *, 0x348) = 0;
    lbl_804961A4 = self;
    return self;
}

void fn_802E0024(char *self, s32 flags) {
    extern void fn_802CAA00(void *, s32);
    extern void fn_802D8BEC(void *, s32);
    extern void fn_80366554(void *, s32);
    extern u8 lbl_804197D8[];
    extern u8 lbl_804197F8[];
    M2C_FIELD(self, void **, 0x340) = lbl_804197D8;
    M2C_FIELD(self, void **, 0) = lbl_804197F8;
    fn_80366554(self + 0x368, 2);
    fn_802CAA00(self + 0x34C, 2);
    fn_802D8BEC(self + 8, 0);
    fn_802DFF84((void **)self, flags);
}

void fn_802E0098(char *self) {
    extern void fn_802D8F1C(void *);
    extern void fn_80366708(void *);
    extern void *lbl_804961A4;
    void *vt;

    vt = M2C_FIELD(self, void **, 0);
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x3C))(self + M2C_FIELD(vt, s16 *, 0x38));
    vt = M2C_FIELD(self, void **, 0);
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x24))(self + M2C_FIELD(vt, s16 *, 0x20));
    fn_802D8F1C(self + 8);
    fn_80366708(self + 0x368);
    M2C_FIELD(self, s32 *, 0x348) = 0;
    lbl_804961A4 = NULL;
}

void fn_802E010C(s32 arg0) {
    s32 *fn_802D1FC8(M2C_UNK);
    M2C_UNK fn_802E0208(s32, s32 *);
    s32 *temp_r3;

    temp_r3 = fn_802D1FC8(0xC);
    *temp_r3 = 2;
    fn_802E0208(arg0, temp_r3);
}

void fn_802E01B8(void) {

}

void fn_802D20E8(void *);
s32 *fn_802D1FC8(M2C_UNK);
void fn_802D81B8(void *);
void fn_802D8260(void *, s32);
void fn_802D82D4(void *, s32, s32);
void fn_802D8328(void *);
void fn_802D8334(void *, s32);
void fn_802D838C(s32);
void fn_802DFB30(void *);
s32 fn_80366820(void *, s32 **, s32);
void fn_802E0390(s32, s32);

void fn_802E0230(char *self) {
    struct {
        u8 pad[0x18];
    } evt;
    void *vt;
    s32 *msg;

    vt = M2C_FIELD(self, void **, 0);
    if (((s32 (*)(void *))M2C_FIELD(vt, void **, 0x2C))(self + M2C_FIELD(vt, s16 *, 0x28)) == 0) {
        fn_802D81B8(&evt);
        fn_802D82D4(&evt, 1, 0);
        msg = fn_802D1FC8(0xC);
        msg[0] = 1;
        msg[1] = (s32)&evt;
        fn_802E0208((s32)self, msg);
        fn_802D8334(&evt, -1);
        fn_802D8328(&evt);
        fn_802D8260(&evt, 2);
    }
}

void fn_802E02D8(char *self) {
    s32 *msg;

    for (;;) {
        if (fn_80366820(self + 0x368, &msg, 1) == 0) {
            continue;
        }
        switch (msg[0]) {
        case 2:
            fn_802D20E8(msg);
            return;
        case 1:
            fn_802D838C(msg[1]);
            fn_802D20E8(msg);
            break;
        case 3:
            if (msg[1] != 0) {
                ((void (*)(void))msg[1])();
            }
            fn_802D20E8(msg);
            break;
        }
        fn_802DFB30(self + 8);
    }
}

void fn_802E0390(s32 arg0, s32 arg1) {
    extern u8 lbl_80451FA0[];
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_802DFFB8((char *)lbl_80451FA0);
        } else {
            fn_802E0024((char *)lbl_80451FA0, 2);
        }
    }
}

void fn_802D8F90();
void fn_802E03E4(char *self) {
    extern void fn_802D8F90(void *);
    fn_802D8F90(self + 8);
}

void fn_802E0408(void) {
    fn_802E0390(1, 0xFFFF);
}

void fn_802E0434(void) {
    fn_802E0390(0, 0xFFFF);
}

