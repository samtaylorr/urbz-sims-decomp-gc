/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DBBCC(void *, u32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_80248488(void *, s32, u32);
extern void fn_8001E804(void *);
extern void fn_8001EAE8(void *, s32);
extern u8 lbl_80407300[];
extern f32 lbl_803C4B90[];
void fn_80024440(void *arg0);

static inline void Lookup_U16(s32 id, u16 *out) {
    void *fn_80190AA4(s32, u32);
    extern s32 lbl_80496654;
    void *e;

    if (lbl_80496654 != 0 && (u16)id <= 0xFFFAU) {
        e = fn_80190AA4(lbl_80496654, id);
        if (e != NULL) {
            *out = M2C_FIELD(e, u16 *, 2);
        }
    }
}

typedef struct SoundSlot {
    u8 pad0[0x74];
    s32 handle;
    u8 pad78[0xFC - 0x78];
    s32 dirty;
    u8 mode;
    u8 pad101[3];
    u32 id;
} SoundSlot;

static inline s32 CountedArr_Count(void *data) {
    return data != NULL ? ((s32 *)data)[-1] : 0;
}

void *fn_800242F4(void *arg0) {
    fn_8001E804(arg0);
    M2C_FIELD(arg0, f32 *, 0xF8) = lbl_803C4B90[0];
    M2C_FIELD(arg0, void **, 0x44) = lbl_80407300;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    return arg0;
}

void fn_80024344(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, void **, 0x44) = lbl_80407300;
    fn_8001EAE8(arg0, 0);
    if (arg1 & 1) {
        fn_80024440(arg0);
    }
}

void *fn_80024394(u32 size) {
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

void fn_80024440(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80024474(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)obj[0x11];
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 8), 3);
    }
}

s32 fn_800244B4(u8 *data, s32 len) {
    s32 hash = 0;
    u32 shift = 0;
    s32 i;
    for (i = 0; i < len; i++) {
        u32 c = data[i];
        u32 v = c << shift;
        if (shift > 24) {
            v ^= c >> (32 - shift);
        }
        hash ^= v;
        shift = (shift + 3) & 0x1F;
    }
    return hash;
}

void fn_800245B0(void) {
    s32 fn_800245DC();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80493FA0;
    fn_802D1FC8(0x28);
    lbl_80493FA0 = fn_800245DC();
}

s32 fn_80024678(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8) == 0;
}

s32 fn_80024688(char *self, s32 item) {
    void fn_800281D8(s32, s32);
    void fn_802CB69C(char *, s32);

    if (*(s32 *)(self + 4) == 10) {
        return 0;
    }
    fn_800281D8(item, 1);
    fn_802CB69C(self + 8, item);
    *(s32 *)(self + 4) += 1;
    return 1;
}

s32 fn_800246EC(char *self) {
    void fn_802CB5C4(char *, void *);
    void fn_800281D8(s32, s32);
    s32 item;
    s32 *node;

    if (*(s32 *)(self + 4) != 0) {
        node = *(s32 **)(self + 8);
        item = *node;
        fn_802CB5C4(self + 8, node);
        *(s32 *)(self + 4) -= 1;
        fn_800281D8(item, 1);
        return item;
    }
    return 0;
}

void *fn_80024BCC(u8 *arg0, s32 id) {
    u8 *it;
    for (it = M2C_FIELD(arg0, u8 **, 0); it != NULL; it = M2C_FIELD(it, u8 **, 8)) {
        u8 *obj = M2C_FIELD(it, u8 **, 0);
        if (M2C_FIELD(obj, s32 *, 0xCC) == id) return obj;
    }
    return NULL;
}

void fn_80024C04(u8 *arg0, u8 *arg1) {
    void fn_8030770C(void *, void *);
    void *p;

    if (M2C_FIELD(arg0, u8 **, 0x48) == arg1) {
        p = M2C_FIELD(M2C_FIELD(arg1, u8 **, 0x10), void **, 8);
        if (p != NULL) {
            u8 *vt = M2C_FIELD(arg0, u8 **, 0x44);
            M2C_FIELD(vt, void (**)(void *, void *), 0xA4)(arg0 + M2C_FIELD(vt, s16 *, 0xA0), *(void **)p);
        } else {
            u8 *vt = M2C_FIELD(arg0, u8 **, 0x44);
            M2C_FIELD(vt, void (**)(void *, void *), 0xA4)(arg0 + M2C_FIELD(vt, s16 *, 0xA0), *(void **)M2C_FIELD(arg0, void **, 0));
        }
        if (M2C_FIELD(arg0, u8 **, 0x48) == arg1) {
            M2C_FIELD(arg0, u8 * volatile *, 0x48) = NULL;
            fn_8030770C(arg0, arg1);
        }
    }
}

void fn_80024CAC(u8 *arg0) {
    extern f32 lbl_803C4CDC[];
    u8 *it;
    u8 *obj;
    u8 *vt;
    f32 zero = lbl_803C4CDC[0];

    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, f32 *, 0x74) = zero;
    M2C_FIELD(arg0, f32 *, 0x78) = zero;
    for (it = M2C_FIELD(arg0, u8 **, 0); it != NULL; it = M2C_FIELD(it, u8 **, 8)) {
        obj = M2C_FIELD(it, u8 **, 0);
        M2C_FIELD(obj, s32 *, 0x1C) = M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x60)++;
        M2C_FIELD(arg0, f32 *, 0x78) += M2C_FIELD(obj, f32 *, 0x28);
        M2C_FIELD(arg0, f32 *, 0x74) += M2C_FIELD(obj, f32 *, 0x20);
    }
    vt = M2C_FIELD(arg0, u8 **, 0x44);
    M2C_FIELD(vt, void (**)(void *), 0x9C)(arg0 + M2C_FIELD(vt, s16 *, 0x98));
}

void fn_8002510C(u8 *arg0) {
    void fn_8002460C(void *);
    extern f32 lbl_803C4D04[];
    f32 v[2];
    f32 *p;

    M2C_FIELD(arg0, s32 *, 0xFC) = 1;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    fn_8002460C(M2C_FIELD(arg0, void **, 0x110));
    M2C_FIELD(arg0, s32 *, 0x100) = 1;
    p = v;
    p[1] = lbl_803C4D04[0];
    v[0] = lbl_803C4D04[0];
    M2C_FIELD(arg0, u32 *, 0x104) = 0xFF6EE7FA;
    M2C_FIELD(arg0, u32 *, 0x108) = *(u32 *)(void *)&v[0];
    M2C_FIELD(arg0, u32 *, 0x10C) = *(u32 *)(void *)&p[1];
}

void fn_80025E60(u8 *arg0) {
    extern s32 lbl_80494EB8;
    u8 *a;
    void *p;

    a = M2C_FIELD(arg0, u8 **, 0x48);
    p = M2C_FIELD(M2C_FIELD(a, u8 **, 0x10), void **, 8);
    if (p != NULL) {
        u8 *vt = M2C_FIELD(arg0, u8 **, 0x44);
        M2C_FIELD(vt, void (**)(void *, void *), 0xA4)(arg0 + M2C_FIELD(vt, s16 *, 0xA0), *(void **)p);
    } else {
        u8 *vt = M2C_FIELD(arg0, u8 **, 0x44);
        M2C_FIELD(vt, void (**)(void *, void *), 0xA4)(arg0 + M2C_FIELD(vt, s16 *, 0xA0), *(void **)M2C_FIELD(arg0, void **, 0));
    }
    if (lbl_80494EB8 != 0) {
        ((void (*)(void))lbl_80494EB8)();
    }
}

void fn_80025EE8(u8 *arg0) {
    extern s32 lbl_80494EB8;
    u8 *a;
    void *p;

    a = M2C_FIELD(arg0, u8 **, 0x48);
    p = M2C_FIELD(M2C_FIELD(a, u8 **, 0x10), void **, 4);
    if (p != NULL) {
        u8 *vt = M2C_FIELD(arg0, u8 **, 0x44);
        M2C_FIELD(vt, void (**)(void *, void *), 0xA4)(arg0 + M2C_FIELD(vt, s16 *, 0xA0), *(void **)p);
    } else {
        u8 *vt = M2C_FIELD(arg0, u8 **, 0x44);
        M2C_FIELD(vt, void (**)(void *, void *), 0xA4)(arg0 + M2C_FIELD(vt, s16 *, 0xA0), *(void **)M2C_FIELD(arg0, void **, 4));
    }
    if (lbl_80494EB8 != 0) {
        ((void (*)(void))lbl_80494EB8)();
    }
}

void fn_800275A0(void) {

}

void fn_80028544(void *arg0, u32 arg1) {
    void fn_8031EA2C(s32);
    extern u8 lbl_8045BA40[];
    s32 fn_8033740C(void *, u32, s32, s32);

    if (M2C_FIELD(arg0, u8 *, 0x100) != 1 || M2C_FIELD(arg0, u32 *, 0x104) != arg1 ||
        M2C_FIELD(arg0, s32 *, 0x74) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x74) != 0) {
            fn_8031EA2C(M2C_FIELD(arg0, s32 *, 0x74));
            M2C_FIELD(arg0, s32 *, 0x74) = 0;
        }
        M2C_FIELD((int)arg0, s32 *, 0x74) = fn_8033740C(lbl_8045BA40, arg1, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x100) = 1;
        M2C_FIELD(arg0, u32 *, 0x104) = arg1;
        M2C_FIELD(arg0, s32 *, 0xFC) = 1;
    }
}

void fn_800285DC(void *arg0, s32 arg1) {
    void fn_8031EA2C(s32);
    SoundSlot *s = arg0;
    u8 mode;

    mode = 2;
    if (arg1 == 0) {
        mode = 0;
    }
    if (s->handle != arg1 || s->mode != mode) {
        if (s->handle != 0) {
            fn_8031EA2C(s->handle);
            s->handle = 0;
        }
        s->handle = arg1;
        s->dirty = 1;
        s->mode = mode;
    }
}

void fn_80028650(void) {

}

void fn_80028654(void *arg0) {
    extern f32 lbl_803C4E24[];
    extern f32 lbl_80493FC0;
    f32 *p;
    f32 hi;
    f32 c;
    f32 v;
    f32 lo;

    hi = lbl_80493FC0;
    c = lbl_803C4E24[0];
    p = (f32 *)((u8 *)arg0 + 0xE0);
    p[2] = c;
    M2C_FIELD(arg0, f32 *, 0xE0) = c;
    p[1] = hi;
    v = p[2];
    lo = p[0];
    if (v < lo) {
    } else if (v > hi) {
        lo = hi;
    } else {
        lo = v;
    }
    p[2] = lo;
}

s32 fn_80028698(void) {
    return 0;
}

void *fn_800287BC(void *arg0, s32 arg1) {
    void *p;

    p = *M2C_FIELD(arg0, void ***, 0x110);
    while (p != NULL && M2C_FIELD(p, s8 *, 0xF4) != arg1) {
        p = M2C_FIELD(p, void **, 0xF8);
    }
    return p;
}

extern u8 lbl_803C4E2C[];
void *fn_800287FC(void) {
    return lbl_803C4E2C;
}

s32 fn_80028808(s32 arg0) {
    return arg0 + 0x58;
}

s32 fn_80028810(void *arg0, void *arg1) {
    void fn_80028544(void *, u32);
    if (M2C_FIELD(arg0, u8 *, 0x5B) == 0) {
        if (M2C_FIELD(arg0, u32 *, 0x5C) == 0) {
            fn_80028544(arg1, 0xD59C7BB5);
        } else {
            fn_80028544(arg1, M2C_FIELD(arg0, u32 *, 0x5C));
        }
    }
    return 1;
}

void fn_80028868(char *self) {
    char *vt = *(char **)(self + 0x1C);
    (*(void (**)(char *))(vt + 0x44))(self + *(s16 *)(vt + 0x40));
}

void fn_8002889C(s32 arg0, s32 arg1) {
    void fn_80024D4C(s32, s32, f32 *);
    extern const f32 lbl_803C4E44[];
    f32 v[3];
    f32 *p = v;

    p[2] = lbl_803C4E44[0];
    p[1] = lbl_803C4E44[0];
    v[0] = lbl_803C4E44[0];
    fn_80024D4C(arg0, arg1, p);
}

void fn_800288D8(void) {

}

extern s32 lbl_80493F9C;
s32 fn_800288DC(void) {
    return lbl_80493F9C;
}

s32 fn_800288E4(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x114) != 0;
}

void fn_800288FC(void) {

}

void fn_80028900(void *arg0, s32 arg1) {
    void fn_802D20E8(void *);
    extern u8 lbl_80407628[];
    extern u8 lbl_80407690[];
    *(void **)((u8 *)arg0 + 0x20) = lbl_80407690;
    *(void **)((u8 *)arg0 + 0x1C) = lbl_80407628;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

s32 fn_80028940(void) {
    return 0;
}

s32 fn_80028948(s32 arg0) {
    typedef struct { s32 v[12]; } Tbl;
    extern Tbl lbl_803C5154;
    Tbl t;
    s32 i;

    t = lbl_803C5154;
    i = arg0 - 1;
    if (i < 0) {
        i = 0;
    }
    if (i > 11) {
        i = 11;
    }
    return t.v[i];
}

void fn_800289C8(void *arg0) {
    M2C_UNK fn_80028948(s32);
    fn_80028948(M2C_FIELD(arg0, s32 *, 0x6C));
}

void fn_80028F80(void *arg0, s32 arg1) {
    M2C_UNK fn_802F05AC(void *, M2C_UNK);
    M2C_UNK fn_8031EA2C(s32);
    M2C_UNK fn_802D20E8(void *);
    M2C_UNK fn_8002ADBC();
    fn_8002ADBC();
    fn_8031EA2C(M2C_FIELD(arg0, s32 *, 0x3C));
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, (unsigned)0x38) = 0;
    fn_802F05AC(arg0 + 0x7C, 2);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_80028FE0(void *arg0) {
    M2C_UNK fn_8002907C();
    fn_8002907C();
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
}

void fn_80029014(s32 arg0, s32 arg1, u16 *arg2, u16 *arg3) {
    void *fn_80190AA4(s32, u32);
    extern s32 lbl_80496654;
    void *temp_r3;

    *arg2 = 0;
    *arg3 = 0;
    if (lbl_80496654 != 0 && *arg2 <= 0xFFFAU) {
        temp_r3 = fn_80190AA4(lbl_80496654, *arg2);
        if (temp_r3 != NULL) {
            *arg3 = M2C_FIELD(temp_r3, u16 *, 2);
        }
    }
}

void fn_80029290(void *arg0, s32 arg1) {
    M2C_UNK fn_80038110(s32);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    if (temp_r0 != 0) {
        fn_80038110(temp_r0);
    }
}

void fn_800292C4(void *self) {
    extern void fn_80038110(s32, s32);
    extern u8 *lbl_80495050;
    u8 *vt;

    switch (M2C_FIELD(self, s32 *, 0x24)) {
    case 0:
        M2C_FIELD(self, s32 *, 0x24) = 1;
        break;
    case 1:
        M2C_FIELD(self, s32 *, 0x24) = 2;
        break;
    case 2:
        M2C_FIELD(self, s32 *, 0x24) = 0;
        break;
    default:
        M2C_FIELD(self, s32 *, 0x24) = 0;
        break;
    }
    if (M2C_FIELD(self, s32 *, 0x8) != 0) {
        fn_80038110(M2C_FIELD(self, s32 *, 0x8), M2C_FIELD(self, s32 *, 0x24));
        *(s32 *)(M2C_FIELD(self, u8 **, 0x1C) + 0x4D134) = M2C_FIELD(self, s32 *, 0x24);
    }
    vt = *(u8 **)lbl_80495050;
    (*(void (**)(void *))(vt + 0x44))(lbl_80495050 + *(s16 *)(vt + 0x40));
}

void fn_80029960(void *self, s32 arg1) {
    extern void fn_80029368(void *);
    extern void fn_802F1504(s32);
    extern void fn_80038324(s32, s32);
    extern s32 fn_80049B6C(void *);
    extern void fn_800BC980(s32, f32);
    extern void fn_80326C7C(s32, s32);
    extern u8 lbl_8041F94C[];
    extern f32 lbl_803C51C0[];
    u8 *base;
    s32 obj;

    if (M2C_FIELD(self, s32 *, 0x1C) != 0) {
        fn_80029368(self);
        base = lbl_8041F94C;
        fn_802F1504(M2C_FIELD(M2C_FIELD(base, u8 **, 0xF4), s32 *, 0xC));
        fn_80038324(M2C_FIELD(self, s32 *, 0x8), M2C_FIELD(M2C_FIELD(base, u8 **, 0xF4), s32 *, 0xC));
        obj = M2C_FIELD(self, s32 *, 0x150);
        if (obj != 0) {
            f32 f = M2C_FIELD(self, f32 *, 0x60);
            fn_800BC980(obj, fn_80049B6C(base) != 0 ? f * lbl_803C51C0[0] : f);
        }
        fn_80326C7C(M2C_FIELD(self, s32 *, 0x1C), arg1);
    }
}

s32 fn_80029B7C(s32 id, u8 **arr) {
    u8 *data = *arr;
    s32 i = 0;

    while (i < CountedArr_Count(data)) {
        u16 key = *(u16 *)(data + i * 0xB8);
        if (id == key) {
            return i;
        }
        if (id < key) {
            return (i + CountedArr_Count(data) - 1) % CountedArr_Count(data);
        }
        i++;
    }
    return CountedArr_Count(data) - 1;
}

void fn_8002A698(void *arg0) {
    M2C_UNK fn_8002A618(void *);
    M2C_UNK fn_8008DCCC(M2C_UNK);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        fn_8008DCCC(0);
        fn_8002A618(arg0);
    }
}

void fn_8002AECC(void *arg0) {
    M2C_UNK fn_800370F8(s32, M2C_UNK);
    M2C_UNK fn_80328D1C(s32);
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        fn_800370F8(M2C_FIELD(arg0, s32 *, 8), 3);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    fn_80328D1C(M2C_FIELD(arg0, s32 *, 0x1C));
}

void fn_8002B464(s32 arg0, s32 arg1, u16 *arg2, u16 *arg3) {
    *arg3 = arg0;
    *arg2 = arg0;
    Lookup_U16(arg0, arg3);
}

f32 fn_8002B6D0(void *arg0, s32 arg1) {
    void *fn_80190AA4(s32, s32);
    f32 fn_80192B34(void *);
    extern f32 lbl_803C5250[];
    extern s32 lbl_80496654;
    struct { char pad[0x1C]; f32 v; char pad2[0x98]; } *arr;
    void *p;
    f32 t;
    f32 x;

    p = fn_80190AA4(lbl_80496654, (u16) arg1);
    t = M2C_FIELD(arg0, f32 *, 0x48);
    arr = *M2C_FIELD(arg0, void ***, 0x38);
    x = arr[M2C_FIELD(arg0, s32 *, 0x44)].v * t
      + arr[M2C_FIELD(arg0, s32 *, 0x40)].v * (lbl_803C5250[0] - t);
    return x * fn_80192B34(p);
}

s32 fn_8002B754(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 **, 0x30)[arg1];
}

void fn_8002B83C(s32 arg0, void *arg1) {
    M2C_UNK fn_801BFDF8(s32, s32);
    fn_801BFDF8(M2C_FIELD(arg1, s32 *, 0x18), arg0);
}

void fn_8002B868(void) {

}

void fn_8002B86C(void *arg0, void *arg1) {
    M2C_UNK fn_80328E5C(s32);
    void *obj = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0 && obj != NULL) {
        M2C_FIELD(obj, void **, 0x24) = (char *) arg0 + 0x7C;
        fn_80328E5C(M2C_FIELD(arg0, s32 *, 0x1C));
    }
}

void fn_8002B8B0(void *arg0) {
    void *fn_8032D5C8(s32, void *);
    s32 fn_8033740C(void *, u32, s32, s32);
    void fn_80337F3C(void *);
    M2C_UNK fn_8031EA2C(s32);
    extern u8 lbl_803C5188[];
    extern u8 lbl_8045B980[];
    s32 h;

    fn_8031EA2C(M2C_FIELD(arg0, s32 *, 0x3C));
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    fn_80337F3C(lbl_8045B980);
    h = fn_8033740C(lbl_8045B980, 0x0D3B893F, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x3C) = h;
    M2C_FIELD(arg0, s32 **, 0x38) = (s32 *)((u8 *)*M2C_FIELD(fn_8032D5C8(h, lbl_803C5188), s32 ***, 4) + (M2C_FIELD(arg0, s32 *, 0x6C) - 1) * 4);
}

void fn_8002B940(void) {

}

void fn_8002B944(void) {
    ((void (*)(s32, s32))fn_8002B940)(1, 0xFFFF);
}

