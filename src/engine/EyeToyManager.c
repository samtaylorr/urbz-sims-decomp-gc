/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D0B3C(void);
extern s32 lbl_80494F80;
void *fn_802D0AB8(void);
void *fn_802D197C(void *, u32, s32);
void *fn_802DBBCC(void *, u32, s32);
void *fn_80338000(void *p, s32 size, s32 align);
void *fn_803729C8(void *p);
void fn_803733D8(void *p, s32 arg1, s32 arg2);
void fn_80335F5C(void *p);
void fn_80335FD8(void *p, s32 n);
extern u8 lbl_8045BBA0[];
extern u8 lbl_8041C180[];

typedef struct { u8 r, g, b; } EyeToyRGB;

static inline void *EyeToyAlloc(s32 count) {
    void *heap;
    void *p;
    s32 size;

    heap = fn_802D0AB8();
    size = count * 4;
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DBBCC(((void *(*)(void))fn_802D0B3C)(), size, 0);
        }
    }
    return p;
}

void fn_80339018(void) {
    extern s32 lbl_80494F7C;
    extern u32 lbl_80494F6C;
    extern s8 *lbl_80494F78;
    void fn_802D211C(void *);
    u32 i;
    s8 *end;

    if (lbl_80494F7C != 0) {
        for (i = 0; i < lbl_80494F6C; i++) {
        }
        if (lbl_80494F78 != NULL) {
            end = lbl_80494F78 + ((s32 *)lbl_80494F78)[-2];
            while (lbl_80494F78 != end) {
                end--;
            }
            fn_802D211C(lbl_80494F78 - 8);
        }
        lbl_80494F78 = NULL;
        lbl_80494F7C = 0;
    }
}

s32 fn_8033909C(void) {
    return 0;
}

s32 fn_803390A4(void) {
    return 0;
}

s32 fn_803390AC(void) {
    extern s32 lbl_80494F7C;

    if (lbl_80494F7C != 0) {
        return -1;
    }
    if (lbl_80494F7C != 0) {
        return 0;
    }
    return -1;
}

s32 fn_803390C4(s32 arg0) {
    extern s32 lbl_80494F74;
    if (arg0 != -1) {
        fn_8033930C();
        lbl_80494F74 -= 1;
    }
    return 1;
}

void fn_803390FC(void) {
    extern u32 lbl_80494F74;
    u32 i;

    if (lbl_80494F80 == 0) {
        for (i = 0; i < lbl_80494F74; i++) {
        }
    }
}

void fn_80339128(s32 arg0) {
    if (((s32) lbl_80494F80 == 0) && (arg0 != -1)) {
        fn_8033930C();
    }
}

void fn_8033915C(s32 arg0) {
    if (arg0 != -1) {
        fn_8033930C();
    }
}

void fn_80339184(s32 arg0) {
    if (arg0 != -1) {
        fn_8033930C();
    }
}

s32 fn_803391AC(s32 arg0) {
    s32 fn_8033930C(s32);

    if (arg0 == -1) {
        return 0;
    }
    fn_8033930C(arg0);
    return 0;
}

s32 fn_803391E4(s32 arg0) {
    s32 fn_8033930C(s32);

    if (arg0 == -1) {
        return 1;
    }
    fn_8033930C(arg0);
    return 1;
}

void fn_8033921C(s32 arg0) {
    if (arg0 != -1) {
        fn_8033930C();
    }
}

s32 fn_80339244(void) {
    s32 temp_r3;

    temp_r3 = lbl_80494F80;
    lbl_80494F80 = 1;
    return temp_r3 ^ 1;
}

extern s32 lbl_80494F80;
s32 fn_80339258(void) {
    s32 temp_r3;

    temp_r3 = lbl_80494F80;
    lbl_80494F80 = 0;
    return temp_r3;
}

void fn_80339268(s32 arg0, s32 *arg1, s32 *arg2) {
    if (arg0 != -1) {
        fn_8033930C();
    }
    *arg1 = 0;
    *arg2 = 0;
}

void fn_803392AC(s32 arg0) {
    if (arg0 != -1) {
        fn_8033930C();
    }
}

s32 fn_803392D4(s32 arg0) {
    s32 fn_8033930C(s32);

    if (arg0 == -1) {
        return 0;
    }
    fn_8033930C(arg0);
    return 0;
}

s32 fn_8033930C(s32 arg0) {
    extern s32 lbl_80494F78;
    return lbl_80494F78 + arg0;
}

void fn_80339318(void) {

}

void fn_8033931C(void) {

}

void fn_80339320(void) {

}

s32 fn_80339324(s32 arg0) {
    fn_8033930C(arg0);
    return 1;
}

void *fn_80339348(void *arg0) {
    M2C_UNK fn_802CA9A8();
    fn_802CA9A8();
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return arg0;
}

void *fn_802D0AB8(void);
void *fn_802D197C(void *, u32, s32);
void *fn_802DBBCC(void *, u32, s32);
void *fn_802D0B3C_h(void);
s32 fn_80339380(void *arg0, s32 arg1) {
    void *p;

    p = EyeToyAlloc(arg1);
    M2C_FIELD(arg0, void **, 0x20) = p;
    if (p == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    return 1;
}

s32 fn_8033983C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

void fn_80339954(s32 arg0, s32 arg1) {
    extern s32 lbl_80494F8C;
    M2C_FIELD(((arg0 * 0x24) + lbl_80494F8C), s32 *, 4) = arg1;
}

s32 fn_80339C58(s32 i) {
    extern u32 lbl_803FD32C[];
    return (lbl_803FD32C[i] >> 1) & 1;
}

void fn_80339C70(u8 *p) {
    extern f32 lbl_803F3C48[];
    f32 f = lbl_803F3C48[0];
    p[2] = 0;
    p[0] = 0;
    p[1] = 0;
    p[8] = 0;
    p[9] = 0;
    p[0xA] = 0;
    p[0xB] = 0;
    *(f32 *)(p + 0xC) = f;
    *(f32 *)(p + 0x10) = f;
    *(f32 *)(p + 0x14) = f;
    *(f32 *)(p + 0x18) = f;
    *(s16 *)(p + 4) = 0;
}

s32 fn_80339CB4(s32 *arr, s32 n) {
    s32 i;
    s32 sum = 0;

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    if (sum == 0) {
        sum = 1;
    }
    return sum;
}

extern s32 lbl_803FD368[];
extern u32 lbl_803FD32C[];
extern f32 lbl_803F3C48[];
s32 fn_80339CB4(s32 *arr, s32 n);
void *fn_80339CE8(s32 a, s32 b, s32 c, s32 d, s32 *tbl, s32 sum, s32 e, s32 f, EyeToyRGB col);
void *fn_8033A02C(s32 a, s32 b, s32 c, s32 d, EyeToyRGB *col) {
    extern s32 lbl_803FD368[];
    void *fn_80339CE8(s32, s32, s32, s32, s32 *, s32, s32, s32, EyeToyRGB);
    s32 sum = fn_80339CB4(lbl_803FD368, 9);
    return fn_80339CE8(a, b, c, d, lbl_803FD368, sum, 3, 3, *col);
}

extern s32 lbl_803FD38C[];
void *fn_8033A0B0(s32 a, s32 b, s32 c, s32 d, EyeToyRGB *col) {
    extern s32 lbl_803FD38C[];
    void *fn_80339CE8(s32, s32, s32, s32, s32 *, s32, s32, s32, EyeToyRGB);
    s32 sum = fn_80339CB4(lbl_803FD38C, 9);
    return fn_80339CE8(a, b, c, d, lbl_803FD38C, sum, 3, 3, *col);
}

extern s32 lbl_80494F88;
s32 fn_8033A73C(void) {
    return lbl_80494F88;
}

void fn_8033A744(void) {

}

void fn_8033B664(s32 **arg0) {
    s32 *a;
    s32 *b;

    a = arg0[0];
    b = arg0[1];
    if (*a > *b) {
        arg0[1] = a;
        arg0[0] = b;
    }
    a = arg0[1];
    b = arg0[2];
    if (*a > *b) {
        arg0[2] = a;
        arg0[1] = b;
    }
    b = arg0[0];
    a = arg0[1];
    if (*b > *a) {
        arg0[1] = b;
        arg0[0] = a;
    }
}

extern s32 lbl_803FD2CC[];
void *fn_8033BB48(s32 a, s32 b, s32 c, s32 d, EyeToyRGB *col) {
    extern s32 lbl_803FD2CC[];
    void *fn_80339CE8(s32, s32, s32, s32, s32 *, s32, s32, s32, EyeToyRGB);
    s32 sum = fn_80339CB4(lbl_803FD2CC, 9);
    return fn_80339CE8(a, b, c, d, lbl_803FD2CC, sum, 3, 3, *col);
}

void fn_8033BBCC(void) {
    fn_802D0B3C();
}

void *fn_8033BBEC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *p;

    p = fn_803729C8(fn_80338000(lbl_8045BBA0, 0x48, 4));
    *(s32 *)((u8 *)p + 8) = arg3;
    fn_803733D8(p, arg1, arg2);
    return p;
}

void fn_8033BC4C(s32 arg0) {
    void fn_80337AEC(void *, s32);
    extern u8 lbl_8045BBA0[];
    fn_80337AEC(lbl_8045BBA0, arg0);
}

void fn_8033BC78(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_8045BBA0;
            fn_80335F5C(p);
            *(u8 **)(p + 0xA4) = lbl_8041C180;
            return;
        }
        fn_80335FD8(lbl_8045BBA0, 2);
    }
}

void fn_8033740C(void);
void fn_8033BCE4(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_8033BD04(void) {
    fn_80337430();
}

void fn_8033BC78(s32 arg0, s32 arg1);
void fn_8033BD24(void) {
    fn_8033BC78(1, 0xFFFF);
}

void *fn_80338000(void *p, s32 size, s32 align);
void *fn_803729C8(void *p);
void fn_803733D8(void *p, s32 arg1, s32 arg2);
extern u8 lbl_8041C180[];
void fn_80335F5C(void *p);
void fn_80335FD8(void *p, s32 n);
void fn_8033BD50(void) {
    fn_8033BC78(0, 0xFFFF);
}

