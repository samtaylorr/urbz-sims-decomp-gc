/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800D1F84(void);
extern u8 lbl_8040B320[];
extern u8 lbl_8040B368[];
extern s32 lbl_80495A3C;
extern void fn_800F1A60(s32, s32);
extern void fn_800D2A40(s32 *);
extern void fn_800D27B8(s32 *);
void fn_800E3B38(s32 *self, s32 id, f32 time);
void fn_800E3B80(s32 *self, s32 arg);
extern f32 lbl_803D14C8[];
extern f32 lbl_803D14CC[];
extern f32 lbl_803D14D0[];
extern s32 lbl_8041F7B0[];
extern s32 lbl_80434A9C[];

void fn_800D1634(void) {
    fn_800F1A60((s32)&lbl_80495A3C, 2);
}

extern s32 lbl_80495A44;
void fn_800D165C(void) {
    fn_800F1A60((s32)&lbl_80495A44, 2);
}

extern s32 lbl_80495A4C;
void fn_800D1684(void) {
    fn_800F1A60((s32)&lbl_80495A4C, 2);
}

void fn_800D188C(s32 *self) {
    fn_800D2A40(self);
    if (self[6] != 0) {
        lbl_8041F7B0[0] = 1;
        lbl_80434A9C[0] = 0;
        fn_800E3B38(self, 0x27, lbl_803D14C8[0]);
    }
    if (self[7] != 0) {
        fn_800E3B80(self, 1);
    }
}

void fn_800D1908(s32 *self) {
    fn_800D27B8(self);
    if (self[6] != 0) {
        fn_800E3B38(self, 0x26, lbl_803D14CC[0]);
    }
    if (self[7] != 0) {
        fn_800E3B80(self, 1);
    }
}

void fn_800D196C(s32 *self) {
    fn_800D2A40(self);
    if (self[6] != 0) {
        lbl_8041F7B0[0] = 0;
        fn_800E3B38(self, 0x27, lbl_803D14D0[0]);
    }
    if (self[7] != 0) {
        fn_800E3B80(self, 1);
    }
}

s32 *fn_800D1D9C(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[9] = 0;
    self[10] = 0;
    self[11] = 0;
    self[5] = (s32)lbl_8040B368;
    return self;
}

s32 *fn_800D1DE8(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[5] = (s32)lbl_8040B320;
    return self;
}

extern u8 lbl_804093F8[];
extern void fn_802D20E8(void *);
void fn_800D1E24(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_8040B2D8[];
s32 *fn_800D1E58(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[9] = 0;
    self[10] = 0;
    self[11] = 0;
    self[5] = (s32)lbl_8040B2D8;
    return self;
}

extern u8 lbl_8040B290[];
s32 *fn_800D1EA4(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[5] = (s32)lbl_8040B290;
    return self;
}

extern s32 lbl_8040B248[];
s32 *fn_800D1EE4(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040B248;
    return self;
}

extern s32 lbl_8040B1B8[];
s32 *fn_800D1F50(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040B1B8;
    return self;
}

void fn_800D26A8(void) {

}

void fn_800D2778(void) {

}

void fn_800D2990(void) {

}

void fn_800D2994(void) {

}

void fn_800D2A4C(void) {

}

void fn_800D2A50(void) {

}

void fn_800D2AE4(void) {

}

void fn_800D3B70(u8 *self, s32 arg1) {
    extern s32 lbl_8041F754[];
    extern void fn_80048A48(void *);
    u8 *obj;
    fn_80048A48(lbl_8041F754);
    obj = *(u8 **)(self + 0x18);
    if (obj != 0) {
        u8 *vt = *(u8 **)(obj + 0x44);
        (*(void (**)(void *, s32))(vt + 0x1C))(obj + *(s16 *)(vt + 0x18), arg1);
    }
}

s32 *fn_800D3BD0(s32 *self, s32 arg1) {
    extern u8 lbl_8040B5A8[];
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[5] = (s32)lbl_8040B5A8;
    self[7] = 0;
    return self;
}

s32 fn_800D3C0C(s32 *self) {
    return self[6];
}

s32 fn_800D3C14(s32 *self) {
    return self[7];
}

extern u8 lbl_8040B560[];
s32 *fn_800D3C1C(s32 *self, s32 arg1) {
    extern u8 lbl_8040B560[];
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[5] = (s32)lbl_8040B560;
    self[7] = 0;
    return self;
}

s32 fn_800D3C58(s32 *self) {
    return self[6];
}

s32 fn_800D3C60(s32 *self) {
    return self[7];
}

extern void fn_800E9514(s32);
extern u8 lbl_8040B518[];
s32 *fn_800D3C68(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[9] = 0;
    self[10] = 0;
    self[5] = (s32)lbl_8040B518;
    self[11] = 0;
    return self;
}

s32 fn_800D3CB4(s32 *self) {
    return self[8] == 0 && self[10] != 0;
}

s32 fn_800D3CDC(s32 *self) {
    return self[8] == 0 && self[11] != 0;
}

void fn_800D3D04(s32 *self) {
    fn_800E9514(self[2]);
}

extern void fn_800E953C(s32);
void fn_800D3D28(s32 *self) {
    fn_800E953C(self[2]);
}

extern void fn_800E9554(s32);
void fn_800D3D4C(s32 *self) {
    fn_800E9554(self[2]);
}

extern u8 lbl_8040B488[];
s32 *fn_800D3DA8(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[9] = 0;
    self[10] = 0;
    self[5] = (s32)lbl_8040B488;
    self[11] = 0;
    return self;
}

void fn_800D3DF4(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800D3E28(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_800D3E30(s32 *self) {
    return self[6];
}

s32 fn_800D3E38(s32 *self) {
    return self[7];
}

void fn_80048A48(void *);
extern u8 lbl_8040B5A8[];
extern u8 lbl_8040B440[];
s32 *fn_800D3E40(s32 *self, s32 arg1) {
    extern u8 lbl_8040B440[];
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[5] = (s32)lbl_8040B440;
    self[8] = 0;
    return self;
}

void fn_800D3E80(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern s32 lbl_8040B3F8[];
s32 *fn_800D3F04(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040B3F8;
    return self;
}

void fn_800D3F38(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800D3F6C(s32 *self) {
    fn_800E9514(self[2]);
}

void fn_800D3F90(s32 *self) {
    fn_800E953C(self[2]);
}

void fn_800D3FB4(s32 *self) {
    fn_800E9554(self[2]);
}

extern u8 lbl_8040B3B0[];
s32 *fn_800D3FD8(s32 *self, s32 arg1) {
    extern u8 lbl_8040B3B0[];
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[5] = (s32)lbl_8040B3B0;
    self[7] = 0;
    return self;
}

void fn_800D4014(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_8040B638[];
s32 *fn_800D41B4(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[5] = (s32)lbl_8040B638;
    return self;
}

extern u8 lbl_8040B5F0[];
s32 *fn_800D41F0(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[9] = 0;
    self[10] = 0;
    self[11] = 0;
    self[5] = (s32)lbl_8040B5F0;
    return self;
}

void fn_800D4428(void) {
    fn_800D1F84();
}

extern u8 lbl_8040B758[];
s32 *fn_800D44F4(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[5] = (s32)lbl_8040B758;
    return self;
}

extern u8 lbl_8040B710[];
s32 *fn_800D4530(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[9] = 0;
    self[10] = 0;
    self[11] = 0;
    self[5] = (s32)lbl_8040B710;
    return self;
}

extern u8 lbl_8040B6C8[];
s32 *fn_800D457C(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[5] = (s32)lbl_8040B6C8;
    return self;
}

extern u8 lbl_8040B680[];
s32 *fn_800D45BC(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[9] = 0;
    self[10] = 0;
    self[11] = 0;
    self[5] = (s32)lbl_8040B680;
    return self;
}

void fn_800D4818(void) {

}

void fn_800D4914(void) {

}

extern u8 lbl_8040B7E8[];
s32 *fn_800D4AF0(s32 *self, s32 arg1) {
    extern u8 lbl_8040B7E8[];
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[5] = (s32)lbl_8040B7E8;
    self[8] = 0;
    return self;
}

extern s32 lbl_8040B7A0[];
s32 *fn_800D4B30(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040B7A0;
    return self;
}

extern u8 lbl_8040B998[];
s32 *fn_800D4F70(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[5] = (s32)lbl_8040B998;
    return self;
}

extern u8 lbl_8040B950[];
s32 *fn_800D4FAC(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[9] = 0;
    self[10] = 0;
    self[11] = 0;
    self[5] = (s32)lbl_8040B950;
    return self;
}

extern u8 lbl_8040B908[];
s32 *fn_800D4FF8(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[5] = (s32)lbl_8040B908;
    return self;
}

extern s32 lbl_8040B878[];
s32 *fn_800D5070(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040B878;
    return self;
}

void fn_800D5FAC(void) {

}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_800D63EC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_800D6420(void) {

}

s32 fn_800D6434(void) {
    return 0;
}

void fn_800D643C(void) {

}

void fn_800D6440(void) {

}

void fn_800D6700(void) {

}

void fn_800D72A4(void) {

}

void fn_800E3BC0(void);
void fn_800D855C(void) {
    fn_800E3BC0();
}

void fn_800E3D4C(void);
void fn_800D857C(void) {
    fn_800E3D4C();
}

void fn_800D9AC8(void) {

}

void fn_800D9ACC(void) {

}

void fn_800DA758(void) {

}

void fn_800DAAC4(void) {
    fn_800D1F84();
}

s32 fn_800DAE30(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

void fn_800DAE38(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
}

s32 fn_800DAE40(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

void fn_800DAE48(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
}

s32 fn_800DAE50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}

void fn_800DAE78(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

s32 fn_800DAE80(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_800DAEA0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}

void fn_800DAEA8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

s32 fn_800DAEB0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

void fn_800DAEB8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}

extern u8 lbl_8040BB58[];
s32 *fn_800DAEC0(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[9] = 0;
    self[10] = 0;
    self[11] = 0;
    self[5] = (s32)lbl_8040BB58;
    return self;
}

extern s32 lbl_8040BB10[];
s32 *fn_800DAF0C(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040BB10;
    return self;
}

extern s32 lbl_8040BAC8[];
s32 *fn_800DAF40(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040BAC8;
    return self;
}

extern s32 lbl_8040BA80[];
s32 *fn_800DAF74(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040BA80;
    return self;
}

void fn_802D0F9C(void);
void fn_800DB148(void) {
    fn_802D0F9C();
}

void fn_800DB168(void) {

}

void fn_800DB1B8(void) {

}

void fn_800DB1BC(void) {

}

void fn_800DB1C0(void) {

}

void fn_800DB1F0(void) {

}

void fn_800DB4F8(void) {

}

void fn_802D0F9C(void);
void fn_800DB81C(void) {
    fn_802D0F9C();
}

void fn_800DB83C(void) {

}

void fn_800DB884(void) {

}

void fn_800DBC9C(void) {
    fn_800E3BC0();
}

void fn_800DBFDC(void) {

}

s32 fn_800DC1C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x94);
}

extern s32 lbl_8040BE80[];
s32 *fn_800DC1CC(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040BE80;
    return self;
}

extern s32 lbl_8040BE38[];
s32 *fn_800DC200(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040BE38;
    return self;
}

extern s32 lbl_8040BD60[];
s32 *fn_800DC2B4(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040BD60;
    return self;
}

extern s32 lbl_8040BC88[];
s32 *fn_800DC368(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040BC88;
    return self;
}

extern s32 lbl_80495A70;
s32 fn_800DC6B4(void) {
    return lbl_80495A70;
}

void fn_800DE57C(void) {

}

void fn_800DEA64(void) {

}

void fn_800DF61C(void) {

}

void fn_800E1868(void) {
    fn_800E3BC0();
}

extern void fn_800C681C(void *);
void fn_800E19C4(u8 *self) {
    if (*(u8 **)(self + 0x94) != 0) {
        u8 *obj;
        fn_800C681C(*(u8 **)(self + 0x94));
        obj = *(u8 **)(self + 0x94);
        if (obj != 0) {
            u8 *vt = *(u8 **)(obj + 0x44);
            (*(void (**)(void *, s32))(vt + 0xc))(obj + *(s16 *)(vt + 8), 3);
        }
        *(u8 **)(self + 0x94) = 0;
    }
}

extern s32 lbl_804966DC;
s32 fn_800E1A2C(void) {
    return lbl_804966DC;
}

extern s32 lbl_80434A9C[];
extern s32 lbl_8041F754[];
void fn_800E1A48(void) {
    lbl_8041F754[0x7C / 4] = 1;
    lbl_8041F754[0x80 / 4] = lbl_80434A9C[1];
    lbl_8041F754[0x84 / 4] = 0;
    if (lbl_80434A9C[0x30 / 4] == 2) {
        lbl_8041F754[0x84 / 4] = 1;
    }
    if (lbl_80434A9C[0x34 / 4] == 2) {
        lbl_8041F754[0x84 / 4] |= 2;
    }
}

extern u8 lbl_8040CB28[];
extern void fn_8039E33C(void *, s32);
extern void fn_803997AC(void *, u32);
void fn_800E1BA4(s32 *self, s32 flags) {
    s32 *v;
    self[5] = (s32)lbl_8040CB28;
    fn_8039E33C(self + 0x14, 2);
    v = self + 10;
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8((void *)v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern s32 lbl_804966E4;
s32 fn_800E1C34(void) {
    return lbl_804966E4;
}

s32 fn_800E1C3C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x94);
}

extern s32 lbl_8040C858[];
s32 *fn_800E1C44(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C858;
    return self;
}

void fn_800E1C78(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E1CAC(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C810[];
s32 *fn_800E1CB8(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C810;
    return self;
}

void fn_800E1CEC(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern s32 lbl_8040C7C8[];
s32 *fn_800E1D20(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C7C8;
    return self;
}

void fn_800E1D54(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E1D88(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C780[];
s32 *fn_800E1D94(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C780;
    return self;
}

void fn_800E1DC8(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E1DFC(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C738[];
s32 *fn_800E1E08(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C738;
    return self;
}

void fn_800E1E3C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E1E70(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C6F0[];
s32 *fn_800E1E7C(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C6F0;
    return self;
}

void fn_800E1EB0(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E1EE4(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C6A8[];
s32 *fn_800E1EF0(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C6A8;
    return self;
}

void fn_800E1F24(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E1F58(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C660[];
s32 *fn_800E1F64(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C660;
    return self;
}

void fn_800E1F98(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E1FCC(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C618[];
s32 *fn_800E1FD8(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C618;
    return self;
}

void fn_800E200C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2040(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C5D0[];
s32 *fn_800E204C(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C5D0;
    return self;
}

void fn_800E2080(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E20B4(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C588[];
s32 *fn_800E20C0(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C588;
    return self;
}

void fn_800E20F4(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2128(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C540[];
s32 *fn_800E2134(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C540;
    return self;
}

void fn_800E2168(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E219C(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C4F8[];
s32 *fn_800E21A8(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C4F8;
    return self;
}

void fn_800E21DC(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2210(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C4B0[];
s32 *fn_800E221C(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C4B0;
    return self;
}

void fn_800E2250(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2284(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C468[];
s32 *fn_800E2290(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C468;
    return self;
}

void fn_800E22C4(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E22F8(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C420[];
s32 *fn_800E2304(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C420;
    return self;
}

void fn_800E2338(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E236C(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C3D8[];
s32 *fn_800E2378(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C3D8;
    return self;
}

void fn_800E23AC(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E23E0(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C390[];
s32 *fn_800E23EC(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C390;
    return self;
}

void fn_800E2420(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2454(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C348[];
s32 *fn_800E2460(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C348;
    return self;
}

void fn_800E2494(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E24C8(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C300[];
s32 *fn_800E24D4(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C300;
    return self;
}

void fn_800E2508(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E253C(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C2B8[];
s32 *fn_800E2548(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C2B8;
    return self;
}

void fn_800E257C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E25B0(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

void fn_800E2600(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2634(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C228[];
s32 *fn_800E2640(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C228;
    return self;
}

void fn_800E2674(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E26A8(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C1E0[];
s32 *fn_800E26B4(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C1E0;
    return self;
}

void fn_800E26E8(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E271C(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C198[];
s32 *fn_800E2728(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C198;
    return self;
}

void fn_800E275C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2790(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C150[];
s32 *fn_800E279C(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C150;
    return self;
}

void fn_800E27D0(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2804(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C108[];
s32 *fn_800E2810(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C108;
    return self;
}

void fn_800E2844(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2878(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C0C0[];
s32 *fn_800E2884(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C0C0;
    return self;
}

void fn_800E28B8(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E28EC(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C078[];
s32 *fn_800E28F8(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C078;
    return self;
}

void fn_800E292C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2960(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C030[];
s32 *fn_800E296C(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C030;
    return self;
}

void fn_800E29A0(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E29D4(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040BFE8[];
s32 *fn_800E29E0(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040BFE8;
    return self;
}

void fn_800E2A14(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2A48(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040BFA0[];
s32 *fn_800E2A54(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040BFA0;
    return self;
}

void fn_800E2A88(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2ABC(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040BF58[];
s32 *fn_800E2AC8(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040BF58;
    return self;
}

void fn_800E2AFC(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2B30(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040BF10[];
s32 *fn_800E2B3C(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040BF10;
    return self;
}

void fn_800E2B70(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800E2BA4(s32 *self) {
    return *(s32 *)(self[2] + 0x94);
}

extern s32 lbl_8040C978[];
s32 *fn_800E3070(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C978;
    return self;
}

void fn_800E30A4(s32 *self) {
    fn_800E9514(self[2]);
}

void fn_800E30C8(s32 *self) {
    fn_800E953C(self[2]);
}

void fn_800E30EC(s32 *self) {
    fn_800E9554(self[2]);
}

extern s32 lbl_8040C930[];
s32 *fn_800E3110(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040C930;
    return self;
}

void fn_800E3144(s32 *self) {
    fn_800E9514(self[2]);
}

void fn_800E3168(s32 *self) {
    fn_800E953C(self[2]);
}

void fn_800E318C(s32 *self) {
    fn_800E9554(self[2]);
}

extern u8 lbl_8040C8E8[];
s32 *fn_800E31B0(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[9] = 0;
    self[10] = 0;
    self[11] = 0;
    self[5] = (s32)lbl_8040C8E8;
    return self;
}

extern void fn_800E3DBC(s32);
void fn_800E3B38(s32 *self, s32 id, f32 time) {
    fn_800E3DBC(self[2]);
}

extern void fn_800E3E08(s32);
void fn_800E3B5C(s32 *self) {
    fn_800E3E08(self[2]);
}

extern void fn_800E3E40(s32);
void fn_800E3B80(s32 *self, s32 arg) {
    fn_800E3E40(self[2]);
}

f32 fn_800E416C(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x4C);
}

void fn_800E4958(s32 *self, s32 flags) {
    s32 *v;
    self[5] = (s32)lbl_8040CB28;
    fn_8039E33C(self + 0x14, 2);
    v = self + 10;
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8((void *)v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800E49E8(void) {

}

void fn_800E4A10(void) {

}

s32 fn_800E4A14(s32 *self) {
    return self[6];
}

s32 fn_800E4A1C(s32 *self) {
    return self[7];
}

f32 fn_800E4A24(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x24);
}

s32 fn_800E4A2C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_800E4A70(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

s32 fn_800E4A78(u8 *self) {
    return *(s32 *)(self + 0x20);
}

void fn_800E4F34(void) {

}

void fn_800E4F38(void) {

}

void fn_800E5B8C(void) {

}

void fn_800E64BC(void) {

}

void fn_800E6570(void) {

}

void fn_800E662C(void) {

}

void fn_800E95F0(void) {

}

void fn_800E95F4(void) {

}

void fn_800E95F8(void) {

}

void fn_800E95FC(void) {

}

s32 fn_800E9708(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x98);
}

void fn_800E9758(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern s32 lbl_8040CED8[];
s32 *fn_800E978C(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040CED8;
    return self;
}

void fn_800E97C0(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800E982C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800E98BC(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800E9928(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800E9994(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern s32 lbl_8040CD70[];
s32 *fn_800E99C8(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040CD70;
    return self;
}

void fn_800E99FC(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern void fn_800E938C(s32);
void fn_800E9A30(s32 *self) {
    fn_800E938C(self[2]);
}

extern void fn_800E9480(s32);
void fn_800E9A54(s32 *self) {
    fn_800E9480(self[2]);
}

extern void fn_800E94E8(s32);
void fn_800E9A78(s32 *self) {
    fn_800E94E8(self[2]);
}

void fn_800E9AA8(s32 *self) {
    fn_800E9514(self[2]);
}

void fn_800E9ACC(s32 *self) {
    fn_800E953C(self[2]);
}

void fn_800E9AF0(s32 *self) {
    fn_800E9554(self[2]);
}

void fn_800E9B4C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern s32 lbl_8040CCE0[];
s32 *fn_800E9B80(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040CCE0;
    return self;
}

void fn_800E9BB4(s32 *self) {
    fn_800E9514(self[2]);
}

void fn_800E9BD8(s32 *self) {
    fn_800E953C(self[2]);
}

void fn_800E9BFC(s32 *self) {
    fn_800E9554(self[2]);
}

s32 fn_800E9D6C(s32 *self) {
    return self[6];
}

extern u8 lbl_8040CFF8[];
s32 *fn_800E9EE0(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[5] = (s32)lbl_8040CFF8;
    return self;
}

extern u8 lbl_8040CFB0[];
s32 *fn_800E9F1C(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[9] = 0;
    self[10] = 0;
    self[11] = 0;
    self[5] = (s32)lbl_8040CFB0;
    return self;
}

extern s32 lbl_8040D118[];
s32 *fn_800EA508(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040D118;
    return self;
}

void fn_800EA53C(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_8040D0D0[];
s32 *fn_800EA570(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[5] = (s32)lbl_8040D0D0;
    return self;
}

void fn_800EA5AC(s32 *self, s32 flags) {
    self[5] = (s32)lbl_804093F8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800EA5E0(s32 *self) {
    fn_800E9514(self[2]);
}

void fn_800EA604(s32 *self) {
    fn_800E953C(self[2]);
}

void fn_800EA628(s32 *self) {
    fn_800E9554(self[2]);
}

extern s32 lbl_8040D088[];
s32 *fn_800EA64C(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040D088;
    return self;
}

extern u8 lbl_8040D040[];
s32 *fn_800EA680(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[5] = (s32)lbl_8040D040;
    return self;
}

void fn_800EA6EC(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800EAF58(void) {

}

void fn_800EAF5C(void) {

}

s32 fn_800EB5B4(void) {
    return 0;
}

extern void fn_800EAF08(s32);
void fn_800EBC3C(s32 self, s32 flags) {
    fn_800EAF08(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800EBC7C(void) {
    return 0;
}

extern void fn_800EAF60(s32);
void fn_800ECE00(s32 self, s32 flags) {
    fn_800EAF60(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern void fn_800EBDA4(void *);
void *fn_800ED300(void *self) {
    fn_800EBDA4(self);
    return self;
}

extern void fn_800EBC84(void *);
void *fn_800ED5D8(void *self) {
    fn_800EBC84(self);
    return self;
}

extern void fn_800EBF1C(void *);
void *fn_800ED814(void *self) {
    fn_800EBF1C(self);
    return self;
}

void fn_800EC49C(void);
void fn_800EE7C4(void) {
    fn_800EC49C();
}

void fn_800EC59C(void);
void fn_800EE91C(void) {
    fn_800EC59C();
}

void fn_800EC6BC(void);
void fn_800EEAC4(void) {
    fn_800EC6BC();
}

void fn_800EE83C(void);
void fn_800EEB3C(void) {
    fn_800EE83C();
}

void fn_800EC774(void);
void fn_800EEBB4(void) {
    fn_800EC774();
}

void fn_800EE994(void);
void fn_800EEC2C(void) {
    fn_800EE994();
}

void fn_800EC848(void);
void fn_800EECA4(void) {
    fn_800EC848();
}

void fn_800EC8E0(void);
void fn_800EEDEC(void) {
    fn_800EC8E0();
}

