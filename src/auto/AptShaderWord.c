/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct AptVec2 {
    f32 x;
    f32 y;
} AptVec2;

static inline AptVec2 AptVec2_Make(f32 x, f32 y) {
    AptVec2 v;

    v.x = x;
    v.y = y;
    return v;
}

void fn_80007EAC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 1);
}

void fn_80007EBC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
}

void fn_800086CC(M2C_UNK **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK fn_80008658(M2C_UNK *, s32, s32, s32, s32);
    M2C_UNK *temp_r30;
    M2C_UNK *temp_r3;
    M2C_UNK *var_r30;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r30 = temp_r3;
        do {
            temp_r30 = *var_r30;
            fn_80008658(var_r30, arg1, arg2, arg3, arg4);
            var_r30 = temp_r30;
        } while (var_r30 != NULL);
    }
}

f32 fn_8000A334(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x2C);
}

void fn_8000A468(s32 arg0, s32 arg1) {

}

void fn_8000A46C(void *arg0) {
    AptBase_Init(arg0);
}

void fn_8000A4E8(void *arg0, s32 arg1) {
    extern s32 lbl_80406C38[];
    void fn_802D20E8(void *);
    char *vt;
    void **obj;

    M2C_FIELD(arg0, void **, 0x2C) = lbl_80406C38;
    if (M2C_FIELD(arg0, void **, 8) != NULL) {
        fn_802D20E8(M2C_FIELD(arg0, void **, 8));
    }
    obj = M2C_FIELD(arg0, void ***, 0xC);
    if (obj != NULL) {
        vt = M2C_FIELD(obj, char **, 0x8C);
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 8), 3);
        obj = M2C_FIELD(arg0, void ***, 0x10);
        if (obj != NULL) {
            vt = M2C_FIELD(obj, char **, 0x8C);
            (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 8), 3);
            M2C_FIELD(arg0, void ***, 0x10) = NULL;
        }
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8000A598(void *arg0) {
    extern f32 lbl_803C1800[];
    extern f32 lbl_803C1804[];
    extern s32 lbl_80406C08[];
    AptVec2 v;

    AptBase_Init(arg0);
    M2C_FIELD(arg0, void **, 0x2C) = lbl_80406C08;
    v.x = lbl_803C1800[0];
    v.y = lbl_803C1800[0];
    M2C_FIELD(arg0, AptVec2 *, 0x1C) = v;
    v.x = lbl_803C1804[0];
    v.y = lbl_803C1804[0];
    M2C_FIELD(arg0, AptVec2 *, 0x24) = v;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_803C1804[0];
}

void fn_8000A620(void *arg0, s32 arg1) {
    extern s32 lbl_80406C38[];
    void fn_802D20E8(void *);
    char *vt;
    void **obj;

    M2C_FIELD(arg0, void **, 0x2C) = lbl_80406C38;
    if (M2C_FIELD(arg0, void **, 8) != NULL) {
        fn_802D20E8(M2C_FIELD(arg0, void **, 8));
    }
    obj = M2C_FIELD(arg0, void ***, 0xC);
    if (obj != NULL) {
        vt = M2C_FIELD(obj, char **, 0x8C);
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 8), 3);
        obj = M2C_FIELD(arg0, void ***, 0x10);
        if (obj != NULL) {
            vt = M2C_FIELD(obj, char **, 0x8C);
            (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 8), 3);
            M2C_FIELD(arg0, void ***, 0x10) = NULL;
        }
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8000A6D0(void) {
    fn_8000A468(1, 0xFFFF);
}

