/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_801A1B50(void);
s32 fn_8019B448(void) {
    return 0;
}

void fn_8019C850(void) {

}

extern u8 lbl_80414770[];
extern void fn_802D20E8(void *);
void fn_8019CE74(void **self, s32 flags) {
    *self = lbl_80414770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8019E508(void) {
    return 1;
}

void fn_8019E510(void) {

}

void fn_8019E514(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_804148D0[];
extern void fn_802D20E8(void *);
void fn_8019E5B0(void **self, s32 flags) {
    *self = lbl_804148D0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8019F070(void) {
    return 0;
}

s32 fn_8019F078(void) {
    return 0;
}

s32 fn_8019F0A8(void) {
    return 0;
}

void fn_8019F0B0(void) {

}

s32 fn_8019F0B4(void) {
    return 0;
}

s32 fn_8019F0BC(void) {
    return 1;
}

s32 fn_8019F0C4(void) {
    return 0;
}

s32 fn_8019F1F0(void) {
    return 0;
}

void fn_8019F1F8(void) {

}

void fn_8019F204(void **self, s32 flags) {
    *self = lbl_80414770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8019F238(void **self, s32 flags) {
    *self = lbl_80414770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8019F26C(s32 *self) {
    return self[2];
}

s32 fn_8019F34C(s32 *self) {
    return self[6];
}

void fn_8019F3D0(void **self, s32 flags) {
    *self = lbl_80414770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8019F4D4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 fn_8019F4FC(u8 *self) {
    return *(s32 *)(self + 0x20);
}

extern u8 lbl_80414970[];
void fn_8019F844(void **self, s32 flags) {
    *self = lbl_80414970;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8019F878(void) {
    return 0;
}

s32 fn_8019F880(void) {
    return 0;
}

s32 fn_8019F888(void) {
    return 1;
}

s32 fn_8019F890(void) {
    return 0;
}

void fn_801A0858(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_803AB7D4();
void fn_801A135C(char *self) {
    extern void fn_803AB7D4(void *);
    fn_803AB7D4(self + 8);
}

void fn_801A1E30(void) {
    fn_801A1B50();
}

void fn_801A2EF4();
void fn_801A2600(char *self) {
    extern void fn_801A2EF4(void *);
    fn_801A2EF4(self + 8);
}

void fn_801A264C(void) {

}

void fn_801A2FF8(s32 *self, s32 value) {
    *self = value;
}

s32 fn_801A3020(s32 *self) {
    return self[1];
}

s32 fn_801A3038(s32 *self) {
    return self[6];
}

extern s32 lbl_80494554;
s32 fn_801A3048(void) {
    return lbl_80494554;
}

void fn_801A3050(void (*cb)(void)) {
    lbl_80494554 = cb;
}

extern s32 lbl_80494558;
s32 fn_801A3058(void) {
    return lbl_80494558;
}

f32 fn_801A3060(void) {
    extern f32 lbl_8049455C;
    return lbl_8049455C;
}

extern s32 lbl_80494560;
s32 fn_801A3074(void) {
    return lbl_80494560;
}

void fn_801A307C(void (*cb)(void)) {
    lbl_80494560 = cb;
}

extern s32 lbl_80494564;
s32 fn_801A3084(void) {
    return lbl_80494564;
}

void fn_801A308C(void (*cb)(void)) {
    lbl_80494564 = cb;
}

extern s32 lbl_80494550;
s32 fn_801A3094(void) {
    return lbl_80494550;
}

s32 fn_801A309C(s32 *self) {
    return self[1];
}

extern s32 lbl_80495D3C;
extern void fn_800F1A60(s32, s32);
void fn_801A30AC(void) {
    fn_800F1A60((s32)&lbl_80495D3C, 2);
}

extern u8 lbl_80414FD0[];
void fn_801A37C4(void **self, s32 flags) {
    *self = lbl_80414FD0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_801A3CFC(void) {

}

s32 fn_801A3D08(void) {
    return 0;
}

void fn_801A3D10(void) {

}

s32 fn_801A4FA8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 fn_801A9EC4(s32 *self) {
    return self[6];
}

void fn_801AA4A8(void) {

}

void fn_801AA4AC(void) {

}

void fn_801AA4B0(void) {

}

s32 fn_801AA4B4(void) {
    return 0;
}

s32 fn_801AA4BC(void) {
    return 0;
}

s32 fn_801AA4C4(void) {
    return 0;
}

s32 fn_801AA930(s32 *self) {
    return self[1];
}

void fn_801AB5C8(void) {

}

s32 fn_801B19F4(void) {
    return 0;
}

void fn_801B1CBC(void) {

}

s32 fn_801B24B8(void) {
    return 0;
}

s32 fn_801B24C0(void) {
    return 1;
}

s32 fn_801B24C8(void) {
    return 0;
}

