/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    s32 x;
    s32 y;
} WrapperPanePoint;
typedef struct {
    u8 pad0[0x1C];
    WrapperPanePoint pos;
    WrapperPanePoint size;
    u8 pad2C[0x40 - 0x2C];
    s32 unk40[1];
} WrapperPaneBase;


void fn_802FEF40(void *arg0, s32 arg1) {
    extern char lbl_8041AA90[];
    extern u8 lbl_8045BA40[];
    void fn_802FF104(void *);
    void fn_80338184(void *, void *);
    M2C_FIELD(arg0, void **, 0xF0) = lbl_8041AA90;
    fn_802FF104(arg0);
    M2C_FIELD(arg0, u32 *, 0xE4) = 0xDEADBEEF;
    if (arg1 & 1) {
        fn_80338184(lbl_8045BA40, arg0);
    }
}

s32 fn_802FEFA0(void *arg0) {
    M2C_UNK fn_802FEFE4(void *);
    M2C_UNK fn_803BABAC();
    fn_803BABAC();
    if (M2C_FIELD(arg0, s32 *, 4) & 0x84000000) {
        fn_802FEFE4(arg0);
    }
    return 1;
}

void fn_802FF1E0(f32 arg0) {
    extern u8 lbl_80454A38[];
    extern s32 lbl_804961E4[2];
    void *it;

    M2C_FIELD(M2C_FIELD(lbl_80454A38, void **, 0), void (**)(void *, s32), 0x14)(lbl_80454A38 + M2C_FIELD(M2C_FIELD(lbl_80454A38, void **, 0), s16 *, 0x10), -1);
    for (it = (void *)lbl_804961E4[0]; it != NULL; it = M2C_FIELD(it, void **, 0x20)) {
        M2C_FIELD(M2C_FIELD(*(void **)it, void **, 0xF0), void (**)(void *, f32), 0x74)((u8 *)*(void **)it + M2C_FIELD(M2C_FIELD(*(void **)it, void **, 0xF0), s16 *, 0x70), arg0);
    }
    M2C_FIELD(M2C_FIELD(lbl_80454A38, void **, 0), void (**)(void *), 0x1C)(lbl_80454A38 + M2C_FIELD(M2C_FIELD(lbl_80454A38, void **, 0), s16 *, 0x18));
}

s32 fn_802FF5CC(void *arg0, u32 arg1) {
    s32 flags = M2C_FIELD(arg0, s32 *, 4);
    if (flags & 0x04000000) {
        if (M2C_FIELD(arg0, u8 *, 0x88) > arg1) {
            M2C_FIELD(arg0, u8 *, 0xEC) = arg1;
            M2C_FIELD(arg0, s32 *, 4) = flags | 0x02000000;
            return 1;
        }
        return 0;
    }
    return 0;
}

s32 fn_802FF608(void *arg0, s32 i) {
    struct { u8 pad[0x64]; struct { s32 a; u8 pad[0x3C]; } e[1]; } *p = arg0;
    if (M2C_FIELD(arg0, s32 *, 4) & 0x04000000) {
        u8 *q = (u8 *)arg0 + 0x64;
        if (*(u8 *)(q + 0x24) != 0 && *(s32 **)(q + 4) != NULL) {
            return (*(s32 **)(q + 4))[M2C_FIELD(arg0, u8 *, 0xEC)];
        }
    } else {
        return p->e[i].a;
    }
    return 0;
}

s32 fn_802FF658(void *arg0) {
    struct { u8 n; u8 pad[0x63]; struct { u8 *a; u8 pad[0x3C]; } e[1]; } *p = arg0;
    if (M2C_FIELD(arg0, s32 *, 4) & 0x04000000) {
        u8 *q = (u8 *)arg0 + 0x64;
        u8 **arr;
        s32 i;
        if (*(u8 *)(q + 0x24) != 0 && (arr = *(u8 ***)(q + 4)) != NULL) {
            for (i = 0; i < *(u8 *)(q + 0x24); i++) {
                u8 *e = arr[i];
                if (e != NULL && (M2C_FIELD(e, s32 *, 8) & 0x20)) {
                    return 1;
                }
            }
        }
    } else {
        u32 i;
        for (i = 0; i < p->n; i++) {
            u8 *e = p->e[i].a;
            if (e != NULL && (M2C_FIELD(e, s32 *, 8) & 0x20)) {
                return 1;
            }
        }
    }
    return 0;
}

void fn_802FFB40(char *self, s32 arg1) {
    char *vt = *(char **)(self + 0xF0);
    (*(void (**)(char *, s32, s32))(vt + 0x14))(self + *(s16 *)(vt + 0x10), arg1, 0);
}

void fn_802FFB78(void) {

}

void fn_802FFB7C(s32 arg0, s32 arg1) {
    void fn_802CA9A8(void *);
    void fn_802CAA00(void *, s32);
    extern u8 lbl_80454A38[];
    extern s32 lbl_804961E4[2];
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            s32 *p = lbl_804961E4;
            p[1] = 0;
            p[0] = 0;
            fn_802CA9A8(lbl_80454A38);
        } else {
            fn_802CAA00(lbl_80454A38, 2);
        }
    }
}

void fn_802FFBE0(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BA40[];
    fn_80338000(lbl_8045BA40, arg0, 4);
}

void fn_802FFC10(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BA40[];
    fn_80338184(lbl_8045BA40, arg0);
}

void fn_802FFC3C(void) {

}

s32 fn_802FFC40(s32 arg0) {
    return arg0 + 0x10;
}

void fn_802FFC48(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | arg1);
}

void fn_802FFC58(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & ~arg1);
}

s32 fn_802FFC68(void *arg0, s32 arg1) {
    return (M2C_FIELD(arg0, s32 *, 4) & arg1) != 0;
}

s32 fn_802FFC80(s32 *self) {
    return self[1];
}

s32 fn_802FFC88(void *arg0) {
    return ((u32) (M2C_FIELD(arg0, s32 *, 0x74) | M2C_FIELD(arg0, s32 *, 0xB4)) >> 5U) & 1;
}

s32 fn_802FFC9C(WrapperPaneBase *self, s32 i) {
    return self->unk40[i];
}

void fn_802FFCAC(void *arg0, s32 arg1, s32 i) {
    struct { u8 pad[0x64]; struct { s32 a; u8 pad[0x3C]; } e[1]; } *p = arg0;
    p->e[i].a = arg1;
}

void fn_802FFCBC(void *arg0, s32 arg1, s32 i) {
    M2C_FIELD(arg0, s32 **, 0x68)[i] = arg1;
}

void fn_802FFCCC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & 0xFDFFFFFF);
}

void fn_802FFCDC(void) {

}

void fn_802FFCE0(void) {

}

s32 fn_802FFCE4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) & 0xC) {
        return 1;
    }
    return 0;
}

s32 fn_802FFCFC(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 4) >> 3U) & 1;
}

s32 fn_802FFD08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xE8);
}

void fn_802FFD10(void *arg0, s32 i, f32 v) {
    struct { u8 pad[0x78]; struct { f32 a; u8 pad[0x3C]; } e[1]; } *p = arg0;
    p->e[i].a = v;
}

void fn_802FFD20(void) {

}

s32 fn_802FFD24(void *arg0) {
    return M2C_FIELD(arg0, u32 *, 0xE4) == 0x900DBEEF;
}

void fn_802FFD40(void) {
    void fn_802FFB7C(s32, s32);
    fn_802FFB7C(1, 0xFFFF);
}

void fn_802FFD6C(void) {
    fn_802FFB7C(0, 0xFFFF);
}

