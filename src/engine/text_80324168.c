/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8032421C(void *);

void fn_802D2FD0(void);
s32 *fn_80324168(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

void fn_8032417C(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8032419C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_803241DC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8032434C(void *self, s32 flags) {
    extern u8 lbl_8041B888[];
    extern void *lbl_80494FDC;
    extern void *fn_802D0AB8();
    void fn_80325578(void *);
    void fn_802E18CC(void *, void *);
    void fn_802CB8D4(void *);
    void fn_802CD53C(void *);
    void fn_80365C40(void *, s32);
    void fn_8031E910(void *, s32);
    void fn_802D1A00(void *, void *);

    M2C_FIELD(self, void **, 0) = lbl_8041B888;
    M2C_FIELD(self, s32 *, 0x49118) = 0;
    fn_80325578(self);
    fn_802E18CC(lbl_80494FDC, self);
    fn_802CB8D4((char *)self + 0x4910C);
    fn_802CB8D4((char *)self + 0x49100);
    fn_802CB8D4((char *)self + 0x490DC);
    fn_802CB8D4((char *)self + 0x490CC);
    fn_802CD53C((char *)self + 0x490C0);
    fn_80365C40((char *)self + 0x490B0, 2);
    fn_802CB8D4((char *)self + 0x48EFC);
    fn_8031E910(self, 0);
    if (flags & 1) {
        fn_802D1A00(fn_802D0AB8(), self);
    }
}

void fn_803246DC(void *arg0, void **arg1) {
    void **node;

    for (node = *arg1; node != NULL; node = node[2]) {
        M2C_FIELD(arg0, void **, 0x49120 + M2C_FIELD(arg0, s32 *, 0x4B120) * 4) = node[0];
        M2C_FIELD(arg0, s32 *, 0x4B120)++;
    }
}

void fn_8032471C(void *arg0, void *arg1) {
    extern s32 fn_802D2540(void *, void *);
    extern u8 lbl_80493920[];
    char *vt;
    s32 r;

    if (arg1 != NULL) {
        r = fn_802D2540(arg1, lbl_80493920);
        if (r != 0) {
            fn_8032471C(arg0, M2C_FIELD(arg1, void **, 0x20));
            fn_8032471C(arg0, M2C_FIELD(arg1, void **, 0x24));
            vt = M2C_FIELD(arg1, char **, 0);
            (*(void (**)(void *))(vt + 0xC))((char *)arg1 + *(s16 *)(vt + 0x8));
        } else {
            M2C_FIELD(arg1, s32 *, 0x40) = r;
            M2C_FIELD(arg1, u32 *, 0x64) &= ~0x80;
            M2C_FIELD(arg0, void **, 0x49120 + M2C_FIELD(arg0, s32 *, 0x4B120) * 4) = arg1;
            M2C_FIELD(arg0, s32 *, 0x4B120)++;
        }
    }
}

void fn_803256E0(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8032588C();
    M2C_UNK fn_80325978(s32, s32);
    fn_8032588C();
    fn_80325978(arg0, arg1);
}

s32 fn_8032571C(void *arg0) {
    s32 r = 0;
    if (M2C_FIELD(arg0, s32 *, 0x4B120) == 0x67F) {
        r = 1;
    }
    return r;
}

void fn_80325734(void *arg0, void *arg1, s32 arg2) {
    s32 fn_802CB69C(void *, void *);
    fn_803256E0((s32)arg0, (s32)arg1, 0);
    if (arg2 != 0) {
        M2C_FIELD(arg1, s32 *, 0x88) = fn_802CB69C(arg0 + 0x49100, arg1);
    } else {
        M2C_FIELD(arg1, s32 *, 0x88) = arg2;
    }
}

void fn_80325790(void *arg0, void *arg1) {
    void fn_802CB5C4(void *, void *);
    void fn_80325C50(void *, void *);
    if (M2C_FIELD(arg1, void **, 0x88) != 0) {
        fn_802CB5C4(arg0 + 0x49100, M2C_FIELD(arg1, void **, 0x88));
    }
    M2C_FIELD(arg1, s32 *, 0x88) = 0;
    fn_80325C50(arg0, arg1);
}

void fn_803257E8(void *arg0, void *arg1) {
    s32 fn_802CB69C(s32);
    M2C_FIELD(arg1, s32 *, 0x88) = fn_802CB69C(arg0 + 0x48EFC);
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
}

void fn_8032582C(void *arg0, void *arg1) {
    void *fn_802CBB10(void *);
    void fn_802CB5C4(void *, void *);
    void *self = arg0;
    void *list = self + 0x48EFC;
    void *node = fn_802CBB10(list);
    if (node != 0) {
        fn_802CB5C4(list, node);
        M2C_FIELD(arg1, s32 *, 0x88) = 0;
    }
    M2C_FIELD(self, s32 *, 0x28) = 1;
}

void fn_80325888(void) {

}

void fn_80325978(s32 arg0, void *arg1) {
    void fn_803259C8(s32, void *);
    void *vt;

    fn_803259C8(arg0, arg1);
    M2C_FIELD(arg1, s32 *, 0x4) = arg0;
    vt = M2C_FIELD(arg1, void **, 0x0);
    M2C_FIELD(vt, void (**)(void *, s32), 0x114)((char *)arg1 + M2C_FIELD(vt, s16 *, 0x110), arg0);
}

void fn_803259C8(s32 arg0, void *arg1) {
    void fn_80365E6C(s32, s32, void *, s32);
    s32 h = M2C_FIELD(arg1, s32 *, 0x60);

    if (h != 0) {
        fn_80365E6C(arg0 + 0x490B0, h, arg1, 1);
    }
}

void fn_80325A04(s32 arg0, void *arg1) {
    s32 fn_803660C8(s32, s32, void **);
    s32 fn_80366120(s32, s32, void **);
    void fn_80365FEC(s32, s32);
    s32 h = M2C_FIELD(arg1, s32 *, 0x60);

    if (h != 0) {
        void *obj;
        s32 it = fn_803660C8(arg0 + 0x490B0, h, &obj);

        while (it != 0) {
            if (obj == arg1) {
                fn_80365FEC(arg0 + 0x490B0, it);
                return;
            }
            it = fn_80366120(arg0 + 0x490B0, it, &obj);
        }
    }
}

void fn_80325A7C(s32 arg0, s32 arg1) {
    s32 fn_802C52EC(s32);
    M2C_UNK fn_80325AB8(s32, s32);
    fn_80325AB8(arg0, fn_802C52EC(arg1));
}

s32 fn_80325AB8(s32 arg0, s32 arg1) {
    s32 fn_803660C8(s32, s32, s32 *);
    s32 out;

    if (fn_803660C8(arg0 + 0x490B0, arg1, &out) == 0) {
        return 0;
    }
    return out;
}

void fn_80325AF4(s32 arg0) {
    M2C_UNK fn_803660C8(s32);
    fn_803660C8(arg0 + 0x490B0);
}

void fn_80325B1C(s32 arg0) {
    M2C_UNK fn_80366120(s32);
    fn_80366120(arg0 + 0x490B0);
}

void fn_80326190(void *arg0) {
    M2C_UNK fn_802F5D80(void *, void *, void *, s32, s32);
    fn_802F5D80(arg0 + 0x28, arg0 + 0x48EFC, arg0 + 0x49120, M2C_FIELD(arg0, s32 *, 0x4B120), M2C_FIELD(arg0, s32 *, 0x4911C));
}

void fn_80327A68(s32 arg0) {
    void fn_80328DD4(void *);
    fn_80328AE0();
    fn_80328DD4((void *)arg0);
}

void fn_80328CF8(s32 arg0) {
    M2C_UNK fn_802F5BD0(s32);
    fn_802F5BD0(arg0 + 0x28);
}

void fn_80328DD4(void *arg0) {
    s32 i;
    void **obj;
    char *vt;

    if (M2C_FIELD(arg0, void ***, 0x490E8) != NULL) {
        for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x4911C); i++) {
            obj = M2C_FIELD(arg0, void ***, 0x490E8)[i];
            if (obj != NULL) {
                vt = (char *)*obj;
                (*(void (**)(void *))(vt + 0x6C))((char *)obj + *(s16 *)(vt + 0x68));
            }
        }
    }
}

void fn_80328E5C(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x28) = (void *) M2C_FIELD(arg0, void **, 0x4D130);
    M2C_FIELD(arg0, void **, 0x4D130) = arg1;
}

void fn_80328F84(s32 arg0, s32 arg1) {
    extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
    extern void fn_80328FF4(void);
    extern void fn_80329080(void *);
    extern void fn_803290A0(void *);
    extern u8 lbl_804938F8[];
    extern u8 lbl_803F3210[];
    extern u8 lbl_80493858[];
    extern s32 lbl_80496240;
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_80496240 = fn_802D6A90(lbl_804938F8, fn_80328FF4, fn_80329080, fn_803290A0, 5, lbl_803F3210, lbl_80493858);
    }
}

extern void *fn_802D0B3C(void);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DBBCC(void *, u32, s32);
extern void *fn_802D0AB8();

static inline void *Alloc(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DBBCC(fn_802D0B3C(), size, 0);
        }
    }
    return p;
}

void fn_80328FF4(void) {
    fn_8032421C(Alloc(0x4D140));
}

void fn_8032421C(void *);
void fn_80329080(void *self) {
    fn_8032421C(self);
}

extern s32 lbl_80496240;
void fn_803290A0(void *self) {
    extern void fn_8032434C(void *, s32);
    fn_8032434C(self, 2);
}

void fn_803290C4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_804938F8[];
void *fn_80329104(void) {
    return lbl_804938F8;
}

extern s32 lbl_80493904[];
s32 fn_80329110(void) {
    return lbl_80493904[0];
}

extern s32 lbl_80493908[];
s32 fn_8032911C(void) {
    return lbl_80493908[0];
}

extern u16 lbl_8049390C[];
u16 fn_80329128(void) {
    return lbl_8049390C[0];
}

void *fn_80329134(void) {
    return lbl_804938F8;
}

extern u16 lbl_8049390E[];
u16 fn_80329140(void) {
    return lbl_8049390E[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80328FF4(void);
extern void fn_803290A0(void *);
extern u8 lbl_803F3210[];
extern u8 lbl_80493858[];
void fn_8032914C(s32 arg0) {
    fn_802D6A90(lbl_804938F8, fn_80328FF4, fn_80329080, fn_803290A0, arg0, lbl_803F3210, lbl_80493858);
}

void fn_802D2430(void);
void fn_803291A0(void) {
    fn_802D2430();
}

void fn_803291C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4D134) = arg1;
}

s32 fn_803291CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4D134);
}

void fn_803291D8(s32 arg0) {
    M2C_UNK fn_80366328(s32);
    fn_80366328(arg0 + 0x490B0);
}

extern s32 lbl_80494F38;
s32 fn_80329200(void) {
    return lbl_80494F38;
}

s32 fn_80329208(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x49118);
}

s32 fn_80329214(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4911C);
}

void fn_80329220(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x4D13C) = farg0;
}

void fn_8032922C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4D138) = arg1;
}

void fn_80329238(void) {
    void fn_80328F84(s32, s32);
    fn_80328F84(1, 0xFFFF);
}

