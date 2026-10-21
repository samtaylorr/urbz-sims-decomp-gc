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

void fn_800275A0(void) {

}

void fn_80028650(void) {

}

s32 fn_80028698(void) {
    return 0;
}

extern u8 lbl_803C4E2C[];
void *fn_800287FC(void) {
    return lbl_803C4E2C;
}

s32 fn_80028808(s32 arg0) {
    return arg0 + 0x58;
}

void fn_800288D8(void) {

}

extern s32 lbl_80493F9C;
s32 fn_800288DC(void) {
    return lbl_80493F9C;
}

void fn_800288FC(void) {

}

s32 fn_80028940(void) {
    return 0;
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

void fn_80029290(void *arg0, s32 arg1) {
    M2C_UNK fn_80038110(s32);
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    if (temp_r0 != 0) {
        fn_80038110(temp_r0);
    }
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

void fn_8002B464(u16 arg0, s32 arg1, u16 *arg2, u16 *arg3) {
    void *fn_80190AA4(s32, u16);
    extern s32 lbl_80496654;
    void *temp_r3;
    u16 id = arg0;

    *arg3 = arg0;
    *arg2 = arg0;
    if (lbl_80496654 != 0 && id <= 0xFFFA) {
        temp_r3 = fn_80190AA4(lbl_80496654, id);
        if (temp_r3 != NULL) {
            *arg3 = M2C_FIELD(temp_r3, u16 *, 2);
        }
    }
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
    void *fn_8032D5C8(void *);
    s32 fn_8033740C(void *, u32, s32, s32);
    void fn_80337F3C(void *);
    M2C_UNK fn_8031EA2C(s32);
    extern u8 lbl_803C5188[];
    extern u8 lbl_8045B980[];

    fn_8031EA2C(M2C_FIELD(arg0, s32 *, 0x3C));
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    fn_80337F3C(lbl_8045B980);
    M2C_FIELD(arg0, s32 *, 0x3C) = fn_8033740C(lbl_8045B980, 0x0D3B893F, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32)(*M2C_FIELD(fn_8032D5C8(lbl_803C5188), s32 **, 4) + (M2C_FIELD(arg0, s32 *, 0x6C) - 1));
}

void fn_8002B940(void) {

}

void fn_8002B944(void) {
    ((void (*)(s32, s32))fn_8002B940)(1, 0xFFFF);
}

