/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8018D8DC(void);
extern u8 lbl_80413E80[];
extern void fn_802D20E8(void *);

void fn_801861B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

void fn_801861D4(void *self, s32 flags) {
    void fn_80186224(void *, s32);
    fn_80186224(self, 0);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

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

void fn_8018CD70(void *arg0, s32 arg1) {
    M2C_UNK fn_800F68E0(s32);
    M2C_UNK fn_800F69F8(s32, s32);
    void *fn_8032D8E0(void *, s32, s32 *);
    extern void *lbl_8049665C;
    s32 sp8;
    s32 var_r4;
    void *temp_r9;
    void *var_r3;

    fn_800F68E0(arg1);
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        temp_r9 = *(void **)lbl_8049665C;
        var_r3 = ((void *(*)(void *))M2C_FIELD(temp_r9, void **, 0x1AC))((char *)lbl_8049665C + M2C_FIELD(temp_r9, s16 *, 0x1A8));
        if (var_r3 != NULL) {
            var_r3 = fn_8032D8E0(var_r3, M2C_FIELD(arg0, s32 *, 0xC), &sp8);
            if (var_r3 != NULL && (var_r3 = M2C_FIELD(var_r3, void **, 8)) != NULL) {
                var_r4 = *(s32 *)((sp8 * 4) + (s32)var_r3);
            } else {
                var_r4 = 0;
            }
            if (var_r4 != 0) {
                fn_800F69F8(arg1, var_r4);
            }
        }
    }
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

void fn_8018CE68(void *arg0, void *arg1, s32 arg2) {
    M2C_UNK fn_800F68E0(s32);
    fn_800F68E0(arg2);
}

s32 fn_8018CE8C(void) {
    return 0;
}

void fn_8018CE94(void *arg0, void *arg1, s16 *arg2) {
    *arg2 = 0;
}

void fn_8018CEA0(void *arg0, void *arg1, s16 *arg2) {
    *arg2 = 0;
}

s32 fn_8018CEAC(void) {
    return 0;
}

void fn_8018CEB4(void *arg0, void *arg1, s32 arg2) {
    M2C_UNK fn_800F68E0(s32);
    fn_800F68E0(arg2);
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

void fn_8018CF08(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_800F68E0(s32);
    M2C_UNK fn_800F68F0(s32, s32, s32);
    s32 **fn_8039FDA4(void *, void *, s32);
    void *temp_r3;
    char *temp_r3_2;
    s32 **temp_r3_3;
    s32 *temp_r3_4;
    s32 var_r4;
    s32 var_r0;

    fn_800F68E0(arg1);
    temp_r3 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, char **, 0x10);
        var_r4 = 0;
        if (temp_r3_2 != NULL) {
            var_r4 = M2C_FIELD(temp_r3_2, s32 *, -4);
        }
        temp_r3_3 = fn_8039FDA4(temp_r3_2, temp_r3_2 + var_r4 * 0xC, arg2);
        if (temp_r3_3 != NULL && arg3 > 0) {
            temp_r3_4 = *temp_r3_3;
            var_r0 = 0;
            if (temp_r3_4 != NULL) {
                var_r0 = temp_r3_4[-1];
            }
            if (arg3 <= var_r0) {
                s32 *p = temp_r3_4 + (arg3 - 1);
                if (*p != 0) {
                    fn_800F68F0(arg1, *p, -1);
                }
            }
        }
    }
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

void fn_8018EA34(void *arg0, u8 *p) {
    u8 t = p[1];
    p[1] = p[0];
    p[0] = t;
}

void fn_8018EA48(void *arg0, u8 *p) {
    u8 t;
    t = p[3];
    p[3] = p[0];
    p[0] = t;
    t = p[2];
    p[2] = p[1];
    p[1] = t;
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

