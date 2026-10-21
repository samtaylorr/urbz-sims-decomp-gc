/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 pad0[0x14];
    void *unk14;
    u8 pad18[0x2C - 0x18];
    s32 unk2C[1];
} EIWallPartFlags;

extern void fn_802D30D4(void *, s32 *);
extern void fn_802E34F0(void *, void *);
void fn_8002DA3C(void) {

}

void fn_8002DA40(void) {

}

void fn_8002DBA4(void *arg0) {
    M2C_UNK fn_8002F824(s32, s32);
    fn_8002F824(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10C));
}

void fn_8002E62C(void *arg0) {
    s32 fn_800F4150(s32, M2C_UNK *, M2C_UNK);
    M2C_UNK fn_802CB5C4(void *, void *);
    extern M2C_UNK lbl_80496720;
    void *temp_r28;
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;
    void *var_r30;

    var_r30 = M2C_FIELD(arg0, void **, 0x4C);
    if (var_r30 != NULL) {
        do {
            temp_r31 = M2C_FIELD(var_r30, void **, 0);
            temp_r28 = M2C_FIELD(var_r30, void **, 8);
            if (fn_800F4150(temp_r31 + 0x110, &lbl_80496720, 0) != 0) {
                temp_r9 = M2C_FIELD(arg0, void **, 0x44);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, void *), 0x7C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x78), temp_r31);
                if (temp_r31 != NULL) {
                    temp_r9_2 = M2C_FIELD(temp_r31, void **, 0x44);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r31 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
                }
                fn_802CB5C4(arg0 + 0x4C, var_r30);
            }
            var_r30 = temp_r28;
        } while (var_r30 != NULL);
    }
}

void fn_8002EFD0(void *arg0) {
    M2C_UNK fn_8002D800(s32);
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x4C);
    if (var_r31 != NULL) {
        do {
            fn_8002D800(M2C_FIELD(var_r31, s32 *, 0));
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}

s32 fn_8002F014(void *arg0, s32 arg1) {
    s32 fn_800F47E4(s32, s32);
    s32 temp_r30;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x4C);
    if (var_r31 != NULL) {
loop_1:
        temp_r30 = M2C_FIELD(var_r31, s32 *, 0);
        if (fn_800F47E4(temp_r30 + 0x110, arg1) != 0) {
            return temp_r30;
        }
        var_r31 = M2C_FIELD(var_r31, void **, 8);
        if (var_r31 == NULL) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return 0;
}

void fn_8002F818(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
}

s32 fn_80030680(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xAC);
}

u8 fn_80030688(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x3B);
}

u8 fn_800306FC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x3B);
}

u8 fn_80030758(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x3B);
}

s32 fn_80030804(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    switch (arg0) {                                 /* irregular */
    case 3:
        return 1;
    case 9:
        return 7;
    case 6:
        return 8;
    case 1:
        return 2;
    case 2:
        return 3;
    case 12:
        return 6;
    case 4:
        return 4;
    case 8:
        return 5;
    default:
        return 0;
    }
}

void fn_800328F8(char *self, void *arg1) {
    fn_802E34F0(arg1, self + 0x44);
}

s32 fn_80032924(EIWallPartFlags *self, s32 i) {
    return self->unk2C[i];
}

s32 fn_80032934(EIWallPartFlags *self, s32 i) {
    char *node = (char *)self->unk14;

    if (node == NULL) {
        self->unk2C[i] = (s32)node;
        return 0;
    }
    self->unk2C[i] = 1;
    for (; node != NULL; node = *(char **)(node + 8)) {
        void **obj = *(void ***)node;
        char *vt = (char *)*obj;
        s32 r = (*(s32 (**)(void *))(vt + 0x144))((char *)obj + *(s16 *)(vt + 0x140));
        if (r == 0) {
            self->unk2C[i] = r;
            break;
        }
    }
    return self->unk2C[i];
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80032BA4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80032BD8(void) {
    fn_802D2FD0();
}

s32 fn_80032BF8(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_80032C38(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80033054(void) {
    fn_802D2FD0();
}

s32 fn_80033074(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_800330B4(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80033A3C(void) {
    fn_802F4AB8();
}

s16 fn_80034F8C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x322);
}

void fn_80035CD4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_800364C0(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800359FC(s32, s32, s32);
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    if (var_r31 != NULL) {
        do {
            fn_800359FC(M2C_FIELD(var_r31, s32 *, 0), arg1, arg2);
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}

void fn_800382D0(s32 arg0, void **arg1) {
    M2C_UNK fn_800381A4(s32, s32, s32);
    s32 temp_r4;
    void *var_r31;

    var_r31 = *arg1;
    if (var_r31 != NULL) {
        do {
            temp_r4 = M2C_FIELD(var_r31, s32 *, 0);
            fn_800381A4(arg0, temp_r4 + 8, temp_r4 + 0x14);
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}

extern void *fn_80032AE0(u32);
extern void fn_800331DC(void *);
void *fn_80039DC8(u32 size, void *p);
void fn_80039C54(void) {
    fn_800331DC(fn_80032AE0(0x380));
}

void fn_80039C7C(void *p) {
    fn_800331DC(fn_80039DC8(0x380, p));
}

extern void fn_800352A4(void *, s32);
void fn_80039CA8(void *self) {
    fn_800352A4(self, 2);
}

void fn_80039CCC(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491C00[];
void *fn_80039D0C(void) {
    return lbl_80491C00;
}

extern s32 lbl_80491C0C[];
s32 fn_80039D18(void) {
    return lbl_80491C0C[0];
}

extern s32 lbl_80491C10[];
s32 fn_80039D24(void) {
    return lbl_80491C10[0];
}

extern u16 lbl_80491C14[];
u16 fn_80039D30(void) {
    return lbl_80491C14[0];
}

void *fn_80039D3C(void) {
    return lbl_80491C00;
}

extern u16 lbl_80491C16[];
u16 fn_80039D48(void) {
    return lbl_80491C16[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80039C54(void);
extern void fn_80039C7C(void *);
extern void fn_80039CA8(void *);
extern u8 lbl_803C56AC[];
extern u8 lbl_80491C50[];
void fn_80039D54(s32 arg0) {
    fn_802D6A90(lbl_80491C00, fn_80039C54, fn_80039C7C, fn_80039CA8, arg0, lbl_803C56AC, lbl_80491C50);
}

void fn_80039DA8(void) {
    fn_802D2430();
}

void *fn_80039DC8(u32 size, void *p) {
    return p;
}

s32 fn_80039DD0(void *arg0) {
    s32 ret = 1;
    if (!(M2C_FIELD(arg0, s32 *, 0x300) & 0x30)) {
        ret = 0;
    }
    return ret;
}

s32 fn_80039DE8(s32 arg0) {
    s32 var_r0;

    var_r0 = 1;
    if (!(arg0 & 0x30)) {
        var_r0 = 0;
    }
    return var_r0;
}

void fn_80039E00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x378) = arg1;
}

extern void *fn_80039F7C(u32);
extern void fn_8003A064(void *);
void fn_80039E08(void) {
    fn_8003A064(fn_80039F7C(0x380));
}

void fn_80039E30(void *p) {
    fn_8003A064(fn_8003A028(0x380, p));
}

void fn_80039E5C(void *self) {
    extern void fn_80032F5C(void *, s32);
    fn_80032F5C(self, 2);
}

void fn_80039E80(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491C28[];
void *fn_80039EC0(void) {
    return lbl_80491C28;
}

extern s32 lbl_80491C34[];
s32 fn_80039ECC(void) {
    return lbl_80491C34[0];
}

extern s32 lbl_80491C38[];
s32 fn_80039ED8(void) {
    return lbl_80491C38[0];
}

extern u16 lbl_80491C3C[];
u16 fn_80039EE4(void) {
    return lbl_80491C3C[0];
}

void *fn_80039EF0(void) {
    return lbl_80491C28;
}

extern u16 lbl_80491C3E[];
u16 fn_80039EFC(void) {
    return lbl_80491C3E[0];
}

extern void fn_80039E08(void);
extern void fn_80039E30(void *);
extern void fn_80039E5C(void *);
extern u8 lbl_803C56B8[];
void fn_80039F08(s32 arg0) {
    fn_802D6A90(lbl_80491C28, fn_80039E08, fn_80039E30, fn_80039E5C, arg0, lbl_803C56B8, lbl_80491C00);
}

void fn_80039F5C(void) {
    fn_802D2430();
}

void *fn_8003A028(u32 size, void *p);
void *fn_8003A028(u32 size, void *p) {
    return p;
}

void fn_8003A030(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8003A0AC(void) {
    return 0;
}

void fn_8003A178(void) {
    M2C_UNK fn_80039B84(M2C_UNK, M2C_UNK);
    fn_80039B84(1, 0xFFFF);
}

