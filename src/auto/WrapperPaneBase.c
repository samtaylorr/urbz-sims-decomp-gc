/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s32 x;
    s32 y;
} WrapperPanePoint;

typedef struct {
    u8 pad0[0x1C];
    WrapperPanePoint pos;
    WrapperPanePoint size;
    u8 pad2C[0x40 - 0x2C];
    s32 unk40[1];
} WrapperPaneBase;

typedef struct { f32 x, y, z; } WPBVec3;
typedef struct { f32 x, y, z, w; } WPBVec4;

static inline void WPBVec4_Set(WPBVec4 *d, const WPBVec3 *v, f32 w) {
    d->x = v->x;
    d->y = v->y;
    d->z = v->z;
    d->w = w;
}

static inline WPBVec4 *WPBVec4_Copy(WPBVec4 *d, const WPBVec4 *s) {
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    d->w = s->w;
    return d;
}

void fn_800CD09C();
s32 fn_800C5630(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}

s32 fn_800C5638(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

void fn_800C56B4(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x80) = farg0;
}

void fn_800C56BC(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x84) = farg0;
}

s32 fn_800C56C4(s32 arg0) {
    return arg0 + 0x80;
}

f32 fn_800C56CC(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x80);
}

f32 fn_800C56D4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x84);
}

s32 fn_800C57A8(s32 arg0) {
    return arg0 + 0x88;
}

f32 fn_800C57B0(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x88);
}

f32 fn_800C57B8(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x8C);
}

f32 fn_800C57C0(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x88);
}

f32 fn_800C57C8(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x8C);
}

f32 fn_800C57D0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x70), void **, 0x64), f32 *, 0x34);
}

f32 fn_800C57E0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x70), void **, 0x64), f32 *, 0x38);
}

void fn_800C5FEC(void *arg0, s32 arg1) {
    s32 var_r3;
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x70);
    var_r3 = arg1;
    M2C_FIELD(temp_r31, s32 *, 0x38) = var_r3;
    if (var_r3 != 0) {
        var_r3 = fn_80248808();
    }
    M2C_FIELD(temp_r31, s32 *, 0x3C) = var_r3;
}

void fn_800C602C(void *arg0, s32 arg1) {
    M2C_UNK fn_800CE154(s32, M2C_UNK, M2C_UNK, s32);
    fn_800CE154(M2C_FIELD(arg0, s32 *, 0x70), 0, 1, arg1);
}

void fn_800C605C(void *arg0, s32 arg1) {
    M2C_UNK fn_800CE154(s32, M2C_UNK, M2C_UNK, s32);
    fn_800CE154(M2C_FIELD(arg0, s32 *, 0x70), 1, 1, arg1);
}

s32 fn_800C60BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}

s32 fn_800C60C4(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x90);
    M2C_FIELD(arg0, s32 *, 0x90) = arg1;
    return temp_r0;
}

void fn_800C7BD0(s32 arg0) {
    M2C_UNK fn_800C8614(s32);
    M2C_UNK fn_800C8908(s32);
    fn_800CEEC4();
    fn_800C8908(arg0);
    fn_800C8614(arg0);
}

void fn_800C9604(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x78) = arg1;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
}

void fn_800C9618(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
}

void fn_800C962C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, (s32)0x80) = arg1;
}

void fn_800CA9F4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x70) = arg1;
}

void fn_800CA9FC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x8C) = arg1;
}

s32 fn_800CAA04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

void fn_800CAFE8(void *arg0) {
    M2C_UNK fn_800CB350(void *);
    M2C_UNK fn_800CB514(void *);
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    fn_800CEEC8();
    fn_800CB350(arg0);
    fn_800CB514(arg0);
}

s32 fn_800CBD30(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}

s32 fn_800CBD38(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x7C);
}

s32 fn_800CBD40(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

s32 fn_800CBD48(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 fn_800CBD50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}

s32 fn_800CBD58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74) ^ 1;
}

void fn_800CCE5C(void *arg0) {
    M2C_UNK fn_800CC938();
    M2C_UNK fn_800CCAB0(void *, s32);
    M2C_UNK fn_8039D8D8(void *);
    extern s32 lbl_804966BC;
    extern f32 lbl_804966C4;
    void *temp_r9;

    fn_800CC938();
    fn_800CCAB0(arg0, lbl_804966BC);
    temp_r9 = (u8 *)arg0 + 0x20;
    M2C_FIELD(temp_r9, f32 *, 0x34) = lbl_804966C4;
    fn_8039D8D8(temp_r9);
    M2C_FIELD(arg0, s32 *, 4) |= 2;
}

void fn_800CCF64(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_800CCF70(void) {
    fn_800CD09C();
}

void fn_800CD05C(void *arg0) {
    s32 fn_8033740C(void *, s32, s32);
    extern u8 lbl_8045BA40[];
    M2C_FIELD(arg0, s32 *, 0x30) = fn_8033740C(lbl_8045BA40, 0, 0);
}

void fn_800CD09C(void *arg0) {
    M2C_UNK fn_8031EA2C(s32);
    if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        fn_8031EA2C(M2C_FIELD(arg0, s32 *, 0x30));
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
}

void fn_800CD7F0(f32 farg0) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_800CD660();
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x1C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32), 0x4C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x48), farg0);
}

void fn_800CD838(f32 farg0) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_800CD660();
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x1C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32), 0x5C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x58), farg0);
}

void fn_800CD8C8(f32 farg0) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_800CD660();
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x1C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32), 0x7C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x78), farg0);
}

void fn_800CD910(f32 farg0) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_800CD660();
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x1C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32), 0x8C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x88), farg0);
}

s32 fn_800CD998(void) {
    void *fn_800CD660();
    return M2C_FIELD(fn_800CD660(), s32 *, 0x20);
}

s32 fn_800CD9BC(void) {
    return M2C_FIELD(fn_800CD660(), s32 *, 0x50);
}

f32 fn_800CD9E0(void) {
    return M2C_FIELD(fn_800CD660(), f32 *, 0x54);
}

s32 fn_800CDA04(void) {
    return M2C_FIELD(fn_800CD660(), s32 *, 0x6C);
}

void fn_800CDA28(void) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_800CD660();
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x1C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x44)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x40));
}

void fn_800CDA60(void) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_800CD660();
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x1C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x54)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x50));
}

void fn_800CDA98(void) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_800CD660();
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x1C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x64)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x60));
}

void fn_800CDAD0(void) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_800CD660();
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x1C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x74)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x70));
}

void fn_800CDB08(void) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_800CD660();
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x1C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x84)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x80));
}

void fn_800CDB40(void) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = fn_800CD660();
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x1C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x94)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x90));
}

void fn_800CD104(void *self);
void fn_800CED30(void *self) {
    fn_800CD104(self);
}

void fn_800CEDF8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
}

void fn_800CEEC0(void) {

}

void fn_800CEEC4(void) {

}

void fn_800CEEC8(void) {

}

void fn_800CF02C(void) {

}

void fn_800CF648(s32 *self) {
    self[1] = 1;
}

void fn_800CF6B4(void *arg0, s32 arg1) {
    f32 fn_8039AA70(s32, M2C_UNK);
    void *temp_r29;

    temp_r29 = M2C_FIELD(arg0, void **, 0x44);
    M2C_FIELD(temp_r29, f32 *, 0) = fn_8039AA70(arg1, 0);
    M2C_FIELD(temp_r29, f32 *, 4) = fn_8039AA70(arg1, 1);
    M2C_FIELD(temp_r29, f32 *, 8) = fn_8039AA70(arg1, 2);
    M2C_FIELD(temp_r29, f32 *, 0xC) = fn_8039AA70(arg1, 3);
}

s32 fn_800CF720(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

void fn_800CF728(void *arg0, f32 farg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), f32 *, 0xC) = farg0;
}

f32 fn_800CF734(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), f32 *, 0xC);
}

void fn_800CF740(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x48) = farg0;
}

f32 fn_800CF748(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x48);
}

void fn_800CF750(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x4C) = farg0;
}

f32 fn_800CF758(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x4C);
}

s32 fn_800CF774(s32 arg0) {
    return arg0 + 0x24;
}

void fn_800CF77C(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x24) = farg0;
}

f32 fn_800CF784(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x24);
}

void fn_800CF78C(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
}

f32 fn_800CF794(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x28);
}

s32 fn_800CF7D4(s32 arg0) {
    return arg0 + 0x2C;
}

f32 fn_800CF7DC(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x2C);
}

f32 fn_800CF7E4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x30);
}

s32 fn_800CF824(s32 arg0) {
    return arg0 + 0x34;
}

f32 fn_800CF82C(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x34);
}

f32 fn_800CF834(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x38);
}

void fn_800CF83C(s32 arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = arg0 + 0x20;
    if (arg1 != 0) {
        M2C_FIELD(temp_r3, s32 *, 0x38) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x38) | 8);
        return;
    }
    M2C_FIELD(temp_r3, s32 *, 0x38) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x38) & 0xFFFFFFF7);
}

void fn_800CF868(u8 *self, s32 on) {
    u8 *p = self + 0x20;
    if (on) {
        *(u32 *)(p + 0x38) |= 0x20;
    } else {
        *(u32 *)(p + 0x38) &= ~0x20;
    }
}

s32 fn_800CF894(u8 *self) {
    return *(s32 *)(self + 0x20);
}

void fn_8039D8D8(void *);
void fn_800CF89C(u8 *self, s32 arg1) {
    u8 *p = self + 0x20;
    *(s32 *)(p + 0x30) = arg1;
    fn_8039D8D8(p);
    *(u32 *)(self + 0x4) |= 2;
}

s32 fn_800CF8DC(u8 *self) {
    return *(s32 *)(self + 0x50);
}

void fn_800CF8E4(void *arg0, f32 farg0) {
    void *temp_r3;

    temp_r3 = arg0 + 0x20;
    M2C_FIELD(temp_r3, f32 *, 0x34) = farg0;
    fn_8039D8D8(temp_r3);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 2);
}

f32 fn_800CF924(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x54);
}

s32 fn_800CF92C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}

void fn_800CFDA0(void *arg0, void *arg1) {
    *(WPBVec3 *)((char *)arg0 + 0x20) = *(WPBVec3 *)arg1;
    M2C_FIELD(arg0, f32 *, 0x2C) = M2C_FIELD(arg1, f32 *, 0xC);
}

WPBVec4 *fn_800CFDC8(WPBVec4 *out, void *arg1) {
    extern f32 lbl_803D12E8[];
    WPBVec4 t;
    WPBVec4_Set(&t, (WPBVec3 *)((char *)arg1 + 0x20), lbl_803D12E8[0]);
    t.w = M2C_FIELD(arg1, f32 *, 0x2C);
    return WPBVec4_Copy(out, &t);
}

void fn_800CFE2C(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
}

f32 fn_800CFE34(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x2C);
}

void fn_800CFE3C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
}

s32 fn_800CFE44(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

void fn_800CFF68(void *arg0, s32 flags) {
    extern u8 lbl_8040AC68[];
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    s32 *v;
    s32 *self = arg0;
    self[0x17] = (s32)lbl_8040AC68;
    fn_800CD104(self);
    v = self + 2;
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8((void *)v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800CFFE4(s32 *self) {
    return *self;
}

void fn_800CFFEC(void) {

}

void fn_800CFFF0(void *arg0) {
    M2C_UNK fn_800CE474(void *);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 1);
    fn_800CE474(arg0);
}

void fn_800D0020(void *arg0) {
    M2C_UNK fn_800CE5A8(void *);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & 0xFFFFFFFE);
    fn_800CE5A8(arg0);
}

s32 fn_800D0050(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) & 1;
}

void fn_800D005C(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x30) = farg0;
}

f32 fn_800D0064(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x30);
}

void fn_800D006C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
}

void fn_800D0074(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}

void fn_800D0080(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
}

void fn_800D008C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 2;
}

void fn_800D0098(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 3;
}

s32 fn_800D00A4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}

s32 fn_800D00AC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34) == 0;
}

s32 fn_800D00BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34) == 1;
}

s32 fn_800D00D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34) == 2;
}

s32 fn_800D00E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34) == 3;
}

void fn_800D024C(void *arg0, s32 arg1) {
    void *fn_800CD660(void *, s32, s32);
    fn_800CD660(arg0, 0, arg1);
}

void fn_800D0274(void *arg0, s32 arg1) {
    void *fn_800CD660(void *, s32, s32);
    fn_800CD660(arg0, 2, arg1);
}

void fn_800D029C(void *arg0, s32 arg1) {
    void *fn_800CD660(void *, s32, s32);
    fn_800CD660(arg0, 1, arg1);
}

void fn_800D02C4(void *arg0, s32 arg1) {
    void *fn_800CD660(void *, s32, s32);
    fn_800CD660(arg0, 3, arg1);
}

void fn_800D02EC(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD6A8(void *, s32, s32, s32);
    fn_800CD6A8(arg0, 0, arg1, arg2);
}

void fn_800D0318(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD6DC(void *, s32, s32, s32);
    fn_800CD6DC(arg0, 0, arg1, arg2);
}

void fn_800D0344(void *arg0, s32 arg1) {
    void *fn_800CD724(void *, s32, s32);
    fn_800CD724(arg0, 0, arg1);
}

void fn_800D036C(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD774(void *, s32, s32, s32);
    fn_800CD774(arg0, 0, arg1, arg2);
}

void fn_800D0398(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD7A8(void *, s32, s32, s32);
    fn_800CD7A8(arg0, 0, arg1, arg2);
}

void fn_800D0414(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD6A8(void *, s32, s32, s32);
    fn_800CD6A8(arg0, 2, arg1, arg2);
}

void fn_800D0440(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD6DC(void *, s32, s32, s32);
    fn_800CD6DC(arg0, 2, arg1, arg2);
}

void fn_800D046C(void *arg0, s32 arg1) {
    void *fn_800CD724(void *, s32, s32);
    fn_800CD724(arg0, 2, arg1);
}

void fn_800D0494(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD774(void *, s32, s32, s32);
    fn_800CD774(arg0, 2, arg1, arg2);
}

void fn_800D04C0(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD7A8(void *, s32, s32, s32);
    fn_800CD7A8(arg0, 2, arg1, arg2);
}

void fn_800D04EC(void *arg0, s32 arg1) {
    ((void (*)(void *, s32, s32))fn_800CD7F0)(arg0, 2, arg1);
}

void fn_800D0514(void *arg0, s32 arg1) {
    ((void (*)(void *, s32, s32))fn_800CD838)(arg0, 2, arg1);
}

void fn_800D053C(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD6A8(void *, s32, s32, s32);
    fn_800CD6A8(arg0, 1, arg1, arg2);
}

void fn_800D0568(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD6DC(void *, s32, s32, s32);
    fn_800CD6DC(arg0, 1, arg1, arg2);
}

void fn_800D0594(void *arg0, s32 arg1) {
    void *fn_800CD724(void *, s32, s32);
    fn_800CD724(arg0, 1, arg1);
}

void fn_800D05BC(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD774(void *, s32, s32, s32);
    fn_800CD774(arg0, 1, arg1, arg2);
}

void fn_800D05E8(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD7A8(void *, s32, s32, s32);
    fn_800CD7A8(arg0, 1, arg1, arg2);
}

void fn_800D0614(void *arg0, s32 arg1) {
    ((void (*)(void *, s32, s32))fn_800CD7F0)(arg0, 1, arg1);
}

void fn_800D063C(void *arg0, s32 arg1) {
    ((void (*)(void *, s32, s32))fn_800CD838)(arg0, 1, arg1);
}

void fn_800D0664(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD958(void *, s32, s32, s32);
    fn_800CD958(arg0, 3, arg1, arg2);
}

void fn_800D0690(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD7A8(void *, s32, s32, s32);
    fn_800CD7A8(arg0, 3, arg1, arg2);
}

void fn_800D06BC(void *arg0, s32 arg1) {
    ((void (*)(void *, s32, s32))fn_800CD7F0)(arg0, 3, arg1);
}

void fn_800D070C(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800CD880(void *, s32, s32, s32);
    fn_800CD880(arg0, 3, arg1, arg2);
}

s32 fn_800D0788(s32 *self) {
    return self[6];
}

void fn_800D0790(WrapperPaneBase *self, WrapperPanePoint *pos, WrapperPanePoint *size) {
    s32 px = pos->x;
    s32 py = pos->y;
    s32 sx;
    s32 sy;
    self->pos.x = px;
    self->pos.y = py;
    sx = size->x;
    sy = size->y;
    self->size.x = sx;
    self->size.y = sy;
}

void fn_800D07B4(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
}

extern s32 fn_80248808(s32);
void fn_800D07BC(s32 *self, s32 arg) {
    self[14] = arg;
    if (arg == 0) {
        self[15] = arg;
    } else {
        self[15] = fn_80248808(arg);
    }
}

s32 fn_800D0804(WrapperPaneBase *self, s32 i) {
    return self->unk40[i];
}

s32 fn_800D0B40(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

void fn_800D0B84(void *arg0, s32 arg1) {
    M2C_UNK fn_800CE954(void *, M2C_UNK);
    void *temp_r30;
    void *temp_r3;

    temp_r30 = M2C_FIELD(arg0, void **, 0x40);
    temp_r3 = temp_r30 + 0x20;
    M2C_FIELD(temp_r3, s32 *, 0x30) = arg1;
    fn_8039D8D8(temp_r3);
    M2C_FIELD(temp_r30, s32 *, 4) = (s32) (M2C_FIELD(temp_r30, s32 *, 4) | 2);
    fn_800CE954(arg0, 0);
}

s32 fn_800D0D24(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

s32 fn_800D0F08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

void fn_800CE8F4(u8 *self, s32 arg);
void fn_800CE924(u8 *self, s32 arg);
void fn_800D0FF0(u8 *self) {
    u8 *obj = *(u8 **)(self + 0x48);
    u8 *vt = *(u8 **)(obj + 0x1C);
    (*(void (**)(void *))(vt + 0x3C))(obj + *(s16 *)(vt + 0x38));
    fn_800CE8F4(self, 2);
    fn_800CE924(self, 2);
}

void fn_800D104C(u8 *self) {
    u8 *obj = *(u8 **)(self + 0x48);
    u8 *vt = *(u8 **)(obj + 0x1C);
    (*(void (**)(void *))(vt + 0x4C))(obj + *(s16 *)(vt + 0x48));
    fn_800CE8F4(self, 2);
}

void fn_800D109C(u8 *self) {
    u8 *obj = *(u8 **)(self + 0x48);
    u8 *vt = *(u8 **)(obj + 0x1C);
    (*(void (**)(void *))(vt + 0x5C))(obj + *(s16 *)(vt + 0x58));
    fn_800CE924(self, 2);
}

u8 *fn_800D10EC(u8 *self) {
    return self + 8;
}

void fn_800D122C(void *arg0, s32 flags) {
    extern u8 lbl_8040AC68[];
    extern void fn_802D20E8(void *);
    extern void fn_803997AC(void *, u32);
    s32 *v;
    s32 *self = arg0;
    self[0x17] = (s32)lbl_8040AC68;
    fn_800CD104(self);
    v = self + 2;
    if (v[0] != 0) {
        u32 size = (u32)(v[3] - v[0]) & ~3;
        if (size > 0x80) {
            fn_802D20E8((void *)v[0]);
        } else {
            fn_803997AC((void *)v[0], size);
        }
    }
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800D12A8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60);
}

s32 fn_800D12B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64);
}

void fn_800D12B8(void *arg0) {
    M2C_UNK fn_800CCA68(s32);
    fn_800CCA68(M2C_FIELD(arg0, s32 *, 0x60));
}

void fn_800D12DC(void *arg0, s32 arg1) {
    void *temp_r30;
    void *temp_r3;

    temp_r30 = M2C_FIELD(arg0, void **, 0x60);
    temp_r3 = temp_r30 + 0x20;
    M2C_FIELD(temp_r3, s32 *, 0x30) = arg1;
    fn_8039D8D8(temp_r3);
    M2C_FIELD(temp_r30, s32 *, 4) = (s32) (M2C_FIELD(temp_r30, s32 *, 4) | 2);
}

void fn_800D131C(void *arg0, f32 farg0) {
    void *temp_r30;
    void *temp_r3;

    temp_r30 = M2C_FIELD(arg0, void **, 0x60);
    temp_r3 = temp_r30 + 0x20;
    M2C_FIELD(temp_r3, f32 *, 0x34) = farg0;
    fn_8039D8D8(temp_r3);
    M2C_FIELD(temp_r30, s32 *, 4) = (s32) (M2C_FIELD(temp_r30, s32 *, 4) | 2);
}

void fn_800D1428(void *arg0, s32 arg1) {
    void *temp_r30;
    void *temp_r3;

    temp_r30 = M2C_FIELD(arg0, void **, 0x64);
    temp_r3 = temp_r30 + 0x20;
    M2C_FIELD(temp_r3, s32 *, 0x30) = arg1;
    fn_8039D8D8(temp_r3);
    M2C_FIELD(temp_r30, s32 *, 4) = (s32) (M2C_FIELD(temp_r30, s32 *, 4) | 2);
}

void fn_800D1468(void *arg0, f32 farg0) {
    void *temp_r30;
    void *temp_r3;

    temp_r30 = M2C_FIELD(arg0, void **, 0x64);
    temp_r3 = temp_r30 + 0x20;
    M2C_FIELD(temp_r3, f32 *, 0x34) = farg0;
    fn_8039D8D8(temp_r3);
    M2C_FIELD(temp_r30, s32 *, 4) = (s32) (M2C_FIELD(temp_r30, s32 *, 4) | 2);
}

s32 fn_800D1588(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64) + 0x2C;
}

f32 fn_800D1594(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), f32 *, 0x2C);
}

f32 fn_800D15A0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), f32 *, 0x30);
}

s32 fn_800D15E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64) + 0x34;
}

f32 fn_800D15F0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), f32 *, 0x34);
}

f32 fn_800D15FC(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), f32 *, 0x38);
}

void fn_800D1608(void) {
    M2C_UNK fn_800CF284(M2C_UNK, M2C_UNK);
    fn_800CF284(1, 0xFFFF);
}

