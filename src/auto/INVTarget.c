/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800C3B48(void);
s32 fn_801D7550(void) {
    s32 fn_801D6D0C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_804945F8;
    if ((s32) lbl_804945F8 == 0) {
        fn_802D1FC8(0x10);
        lbl_804945F8 = fn_801D6D0C();
    }
    return lbl_804945F8;
}

s32 fn_801D7DE4(void) {
    s32 fn_801D75D8();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_804945FC;
    if ((s32) lbl_804945FC == 0) {
        fn_802D1FC8(0x20);
        lbl_804945FC = fn_801D75D8();
    }
    return lbl_804945FC;
}

s32 fn_801D9680(void) {
    s32 fn_801D8810();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494604;
    if ((s32) lbl_80494604 == 0) {
        fn_802D1FC8(0x10);
        lbl_80494604 = fn_801D8810();
    }
    return lbl_80494604;
}

s32 fn_801D9708(void) {
    s32 fn_801D8CE4();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494608;
    if ((s32) lbl_80494608 == 0) {
        fn_802D1FC8(0x10);
        lbl_80494608 = fn_801D8CE4();
    }
    return lbl_80494608;
}

s32 fn_801D9790(void) {
    s32 fn_801D91AC();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_8049460C;
    if ((s32) lbl_8049460C == 0) {
        fn_802D1FC8(0x10);
        lbl_8049460C = fn_801D91AC();
    }
    return lbl_8049460C;
}

s32 fn_801DC1F0(void) {
    s32 fn_801DBD24();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494614;
    if ((s32) lbl_80494614 == 0) {
        fn_802D1FC8(0x10);
        lbl_80494614 = fn_801DBD24();
    }
    return lbl_80494614;
}

s32 fn_801DCC6C(void *arg0) {
    s32 var_r11;

    var_r11 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) == (s32) M2C_FIELD(arg0, s32 *, 0x88)) {
        var_r11 = 0;
    }
    return var_r11;
}

s32 fn_801DCC8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

void fn_801DCC94(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_801DFBE0(void) {
    s32 fn_801DF724();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_8049461C;
    if ((s32) lbl_8049461C == 0) {
        fn_802D1FC8(0x10);
        lbl_8049461C = fn_801DF724();
    }
    return lbl_8049461C;
}

s32 fn_801E0118(void) {
    s32 fn_801DFC68();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494620;
    if ((s32) lbl_80494620 == 0) {
        fn_802D1FC8(0x10);
        lbl_80494620 = fn_801DFC68();
    }
    return lbl_80494620;
}

void fn_801E0308(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x74) = (void *) M2C_FIELD(arg0, void **, 0x74);
    M2C_FIELD(arg0, void **, 0x74) = arg1;
}

s32 fn_801E0428(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

s32 fn_801E0430(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

s32 fn_801E0438(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

void fn_801E13BC(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x114) = (u8) (M2C_FIELD(arg0, u8 *, 0x114) - 1);
}

void fn_801EA748(void) {
    extern void *lbl_80494630;
    if ((void *) lbl_80494630 != NULL) {
        M2C_FIELD(lbl_80494630, s32 *, 0xB0) = 1;
    }
}

void fn_801F02C0(void *arg0, s32 arg1) {
    M2C_UNK fn_80248784(s32, s32);
    fn_80248784(arg1, M2C_FIELD(arg0, s32 *, 0xC));
}

void fn_801F02EC(s32 arg0, s32 arg1) {
    M2C_UNK fn_80248784(s32, s32);
    fn_80248784(arg1, arg0 + 0xC);
}

void fn_801F0490(void) {

}

void fn_801F0494(void) {

}

void fn_801F0498(void) {

}

void fn_801F0784(void) {
    M2C_UNK fn_801EA898(s32);
    extern s32 lbl_80494630;
    fn_801EA898(lbl_80494630);
}

void fn_801F086C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
}

void fn_801F388C(void) {

}

void fn_801F3890(void) {

}

void fn_801F55A4(void) {

}

void fn_801F55A8(void) {

}

void fn_801F55AC(void) {

}

s32 fn_801F55B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xF8);
}

s32 fn_801F55B8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xE4);
}

void fn_801F55C0(void) {
    fn_800C3B48();
}

void fn_801F83BC(void) {

}

void fn_801F83C0(void) {

}

void fn_801F83C4(void) {

}

void fn_801F9D38(s32 arg0) {
    M2C_UNK fn_801F9AE0(s32);
    fn_801F9C80();
    fn_801F9AE0(arg0);
}

u8 fn_801F9D6C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xDC);
}

void fn_801FAC58(void *arg0, s8 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s8 *, 0x100) = 1;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x100) = arg1;
}

u8 fn_801FAD08(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x100);
}

void fn_801FE23C(s32 arg0) {
    M2C_UNK fn_801E0F64(s32);
    fn_801E0F64(arg0 + 0x79C);
}

void fn_801FE2C0(void) {

}

void fn_8020064C(void) {

}

void fn_8020069C(void) {

}

void fn_802006A0(void *arg0) {
    M2C_UNK fn_801E0884(void *, void *, u8);
    fn_801E0884(arg0 + 0x79C, arg0, M2C_FIELD(arg0, u8 *, 0x87));
}

void fn_802007DC(void *arg0) {
    M2C_UNK fn_802006CC(s32, void *);
    fn_802006CC(M2C_FIELD(arg0, s32 *, 4), arg0);
}

void fn_80200B54(void *arg0) {
    M2C_UNK fn_80200A54(s32, void *);
    fn_80200A54(M2C_FIELD(arg0, s32 *, 4), arg0);
}

void fn_80200D4C(void *arg0) {
    M2C_UNK fn_80200C4C(s32, void *);
    fn_80200C4C(M2C_FIELD(arg0, s32 *, 4), arg0);
}

void fn_80200D74(void *arg0) {
    M2C_UNK fn_80200D9C(s32, void *);
    fn_80200D9C(M2C_FIELD(arg0, s32 *, 4), arg0);
}

void fn_80200FBC(void *arg0) {
    M2C_UNK fn_80200E2C(s32, void *);
    fn_80200E2C(M2C_FIELD(arg0, s32 *, 4), arg0);
}

s32 fn_802037F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    return 1;
}

void fn_80203800(void) {

}

void fn_80204078(void) {

}

void fn_80204C00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
}

void fn_8020512C(void) {

}

void fn_802055C8(void *arg0, s32 arg1) {
    s8 fn_80246E00(s32);
    M2C_FIELD(arg0, s8 *, 0x8C1) = fn_80246E00(arg1);
}

void fn_802059A8(void) {

}

void fn_80206190(void) {

}

u8 fn_80207074(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x8C0);
}

void fn_80208AD8(s32 arg0) {
    M2C_UNK fn_801F5420(s32);
    fn_801F5420(arg0 + 0x84);
}

s32 fn_80208AFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x104);
}

void fn_8020ACC8(void) {

}

void fn_8020ACCC(void) {

}

s32 fn_8020DD78(void *arg0) {
    s32 var_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x120) == 0x13) {
        var_r3 = M2C_FIELD(arg0, s32 *, 0x110);
        if (var_r3 == -1) {
            return M2C_FIELD(arg0, s32 *, 0x114);
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_r3;
    }
    var_r3 = M2C_FIELD(arg0, s32 *, 0x104);
    if (var_r3 == -1) {
        return M2C_FIELD(arg0, s32 *, 0x108);
    }
    return var_r3;
}

extern u8 lbl_803E75EC[];
void fn_801DB18C(u8 *arg);
void fn_8020DF04(void) {
    fn_801DB18C(lbl_803E75EC);
}

void fn_80214DB0(void) {

}

void fn_802178D4(void *arg0) {
    M2C_UNK fn_801F53A0(void *);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x160) != 0) {
        M2C_FIELD(arg0, s32 *, 0x160) = 0;
        fn_801F53A0(arg0 + 0x84);
    }
}

s32 fn_80217A30(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x164);
    M2C_FIELD(arg0, s32 *, 0x164) = arg1;
    return temp_r0;
}

s32 fn_80219DA0(void) {
    void *fn_80219E28();
    s32 var_r3;
    void *temp_r3;

    temp_r3 = fn_80219E28();
    if ((temp_r3 == NULL) || (var_r3 = 5, (((s32) M2C_FIELD(temp_r3, s32 *, 0x34) == 0) != 0))) {
        var_r3 = 0;
    }
    return var_r3;
}

void fn_8021BECC(s32 arg0) {
    M2C_UNK fn_801F5420(s32);
    fn_801F5420(arg0 + 0x84);
}

s32 fn_8021BEF0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x104);
}

void fn_80221970(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022DA70(s32, s32);
    fn_8022DA70(arg1, arg0);
}

void fn_8022199C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8022DABC(s32, s32);
    fn_8022DABC(arg1, arg0);
}

s32 fn_802230D0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5C) & 1;
}

s32 fn_802230EC(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 2U) & 1;
}

s32 fn_802230F8(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 3U) & 1;
}

s32 fn_80223104(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 1U) & 1;
}

s32 fn_80223110(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 4U) & 1;
}

s32 fn_8022311C(void *arg0) {
    return ((u8) M2C_FIELD(arg0, u8 *, 0x5C) >> 5U) & 1;
}

s32 fn_80223128(s32 arg0) {
    return arg0 + 0x60;
}

s32 fn_80223130(s32 arg0) {
    return arg0 + 0x90;
}

void fn_80223240(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

s32 fn_80223248(s32 *self) {
    return self[1];
}

void fn_802233F0(s32 arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, s32 *, 0) = arg0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg2, M2C_UNK (**)(void *), 0xC)(arg1);
}

void fn_8022345C(void) {

}

void fn_80223460(void) {

}

u8 *fn_80223464(u8 *self) {
    return self + 8;
}

s32 fn_8022346C(s32 arg0) {
    return arg0 + 0x20;
}

s32 fn_8022349C(void *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x44) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x48) != 0)) {
        var_r9 = 1;
    }
    return var_r9;
}

s32 fn_8022350C(s32 *self) {
    return *self;
}

void fn_80223514(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
}

s32 fn_8022351C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

s32 fn_80224A28(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

extern s32 lbl_80494674;
s32 fn_80225544(void) {
    return lbl_80494674;
}

extern s32 lbl_80494678;
s32 fn_8022554C(void) {
    return lbl_80494678;
}

s32 fn_80225554(s32 *self) {
    return *self;
}

s32 fn_80229F5C(void *arg0) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x70) - M2C_FIELD(arg0, s32 *, 0x6C)) * 0xB6DB6DB7) >> 3;
}

void fn_802320F8(void);
void fn_8022DA50(void) {
    fn_802320F8();
}

void fn_8022E84C(void) {
    fn_802320F8();
}

void fn_8022F404(void) {
    fn_802320F8();
}

void fn_80230448(void) {
    fn_802320F8();
}

s32 fn_80230708(void) {
    return 1;
}

s32 fn_80230710(void) {
    return 1;
}

void fn_802323C4(void) {
    M2C_UNK fn_80232338(M2C_UNK, M2C_UNK);
    fn_80232338(1, 0xFFFF);
}

