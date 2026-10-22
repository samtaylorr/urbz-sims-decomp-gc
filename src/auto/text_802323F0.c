/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_8022554C(void *);
extern void fn_802303F0(void *, void *);
void fn_802324C0(void *arg0) {
    fn_802303F0(fn_8022554C(arg0), arg0);
}

extern void fn_80230448(void *, void *);
void fn_802324F4(void *arg0) {
    fn_80230448(fn_8022554C(arg0), arg0);
}

void fn_802326E0(void) {

}

void fn_802326E4(void *arg0, s32 arg1) {
    M2C_UNK fn_80233468();
    M2C_UNK fn_80233538();
    M2C_UNK fn_80234E50(void *, M2C_UNK);
    s32 var_r9;
    s32 var_r9_2;

    switch (arg1) {                                 /* irregular */
    case 0:
        var_r9 = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
            var_r9 = 0;
        }
        if (var_r9 != 0) {
            fn_80233468();
            return;
        }
        return;
    case 4:
        var_r9_2 = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
            var_r9_2 = 0;
        }
        if (var_r9_2 != 0) {
            fn_80233538();
            return;
        }
        break;
    case 5:
        fn_80234E50(arg0 + 0x60, 1);
        return;
    case 6:
        fn_80234E50(arg0 + 0x60, 0);
        break;
    }
}

void fn_80232878(void *arg0, s32 arg1, f32 farg0) {
    switch (arg1) {                                 /* irregular */
    case 7:
        M2C_FIELD(arg0, f32 *, 0x34) = farg0;
        return;
    case 8:
        M2C_FIELD(arg0, f32 *, 0x38) = farg0;
        return;
    case 11:
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        return;
    case 12:
        M2C_FIELD(arg0, f32 *, 0x40) = farg0;
        return;
    }
}

void fn_80232930(s32 arg0, s32 arg1) {
    M2C_UNK fn_80230468(s32, s32);
    fn_80230468(arg1, arg0);
}

void fn_8023295C(s32 arg0, s32 arg1) {
    M2C_UNK fn_802304C4(s32, s32);
    fn_802304C4(arg1, arg0);
}

void fn_80232D2C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xA4) = arg1;
}

s32 fn_80232D34(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}

void fn_80232E38(s32 arg0, s32 arg1) {
    M2C_UNK fn_80232528();
    M2C_UNK fn_80232E74(s32, s32);
    fn_80232528();
    fn_80232E74(arg0, arg1);
}

s32 fn_80233460(s32 arg0) {
    return arg0 + 0x60;
}

s32 fn_802337C8(void **arg0, s32 arg1, s32 arg2) {
    void *fn_8022AF24(s32);
    M2C_UNK fn_8023368C(void **, void *, s32);
    M2C_UNK fn_8023397C(void **, s32, void *);
    s32 var_r3;
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;

    var_r3 = 0;
    if ((void *) *arg0 == NULL) {
        temp_r3 = fn_8022AF24(arg1);
        *arg0 = temp_r3;
        if (temp_r3 != NULL) {
            fn_8023368C(arg0, temp_r3, arg2);
            temp_r11 = *arg0;
            temp_r9 = M2C_FIELD(temp_r11, void **, 4);
            fn_8023397C(arg0, M2C_FIELD(temp_r9, s32 (**)(void *), 0x30C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x308)), *arg0);
        }
        var_r3 = 1;
        if ((void *) *arg0 == NULL) {
            var_r3 = 0;
        }
    }
    return var_r3;
}

s32 fn_802348F8(s32 *arg0, s32 arg1, s32 arg2) {
    s32 fn_8022BBF8(s32, s32, s32);
    M2C_UNK fn_80234820(s32 *);
    s32 var_r3;

    var_r3 = 0;
    if ((s32) *arg0 != 0) {
        fn_80234820(arg0);
        var_r3 = fn_8022BBF8(*arg0, arg1, arg2);
    }
    return var_r3;
}

void fn_8023570C(void **arg0, s32 arg1) {
    void fn_8022C228(void *, s32);
    u8 *obj;
    u8 *vt;

    obj = *arg0;
    if (obj != NULL) {
        vt = *(u8 **)(obj + 4);
        fn_8022C228((*(void *(**)(void *))(vt + 0x4D4))(obj + *(s16 *)(vt + 0x4D0)), arg1);
    }
}

s32 fn_80235760(s32 arg0) {
    return arg0 + 0xA8;
}

void *fn_80235768(void *arg0) {
    void fn_802323F0(void *);
    extern u8 lbl_80417758[];
    extern u8 lbl_80417E70[];
    fn_802323F0(arg0);
    M2C_FIELD(arg0, void **, 0x58) = lbl_80417E70;
    M2C_FIELD(arg0, void **, 0x1B8) = lbl_80417758;
    M2C_FIELD(arg0, s32 *, 0x1A8) = 1;
    return arg0;
}

void fn_802357B8(void *arg0) {
    void fn_80232460(void *);
    extern u8 lbl_80417770[];
    extern u8 lbl_80417E70[];
    M2C_FIELD(arg0, void **, 0x58) = lbl_80417E70;
    M2C_FIELD(arg0, void **, 0x1B8) = lbl_80417770;
    fn_80232460(arg0);
}

void fn_80235914(void *arg0, s32 arg1) {
    void fn_80089698(void *, s32);
    void fn_802D20E8(void *);
    extern u8 lbl_80417D08[];
    extern u8 lbl_80417FD8[];
    M2C_FIELD(arg0, void **, 0x58) = lbl_80417FD8;
    fn_80089698((u8 *)arg0 + 0x78, 2);
    M2C_FIELD(arg0, void **, 0x58) = lbl_80417D08;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

extern void fn_80230708(void *, void *);
void fn_80235974(void *arg0) {
    fn_80230708(fn_8022554C(arg0), arg0);
}

extern void fn_80230710(void *, void *);
void fn_802359A8(void *arg0) {
    fn_80230710(fn_8022554C(arg0), arg0);
}

void fn_80236EF4(s32 arg0, s32 arg1) {
    M2C_UNK fn_80230718(s32, s32);
    fn_80230718(arg1, arg0);
}

void fn_80236F20(s32 arg0, s32 arg1) {
    M2C_UNK fn_80230774(s32, s32);
    fn_80230774(arg1, arg0);
}

void fn_80236F4C(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 1;
        return;
    }
    if ((arg1 == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0xEC) != 1)) {
        M2C_FIELD(arg0, s32 *, 0x64) = arg1;
    }
}

s32 fn_80237978(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xEC);
}

void fn_802379B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
}

void fn_802379C4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
}

s32 fn_802379CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}

void fn_802379D4(void) {
    M2C_UNK fn_80237980(M2C_UNK, M2C_UNK);
    fn_80237980(1, 0xFFFF);
}

