/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s32 unk0;
    u8 pad4[0x20];
    s32 unk24;
    u8 pad28[0x18];
    u32 unk40_0 : 1;
    u32 unk40_1 : 1;
    u32 unk40_2 : 1;
    u8 unk40_3 : 1;
    u32 unk40_4 : 28;
} ENgcRendererSlot;

void fn_8036EFA4(void);
extern s32 lbl_804951C0;
void fn_8035BD70(void) {
    if (lbl_804951C0 != 0) {
        lbl_804951C0 = 0;
    }
}

extern s32 lbl_804951C4;
void fn_8035BD88(void) {
    if (lbl_804951C4 != 0) {
        lbl_804951C4 = 0;
    }
}

extern s32 lbl_804951C8;
void fn_8035BDA0(void) {
    if (lbl_804951C8 != 0) {
        lbl_804951C8 = 0;
    }
}

extern s32 lbl_804951CC;
void fn_8035BDB8(void) {
    if (lbl_804951CC != 0) {
        lbl_804951CC = 0;
    }
}

extern s32 lbl_804951D0;
void fn_8035BDD0(void) {
    if (lbl_804951D0 != 0) {
        lbl_804951D0 = 0;
    }
}

extern s32 lbl_804951D4;
void fn_8035BDE8(void) {
    if (lbl_804951D4 != 0) {
        lbl_804951D4 = 0;
    }
}

extern s32 lbl_804951D8;
void fn_8035BE00(void) {
    if (lbl_804951D8 != 0) {
        lbl_804951D8 = 0;
    }
}

extern s32 lbl_804951DC;
void fn_8035BE18(void) {
    if (lbl_804951DC != 0) {
        lbl_804951DC = 0;
    }
}

extern s32 lbl_804951E0;
void fn_8035BE30(void) {
    if (lbl_804951E0 != 0) {
        lbl_804951E0 = 0;
    }
}

extern s32 lbl_804951E4;
void fn_8035BE48(void) {
    if (lbl_804951E4 != 0) {
        lbl_804951E4 = 0;
    }
}

extern s32 lbl_804951E8;
void fn_8035BE60(void) {
    if (lbl_804951E8 != 0) {
        lbl_804951E8 = 0;
    }
}

extern s32 lbl_804951EC;
void fn_8035BE78(void) {
    if (lbl_804951EC != 0) {
        lbl_804951EC = 0;
    }
}

void fn_8035BE90(void *arg0) {
    extern s32 lbl_804951F0;
    if ((s32) lbl_804951F0 != 0) {
        lbl_804951F0 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x4DC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4DC) + 0x18);
}

void fn_8035BEB4(void *arg0) {
    extern s32 lbl_804951F4;
    if ((s32) lbl_804951F4 != 0) {
        lbl_804951F4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x4DC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4DC) + 0x18);
}

void fn_8035BED8(void) {

}

extern s32 lbl_804951F8;
void fn_8035BEDC(void) {
    if (lbl_804951F8 != 0) {
        lbl_804951F8 = 0;
    }
}

extern s32 lbl_804951FC;
void fn_8035BEF4(void) {
    if (lbl_804951FC != 0) {
        lbl_804951FC = 0;
    }
}

extern s32 lbl_80495200;
void fn_8035BF0C(void) {
    if (lbl_80495200 != 0) {
        lbl_80495200 = 0;
    }
}

void fn_8035BF24(void *arg0) {
    extern s32 lbl_80495204;
    if ((s32) lbl_80495204 != 0) {
        lbl_80495204 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x4DC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4DC) + 0x20);
}

extern s32 lbl_80495208;
void fn_8035BF48(void) {
    if (lbl_80495208 != 0) {
        lbl_80495208 = 0;
    }
}

extern s32 lbl_8049520C;
void fn_8035BF60(void) {
    if (lbl_8049520C != 0) {
        lbl_8049520C = 0;
    }
}

s32 fn_8035DA74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

void fn_8035DB44(void) {
    fn_8036EFA4();
}

void fn_8035DE6C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
}

extern void fn_802D20E8(void *);
void fn_8035DFB8(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8035EC18(void);
void fn_8035EA70(void) {
    fn_8035EC18();
}

s32 fn_8035EDD8(void) {
    extern ENgcRendererSlot lbl_80473F7C[];
    s32 i;

    for (i = 0; i < 0x3E; i++) {
        if (lbl_80473F7C[i].unk24 == 0) {
            lbl_80473F7C[i].unk40_0 = 0;
            ((u8 *)&lbl_80473F7C[i])[0x40] &= ~0x10;
            lbl_80473F7C[i].unk40_1 = 0;
            break;
        }
    }
    if (i == 0x3E) {
        i = -1;
    }
    return i;
}

void fn_8035EE3C(void) {
    M2C_UNK fn_80254684(s32);
    extern s32 lbl_804962D4;
    extern s32 lbl_804962D8;
    s32 temp_r0;

    if ((s32) lbl_804962D8 != 0) {
        temp_r0 = lbl_804962D8 - 1;
        lbl_804962D8 = temp_r0;
        if (temp_r0 == 0) {
            fn_80254684(lbl_804962D4);
        }
    }
}

void fn_8035EE7C(void) {
    s32 fn_8025465C(void);
    extern s32 lbl_804962D4;
    extern s32 lbl_804962D8;

    if (++lbl_804962D8 == 1) {
        lbl_804962D4 = fn_8025465C() != 0;
    }
}

void fn_8035EEC4(s32 arg0) {
    void fn_80385948(s32);
    extern ENgcRendererSlot lbl_80473F7C[];
    u32 i;

    for (i = 0; i < 0x3E; i++) {
        if (lbl_80473F7C[i].unk0 == arg0) {
            fn_80385948(arg0);
            lbl_80473F7C[i].unk0 = 0;
        }
    }
}

void *fn_8035EF28(void *arg0) {
    void fn_802C7D1C(void *);
    void fn_802CA9A8(void *);
    void fn_802D8B34(void *);
    void fn_803664B0(void *);
    extern char lbl_8041CF38[];
    extern void *lbl_80495220;
    char *self = arg0;
    char *p = self + 0x394;

    fn_802D8B34(self);
    *(void **)(self + 0x338) = lbl_8041CF38;
    fn_803664B0(self + 0x348);
    fn_802C7D1C(p);
    *(s32 *)(p + 8) = 0x18;
    fn_802CA9A8(self + 0x3A0);
    lbl_80495220 = self;
    return self;
}

extern u8 lbl_8046DF78[];
void fn_8034F440(u8 *arg);
void fn_8035F07C(void) {
    fn_8034F440(lbl_8046DF78);
}

void fn_8034F470(u8 *arg);
void fn_8035F0A4(void) {
    fn_8034F470(lbl_8046DF78);
}

void fn_8034F4A4(u8 *arg);
void fn_8035F0CC(void) {
    fn_8034F4A4(lbl_8046DF78);
}

void fn_8034F4D4(u8 *arg);
void fn_8035F0F4(void) {
    fn_8034F4D4(lbl_8046DF78);
}

void fn_8034F508(u8 *arg);
void fn_8035F11C(void) {
    fn_8034F508(lbl_8046DF78);
}

void fn_8035F144(void) {

}

void fn_8035F148(void) {

}

s32 fn_8035F14C(void) {
    return 1;
}

void fn_8035F154(s32 arg0) {
    M2C_UNK fn_8035F240(s32, s32);
    M2C_UNK fn_80366820(s32, s32 *, M2C_UNK);
    s32 sp8;

loop_1:
    fn_80366820(arg0 + 0x348, &sp8, 1);
    fn_8035F240(arg0, sp8);
    goto loop_1;
}

void fn_8035F2B8(s32 arg0, s32 arg1) {
    extern u8 lbl_80474FF8[];
    void fn_8035EF8C(void *, s32);

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8035EF28(lbl_80474FF8);
        } else {
            fn_8035EF8C(lbl_80474FF8, 2);
        }
    }
}

void fn_8035F30C(void) {

}

void fn_8035F310(void) {
    void fn_8035F2B8(s32, s32);
    fn_8035F2B8(1, 0xFFFF);
}

void *fn_802C7DE4(void *);
extern u8 lbl_80474FF8[];
void fn_8035EF8C(void *, s32);
void fn_8035F33C(void) {
    fn_8035F2B8(0, 0xFFFF);
}

