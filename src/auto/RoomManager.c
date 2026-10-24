/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80494538;
void fn_8018EDE0(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

void fn_8018EE20(s32 arg0, s32 arg1) {
    M2C_UNK fn_8018D8DC(s32, s32, M2C_UNK);
    fn_8018D8DC(arg1, arg0, 1);
}

s32 fn_8018EE50(void) {
    return 1;
}

s32 fn_8018F7F8(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 4)) >> 2;
}

void fn_8018F874(void *arg0) {
    extern void *lbl_80494534;
    M2C_FIELD(arg0, void **, 4) = (void *) lbl_80494534;
    lbl_80494534 = arg0;
}

void fn_8018F914(void *arg0, s32 arg1) {
    void fn_8018F884(void *);
    void fn_802D20E8(void *);
    extern M2C_UNK lbl_804140F8;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &lbl_804140F8;
    fn_8018F884(arg0);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8018F960(s32 *arg0, s32 id) {
    extern void *lbl_80494534;
    s32 *it;
again:
    for (it = lbl_80494534; it != NULL; it = (s32 *)it[1]) {
        if (it != arg0 && it[0] == id) {
            id++;
            goto again;
        }
    }
    *arg0 = id;
}

s32 fn_8018FA7C(s32 *self) {
    return self[2];
}

void fn_8018FA84(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

s32 fn_8018FD00(s32 *self) {
    return *self;
}

s32 fn_8018FD18(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_8018FD20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

M2C_UNK *fn_8018FD28(void) {
    extern M2C_UNK lbl_80495CC0;
    return &lbl_80495CC0;
}

void fn_80191460(void) {

}

void *fn_80191B94(void *arg0) {
    M2C_UNK fn_801AD7B0(u16, void *);
    void *temp_r31;

    temp_r31 = arg0 + 0x24;
    if (((u32) ((M2C_FIELD(temp_r31, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0x24)) * 0xCCCCCCCD) >> 2U) == 0) {
        fn_801AD7B0(M2C_FIELD(arg0, u16 *, 0), temp_r31);
    }
    return temp_r31;
}

s32 fn_80191F6C(s32 arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r9;

    var_r9 = 0;
    if ((arg0 == 1) || (arg0 == 7) || (arg0 == 8) || (arg0 == 9)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        if ((arg0 == 3) || (arg0 == 5) || (arg0 == 6) || (arg0 == 0xF) || (arg0 == 0x17)) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if ((var_r0_2 != 0) || (arg0 == 0x16)) {
            goto block_16;
        }
    } else {
block_16:
        var_r9 = 1;
    }
    return var_r9;
}

s32 fn_80192788(void *arg0) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x48);
    return (s32) (temp_r3 + (temp_r3 >> 0x1FU)) >> 1;
}

void fn_8019279C(void *arg0, s32 arg1) {
    M2C_UNK fn_80191B04();
    M2C_UNK fn_803AA148(s32, s32);
    fn_80191B04();
    fn_803AA148(arg0 + 4, arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    M2C_FIELD(arg0, s32 *, 0x80) = 1;
}

s32 fn_801927E4(void *arg0, s32 arg1) {
    s32 fn_80105644(s32, s32);
    s32 var_r31;
    void *temp_r30;

    temp_r30 = arg0 + 4;
    var_r31 = M2C_FIELD(arg0, s32 *, 4);
    if (var_r31 != (s32) M2C_FIELD(temp_r30, s32 *, 4)) {
loop_1:
        if (fn_80105644(var_r31, arg1) != 0) {
            return 1;
        }
        var_r31 += 3;
        if (var_r31 == (s32) M2C_FIELD(temp_r30, s32 *, 4)) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return 0;
}

s32 fn_80192B04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

s32 fn_80192C7C(void) {
    return lbl_80494538;
}

u16 fn_80192C84(u16 arg0) {
    u16 *fn_80190AA4(s32, u16);
    extern s32 lbl_80496654;
    s32 temp_r31;
    u16 *temp_r3;
    u16 *temp_r3_2;

    temp_r31 = lbl_80496654;
    temp_r3_2 = fn_80190AA4(temp_r31, arg0);
    if (temp_r3_2 != NULL) {
        temp_r3 = fn_80190AA4(temp_r31, M2C_FIELD(temp_r3_2, u16 *, 2));
        if (temp_r3 != NULL) {
            return *temp_r3;
        }
    }
    return arg0;
}

void fn_80192D70(void) {
    M2C_UNK fn_80192CE4(M2C_UNK, M2C_UNK);
    fn_80192CE4(1, 0xFFFF);
}

