/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_80496468;

volatile u16 __DSPRegs[] : 0xCC005000;

typedef struct DSPTaskInfo {
    u32 state;
    u32 priority;
    u32 flags;
    u8 pad_0C[0x38 - 0x0C];
    struct DSPTaskInfo *next;
    struct DSPTaskInfo *prev;
} DSPTaskInfo;

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

#pragma peephole off
void fn_8037E00C(void *arg0, char arg1, f32 farg0) {
    f32 fn_802434CC(f32);
    f32 fn_80243694(f32);
    void fn_8037E0EC(void *, char, f32, f32);
    f32 sinA;
    f32 cosA;

    sinA = fn_80243694(farg0);
    cosA = fn_802434CC(farg0);
    fn_8037E0EC(arg0, arg1, sinA, cosA);
}

void fn_8037E07C(void *arg0, char arg1, f32 farg0) {
    f32 fn_802434CC(f32);
    f32 fn_80243694(f32);
    void fn_8037E208(void *, char, f32, f32);
    f32 sinA;
    f32 cosA;

    sinA = fn_80243694(farg0);
    cosA = fn_802434CC(farg0);
    fn_8037E208(arg0, arg1, sinA, cosA);
}

#pragma peephole off
void fn_8037E4C4(void *arg0, char arg1, f32 farg0) {
    f32 fn_802434CC(f32);
    f32 fn_80243694(f32);
    void fn_8037E408(void *, char, f32, f32);
    f32 sinA;
    f32 cosA;

    sinA = fn_80243694(farg0);
    cosA = fn_802434CC(farg0);
    fn_8037E408(arg0, arg1, sinA, cosA);
}
#pragma peephole reset

#pragma peephole reset
#pragma peephole reset

s32 fn_8037E534(s32 arg0) {
    extern s32 lbl_80496338;
    s32 temp_r31;

    temp_r31 = lbl_80496338;
    fn_8025465C();
    lbl_80496338 = arg0;
    fn_80254684();
    return temp_r31;
}

u32 fn_8037E578(void) {
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    s32 enabled;
    u32 ret;

    enabled = fn_8025465C();
    ret = *(volatile u16 *)0xCC00500A & 0x200;
    fn_80254684(enabled);
    return ret;
}

s32 fn_8037E6A4(s32 arg0) {
    extern s32 lbl_80496348;
    extern s32 lbl_8049634C;
    extern s32 *lbl_80496350;
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    s32 enabled;
    s32 ret;

    enabled = fn_8025465C();
    ret = lbl_80496348;
    lbl_80496348 += arg0;
    *lbl_80496350 = arg0;
    lbl_80496350++;
    lbl_8049634C--;
    fn_80254684(enabled);
    return ret;
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

void fn_8037E904(s16 interrupt, void *context) {
    void fn_80252AAC(void *);
    void fn_802528A4(void *);
    extern void (*lbl_80496338)(void);
    u8 exceptionContext[0x2C8];
    u16 tmp;

    tmp = __DSPRegs[5];
    __DSPRegs[5] = (tmp & ~0x88) | 0x20;
    fn_80252AAC(exceptionContext);
    fn_802528A4(exceptionContext);
    if (lbl_80496338) {
        lbl_80496338();
    }
    fn_80252AAC(exceptionContext);
    fn_802528A4(context);
}

void fn_8037E97C(void) {
    u16 tmp = __DSPRegs[5];
    __DSPRegs[5] = (tmp & ~0x88) | 0x20;
}

s32 fn_8037E99C(void) {
    return *(u16 *)0xCC00500A & 0x20;
}

void fn_8037E9AC(void) {
    while (__DSPRegs[5] & 0x200) {
    }
}

void fn_8037E9C4(u32 mainmem, u32 aram, u32 length) {
    __DSPRegs[16] = (u16)((__DSPRegs[16] & ~0x3ff) | (u16)(mainmem >> 16));
    __DSPRegs[17] = (u16)((__DSPRegs[17] & ~0xffe0) | (u16)(mainmem & 0xffff));
    __DSPRegs[18] = (u16)((__DSPRegs[18] & ~0x3ff) | (u16)(aram >> 16));
    __DSPRegs[19] = (u16)((__DSPRegs[19] & ~0xffe0) | (u16)(aram & 0xffff));
    __DSPRegs[20] = (u16)(__DSPRegs[20] & ~0x8000);
    __DSPRegs[20] = (u16)((__DSPRegs[20] & ~0x3ff) | (u16)(length >> 16));
    __DSPRegs[21] = (u16)((__DSPRegs[21] & ~0xffe0) | (u16)(length & 0xffff));
    fn_8037E9AC();
    fn_8037E97C();
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
void fn_80380ACC(s32 arg0) {
    if (arg0 & 0x1F) {
        lbl_80496380 = arg0 + (0x20 - (arg0 & 0x1F));
    } else {
        lbl_80496380 = arg0;
    }
}

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

void fn_80380B20(s32 arg0) {
    extern char *lbl_80495640;
    void OSRegisterVersion(const char *);
    M2C_UNK fn_80380E64();
    M2C_UNK fn_8038381C();
    M2C_UNK fn_80382CB8();
    M2C_UNK fn_80381434();
    M2C_UNK fn_80381FE0();
    M2C_UNK fn_80382404(s32);
    OSRegisterVersion(lbl_80495640);
    fn_80380E64();
    fn_8038381C();
    fn_80382CB8();
    fn_80381434();
    fn_80381FE0();
    fn_80382404(arg0);
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

void *fn_80380D24(s32 arg0) {
    extern void *lbl_804763C0[32];
    return lbl_804763C0[arg0];
}

void fn_80380D3C(void) {
    void *fn_80381020(void);
    void fn_8038103C(void *);
    void fn_80380FCC(void *);
    void *p;
    for (p = fn_80381020(); p != NULL; p = fn_80381020()) {
        if (M2C_FIELD(p, void **, 0xC) != NULL) {
            if (M2C_FIELD(p, void (**)(void *), 0x10) != NULL) {
                M2C_FIELD(p, void (**)(void *), 0x10)(p);
            }
            fn_8038103C(p);
            fn_80380FCC(p);
        }
    }
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

void fn_80380FCC(void *arg0) {
    extern void *lbl_804763C0[];
    M2C_FIELD(arg0, void **, 0) = lbl_804763C0[0];
    lbl_804763C0[0] = arg0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
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

void fn_8038103C(void *arg0) {
    typedef struct QNode_ {
        struct QNode_ *next;
        struct QNode_ *prev;
        void *unk8;
        u32 idx;
    } QNode_;
    extern QNode_ *lbl_804763C0[32];
    extern QNode_ *lbl_80476440[32];
    QNode_ *node = arg0;
    QNode_ **head = &lbl_804763C0[node->idx];
    QNode_ **tail = &lbl_80476440[node->idx];
    QNode_ *prev;
    QNode_ *next;

    if (*head == *tail) {
        *tail = NULL;
        *head = NULL;
    } else if (node == *head) {
        *head = node->next;
        (*head)->prev = NULL;
    } else if (node == *tail) {
        *tail = node->prev;
        (*tail)->next = NULL;
    } else {
        prev = node->prev;
        next = node->next;
        prev->next = next;
        next->prev = prev;
    }
}

void fn_803810D0(void *arg0, u32 idx) {
    typedef struct QNode_ {
        struct QNode_ *next;
        struct QNode_ *prev;
        void *unk8;
        u32 idx;
    } QNode_;
    extern QNode_ *lbl_804763C0[32];
    extern QNode_ *lbl_80476440[32];
    QNode_ *node = arg0;

    node->next = lbl_804763C0[idx];
    node->prev = NULL;
    if (node->next != NULL) {
        lbl_804763C0[idx]->prev = node;
        lbl_804763C0[idx] = node;
    } else {
        lbl_80476440[idx] = node;
        lbl_804763C0[idx] = node;
    }
    node->idx = idx;
}

void *fn_80381128(u32 idx) {
    typedef struct QNode_ {
        struct QNode_ *next;
        struct QNode_ *prev;
        void *unk8;
        u32 idx;
    } QNode_;
    extern QNode_ *lbl_804763C0[32];
    extern QNode_ *lbl_80476440[32];
    QNode_ *ret = NULL;

    if (lbl_804763C0[idx] != NULL) {
        if (lbl_804763C0[idx] == lbl_80476440[idx]) {
            ret = lbl_804763C0[idx];
            lbl_80476440[idx] = NULL;
            lbl_804763C0[idx] = NULL;
        } else if (lbl_80476440[idx] != NULL) {
            ret = lbl_80476440[idx];
            lbl_80476440[idx] = ret->prev;
            lbl_80476440[idx]->next = NULL;
        }
    }
    return ret;
}

void fn_80381198(void *arg0) {
    typedef struct QNode_ {
        struct QNode_ *next;
        struct QNode_ *prev;
        void *unk8;
        u32 idx;
    } QNode_;
    extern QNode_ *lbl_804763C0[32];
    void fn_803837D8(void *);
    s32 enabled;
    QNode_ *node;

    enabled = fn_8025465C();
    node = arg0;
    fn_8038103C(node);
    if (*(u16 *)((u8 *)node + 0x146) == 1) {
        *(s32 *)((u8 *)node + 0x20) = 1;
        fn_803837D8(node);
    }
    node->next = lbl_804763C0[0];
    lbl_804763C0[0] = node;
    node->idx = 0;
    fn_80254684(enabled);
}

void fn_8038138C(void *arg0, u32 idx) {
    typedef struct QNode_ {
        struct QNode_ *next;
        struct QNode_ *prev;
        void *unk8;
        u32 idx;
    } QNode_;
    extern QNode_ *lbl_804763C0[32];
    extern QNode_ *lbl_80476440[32];
    s32 enabled;
    QNode_ *node;

    enabled = fn_8025465C();
    node = arg0;
    fn_8038103C(node);
    node->next = lbl_804763C0[idx];
    node->prev = NULL;
    if (node->next != NULL) {
        lbl_804763C0[idx]->prev = node;
        lbl_804763C0[idx] = node;
    } else {
        lbl_80476440[idx] = node;
        lbl_804763C0[idx] = node;
    }
    node->idx = idx;
    fn_80254684(enabled);
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

void *fn_803818DC(void) {
    extern s32 lbl_804963C8;
    extern void *lbl_804963CC;
    extern u8 lbl_804791C0[][0x300];
    void *ret = lbl_804791C0[lbl_804963C8++];
    lbl_804963C8 &= 1;
    lbl_804963CC = lbl_804791C0[lbl_804963C8];
    return ret;
}

void fn_80381918(u16 arg0) {
    extern u16 *lbl_804963CC;
    *lbl_804963CC = arg0;
    lbl_804963CC++;
}

void fn_80381FE0(void) {
    extern s32 lbl_804963D8;
    extern s32 lbl_804963C8;
    extern void *lbl_804963CC;
    extern s32 lbl_804963D4;
    extern u8 lbl_804791C0[];
    lbl_804963D8 = 0;
    lbl_804963C8 = 0;
    lbl_804963CC = lbl_804791C0;
    lbl_804963D4 = 1;
}

void fn_80382004(void) {

}

void fn_80382008(u32 arg0) {
    extern u32 lbl_804963D8;
    if (lbl_804963D8 != arg0) {
        lbl_804963D8 = arg0;
    }
}

extern s32 lbl_804963D8;
s32 fn_8038201C(void) {
    return lbl_804963D8;
}

extern s32 lbl_804963D4;
void fn_80382024(s32 arg0) {
    lbl_804963D4 = arg0;
}

void fn_803821E4(void) {
    extern u32 lbl_804963E8;
    extern s64 lbl_804963F0;
    extern u32 lbl_80496410;
    extern u32 lbl_804963E4;
    extern u8 lbl_8047E1C0[];
    extern u8 lbl_804797C0[];
    s64 fn_8025A3DC(void);
    void fn_8038202C(u32);
    void fn_80387314(void *);
    void fn_8026BB2C(void *, u32);

    if (lbl_804963E8 == 0) {
        lbl_804963F0 = fn_8025A3DC();
    }
    if (lbl_804963E8 == 1) {
        lbl_804963E8 = 0;
        fn_8038202C(0);
    } else {
        lbl_804963E8 = 2;
        fn_80387314(lbl_8047E1C0);
    }
    if (lbl_80496410 == 1) {
        fn_8026BB2C(lbl_804797C0 + lbl_804963E4 * 0x280, 0x280);
        lbl_804963E4++;
        lbl_804963E4 = lbl_804963E4 % 3;
    }
}

void fn_803822A0(void) {
    extern s32 lbl_804963FC;
    lbl_804963FC = 1;
}

extern s32 lbl_80496404;
void fn_803822AC(s32 arg0) {
    lbl_80496404 = arg0;
}

void fn_803822B4(void) {
    extern u32 lbl_804963E8;
    extern volatile s64 lbl_804963F0;
    s64 fn_8025A3DC(void);
    void fn_8038202C(u32);

    if (lbl_804963E8 == 2) {
        lbl_804963E8 = 0;
        fn_8038202C((u32)(fn_8025A3DC() - lbl_804963F0) / 4);
    } else {
        lbl_804963E8 = 1;
    }
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

void fn_80385A1C(void *arg0, u32 arg1) {
    extern u8 lbl_8048FAA0[][0x60];
    u8 *e = lbl_8048FAA0[M2C_FIELD(arg0, s32 *, 0x18)];
    *(u32 *)(e + 8) += arg1;
    *(u32 *)(e + 4) |= 0x10000000;
}

u32 fn_80385A4C(void *arg0) {
    extern u8 lbl_8048FAA0[][0x60];
    return *(u32 *)(lbl_8048FAA0[M2C_FIELD(arg0, s32 *, 0x18)] + 8);
}

void fn_80385A68(void *arg0) {
    extern u8 lbl_8048FAA0[][0x60];
    u8 *e = lbl_8048FAA0[M2C_FIELD(arg0, s32 *, 0x18)];
    *(u32 *)(e + 4) &= ~1;
    *(u32 *)(e + 4) |= 0x40000000;
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

u32 fn_80387044(void) {
    return (__DSPRegs[0] << 16) | __DSPRegs[1];
}

u32 fn_80387058(void) {
    return (__DSPRegs[2] << 16) | __DSPRegs[3];
}

void fn_80387070(u32 mail) {
    __DSPRegs[0] = mail >> 16;
    __DSPRegs[1] = mail;
}

void fn_80387084(void) {
    s32 enabled = fn_8025465C();
    u16 tmp = __DSPRegs[5];
    __DSPRegs[5] = (tmp & ~0xA8) | 2;
    fn_80254684(enabled);
}

extern s32 lbl_80496470;
s32 fn_80387188(void) {
    return lbl_80496470;
}

void fn_80387190(void) {
    s32 enabled = fn_8025465C();
    u16 tmp = __DSPRegs[5];
    __DSPRegs[5] = (tmp & ~0xA8) | 0x801;
    lbl_80496470 = 0;
    fn_80254684(enabled);
}

void fn_803871D8(void) {
    s32 enabled = fn_8025465C();
    u16 tmp = __DSPRegs[5];
    __DSPRegs[5] = (tmp & ~0xA8) | 4;
    fn_80254684(enabled);
}

void fn_80387218(void) {
    s32 enabled = fn_8025465C();
    u16 tmp = __DSPRegs[5];
    __DSPRegs[5] = tmp & ~0xAC;
    fn_80254684(enabled);
}

s32 fn_80387254(void) {
    return *(u16 *)0xCC00500A & 0x200;
}

extern DSPTaskInfo *lbl_80496490; /* __DSP_last_task */
extern DSPTaskInfo *lbl_80496494; /* __DSP_first_task */
extern DSPTaskInfo *lbl_80496498; /* __DSP_curr_task */

void *fn_80387264(void *arg0) {
    void fn_80387B84(void *);
    void fn_803879F8(void *);
    s32 enabled = fn_8025465C();
    fn_80387B84(arg0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    fn_80254684(enabled);
    if ((u32)arg0 == (u32)lbl_80496494) {
        fn_803879F8(arg0);
    }
    return arg0;
}

void *fn_803872D4(void *arg0) {
    fn_8025465C();
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 2);
    fn_80254684();
    return arg0;
}

void fn_80387B84(void *);
void fn_803879F8(void *);
void fn_803873DC(const char *fmt, ...) {
}

s32 fn_8038742C(void) {
    return (s32)lbl_80496498;
}

void fn_80387C24(DSPTaskInfo *task) {
    if (lbl_80496490 == NULL) {
        lbl_80496494 = lbl_80496490 = lbl_80496498 = task;
        task->next = task->prev = NULL;
    } else {
        lbl_80496490->next = task;
        task->next = NULL;
        task->prev = lbl_80496490;
        lbl_80496490 = task;
    }
    task->state = 0;
    fn_803873DC("__DSP_add_task() : Added task    : 0x%08X\n", task);
}

void fn_80387C9C(DSPTaskInfo *task) {
    task->flags = 0;
    task->state = 3;
    if (lbl_80496494 == task) {
        if (task->next != NULL) {
            lbl_80496494 = task->next;
            task->next->prev = NULL;
        } else {
            lbl_80496494 = lbl_80496490 = lbl_80496498 = NULL;
        }
    } else if (lbl_80496490 == task) {
        lbl_80496490 = task->prev;
        task->prev->next = NULL;
        lbl_80496498 = lbl_80496494;
    } else {
        lbl_80496498 = task->next;
        task->prev->next = task->next;
        task->next->prev = task->prev;
    }
}

void fn_80387D30(void) {

}

u16 fn_80388F84(void) {
    extern u16 lbl_804964A0;
    return lbl_804964A0;
}

u16 fn_80388F8C(u16 x) {
    extern u16 lbl_804964A0;
    u16 old = lbl_804964A0;
    switch (x) {
    case 0:
    case 1:
        lbl_804964A0 = x;
        break;
    }
    return old;
}

void fn_80388FB4(u8 *p) {
    extern u8 lbl_804912A0[];
    u8 *base = lbl_804912A0;
    *(u8 **)(base + 0x10c) = p ? p : base + 0x220;
    *(u8 **)(base + 0x21c) = p ? p : base + 0x220;
}

u32 fn_80388FEC(s32 chan) {
    typedef struct { u8 pad[0x10c]; u32 v; } Chan110;
    extern Chan110 lbl_804912A0[];
    return lbl_804912A0[chan].v;
}

s32 fn_80389004(s32 chan, u32 x) {
    extern u8 lbl_804912A0[];
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    u8 *p = lbl_804912A0 + chan * 0x110;
    s32 level = fn_8025465C();
    if (*(s32 *)(p + 4) == -1) {
        return -1;
    }
    *(u32 *)(p + 0x10c) = x ? x : 0x80000000;
    fn_80254684(level);
    return 0;
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

s32 fn_8038C9F0(s32 chan, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_803894A8(s32);
    s32 fn_8038C7D0(s32, s32, s32, s32, void *);
    extern void fn_80387D34(void);
    s32 result;

    result = fn_8038C7D0(chan, arg1, arg2, arg3, fn_80387D34);
    if (result < 0) {
        return result;
    }
    return fn_803894A8(chan);
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

s32 fn_8038D26C(s32 *self, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_803894A8(s32);
    s32 fn_8038D158(s32 *, s32, s32, s32, void *);
    extern void fn_80387D34(void);
    s32 result;

    result = fn_8038D158(self, arg1, arg2, arg3, fn_80387D34);
    if (result < 0) {
        return result;
    }
    return fn_803894A8(self[0]);
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

u16 fn_8038DAEC(u16 arg0) {
    extern u16 lbl_80495660;
    u16 old;

    old = lbl_80495660;
    lbl_80495660 = arg0;
    return old;
}

u16 fn_8038DAFC(void) {
    extern u16 lbl_80495660;
    return lbl_80495660;
}

s32 fn_8038DBC8(s32 chan, void *dst) {
    s32 fn_8038907C(s32, void *);
    u8 *fn_80257270(void);
    void fn_802482F8(void *, void *, u32);
    s32 fn_8025762C(s32);
    void fn_80389134(s32, s32);
    s32 sp10;
    s32 result;
    u8 *sram;

    if (chan < 0 || chan >= 2) {
        return -0x80;
    }
    result = fn_8038907C(chan, &sp10);
    if (result < 0) {
        return result;
    }
    sram = fn_80257270();
    fn_802482F8(dst, sram + chan * 0xC + 4, 8);
    fn_8025762C(0);
    fn_80389134(sp10, 0);
}

s32 fn_8038DC5C(s32 arg0, s32 arg1, u8 *arg2) {
    s32 fn_8038F6F8(s32, s32, void *);
    u8 stat[0x40];
    s32 result;

    result = fn_8038F6F8(arg0, arg1, stat);
    if (result == 0) {
        *arg2 = stat[0x34];
    }
    return result;
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

s32 fn_8038DDC8(u32 mask, s32 arg1) {
    extern u8 lbl_80495662;
    s32 var_r5;

    if (lbl_80495662 & (u8)mask) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (arg1 != 0) {
        lbl_80495662 |= mask;
    } else {
        lbl_80495662 &= ~(u8)mask;
    }
    return var_r5;
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

s32 fn_8038F53C(s32 chan, u32 addr, u32 length, void *dst, void *callback) {
    s32 fn_80388AC4(s32, void *);
    extern void fn_8038F460(void);
    extern u8 lbl_804912A0[];
    u8 *p;

    p = lbl_804912A0 + chan * 0x110;
    if (M2C_FIELD(p, s32 *, 0) == 0) {
        return -3;
    }
    M2C_FIELD(p, void **, 0xD4) = callback;
    M2C_FIELD(p, u32 *, 0xAC) = length / 512;
    M2C_FIELD(p, u32 *, 0xB0) = addr;
    M2C_FIELD(p, void **, 0xB4) = dst;
    return fn_80388AC4(chan, fn_8038F460);
}

s32 fn_8038F67C(s32 chan, u32 addr, u32 length, void *dst, void *callback) {
    s32 fn_80388BF8(s32, void *);
    extern void fn_8038F5A0(void);
    extern u8 lbl_804912A0[];
    u8 *p;

    p = lbl_804912A0 + chan * 0x110;
    if (M2C_FIELD(p, s32 *, 0) == 0) {
        return -3;
    }
    M2C_FIELD(p, void **, 0xD4) = callback;
    M2C_FIELD(p, u32 *, 0xAC) = length / 128;
    M2C_FIELD(p, u32 *, 0xB0) = addr;
    M2C_FIELD(p, void **, 0xB4) = dst;
    return fn_80388BF8(chan, fn_8038F5A0);
}

s32 fn_8038F6E0(s32 chan) {
    extern u8 lbl_804912A0[];
    return M2C_FIELD(lbl_804912A0 + chan * 0x110, s32 *, 0xB8);
}

s32 fn_8038F6F8(s32 chan, s32 fileNo, void *dst) {
    s32 fn_8038907C(s32, void *);
    u8 *fn_80389994(void *);
    s32 fn_8038C1E0(void *, void *);
    void fn_802482F8(void *, void *, u32);
    s32 fn_80389134(void *, s32);
    void *card;
    u8 *ent;
    s32 result;

    if (fileNo < 0 || fileNo >= 127) {
        return -0x80;
    }
    result = fn_8038907C(chan, &card);
    if (result < 0) {
        return result;
    }
    ent = fn_80389994(card) + fileNo * 0x40;
    result = fn_8038C1E0(card, ent);
    if (result >= 0) {
        fn_802482F8(dst, ent, 0x40);
    }
    return fn_80389134(card, result);
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

