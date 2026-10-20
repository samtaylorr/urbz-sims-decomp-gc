/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802D24E8(void);
extern void *fn_802D0C44(void *);
extern void fn_802D1A00(void *, void *);
extern void fn_802C7DD0(void *);
s32 fn_802D1404(void *arg0, u32 arg1);
extern void *fn_802D0B3C(void);
extern void *fn_802D0BC0(void);
extern void fn_802CAA00(void *, s32);
extern s32 lbl_80494DCC;
extern char lbl_803FD274[];
extern u8 lbl_80446D34[];
extern const f32 lbl_803F02B0[];
extern const f32 lbl_803F02C0[];
extern u8 lbl_803F02C8[];
extern u8 lbl_8044490C[];
extern s32 lbl_80496150;
extern void fn_802D94C0(void *, s32);
extern void fn_802D0D30(void *, void *);
extern void fn_80246D44(void (*)(void));
void fn_802D0A8C(void);
s32 *fn_802C66FC(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

void fn_802C686C(void *arg0, s8 *arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s8 **, 0) = arg1;
    *arg1 = 0;
}

s32 fn_802C6A5C(s32 *arg0) {
    s32 fn_80248808(s32);
    return fn_80248808(*arg0);
}

void fn_802C6CCC(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_802C69B0(s32, s32);
    M2C_UNK fn_802C6D20(s32, s32, s32);
    fn_802C69B0(arg1, *arg0 + arg2);
    if (arg3 != -1) {
        fn_802C6D20(arg1, arg1, arg3);
    }
}

void fn_802C725C(u8 **arg0, s32 arg1, u8 arg2) {
    u8 *var_r3;
    u8 var_r0;

    var_r3 = *arg0;
    var_r0 = *var_r3;
    if ((s32) var_r0 != 0) {
        do {
            if ((s8) var_r0 == arg1) {
                M2C_FIELD(var_r3, u8 *, 0) = arg2;
            }
            var_r0 = M2C_FIELD(var_r3, u8 *, 1);
            var_r3 += 1;
        } while ((s32) var_r0 != 0);
    }
}

char **fn_802C7874(char **arg0, s32 arg1) {
    M2C_UNK fn_802C69B0(s32, s32);
    char *p;

    p = *arg0;
    if (*p == arg1) {
        do {
            p++;
        } while (*p == arg1);
        fn_802C69B0((s32)arg0, (s32)p);
    }
    return arg0;
}

s32 fn_802C78D0(s32 arg0, s32 arg1) {
    M2C_UNK fn_802C77D0(s32, s32);
    fn_802C7874((char **)arg0, arg1);
    fn_802C77D0(arg0, arg1);
    return arg0;
}

char **fn_802C7910(char **arg0, s32 arg1) {
    s32 fn_80248640(s32, s32);
    M2C_UNK fn_802C6D20(s32, s32, s32);
    s32 n;

    n = fn_802C6A5C((s32 *)arg0);
    if (n != 0 && fn_80248640(arg1, (*arg0)[n - 1]) != 0) {
        n--;
        while (n != 0 && fn_80248640(arg1, (*arg0)[n - 1]) != 0) {
            n--;
        }
        fn_802C6D20((s32)arg0, (s32)arg0, n);
    }
    return arg0;
}

char **fn_802C79A8(char **arg0, s32 arg1) {
    s32 fn_80248640(s32, s32);
    M2C_UNK fn_802C69B0(s32, s32);
    char *p;

    if (fn_80248640(arg1, **arg0) != 0) {
        p = *arg0 + 1;
        while (fn_80248640(arg1, *p) != 0) {
            p++;
        }
        fn_802C69B0((s32)arg0, (s32)p);
    }
    return arg0;
}

void fn_802C7A84(void) {

}

void fn_802C7A88(f64 farg0) {
    M2C_UNK fn_802C71B0(f32);
    fn_802C71B0((f32) farg0);
}

void *fn_802C7D1C(void *self) {
    fn_802C7DD0(self);
    return self;
}

void fn_802C7DD0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void fn_802C829C(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8037D6D8(s32, s32, s32);
    fn_8037D6D8(arg1, arg2, arg0);
}

void *fn_802C846C(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 var_r30;
    s32 var_r31;
    s32 var_r9;
    void *temp_r9;

    var_r9 = 0;
    do {
        var_r31 = (var_r9 * 0x10) + arg1;
        var_r30 = 4;
loop_2:
        temp_r9 = M2C_FIELD(arg0, void **, 0x18);
        temp_r4 = var_r31;
        var_r31 += 4;
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, M2C_UNK), 0x34)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x30), temp_r4, 4);
        var_r30 -= 1;
        if (var_r30 != 0) {
            goto loop_2;
        }
        var_r9 += 1;
    } while (var_r9 <= 3);
    return arg0;
}

void *fn_802C87C4(void *arg0, void *arg1) {
    M2C_UNK fn_802C876C();
    void *temp_r9;

    fn_802C876C();
    temp_r9 = arg0 + 0x30;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_r9, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_r9, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    return arg0;
}

void fn_802C96D4(void) {

}

void fn_802CAA88(s32 arg0) {
    M2C_UNK fn_802D8334(s32);
    fn_802D8334(arg0 + 4);
}

void fn_802CAAAC(s32 arg0) {
    M2C_UNK fn_802D838C(s32);
    fn_802D838C(arg0 + 4);
}

void fn_802CAC68(s32 arg0) {
    M2C_UNK fn_802D83EC(s32);
    fn_802D83EC(arg0 + 4);
}

void fn_802CAC8C(s32 arg0) {
    M2C_UNK fn_802D8424(s32);
    fn_802D8424(arg0 + 4);
}

void fn_802CB508(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

void fn_802CB544(void) {

}

s32 fn_802CB548(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

s32 fn_802CB550(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

void fn_802CB634(void *arg0, s32 arg1) {
    void *fn_802D1FC8(M2C_UNK);
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_802D1FC8(0xC);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0) = arg1;
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r3, void **, 8) = temp_r9;
        if (temp_r9 != NULL) {
            M2C_FIELD(temp_r9, void **, 4) = temp_r3;
        } else {
            M2C_FIELD(arg0, void **, 4) = temp_r3;
        }
        M2C_FIELD(temp_r3, s32 *, 4) = 0;
        M2C_FIELD(arg0, void **, 0) = temp_r3;
    }
}

void fn_802CBB94(void) {

}

void *fn_802CC9A0(void *arg0, char *arg1) {
    void *vt;

    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1, 4);
    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1 + 4, 4);
    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1 + 8, 4);
    vt = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30), arg1 + 0xC, 4);
    return arg0;
}

s32 fn_802CCCF8(void *arg0, s32 arg1) {
    void fn_802CD440(void *, s32, s32 *);
    s32 sp8;

    fn_802CD440(arg0, arg1, &sp8);
    return sp8;
}

void *fn_802CCD80(void *arg0, s32 arg1);
void *fn_802CCD20(void *arg0, s32 arg1) {
    char *fn_802CCEEC(void *, void *, s32, s32);
    char *temp_r3;

    temp_r3 = fn_802CCD80(arg0, arg1);
    if (temp_r3 != NULL && M2C_FIELD(temp_r3, s32 *, 0x18) == arg1) {
        return temp_r3 + 0x1C;
    }
    return fn_802CCEEC(arg0, temp_r3, arg1, 0) + 0x1C;
}

void *fn_802CCD80(void *arg0, s32 arg1) {
    extern char lbl_803FD274[];
    void *var_r11;
    void *var_r3;
    s32 temp_r0;

    var_r3 = M2C_FIELD(arg0, void **, 8);
    var_r11 = NULL;
    while (var_r3 != lbl_803FD274) {
        temp_r0 = M2C_FIELD(var_r3, s32 *, 0x18);
        if (arg1 == temp_r0) {
            return var_r3;
        }
        var_r11 = var_r3;
        if ((u32) arg1 < (u32) temp_r0) {
            var_r3 = M2C_FIELD(var_r11, void **, 0);
        } else {
            var_r3 = M2C_FIELD(var_r11, void **, 4);
        }
    }
    return var_r11;
}

void *fn_802CCDC8(void *arg0, u32 arg1) {
    extern char lbl_803FD274[];
    void *var_r3;
    void *var_r0;

    var_r0 = M2C_FIELD(arg0, void **, 8);
    var_r3 = NULL;
    while (var_r0 != lbl_803FD274) {
        var_r3 = var_r0;
        if (arg1 < M2C_FIELD(var_r3, u32 *, 0x18)) {
            var_r0 = M2C_FIELD(var_r3, void **, 0);
        } else {
            var_r0 = M2C_FIELD(var_r3, void **, 4);
        }
    }
    return var_r3;
}

s32 fn_802CD600(void **arg0) {
    s32 var_r9;
    void *var_r3;

    var_r3 = *arg0;
    var_r9 = 0;
    if (var_r3 != NULL) {
        do {
            var_r3 = M2C_FIELD(var_r3, void **, 0x10);
            var_r9 += 1;
        } while (var_r3 != NULL);
    }
    return var_r9;
}

void fn_802CDB1C(void *arg0) {
    fn_802D1A00(fn_802D0C44(arg0), arg0);
}

void fn_802CE738(void *arg0) {
    M2C_UNK fn_802CE7C8(void *, s32);
    s32 var_r4;
    u16 temp_r9;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x10A8) > (u32) M2C_FIELD(arg0, u32 *, 0x1098)) {
        M2C_FIELD(arg0, s32 *, 0x10B0) = 1;
        do {
            temp_r9 = M2C_FIELD(arg0, u16 *, 0x1088);
            M2C_FIELD(arg0, s32 *, 0x10AC) = (s32) M2C_FIELD(arg0, s32 *, 0x10B0);
            M2C_FIELD(arg0, s32 *, 0x10B0) = -1;
            M2C_FIELD(arg0, u32 *, 0x10A8) = 0U;
            if ((s32) temp_r9 != 0) {
                var_r4 = M2C_FIELD(arg0, s32 *, 0x108C) + (temp_r9 * 0x38);
            } else {
                var_r4 = 0;
            }
            fn_802CE7C8(arg0, var_r4);
        } while ((u32) M2C_FIELD(arg0, u32 *, 0x10A8) > (u32) M2C_FIELD(arg0, u32 *, 0x1098));
    }
}

s32 fn_802CE9C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10A8);
}

s32 fn_802CE9D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1098);
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
void *fn_802CED98(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

extern void *fn_802D0AB8(void *);
void fn_802CEE44(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802CF2BC(void *arg0) {
    fn_802D1A00(fn_802D0C44(arg0), arg0);
}

void fn_802D00D4(void *arg0) {
    M2C_UNK fn_802D0164(void *, s32);
    s32 var_r4;
    u16 temp_r9;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x1024) > (u32) M2C_FIELD(arg0, u32 *, 0x1014)) {
        M2C_FIELD(arg0, s32 *, 0x102C) = 1;
        do {
            temp_r9 = M2C_FIELD(arg0, u16 *, 0x1004);
            M2C_FIELD(arg0, s32 *, 0x1028) = (s32) M2C_FIELD(arg0, s32 *, 0x102C);
            M2C_FIELD(arg0, s32 *, 0x102C) = -1;
            M2C_FIELD(arg0, u32 *, 0x1024) = 0U;
            if ((s32) temp_r9 != 0) {
                var_r4 = M2C_FIELD(arg0, s32 *, 0x1008) + (temp_r9 * 0x48);
            } else {
                var_r4 = 0;
            }
            fn_802D0164(arg0, var_r4);
        } while ((u32) M2C_FIELD(arg0, u32 *, 0x1024) > (u32) M2C_FIELD(arg0, u32 *, 0x1014));
    }
}

s32 fn_802D0334(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1024);
}

extern void *fn_802D0AB8(void *);
void fn_802D0894(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D0960(void *arg0, f32 *src, s16 *dst) {
    dst[0] = src[0] * lbl_803F02B0[0];
    dst[1] = src[1] * lbl_803F02B0[0];
    dst[2] = src[2] * lbl_803F02B0[0];
    dst[3] = src[3] * lbl_803F02B0[0];
}

void fn_802D09E0(void *arg0, u16 *src, f32 *dst) {
    dst[0] = (u32)src[0] * lbl_803F02C0[0];
    dst[1] = (u32)src[1] * lbl_803F02C0[0];
    dst[2] = (u32)src[2] * lbl_803F02C0[0];
    dst[3] = (u32)src[3] * lbl_803F02C0[0];
}

void fn_802D0A8C(void) {
    fn_802D94C0(lbl_8044490C, 2);
}

void *fn_802D0AB8(void *unused) {
    if (lbl_80496150 == 0) {
        fn_802D0D30(lbl_8044490C, lbl_803F02C8);
        lbl_80496150 = 1;
        fn_80246D44(fn_802D0A8C);
    }
    return lbl_8044490C;
}

extern u8 lbl_804450CC[];
void fn_802D0B10(void);
void fn_802D0B10(void) {
    fn_802D94C0(lbl_804450CC, 2);
}

extern u8 lbl_8044588C[];
void fn_802D0B94(void);
void fn_802D0B94(void) {
    fn_802D94C0(lbl_8044588C, 2);
}

extern u8 lbl_8044604C[];
void fn_802D0C18(void);
void fn_802D0C18(void) {
    fn_802D94C0(lbl_8044604C, 2);
}

extern u8 lbl_803F02FC[];
extern s32 lbl_8049615C;
void *fn_802D0C44(void *unused) {
    if (lbl_8049615C == 0) {
        fn_802D0D30(lbl_8044604C, lbl_803F02FC);
        lbl_8049615C = 1;
        fn_80246D44(fn_802D0C18);
    }
    return lbl_8044604C;
}

extern u8 lbl_8044680C[];
void fn_802D0C9C(void);
void fn_802D0C9C(void) {
    fn_802D94C0(lbl_8044680C, 2);
}

M2C_UNK *fn_802D0CC8(void) {
    M2C_UNK fn_802D9300(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    extern s32 lbl_80496160;
    if ((s32) lbl_80496160 == 0) {
        fn_802D9300(&lbl_8044680C, 0, 0, 1, 0, 0, 0);
        lbl_80496160 = 1;
        fn_80246D44(&fn_802D0C9C);
    }
    return &lbl_8044680C;
}

s32 fn_802D0F64(void *arg0) {
    s32 fn_802DD058(void *);
    return fn_802DD058(arg0) != 0;
}

s32 fn_802D0F94(void) {
    return 0;
}

void fn_802D0F9C(void) {

}

s32 fn_802D0FFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x52C);
}

s32 fn_802D118C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x530);
}

s32 fn_802D1194(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x534);
}

s32 fn_802D119C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x538);
}

void fn_802D11A4(void) {

}

s32 fn_802D12C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x528);
}

void fn_802D12CC(void *arg0) {
    fn_802D1A00(arg0, M2C_FIELD(arg0, void **, 0x7BC));
    M2C_FIELD(arg0, void **, 0x7BC) = 0;
    fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), (void *)lbl_80494DCC);
    lbl_80494DCC = 0;
}

s32 fn_802D1404(void *arg0, u32 arg1) {
    if (arg1 < 0x50) {
        return ((struct { u8 pad[0x53C]; s32 arr[0x50]; } *)arg0)->arr[arg1];
    }
    return 0;
}

s32 fn_802D1424(void *arg0) {
    s32 a, b, c;
    a = fn_802D1404(fn_802D0AB8(arg0), (u32)arg0);
    b = fn_802D1404(fn_802D0B3C(), (u32)arg0);
    c = fn_802D1404(fn_802D0BC0(), (u32)arg0);
    return a + b + c + fn_802D1404(((void *(*)(void))fn_802D0C44)(), (u32)arg0);
}

void fn_802D1494(void) {
    u8 *p = lbl_80446D34;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446D70[];
void fn_802D14C4(void) {
    u8 *p = lbl_80446D70;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446DAC[];
void fn_802D14F4(void) {
    u8 *p = lbl_80446DAC;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446DE8[];
void fn_802D1524(void) {
    u8 *p = lbl_80446DE8;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446E24[];
void fn_802D1554(void) {
    u8 *p = lbl_80446E24;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446E60[];
void fn_802D1584(void) {
    u8 *p = lbl_80446E60;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446E9C[];
void fn_802D15B4(void) {
    u8 *p = lbl_80446E9C;
    fn_802CAA00(&p[0x20], 2);
}

extern u8 lbl_80446ED8[];
void fn_802D15E4(void) {
    u8 *p = lbl_80446ED8;
    fn_802CAA00(&p[0x20], 2);
}

void fn_802D1F94(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

extern void *fn_802DBBCC(void *heap, u32 size, s32 align);
void *fn_802D2058(u32 size);
void *fn_802D2058(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DBBCC(fn_802D0B3C(), size, 0);
        }
    }
    return p;
}

void fn_802D20E8(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D211C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void *fn_802D2150(u32 size);
void *fn_802D2150(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DBBCC(fn_802D0B3C(), size, 0);
        }
    }
    return p;
}

void fn_802D21E0(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D24C8(void) {
    fn_802D24E8();
}

void fn_802D26A0(void) {
    M2C_UNK fn_802D2634(M2C_UNK, M2C_UNK);
    fn_802D2634(1, 0xFFFF);
}

