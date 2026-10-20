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

void fn_80381010(void *arg0) {
    extern void *lbl_80496388;
    M2C_FIELD(arg0, void **, 8) = (void *) lbl_80496388;
    lbl_80496388 = arg0;
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

s32 fn_8038C698(void) {
    return 0;
}

u16 fn_8038DAFC(void) {
    extern u16 lbl_80495660;
    return lbl_80495660;
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

