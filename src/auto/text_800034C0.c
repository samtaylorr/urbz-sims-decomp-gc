/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_803C1390[];
extern u8 lbl_804069E8[];
extern u8 lbl_8041E1A0[];
extern u8 lbl_8041E1C8[];
extern s32 lbl_80493F0C;
extern char lbl_803C1320[];
extern char lbl_803C1328[];
extern char lbl_80491BF0[];
char *fn_80248B28(const char *, const char *);
u32 fn_80248808(const char *);
char *fn_80248A10(char *, const char *, u32);
void fn_802E04BC(void *);
void fn_802E0460(void *);
s32 fn_800034C0(void) {
    return lbl_80493F0C;
}

void fn_800034C8(void *self, s32 value) {
    lbl_80493F0C = value;
}

u8 *fn_8000381C(u8 *self) {
    fn_802E0460(self);
    *(u8 **)(self + 0x338) = lbl_804069E8;
    *(s32 *)(self + 0x478) = 0;
    *(s32 *)(self + 0x480) = 0;
    *(u8 *)(self + 0x484) = 0;
    *(s32 *)(self + 0x488) = 0;
    return self;
}

void fn_8000386C(u8 *self, s32 flags) {
    *(u8 **)(self + 0x338) = lbl_804069E8;
    fn_802E04BC(self);
}

void *fn_80003974(void) {
    return lbl_803C1390;
}

s32 fn_80003980(void) {
    return 0;
}

void fn_80003CEC(void) {
}

void fn_800043E0(u8 *self, s32 value) {
    *(s32 *)(self + 0x468) = value;
}

void fn_800C47CC(void);
void fn_800043E8(void) {
    fn_800C47CC();
}

s32 fn_800050F0(u8 *self) {
    s32 result = 0;
    s32 i;
    for (i = 0; i < 6; i++) {
        result |= ((u16 *)(self + 0x1c))[i];
    }
    return result;
}

extern u8 lbl_8041E1A0[];
extern u8 lbl_8041E1C8[];
void fn_80005118(s32 init, s32 code) {
    s32 i;
    if (code == 0xFFFF) {
        if (init != 0) {
            u8 *s = lbl_8041E1A0;
            *(s32 *)(s + 0x14) = 0;
            *(s32 *)(s + 0x18) = 0;
            for (i = 5; i >= 0; i--) {
                ((u16 *)(s + 0x1c))[i] = 0;
            }
            fn_8000381C(lbl_8041E1C8);
        } else {
            fn_8000386C(lbl_8041E1C8, 2);
        }
    }
}

s32 fn_800051A8(void) {
    return 0;
}

void fn_800051BC(void) {
    fn_80005118(1, 0xFFFF);
}

void fn_800051E8(void) {
    fn_80005118(0, 0xFFFF);
}

void fn_802C5240(void);

void fn_8001C2A4(void);

void fn_800A23A4(void);

void fn_802D2FD0(void);

void fn_802F4AB8(void);

void fn_802D2430(void);

void fn_8003F9E0(void);

void fn_80048D04(void);

void fn_8005D054(void);

void fn_8005B71C(void);

void fn_8005FB70(void);

void fn_800606B0(void);

void fn_80060CD0(void);

void fn_8006177C(void);

void fn_80065ADC(void);

void fn_8006D798(void);

void fn_80308518(void);

void fn_8030861C(void);

void fn_8008A3B8(void);

void fn_8008C3A8(void);

void fn_803073C4(void);

void fn_80091BE8(void);

