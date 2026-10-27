/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_80496468;

extern s32 lbl_80496440;


extern s32 lbl_80496354;
s32 fn_803798A4(void *arg0) {
    if (((u8) M2C_FIELD(arg0, u8 *, 0) == 0x59) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 0x61) && ((u8) M2C_FIELD(arg0, u8 *, 2) == 0x79)) {
        return M2C_FIELD(arg0, s32 *, 4);
    }
    return 0;
}

s32 fn_8037AD2C(s32 *self) {
    return *self;
}

void fn_8037AD9C(void *arg0, void *arg1) {
    if (arg0 != arg1) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
        M2C_FIELD(arg1, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
        M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(arg1, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
        M2C_FIELD(arg1, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
        M2C_FIELD(arg1, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(arg1, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
        M2C_FIELD(arg1, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
        M2C_FIELD(arg1, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
    }
}

#pragma peephole off
void fn_8037BAE4(void *arg0, char arg1, f32 farg0) {
    f32 fn_802434CC(f32);
    f32 fn_80243694(f32);
    void fn_8037BBC4(void *, char, f32, f32);
    f32 sinA;
    f32 cosA;

    sinA = fn_80243694(farg0);
    cosA = fn_802434CC(farg0);
    fn_8037BBC4(arg0, arg1, sinA, cosA);
}

void fn_8037BB54(void *arg0, char arg1, f32 farg0) {
    f32 fn_802434CC(f32);
    f32 fn_80243694(f32);
    void fn_8037BCC8(void *, char, f32, f32);
    f32 sinA;
    f32 cosA;

    sinA = fn_80243694(farg0);
    cosA = fn_802434CC(farg0);
    fn_8037BCC8(arg0, arg1, sinA, cosA);
}

void fn_8037BF40(void *arg0, char arg1, f32 farg0) {
    f32 fn_802434CC(f32);
    f32 fn_80243694(f32);
    void fn_8037BE90(void *, char, f32, f32);
    f32 sinA;
    f32 cosA;

    sinA = fn_80243694(farg0);
    cosA = fn_802434CC(farg0);
    fn_8037BE90(arg0, arg1, sinA, cosA);
}

#pragma peephole reset
void fn_8037BFB0(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0) = 1.0f;
    M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x10) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x14) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x18) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x24) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x28) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg2;
}

void fn_8037C020(void *arg0, void *arg1, f32 farg0, f32 farg1, f32 farg2) {
    if (arg0 != arg1) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
        M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(arg1, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
        M2C_FIELD(arg1, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(arg1, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
        M2C_FIELD(arg1, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    }
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0xC) + farg0);
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + farg1);
    M2C_FIELD(arg1, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + farg2);
}

void fn_8037C144(void *arg0, void *arg1, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * farg0);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * farg0);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * farg0);
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0xC) * farg0);
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) * farg1);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) * farg1);
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) * farg1);
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) * farg1);
    M2C_FIELD(arg1, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * farg2);
    M2C_FIELD(arg1, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) * farg2);
    M2C_FIELD(arg1, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * farg2);
    M2C_FIELD(arg1, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * farg2);
}

void fn_8037D1B8(void *arg0, void *arg1) {
    if (arg0 != arg1) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
        M2C_FIELD(arg1, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
        M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(arg1, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
        M2C_FIELD(arg1, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
        M2C_FIELD(arg1, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(arg1, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
        M2C_FIELD(arg1, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
        M2C_FIELD(arg1, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
        M2C_FIELD(arg1, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
        M2C_FIELD(arg1, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
        M2C_FIELD(arg1, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
        M2C_FIELD(arg1, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
    }
}

void fn_8037DD7C(void *arg0, void *arg1, f32 farg0, f32 farg1, f32 farg2) {
    if (arg0 != arg1) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
        M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(arg1, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(arg1, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
        M2C_FIELD(arg1, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(arg1, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
        M2C_FIELD(arg1, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
        M2C_FIELD(arg1, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
        M2C_FIELD(arg1, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
        M2C_FIELD(arg1, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
        M2C_FIELD(arg1, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
    }
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0xC) + farg0);
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + farg1);
    M2C_FIELD(arg1, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) + farg2);
}

void fn_8037DEF0(void *arg0, void *arg1, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * farg0);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * farg0);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * farg0);
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0xC) * farg0);
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) * farg1);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) * farg1);
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) * farg1);
    M2C_FIELD(arg1, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) * farg1);
    M2C_FIELD(arg1, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * farg2);
    M2C_FIELD(arg1, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) * farg2);
    M2C_FIELD(arg1, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * farg2);
    M2C_FIELD(arg1, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * farg2);
    M2C_FIELD(arg1, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg1, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg1, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg1, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
}

s32 fn_8037E534(s32 arg0) {
    extern s32 lbl_80496338;
    s32 temp_r31;

    temp_r31 = lbl_80496338;
    fn_8025465C();
    lbl_80496338 = arg0;
    fn_80254684();
    return temp_r31;
}

s32 fn_8037E780(void) {
    return lbl_80496354;
}

void fn_8037E84C(void) {
    extern s32 lbl_80496354;
    lbl_80496354 = 0;
}

void fn_8037E858(void) {

}

s32 fn_8037E85C(void) {
    return 0x4000;
}

extern s32 lbl_8049633C;
s32 fn_8037E864(void) {
    return lbl_8049633C;
}

extern s32 lbl_80496340;
s32 fn_8037E86C(void) {
    return lbl_80496340;
}

s32 fn_8037E99C(void) {
    return *(u16 *)0xCC00500A & 0x20;
}

void fn_803805DC(void) {

}

void fn_803806AC(void) {
    extern s32 lbl_8049636C;
    extern s32 lbl_80496368;
    lbl_80496368 = 0;
    lbl_8049636C = 0;
}

void fn_80380754(void) {
    extern s32 lbl_80496384;
    lbl_80496384 = 0;
}

void fn_80380A94(void) {
    M2C_UNK fn_8025465C();
    M2C_UNK fn_80254684();
    extern s32 lbl_80496358;
    extern s32 lbl_8049635C;
    extern s32 lbl_80496360;
    extern s32 lbl_80496364;
    fn_8025465C();
    lbl_80496358 = 0;
    lbl_8049635C = 0;
    lbl_80496360 = 0;
    lbl_80496364 = 0;
    fn_80254684();
}

extern s32 lbl_80496380;
s32 fn_80380AEC(void) {
    return lbl_80496380;
}

extern s32 lbl_80496384;
s32 fn_80380AF4(void) {
    return lbl_80496384;
}

void fn_80380AFC(void) {
    M2C_UNK fn_80380B20(M2C_UNK);
    fn_80380B20(0);
}

void fn_80380B6C(void) {
    M2C_UNK fn_80380F18();
    M2C_UNK fn_80383A20();
    M2C_UNK fn_80382CE4();
    M2C_UNK fn_80381518();
    M2C_UNK fn_80382004();
    M2C_UNK fn_803827A4();
    fn_80380F18();
    fn_80383A20();
    fn_80382CE4();
    fn_80381518();
    fn_80382004();
    fn_803827A4();
}

void fn_80380DB0(void) {
    extern void *lbl_80496388;
    extern void *lbl_80476440[32];
    extern void *lbl_804763C0[32];
    int i;
    lbl_80496388 = 0;
    for (i = 0; i < 32; i++) {
        lbl_80476440[i] = 0;
        lbl_804763C0[i] = 0;
    }
}

void fn_80380E64(void) {
    extern void *lbl_80496388;
    extern void *lbl_80476440[32];
    extern void *lbl_804763C0[32];
    int i;
    lbl_80496388 = 0;
    for (i = 0; i < 32; i++) {
        lbl_80476440[i] = 0;
        lbl_804763C0[i] = 0;
    }
}

void fn_80380F18(void) {
    extern void *lbl_80496388;
    extern void *lbl_80476440[32];
    extern void *lbl_804763C0[32];
    int i;
    lbl_80496388 = 0;
    for (i = 0; i < 32; i++) {
        lbl_80476440[i] = 0;
        lbl_804763C0[i] = 0;
    }
}

void **fn_80380FEC(void) {
    extern void *lbl_804763C0[];
    void **p;

    p = lbl_804763C0[0];
    if (p != NULL) {
        lbl_804763C0[0] = *p;
    }
    return p;
}

void fn_80381010(void *arg0) {
    extern void *lbl_80496388;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80496388;
    lbl_80496388 = arg0;
}

void **fn_80381020(void) {
    extern void **lbl_80496388;
    void **p;

    p = lbl_80496388;
    if (p != NULL) {
        lbl_80496388 = p[2];
    }
    return p;
}

void fn_80381518(void) {
    extern s32 lbl_80496394;
    extern s32 lbl_80496390;
    lbl_80496390 = 0;
    lbl_80496394 = 0;
}

void fn_80381528(void **arg0) {
    extern u8 lbl_804764C0[][0x780];
    extern s32 lbl_804963B0;
    extern void *lbl_80496390;
    if (lbl_80496390 != NULL) {
        *arg0 = lbl_804764C0[lbl_804963B0];
    } else {
        *arg0 = NULL;
    }
}

void fn_8038155C(void **arg0) {
    extern u8 lbl_80477B40[][0x780];
    extern s32 lbl_804963B0;
    *arg0 = lbl_80477B40[lbl_804963B0] + 0x500;
}

void fn_8038157C(void **arg0) {
    extern u8 lbl_804764C0[][0x780];
    extern s32 lbl_804963B4;
    *arg0 = lbl_804764C0[lbl_804963B4];
}

void fn_80381598(void **arg0) {
    extern u8 lbl_804764C0[][0x780];
    extern s32 lbl_804963B4;
    *arg0 = lbl_804764C0[lbl_804963B4] + 0x280;
}

void fn_803815B8(void **arg0) {
    extern u8 lbl_804764C0[][0x780];
    extern s32 lbl_804963B4;
    *arg0 = lbl_804764C0[lbl_804963B4] + 0x500;
}

void fn_803815D8(void **arg0) {
    extern u8 lbl_80477B40[][0x780];
    extern s32 lbl_804963B4;
    *arg0 = lbl_80477B40[lbl_804963B4] + 0x500;
}

void fn_803815F8(void **arg0) {
    extern u8 lbl_80477B40[][0x780];
    extern s32 lbl_804963B0;
    extern void *lbl_80496394;
    if (lbl_80496394 != NULL) {
        *arg0 = lbl_80477B40[lbl_804963B0];
    } else {
        *arg0 = NULL;
    }
}

void fn_8038162C(void **arg0) {
    extern u8 lbl_80477B40[][0x780];
    extern s32 lbl_804963B4;
    *arg0 = lbl_80477B40[lbl_804963B4];
}

void fn_80381648(void **arg0) {
    extern u8 lbl_80477B40[][0x780];
    extern s32 lbl_804963B8;
    *arg0 = lbl_80477B40[lbl_804963B8];
}

void fn_80381664(void **arg0) {
    extern u8 lbl_80477B40[][0x780];
    extern s32 lbl_804963BC;
    *arg0 = lbl_80477B40[lbl_804963BC];
}

void fn_803818BC(s32 arg0, s32 arg1) {
    extern s32 lbl_80496390;
    extern s32 lbl_80496398;
    lbl_80496390 = arg0;
    lbl_80496398 = arg1;
}

void fn_803818C8(s32 arg0, s32 arg1) {
    extern s32 lbl_80496394;
    extern s32 lbl_8049639C;
    lbl_80496394 = arg0;
    lbl_8049639C = arg1;
}

extern s32 lbl_804963D0;
s32 fn_803818D4(void) {
    return lbl_804963D0;
}

void fn_80382004(void) {

}

extern s32 lbl_804963D8;
s32 fn_8038201C(void) {
    return lbl_804963D8;
}

extern s32 lbl_804963D4;
void fn_80382024(s32 arg0) {
    lbl_804963D4 = arg0;
}

void fn_803822A0(void) {
    extern s32 lbl_804963FC;
    lbl_804963FC = 1;
}

extern s32 lbl_80496404;
void fn_803822AC(s32 arg0) {
    lbl_80496404 = arg0;
}

void fn_8038230C(void) {
    M2C_UNK fn_80259838(M2C_UNK *);
    extern s32 lbl_80496400;
    extern M2C_UNK lbl_80496408;
    lbl_80496400 = 1;
    fn_80259838(&lbl_80496408);
}

s32 fn_803827FC(s32 arg0) {
    extern s32 lbl_804963F8;
    s32 temp_r31;

    temp_r31 = lbl_804963F8;
    fn_8025465C();
    lbl_804963F8 = arg0;
    fn_80254684();
    return temp_r31;
}

extern u8 lbl_8047E260[];
void *fn_80382840(void) {
    return lbl_8047E260;
}

void fn_80382CB8(void) {
    extern s32 lbl_80496418;
    extern s32 lbl_8049641C;
    extern s32 lbl_80496420;
    extern s32 lbl_80496424;
    extern s32 lbl_80496428;
    extern s32 lbl_8049642C;
    extern s32 lbl_80496430;
    extern s32 lbl_80496434;
    extern s32 lbl_80496438;
    lbl_80496438 = 0;
    lbl_80496434 = 0;
    lbl_80496430 = 0;
    lbl_8049642C = 0;
    lbl_80496428 = 0;
    lbl_80496424 = 0;
    lbl_80496420 = 0;
    lbl_8049641C = 0;
    lbl_80496418 = 0;
}

void fn_80382CE4(void) {

}

extern s32 lbl_80496448;
s32 fn_80382D7C(void) {
    return lbl_80496448;
}

extern u8 lbl_8047E2A0[];
void *fn_803837CC(void) {
    return lbl_8047E2A0;
}

void fn_80383A20(void) {

}

void fn_80383B44(void *arg0, s16 arg1) {
    fn_8025465C();
    M2C_FIELD(arg0, s16 *, 0x148) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 8);
    fn_80254684();
}

void fn_80383DE4(void *arg0) {
    fn_8025465C();
    M2C_FIELD(arg0, s16 *, 0x16E) = 1;
    M2C_FIELD(arg0, s16 *, 0x17A) = 0;
    M2C_FIELD(arg0, s16 *, 0x178) = 0;
    M2C_FIELD(arg0, s16 *, 0x176) = 0;
    M2C_FIELD(arg0, s16 *, 0x174) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFFBF);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 0x20);
    fn_80254684();
}

void fn_80383E48(void *arg0, s16 arg1, s16 arg2) {
    fn_8025465C();
    M2C_FIELD(arg0, s16 *, 0x178) = arg1;
    M2C_FIELD(arg0, s16 *, 0x17A) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 0x40);
    fn_80254684();
}

void fn_80384010(void *arg0, void *arg1) {
    fn_8025465C();
    M2C_FIELD(arg0, u16 *, 0x19C) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, s16 *, 0x19E) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 0x200);
    fn_80254684();
}

void fn_80384068(void *arg0, s16 arg1) {
    fn_8025465C();
    M2C_FIELD(arg0, s16 *, 0x19E) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 0x400);
    fn_80254684();
}

void fn_803840B4(void *arg0, void *arg1) {
    fn_8025465C();
    M2C_FIELD(arg0, u16 *, 0x1A0) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, u16 *, 0x1A2) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, u16 *, 0x1A4) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 0x800);
    fn_80254684();
}

void fn_80384224(void *arg0, s16 arg1) {
    fn_8025465C();
    M2C_FIELD(arg0, s16 *, 0x1A6) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 0x2000);
    fn_80254684();
}

void fn_80384620(void *arg0, s16 arg1, s16 arg2) {
    fn_8025465C();
    M2C_FIELD(arg0, s16 *, 0x1F6) = arg1;
    M2C_FIELD(arg0, s16 *, 0x1F8) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 0x400000);
    fn_80254684();
}

void fn_80384798(s32 arg0) {
    lbl_80496440 = arg0;
}

extern s32 lbl_80496440;
s32 fn_803847A0(void) {
    return lbl_80496440;
}

extern s32 lbl_80496444;
s32 fn_803847A8(void) {
    return lbl_80496444;
}

void fn_803847F8(s32 arg0, s32 arg1) {
    extern s32 lbl_80496450;
    extern s32 lbl_80496454;
    extern s32 lbl_80496458;
    extern s32 lbl_8049645C;
    lbl_80496450 = arg0;
    lbl_80496454 = arg1;
    lbl_80496458 = 0;
    lbl_8049645C = 1;
}

s32 fn_803849D0(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 > 0x7F) {
        return 0x7F;
    }
    return arg0;
}

void fn_80384AB8(void) {

}

void fn_80384ABC(s32 arg0) {
    lbl_80496468 = arg0;
}

extern s32 lbl_80496468;
s32 fn_80384AC4(void) {
    return lbl_80496468;
}

extern s32 lbl_80496464;
s32 fn_80385FA0(void) {
    return lbl_80496464;
}

s32 fn_80387024(void) {
    return ((u16) *(u16 *)0xCC005000 >> 0xFU) & 1;
}

s32 fn_80387034(void) {
    return ((u16) *(u16 *)0xCC005004 >> 0xFU) & 1;
}

extern s32 lbl_80496470;
s32 fn_80387188(void) {
    return lbl_80496470;
}

s32 fn_80387254(void) {
    return *(u16 *)0xCC00500A & 0x200;
}

void *fn_803872D4(void *arg0) {
    fn_8025465C();
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 2);
    fn_80254684();
    return arg0;
}

extern s32 lbl_80496498;
s32 fn_8038742C(void) {
    return lbl_80496498;
}

void fn_80387D30(void) {

}

u16 fn_80388F84(void) {
    extern u16 lbl_804964A0;
    return lbl_804964A0;
}

s32 fn_80389540(s32 arg0) {
    s32 fn_8038B684(M2C_UNK);
    if ((arg0 == 0) && ((fn_8038B684(0) == -1) || (fn_8038B684(1) == -1))) {
        return 0;
    }
    return 1;
}

s32 fn_80389590(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

s32 fn_80389994(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_8038AD04(s32 chan) {
    s32 fn_8025BFA8(s32);
    if (*(u8 *)0x800030E3 & 0x80) {
        return 0;
    }
    return fn_8025BFA8(chan);
}

s32 fn_8038B5A0(s32 chan, s32 arg1, s32 arg2) {
    s32 fn_803894A8(s32);
    s32 fn_8038B400(s32, s32, s32, void *);
    extern void fn_80387D34(void);
    s32 result;

    result = fn_8038B400(chan, arg1, arg2, fn_80387D34);
    if (result < 0) {
        return result;
    }
    return fn_803894A8(chan);
}

void fn_8038B5E8(s32 chan, s32 arg1) {
    void fn_80251378(void *);
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    void fn_8025BD6C(s32, s32);
    void fn_8025C2BC(s32);
    extern u8 lbl_804912A0[];
    s32 *p;
    s32 enabled;

    p = (s32 *)(lbl_804912A0 + chan * 0x110);
    enabled = fn_8025465C();
    if (p[0] != 0) {
        fn_8025BD6C(chan, 0);
        fn_8025C2BC(chan);
        fn_80251378((u8 *)p + 0xE0);
        p[0] = 0;
        p[1] = arg1;
        p[9] = 0;
    }
    fn_80254684(enabled);
}

s32 fn_8038B684(s32 chan) {
    s32 fn_8038907C(s32, void *);
    u8 sp8[4];
    s32 result;

    result = fn_8038907C(chan, sp8);
    if (result < 0) {
        return result;
    }
    fn_8038B5E8(chan, -3);
    return 0;
}

s32 fn_8038B874(s32 chan, u16 encode, void *callback);
s32 fn_8038BECC(s32 chan, u16 encode) {
    s32 fn_803894A8(s32);
    extern void fn_80387D34(void);
    s32 result;

    result = fn_8038B874(chan, encode, fn_80387D34);
    if (result < 0) {
        return result;
    }
    return fn_803894A8(chan);
}

#pragma dont_inline on
s32 fn_8038BF14(s32 chan, void *callback) {
    return fn_8038B874(chan, fn_80388F84(), callback);
}
s32 fn_8038BF5C(s32 chan) {
    s32 fn_803894A8(s32);
    extern void fn_80387D34(void);
    s32 result;

    result = fn_8038B874(chan, fn_80388F84(), fn_80387D34);
    if (result < 0) {
        return result;
    }
    return fn_803894A8(chan);
}
#pragma dont_inline reset
BOOL fn_8038BFB0(void *dir, const char *fileName) {
    char *entName;
    char c1, c2;
    int n;

    entName = (char *)dir + 8;
    n = 32;
    while (0 <= --n) {
        if ((c1 = *entName++) != (c2 = *fileName++)) {
            return FALSE;
        } else if (c2 == '\0') {
            return TRUE;
        }
    }
    if (*fileName == '\0') {
        return TRUE;
    }
    return FALSE;
}

s32 fn_8038C698(void) {
    return 0;
}

s32 fn_8038CE64(s32 *self, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_803894A8(s32);
    s32 fn_8038CD20(s32 *, s32, s32, s32, void *);
    extern void fn_80387D34(void);
    s32 result;

    result = fn_8038CD20(self, arg1, arg2, arg3, fn_80387D34);
    if (result < 0) {
        return result;
    }
    return fn_803894A8(self[0]);
}

s32 fn_8038CEAC(void *arg0) {
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    extern u8 lbl_804912A0[];
    s32 *self = arg0;
    u8 *p;
    s32 enabled;
    s32 result;

    enabled = fn_8025465C();
    p = lbl_804912A0 + self[0] * 0x110;
    result = 0;
    if (M2C_FIELD(p, s32 *, 0) == 0) {
        result = -3;
    } else if (M2C_FIELD(p, s32 *, 4) == -1 && M2C_FIELD(p, void **, 0xC0) == (void *) self) {
        self[3] = -1;
        result = -0xe;
    }
    fn_80254684(enabled);
    return result;
}

void fn_8038D0A8(s32 chan, s32 result) {
    s32 fn_8038F67C(s32, s32, s32, s32, void *);
    void fn_80389134(void *, s32);
    extern void fn_8038CF38(void);
    extern u8 lbl_804912A0[];
    u8 *p;
    void (*cb)(s32, s32);

    p = lbl_804912A0 + chan * 0x110;
    if (result >= 0) {
        result = fn_8038F67C(chan, M2C_FIELD(p, s32 *, 0xC) * M2C_FIELD(M2C_FIELD(p, void **, 0xC0), u16 *, 0x10), M2C_FIELD(p, s32 *, 0xC), M2C_FIELD(p, s32 *, 0xB4), fn_8038CF38);
        if (result >= 0) {
            return;
        }
    }
    cb = (void (*)(s32, s32)) M2C_FIELD(p, void **, 0xD0);
    M2C_FIELD(p, void **, 0xD0) = 0;
    fn_80389134(p, result);
    cb(chan, result);
}

s32 fn_8038D358(s32 chan, s32 fileNo, void *callback);
s32 fn_8038D484(s32 chan, s32 fileNo) {
    s32 fn_803894A8(s32);
    extern void fn_80387D34(void);
    s32 result;

    result = fn_8038D358(chan, fileNo, fn_80387D34);
    if (result < 0) {
        return result;
    }
    return fn_803894A8(chan);
}

s32 fn_8038D4CC(s32 chan, s32 fileNo, void *callback);
s32 fn_8038D5DC(s32 chan, s32 fileNo) {
    s32 fn_803894A8(s32);
    extern void fn_80387D34(void);
    s32 result;

    result = fn_8038D4CC(chan, fileNo, fn_80387D34);
    if (result < 0) {
        return result;
    }
    return fn_803894A8(chan);
}

s32 fn_8038DAA4(s32 chan, s32 arg1, s32 arg2) {
    s32 fn_803894A8(s32);
    s32 fn_8038D930(s32, s32, s32, void *);
    extern void fn_80387D34(void);
    s32 result;

    result = fn_8038D930(chan, arg1, arg2, fn_80387D34);
    if (result < 0) {
        return result;
    }
    return fn_803894A8(chan);
}

u16 fn_8038DAFC(void) {
    extern u16 lbl_80495660;
    return lbl_80495660;
}

s32 fn_8038DD80(s32 chan, s32 arg1, s32 arg2) {
    s32 fn_803894A8(s32);
    s32 fn_8038DC9C(s32, s32, s32, void *);
    extern void fn_80387D34(void);
    s32 result;

    result = fn_8038DC9C(chan, arg1, arg2, fn_80387D34);
    if (result < 0) {
        return result;
    }
    return fn_803894A8(chan);
}

s32 fn_8038DE10(s32 arg0) {
    extern u8 lbl_80495662;
    s32 var_r4;

    if (lbl_80495662 & 0x20) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    if (arg0 != 0) {
        lbl_80495662 |= 0x20;
    } else {
        lbl_80495662 &= 0xFFFFFFDF;
    }
    return var_r4;
}

extern s32 lbl_80495668;
void fn_8038DEBC(s32 arg0) {
    lbl_80495668 = arg0;
}

s32 fn_8038FA38(s32 chan, s32 arg1, s32 arg2) {
    s32 fn_803894A8(s32);
    s32 fn_8038F79C(s32, s32, s32, void *);
    extern void fn_80387D34(void);
    s32 result;

    result = fn_8038F79C(chan, arg1, arg2, fn_80387D34);
    if (result < 0) {
        return result;
    }
    return fn_803894A8(chan);
}

