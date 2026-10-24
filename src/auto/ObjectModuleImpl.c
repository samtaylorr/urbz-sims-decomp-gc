/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_804944B0;
void fn_800F68E0(void *);
void fn_80149998(void *self, void *arg) {
    fn_800F68E0(arg);
}

void fn_80149AF4(void) {
    M2C_UNK fn_8014A1E4();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x6F0);
    fn_8014A1E4();
}

void fn_80149B1C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

s32 fn_80149BDC(void) {
    return lbl_804944B0;
}

s16 fn_80149BE4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 4);
}

void fn_8014C314(void *arg0, void **arg1) {
    s32 fn_800F5748(s32, void *);
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r31 = *arg1;
    if ((temp_r31 != NULL) && (fn_800F5748(M2C_FIELD(arg0, s32 *, 0x4C), temp_r31) != 0)) {
        temp_r9 = M2C_FIELD(temp_r31, void **, 0x10);
        if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x64)(temp_r31 + M2C_FIELD(temp_r9, s16 *, 0x60)) != 0) {
            temp_r9_2 = M2C_FIELD(temp_r31, void **, 0x10);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x44)(temp_r31 + M2C_FIELD(temp_r9_2, s16 *, 0x40));
        }
        temp_r9_3 = M2C_FIELD(temp_r31, void **, 0x10);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r31 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
    }
    *arg1 = NULL;
}

void fn_8014C3F4(void) {

}

void fn_8014DE2C(void *arg0, void *arg1) {
    M2C_UNK fn_8014F258(void *, void *);
    s32 fn_8014FDB4(void *, void *);
    s32 fn_8016CB30(void *);
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg1, s32 *, 0x68) - 1;
    M2C_FIELD(arg1, s32 *, 0x68) = temp_r9;
    if ((temp_r9 == 0) && (fn_8016CB30(arg1) == 0)) {
        fn_8014F258(arg0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x6D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x6D8) - fn_8014FDB4(arg0, arg1));
}

void fn_8014DEA0(void *arg0, void *arg1) {
    s32 temp_r0;
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg1, void **, 0xC);
    if (temp_r11 != NULL) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x6D4) + M2C_FIELD(temp_r11, s32 *, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x6D4) = temp_r0;
        M2C_FIELD(arg0, s32 *, 0x6D4) = (s32) (temp_r0 + M2C_FIELD(temp_r11, s32 *, 0x40));
    }
}

void fn_8014DECC(void *arg0, void *arg1) {
    s32 temp_r0;
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg1, void **, 0xC);
    if (temp_r11 != NULL) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x6D4) - M2C_FIELD(temp_r11, s32 *, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x6D4) = temp_r0;
        M2C_FIELD(arg0, s32 *, 0x6D4) = (s32) (temp_r0 - M2C_FIELD(temp_r11, s32 *, 0x40));
    }
}

s32 *fn_8014F3DC(void *self, s32 id) {
    s32 **it;
    for (it = M2C_FIELD(self, s32 ***, 0x670); it != M2C_FIELD(self, s32 ***, 0x674); it++) {
        if (**it == id) {
            return *it;
        }
    }
    return NULL;
}

void fn_8014F414(void *arg0, s32 arg1) {
    void fn_803A5154(void *, s32, s32, s32, s32);
    fn_803A5154(arg0, arg1, 0x54415454, 1, 0);
}

void fn_8014F444(void *arg0, s32 arg1) {
    void fn_803A51C0(void *, s32, s32, s32, s32);
    fn_803A51C0(arg0, arg1, 0x54415454, 1, 0);
}

s32 fn_8014F698(void *arg0, s32 arg1) {
    void *vt;

    if (arg1 == 0) {
        return 0;
    }
    vt = *(void **)arg0;
    return M2C_FIELD(vt, s32 (**)(void *, s32), 0x1BC)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x1B8), arg1);
}

s32 fn_8014F6E0(void *arg0, s32 arg1) {
    s32 fn_8032D5C8(s32, void *);
    s32 *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803D8FFC[];
    s32 *p;

    if (arg1 == 0) {
        return 0;
    } else {
        u8 *name = lbl_803D8FFC;
        s32 key;

        key = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x6A0), name);
        p = fn_8032D6E8(M2C_FIELD(arg0, s32 *, 0x6A0), key, arg1);
        if (p != NULL) {
            return *p;
        }
        return 0;
    }
}

s32 fn_8014F744(void *arg0) {
    void *vt;
    void *p;

    vt = *(void **)arg0;
    p = M2C_FIELD(vt, void *(**)(void *), 0x1B4)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x1B0));
    if (p != NULL) {
        return M2C_FIELD(p, s32 *, 4);
    }
    return 0;
}

void *fn_8014F78C(void *arg0, s32 arg1) {
    s32 fn_8032D5C8(s32, void *);
    s32 *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803D9014[];
    u8 *name = lbl_803D9014;
    s32 key;
    s32 *p;

    key = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x6A0), name);
    p = fn_8032D6E8(M2C_FIELD(arg0, s32 *, 0x6A0), key, arg1);
    if (p != NULL) {
        return p;
    }
    return NULL;
}

void *fn_8014F7E4(void *arg0, s32 arg1) {
    s32 fn_8032D5C8(s32, void *);
    s32 *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803D9028[];
    u8 *name = lbl_803D9028;
    s32 key;
    s32 *p;

    key = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x6A0), name);
    p = fn_8032D6E8(M2C_FIELD(arg0, s32 *, 0x6A0), key, arg1);
    if (p != NULL) {
        return p;
    }
    return NULL;
}

void *fn_8014F83C(void *arg0, s32 arg1) {
    s32 fn_8032D5C8(s32, void *);
    s32 *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803D9040[];
    u8 *name = lbl_803D9040;
    s32 key;
    s32 *p;

    key = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x6A0), name);
    p = fn_8032D6E8(M2C_FIELD(arg0, s32 *, 0x6A0), key, arg1);
    if (p != NULL) {
        return p;
    }
    return NULL;
}

void fn_8014FDD0(void) {

}

void fn_8014FDD4(void) {

}

s32 fn_8014FDD8(void) {
    return 1;
}

s32 fn_801506AC(void) {
    return 0;
}

s32 fn_801506B4(void) {
    return 0;
}

void fn_80150FFC(s32 arg0) {
    M2C_UNK fn_800F69E8(s32);
    fn_800F69E8(arg0 + 0x560);
}

s32 fn_80151020(s32 arg0) {
    return arg0 + 4;
}

s32 fn_80151028(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6A0);
}

s32 fn_80151030(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6D4);
}

s32 fn_80151038(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6D0);
}

s32 fn_80151040(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6D8);
}

void fn_8015121C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

void fn_80151734(void) {

}

void fn_80152310(void) {

}

void fn_80154BB4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2048) = (s32) M2C_FIELD(arg0, s32 *, 0x2044);
}

s32 fn_80156444(void) {
    return 0;
}

void fn_8015644C(void) {

}

void fn_80156450(void) {

}

void fn_801566DC(void) {

}

void fn_801566E0(void) {

}

void fn_801566E4(void) {

}

void fn_801566E8(void) {

}

extern s32 lbl_8049665C;
s32 fn_801579E0(void) {
    return lbl_8049665C;
}

extern s32 lbl_80496648;
s32 fn_80157A38(void) {
    return lbl_80496648;
}

s32 fn_80157A60(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x205C) - M2C_FIELD(arg0, s32 *, 0x2058)) >> 2;
}

s32 fn_80157A84(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x206C) - M2C_FIELD(arg0, s32 *, 0x2068)) >> 2;
}

s32 fn_80157A98(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x2078) + (arg1 * 0x3C);
}

s32 fn_80157AA8(void *arg0) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x207C) - M2C_FIELD(arg0, s32 *, 0x2078)) * 0xEEEEEEEF) >> 2;
}

s32 fn_80157AC8(void *arg0) {
    s32 var_r11;

    var_r11 = 1;
    if (((u32) (M2C_FIELD(arg0, s32 *, 0x2038) - M2C_FIELD(arg0, s32 *, 0x2034)) >> 2U) == 0) {
        var_r11 = 0;
    }
    return var_r11;
}

extern s32 lbl_80495BE0;
extern void fn_800F1A60(s32, s32);
void fn_80157AEC(void) {
    fn_800F1A60((s32)&lbl_80495BE0, 2);
}

void fn_80157F24(void) {

}

void fn_80157FDC(s32 *arg0) {
    M2C_UNK fn_801A1E50(s32);
    fn_801A1E50(*arg0);
}

extern s32 lbl_80495BE8;
void fn_8015A3FC(void) {
    fn_800F1A60((s32)&lbl_80495BE8, 2);
}

extern s32 lbl_80495BF0;
void fn_8015A424(void) {
    fn_800F1A60((s32)&lbl_80495BF0, 2);
}

extern s32 lbl_80495BF8;
void fn_8015A44C(void) {
    fn_800F1A60((s32)&lbl_80495BF8, 2);
}

extern s32 lbl_80495C00;
void fn_8015A474(void) {
    fn_800F1A60((s32)&lbl_80495C00, 2);
}

extern s32 lbl_80495C08;
void fn_8015A49C(void) {
    fn_800F1A60((s32)&lbl_80495C08, 2);
}

extern s32 lbl_80495C10;
void fn_8015A4C4(void) {
    fn_800F1A60((s32)&lbl_80495C10, 2);
}

extern s32 lbl_80495C18;
void fn_8015A4EC(void) {
    fn_800F1A60((s32)&lbl_80495C18, 2);
}

extern s32 lbl_80495C20;
void fn_8015A514(void) {
    fn_800F1A60((s32)&lbl_80495C20, 2);
}

extern s32 lbl_80495C28;
void fn_8015A53C(void) {
    fn_800F1A60((s32)&lbl_80495C28, 2);
}

extern s32 lbl_80495C30;
void fn_8015A564(void) {
    fn_800F1A60((s32)&lbl_80495C30, 2);
}

void fn_80166A1C(void) {
    extern void **lbl_80495C3C;
    void **obj = lbl_80495C3C;
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *))(vt + 0x1C))((char *)obj + *(s16 *)(vt + 0x18));
    }
}

s64 fn_80168EC0(void) {
    return 0;
}

void fn_801690B0(void) {

}

extern u8 lbl_803D9C80[];
void *fn_8016A870(void) {
    return lbl_803D9C80;
}

void fn_8016BFB4(void) {
    M2C_UNK fn_8016BE04(M2C_UNK, M2C_UNK);
    fn_8016BE04(1, 0xFFFF);
}

void fn_8016BFE0(void) {
    M2C_UNK fn_8016BE04(M2C_UNK, M2C_UNK);
    fn_8016BE04(0, 0xFFFF);
}

