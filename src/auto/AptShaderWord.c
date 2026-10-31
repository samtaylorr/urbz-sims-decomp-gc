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

void fn_80007C90(void *arg0, f32 arg1) {
    extern f32 lbl_803C1650[];
    extern s32 lbl_80494378;
    void fn_80320680(s32, s32, f32, f32);
    void fn_803227C4(AptVec2 *, s32, s32, s32, s32, s32);
    void *obj;
    AptVec2 v;

    obj = M2C_FIELD(arg0, void **, 0xC);
    if (obj != NULL && (M2C_FIELD(obj, s32 *, 0) != 0 || M2C_FIELD(obj, s32 *, 0xC) != 0)) {
        fn_80320680(lbl_80494378, 1, M2C_FIELD(obj, f32 *, 0x24), lbl_803C1650[0]);
        fn_803227C4(&v, lbl_80494378, M2C_FIELD(arg0, s32 *, 8), 1, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x28) = ((s32 *)&v)[1];
        M2C_FIELD(arg0, s32 *, 0x24) = ((s32 *)&v)[0];
        fn_80320680(lbl_80494378, 1, arg1, lbl_803C1650[0]);
    }
}

void fn_80007EAC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 1);
}

void fn_80007EBC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
}

void fn_80007ECC(void *arg0, void *arg1) {
    void *fn_802D1FC8(s32);
    void *fn_80005214(void *, void *);
    void fn_8000718C(void *, void *);

    if (M2C_FIELD(arg0, void **, 0xC) == NULL) {
        M2C_FIELD(arg0, void **, 0xC) = fn_80005214(fn_802D1FC8(0x90), arg0);
        M2C_FIELD(arg0, void **, 0x10) = fn_80005214(fn_802D1FC8(0x90), arg0);
    }
    if (arg1 != NULL) {
        if (M2C_FIELD(arg1, void **, 0xC) != NULL) {
            fn_8000718C(M2C_FIELD(arg0, void **, 0xC), M2C_FIELD(arg1, void **, 0xC));
        }
        if (M2C_FIELD(arg1, void **, 0x10) != NULL) {
            fn_8000718C(M2C_FIELD(arg0, void **, 0x10), M2C_FIELD(arg1, void **, 0x10));
        }
    }
}

f32 fn_80007F5C(void) {
    extern const f64 lbl_803C1660[];
    return lbl_803C1660[0];
}

void fn_800083A4(void *arg0, s32 arg1) {
    extern s32 lbl_80494378;
    extern s32 lbl_80495A7C[];
    void fn_803227C4(AptVec2 *, s32, s32, s32, s32, s32);
    s32 fn_800F3304(void *);
    f32 fn_801DF514(s32);
    f32 fn_80007F5C(void);
    AptVec2 v;

    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
    fn_803227C4(&v, lbl_80494378, fn_800F3304(lbl_80495A7C), 1, 0, 0);
    M2C_FIELD(arg0, f32 *, 0x28) = v.y;
    if (M2C_FIELD(arg0, f32 *, 0x28) < fn_801DF514(M2C_FIELD(arg0, s32 *, 0x34))) {
        M2C_FIELD(arg0, f32 *, 0x28) = fn_801DF514(M2C_FIELD(arg0, s32 *, 0x34));
    }
    M2C_FIELD(arg0, f32 *, 0x24) = M2C_FIELD(arg0, f32 *, 0x28) / fn_80007F5C() + M2C_FIELD(arg0, f32 *, 0x30);
}

void fn_800085D0(void *arg0, void *arg1) {
    void *it;

    if (M2C_FIELD(arg0, void **, 4) == NULL) {
        M2C_FIELD(arg0, void **, 4) = arg1;
    } else {
        it = M2C_FIELD(arg0, void **, 4);
        while (M2C_FIELD(it, void **, 0) != NULL) {
            it = M2C_FIELD(it, void **, 0);
        }
        M2C_FIELD(it, void **, 0) = arg1;
    }
    M2C_FIELD(arg1, void **, 4) = arg0;
}

void *fn_80008608(void *arg0, void *arg1) {
    void *it;
    void *prev;

    prev = NULL;
    for (it = M2C_FIELD(arg0, void **, 4); it != NULL; it = M2C_FIELD(it, void **, 0)) {
        if (it == arg1) {
            break;
        }
        prev = it;
    }
    if (it == NULL) {
        return it;
    }
    if (prev != NULL) {
        M2C_FIELD(prev, void **, 0) = M2C_FIELD(it, void **, 0);
        return it;
    }
    M2C_FIELD(arg0, void **, 4) = M2C_FIELD(it, void **, 0);
    return it;
}

M2C_UNK fn_80008658(M2C_UNK *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    char *vt;
    void **obj;
    void **next;

    obj = M2C_FIELD(arg0, void ***, 4);
    while (obj != NULL) {
        vt = M2C_FIELD(obj, char **, 0x2C);
        next = (void **)*obj;
        (*(void (**)(void *, s32, s32, s32, s32))(vt + 0x14))((char *)obj + *(s16 *)(vt + 0x10), arg1, arg2, arg3, arg4);
        obj = next;
    }
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

void fn_80008734(void *arg0, void *arg1) {
    void *it;

    if (M2C_FIELD(arg0, void **, 0) == NULL) {
        M2C_FIELD(arg0, void **, 0) = arg1;
    } else {
        it = M2C_FIELD(arg0, void **, 0);
        while (M2C_FIELD(it, void **, 0) != NULL) {
            it = M2C_FIELD(it, void **, 0);
        }
        M2C_FIELD(it, void **, 0) = arg1;
    }
    M2C_FIELD(arg1, void **, 8) = arg0;
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
    AptVec2 *p;
    AptVec2 a;
    AptVec2 b;

    p = &v;
    p->x = lbl_803C17F8[0];
    p->y = lbl_803C17F8[0];
    a = *p;
    p->x = lbl_803C17FC[0];
    p->y = lbl_803C17FC[0];
    b = *p;
    M2C_FIELD(arg0, void **, 0x2C) = lbl_80406C38;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, AptVec2 *, 0x1C) = a;
    M2C_FIELD(arg0, AptVec2 *, 0x24) = b;
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
    AptVec2 *p = &v;

    M2C_FIELD(arg0, void **, 0x2C) = lbl_80406C38;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    p->x = lbl_803C1800[0];
    p->y = lbl_803C1800[0];
    M2C_FIELD(arg0, AptVec2 *, 0x1C) = *p;
    M2C_FIELD(arg0, void **, 0x2C) = lbl_80406C08;
    p->x = lbl_803C1804[0];
    p->y = lbl_803C1804[0];
    M2C_FIELD(arg0, AptVec2 *, 0x24) = *p;
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

