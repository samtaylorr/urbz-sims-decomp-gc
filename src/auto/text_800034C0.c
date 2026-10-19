/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_803C1390[];
extern u8 lbl_804069E8[];
void fn_802E04BC(void *);
void fn_802E0460(void *);
u8 *fn_8000381C(u8 *self) {
    fn_802E0460(self);
    *(u8 **)(self + 0x338) = lbl_804069E8;
    *(s32 *)(self + 0x478) = 0;
    *(s32 *)(self + 0x480) = 0;
    *(u8 *)(self + 0x484) = 0;
    *(s32 *)(self + 0x488) = 0;
    return self;
}

void fn_8000386C(u8 *self) {
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

void fn_800C47CC(void);
void fn_800043E8(void) {
    fn_800C47CC();
}

s32 fn_800051A8(void) {
    return 0;
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

