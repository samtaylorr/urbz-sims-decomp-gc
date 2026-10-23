/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8040D690[];
extern void fn_802D20E8(void *);
void fn_801020E0(void **self, s32 flags) {
    *self = lbl_8040D690;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_801021BC(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

s32 fn_801023F4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0xC);
}

s32 fn_80102400(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4) + (arg1 * 0x14);
}

s32 fn_80102414(void *arg0, s32 arg1) {
    return (s32) ((arg1 - M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4)) * 0xCCCCCCCD) >> 2;
}

void **fn_801028B0(void **self) {
    *self = lbl_8040D690;
    return self;
}

extern u8 lbl_8040D608[];
void **fn_801028C4(void **self) {
    *self = lbl_8040D608;
    return self;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_801029D8(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80102A50(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

void fn_801040E0(char *self, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    char *vt = *(char **)(self + 0x10);
    (*(void (**)(void *, s32, s32, s32, s32, s32, s32))(vt + 0x104))(self + *(s16 *)(vt + 0x100), a1, a2, a3, a4, 0, a5);
}

s32 fn_80104A5C(s32 arg0, s32 arg1) {
    s32 var_r0;

    if (arg1 != 0xF) {
        var_r0 = 0;
        if (arg1 == 0x10) {
            var_r0 = arg0;
        }
        return var_r0;
    }
    return arg0;
}

s32 fn_801051C0(void) {
    return 0;
}

s32 fn_801051C8(s32 arg0, s32 arg1) {
    extern void *lbl_804943FC;
    extern void *lbl_80496660;
    s32 var_r28;
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;
    void *var_r11;

    var_r11 = lbl_804943FC;
    var_r28 = 0;
    if (var_r11 != NULL) {
        do {
            temp_r9 = M2C_FIELD(var_r11, void **, 0xC);
            temp_r31 = M2C_FIELD(var_r11, void **, 0);
            if (M2C_FIELD(temp_r9, s32 (**)(void *, s32, s32), 0x14)(var_r11 + M2C_FIELD(temp_r9, s16 *, 0x10), arg0, arg1) != 0) {
                var_r28 = 1;
            }
            var_r11 = temp_r31;
        } while (var_r11 != NULL);
    }
    if (arg0 == 0xD9) {
        temp_r9_2 = M2C_FIELD(lbl_80496660, void **, 0x3A4);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK), 0x1C)(lbl_80496660 + M2C_FIELD(temp_r9_2, s16 *, 0x18), 0, 0x27);
    }
    return var_r28;
}

s32 fn_80105314(s32 *self) {
    return self[1];
}

s32 fn_8010531C(s32 *self) {
    return *self;
}

f32 fn_80105498(u8 *arg0) {
    return (f32) (f64) (s8) *arg0;
}

f32 fn_801054D0(void *arg0) {
    return (f32) (f64) (s8) M2C_FIELD(arg0, u8 *, 1);
}

void fn_80105508(void *arg0) {
    M2C_FIELD(arg0, s8 *, 2) = 0;
}

s8 *fn_80105514(s8 *self, s8 *other) {
    self[0] = other[0];
    self[1] = other[1];
    self[2] = other[2];
    return self;
}

s8 *fn_80105534(s8 *self, s32 *src, s8 arg2) {
    self[0] = src[1] >> 4;
    self[1] = src[0] >> 4;
    self[2] = arg2;
    return self;
}

s8 *fn_80105558(s8 *self, u8 *src, s8 arg2) {
    self[0] = src[3];
    self[1] = src[7];
    self[2] = arg2;
    return self;
}

void fn_80105574(s8 *self, s32 a, s32 b, s8 c) {
    self[0] = a;
    self[1] = b;
    if (self[0] != a) {
        self[0] = 0;
    }
    if (self[1] != b) {
        self[1] = 0;
    }
    self[2] = c;
}

void fn_801055FC(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s8 *fn_80105624(s8 *self, s8 *other) {
    self[0] = other[0];
    self[1] = other[1];
    self[2] = other[2];
    return self;
}

s32 fn_80105674(void *arg0, void *arg1) {
    s32 var_r11;

    var_r11 = 0;
    if (((s32) M2C_FIELD(arg1, u8 *, 0) != (s32) M2C_FIELD(arg0, u8 *, 0)) || ((s32) M2C_FIELD(arg1, u8 *, 1) != (s32) M2C_FIELD(arg0, u8 *, 1))) {
        var_r11 = 1;
    }
    return var_r11;
}

s32 fn_801056A4(void *arg0, void *arg1) {
    s32 var_r11;
    u8 temp_r0;
    u8 temp_r9;

    temp_r9 = M2C_FIELD(arg0, u8 *, 0);
    var_r11 = 0;
    temp_r0 = M2C_FIELD(arg1, u8 *, 0);
    if (((s8) temp_r9 < (s8) temp_r0) || (((s8) temp_r9 == (s8) temp_r0) && ((s8) M2C_FIELD(arg0, u8 *, 1) < (s8) M2C_FIELD(arg1, u8 *, 1)))) {
        var_r11 = 1;
    }
    return var_r11;
}

s32 fn_801058BC(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0) + (s8) M2C_FIELD(arg0, u8 *, 1);
}

s32 fn_801058D4(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0) - (s8) M2C_FIELD(arg0, u8 *, 1);
}

s8 fn_80105B78(u8 *arg0) {
    return (s8) *arg0;
}

s8 fn_80105B84(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 1);
}

void fn_80105B90(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = (s32) (s8) M2C_FIELD(arg0, u8 *, 0);
    *arg2 = (s32) (s8) M2C_FIELD(arg0, u8 *, 1);
}

void fn_80105BAC(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg1 = (s32) (s8) M2C_FIELD(arg0, u8 *, 0);
    *arg2 = (s32) (s8) M2C_FIELD(arg0, u8 *, 1);
    *arg3 = (s32) (s8) M2C_FIELD(arg0, u8 *, 2);
}

void fn_80105BEC(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = arg2;
}

s8 fn_80105C08(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 2);
}

void fn_80105C14(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 2) = arg1;
}

void fn_80105C1C(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 2);
}

void fn_80105C28(void) {

}

void fn_80105FB0(void) {
    M2C_UNK fn_80105E78(M2C_UNK, M2C_UNK);
    fn_80105E78(1, 0xFFFF);
}

