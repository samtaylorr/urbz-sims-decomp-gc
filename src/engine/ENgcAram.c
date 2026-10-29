/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 pad0[0x20];
    void (*unk20)(s32);
    s32 unk24;
} ARAMEntry;

extern s32 lbl_80495250;
extern u32 lbl_80495254;
extern u32 lbl_80495258;
u32 fn_80373B44(void);
void fn_80373B58(void *, u32, u32);
void fn_80373BEC(void);

void fn_802D0C44(void);
void fn_80373A18(void) {
    fn_802D0C44();
}

void fn_80373A38(void) {
    M2C_UNK fn_8037E788(s32, s32);
    M2C_UNK fn_803806E4(void);
    u32 fn_8037E85C(void);
    M2C_UNK fn_80248488(void *, s32, s32);
    extern ARAMEntry lbl_804756E0[];
    u8 buf[0x480];
    u8 *p;
    u32 base;
    s32 i;

    if (lbl_80495250 == 0) {
        fn_8037E788(0, 0);
        p = (u8 *)(((u32)buf + 0x1F) & ~0x1F);
        fn_803806E4();
        for (i = 0; i < 64; i++) {
            lbl_804756E0[i].unk24 = -1;
            lbl_804756E0[i].unk20 = 0;
        }
        lbl_80495250 = 1;
        base = fn_8037E85C();
        lbl_80495258 = base + 0x100;
        lbl_80495254 = base;
        fn_80248488(p, 0, 0x100);
        fn_80373B58(p, lbl_80495254, 0x100);
    }
}

void fn_80373AE8(void) {
    if (lbl_80495250 != 0) {
        lbl_80495250 = 0;
    }
}

u32 fn_80373B00(u32 size) {
    u32 addr;

    if (fn_80373B44() >= size) {
        addr = lbl_80495258;
        lbl_80495258 = addr + size;
        return addr;
    }
    return -1;
}

u32 fn_80373B44(void) {
    u32 base = lbl_80495258 - 0x1000000;
    return lbl_80495254 - base;
}

void fn_80373B58(void *arg0, u32 arg1, u32 arg2) {
    M2C_UNK fn_80251C1C(void *, u32);
    M2C_UNK fn_80380760(void *, s32, s32, s32, void *, u32, u32, void (*)(void));
    extern u8 lbl_80475680[];
    extern volatile s32 lbl_8049525C;

    if (lbl_8049525C != 0) {
        while (lbl_8049525C != 0) {
        }
    }
    lbl_8049525C = 1;
    fn_80251C1C(arg0, arg2);
    fn_80380760(lbl_80475680, 0, 0, 1, arg0, arg1, arg2, fn_80373BEC);
    while (lbl_8049525C != 0) {
    }
}

void fn_80373BEC(void) {
    extern s32 lbl_8049525C;
    lbl_8049525C = 0;
}

void fn_80373CF0(void *arg0) {
    extern ARAMEntry lbl_804756E0[];
    u32 i;

    for (i = 0; i < 64; i++) {
        if (&lbl_804756E0[i] == arg0) {
            break;
        }
    }
    if (i != 64) {
        if (lbl_804756E0[i].unk20 != 0) {
            lbl_804756E0[i].unk20(lbl_804756E0[i].unk24);
        }
        lbl_804756E0[i].unk24 = -1;
    }
}

void fn_80373E20(void);
void fn_80373D8C(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80251BF0(s32, s32);
    M2C_UNK fn_80380760(void *, s32, s32, s32, s32, s32, s32, void (*)(void));
    extern u8 lbl_804756A0[];
    extern volatile s32 lbl_80495260;

    if (lbl_80495260 != 0) {
        while (lbl_80495260 != 0) {
        }
    }
    lbl_80495260 = 1;
    fn_80251BF0(arg0, arg2);
    fn_80380760(lbl_804756A0, 0, 1, 1, arg1, arg0, arg2, fn_80373E20);
    while (lbl_80495260 != 0) {
    }
}

void fn_80373E20(void) {
    extern s32 lbl_80495260;
    lbl_80495260 = 0;
}

void fn_80373F24(void) {
    M2C_UNK fn_80254684(s32);
    extern s32 lbl_80496320;
    extern s32 lbl_80495264;
    s32 temp_r0;

    if ((s32) lbl_80495264 != 0) {
        temp_r0 = lbl_80495264 - 1;
        lbl_80495264 = temp_r0;
        if (temp_r0 == 0) {
            fn_80254684(lbl_80496320);
        }
    }
}

void fn_80373F64(void) {
    s32 fn_8025465C(void);
    extern s32 lbl_80496320;
    extern s32 lbl_80495264;

    if (++lbl_80495264 == 1) {
        lbl_80496320 = fn_8025465C() != 0;
    }
}

void fn_80373FAC(s32 arg0, s32 arg1) {
    M2C_UNK fn_802CA9A8(void *);
    M2C_UNK fn_802CAA00(void *, s32);
    extern u8 lbl_804756C0[];
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_802CA9A8(lbl_804756C0);
        } else {
            fn_802CAA00(lbl_804756C0, 2);
        }
    }
}

void fn_80374000(void) {
    fn_80373FAC(1, 0xFFFF);
}

void fn_8037402C(void) {
    fn_80373FAC(0, 0xFFFF);
}

