/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct PlumbVec3 {
    f32 x, y, z;
} PlumbVec3;

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_80248488(void *, s32, u32);

static inline void *PlumbBob_AllocAligned(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

extern void fn_80307364(void *);
void fn_8006A194(void *arg0);
extern s32 *lbl_80491F0C[];
extern s32 *fn_800B3420(s32);
extern s32 fn_802D5ACC(s32 *, s32);
extern void fn_802D57BC(s32 *, s32);
extern void fn_800B3324(s32, s32, s32);

typedef struct { s32 a, b, c; } PBVec3;
typedef struct { PBVec3 v; s32 w; } PBStackEntry;
typedef struct { s32 n; PBStackEntry e[4]; } PBStack;
typedef struct {
    s16 delta;
    s16 index;
    void (*pfn)(void *);
} PBVtblEntry;
typedef struct {
    s16 delta;
    s16 index;
    union {
        void (*pfn)(void *);
        s16 delta2;
    } u;
} PBPmf;
void fn_80066F50(void) {
    extern void *fn_802D1FC8(s32);
    extern void fn_802D544C(void *, void *);
    extern void *lbl_803F5F0C[];
    s32 i;

    for (i = 0; i < 20; i++) {
        if (lbl_80491F0C[i] == NULL) {
            s32 *p = fn_802D1FC8(4);
            fn_802D544C(p, lbl_803F5F0C[i]);
            lbl_80491F0C[i] = p;
        }
    }
}

void fn_80066FBC(void) {
    extern void fn_802D5254(void *, s32);
    extern void fn_802D20E8(void *);
    s32 i;

    for (i = 0; i < 20; i++) {
        s32 *p = lbl_80491F0C[i];
        if (p != NULL) {
            fn_802D5254(p, *p);
            fn_802D20E8(p);
        }
        lbl_80491F0C[i] = NULL;
    }
}

s32 fn_800671A0(void *arg0) {
    extern s32 lbl_80494420;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28D4) == 0) {
        M2C_FIELD(arg0, s32 *, 0x28D4) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x28C8) = 0;
    lbl_80494420 = 0;
    return 0;
}

void fn_80067300(void *self) {
    char *obj = M2C_FIELD(self, char **, 0x27F8);
    if (obj != NULL) {
        char *vt = M2C_FIELD(obj, char **, 0x44);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)(obj + M2C_FIELD(vt, s16 *, 8), 3);
        M2C_FIELD(self, char **, 0x27F8) = NULL;
    }
}

void fn_80067750(void *arg0) {
    extern f32 lbl_8041FAEC[];
    extern char lbl_8041F754[];
    extern s32 fn_80047A08(void *, s32);
    void *p;
    void *vt;

    p = M2C_FIELD(arg0, void **, 0x1E4);
    if (p != NULL) {
        vt = M2C_FIELD(p, void **, 0x4);
        M2C_FIELD(vt, void (**)(void *), 0x24)((u8 *)p + M2C_FIELD(vt, s16 *, 0x20));
        lbl_8041FAEC[0] = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E4), f32 *, 0x45C);
    }
    if (M2C_FIELD(arg0, void **, 0x1E8) != NULL && fn_80047A08(lbl_8041F754, 1) != 0) {
        void *q = M2C_FIELD(arg0, void **, 0x1E8);
        void *vt2 = M2C_FIELD(q, void **, 0x4);
        M2C_FIELD(vt2, void (**)(void *), 0x24)((u8 *)q + M2C_FIELD(vt2, s16 *, 0x20));
    }
}

void fn_80067978(void *arg0) {
    extern void *lbl_8041FA38[];
    extern s32 lbl_8041F94C[];
    extern s32 lbl_80496644;
    extern void fn_8006410C(s32);
    extern void fn_80067750(void *);
    extern void fn_803073C4(void *);
    extern s32 fn_80049B6C(void *);
    extern void fn_8010CDD4(s32);
    s32 flag;
    void *p;
    void *q;

    M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
    flag = 0;
    fn_8006410C(M2C_FIELD(lbl_8041FA38[0], s32 *, 0x4));
    fn_80067750(arg0);
    fn_803073C4(arg0);
    p = M2C_FIELD(arg0, void **, 0x1E4);
    if (p != NULL && M2C_FIELD(p, s32 *, 0x10) != 0) {
        flag = 1;
    }
    if (fn_80049B6C(lbl_8041F94C) != 0) {
        q = M2C_FIELD(arg0, void **, 0x1E8);
        if (q != NULL && M2C_FIELD(q, s32 *, 0x10) != 0) {
            flag = 1;
        }
    }
    if (flag != 0) {
        fn_8010CDD4(lbl_80496644);
    }
}

void fn_80067A28(void *arg0) {
    extern void fn_800671CC(void *, s32);
    extern void fn_8000EC58(s32);
    fn_800671CC(arg0, 1);
    fn_8000EC58(M2C_FIELD(arg0, s32 *, 0x1E4));
    fn_8000EC58(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void fn_80067A68(void *arg0) {
    extern void fn_800675EC(void *, s32);
    fn_800675EC(arg0, 1);
}

s32 fn_80067A8C(void *arg0, s32 arg1) {
    s32 base = (s32)arg0 + 0x1FC;
    s32 off = arg1 << 2;
    void *p = *(void **)(base + off);
    return (M2C_FIELD(p, u32 *, 0x18) >> 1) & 1;
}

void fn_80067BBC(void *arg0, s32 arg1, u32 arg2) {
    struct { char pad[0x4C]; PBPmf arr[0x2F]; } *self = arg0;
    s32 index;
    PBVtblEntry e;
    void (*f)(void *);
    s16 delta;
    s32 off;

    if (arg2 > 0x2E) return;
    index = self->arr[arg2].index;
    if (index == 0) return;
    if (index >= 0) {
        e = (*(PBVtblEntry **)((char *)self + self->arr[arg2].u.delta2))[index - 1];
        f = e.pfn;
    } else {
        f = self->arr[arg2].u.pfn;
    }
    delta = self->arr[arg2].delta;
    if (index >= 0) {
        off = e.delta + delta;
    } else {
        off = delta;
    }
    f((char *)self + off);
}

void fn_80068084(void *arg0, void *arg1) {
    extern void fn_800A1FF8(void *, s32, s32);
    extern void fn_80067AA4(void *, s32, s32);
    s32 index = M2C_FIELD(arg1, s32 *, 0x38);
    void **arr = (void **)((char *)arg0 + 0x1FC);
    fn_800A1FF8(arr[index], 0, 1);
    if (index == 0) fn_80067AA4(arg0, 0, 3);
    else fn_80067AA4(arg0, index, 4);
}

void fn_800680F4(void *arg0, void *arg1) {
    extern void fn_800A1FF8(void *, s32, s32);
    extern void fn_80067AA4(void *, s32, s32);
    s32 index = M2C_FIELD(arg1, s32 *, 0x38);
    void **arr = (void **)((char *)arg0 + 0x1FC);
    fn_800A1FF8(arr[index], 2, 1);
    if (index == 0) fn_80067AA4(arg0, 0, 3);
    else fn_80067AA4(arg0, index, 4);
}

void fn_80068164(void *arg0, void *arg1) {
    extern void fn_800A1FF8(void *, s32, s32);
    extern void fn_80067AA4(void *, s32, s32);
    s32 index = M2C_FIELD(arg1, s32 *, 0x38);
    void **arr = (void **)((char *)arg0 + 0x1FC);
    fn_800A1FF8(arr[index], 1, 1);
    if (index == 0) fn_80067AA4(arg0, 0, 3);
    else fn_80067AA4(arg0, index, 4);
}

void fn_800681D4(void *arg0, void *arg1) {
    extern void fn_800A1FF8(void *, s32, s32);
    extern void fn_80067AA4(void *, s32, s32);
    s32 index = M2C_FIELD(arg1, s32 *, 0x38);
    void **arr = (void **)((char *)arg0 + 0x1FC);
    fn_800A1FF8(arr[index], 3, 1);
    if (index == 0) fn_80067AA4(arg0, 0, 3);
    else fn_80067AA4(arg0, index, 4);
}

void fn_80068244(void *arg0, s32 arg1) {
    extern char lbl_8041F94C[];
    extern void fn_8004D1BC(void *);
    extern void fn_800A3F74(void *);
    extern void fn_8000F6D0(void *);
    extern void fn_8006410C(s32);
    char *base = lbl_8041F94C;
    s32 off = arg1 * 4;
    s32 *p;
    s32 i;

    fn_8004D1BC(base);
    fn_800A3F74(*(void **)((char *)arg0 + 0x1FC + off));
    fn_8000F6D0(*(void **)((char *)arg0 + 0x1E4 + off));
    fn_8006410C(M2C_FIELD(M2C_FIELD(base, void **, 0xEC), s32 *, 4));
    if (arg1 == 1) {
        p = (s32 *)((char *)arg0 + 0x2914);
        for (i = 0; i < 6; i++) {
            *p-- = 1000;
        }
    } else {
        p = (s32 *)((char *)arg0 + 0x28FC);
        for (i = 0; i < 6; i++) {
            *p-- = 1000;
        }
    }
}

void fn_80068394(void *arg0, s32 arg1) {
    extern char lbl_8041F94C[];
    extern void fn_8004D1BC(void *);
    extern void fn_800A3F74(void *);
    extern void fn_8006410C(s32);
    extern void *lbl_8041F94C_ptr;
    fn_8004D1BC(lbl_8041F94C);
    fn_800A3F74(*(void **)((char *)arg0 + 0x1FC + (arg1 << 2)));
    fn_8006410C(M2C_FIELD(M2C_FIELD(lbl_8041F94C, void **, 0xEC), s32 *, 4));
}

void fn_80068444(void) {

}

void fn_80068448(void *arg0, s32 arg1) {
    M2C_UNK fn_80067AA4(void *, s32, M2C_UNK);
    M2C_UNK fn_80024ADC(void *, s32 *);
    M2C_UNK fn_802CB8D4(s32 *);
    struct {
        char pad[0x204];
        void *arr[1];
    } *self = arg0;
    s32 sp8[3];
    s32 *var_r31;
    s32 var_r30;
    void *temp_r3;

    temp_r3 = self->arr[arg1];
    var_r30 = 0;
    if (temp_r3 == NULL || *M2C_FIELD(temp_r3, s32 **, 0xF4) != 2) {
        var_r31 = sp8;
        var_r31[1] = 0;
        var_r31[0] = 0;
        var_r31[2] = 1;
        fn_80024ADC(temp_r3, var_r31);
        if (sp8[0] != 0) {
            var_r30 = 2;
        }
        fn_802CB8D4(var_r31);
        fn_802CB8D4(var_r31);
    }
    fn_80067AA4(self, arg1, var_r30);
}

void fn_800684E8(void) {

}

void fn_800684EC(void) {

}

void fn_800684F0(void *arg0, s32 arg1) {
    M2C_UNK fn_800292C4(void *, s32);
    extern void *lbl_8041FA38[];
    fn_800292C4(lbl_8041FA38[0], arg1);
}

void fn_80068518(void) {

}

void fn_8006851C(void) {

}

void fn_80068520(void *arg0, void *arg1) {
    M2C_UNK fn_80067AA4(void *, s32, M2C_UNK);
    M2C_UNK fn_800A1FF8(void *, s32, s32);
    s32 temp_r29;
    void *temp_r3;
    void **var_r9;

    temp_r29 = M2C_FIELD(arg1, s32 *, 0x38);
    var_r9 = (void **) ((char *) arg0 + 0x1FC);
    temp_r3 = var_r9[temp_r29];
    fn_800A1FF8(temp_r3, M2C_FIELD(temp_r3, s32 *, 0x174), 0);
    fn_80067AA4(arg0, temp_r29, 0);
}

void fn_80068574(void) {

}

void fn_80068578(void) {

}

void fn_8006857C(void *arg0, s32 arg1) {
    M2C_UNK fn_80067AA4(void *, s32, M2C_UNK);
    s32 fn_801BFD60(s32);
    s32 fn_801BFD7C(s32);
    s32 var_r29;

    var_r29 = 0;
    if (arg1 == fn_801BFD7C(M2C_FIELD(arg0, s32 *, 0x1F4))) {
        var_r29 = M2C_FIELD(arg0, s32 *, 0x1F4);
    } else if (arg1 == fn_801BFD7C(M2C_FIELD(arg0, s32 *, 0x1F8))) {
        var_r29 = M2C_FIELD(arg0, s32 *, 0x1F8);
    }
    fn_80067AA4(arg0, fn_801BFD60(var_r29), 5);
}

void fn_800685F0(void *arg0, s32 arg1) {
    M2C_UNK fn_80067AA4(void *, s32, M2C_UNK);
    s32 fn_801BFD60(s32);
    s32 fn_801BFD7C(s32);
    s32 var_r29;

    var_r29 = 0;
    if (arg1 == fn_801BFD7C(M2C_FIELD(arg0, s32 *, 0x1F4))) {
        var_r29 = M2C_FIELD(arg0, s32 *, 0x1F4);
    } else if (arg1 == fn_801BFD7C(M2C_FIELD(arg0, s32 *, 0x1F8))) {
        var_r29 = M2C_FIELD(arg0, s32 *, 0x1F8);
    }
    fn_80067AA4(arg0, fn_801BFD60(var_r29), 0);
}

void fn_80068664(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1CC) = 1;
}

void fn_80068670(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1CC) = 1;
}

void fn_8006867C(void) {

}

void fn_80068680(void) {

}

void fn_80068684(void) {

}

void fn_80068688(void) {

}

void fn_8006868C(void) {

}

void fn_80068690(void) {

}

void fn_80068694(void *arg0) {
    extern void fn_80067AA4(void *, s32, s32);

    fn_80067AA4(arg0, 0, 1);
    fn_80067AA4(arg0, 1, 1);
}

void fn_800686D8(void *arg0) {
    extern void fn_80067AA4(void *, s32, s32);
    void *p = M2C_FIELD(arg0, void **, 0x27F8);

    if (p == NULL) {
        fn_80067AA4(arg0, 0, 0);
        fn_80067AA4(arg0, 1, 0);
    } else {
        M2C_FIELD(p, s32 *, 0xD4) = 0;
        fn_80067AA4(arg0, 0, 0xB);
        fn_80067AA4(arg0, 1, 0xB);
    }
}

void fn_800688B8(void) {

}

void fn_800688BC(void *arg0, void *arg1) {
    extern char lbl_8041F94C[];
    extern s32 lbl_80494414;
    extern s32 lbl_80495840;
    extern void **lbl_80496688;
    extern char lbl_803C8A44[];
    extern void fn_80085E44(void *);
    extern void fn_80067AA4(void *, s32, s32);
    extern void fn_800A9108(void *);
    extern void fn_800AC130(void *, s32);
    extern void fn_800F8CB4(void *);
    char *base;
    char *vt;

    M2C_FIELD(arg0, s32 *, 0x29D0) = 1;
    fn_80085E44((char *)arg0 + 0x210);
    base = lbl_8041F94C;
    M2C_FIELD(base, s32 *, 0x19C) = M2C_FIELD(arg1, s32 *, 0x38);
    lbl_80495840 = lbl_80494414;
    lbl_80494414 = 0;
    fn_80067AA4(arg0, 0, 9);
    fn_80067AA4(arg0, 1, 9);
    fn_800A9108(M2C_FIELD(arg0, void **, 0x20C));
    fn_800AC130(M2C_FIELD(base, void **, 0x110), 1);
    fn_800F8CB4(lbl_803C8A44);
    M2C_FIELD(arg0, s32 *, 0x28D0) = 0;
    vt = (char *)*lbl_80496688;
    (*(void (**)(void *))(vt + 0x8C))((char *)lbl_80496688 + *(s16 *)(vt + 0x88));
}

void fn_80068978(s32 arg0) {
    M2C_UNK fn_80086094(s32);
    fn_80086094(arg0 + 0x210);
}

void fn_80068C68(void *arg0) {
    extern void fn_80067AA4(void *, s32, s32);
    extern void fn_800829D8(void *, s32, s32);

    fn_80067AA4(arg0, 0, 0xA);
    fn_80067AA4(arg0, 1, 0xA);
    fn_800829D8((char *)arg0 + 0x210, 0, 0x25);
}

void fn_80068CBC(void *arg0) {
    extern void fn_80067AA4(void *, s32, s32);
    extern void fn_800829D8(void *, s32, s32);

    fn_80067AA4(arg0, 0, 9);
    fn_80067AA4(arg0, 1, 9);
    fn_800829D8((char *)arg0 + 0x210, 0, 0x26);
}

void fn_80068F10(void *arg0) {
    extern void *lbl_80496648;
    void *obj = lbl_80496648;
    void *vt = M2C_FIELD(obj, void **, 0);
    M2C_FIELD(arg0, s32 *, 0x2808) = M2C_FIELD(vt, s32 (**)(void *), 0xF4)((u8 *)obj + M2C_FIELD(vt, s16 *, 0xF0));
}

void fn_80068F58(void) {

}

void fn_80068F5C(void *arg0) {
    extern void *lbl_80496648;
    extern s32 lbl_8041FAE8[];
    extern void fn_80067AA4(void *, s32, s32);
    void *obj = lbl_80496648;
    void *vt = M2C_FIELD(obj, void **, 0);
    M2C_FIELD(vt, void (**)(void *), 0x54)((u8 *)obj + M2C_FIELD(vt, s16 *, 0x50));
    fn_80067AA4(arg0, 0, 7);
    fn_80067AA4(arg0, 1, 7);
    lbl_8041FAE8[0] = 0;
}

void fn_80068FCC(void *arg0) {
    extern void fn_80067AA4(void *, s32, s32);

    fn_80067AA4(arg0, 0, 0);
    fn_80067AA4(arg0, 1, 0);
}

void fn_80069010(void) {
    extern void *lbl_8041FA38[];
    void fn_8002AF18(void *);
    if (lbl_8041FA38[0] != 0) {
        fn_8002AF18(lbl_8041FA38[0]);
    }
}

void fn_80069040(void *arg0) {
    void fn_800A90C0(void *);
    if (M2C_FIELD(arg0, void **, 0x20C) != 0) {
        fn_800A90C0(M2C_FIELD(arg0, void **, 0x20C));
    }
}

void fn_80069E40(u8 *self, s32 delta) {
    s32 *h;
    s32 n;

    h = fn_800B3420(*(s32 *)(self + 0x27F8));
    n = *(s32 *)(self + 0x48) + delta;
    if (n < -1) {
        return;
    }
    if (n > 19) {
        return;
    }
    if (*(s32 *)(self + 0x48) < 0 && fn_802D5ACC(h, *lbl_80491F0C[0]) == 0) {
        *(s32 *)(self + 0x48) = 0;
    }
    n = *(s32 *)(self + 0x48) += delta;
    if (n == -1) {
        fn_800B3324(*(s32 *)(self + 0x27F8), 0, 0x40);
    } else {
        fn_800B3324(*(s32 *)(self + 0x27F8), *lbl_80491F0C[n], 0x40);
    }
}

void fn_80069EF8(u8 *self) {
    s32 i;
    s32 j;
    s32 *h;
    s32 **p;

    i = 0;
    h = fn_800B3420(*(s32 *)(self + 0x27F8));
    for (; i <= 0x12 && fn_802D5ACC(h, *lbl_80491F0C[i]) != 0; i++) {
    }
    j = i;
    if (j > 0) {
        p = &lbl_80491F0C[i];
        do {
            s32 *dst = *p;
            j--;
            p--;
            fn_802D57BC(dst, **p);
        } while (j > 0);
    }
    fn_802D57BC(lbl_80491F0C[0], *h);
    *(s32 *)(self + 0x48) = -1;
}

void fn_8006A078(u8 *self, s32 flags) {
    extern u8 lbl_80409260[];
    extern void fn_80067358(void *);
    extern void fn_8006C8C4(void *, s32);
    extern void fn_80081F74(void *, s32);
    *(u8 **)(self + 0x44) = lbl_80409260;
    fn_80067358(self);
    fn_8006C8C4(self + 0x280C, 2);
    fn_80081F74(self + 0x210, 2);
    ((void (*)(void *, s32))fn_80307364)(self, 0);
    if (flags & 1) {
        fn_8006A194(self);
    }
}

extern s32 *lbl_80491F0C[];
extern s32 *fn_800B3420(s32);
extern s32 fn_802D5ACC(s32 *, s32);
extern void fn_802D57BC(s32 *, s32);
extern void fn_800B3324(s32, s32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
void *fn_8006A0E8(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void fn_8006A194(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8006A1C8(u8 *self, s32 i) {
    struct { char pad[0x1E4]; s32 arr[1]; } *s = (void *)self;
    return s->arr[i];
}

s32 fn_8006A1D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C8);
}

s32 fn_8006A1E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x29D0);
}

void fn_8006A1E8(void) {

}

void fn_8006A1EC(void) {

}

void fn_8006A1F0(void) {

}

s32 fn_8006A1F4(void) {
    return 1;
}

void fn_8006A1FC(void) {

}

void fn_8006A200(void) {

}

void fn_8006A204(void) {

}

void fn_8006A208(void) {

}

void fn_8006A20C(void) {

}

s32 fn_8006A210(u8 *self) {
    if (*(s32 *)(self + 0x27F8) != 0) {
        return 1;
    }
    return 0;
}

u8 *fn_8006A228(u8 *self) {
    extern u8 lbl_804092E8[];
    extern void fn_8030728C(void *);
    fn_8030728C(self);
    *(u8 **)(self + 0x44) = lbl_804092E8;
    *(s32 *)(self + 0x48) = 0;
    *(s32 *)(self + 0x4C) = 0;
    *(s32 *)(self + 0x54) = 0;
    return self;
}

extern u8 lbl_804092E8[];
extern void fn_80307364(void *);
extern void fn_8030728C(void *);
void fn_8006A274(u8 *self) {
    *(u8 **)(self + 0x44) = lbl_804092E8;
    fn_80307364(self);
}

void fn_8006A2A4(void *arg0) {
    register unsigned temp_r9;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_r9 == 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_r9;
        M2C_FIELD(arg0, s32 *, 0x50) = temp_r9;
        M2C_FIELD(arg0, s32 *, 0x54) = temp_r9;
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
    }
}

void fn_8006A2C8(void) {

}

void fn_8006A3F0(void *arg0, f32 arg1) {
    extern const f32 lbl_803C8E14[];
    extern const f32 lbl_803C8E18[];
    extern const f32 lbl_803C8E1C[];
    extern const f32 lbl_803C8E20[];
    extern const f32 lbl_803C8E24[];
    s32 v;

    arg1 = arg1 * lbl_803C8E14[0];
    if (arg1 < lbl_803C8E18[0]) {
        arg1 = lbl_803C8E18[0];
    }
    if (arg1 > lbl_803C8E14[0]) {
        arg1 = lbl_803C8E14[0];
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32)(arg1 + lbl_803C8E1C[0]);
    if (M2C_FIELD(arg0, s32 *, 0x4C) > 100) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 100;
    }
    if (arg1 >= lbl_803C8E20[0]) {
        v = 8;
    } else {
        v = (s32)(arg1 * lbl_803C8E24[0]);
    }
    if (M2C_FIELD(arg0, s32 *, 0x50) < v) {
        M2C_FIELD(arg0, s32 *, 0x50) = v;
    }
}

void fn_8006A494(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
    }
}

void fn_8006A4B0(void *arg0, void *arg1) {
    extern s32 fn_802486DC(char *, void *);
    extern char lbl_803C8E34[];

    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        if (fn_802486DC(arg1, lbl_803C8E34) == 0) {
            M2C_FIELD(arg0, s32 *, 0x54) = 1;
        }
    }
}

void *fn_8006A504(void *arg0, void *arg1) {
    extern void *fn_800BF3FC(s32);
    extern s32 fn_802486DC(char *, void *);
    extern void fn_800BF4D8(void *);
    extern void fn_80245BB4(void *, char *, s32, ...);
    extern char lbl_803C8E44[];
    extern char lbl_803C8E54[];
    void *p;
    void *q;
    char *fmt;
    s32 val;

    if (M2C_FIELD(arg0, s32 *, 0x48) == 0) {
        return NULL;
    }
    p = fn_800BF3FC(0x20);
    M2C_FIELD(p, u8 *, 0x0) = 0;
    if (fn_802486DC(lbl_803C8E44, arg1) == 0) {
        q = p;
        fmt = lbl_803C8E54;
        val = M2C_FIELD(arg0, s32 *, 0x4c);
        fn_80245BB4(q, fmt, val);
        return p;
    }
    fn_800BF4D8(p);
    return NULL;
}

s32 fn_8006A598(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

void fn_8006A5A0(void *arg0, s32 arg1) {
    extern void *lbl_804961A4;
    extern s32 lbl_80494148;
    extern s32 lbl_8049664C;
    char *vt;

    lbl_80494148 = arg1;
    lbl_8049664C = 0;
    vt = M2C_FIELD(lbl_804961A4, char **, 0x0);
    ((void (*)(void *, void *))M2C_FIELD(vt, void **, 0x44))((char *)lbl_804961A4 + M2C_FIELD(vt, s16 *, 0x40), arg0);
}

void fn_8006A5E8(void) {
    extern s32 lbl_8049664C;
    lbl_8049664C = 1;
}

s32 fn_8006A5F4(void) {
    void fn_802D85A4(void *);
    void fn_802D8640(void *, s32);
    void fn_802D85FC(void *, s32);
    extern s32 lbl_8049664C;
    u8 buf[0x40];
    s32 ret;

    fn_802D85A4(buf);
    fn_802D8640(buf, 0x10);
    ret = lbl_8049664C;
    fn_802D85FC(buf, 2);
    return ret;
}

void fn_8006A640(void) {
    M2C_UNK fn_8006AD28(s32);
    extern s32 lbl_80494148;
    fn_8006AD28(lbl_80494148);
    lbl_80494148 = 0;
    fn_8006A5E8();
}

void fn_8006C2F8(self) void *self; {
    extern char lbl_803C9128[];
    extern char lbl_803C913C[];
    extern char lbl_803C9150[];
    extern char lbl_803C915C[];
    void fn_8006C274(void *, char *);
    fn_8006C274(self, lbl_803C9128);
    fn_8006C274(self, lbl_803C913C);
    fn_8006C274(self, lbl_803C9150);
    fn_8006C274(self, lbl_803C915C);
}

s32 fn_8006C3F4(void *arg0) {
    extern char lbl_803C9128[];
    extern char lbl_803C913C[];
    extern char lbl_803C9150[];
    extern char lbl_803C915C[];
    void fn_8006C4F0(void *, char *);
    fn_8006C4F0(arg0, lbl_803C9128);
    fn_8006C4F0(arg0, lbl_803C913C);
    fn_8006C4F0(arg0, lbl_803C9150);
    fn_8006C4F0(arg0, lbl_803C915C);
}

void fn_8006C6B4(void *arg0) {
    M2C_UNK fn_8006C130(void *);
    M2C_UNK fn_8006C458(void *);
    extern s32 lbl_80494138;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3A4) == 9) {
        lbl_80494138 = 0;
        fn_8006C2F8();
        fn_8006C458(arg0);
        fn_8006C130(arg0);
    }
}

void fn_8006C704(void *arg0) {
    M2C_UNK fn_8006C35C();
    M2C_UNK fn_8006C3F4(void *);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3A4) == 9) {
        fn_8006C35C();
        fn_8006C3F4(arg0);
    }
}

void *fn_8006C744(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void fn_8006C7F0(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8006C824(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3A4);
}

void *fn_8006C82C(void *arg0) {
    extern void fn_8006C91C(void *);
    extern char lbl_80409388[];
    M2C_FIELD(arg0, s32 *, 0x0) = 0;
    M2C_FIELD(arg0, void **, 0x4) = lbl_80409388;
    M2C_FIELD(arg0, f32 *, 0x8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x10) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, f32 *, 0x18) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x1c) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x2c) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6c) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7c) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    fn_8006C91C(arg0);
    return arg0;
}

void fn_8006C8C4(void *arg0, s32 arg1) {
    extern char lbl_80409388[];
    extern char lbl_80406CE0[];
    extern void fn_8006CBF0(void *);
    extern void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 0x4) = lbl_80409388;
    fn_8006CBF0(arg0);
    M2C_FIELD(arg0, void **, 0x4) = lbl_80406CE0;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8006CD40(void) {
    fn_8006D798();
}

void fn_8006CD60(void *arg0) {
    extern void *lbl_8049665C;
    extern f32 lbl_80494E08;
    char *vt;
    void *self;
    void *res;
    f32 f;

    self = lbl_8049665C;
    vt = M2C_FIELD(self, char **, 0x0);
    res = ((void *(*)(void *))M2C_FIELD(vt, void **, 0x19C))((char *)self + M2C_FIELD(vt, s16 *, 0x198));
    f = M2C_FIELD(arg0, f32 *, 0x5c) + lbl_80494E08;
    M2C_FIELD(arg0, void **, 0x48) = res;
    M2C_FIELD(arg0, f32 *, 0x5c) = f;
}

s32 fn_8006D704(void *self, s32 arg1) {
    extern char *lbl_8049665C;
    extern f32 lbl_803C940C[];
    extern s32 fn_8006D798(void *);
    char *vt;
    s32 n;

    if (arg1 == 0) {
        return 0;
    }
    fn_8006D798(self);
    if (M2C_FIELD(self, f32 *, 0x8) >= lbl_803C940C[0]) {
        return 0;
    }
    vt = *(char **)lbl_8049665C;
    n = (*(s32 (**)(char *, s32))(vt + 0x194))(lbl_8049665C + *(s16 *)(vt + 0x190), arg1);
    return (u32)(M2C_FIELD(self, s32 *, 0x48) + n) <= (u32)M2C_FIELD(self, s32 *, 0x4C);
}

void fn_8006D998(void) {

}

void fn_8006D99C(s32 *self, s32 value) {
    *self = value;
}

void fn_8006D9A4(void *self, s32 flags) {
    extern void fn_802D20E8(void *);
    *(s32 *)self = 0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8006D9D4(void *self, void *arg1) {
    extern void fn_8006DA60(void *, s32, f32);
    extern void fn_8006DBBC(void *, f32, f32, f32);
    fn_8006DA60(self, 0, M2C_FIELD(arg1, f32 *, 0xB4));
    fn_8006DA60(self, 1, M2C_FIELD(arg1, f32 *, 0xB8));
    fn_8006DA60(self, 2, M2C_FIELD(arg1, f32 *, 0xBC));
    fn_8006DA60(self, 3, M2C_FIELD(arg1, f32 *, 0xC0));
    fn_8006DA60(self, 4, M2C_FIELD(arg1, f32 *, 0xC4));
    fn_8006DBBC(self, M2C_FIELD(arg1, f32 *, 0xC8), M2C_FIELD(arg1, f32 *, 0xCC), M2C_FIELD(arg1, f32 *, 0xD0));
}

void fn_8006DBBC(void *self, f32 x, f32 y, f32 z) {
    extern void fn_8006DC70(void *, s32, f32, f32, f32);
    fn_8006DC70(self, 1, x, y, z);
    fn_8006DC70(self, 2, x, y, z);
    fn_8006DC70(self, 7, x, y, z);
    fn_8006DC70(self, 0, x, y, z);
    fn_8006DC70(self, 6, x, y, z);
}

#pragma push
#pragma scheduling off
void fn_8006E1C4(void) {
    extern void *fn_80049034(char *);
    extern void fn_8010CCC4(s32);
    extern void fn_80319494(char *, s32);
    extern void fn_802E08D8(char *, void *, s32, s32);
    extern void *lbl_80496220;
    extern void *lbl_80494FA4;
    extern char lbl_8041F754[];
    extern char lbl_803C96D8[];
    extern char lbl_8041E1C8[];
    extern f32 lbl_803C96FC[];
    extern s32 lbl_80496644;
    void *res;
    void *base1;
    void *base2;
    char *vt1;
    char *vt2;
    char *arg1;
    char *label;
    s16 off1;
    s16 off2;
    f32 ff;
    void (*f)(void *);
    void (*g)(void *, f32);

    res = fn_80049034(lbl_8041F754);
    base1 = lbl_80496220;
    vt1 = M2C_FIELD(base1, char **, 0x0);
    off1 = M2C_FIELD(vt1, s16 *, 0x48);
    arg1 = (char *)base1 + off1;
    f = (void (*)(void *))M2C_FIELD(vt1, void **, 0x4C);
    f(arg1);
    fn_8010CCC4(lbl_80496644);
    label = lbl_803C96D8;
    fn_80319494(label, 0x2A);
    base2 = lbl_80494FA4;
    vt2 = M2C_FIELD(base2, char **, 0x0);
    off2 = M2C_FIELD(vt2, s16 *, 0x60);
    g = (void (*)(void *, f32))M2C_FIELD(vt2, void **, 0x64);
    ff = lbl_803C96FC[0];
    g((char *)base2 + off2, ff);
    fn_802E08D8(lbl_8041E1C8, res, -1, -1);
}
#pragma pop
extern s32 fn_802E0904(void *);
extern s32 fn_802E091C(void *);
extern void fn_8010CD4C(s32);
extern void fn_800E3B38(void *, s32, f32);
extern void fn_800490B0(void *);
extern s32 lbl_8041E1C8[];
extern s32 lbl_8041F754[];
extern s32 lbl_80496644;
extern f32 lbl_803C9700[];
extern s32 lbl_804093B0[];
void fn_8006E268(void *self) {
    if (fn_802E0904(lbl_8041E1C8) == 0 && fn_802E091C(lbl_8041E1C8) == 0) {
        fn_8010CD4C(lbl_80496644);
        fn_800E3B38(self, 3, lbl_803C9700[0]);
    }
}

void fn_8006E2D0(void) {
}

void fn_8006E2D4(void) {
    fn_802E091C(lbl_8041E1C8);
    fn_800490B0(lbl_8041F754);
}

s32 *fn_8006E308(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_804093B0;
    return self;
}

void fn_8006E758(void *arg0) {
    extern u8 lbl_8041F94C[];
    void fn_8006E7AC(void *);
    u8 *base = lbl_8041F94C;

    M2C_FIELD(arg0, s32 *, 0xD4) = M2C_FIELD(M2C_FIELD(base, void **, 0x184), s8 *, 0x1F);
    M2C_FIELD(arg0, s32 *, 0xD8) = M2C_FIELD(M2C_FIELD(base, void **, 0x184), s8 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
    fn_8006E7AC(arg0);
}

void fn_8006E7AC(void) {

}

void fn_8006F374(u8 *self) {
    typedef struct { s32 *value; } Handle;
    typedef struct { s32 key[4]; s32 val; s32 pad; } Entry;
    typedef struct { u8 pad[0xAC]; s32 idx; u8 pad2[0x90]; Entry e[1]; } Obj;
    Handle fn_8004BA7C();
    extern void fn_8010CF10(s32, s32);
    extern u8 lbl_8041F94C[];
    extern u8 lbl_803C98A4[];
    Obj *o = (Obj *)self;
    s32 idx;
    Handle h;
    s32 v;

    idx = o->idx;
    h = fn_8004BA7C(lbl_8041F94C, lbl_803C98A4);
    v = 0;
    if (h.value != NULL) {
        v = *h.value;
    }
    if (fn_802D5ACC((s32 *)(idx * 0x18 + (s32)self + 0x140), v) == 0) {
        fn_8010CF10(lbl_80496644, o->e[o->idx].val);
    }
}

void fn_8006F534(void) {

}

void fn_8006F538(void) {

}

void fn_8006F788(void) {

}

s32 fn_8006F878(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA8);
}

void fn_8006FCD8(u8 *self) {
    void fn_8000AA2C();
    extern s32 lbl_8041FA1C[];
    extern u8 lbl_803C97DC[];

    fn_8000AA2C(lbl_8041FA1C[0], lbl_803C97DC, 0, 0, 0);
    *(s32 *)(self + 0xA8) = 0;
}

s32 fn_8006FD2C(s32 arg0) {
    return arg0 + 0x70;
}

void fn_8006FD34(u8 *self, u32 arg1) {
    s32 fn_8033740C(void *, u32, s32, s32);
    extern u8 lbl_8045BA40[];

    *(s32 *)(self + 0x4C) = fn_8033740C(lbl_8045BA40, arg1, 0, 0);
}

void fn_8006FD74(u8 *self) {
    extern void fn_8031EA2C(s32);
    if (*(s32 *)(self + 0x4C) != 0) {
        fn_8031EA2C(*(s32 *)(self + 0x4C));
        *(s32 *)(self + 0x4C) = 0;
    }
}

s32 fn_8006FDB4(s32 arg0) {
    M2C_UNK fn_8006FF58(s32);
    M2C_UNK fn_800F6FB4(s32, s32, M2C_UNK);
    fn_800F6FB4(arg0 + 0x4C, arg0 + 0x54, 0x20);
    fn_800F6FB4(arg0 + 0x94, arg0 + 0x9C, 0x20);
    fn_8006FF58(arg0);
    return arg0;
}

void fn_8006FF58(s32 arg0) {
    u8 *self = (u8 *)arg0;
    *(s32 *)(self + 0x0) = 1;
    *(s32 *)(self + 0x4) = 0;
    *(s32 *)(self + 0x8) = 1;
    *(s32 *)(self + 0xC) = 0;
    *(s32 *)(self + 0x10) = 0;
    self[0x1C] = 10;
    self[0x1D] = 10;
    self[0x1E] = 10;
    self[0x1F] = 0;
    self[0x20] = 0;
    *(s8 *)(self + 0x48) = -1;
    *(s32 *)(self + 0xDC) = 0;
    *(s32 *)(self + 0xE0) = 0;
    *(s32 *)(self + 0xE4) = 0;
    *(s32 *)(self + 0x14) = 1;
    *(s32 *)(self + 0x18) = 0;
}

s32 fn_800702F8(void) {
    return 0;
}

s32 fn_80070464(void) {
    return 0;
}

void fn_8007046C(u8 *self) {
    extern s32 lbl_80494164;

    M2C_FIELD(self, s32 *, 0x24) = M2C_FIELD(self, s32 *, 0x0);
    M2C_FIELD(self, s32 *, 0x28) = M2C_FIELD(self, s32 *, 0x4);
    M2C_FIELD(self, s32 *, 0x2C) = M2C_FIELD(self, s32 *, 0x8);
    M2C_FIELD(self, s32 *, 0x30) = M2C_FIELD(self, s32 *, 0x10);
    M2C_FIELD(self, u8 *, 0x3C) = M2C_FIELD(self, u8 *, 0x1C);
    M2C_FIELD(self, u8 *, 0x3D) = M2C_FIELD(self, u8 *, 0x1D);
    M2C_FIELD(self, u8 *, 0x3E) = M2C_FIELD(self, u8 *, 0x1E);
    M2C_FIELD(self, u8 *, 0x3F) = M2C_FIELD(self, u8 *, 0x1F);
    M2C_FIELD(self, u8 *, 0x40) = M2C_FIELD(self, u8 *, 0x20);
    M2C_FIELD(self, s32 *, 0x34) = M2C_FIELD(self, s32 *, 0x14);
    M2C_FIELD(self, s32 *, 0x38) = M2C_FIELD(self, s32 *, 0x18);
    lbl_80494164 = 1;
}

void fn_800704E0(void *arg0) {
    extern s32 lbl_80494168;
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    lbl_80494168 = 1;
}

void fn_800704F4(u8 *self) {
    M2C_FIELD(self, s32 *, 0x0) = M2C_FIELD(self, s32 *, 0x24);
    M2C_FIELD(self, s32 *, 0x4) = M2C_FIELD(self, s32 *, 0x28);
    M2C_FIELD(self, s32 *, 0x8) = M2C_FIELD(self, s32 *, 0x2C);
    M2C_FIELD(self, s32 *, 0x10) = M2C_FIELD(self, s32 *, 0x30);
    M2C_FIELD(self, u8 *, 0x1C) = M2C_FIELD(self, u8 *, 0x3C);
    M2C_FIELD(self, u8 *, 0x1D) = M2C_FIELD(self, u8 *, 0x3D);
    M2C_FIELD(self, u8 *, 0x1E) = M2C_FIELD(self, u8 *, 0x3E);
    M2C_FIELD(self, u8 *, 0x1F) = M2C_FIELD(self, u8 *, 0x3F);
    M2C_FIELD(self, u8 *, 0x20) = M2C_FIELD(self, u8 *, 0x40);
    M2C_FIELD(self, s32 *, 0x14) = M2C_FIELD(self, s32 *, 0x34);
    M2C_FIELD(self, s32 *, 0x18) = M2C_FIELD(self, s32 *, 0x38);
}

void fn_80070560(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
}

void fn_80070778(void *self, s32 flags) {
    extern u8 lbl_80409508[];
    extern void fn_80070D80(void *);
    extern void fn_8008CA7C(void *, s32);
    extern void fn_80304AB4(void *, s32);
    u8 *p;

    M2C_FIELD(self, u8 **, 0x44) = lbl_80409508;
    fn_80070D80(self);
    fn_8008CA7C((u8 *)self + 0x1EC, 2);
    if ((u8 *)self + 0x134 != NULL) {
        p = (u8 *)self + 0x1EC;
        while ((u8 *)self + 0x134 != p) {
            p -= 0xB8;
            M2C_FIELD(M2C_FIELD(p, u8 **, 0x44), void (**)(void *, s32), 0xC)(p + M2C_FIELD(M2C_FIELD(p, u8 **, 0x44), s16 *, 8), 0);
        }
    }
    fn_80304AB4((u8 *)self + 0xB8, 2);
    ((void (*)(void *, s32))fn_80307364)(self, 0);
    if (flags & 1) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), self);
    }
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DBBCC(void *, u32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_80248488(void *, s32, u32);
void *fn_80072A60(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        heap = NULL;
    } else {
        p = fn_802D197C(heap, size, 4);
        if (p == NULL && (p = fn_802DBBCC(heap, size, 0)) == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            heap = fn_802DBBCC(fn_802D0B3C(), size, 0);
        } else {
            heap = p;
        }
    }
    fn_80248488(heap, 0, size);
    return heap;
}

void fn_80072B0C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void *fn_80072B40(void *self) {
    extern const f32 lbl_803C9FD8[];
    extern const f32 lbl_803C9FDC[];
    extern u8 lbl_80409590[];
    extern void fn_803059C8(void *, f32, s32, s32, f32, f32);
    extern void fn_8007BBF8(void *);
    extern void fn_8039C398(void *);
    M2C_UNK fn_800F6FB4(s32, s32, M2C_UNK);
    extern void fn_80072D20(void *);
    u8 *p;
    s32 i;

    fn_803059C8(self, lbl_803C9FD8[0], -1, 0, lbl_803C9FDC[0], lbl_803C9FDC[0]);
    p = (u8 *)self + 0xF4;
    M2C_FIELD(self, u8 **, 0x44) = lbl_80409590;
    for (i = 8; i != -1; i--) {
        fn_8007BBF8(p);
        p += 0x19C;
    }
    fn_8039C398((u8 *)self + 0xFEC);
    fn_800F6FB4((s32)self + 0x1010, (s32)self + 0x1018, 0x100);
    M2C_FIELD(self, s32 *, 0xFE8) = 0;
    fn_80072D20(self);
    return self;
}

void fn_8007321C(void *self);
void fn_80072BE0(void *self, s32 flags) {
    extern u8 lbl_80409590[];
    extern void fn_80305AB0(void *, s32);
    u8 *p;

    M2C_FIELD(self, u8 **, 0x44) = lbl_80409590;
    fn_8007321C(self);
    if ((u8 *)self + 0xF4 != NULL) {
        p = (u8 *)self + 0xF70;
        while ((u8 *)self + 0xF4 != p) {
            p -= 0x19C;
            M2C_FIELD(M2C_FIELD(p, u8 **, 0x44), void (**)(void *, s32), 0xC)(p + M2C_FIELD(M2C_FIELD(p, u8 **, 0x44), s16 *, 8), 0);
        }
    }
    fn_80305AB0(self, 0);
    if (flags & 1) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), self);
    }
}

void *fn_80072C7C(void *arg0, void *arg1) {
    extern void *fn_8016CC44(void *);
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern void *fn_8007B398(M2C_UNK);
    extern void fn_80304B30(void *, u32);
    extern void fn_80304BE4(void *, u32);
    void *a;
    void *b;
    void *c;
    void *obj;
    void *info;
    u32 id;

    id = 0;
    a = M2C_FIELD(arg1, void **, 0x38);
    b = fn_8016CC44(arg1);
    c = M2C_FIELD(b, void **, 0x38);
    obj = fn_8007B398(fn_802D1FC8(0x98));
    M2C_FIELD(obj, void **, 0x7C) = b;
    M2C_FIELD(obj, void **, 0x80) = arg1;
    info = M2C_FIELD(c, void **, 0xC0);
    if (info != NULL) {
        id = M2C_FIELD(info, u32 *, 0x1C);
    }
    if (id == 0) {
        id = M2C_FIELD(M2C_FIELD(a, void **, 0xC0), u32 *, 0x1C);
        if (id == 0) {
            id = 0xD59C7BB5;
        }
    }
    fn_80304B30(obj, id);
    fn_80304BE4(obj, id);
    return obj;
}

void fn_8007321C(void *self);
void fn_8007321C(void *arg0) {
    extern void fn_80077EDC(void *);
    extern void fn_8007BE9C(void *);
    extern void fn_8031EA2C(void *);
    extern s32 lbl_8049416C;
    s32 i;
    u8 *self;

    i = 0;
    self = arg0;
    fn_80077EDC(self);
    M2C_FIELD(M2C_FIELD(self, u8 **, 0x44), void (**)(void *), 0x84)(self + M2C_FIELD(M2C_FIELD(self, u8 **, 0x44), s16 *, 0x80));
    for (; i < lbl_8049416C; i++) {
        fn_8007BE9C(self + 0xF4 + i * 0x19C);
    }
    if (M2C_FIELD(self, void **, 0xFE8) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0xFE8));
        M2C_FIELD(self, void **, 0xFE8) = NULL;
    }
    lbl_8049416C = 0;
}

void fn_80075F04(s32 arg0) {
    extern s32 lbl_8049416C;
    extern void *fn_8007BB94(s32, s32);
    extern s32 fn_80078160(s32);
    s32 i;
    s32 j;
    void *p;
    void *q;

    for (i = 0; i < lbl_8049416C; i++) {
        for (j = 0; (p = fn_8007BB94(i * 0x19C + arg0 + 0x170, j)) != NULL; j++) {
            q = M2C_FIELD(p, void **, 0x7C);
            if (q != NULL) {
                q = M2C_FIELD(q, void **, 0x38);
                if (!(M2C_FIELD(q, u16 *, 0xB6) & 8)) {
                    M2C_FIELD(p, s32 *, 0x94) = fn_80078160(M2C_FIELD(q, s32 *, 0x1C));
                }
            }
        }
    }
}

void fn_80076E18(void *arg0) {
    extern void fn_80305EE0(void *, s32);
    fn_80305EE0(arg0, 1);
}

void fn_80076E3C(void *arg0) {
    extern void fn_80305FE0(void *, s32);
    fn_80305FE0(arg0, 1);
}

void fn_800775F0(void) {

}

void fn_800775F4(u8 *arg0, s32 arg1) {
    extern s32 lbl_8049416C;
    extern void *fn_8007C370(void *, s32);
    s32 found;
    s32 i;
    void *r;

    found = 0;
    for (i = 0; i < lbl_8049416C && !found; i++) {
        if (i > 2) {
            r = fn_8007C370(arg0 + 0xF4 + i * 0x19C, arg1);
            if (r != NULL) {
                M2C_FIELD(r, s32 *, 0x94) = 0;
                found = 1;
            }
        }
    }
}

void fn_80077678(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xFE4) != 0) {
        M2C_FIELD(arg0, s8 *, 0xF80) = 2;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0xF80) = 1;
}

void fn_80077EDC(void *arg0) {
    void fn_8000AA2C();
    extern u8 lbl_803CA3C0[];
    extern s32 lbl_8041FA1C[];

    if (M2C_FIELD(arg0, void **, 0xF70) != NULL) {
        u8 *obj;
        fn_8000AA2C(lbl_8041FA1C[0], lbl_803CA3C0, 0, 0, 0);
        obj = M2C_FIELD(arg0, u8 **, 0xF70);
        if (obj != NULL) {
            u8 *vt = *(u8 **)(obj + 0x44);
            (*(void (**)(void *, s32))(vt + 0xc))(obj + *(s16 *)(vt + 8), 3);
        }
        M2C_FIELD(arg0, void **, 0xF70) = NULL;
    }
}

void fn_80077F64(s32 arg0) {
    M2C_UNK fn_8007C278(s32);
    s32 var_r30;
    s32 var_r31;

    var_r31 = arg0 + 0xF4;
    var_r30 = 8;
    do {
        fn_8007C278(var_r31);
        var_r31 += 0x19C;
        var_r30 -= 1;
    } while (var_r30 != 0);
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DBBCC(void *, u32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_80248488(void *, s32, u32);
void *fn_80078078(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        heap = NULL;
    } else {
        p = fn_802D197C(heap, size, 4);
        if (p == NULL && (p = fn_802DBBCC(heap, size, 0)) == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            heap = fn_802DBBCC(fn_802D0B3C(), size, 0);
        } else {
            heap = p;
        }
    }
    fn_80248488(heap, 0, size);
    return heap;
}

void fn_80078124(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80078158(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1230) = arg1;
}

s32 fn_80078160(s32 arg0) {
    return 0;
}

void *fn_80078168(void *self) {
    extern const f32 lbl_803CA64C[];
    extern const f32 lbl_803CA650[];
    extern u8 lbl_80409688[];
    extern void fn_803059C8(void *, f32, s32, s32, f32, f32);
    extern void fn_8007BBF8(void *);
    extern void fn_8039C398(void *);
    M2C_UNK fn_800F6FB4(s32, s32, M2C_UNK);
    extern void fn_80078348(void *);
    u8 *p;
    s32 i;

    fn_803059C8(self, lbl_803CA64C[0], -1, 0, lbl_803CA650[0], lbl_803CA650[0]);
    p = (u8 *)self + 0xF4;
    M2C_FIELD(self, u8 **, 0x44) = lbl_80409688;
    for (i = 8; i != -1; i--) {
        fn_8007BBF8(p);
        p += 0x19C;
    }
    fn_8039C398((u8 *)self + 0xFE4);
    fn_800F6FB4((s32)self + 0x1008, (s32)self + 0x1010, 0x100);
    M2C_FIELD(self, s32 *, 0xFE0) = 0;
    fn_80078348(self);
    return self;
}

void fn_80078840(void *self);
void fn_80078208(void *self, s32 flags) {
    extern u8 lbl_80409688[];
    extern void fn_80305AB0(void *, s32);
    u8 *p;

    M2C_FIELD(self, u8 **, 0x44) = lbl_80409688;
    fn_80078840(self);
    if ((u8 *)self + 0xF4 != NULL) {
        p = (u8 *)self + 0xF70;
        while ((u8 *)self + 0xF4 != p) {
            p -= 0x19C;
            M2C_FIELD(M2C_FIELD(p, u8 **, 0x44), void (**)(void *, s32), 0xC)(p + M2C_FIELD(M2C_FIELD(p, u8 **, 0x44), s16 *, 8), 0);
        }
    }
    fn_80305AB0(self, 0);
    if (flags & 1) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), self);
    }
}

void *fn_800782A4(void *arg0, void *arg1) {
    extern void *fn_8016CC44(void *);
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern void *fn_8007B398(M2C_UNK);
    extern void fn_80304B30(void *, u32);
    extern void fn_80304BE4(void *, u32);
    void *a;
    void *b;
    void *c;
    void *obj;
    void *info;
    u32 id;

    id = 0;
    a = M2C_FIELD(arg1, void **, 0x38);
    b = fn_8016CC44(arg1);
    c = M2C_FIELD(b, void **, 0x38);
    obj = fn_8007B398(fn_802D1FC8(0x98));
    M2C_FIELD(obj, void **, 0x7C) = b;
    M2C_FIELD(obj, void **, 0x80) = arg1;
    info = M2C_FIELD(c, void **, 0xC0);
    if (info != NULL) {
        id = M2C_FIELD(info, u32 *, 0x1C);
    }
    if (id == 0) {
        id = M2C_FIELD(M2C_FIELD(a, void **, 0xC0), u32 *, 0x1C);
        if (id == 0) {
            id = 0xD59C7BB5;
        }
    }
    fn_80304B30(obj, id);
    fn_80304BE4(obj, id);
    return obj;
}

void fn_80078840(void *self) {
    extern void fn_8007B124(void *);
    extern void fn_8007BE9C(void *);
    extern void fn_8031EA2C(void *);
    extern s32 lbl_80494198;
    s32 i;

    fn_8007B124(self);
    M2C_FIELD(M2C_FIELD(self, u8 **, 0x44), void (**)(void *), 0x84)((u8 *)self + M2C_FIELD(M2C_FIELD(self, u8 **, 0x44), s16 *, 0x80));
    for (i = 0; i < lbl_80494198; i++) {
        fn_8007BE9C((u8 *)self + 0xF4 + i * 0x19C);
    }
    if (M2C_FIELD(self, void **, 0xFE0) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0xFE0));
        M2C_FIELD(self, void **, 0xFE0) = NULL;
    }
    lbl_80494198 = 0;
}

void fn_80079A88(s32 arg0) {
    extern s32 lbl_80494198;
    extern void *fn_8007BB94(s32, s32);
    extern s32 fn_80078160(s32);
    s32 i;
    s32 j;
    void *p;
    void *q;

    for (i = 0; i < lbl_80494198; i++) {
        for (j = 0; (p = fn_8007BB94(i * 0x19C + arg0 + 0x170, j)) != NULL; j++) {
            q = M2C_FIELD(p, void **, 0x7C);
            if (q != NULL) {
                q = M2C_FIELD(q, void **, 0x38);
                if (!(M2C_FIELD(q, u16 *, 0xB6) & 8)) {
                    M2C_FIELD(p, s32 *, 0x94) = fn_80078160(M2C_FIELD(q, s32 *, 0x1C));
                }
            }
        }
    }
}

void fn_8007A888(void *arg0) {
    extern void fn_80305EE0(void *, s32);
    fn_80305EE0(arg0, 1);
}

void fn_8007A8AC(void *arg0) {
    extern void fn_80305FE0(void *, s32);
    fn_80305FE0(arg0, 1);
}

void fn_8007AC00(s32 arg0, s32 arg1) {
    extern s32 lbl_80494198;
    extern void fn_803074F0(s32, s32, s32);
    s32 i;

    M2C_FIELD(arg0, s32 *, 0xFDC) = arg1;
    for (i = 0; i < lbl_80494198; i++) {
        fn_803074F0(arg0 + 0x170 + i * 0x19C, 4, arg1 != 1 ? 1 : 0);
    }
}

void fn_8007AC7C(s32 arg0, s32 arg1) {
    extern s32 lbl_80494198;
    extern void *fn_8007C370(s32, s32);
    s32 found;
    s32 i;
    void *r;

    found = 0;
    for (i = 0; i < lbl_80494198 && !found; i++) {
        r = fn_8007C370(arg0 + 0xF4 + i * 0x19C, arg1);
        if (r != NULL) {
            M2C_FIELD(r, s32 *, 0x94) = 0;
            found = 1;
        }
    }
}

void fn_8007ACF8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xFDC) != 0) {
        M2C_FIELD(arg0, s8 *, 0xF7C) = 2;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0xF7C) = 1;
}

void fn_8007B124(void *arg0) {
    void fn_8000AA2C();
    extern u8 lbl_803CA88C[];
    extern s32 lbl_8041FA1C[];

    if (M2C_FIELD(arg0, void **, 0xF70) != NULL) {
        u8 *obj;
        fn_8000AA2C(lbl_8041FA1C[0], lbl_803CA88C, 0, 0, 0);
        obj = M2C_FIELD(arg0, u8 **, 0xF70);
        if (obj != NULL) {
            u8 *vt = *(u8 **)(obj + 0x44);
            (*(void (**)(void *, s32))(vt + 0xc))(obj + *(s16 *)(vt + 8), 3);
        }
        M2C_FIELD(arg0, void **, 0xF70) = NULL;
    }
}

void fn_8007B1AC(s32 arg0) {
    M2C_UNK fn_8007C278(s32);
    s32 var_r30;
    s32 var_r31;

    var_r31 = arg0 + 0xF4;
    var_r30 = 9;
    do {
        fn_8007C278(var_r31);
        var_r31 += 0x19C;
        var_r30 -= 1;
    } while (var_r30 != 0);
}

void *fn_8007B2B0(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        heap = NULL;
    } else {
        p = fn_802D197C(heap, size, 4);
        if (p == NULL && (p = fn_802DBBCC(heap, size, 0)) == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            heap = fn_802DBBCC(fn_802D0B3C(), size, 0);
        } else {
            heap = p;
        }
    }
    fn_80248488(heap, 0, size);
    return heap;
}

void fn_8007B35C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8007B390(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1224) = arg1;
}

extern u8 lbl_80409910[];
extern void fn_80304AB4(void *);
void fn_8007B80C(u8 *self) {
    *(u8 **)(self + 0x44) = lbl_80409910;
    fn_80304AB4(self);
}

void fn_8007B83C(void *self, s32 arg1) {
    extern void fn_803052AC(void *, s32, s32);
    u8 tmp[0x20];
    if (M2C_FIELD(self, s32 *, 0x88) == 1) {
        fn_803052AC(self, arg1, 0);
    } else {
        fn_803052AC(self, arg1, -1);
    }
}

s32 fn_8007B878(void *self) {
    extern void **lbl_8041FA50[];
    void **t = lbl_8041FA50[0];
    s32 *p;
    s32 r = 0;

    switch ((u32)M2C_FIELD(self, s32 *, 0x88)) {
    case 0:
        p = M2C_FIELD(self, s32 **, 0x8C);
        goto check;
    case 1:
        p = M2C_FIELD(self, s32 **, 0x90);
    check:
        if (p != NULL) {
            r = *p;
        }
        break;
    case 2:
        r = 0x46;
        break;
    case 3:
        r = M2C_FIELD(M2C_FIELD(*t, void **, 0), s32 *, 4);
        break;
    case 4:
        r = M2C_FIELD(M2C_FIELD(*t, void **, 4), s32 *, 4);
        break;
    case 5:
        r = M2C_FIELD(M2C_FIELD(*t, void **, 8), s32 *, 4);
        break;
    case 6:
        r = M2C_FIELD(M2C_FIELD(M2C_FIELD(self, void **, 0x7C), void **, 0x38), s16 *, 0x24);
        break;
    }
    return r;
}

s32 fn_8007B92C(void *self) {
    void *p = M2C_FIELD(self, void **, 0x7c);
    if (p != NULL) {
        return M2C_FIELD(M2C_FIELD(p, void **, 0x38), s32 *, 0x1c);
    }
    return 0;
}

void *fn_8007B94C(void *self, s32 arg1, s32 arg2) {
    extern void fn_803082CC(void *, s32, s32, s32, s32, s32);
    extern u8 lbl_80409818[];
    fn_803082CC(self, arg1, arg2, -1, -1, 1);
    M2C_FIELD(self, u8 **, 0x44) = lbl_80409818;
    return self;
}

void fn_8007B994(void *self, s32 flags) {
    extern void fn_8031EA2C(void *);
    extern void fn_8030834C(void *, s32);
    extern u8 lbl_80409818[];
    M2C_FIELD(self, u8 **, 0x44) = lbl_80409818;
    if (M2C_FIELD(self, void **, 0xf8) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0xf8));
    }
    if (M2C_FIELD(self, void **, 0xfc) != NULL) {
        fn_8031EA2C(M2C_FIELD(self, void **, 0xfc));
    }
    M2C_FIELD(self, void **, 0xfc) = NULL;
    M2C_FIELD(self, void **, 0xf8) = NULL;
    fn_8030834C(self, flags);
}

void fn_8007BA04(void *self) {
    u8 *obj = M2C_FIELD(self, u8 **, 0x10c);
    u8 *vt = M2C_FIELD(obj, u8 **, 0x44);
    (*(void (**)(void *))(vt + 0x3C))(obj + *(s16 *)(vt + 0x38));
}

void fn_8007BB0C(void) {
    fn_80308518();
}

void fn_8007BB2C(void) {
    fn_8030861C();
}

s32 fn_8007BB4C(s32 arg0) {
    void *n = *(void **)arg0;
    s32 found = 0;
    void *res = NULL;

    while (!found && n != NULL) {
        void *d = M2C_FIELD(n, void **, 0);
        if (M2C_FIELD(d, u32 *, 0x18) & 8) {
            res = d;
            found = 1;
        }
        n = M2C_FIELD(n, void **, 8);
    }
    return (s32)res;
}

void *fn_8007BB94(s32 arg0, s32 idx) {
    void *n;
    s32 i = 0;
    void *result = NULL;
    for (n = *(void **)arg0; n != NULL; n = M2C_FIELD(n, void **, 0x8), i++) {
        void *v = M2C_FIELD(n, void **, 0x0);
        if (i >= idx) {
            result = v;
            break;
        }
    }
    return result;
}

void fn_8007BBDC(void **arg0) {
    void *var_r3;

    var_r3 = *arg0;
    if (var_r3 != NULL) {
        do {
            var_r3 = M2C_FIELD(var_r3, void **, 8);
        } while (var_r3 != NULL);
    }
}

void fn_8007BCB4(void *self, s32 flags) {
    extern u8 lbl_80409780[];
    extern void fn_8007BE9C(void *);
    M2C_UNK fn_802CB8D4(s32 *);
    M2C_FIELD(self, u8 **, 0x44) = lbl_80409780;
    fn_8007BE9C(self);
    fn_802CB8D4((s32 *)((u8 *)self + 0x18c));
    fn_8007B994((u8 *)self + 0x7c, 2);
    ((void (*)(void *, s32))fn_80304AB4)(self, 0);
    if (flags & 1) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), self);
    }
}

void fn_8007BF30(void *self) {
    extern void fn_80308448(void *);
    s32 flags = M2C_FIELD(self, s32 *, 0x18);
    s32 unused[4];
    if (flags & 2) {
        if (flags & 8) {
            fn_80308448((u8 *)self + 0x7c);
        }
    }
}

void fn_8007BF68(void *self) {
    extern void fn_8007BA3C(void *);
    s32 flags = M2C_FIELD(self, s32 *, 0x18);
    if (flags & 4) {
        if (flags & 8) {
            fn_8007BA3C((u8 *)self + 0x7c);
        }
    }
}

void fn_8007BFA0(void *self, s32 id) {
    void *n;
    s32 found = 0;
    void *obj;
    void *vt;

    n = M2C_FIELD(self, void **, 0x18C);
    if (n != NULL) {
        do {
            if (M2C_FIELD(n, s32 *, 0x0) == id) {
                found = 1;
            }
            n = M2C_FIELD(n, void **, 0x8);
        } while (!found && n != NULL);
    }
    if (found) {
        obj = M2C_FIELD(self, void **, 0xC);
        vt = M2C_FIELD(obj, void **, 0x44);
        M2C_FIELD(vt, void (**)(void *, s32, s32), 0x3C)((u8 *)obj + M2C_FIELD(vt, s16 *, 0x38), id, M2C_FIELD(self, s32 *, 0x198));
    }
}

void fn_8007C01C(void *self, s32 arg1, s32 arg2) {
    extern u8 lbl_80407900[];
    extern void fn_80304B30(void *, s32);
    struct T { s32 a; s32 b; s32 c; s32 d; void *vt; } tmp;
    struct T *dst;
    void *save[1];
    void *vt;

    tmp.vt = lbl_80407900;
    tmp.a = 1;
    tmp.d = 1;
    tmp.b = -1;
    tmp.c = 0;
    dst = (struct T *)((u8 *)self + 0x48);
    save[0] = dst->vt;
    *dst = tmp;
    dst->vt = save[0];
    tmp.vt = lbl_80407900;
    vt = M2C_FIELD(self, void **, 0x44);
    M2C_FIELD(vt, void (**)(void *), 0x34)((u8 *)self + M2C_FIELD(vt, s16 *, 0x30));
    fn_80304B30(self, arg2);
}

void *fn_8007C0D4(void *arg0, s32 arg1) {
    void *n = M2C_FIELD(arg0, void **, 0x18C);
    s32 found = 0;
    void *res = NULL;

    while (!found && n != NULL) {
        void *d = M2C_FIELD(n, void **, 0);
        if (arg1 == M2C_FIELD(d, s32 *, 0x7C)) {
            res = d;
            found = 1;
        }
        n = M2C_FIELD(n, void **, 8);
    }
    return res;
}

void fn_8007C118(void *arg0, void *arg1) {
    extern const f32 lbl_803CAAB0[];
    extern void fn_803083F4(void *, s32, f32 *);
    extern void fn_802CB69C(void *, void *);
    f32 v[3];
    f32 *p = v;

    p[2] = lbl_803CAAB0[0];
    p[1] = lbl_803CAAB0[0];
    v[0] = lbl_803CAAB0[0];
    fn_803083F4((char *)arg0 + 0x7C, (s32)arg1, p);
    fn_802CB69C((char *)arg0 + 0x18C, arg1);
}

void fn_8007C174(void *arg0, void *arg1) {
    extern void fn_802CB7B4(void *, void *, void *);
    extern void fn_802CB69C(void *, void *);
    void *n = M2C_FIELD(arg0, void **, 0x18C);
    s32 found = 0;

    while (!found && n != NULL) {
        u32 a = fn_8007B878(M2C_FIELD(n, void **, 0));
        if (a >= (u32)fn_8007B878(arg1)) {
            fn_802CB7B4((char *)arg0 + 0x18C, n, arg1);
            found = 1;
        }
        n = M2C_FIELD(n, void **, 8);
    }
    if (!found) {
        fn_802CB69C((char *)arg0 + 0x18C, arg1);
    }
}

void fn_8007C208(u8 *self) {
    extern const f32 lbl_803CAAB4[];
    extern void fn_803083F4(void *, s32, f32 *);
    u8 *node;
    f32 v[3];
    f32 *p;

    for (node = *(u8 **)(self + 0x18C); node != NULL; node = *(u8 **)(node + 8)) {
        s32 key = *(s32 *)node;
        f32 c = lbl_803CAAB4[0];
        p = v;
        p[2] = c;
        p[1] = c;
        p[0] = c;
        fn_803083F4(self + 0x7C, key, p);
    }
}

void fn_8007C300(void) {
    extern char lbl_8045BA40[];
    extern s32 lbl_8049669C;
    s32 fn_8033740C(void *, u32, s32, s32);
    lbl_8049669C = fn_8033740C(lbl_8045BA40, 0xBFA964D1, 0, 0);
}

void fn_8007C33C(void) {
    extern s32 lbl_8049669C;
    void fn_8031EA2C(s32);
    if (lbl_8049669C != 0) {
        fn_8031EA2C(lbl_8049669C);
        lbl_8049669C = 0;
    }
}

void *fn_8007C370(void *self, s32 id) {
    s32 fn_8007B92C(void *);
    void **node = M2C_FIELD(self, void ***, 0x18C);
    s32 found = 0;
    void *item = NULL;
    while (!found && node != NULL) {
        item = node[0];
        if (fn_8007B92C(item) == id) {
            found = 1;
        }
        node = node[2];
    }
    if (found) {
        return item;
    }
    return NULL;
}

s32 fn_8007C3E8(void *arg0) {
    void *n = M2C_FIELD(arg0, void **, 0x18C);
    s32 found = 0;
    s32 i = 0;

    for (; n != NULL; n = M2C_FIELD(n, void **, 8), i++) {
        void *d = M2C_FIELD(n, void **, 0);
        if (M2C_FIELD(d, u32 *, 0x18) & 8) {
            found = 1;
            break;
        }
    }
    if (found) {
        return i;
    }
    return -1;
}

void fn_8007C42C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
}

void fn_8007C434(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
}

void fn_8007C43C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
}

s32 fn_8007C444(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x7C);
}

s32 fn_8007C44C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

s32 fn_8007C454(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_8007C45C(void *arg0, s32 arg1) {
    return arg1 == M2C_FIELD(arg0, s32 *, 0x7C);
}

s32 fn_8007C470(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

s32 fn_8007C478(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_8007C480(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

s32 fn_8007C488(void) {
    return 0;
}

void fn_8007C490(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x94) = arg1;
}

void fn_8007C498(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10C) = arg1;
}

void *fn_8007C4A0(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        heap = NULL;
    } else {
        p = fn_802D197C(heap, size, 4);
        if (p == NULL && (p = fn_802DBBCC(heap, size, 0)) == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            heap = fn_802DBBCC(fn_802D0B3C(), size, 0);
        } else {
            heap = p;
        }
    }
    fn_80248488(heap, 0, size);
    return heap;
}

void fn_8007C54C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8007C580(s32 arg0) {
    M2C_UNK fn_803074F0(s32);
    fn_803074F0(arg0 + 0x7C);
}

void fn_8007C5A4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x198) = arg1;
}

void fn_8007C5AC(s32 arg0) {
    M2C_UNK fn_8007BB4C(s32);
    fn_8007BB4C(arg0 + 0x7C);
}

void fn_8007C5D0(s32 arg0) {
    extern void *fn_8007BB94(s32, s32);
    ((M2C_UNK (*)(s32))fn_8007BB94)(arg0 + 0x7C);
}

void fn_8007C5F4(s32 arg0) {
    fn_8007BBDC(arg0 + 0x7C);
}

void fn_8007C618(s32 arg0) {
    M2C_UNK fn_80308518(s32);
    fn_80308518(arg0 + 0x7C);
}

void fn_8007C63C(s32 arg0) {
    M2C_UNK fn_8030861C(s32);
    fn_8030861C(arg0 + 0x7C);
}

void fn_8007C660(s32 arg0) {
    M2C_UNK fn_802CB994(s32);
    fn_802CB994(arg0 + 0x18C);
}

void fn_8007F894(void) {
    s32 fn_801D7E6C();
    M2C_UNK fn_801D841C(s32, M2C_UNK);
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494600;
    if ((s32) lbl_80494600 == 0) {
        fn_802D1FC8(0x78);
        lbl_80494600 = fn_801D7E6C();
    }
    fn_801D841C(lbl_80494600, 0x3804219F);
}

void fn_800816B0(void) {

}

void fn_80081790(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1A28) = arg1;
}

s32 fn_80081798(void) {
    M2C_UNK fn_800817BC();
    fn_800817BC();
    return 0;
}

s32 fn_800817BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1A40) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A44) = 0;
    return 0;
}

s32 fn_800817D4(void) {
    void *fn_80081808();
    s32 var_r0;
    void *temp_r3;

    temp_r3 = fn_80081808();
    var_r0 = 0;
    if (temp_r3 != NULL) {
        var_r0 = M2C_FIELD(temp_r3, s32 *, 8);
    }
    return var_r0;
}

void fn_80081A14(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1A38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1A48) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A3C) - arg1);
}

void fn_80081A28(void *arg0) {
    void fn_80081024(void *);
    u8 c;
    s32 idx;
    void **arr;

    if (M2C_FIELD(arg0, s32 *, 0x1A3C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1A3C) -= 1;
    }
    c = M2C_FIELD(arg0, u8 *, 0x1A3F);
    M2C_FIELD(arg0, u8 *, 0x198E) = c;
    idx = (s8)c;
    if (idx != -1) {
        arr = (void **)((u8 *)arg0 + 0x18A4);
        if (arr[idx] == NULL) {
            fn_800816B0();
        } else {
            fn_80081024(arg0);
        }
    }
}

void fn_80081A8C(void *arg0) {
    void fn_80081024(void *);
    s32 idx;
    u8 c;
    void **arr;

    if (M2C_FIELD(arg0, s32 *, 0x1A40) - 1 != M2C_FIELD(arg0, s32 *, 0x1A3C)) {
        M2C_FIELD(arg0, s32 *, 0x1A3C) = M2C_FIELD(arg0, s32 *, 0x1A3C) + 1;
    }
    c = M2C_FIELD(arg0, u8 *, 0x1A3F);
    idx = (s8)c;
    M2C_FIELD(arg0, u8 *, 0x198E) = c;
    if (idx != -1) {
        arr = (void **)((u8 *)arg0 + 0x18A4);
        if (arr[idx] == NULL) {
            ((void (*)(void *))fn_800816B0)(arg0);
        } else {
            fn_80081024(arg0);
        }
    }
}

void *fn_80081AF8(void *arg0) {
    struct { u8 pad[0xA0]; void *arr[1]; } *self = arg0;
    s8 idx = M2C_FIELD(arg0, s8 *, 0x198E);
    if (idx == -1) {
        return NULL;
    }
    return self->arr[idx];
}

void *fn_80081CC0(u32 size) {
    void *p = PlumbBob_AllocAligned(size);

    fn_80248488(p, 0, size);
    return p;
}

void fn_80081D84(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80081DB8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C4) = arg1;
}

void fn_80081DC0(void *arg0, s32 arg1) {
    M2C_UNK fn_800BD804(s32, s32, M2C_UNK);
    fn_800BD804(arg1, arg0 + 0x164, 1);
    M2C_FIELD(arg0, s32 *, 0x160) = arg1;
}

void fn_80081E00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x36C) = arg1;
}

void fn_80081E08(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x370) = arg1;
}

s32 fn_80081E10(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x36C);
}

s32 fn_800826F8(void *arg0) {
    s32 t = *M2C_FIELD(arg0, s32 **, 0x48);
    if (t == 9 || t == 0xB) {
    }
}

void fn_80087D64(s32 arg0) {
    void fn_8000AA2C();
    extern u8 lbl_803CB0C8[];
    extern u8 lbl_803CB0D0[];
    extern u8 lbl_803CB0D4[];
    extern s32 lbl_8041FA1C[];

    fn_8000AA2C(lbl_8041FA1C[0], lbl_803CB0C8, 0, 0, 1, arg0 ? lbl_803CB0D0 : lbl_803CB0D4);
}

void fn_80087DC0(s32 arg0) {
    void fn_8000AA2C();
    extern u8 lbl_803CB0D8[];
    extern u8 lbl_803CB0D0[];
    extern u8 lbl_803CB0D4[];
    extern s32 lbl_8041FA1C[];

    fn_8000AA2C(lbl_8041FA1C[0], lbl_803CB0D8, 0, 0, 1, arg0 ? lbl_803CB0D0 : lbl_803CB0D4);
}

void fn_80087E1C(s32 arg0) {
    void fn_8000AA2C();
    extern u8 lbl_803CB0E4[];
    extern u8 lbl_803CB0D0[];
    extern u8 lbl_803CB0D4[];
    extern s32 lbl_8041FA1C[];

    fn_8000AA2C(lbl_8041FA1C[0], lbl_803CB0E4, 0, 0, 1, arg0 ? lbl_803CB0D0 : lbl_803CB0D4);
}

void fn_80087E78(s32 arg0) {
    void fn_8000AA2C();
    extern u8 lbl_803CB0F0[];
    extern u8 lbl_803CB0D0[];
    extern u8 lbl_803CB0D4[];
    extern s32 lbl_8041FA1C[];

    fn_8000AA2C(lbl_8041FA1C[0], lbl_803CB0F0, 0, 0, 1, arg0 ? lbl_803CB0D0 : lbl_803CB0D4);
}

void fn_8008824C(void *arg0) {
    void fn_80088278(void *);
    if (M2C_FIELD(arg0, s32 *, 0x18) & 2) {
        fn_80088278(arg0);
    }
}

f32 fn_8008940C(void *arg0) {
    extern f32 lbl_803CBCF8[];
    f32 v[3];
    f32 *p = v;
    f32 r;

    r = lbl_803CBCF8[0];
    v[0] = r;
    p[1] = r;
    p[2] = v[0];
    if (M2C_FIELD(arg0, s32 *, 0x18) & 2) {
        r = M2C_FIELD(arg0, f32 *, 0xC8);
    }
    return r;
}

void *fn_80089558(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        heap = NULL;
    } else {
        p = fn_802D197C(heap, size, 4);
        if (p == NULL && (p = fn_802DBBCC(heap, size, 0)) == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            heap = fn_802DBBCC(fn_802D0B3C(), size, 0);
        } else {
            heap = p;
        }
    }
    fn_80248488(heap, 0, size);
    return heap;
}

void fn_80089604(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80089638(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xBC) = arg1;
}

void fn_80089640(f32 arg0) {
    extern f32 lbl_804966A0;
    lbl_804966A0 = arg0;
}

f32 fn_80089648(void) {
    extern f32 lbl_804966A0;
    return lbl_804966A0;
}

static inline void Vec3_Set(f32 *v, f32 x, f32 y, f32 z) {
    v[2] = z;
    v[1] = y;
    v[0] = x;
}

extern f32 lbl_803CBD00[];
static inline void Mtx34_Zero(f32 *m) {
    f32 z = lbl_803CBD00[0];
    Vec3_Set(m, z, z, z);
    Vec3_Set(m + 3, z, z, z);
    Vec3_Set(m + 6, z, z, z);
    m[9] = z;
    m[10] = z;
    m[11] = z;
}

void fn_80089650(f32 *arg0) {
    extern f32 lbl_803CBD00[];
    f32 z = lbl_803CBD00[0];
    Vec3_Set(arg0, z, z, z);
    Vec3_Set(arg0 + 3, z, z, z);
    Vec3_Set(arg0 + 6, z, z, z);
    Vec3_Set(arg0 + 9, z, z, z);
}

extern void fn_802D20E8(void *);
void fn_80089698(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

u8 *fn_80089BF4(u8 *self) {
    extern u8 lbl_80409BC0[];
    extern u8 lbl_8041F94C[];
    extern u8 lbl_8045B634[];
    extern f32 lbl_803CBF6C[];
    extern f32 lbl_803CBF70[];
    extern void fn_802E1BF4(void *);
    extern void fn_8008A3B8(void *);
    extern s32 fn_80049BFC(void *);
    extern void *fn_8033740C(void *, s32, s32, s32);
    extern void fn_80320680(void *, s32, f32, f32);
    extern void fn_803233D4(void *);
    void *r;
    f32 a, b;
    *(u8 **)(self + 0x478) = lbl_80409BC0;
    fn_802E1BF4(self + 0x120);
    fn_8008A3B8(self);
    *(void **)(self + 0x470) = 0;
    r = fn_8033740C(lbl_8045B634, fn_80049BFC(lbl_8041F94C), 0, 0);
    a = lbl_803CBF6C[0];
    b = lbl_803CBF70[0];
    *(void **)(self + 0x470) = r;
    fn_80320680(r, 1, a, b);
    fn_803233D4(*(void **)(self + 0x470));
    *(s16 *)(self + 0x474) = -1;
    return self;
}

void fn_80089C98(void **self, s32 flags) {
    extern u8 lbl_80409BC0[];
    extern void fn_8031EA2C(void *);
    extern void fn_80309AE0(void *, s32);
    extern void *fn_802D0AB8();
    extern void fn_802D1A00(void *, void *);
    self[0x11E] = lbl_80409BC0;
    if (self[0x11C] != 0) {
        fn_8031EA2C(self[0x11C]);
        self[0x11C] = 0;
    }
    fn_80309AE0(self + 0x48, 0);
    if (flags & 1) {
        fn_802D1A00(fn_802D0AB8(), self);
    }
}

void fn_8008A398(void) {
    fn_8008A3B8();
}

void fn_8008A3B8(void *arg0) {
    extern f32 lbl_803CBFCC[];
    f32 z = lbl_803CBFCC[0];
    M2C_FIELD(arg0, s32 *, 0x0) = 0;
    M2C_FIELD(arg0, s32 *, 0x4) = 0;
    M2C_FIELD(arg0, s32 *, 0x8) = 1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    M2C_FIELD(arg0, f32 *, 0x114) = z;
    M2C_FIELD(arg0, f32 *, 0x118) = z;
}

void *fn_8008A628(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

void fn_8008A6D4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8008A708(s32 *self) {
    return *self;
}

void fn_8008A710(PBStack *stk, void *obj) {
    PBStackEntry *e;
    if (stk->n > 3) {
        return;
    }
    e = &stk->e[stk->n];
    e->w = M2C_FIELD(obj, s32 *, 0x17C);
    e->v = *(PBVec3 *)((u8 *)obj + 0x110);
    stk->n++;
}

void fn_8008A75C(PBStack *stk, void *obj) {
    PBStackEntry *e;
    if (stk->n == 0) {
        return;
    }
    stk->n--;
    e = &stk->e[stk->n];
    M2C_FIELD(obj, s32 *, 0x17C) = e->w;
    *(PBVec3 *)((u8 *)obj + 0x110) = e->v;
}

void fn_8008A7A4(s32 *arg0) {
    *arg0 = 0;
}

void fn_8008A7B0(s32 arg0, s32 arg1) {
    M2C_UNK fn_8008BCC8(s32, s32);
    fn_8008BCC8(arg1, arg0);
}

void fn_8008AAA0(void *arg0);
void fn_8008A9A4(void) {
    extern void *lbl_804966A4;
    extern void *lbl_804966A8;
    extern u8 lbl_8041F94C[];
    void *fn_802D1FC8(s32);
    void *fn_8008A7DC(void *);
    void fn_8008B374(void *, s32);
    s32 fn_80049B6C(void *);
    void **p;
    void *v;

    if (lbl_804966A4 == NULL) {
        lbl_804966A4 = fn_8008A7DC(fn_802D1FC8(0x220));
        if (lbl_804966A4 != NULL) {
            fn_8008B374(lbl_804966A4, 0);
        }
    }
    if (lbl_804966A8 == NULL && fn_80049B6C(lbl_8041F94C) != 0) {
        lbl_804966A8 = fn_8008A7DC(fn_802D1FC8(0x220));
        if (lbl_804966A8 != NULL) {
            fn_8008B374(lbl_804966A8, 1);
        }
    }
    p = &lbl_804966A4;
    do {
        v = *p++;
        if (v != NULL) {
            fn_8008AAA0(v);
        }
    } while ((s32)p <= (s32)&lbl_804966A8);
}

void fn_8008AA58(void) {
    extern void *lbl_804966A4;
    extern void *lbl_804966A8;
    void fn_8008AB4C(void *);
    void **p;
    void *v;

    p = &lbl_804966A4;
    do {
        v = *p++;
        if (v != NULL) {
            fn_8008AB4C(v);
        }
    } while ((s32)p <= (s32)&lbl_804966A8);
}

void fn_8008AAA0(void *arg0) {
    void fn_8008B208(void *, u32);
    void fn_8008AC18(void *, u32);
    if (M2C_FIELD(arg0, s32 *, 0x15C) == 0) {
        fn_8008B208(arg0, 0x6D1F0956);
        fn_8008AC18(arg0, 0x73A1B85A);
        fn_8008AC18(arg0, 0x83A20A04);
    }
}

void fn_8008AB00(void *arg0, s32 arg1) {
    void fn_8008B070(void *, s32);

    M2C_FIELD(arg0, s32 *, 0x218) = arg1;
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x214) = M2C_FIELD(arg0, s32 *, 0x210);
        fn_8008B070(arg0, 0);
    } else {
        fn_8008B070(arg0, M2C_FIELD(arg0, s32 *, 0x214));
    }
}

void fn_8008AB4C(void *arg0) {
    void fn_8031EA2C(void *);
    void fn_8008AFC0(void *);
    struct { char pad[0x15C]; void *a; s32 an; void *b; s32 bn; char pad2[0x10]; s32 x; s32 y; } *self = arg0;

    PlumbBob_ResetRef(&self->y);
    if (self->a != NULL) {
        fn_8031EA2C(self->a);
        self->a = NULL;
        self->an = 0;
    }
    if (self->b != NULL) {
        fn_8031EA2C(self->b);
        self->bn = 0;
        self->b = NULL;
    }
    fn_8008AFC0(arg0);
}

void fn_8008ABBC(s32 arg0, s32 arg1) {
    void fn_8008AB4C();
    s32 temp_r0;
    s32 var_r9;

    fn_8008AB4C();
    temp_r0 = arg0 + 0x184;
    if (temp_r0 != 0) {
        var_r9 = arg0 + 0x1C4;
        if (temp_r0 != var_r9) {
            do {
                var_r9 -= 0x10;
            } while (temp_r0 != var_r9);
        }
    }
    fn_80089698(arg0, arg1);
}

void fn_8008AFC0(void *arg0) {
    void fn_8030AC1C(void *, s32, s32);
    struct { char pad[0x200]; void **arr[2]; s32 count; } *self = arg0;
    s32 i;

    for (i = 0; i < self->count; i++) {
        if (self->arr[i] != NULL) {
            void **v;
            fn_8030AC1C(self->arr[i], 0x4000, 1);
            fn_8030AC1C(self->arr[i], 8, 1);
            v = self->arr[i];
            if (v != NULL) {
                char *vt = (char *)*v;
                (*(void (**)(void *, s32))(vt + 0x34))((char *)v + *(s16 *)(vt + 0x30), 3);
            }
            self->arr[i] = NULL;
        }
    }
    self->count = 0;
}

void fn_8008B070(char *self, s32 arg1) {
    extern void fn_8030AC1C(void *, s32, s32);
    s32 i;

    for (i = 0; i < *(s32 *)(self + 0x208); i++) {
        fn_8030AC1C(((void **)(self + 0x200))[i], 2, arg1);
    }
    *(s32 *)(self + 0x210) = arg1;
}

void fn_8008B0D8(char *self, s32 arg1) {
    extern void fn_8030AC1C(void *, s32, s32);
    s32 i;

    for (i = 0; i < *(s32 *)(self + 0x208); i++) {
        fn_8030AC1C(((void **)(self + 0x200))[i], 4, arg1);
        *(s32 *)(self + 0x21C) = arg1;
    }
}

s32 fn_8008B208(char *self, s32 arg1) {
    extern void fn_8031EA2C(void *);
    extern void *fn_8033740C(void *, s32, s32, s32);
    extern u8 lbl_8045B82C[];
    s32 old = *(s32 *)(self + 0x160);

    if (arg1 != old) {
        if (*(void **)(self + 0x15C) != NULL) {
            fn_8031EA2C(*(void **)(self + 0x15C));
            *(void **)(self + 0x15C) = NULL;
        }
        if (arg1 != 0) {
            *(void **)(self + 0x15C) = fn_8033740C(lbl_8045B82C, arg1, 0, 0);
        }
        *(s32 *)(self + 0x160) = arg1;
    }
    return old;
}

void fn_8008B3A4(void *arg0, s32 arg1, f32 arg2) {
    extern char lbl_8041F94C[];
    extern f32 lbl_8042EF98[];
    extern f32 lbl_803CC17C[];
    extern s32 fn_800120DC(void *);
    f32 v;

    if (fn_800120DC(((void **)(lbl_8041F94C + 0x160))[arg1]) == 0) {
        v = (lbl_8042EF98[0] - lbl_803CC17C[0]) * arg2 + lbl_803CC17C[0];
    } else {
        v = lbl_803CC17C[0];
    }
    M2C_FIELD(arg0, f32 *, 0x128) = v;
}

void fn_8008B420(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x158) = 1;
}

void fn_8008B42C(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x158) != 0) {
        M2C_FIELD(arg0, s32 *, 0x158) = 0;
    }
}

void fn_8008B444(void *arg0) {
    extern f32 lbl_803CC180[];
    if (M2C_FIELD(arg0, s32 *, 0x158) != 0) {
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x13C) = lbl_803CC180[0];
    M2C_FIELD(arg0, s32 *, 0x158) = 2;
}

void fn_8008B468(void *arg0) {
    extern f32 lbl_803CC184[];
    if (M2C_FIELD(arg0, s32 *, 0x158) != 0) {
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x13C) = lbl_803CC184[0];
    M2C_FIELD(arg0, s32 *, 0x158) = 3;
}

void fn_8008C160(void *arg0, s32 arg1) {
    extern f32 lbl_803CC1C8[];
    struct V { f32 x, y, z; } v;
    struct V *pv = &v;
    struct V *a;

    pv->x = pv->y = pv->z = lbl_803CC1C8[0];
    if (arg1 != 0) {
        v.z = M2C_FIELD(arg0, f32 *, 0x14);
    }
    a = (struct V *)((u8 *)arg0 + 0xC);
    *a = *pv;
    if (arg1 != 0) {
        v.z = a->z;
    }
    *(struct V *)((u8 *)arg0 + 0x18) = *pv;
}

void fn_8008C388(void) {
    fn_8008C3A8();
}

void fn_8008C3A8(void *arg0) {
    extern f32 lbl_803CC224[];
    M2C_FIELD(arg0, f32 *, 0x5C) = lbl_803CC224[0] / M2C_FIELD(arg0, f32 *, 0x28);
}

void fn_8008C3C0(s32 arg0, s32 arg1) {
    extern void fn_8008C1D8(void *);
    extern s32 lbl_80409BE0[];
    extern s32 lbl_8042EF54[];
    extern void *lbl_8042EFB4[];

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8008C1D8(lbl_8042EF54);
        } else {
            lbl_8042EFB4[0] = lbl_80409BE0;
        }
    }
}

void fn_8008C414(void) {
    void fn_8008C3C0(s32, s32);
    fn_8008C3C0(1, 0xFFFF);
}

void fn_8008C440(void) {
    fn_8008C3C0(0, 0xFFFF);
}

