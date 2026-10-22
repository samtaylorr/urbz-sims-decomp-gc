/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_80414770[];
extern char lbl_80435418[];

void fn_801A1B50(void);
void fn_8019A0A4(void) {
    M2C_UNK fn_8019A10C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x184);
    fn_8019A10C();
}

void fn_8019A0CC(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

s32 fn_8019AC24(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x1C);
    switch (temp_r0) {                              /* irregular */
    case 2:
        return 0x13;
    case 3:
        return 6;
    case 1:
        return 0x12;
    case 0:
        return 7;
    default:
        return -1;
    }
}

s32 fn_8019AC7C(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x1C);
    switch (temp_r0) {                              /* irregular */
    case 2:
        return 6;
    case 3:
        return 7;
    case 1:
        return 0x13;
    case 0:
        return 0x12;
    default:
        return -1;
    }
}

s16 fn_8019AFE8(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x34);
}

s32 fn_8019B1D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}

s16 fn_8019B418(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x4C);
}

s32 fn_8019B448(void) {
    return 0;
}

s32 fn_8019B89C(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x68) & 0x1FF;
}

s32 fn_8019B8A8(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x68) >> 9U) & 1;
}

void fn_8019B8B4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x6A) = arg1;
}

void fn_8019B8BC(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x6C) = arg1;
}

void fn_8019B8C4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x6E) = arg1;
}

void fn_8019B8CC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (arg1 - (M2C_FIELD(arg0, s16 *, 0x20) + (M2C_FIELD(arg0, s16 *, 0x1E) * 0x3C) + (M2C_FIELD(arg0, s16 *, 0x14) * 0xE10)));
}

f32 fn_8019B8F4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xB0);
}

s16 fn_8019B928(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x3A);
}

void fn_8019B930(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x3A) = arg1;
}

s32 fn_8019B938(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

void fn_8019B978(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x1C) = arg1;
}

s32 fn_8019B9C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

void fn_8019B9D0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x8C) = arg1;
}

s32 fn_8019B9D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x94);
}

void fn_8019B9E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x94) = arg1;
    M2C_FIELD(arg0, s16 *, 0x5C) = (s16) (arg1 / 10000);
    M2C_FIELD(arg0, s16 *, 0x5A) = (s16) (arg1 % 10000);
}

s32 fn_8019BA10(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

void fn_8019BA18(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x90) = arg1;
    M2C_FIELD(arg0, s16 *, 0x58) = (s16) (arg1 / 10000);
    M2C_FIELD(arg0, s16 *, 0x56) = (s16) (arg1 % 10000);
}

s32 fn_8019BA48(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x9C);
}

void fn_8019BA50(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x9C) = arg1;
}

s32 fn_8019C804(void) {
    extern void *lbl_8049454C;
    return M2C_FIELD(lbl_8049454C, s32 *, 0x18);
}

s32 fn_8019C810(void) {
    extern void *lbl_8049454C;
    return M2C_FIELD(lbl_8049454C, s32 *, 0x1C);
}

s32 fn_8019C81C(void) {
    extern void *lbl_8049454C;
    return M2C_FIELD(lbl_8049454C, s32 *, 0x20);
}

void **fn_8019C828(void **self) {
    *self = lbl_80414770;
    return self;
}

void **fn_8019C83C(void **self) {
    *self = lbl_80414770;
    return self;
}

void fn_8019C850(void) {

}

void fn_8019C998(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s16 *, 0) = 3;
    M2C_FIELD(arg1, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg1, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg1, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg1, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg1, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(arg1, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(arg1, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(arg1, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg1, s32 *, 0x40) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
    M2C_FIELD(arg1, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
}

void fn_8019CA14(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFF00);
}

void fn_8019CA24(void *arg0, u32 arg1) {
    if (arg1 <= 7U) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | (1 << arg1));
    }
}

void fn_8019CA44(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 0x100);
}

void fn_8019CA54(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = -3;
}

void fn_8019CA60(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = -2;
}

void fn_8019CA6C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
}

void fn_8019CA78(void *arg0, u32 arg1) {
    if (arg1 <= 7U) {
        M2C_FIELD(arg0, u32 *, 0x34) = arg1;
    }
}

void fn_8019CBE8(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s16 *, 0) = 0;
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
}

extern u8 lbl_80414770[];
extern void fn_802D20E8(void *);
void fn_8019CE74(void **self, s32 flags) {
    *self = lbl_80414770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8019CFDC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) | 0x40);
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

s32 fn_8019E638(s32 arg0) {
    M2C_UNK fn_800F6A38(s32);
    fn_800F6A38(arg0 + 4);
    return 1;
}

void fn_8019EE44(void *arg0) {
    void *vt = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(vt, void (**)(void *), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30));
}

s32 fn_8019EE78(void *arg0, void *arg1) {
    s32 fn_803AAECC(void *, s32, s32, s32, s32);
    extern void *lbl_8049665C;
    void *obj = lbl_8049665C;
    void *vt = M2C_FIELD(obj, void **, 0);
    s32 r = M2C_FIELD(vt, s32 (**)(void *, s32), 0x3C)((char *)obj + M2C_FIELD(vt, s16 *, 0x38), M2C_FIELD(arg1, s32 *, 0));
    return fn_803AAECC((char *)arg0 + 0x54, r, 0x534C4F54, M2C_FIELD(arg1, s16 *, 4), 0) == 0;
}

s32 fn_8019EF58(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x64);
}

s32 fn_8019EF6C(void *arg0) {
    s32 n;
    void *vt;

    n = --M2C_FIELD(arg0, s32 *, 0x64);
    if (n == 0) {
        if (arg0 != NULL) {
            vt = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(vt, void (**)(void *, s32), 0x64)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x60), 3);
        }
        return 0;
    }
    return n;
}

s32 fn_8019F070(void) {
    return 0;
}

s32 fn_8019F078(void) {
    return 0;
}

s32 fn_8019F098(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x54) + (arg1 * 0x48);
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

s32 fn_8019F1C0(void *arg0) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x58) - M2C_FIELD(arg0, s32 *, 0x54)) * 0x38E38E39) >> 3;
}

s32 fn_8019F1E0(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x54) + (arg1 * 0x48);
}

s32 fn_8019F1F0(void) {
    return 0;
}

void fn_8019F1F8(void) {

}

s32 fn_8019F1FC(void) {
    return 2;
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

s32 fn_8019F274(void *arg0) {
    s32 ret = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10) & 1) {
        ret = 1;
    }
    return ret;
}

s32 fn_8019F28C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x10) >> 1U) & 1;
}

s32 fn_8019F298(s32 arg0) {
    return 1 << (arg0 - 1);
}

s32 fn_8019F2A8(void) {
    return 0xC;
}

extern void fn_8019F2D4(void *);
void fn_8019F2D4(void *self) {
    extern void *fn_8019D2DC(void *, s32);
    fn_8019D2DC(self, 0);
}

s32 fn_8019F2F8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) != 0;
}

void fn_8019F310(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}

void fn_8019F318(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

void fn_8019F320(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
}

void fn_8019F328(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x5C) = farg0;
}

s32 fn_8019F34C(s32 *self) {
    return self[6];
}

s32 fn_8019F354(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3C);
}

s32 fn_8019F35C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

s32 fn_8019F364(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 fn_8019F36C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64);
}

void fn_8019F374(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}

s32 fn_8019F37C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

s32 fn_8019F384(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

s32 fn_8019F38C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x48) >> 4U) & 1;
}

s32 fn_8019F398(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60);
}

void fn_8019F3A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x60) = arg1;
}

f32 fn_8019F3A8(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xC);
}

void fn_8019F3B0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
}

f32 fn_8019F3B8(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x50);
}

f32 fn_8019F3C0(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x54);
}

f32 fn_8019F3C8(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x58);
}

void fn_8019F3D0(void **self, s32 flags) {
    *self = lbl_80414770;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8019F484(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}

s32 fn_8019F48C(void *arg0) {
    s32 flags = M2C_FIELD(arg0, s32 *, 0x1C);
    if (flags & 0x800) {
        return 1;
    }
    return 0;
}

void fn_8019F4A4(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFF7FF;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r0 | 0x800);
    }
}

s32 fn_8019F4C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_8019F4CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

s32 fn_8019F4D4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 fn_8019F4DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

f32 fn_8019F4E4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x30);
}

s32 fn_8019F4EC(void *arg0, s32 i) {
    struct TTabScratchEntryA { u8 pad[0x10]; s32 unk10[4]; } *self = arg0;
    return self->unk10[i];
}

s32 fn_8019F4FC(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_8019F504(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) & 0x1000) {
        return 1;
    }
    return 0;
}

s32 fn_8019F51C(void *arg0) {
    s32 i;

    for (i = 0; i < 7; i++) {
        if ((M2C_FIELD(arg0, s32 *, 0x1C) >> i) & 1) {
            return i;
        }
    }
    return 0;
}

s32 fn_8019F548(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 9U) & 1;
}

s32 fn_8019F554(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 0xDU) & 1;
}

void fn_8019F560(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFDFFF;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r0 | 0x2000);
    }
}

void fn_8019F580(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFBFFF;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r0 | 0x4000);
    }
}

s32 fn_8019F5A0(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 0xEU) & 1;
}

void fn_8019F5AC(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFF7FFF;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r0 | 0x8000);
    }
}

s32 fn_8019F5CC(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 0xFU) & 1;
}

void fn_8019F5D8(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFEFFFF;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r0 | 0x10000);
    }
}

s32 fn_8019F5F8(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x1C) & 1;
}

void fn_8019F604(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

f32 fn_8019F60C(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 4);
}

f32 fn_8019F614(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 8);
}

f32 fn_8019F61C(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xC);
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

s32 fn_8019FC9C(void) {
    M2C_UNK fn_800C4744(M2C_UNK *);
    s32 fn_800C4820();
    s32 fn_80247C34();
    M2C_UNK sp8;
    s32 temp_r29;

    fn_800C4744(&sp8);
    temp_r29 = fn_800C4820();
    return temp_r29 ^ (M2C_FIELD(&sp8, s32 *, 4) ^ fn_80247C34());
}

s32 fn_801A0558(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 1:
        return 4;
    case 2:
        return 8;
    case 4:
        return 1;
    case 8:
        return 2;
    default:
        return 0;
    case 16:
    case 32:
        return arg0;
    }
}

void fn_801A0858(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_801A08F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0) != 0;
}

void fn_801A0DFC(s32 *arg0, s32 arg1) {
    M2C_UNK fn_801A0780(s32);
    M2C_UNK fn_801A08DC(s32 *, s32);
    fn_801A0780(arg1);
    fn_801A08DC(arg0, arg1);
    *arg0 &= ~arg1;
}

void fn_801A0E48(s32 *arg0) {
    *arg0 = 0;
}

u16 fn_801A0F3C(void *arg0, u16 arg1, s32 arg2) {
    u16 var_r0;

    if ((u32) (arg2 - 1) <= 1U) {
        var_r0 = M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg0, u16 *, 8) = arg1;
    } else {
        var_r0 = M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg0, u16 *, 0x14) = arg1;
    }
    return var_r0;
}

s32 fn_801A0FCC(void) {
    return 0x1E;
}

s32 fn_801A0FD4(void) {
    return 0x168;
}

void fn_801A1340(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x30) = arg1;
}

s16 fn_801A1348(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x30);
}

void fn_801A1350(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
}

void fn_803AB7D4();
void fn_801A135C(char *self) {
    extern void fn_803AB7D4(void *);
    fn_803AB7D4(self + 8);
}

void fn_801A1E30(void) {
    fn_801A1B50();
}

void fn_801A1E50(s32 arg0, s32 arg1) {
    M2C_UNK fn_801A1E98(s32, s32);
    M2C_UNK fn_801A2FA0(s32, M2C_UNK);
    if (arg1 != 0) {
        fn_801A2FA0(arg1, 0);
    }
    fn_801A1E98(arg0, arg1);
}

void fn_801A2EF4();
void fn_801A2600(char *self) {
    extern void fn_801A2EF4(void *);
    fn_801A2EF4(self + 8);
}

void fn_801A264C(void) {

}

s32 fn_801A29A8(s32 arg0) {
    return arg0 + 0x10;
}

void *fn_801A29B0(void *arg0) {
    return arg0 + ((M2C_FIELD(arg0, u8 *, 7) * 2) + 0x10);
}

s32 fn_801A29C4(void *arg0) {
    return (((M2C_FIELD(arg0, u8 *, 6) + M2C_FIELD(arg0, u8 *, 7) + 3) * 2) & 0x7F8) + 0x10;
}

s32 fn_801A2B54(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0);
}

void fn_801A2EE8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 8);
}

s32 fn_801A2F28(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(arg0, s32 *, 8)) >> 2;
}

void fn_801A2FF8(s32 *self, s32 value) {
    *self = value;
}

void fn_801A3000(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

void fn_801A3008(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void fn_801A3010(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

void fn_801A3018(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

s32 fn_801A3020(s32 *self) {
    return self[1];
}

s32 fn_801A3028(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void fn_801A3030(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
}

s32 fn_801A3038(s32 *self) {
    return self[6];
}

void fn_801A3040(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
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

s32 fn_801A30A4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

extern s32 lbl_80495D3C;
extern void fn_800F1A60(s32, s32);
void fn_801A30AC(void) {
    fn_800F1A60((s32)&lbl_80495D3C, 2);
}

s16 fn_801A375C(void **arg0, s32 arg1) {
    s32 var_r0;
    void *temp_r3;

    temp_r3 = *arg0;
    var_r0 = 0;
    if (temp_r3 != NULL) {
        var_r0 = M2C_FIELD(temp_r3, s32 *, -4);
    }
    if ((arg1 >= 0) && (arg1 < var_r0)) {
        return M2C_FIELD((temp_r3 + (arg1 << 5)), s16 *, 0x1A);
    }
    return -1;
}

extern u8 lbl_80414FD0[];
void fn_801A37C4(void **self, s32 flags) {
    *self = lbl_80414FD0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s16 fn_801A38DC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 4);
}

void fn_801A38E4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = arg1;
}

s16 fn_801A38EC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 6);
}

void fn_801A38F4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 6) = arg1;
}

s32 fn_801A38FC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 6) + M2C_FIELD(arg0, s16 *, 8);
}

void fn_801A390C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = (s16) (arg1 - M2C_FIELD(arg0, u16 *, 6));
}

s16 fn_801A391C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 8);
}

void fn_801A3924(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = arg1;
}

s16 fn_801A392C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x112);
}

s32 fn_801A3934(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x110) & 1;
}

s32 fn_801A3960(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 1U) & 1;
}

s32 fn_801A398C(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 2U) & 1;
}

s32 fn_801A39B8(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 3U) & 1;
}

s32 fn_801A39E4(void *arg0) {
    return ((u32) (M2C_FIELD(arg0, u16 *, 0x110) ^ 0x10) >> 4U) & 1;
}

s32 fn_801A3A14(void *arg0) {
    return ((u32) (M2C_FIELD(arg0, u16 *, 0x110) ^ 0x40) >> 6U) & 1;
}

s32 fn_801A3A44(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 5U) & 1;
}

s16 fn_801A3A70(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x116);
}

void fn_801A3A78(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x116) = arg1;
}

s32 fn_801A3A80(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 7U) & 1;
}

s32 fn_801A3AAC(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 8U) & 1;
}

s32 fn_801A3AD8(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 9U) & 1;
}

s32 fn_801A3B04(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 0xAU) & 1;
}

void fn_801A3B10(void *arg0, s32 arg1) {
    s32 v = M2C_FIELD(arg0, u16 *, 0x110) & ~0x400;
    M2C_FIELD(arg0, u16 *, 0x110) = v;
    if (arg1 != 0) {
        M2C_FIELD(arg0, u16 *, 0x110) = v | 0x400;
    }
}

s32 fn_801A3B30(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x110) >> 0xBU) & 1;
}

void fn_801A3B3C(void *arg0, s32 arg1) {
    s32 v = M2C_FIELD(arg0, u16 *, 0x110) & ~0x800;
    M2C_FIELD(arg0, u16 *, 0x110) = v;
    if (arg1 != 0) {
        M2C_FIELD(arg0, u16 *, 0x110) = v | 0x800;
    }
}

s32 fn_801A3B5C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x114) > 0x63;
}

s32 fn_801A3B70(void) {
    return 0x10;
}

void *fn_801A3B78(void *arg0, s32 i) {
    return (u8 *)arg0 + (i * 0x10 + 8) + 8;
}

void *fn_801A3B8C(void *arg0, s32 i) {
    return (u8 *)arg0 + (i * 0x10 + 8) + 6;
}

void *fn_801A3BA0(void *arg0, s32 i) {
    return (u8 *)arg0 + (i * 0x10 + 8) + 4;
}

void *fn_801A3BB4(void *arg0, s32 i) {
    return (u8 *)arg0 + (i * 0x10 + 8) + 8;
}

void *fn_801A3BC8(void *arg0, s32 i) {
    return (u8 *)arg0 + (i * 0x10 + 8) + 6;
}

void *fn_801A3BDC(void *arg0, s32 i) {
    return (u8 *)arg0 + (i * 0x10 + 8) + 4;
}

void *fn_801A3BF0(void *arg0, s32 i) {
    return (u8 *)arg0 + (i * 0x10 + 8);
}

void *fn_801A3C00(void *arg0, s32 i) {
    return (u8 *)arg0 + (i * 0x10 + 8);
}

void fn_801A3C10(void *arg0, s32 i, s32 arg2) {
    struct TTabEntryType { u8 pad[0x20]; s16 unk20; s16 pad22; void (*unk24)(void *, s32); } *t;
    t = *(struct TTabEntryType **)((u8 *)arg0 + i * 0x10 + 8);
    t->unk24((u8 *)arg0 + (i * 0x10 + 8) + t->unk20, arg2);
}

s16 fn_801A3C58(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 6);
}

void fn_801A3C60(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 6) = arg1;
}

s16 fn_801A3C68(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 4);
}

void fn_801A3C70(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = arg1;
}

s32 fn_801A3C78(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x108);
}

void fn_801A3C80(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x108) = arg1;
}

f32 fn_801A3C88(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x10C);
}

void fn_801A3C90(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x10C) = farg0;
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
}

s16 fn_801A3CA0(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x114);
}

void fn_801A3CA8(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x114) = arg1;
}

void fn_801A3CB0(void) {
    M2C_UNK fn_800F160C(M2C_UNK *);
    M2C_UNK fn_800F3304(M2C_UNK *);
    M2C_UNK fn_80246D44(M2C_UNK *);
    extern s32 lbl_80495D40;
    if ((s32) lbl_80495D40 == 0) {
        fn_800F160C(&lbl_80495D3C);
        lbl_80495D40 = 1;
        fn_80246D44(&fn_801A30AC);
    }
    fn_800F3304(&lbl_80495D3C);
}

void fn_801A3CFC(void) {

}

s16 fn_801A3D00(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x110);
}

s32 fn_801A3D08(void) {
    return 0;
}

void fn_801A3D10(void) {

}

s32 fn_801A3D24(s32 arg0) {
    if ((arg0 == 3) || (arg0 == 5) || (arg0 == 6) || (arg0 == 0xF) || (arg0 == 0x17)) {
        return 1;
    }
    return 0;
}

u8 fn_801A4308(s32 arg0, s32 arg1) {
    return (u8) ((s32) ((arg0 * 0x10) | arg0) >> ((s32) (8 - arg1) >> 1));
}

s32 fn_801A4FA8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 fn_801A4FB0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

s32 fn_801A9C10(void *arg0, void *arg1) {
    s32 var_r11;
    u8 temp_r0;
    u8 temp_r9;

    temp_r9 = M2C_FIELD(arg1, u8 *, 0);
    var_r11 = 0;
    if (((s8) temp_r9 < (s32) M2C_FIELD(arg0, s32 *, 0x1C)) || ((s8) temp_r9 > (s32) M2C_FIELD(arg0, s32 *, 0x20)) || (temp_r0 = M2C_FIELD(arg1, u8 *, 1), (((s8) temp_r0 < (s32) M2C_FIELD(arg0, s32 *, 0x24)) != 0)) || ((s8) temp_r0 > (s32) M2C_FIELD(arg0, s32 *, 0x28))) {
        var_r11 = 1;
    }
    return var_r11;
}

s32 fn_801A9CCC(void *arg0, void *arg1) {
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg1, u8 *, 0);
    if (((s8) temp_r0 <= 0) || ((s8) temp_r0 >= (s32) (M2C_FIELD(arg0, s32 *, 0x14) - 1)) || (temp_r0_2 = M2C_FIELD(arg1, u8 *, 1), (((s8) temp_r0_2 > 0) == 0)) || ((s8) temp_r0_2 >= (s32) (M2C_FIELD(arg0, s32 *, 0x18) - 1))) {
        return 1;
    }
    return 0;
}

s32 fn_801A9D9C(void *arg0, void *arg1) {
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg1, u8 *, 0);
    if (((s8) temp_r0 < 0) || ((s8) temp_r0 >= (s32) M2C_FIELD(arg0, s32 *, 0x14)) || (temp_r0_2 = M2C_FIELD(arg1, u8 *, 1), (((s8) temp_r0_2 < 0) != 0)) || ((s8) temp_r0_2 >= (s32) M2C_FIELD(arg0, s32 *, 0x18))) {
        return 1;
    }
    return 0;
}

s32 fn_801A9EBC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_801A9EC4(s32 *self) {
    return self[6];
}

s32 fn_801A9ECC(void) {
    return 0x40;
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

s32 fn_801AA4E0(void) {
    return 0x80;
}

s32 fn_801AA930(s32 *self) {
    return self[1];
}

s32 fn_801AB074(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0)) >> 4;
}

s32 fn_801AB088(s32 *arg0, s32 arg1) {
    return *arg0 + (arg1 * 0x10);
}

void fn_801AB0E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
}

void fn_801AB0F0(void *arg0) {
    s32 i = M2C_FIELD(arg0, s32 *, 0x54);

    if (i == -1) {
        return;
    }
    if (i >= 0 && (u32)i < (u32)((M2C_FIELD(arg0, char **, 4) - M2C_FIELD(arg0, char **, 0)) >> 4)) {
        M2C_FIELD(arg0, s32 **, 0)[i * 4 + 2] = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x54) = -1;
    M2C_FIELD(arg0, s32 *, 0x58) = -1;
}

s32 fn_801AB13C(s32 arg0) {
    return arg0 + 0x10;
}

s32 fn_801AB348(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 0x54) * 0x10);
}

void fn_801AB5C8(void) {

}

void fn_801AB5CC(void *arg0) {
    s32 var_r9;
    s32 temp_r11;
    s32 temp_r0;

    temp_r11 = M2C_FIELD(arg0, s32 *, 0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    var_r9 = temp_r11;
    if (temp_r11 != temp_r0) {
        do {
            var_r9 += 0x10;
        } while (var_r9 != temp_r0);
    }
    M2C_FIELD(arg0, s32 *, 4) = temp_r11;
    M2C_FIELD(arg0, s32 *, 0x54) = -1;
    M2C_FIELD(arg0, s32 *, 0x58) = -1;
}

void fn_801AD7B0(void *self, void *arg1) {
    M2C_UNK fn_801AB600(void *, void *, s32);
    fn_801AB600(self, arg1, 1);
}

s32 fn_801AD7D4(s32 *arg0, s32 *arg1) {
    s32 fn_80192DE4(s32 *, s32 *);
    s32 rect[4];
    s32 idx;
    s32 x = arg1[0];
    s32 y = arg1[1];

    rect[0] = y;
    rect[1] = x;
    rect[2] = y + 1;
    rect[3] = x + 1;
    if (arg0 != NULL) {
        idx = fn_80192DE4(rect, arg0);
        if (idx != -1) {
            if (*(s32 *)(M2C_FIELD(arg0, char **, 0) + idx * 0x14 + 0x10) == 0x7FFFFFFF) {
                return 1;
            }
        }
    }
    return 0;
}

void fn_801AFBA0(void *self, s32 arg1, s16 arg2, void *arg3) {
    s16 idx;
    s32 v;
    void *vt;
    s16 m;

    if (M2C_FIELD(arg3, u8 *, 0x1F) == 0) {
        idx = arg1 + 4;
    } else {
        v = M2C_FIELD(arg3, s32 *, 0x34);
        if (v == -1) {
            idx = arg2;
        } else if (v == -2) {
            idx = arg2 + 4;
        } else if (v == -3) {
            return;
        } else {
            idx = arg1 + v;
        }
    }
    m = idx % 8;
    vt = M2C_FIELD(self, void **, 4);
    M2C_FIELD(vt, void (**)(void *, s32, s16), 0x1AC)((char *)self + M2C_FIELD(vt, s16 *, 0x1A8), 1, m);
}

s32 fn_801B1824(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 4) & 0x7FFF;
}

void fn_801B186C(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800ECF20(s32, s32);
    fn_800ECF20(M2C_FIELD(arg0, s32 *, 0x10) + (arg1 * 4), arg2);
}

s32 fn_801B19A0(void *arg0) {
    return (M2C_FIELD(arg0, s16 *, 4) & 0x8000) != 0;
}

void fn_801B19AC(void *arg0, s32 arg1) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 4) & 0x7FFF;
    M2C_FIELD(arg0, u16 *, 4) = temp_r0;
    if (arg1 != 0) {
        M2C_FIELD(arg0, u16 *, 4) = (u16) (temp_r0 | 0x8000);
    }
}

void *fn_802D0AB8(void);
void *fn_802D0B3C(void);
void *fn_802D197C(void *, u32, s32);
void *fn_802DBBCC(void *, u32, s32);
void fn_802D1A00(void *, void *);
s32 fn_801B19CC(void *self, s32 arg1) {
    M2C_UNK fn_800F68E0(s32);
    fn_800F68E0(arg1);
    return 1;
}

s32 fn_801B19F4(void) {
    return 0;
}

void *fn_801B19FC(u32 size) {
    void *heap;
    void *p;

    if (size == 0x20) {
        p = M2C_FIELD(lbl_80435418, void **, 4);
        if (p != NULL) {
            M2C_FIELD(lbl_80435418, void **, 4) = *(void **)p;
            return p;
        }
    }
    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DBBCC(fn_802D0B3C(), size, 0);
        }
    }
    return p;
}

void fn_801B1AB4(void *p) {
    u32 base = M2C_FIELD(lbl_80435418, u32 *, 0);
    if ((u32)p >= base && (u32)p < base + M2C_FIELD(lbl_80435418, u32 *, 8)) {
        if (p != NULL) {
            *(void **)p = M2C_FIELD(lbl_80435418, void **, 4);
            M2C_FIELD(lbl_80435418, void **, 4) = p;
        }
    } else {
        fn_802D1A00(fn_802D0AB8(), p);
    }
}

void fn_801B1CBC(void) {

}

s32 fn_801B1D30(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x1C);
}

void fn_801B1F0C(void *arg0) {
    void *vt = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(vt, void (**)(void *), 0x34)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x30));
}

extern char lbl_80435418[];
extern char lbl_80435438[];
void fn_802D23C0();
s32 fn_801B225C(s32 arg0) {
    M2C_UNK fn_800F6A38(s32);
    fn_800F6A38(arg0 + 0x18);
    return 1;
}

s32 fn_801B22F4(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x60);
}

s32 fn_801B2308(void *arg0) {
    s32 var_r3;
    void *temp_r9;

    var_r3 = --M2C_FIELD(arg0, s32 *, 0x60);
    if (var_r3 == 0) {
        if (arg0 != NULL) {
            temp_r9 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_r9, void (**)(void *, s32), 0x74)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x70), 3);
        }
        return 0;
    }
    return var_r3;
}

void fn_802D23C0(void *, void *, s32, s32);
s32 fn_801B2364(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        u32 p = (u32)lbl_80435438;
        fn_802D23C0(lbl_80435418, (void *)((p + 0x3F) & ~0x3F), 0x20, 0x5A);
    }
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

extern u8 lbl_804152F0[];
void fn_801B2540(void **self) {
    M2C_UNK fn_801B1774(void **);
    *self = lbl_804152F0;
    fn_801B1774(self);
}

s32 fn_801B2570(void) {
    return 2;
}

void fn_801B2578(void) {
    M2C_UNK fn_801B2364(M2C_UNK, M2C_UNK);
    fn_801B2364(1, 0xFFFF);
}

