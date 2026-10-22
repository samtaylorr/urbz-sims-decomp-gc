/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct AptVec2 {
    f32 x;
    f32 y;
} AptVec2;

static inline void AptVec2_Set(AptVec2 *v, f32 x, f32 y) {
    v->x = x;
    v->y = y;
}

static inline void AptBase_Init(void *self) {
    extern f32 lbl_803C17F8[];
    extern f32 lbl_803C17FC[];
    extern s32 lbl_80406C38[];
    AptVec2 v;

    M2C_FIELD(self, void **, 0x2C) = lbl_80406C38;
    M2C_FIELD(self, s32 *, 0x18) = 0;
    AptVec2_Set(&v, lbl_803C17F8[0], lbl_803C17F8[0]);
    M2C_FIELD(self, AptVec2 *, 0x1C) = v;
    AptVec2_Set(&v, lbl_803C17FC[0], lbl_803C17FC[0]);
    M2C_FIELD(self, AptVec2 *, 0x24) = v;
    M2C_FIELD(self, s32 *, 0) = 0;
    M2C_FIELD(self, s32 *, 8) = 0;
    M2C_FIELD(self, s32 *, 0xC) = 0;
    M2C_FIELD(self, s32 *, 0x10) = 0;
    M2C_FIELD(self, s32 *, 0x14) = 0;
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
    extern f32 lbl_803C17F8[];
    extern f32 lbl_803C17FC[];
    extern s32 lbl_80406C38[];
    AptVec2 v;

    M2C_FIELD(arg0, void **, 0x2C) = lbl_80406C38;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    AptVec2_Set(&v, lbl_803C17F8[0], lbl_803C17F8[0]);
    M2C_FIELD(arg0, AptVec2 *, 0x1C) = v;
    AptVec2_Set(&v, lbl_803C17FC[0], lbl_803C17FC[0]);
    M2C_FIELD(arg0, AptVec2 *, 0x24) = v;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
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
    extern s32 lbl_80406C38[];
    AptVec2 v;

    M2C_FIELD(arg0, void **, 0x2C) = lbl_80406C38;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    AptVec2_Set(&v, lbl_803C1800[0], lbl_803C1800[0]);
    M2C_FIELD(arg0, AptVec2 *, 0x1C) = v;
    M2C_FIELD(arg0, void **, 0x2C) = lbl_80406C08;
    AptVec2_Set(&v, lbl_803C1804[0], lbl_803C1804[0]);
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

