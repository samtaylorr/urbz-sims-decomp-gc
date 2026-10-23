/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80496694;
extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
s32 fn_80052C50(void) {
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

void fn_80052C9C(void) {
    extern s32 lbl_8049664C;
    lbl_8049664C = 0;
}

void fn_80052CA8(void) {
    extern s32 lbl_8049664C;
    lbl_8049664C = 1;
}

void fn_80052CB4(void) {
    void fn_8000AA2C();
    void fn_8000B13C(s32, void *, s32);
    void fn_80052CA8(void);
    extern u8 lbl_803C7648[];
    extern u8 lbl_803C7650[];
    extern u8 lbl_8041F94C[];
    u8 *p = lbl_8041F94C;
    fn_8000B13C(*(s32 *)(p + 0xD0), lbl_803C7648, 1);
    fn_8000AA2C(*(s32 *)(p + 0xD0), lbl_803C7650, 0, 0, 0);
    fn_80052CA8();
}

void fn_80052D18(void) {
    void fn_80052C9C(void);
    extern s32 lbl_80494F44;
    extern u8 *lbl_804961A4;
    u8 *obj;
    u8 *vt;

    lbl_80494F44 = 0;
    fn_80052C9C();
    obj = lbl_804961A4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), fn_80052CB4);
}

void *fn_80052D64(void *self, s32 count) {
    void *fn_802D1FC8(s32);
    extern const f32 lbl_803C765C[];
    extern u8 lbl_80496730;
    s32 i;
    s32 *p;
    s32 *head;
    s32 *prev;

    head = NULL;
    prev = NULL;
    for (i = 0; i < count; i++) {
        p = fn_802D1FC8(0x18);
        if (p != NULL) {
            p[0] = 1;
            p[1] = i;
            p[2] = (s32)&lbl_80496730;
            p[3] = (s32)&lbl_80496730;
            *(f32 *)&p[4] = lbl_803C765C[0];
            p[5] = 0;
            if (i == 0) {
                head = p;
            } else {
                prev[5] = (s32)p;
            }
            prev = p;
        }
    }
    return head;
}

void fn_80052EFC(void) {

}

void fn_80052F00(void) {

}

void fn_80052F04(void) {

}

void fn_80052F5C(void) {

}

s32 fn_80053428(void *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x4C) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x50) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x58) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x5C) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x60) != 0)) {
        var_r9 = 1;
    }
    return var_r9;
}

void fn_80053474(s32 arg0) {
    s32 fn_80053198();
    M2C_UNK fn_800534B0(s32);
    if (fn_80053198() != 0) {
        fn_800534B0(arg0);
    }
}

void fn_80053948(void *arg0) {
    M2C_UNK fn_80053428();
    fn_80053428();
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
}

void fn_80053DF8(void) {

}

void fn_80053DFC(void) {

}

void fn_80054B28(void) {

}

void fn_80054D08(void) {

}

void fn_80056888(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_800568BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}

s32 fn_800568C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

s32 fn_800568D0(void) {
    return lbl_80496694;
}

void fn_800568FC(s32 arg0, s32 arg1) {
    M2C_UNK fn_802CB8D4(s32);
    M2C_UNK fn_802D20E8(s32);
    fn_802CB8D4(arg0 + 4);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

s32 fn_80056AE0(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 1:
        return 1;
    case 3:
        return 3;
    case 4:
        return 2;
    case 2:
        return 4;
    default:
        return 0;
    }
}

void fn_80058514(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_80058534(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80058574(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80058900(void *arg0, void *arg1) {
    void *temp_r9;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x114);
    if (var_r31 != NULL) {
        do {
            temp_r9 = M2C_FIELD(arg1, void **, 0x68);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0xB4)(arg1 + M2C_FIELD(temp_r9, s16 *, 0xB0), M2C_FIELD(var_r31, s32 *, 8));
            var_r31 = M2C_FIELD(var_r31, void **, 0);
        } while (var_r31 != NULL);
    }
}

void fn_8005895C(s32 arg0, s32 arg1) {
    M2C_UNK fn_802E34F0(s32, s32);
    fn_802E34F0(arg1, arg0 + 0x120);
}

s32 fn_80058AFC(s32 arg0) {
    s32 fn_800418C8(s32);
    extern s32 lbl_804940D0;
    if (arg0 != 0) {
        return fn_800418C8(arg0);
    }
    return lbl_804940D0;
}

void fn_80059100(void *arg0) {
    void fn_80059458(void *, s32);
    void fn_80325C50(void *, void *);
    void **p;
    void **next;

    if ((*(s32 (**)(void *))(*(u8 **)arg0 + 0xC4))((u8 *)arg0 + *(s16 *)(*(u8 **)arg0 + 0xC0)) != 0) {
        fn_80325C50((*(void *(**)(void *))(*(u8 **)arg0 + 0xC4))((u8 *)arg0 + *(s16 *)(*(u8 **)arg0 + 0xC0)), arg0);
    }
    p = M2C_FIELD(arg0, void ***, 0x114);
    while (p != NULL) {
        next = (void **)*p;
        if (p != NULL) {
            fn_80059458(p, 3);
        }
        p = next;
    }
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C) = 0;
}

s32 fn_800591A0(void) {
    s32 fn_80059220();
    if (fn_80059220() == 0) {
        return 0;
    }
    return 1;
}

s32 fn_800591D0(void *arg0, s32 arg1) {
    s32 i;

    if (arg1 == M2C_FIELD(arg0, s32 *, 0x8C)) {
        return 1;
    }
    for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x90); i++) {
        if (arg1 == ((u16 *)((u8 *)arg0 + 0x94))[i]) {
            return 1;
        }
    }
    return 0;
}

s32 fn_80059220();
void fn_80059458(void *, s32);
void fn_80325C50(void *, void *);
void fn_8031EAB8(void *);
void *fn_80059408(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void fn_8031EAB8(void *);
    M2C_FIELD(arg0, void **, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    M2C_FIELD(arg0, s32 *, 0) = arg5;
    fn_8031EAB8(arg1);
    return arg0;
}

void fn_80059458(void *arg0, s32 arg1) {
    void fn_8031EA2C(s32);
    M2C_UNK fn_802D20E8(s32);
    extern u8 *lbl_80495050;
    s32 i;

    for (i = 0; i < M2C_FIELD(arg0, s32 *, 0xC); i++) {
        u8 *vt = *(u8 **)lbl_80495050;
        (*(void (**)(void *, s32))(vt + 0x114))(lbl_80495050 + *(s16 *)(vt + 0x110), *(s32 *)(M2C_FIELD(arg0, u8 **, 0x10) + i * 0x10 + 8));
    }
    {
        u8 *vt = *(u8 **)lbl_80495050;
        (*(void (**)(void *, s32))(vt + 0x94))(lbl_80495050 + *(s16 *)(vt + 0x90), M2C_FIELD(arg0, s32 *, 8));
    }
    fn_8031EA2C(M2C_FIELD(arg0, s32 *, 0x14));
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void *fn_800596B8(u32 size, void *p);
void *fn_800596B8(u32 size, void *p) {
    return p;
}

void *fn_800596C0(void) {
    extern void *fn_80058988(u32);
    extern void *fn_800585B4(void *, s32);
    return fn_800585B4(fn_80058988(0x138), 0);
}

void fn_800596EC(void *self) {
    extern void *fn_800585B4(void *, s32);
    fn_800585B4(self, 0);
}

void fn_80059710(void *self) {
    extern void fn_80059830(void *, s32);
    fn_80059830(self, 2);
}

void fn_80059734(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491DF4[];
void *fn_80059774(void) {
    return lbl_80491DF4;
}

extern s32 lbl_80491E00[];
s32 fn_80059780(void) {
    return lbl_80491E00[0];
}

extern s32 lbl_80491E04[];
s32 fn_8005978C(void) {
    return lbl_80491E04[0];
}

extern u16 lbl_80491E08[];
u16 fn_80059798(void) {
    return lbl_80491E08[0];
}

void *fn_800597A4(void) {
    return lbl_80491DF4;
}

extern u16 lbl_80491E0A[];
u16 fn_800597B0(void) {
    return lbl_80491E0A[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void *fn_800596C0(void);
extern void fn_800596EC(void *);
extern void fn_80059710(void *);
extern u8 lbl_803C7B8C[];
extern u8 lbl_80491E1C[];
void fn_800597BC(s32 arg0) {
    fn_802D6A90(lbl_80491DF4, fn_800596C0, fn_800596EC, fn_80059710, arg0, lbl_803C7B8C, lbl_80491E1C);
}

void fn_80059810(void) {
    fn_802D2430();
}

void fn_80059830(void **self, s32 flags) {
    extern u8 lbl_80408268[];
    extern void fn_80059100(void *);
    extern void fn_802F05AC(void *, s32);
    extern void fn_800589C4(void *);
    *self = lbl_80408268;
    fn_80059100(self);
    fn_802F05AC(self, 0);
    if (flags & 1) {
        fn_800589C4(self);
    }
}

void fn_80059888(void) {

}

u16 fn_8005988C(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x8E);
}

u16 fn_80059894(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x92);
}

u16 fn_8005989C(void *arg0, u32 arg1) {
    if (arg1 < M2C_FIELD(arg0, u32 *, 0x90)) {
        return ((u16 *)((u8 *)arg0 + 0x94))[arg1];
    }
    return 0;
}

void fn_800598C0(void) {
    void fn_8005950C(s32, s32);
    fn_8005950C(1, 0xFFFF);
}

void fn_800598EC(void) {
    void fn_8005950C(s32, s32);
    fn_8005950C(0, 0xFFFF);
}

