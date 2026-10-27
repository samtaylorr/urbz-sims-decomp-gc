/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void (*lbl_804940B0)(void);

extern s32 lbl_804957B8;
void fn_80041AB4(s32 *arg) {
    typedef struct { s32 size; s32 unk4; s32 unk8; f32 f0; f32 f1; f32 f2; f32 f3; } EyeToyParams;
    void fn_80248488(void *, s32, s32);
    f32 fn_80043A40(void);
    f32 fn_8004387C(void);
    f32 fn_80043984(void);
    f32 fn_80043938(void);
    extern EyeToyParams lbl_8041F714;
    extern u8 lbl_8041F718[];
    extern u8 lbl_803F5DA8[];
    s32 i;

    fn_80248488(&lbl_8041F714, 0, 0x1C);
    lbl_8041F714.size = 0x1C;
    for (i = 0; i < 5; i++) {
        lbl_8041F718[i] = lbl_803F5DA8[i * 0xC + 0xB];
    }
    lbl_8041F714.f0 = fn_80043A40();
    lbl_8041F714.f1 = fn_8004387C();
    lbl_8041F714.f2 = fn_80043984();
    lbl_8041F714.f3 = fn_80043938();
    arg[1] = (s32)&lbl_8041F714;
    arg[0] = lbl_8041F714.size;
}

void fn_80041C2C(s32 id, s32 *arg) {
    void fn_80041AB4(s32 *);
    void fn_80041B60(s32);
    s32 mode = 0;

    switch (id) {
    case 0x45796531:
        fn_80041AB4(arg);
        return;
    case 0x45796532:
        break;
    case 0x45796533:
        mode = 1;
        break;
    case 0x45796534:
        mode = 2;
        break;
    case 0x45796535:
        mode = 3;
        break;
    case 0x45796536:
        mode = 4;
        break;
    default:
        return;
    }
    fn_80041B60(mode);
}

void fn_80041CDC(void) {

}

void fn_80041CE0(s32 *arg) {
    typedef struct { s32 size; s32 unk4; s32 unk8; f32 f0; f32 f1; f32 f2; f32 f3; } EyeToyParams;
    void fn_80248488(void *, s32, s32);
    void fn_80043A58(f32);
    void fn_800438D0(f32);
    void fn_800439BC(f32);
    void fn_80043950(f32);
    extern EyeToyParams lbl_8041F714;
    EyeToyParams *p;

    fn_80248488(&lbl_8041F714, 0, 0x1C);
    lbl_8041F714.size = 0x1C;
    p = (EyeToyParams *)arg[1];
    if (p != 0 && p->size == 0x1C) {
        lbl_8041F714 = *p;
        fn_80043A58(lbl_8041F714.f0);
        fn_800438D0(lbl_8041F714.f1);
        fn_800439BC(lbl_8041F714.f2);
        fn_80043950(lbl_8041F714.f3);
    }
}

s32 fn_80041D94(void) {
    return lbl_804957B8;
}

void fn_80041D9C(void) {

}

void fn_80041EC0(s32 id, s32 *arg) {
    void fn_80041CE0(s32 *);
    void fn_80041DA0(s32);
    s32 mode = 0;

    switch (id) {
    case 0x45796531:
        fn_80041CE0(arg);
        return;
    case 0x45796532:
        break;
    case 0x45796533:
        mode = 1;
        break;
    case 0x45796534:
        mode = 2;
        break;
    case 0x45796535:
        mode = 3;
        break;
    case 0x45796536:
        mode = 4;
        break;
    default:
        return;
    }
    fn_80041DA0(mode);
}

void fn_80041F70(void) {
    void fn_80043A58(f32);
    void fn_800439BC(f32);
    extern f32 lbl_803C60E0[];
    extern f32 lbl_803C60E4[];

    fn_80043950(lbl_803C60E0[0]);
    fn_80043A58(lbl_803C60E0[0]);
    fn_800439BC(lbl_803C60E0[0]);
    fn_800438D0(lbl_803C60E4[0]);
}

s32 fn_80041FBC(s32 arg0) {
    extern s32 lbl_8049408C;
    return ((s32) lbl_8049408C >> arg0) & 1;
}

void fn_80042A60(void (*cb)(void)) {
    lbl_804940B0 = cb;
}

void fn_80042A68(void) {
    if (lbl_804940B0 != 0) {
        lbl_804940B0();
    }
}

extern void (*lbl_804940B0)(void);
extern s32 lbl_8049407C;
extern s32 lbl_80494084;
extern s32 lbl_80494088;
extern s32 lbl_804940AC;
extern char *lbl_803C6188[];
extern char lbl_8045BA40[];
void fn_800426A4(void);
s32 fn_80336E08(void *a, char *b);
void fn_803374C8(void *a, char *b);
void fn_80042C88(void) {
    if (lbl_8049407C != -1) {
        if (lbl_804940AC != 0) {
            fn_800426A4();
        } else if (lbl_80494084 == -1) {
            if (lbl_80494088 != -1) {
                lbl_80494084 = lbl_80494088;
                fn_803374C8(lbl_8045BA40, lbl_803C6188[lbl_80494088]);
            }
        } else {
            lbl_804940AC = fn_80336E08(lbl_8045BA40, lbl_803C6188[lbl_80494084]);
            if (lbl_804940AC != 0) {
                fn_800426A4();
            }
        }
    }
}

extern s32 lbl_804940A4;
s32 fn_80042D2C(void) {
    return lbl_804940A4;
}

void fn_80042D34(void) {
}

s32 fn_80043218(void) {
    return 0xB;
}

s32 fn_80043220(void) {
    return 5;
}

s32 fn_80043228(void) {
    return 5;
}

void fn_80043374(s32 arg0) {
    extern s32 lbl_80494090;
    extern s32 lbl_80494098;
    if (arg0 != (s32) lbl_80494090) {
        lbl_80494090 = arg0;
        lbl_80494098 = 1;
    }
}

void fn_80043390(s32 arg0) {
    if (arg0 != (s32) lbl_80494088) {
        lbl_80494088 = arg0;
    }
}

void fn_800433A4(s32 arg0, s32 arg1, s32 arg2) {
    void fn_8004221C(void *);
    void fn_80330DEC(void *, s32, s32);
    extern u8 lbl_803F5DA8[];
    u8 *entry = lbl_803F5DA8 + arg0 * 0xC;
    u8 *list = *(u8 **)entry;
    s32 i;
    s32 val;

    fn_8004221C(*(void **)(list + 4));
    val = *(s32 *)(*(u8 **)(list + 4) + 0x2C);
    for (i = 1; i < *(s32 *)(entry + 4); i++) {
        fn_80330DEC(*(void **)(list + 4 + i * 8), val, 0);
    }
    *(s32 *)(entry + 8) = arg2;
}

void fn_8004342C(s32 arg0) {
    void fn_800433A4(s32, s32, s32);
    extern s32 lbl_8049409C;
    if (((s32) lbl_8049409C != 0) && (fn_80043480() != 0)) {
        fn_800433A4(arg0, fn_80043480(), 1);
    }
}

extern s32 lbl_804940A8;
s32 fn_80043480(void) {
    return lbl_804940A8;
}

s32 fn_80043488(void) {
    s32 fn_803391AC(s32);
    return lbl_8049407C != -1 ? fn_803391AC(lbl_8049407C) : 0;
}

s32 fn_800434BC(void) {
    s32 fn_803391E4(s32);
    return lbl_8049407C != -1 ? fn_803391E4(lbl_8049407C) : 0;
}

s32 fn_800434F0(void) {
    s32 fn_8004200C(void);
    return fn_8004200C() != -1;
}

s32 fn_80043520(void) {
    s32 fn_80339324(s32);
    return lbl_8049407C != -1 ? fn_80339324(lbl_8049407C) : 1;
}

void fn_800438D0(f32 farg0) {
    void fn_803392AC(s32, s32, void *);
    extern f32 lbl_803C615C[];
    extern f32 lbl_803C6160[];
    extern s32 lbl_804957B0;
    extern f32 lbl_804957B4;
    f32 msg[16];

    if (lbl_8049407C != -1) {
        if (farg0 != lbl_803C615C[0]) {
            msg[1] = farg0 * lbl_803C6160[0];
        } else {
            msg[1] = lbl_803C615C[0];
        }
        fn_803392AC(lbl_8049407C, 8, msg);
        return;
    }
    lbl_804957B4 = farg0;
    lbl_804957B0 = 1;
}

f32 fn_80043938(void) {
    extern f32 lbl_803C6164[];
    extern f32 lbl_8041F658[];
    return lbl_8041F658[0] * lbl_803C6164[0];
}

void fn_80043950(f32 farg0) {
    void fn_803398E8(s32, void *);
    extern f32 lbl_8041F63C[];
    lbl_8041F63C[7] = farg0 + farg0;
    fn_803398E8(0, lbl_8041F63C);
}

f32 fn_80043984(void) {
    extern f32 lbl_803C6168[];
    extern f32 lbl_803C616C[];
    extern f32 lbl_8041F654[];
    f32 v = lbl_8041F654[0];

    if (v > lbl_803C6168[0]) {
        v -= lbl_803C616C[0];
    }
    v += lbl_803C6168[0];
    return v / lbl_803C616C[0];
}

f32 fn_80043A40(void) {
    extern f32 lbl_803C6184[];
    extern f32 lbl_8041F65C[];
    return lbl_8041F65C[0] * lbl_803C6184[0];
}

void fn_80043BB4(void) {

}

void fn_80043C14(void) {
    M2C_UNK fn_80043BB8(M2C_UNK, M2C_UNK);
    fn_80043BB8(1, 0xFFFF);
}

