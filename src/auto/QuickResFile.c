/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8018D8DC(void);
extern u8 lbl_80413E80[];
extern void fn_802D20E8(void *);
void fn_80186218(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void fn_80186668(s32 arg0, void *arg1, s32 arg2) {
    M2C_UNK fn_8005A838(s32, void *, s32);
    M2C_UNK fn_8010BADC();
    M2C_UNK fn_8010D358(s32, void *, s32);
    M2C_UNK fn_8018D72C(void *, s32, M2C_UNK);
    M2C_UNK fn_801C58CC(s32, void *, s32);
    M2C_UNK fn_80248488(s32, M2C_UNK, M2C_UNK);
    fn_8010BADC();
    if (arg2 > 9) {
        fn_8005A838(arg0 + 0x38, arg1, arg2);
        fn_8010D358(arg0 + 0x1904, arg1, arg2);
    }
    if (arg2 > 0xA) {
        fn_801C58CC(arg0 + 0xC8, arg1, arg2);
    }
    if (arg2 > 0xB) {
        fn_8018D72C(arg1, arg0 + 0x18D0, 0x19);
        return;
    }
    if ((s32) M2C_FIELD(arg1, s32 *, 0xC) == 0) {
        fn_80248488(arg0 + 0x18D0, 0, 0x32);
    }
}

s32 fn_80186778(s32 arg0) {
    return arg0 + 0xC8;
}

s32 fn_80186780(s32 arg0) {
    return arg0 + 0x38;
}

s32 fn_80186788(s32 arg0) {
    return arg0 + 0x1904;
}

s32 fn_80186884(void *arg0) {
    s32 *fn_8010B96C(void *, M2C_UNK);
    void *temp_r31;

    if (((s32) M2C_FIELD(arg0, s32 *, 4) == 0) || (temp_r31 = arg0 + 0xC, ((fn_8010B96C(temp_r31, 0) == NULL) != 0))) {
        return -1;
    }
    return *fn_8010B96C(temp_r31, 0);
}

void fn_8018A070(s32 *arg0) {
    M2C_UNK fn_8011AA6C(s32);
    fn_8011AA6C(*arg0);
}

s32 fn_8018A844(void) {
    return 0x444F4F52;
}

void fn_8018C4E8(s32 *arg0, s32 arg1) {
    M2C_UNK fn_8011BF84(s32);
    M2C_UNK fn_8018A0E0(s32 *, M2C_UNK);
    fn_8011BF84(*arg0);
    if (arg1 <= 0x33) {
        fn_8018A0E0(arg0, 1);
    }
}

void fn_8018C9D4(void ****arg0, s32 arg1) {
    M2C_FIELD(***arg0, s32 *, 0x10) = arg1;
}

void fn_8018CAB0(void) {

}

void fn_8018CAB4(void) {
    M2C_UNK fn_8018CB1C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(8);
    fn_8018CB1C();
}

void fn_8018CADC(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

void **fn_8018CB1C(void **arg0) {
    extern char lbl_80413E40[];
    arg0[0] = lbl_80413E40;
    arg0[1] = 0;
    return arg0;
}

void fn_8018CB38(void **self, s32 flags) {
    *self = lbl_80413E80;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s16 fn_8018CC28(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 4);
}

s16 fn_8018CC34(void *arg0) {
    s32 var_r3;
    void *temp_r9;

    var_r3 = 0;
    temp_r9 = *M2C_FIELD(arg0, void ***, 4);
    if (temp_r9 != NULL) {
        var_r3 = M2C_FIELD(temp_r9, s32 *, -4);
    }
    return (s16) var_r3;
}

s32 fn_8018CC54(void) {
    return 0;
}

s32 fn_8018CCFC(void) {
    return -0x5F;
}

s32 fn_8018CD04(void) {
    return -0x5F;
}

s32 fn_8018CD4C(void) {
    return 0;
}

s32 fn_8018CD54(void) {
    return 0;
}

s32 fn_8018CD5C(void) {
    return 0;
}

void fn_8018CD64(void) {

}

s32 fn_8018CD68(void) {
    return 0;
}

s32 fn_8018CE18(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) != 0;
}

s32 fn_8018CE30(void) {
    return 0;
}

s32 fn_8018CE38(void) {
    return 0;
}

s32 fn_8018CE40(void) {
    return 0;
}

s32 fn_8018CE48(void) {
    return 0;
}

s32 fn_8018CE50(void) {
    return 0;
}

s32 fn_8018CE58(void) {
    return 0;
}

s32 fn_8018CE60(void) {
    return 0;
}

s32 fn_8018CE8C(void) {
    return 0;
}

void fn_8018CE94(void *arg0, void *arg1, s16 *arg2) {
    *arg2 = 0;
}

s32 fn_8018CEAC(void) {
    return 0;
}

s32 fn_8018CED8(void) {
    return 0;
}

void fn_8018CEE0(void) {

}

void fn_8018CEE4(void) {

}

s32 fn_8018CEE8(void) {
    return 0;
}

void fn_8018CEF0(void) {

}

void fn_8018CEF4(void) {

}

void fn_8018CEF8(void) {

}

void fn_8018CEFC(void) {

}

void fn_8018CF00(void) {

}

void fn_8018CF04(void) {

}

s32 fn_8018CFC4(s32 arg0, s32 arg1) {
    s32 var_r0;

    if (arg1 != 0x11) {
        var_r0 = 0;
        if (arg1 == 0x10) {
            var_r0 = arg0;
        }
        return var_r0;
    }
    return arg0;
}

void fn_8018D1E8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
}

void fn_8018D56C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

void fn_8018D8BC(void) {
    fn_8018D8DC();
}

extern u8 lbl_80413FF0[];
void fn_8018EA6C(void **self, s32 flags) {
    *self = lbl_80413FF0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8018EAA0(void) {

}

s32 fn_8018EAA4(void) {
    return 0x52636F6E;
}

void fn_8018ED6C(void) {
    M2C_UNK fn_8018EAB0(M2C_UNK, M2C_UNK);
    fn_8018EAB0(1, 0xFFFF);
}

