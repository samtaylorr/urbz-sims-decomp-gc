/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct UnkDC234 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    void *unk14;
    f32 unk18;
} UnkDC234;

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
void fn_800EAF5C(void);
s32 fn_800EB360(s32, s32);
s32 fn_800EF0A8(s32, s32, s32);
u8 *fn_800EAFCC(void **arg0);
void fn_800EC49C(s32, s32, s32, s32);
s32 fn_800EF6F8(void **arg0);
void fn_8024839C(void *dst, const void *src, u32 n);
s32 fn_800DBE90(s32);
void fn_800EBDA4(void *);
void fn_800EBC84(void *);
s32 fn_80248808(const char *arg0);
void *fn_802D197C(void *heap, u32 size, u32 align);
void *fn_802DBBCC(void *heap, u32 size, u32 align);
void *fn_802D0B3C(void);
void *fn_800EBA28(void *mem, s32 arg);
void *fn_802D0AB8(void *);

static inline void *BString_Alloc(u32 size, u32 align) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    p = fn_802D197C(heap, size, align);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DBBCC(fn_802D0B3C(), size, 0);
        }
    }
    return p;
}
f32 fn_800E416C(void *arg0);
extern f32 lbl_803D496C[];
extern f32 lbl_803D4970[];
extern f32 lbl_803D4974[];
extern f32 lbl_803D497C[];
extern f32 lbl_803D4980[];
extern f32 lbl_803D4984[];
extern const f32 lbl_803D4988[];

static inline s32 BString_CharEq(const u8 *a, const u8 *b) {
    return *a == *b;
}

static inline s32 BString_CharNe(const u8 *a, const u8 *b) {
    return !BString_CharEq(a, b);
}

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

void fn_800D1ACC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800D1B90(u8 *self) {
    extern u8 lbl_8041F754[];
    extern u8 *lbl_80496660;
    extern void fn_80047AA8(void *);
    u8 *p;
    fn_80047AA8(lbl_8041F754);
    p = lbl_80496660;
    *(s32 *)(p + 0x354) = 1;
    *(s32 *)(p + 0x358) = -1;
    *(s32 *)(p + 0x35C) = 1;
    *(s32 *)(p + 0x348) = 1;
    *(s32 *)(p + 0x360) = 1;
    *(s32 *)(self + 0x18) = 0;
}

void fn_800D1CE4(void *arg0, s32 arg1) {
    extern s32 lbl_8041F754[];
    extern s32 lbl_8041E640[];
    extern void fn_800D568C(s32);
    extern void fn_80048A48(void *);
    if (lbl_8041F754[0x70 / 4] != 0) {
        fn_800D568C(lbl_8041E640[0]);
    }
    ((void (*)(void *, s32))fn_80048A48)(lbl_8041F754, arg1);
}

void fn_800D1D38(void) {
    extern s32 lbl_8041F7B8[];
    lbl_8041F7B8[0] = 0;
}

void fn_800D1D48(s32 *self) {
    extern s32 lbl_8041F754[];
    extern void fn_800D2CE8(s32 *);
    fn_800D2CE8(self);
    if (lbl_8041F754[0x78 / 4] != 0) {
        lbl_8041F754[0x78 / 4] = 0;
        fn_800E3B80(self, 2);
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

s32 *fn_800D1F18(s32 *self, s32 a) {
    extern s32 lbl_8040B200[];
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040B200;
    self[6] = 0;
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

void fn_800D1F84(void) {
    void fn_80319494(const char *, int);
    void fn_80332C50(void *);
    extern const char lbl_803D1698[];
    extern u8 lbl_8045AAB0[];
    fn_80332C50(lbl_8045AAB0);
    fn_80319494(lbl_803D1698, 151);
}

void fn_800D1FBC(void *arg0) {
    void fn_8032F0BC(s32);
    u8 *obj;
    fn_8032F0BC(0);
    obj = M2C_FIELD(arg0, u8 **, 0x18);
    if (obj != NULL) {
        u8 *vt = *(u8 **)(obj + 0x80);
        (*(void (**)(void *, s32))(vt + 0xC))(obj + *(s16 *)(vt + 0x8), 3);
        M2C_FIELD(arg0, u8 **, 0x18) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}

void fn_800D2024(void *arg0) {
    void fn_800E3BB0(void *);
    void fn_80049134(void *, void *, s32);
    extern u8 lbl_803D17E8[];
    extern u8 lbl_803D180C[];
    extern u8 lbl_8041F754[];
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    fn_800E3BB0(arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x24) == 0) {
        fn_80049134(lbl_8041F754, lbl_803D17E8, 9);
    } else {
        fn_80049134(lbl_8041F754, lbl_803D180C, 9);
    }
}

void fn_800D26A8(void) {

}

void fn_800D2778(void) {

}

void fn_800D28E8(void *arg0) {
    M2C_UNK fn_800E18EC(M2C_UNK);
    struct G {
        s32 cur;
        s32 idx;
        s32 arr[2];
    };
    s32 r;

    if (M2C_FIELD(arg0, s32 *, 0x18) == 0 && M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        r = fn_800E18EC(6);
        if (r == 1) {
            M2C_FIELD(arg0, s32 *, 0x18) = r;
            ((struct G *)lbl_80434A9C)->arr[((struct G *)lbl_80434A9C)->idx] = ((struct G *)lbl_80434A9C)->cur;
            ((struct G *)lbl_80434A9C)->arr[((struct G *)lbl_80434A9C)->idx == 0] = ((struct G *)lbl_80434A9C)->cur == 0;
        } else if ((u32)(r - 2) <= 1) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
    }
}

void fn_800D2990(void) {

}

void fn_800D2994(void) {

}

void fn_800D2998(void *arg0) {
    u8 *obj = M2C_FIELD(arg0, u8 **, 0x20);
    if (obj != NULL) {
        u8 *vt = *(u8 **)(obj + 0x44);
        (*(void (**)(void *, s32))(vt + 0xC))(obj + *(s16 *)(vt + 0x8), 3);
        M2C_FIELD(arg0, u8 **, 0x20) = NULL;
    }
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        fn_800F1A60(M2C_FIELD(arg0, s32 *, 0x24), 3);
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        fn_800F1A60(M2C_FIELD(arg0, s32 *, 0x28), 3);
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
}

void fn_800D2A30(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

void fn_800D2A40(s32 *self) {
    self[6] = 1;
}

void fn_800D2A4C(void) {

}

void fn_800D2A50(void) {

}

void fn_800D2A54(s32 *self) {
    extern s32 lbl_8041F754[];
    M2C_UNK fn_800DC03C(M2C_UNK);
    M2C_UNK fn_80045500(void *);
    M2C_UNK fn_800E18B8(M2C_UNK);
    s32 state;

    fn_800DC03C(0);
    self[4] = 0;
    self[7] = 0;
    self[8] = 0;
    self[6] = 0;
    self[9] = 0;
    self[10] = 0;
    if (lbl_8041F754[0x5C / 4] != 0) {
        if (lbl_8041F754[0x50 / 4] != 0) {
            fn_80045500(lbl_8041F754);
        }
        state = 1;
    } else {
        self[10] = 7;
        fn_800E18B8(7);
        state = 3;
    }
    self[9] = state;
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

s32 *fn_800D3D70(s32 *self, s32 a) {
    extern s32 lbl_8040B4D0[];
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040B4D0;
    self[6] = 0;
    return self;
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

s32 fn_800D3EB4(void *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x18) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0)) {
        var_r9 = 1;
    }
    return var_r9;
}

s32 fn_800D3EDC(void *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x18) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0)) {
        var_r9 = 1;
    }
    return var_r9;
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

void fn_800D4048(void *arg0) {
    extern s32 lbl_8041F754[];
    extern void fn_800D28AC(void *);
    lbl_8041F754[0] = 3;
    fn_800D28AC(arg0);
}

void fn_800D4074(s32 *self) {
    extern void fn_800D28E8(void *);
    extern void fn_8006FF58(s32);
    extern f32 lbl_803D19E0[];
    extern s32 lbl_8041F768[];
    extern s32 lbl_8041FAD0[];
    extern s32 lbl_80434AC8[];
    fn_800D28E8(self);
    if (self[6] != 0) {
        lbl_8041F768[0] = 0;
        lbl_80434AC8[0] = 1;
        fn_8006FF58(lbl_8041FAD0[0]);
        fn_800E3B38(self, 0x10, lbl_803D19E0[0]);
    } else if (self[7] != 0) {
        fn_800E3B80(self, 1);
    }
}

void fn_800D4100(void *arg0) {
    extern u8 lbl_8041F754[];
    extern f32 lbl_803D19E4[];
    extern void fn_8004594C(void *);
    extern void fn_80047AA8(void *);
    extern void fn_800D2180(void *);
    s32 var_r9;
    s32 var_r9_2;

    fn_800D2180(arg0);
    var_r9 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x20) == 0) && (M2C_FIELD(arg0, s32 *, 0x28) != 0)) {
        var_r9 = 1;
    }
    if (var_r9 != 0) {
        fn_8004594C(lbl_8041F754);
        fn_80047AA8(lbl_8041F754);
        fn_800E3B38(arg0, 0x11, lbl_803D19E4[0]);
        return;
    }
    var_r9_2 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x20) == 0) && (M2C_FIELD(arg0, s32 *, 0x2C) != 0)) {
        var_r9_2 = 1;
    }
    if (var_r9_2 != 0) {
        fn_800E3B80(arg0, 1);
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

void fn_800D423C(void *arg0) {
    extern s32 lbl_8041F754[];
    extern void fn_800D277C(void *);
    lbl_8041F754[0] = 2;
    fn_800D277C(arg0);
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

s32 *fn_800D4AB8(s32 *self, s32 a) {
    extern s32 lbl_8040B830[];
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040B830;
    self[6] = 0;
    return self;
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

void fn_800D4EB8(void *arg0, s32 arg1) {
    extern s32 lbl_8041F754[];
    extern s32 lbl_8041E640[];
    extern void fn_800D568C(s32);
    extern void fn_80048A48(void *);
    if (lbl_8041F754[0x70 / 4] != 0) {
        fn_800D568C(lbl_8041E640[0]);
    }
    ((void (*)(void *, s32))fn_80048A48)(lbl_8041F754, arg1);
}

void fn_800D4F0C(void) {
    extern s32 lbl_8041F7B8[];
    lbl_8041F7B8[0] = 0;
}

void fn_800D4F1C(s32 *self) {
    extern s32 lbl_8041F754[];
    extern void fn_800D2CE8(s32 *);
    fn_800D2CE8(self);
    if (lbl_8041F754[0x78 / 4] != 0) {
        lbl_8041F754[0x78 / 4] = 0;
        fn_800E3B80(self, 2);
    }
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

s32 *fn_800D5038(s32 *self, s32 a) {
    extern s32 lbl_8040B8C0[];
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040B8C0;
    self[6] = 0;
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

void fn_800D7574(void) {
    extern s32 lbl_8041F7FC[];
    lbl_8041F7FC[0] = 0;
}

void fn_800D7654(void) {
    M2C_UNK fn_800E18B8(M2C_UNK);
    extern s32 lbl_80495BA4;
    lbl_80495BA4 = 1;
    fn_800E18B8(0xD);
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

void fn_800DA75C(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 0x160) = 1;
        M2C_FIELD(arg1, s32 *, 0x238) = (s32) (M2C_FIELD(arg1, s32 *, 0x238) | 1);
    }
}

void fn_800DAAC4(void) {
    fn_800D1F84();
}

void fn_800DAC40(void *arg0) {
    extern u8 lbl_8041F754[];
    extern f32 lbl_803D4588[];
    extern void fn_80047AA8(void *);
    extern void fn_800D2180(void *);
    s32 var_r9;
    s32 var_r9_2;

    fn_800D2180(arg0);
    var_r9 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x20) == 0) && (M2C_FIELD(arg0, s32 *, 0x28) != 0)) {
        var_r9 = 1;
    }
    if (var_r9 == 0) {
        var_r9_2 = 0;
        if ((M2C_FIELD(arg0, s32 *, 0x20) == 0) && (M2C_FIELD(arg0, s32 *, 0x2C) != 0)) {
            var_r9_2 = 1;
        }
        if (var_r9_2 == 0) {
            return;
        }
    }
    fn_80047AA8(lbl_8041F754);
    fn_800E3B38(arg0, 0x11, lbl_803D4588[0]);
}

s32 *fn_800DACDC(s32 *self, s32 a) {
    extern s32 lbl_8040BC40[];
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040BC40;
    self[6] = 0;
    return self;
}

s32 fn_800DAD14(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) != 0;
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

s32 fn_800DAE58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) == 1;
}

void fn_800DAE6C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void fn_800DAE78(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

s32 fn_800DAE80(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_800DAE88(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) != 0;
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

s32 *fn_800DAFA8(s32 *self, s32 a) {
    extern s32 lbl_8040BA38[];
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040BA38;
    self[6] = 0;
    return self;
}

s32 fn_800DAFE0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) != 0;
}

void fn_802D0F9C(void);
void fn_800DB148(void) {
    fn_802D0F9C();
}

void fn_800DB168(void) {

}

void fn_800DB16C(s32 *self) {
    if (fn_800DBE90(self[2]) != 0) {
        fn_800E3B38(self, 1, lbl_803D496C[0]);
    }
}

void fn_800DB1B8(void) {

}

void fn_800DB1BC(void) {

}

void fn_800DB1C0(void) {

}

void fn_800DB1C4(s32 *self) {
    fn_800E3B38(self, 2, lbl_803D4970[0]);
}

void fn_800DB1F0(void) {

}

void fn_800DB1F4(s32 *self) {
    ((f32 *)self)[6] = lbl_803D4974[0];
}

extern f32 lbl_803D4978[];
void fn_800DB204(s32 *self) {
    ((f32 *)self)[6] = lbl_803D4978[0];
}

void fn_800DB214(s32 *self, f32 dt) {
    if (fn_800E416C((void *)self[2]) < lbl_803D497C[0]) {
        if (((f32 *)self)[6] < lbl_803D4980[0]) {
            ((f32 *)self)[6] += dt * lbl_803D4984[0];
        }
    } else {
        ((f32 *)self)[6] = lbl_803D4980[0];
        fn_800E3B38(self, 3, lbl_803D4988[0]);
    }
}

extern f32 lbl_803D4998[];
void fn_800DB390(s32 *self) {
    ((f32 *)self)[6] = lbl_803D4998[0];
}

void fn_800DB4F8(void) {

}

extern f32 lbl_803D49B0[];
void fn_800DB58C(s32 *self) {
    ((f32 *)self)[6] = lbl_803D49B0[0];
}

extern f32 lbl_803D49CC[];
void fn_800DB6F8(s32 *self) {
    ((f32 *)self)[6] = lbl_803D49CC[0];
}

extern f32 lbl_803D49D0[];
void fn_800DB708(s32 *self) {
    ((f32 *)self)[6] = lbl_803D49D0[0];
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

void fn_800DBFDC(void *arg0) {

}

void fn_800DBFE0(void *arg0, s32 arg1, f32 farg0) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, f32 *, 0xA8) = farg0;
        return;
    }
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) (M2C_FIELD(arg0, f32 *, 0xA8) + farg0);
}

void fn_800DC000(void *arg0) {
    s32 fn_800E3E50();
    if (fn_800E3E50() != 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
    }
}

void fn_800DC090(void) {
    void fn_8006C6B4(void *);
    extern void *lbl_804943B0;
    if (lbl_804943B0 != NULL && M2C_FIELD(lbl_804943B0, void **, 0x94) != NULL) {
        fn_8006C6B4(M2C_FIELD(lbl_804943B0, void **, 0x94));
    }
}

void fn_800DC0C8(void) {
    void fn_8006C704(void *);
    extern void *lbl_804943B0;
    if (lbl_804943B0 != NULL && M2C_FIELD(lbl_804943B0, void **, 0x94) != NULL) {
        fn_8006C704(M2C_FIELD(lbl_804943B0, void **, 0x94));
    }
}

void fn_800DC100(void) {
    void fn_8006C2F8(void *);
    extern void *lbl_804943B0;
    if (lbl_804943B0 != NULL && M2C_FIELD(lbl_804943B0, void **, 0x94) != NULL) {
        fn_8006C2F8(M2C_FIELD(lbl_804943B0, void **, 0x94));
    }
}

void fn_800DC138(void) {
    extern void *lbl_804943B0;
    if (lbl_804943B0 != NULL) {
        fn_800DBFDC(lbl_804943B0);
    }
}

void fn_800DC164(s32 arg0, f32 farg0) {
    extern void *lbl_804943B0;
    if (lbl_804943B0 != NULL) {
        fn_800DBFE0(lbl_804943B0, arg0, farg0);
    }
}

void fn_800DC198(void) {
    extern void *lbl_804943B0;
    if (lbl_804943B0 != NULL) {
        fn_800DC000(lbl_804943B0);
    }
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

UnkDC234 *fn_800DC234(UnkDC234 *self, s32 a) {
    extern f32 lbl_803D4A30[];
    extern char lbl_8040BDF0[];
    f32 f = lbl_803D4A30[0];
    self->unk0 = a;
    self->unk4 = -1;
    self->unk8 = 0;
    self->unkC = -1;
    self->unk10 = 1;
    self->unk14 = lbl_8040BDF0;
    self->unk18 = f;
    return self;
}

UnkDC234 *fn_800DC274(UnkDC234 *self, s32 a) {
    extern f32 lbl_803D4A34[];
    extern char lbl_8040BDA8[];
    f32 f = lbl_803D4A34[0];
    self->unk0 = a;
    self->unk4 = -1;
    self->unk8 = 0;
    self->unkC = -1;
    self->unk10 = 1;
    self->unk14 = lbl_8040BDA8;
    self->unk18 = f;
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

UnkDC234 *fn_800DC2E8(UnkDC234 *self, s32 a) {
    extern f32 lbl_803D4A38[];
    extern char lbl_8040BD18[];
    f32 f = lbl_803D4A38[0];
    self->unk0 = a;
    self->unk4 = -1;
    self->unk8 = 0;
    self->unkC = -1;
    self->unk10 = 1;
    self->unk14 = lbl_8040BD18;
    self->unk18 = f;
    return self;
}

UnkDC234 *fn_800DC328(UnkDC234 *self, s32 a) {
    extern f32 lbl_803D4A3C[];
    extern char lbl_8040BCD0[];
    f32 f = lbl_803D4A3C[0];
    self->unk0 = a;
    self->unk4 = -1;
    self->unk8 = 0;
    self->unkC = -1;
    self->unk10 = 1;
    self->unk14 = lbl_8040BCD0;
    self->unk18 = f;
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

void fn_800DC6BC(void) {
    extern s32 lbl_80495A70;
    lbl_80495A70 = 0;
}

void fn_800DC6C8(void) {
    extern s32 lbl_80495A70;
    lbl_80495A70 = 1;
}

extern u8 *lbl_804961A4;
void fn_800DC6D4(void);
void fn_800DC71C(void) {
    u8 *obj;
    u8 *vt;

    fn_800DC6BC();
    obj = lbl_804961A4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), fn_800DC6D4);
}

void fn_800DC760(void);
void fn_800DC7A0(void) {
    u8 *obj;
    u8 *vt;

    fn_800DC6BC();
    obj = lbl_804961A4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), fn_800DC760);
}

void fn_800DC7E4(void);
void fn_800DC828(void) {
    u8 *obj;
    u8 *vt;

    fn_800DC6BC();
    obj = lbl_804961A4;
    vt = *(u8 **)obj;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(obj + *(s16 *)(vt + 0x40), fn_800DC7E4);
}

void fn_800DC86C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
}

void fn_800DC960(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

void fn_800DCE1C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
}

void fn_800DD0BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

void fn_800DD170(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800DD3B4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800DD8C0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
}

void fn_800DDA60(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800DDE00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800DE570(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800DE57C(void) {

}

void fn_800DEA58(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800DEA64(void) {

}

void fn_800DF490(void *arg0) {
    extern s32 lbl_80495A6C;
    lbl_80495A6C = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

void fn_800DF610(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800DF61C(void) {

}

void fn_800DF844(void *arg0) {
    extern s32 lbl_80495A6C;
    lbl_80495A6C = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

void fn_800DF9D8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800DFC08(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800DFFE4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}

void fn_800E023C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800E02D4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800E0E00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800E1868(void) {
    fn_800E3BC0();
}

s32 fn_800E18B8(s32 arg0) {
    extern s32 lbl_804966D8;
    extern s32 lbl_804966DC;
    extern s32 lbl_804966E0;
    s32 ret;

    ret = 0;
    if (lbl_804966DC == 0 && (u32)(arg0 - 1) <= 0x15U) {
        lbl_804966D8 = 0;
        lbl_804966E0 = 0;
        lbl_804966DC = arg0;
        ret = arg0;
    }
    return ret;
}

s32 fn_800E18EC(s32 arg0) {
    extern s32 lbl_804966D8;
    extern s32 lbl_804966E0;
    s32 ret;

    ret = 0;
    if (lbl_804966E0 == arg0) {
        ret = lbl_804966D8;
    }
    return ret;
}

void fn_800E1908(void *arg0) {
    void fn_800C60D4(void *);
    void *fn_802D1FC8(s32);
    void fn_8030728C(void);
    extern char lbl_803D4BBC[];
    extern char lbl_8040AA10[];
    extern char lbl_8040AA98[];
    void *p;
    char *name;
    s32 *a;
    s32 *b;

    p = fn_802D1FC8(0xDC);
    name = lbl_803D4BBC;
    fn_8030728C();
    M2C_FIELD(p, char **, 0x48) = name;
    M2C_FIELD(p, char **, 0x44) = lbl_8040AA10;
    M2C_FIELD(p, s32 *, 0x4C) = 0;
    a = (s32 *)((char *)p + 0x50);
    a[0] = 0;
    a[1] = 0;
    b = (s32 *)((char *)p + 0x58);
    b[1] = 0;
    M2C_FIELD(p, s32 *, 0x64) = 1;
    M2C_FIELD(p, char **, 0x44) = lbl_8040AA98;
    M2C_FIELD(p, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, void **, 0x94) = p;
    M2C_FIELD(p, s32 *, 0x60) = 1;
    M2C_FIELD(p, s32 *, 0x68) = 0;
    M2C_FIELD(p, s32 *, 0x6C) = 0;
    M2C_FIELD(p, s32 *, 0x84) = 0;
    M2C_FIELD(p, s32 *, 0x88) = 0;
    M2C_FIELD(p, s32 *, 0xB8) = 0;
    M2C_FIELD(p, s32 *, 0xBC) = 0;
    M2C_FIELD(p, s32 *, 0xC0) = 0;
    M2C_FIELD(p, s32 *, 0xC4) = 0;
    if (p != NULL) {
        fn_800C60D4(p);
    }
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

void fn_800E1A34(void) {
    extern s32 lbl_804966D8;
    lbl_804966D8 = 0;
}

void fn_800E1A40(s32 arg0) {
    extern s32 lbl_804966E4;
    lbl_804966E4 = arg0;
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

void fn_800E2FD8(void *arg0) {
    M2C_UNK fn_800D2180();
    s32 var_r9;
    s32 var_r9_2;

    fn_800D2180();
    var_r9 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0)) {
        var_r9 = 1;
    }
    if (var_r9 != 0) {
        fn_800E3B80(arg0, 2);
        return;
    }
    var_r9_2 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x2C) != 0)) {
        var_r9_2 = 1;
    }
    if (var_r9_2 != 0) {
        fn_800E3B80(arg0, 1);
    }
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

s32 fn_800E3BA4(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x8C);
}

void fn_800E3BB0(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x8C) = 0;
}

s32 fn_800E3E6C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s32 *, 0xC);
}

s32 fn_800E3EEC(void *arg0) {
    return *M2C_FIELD(arg0, s32 **, 0x40);
}

s32 fn_800E3EF8(void *arg0) {
    return *M2C_FIELD(arg0, s32 **, 0x44);
}

f32 fn_800E416C(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x4C);
}

void fn_800E41DC(void *arg0) {
    M2C_UNK fn_800E43DC(s32);
    fn_800E43DC(arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
}

void fn_800E44BC(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) + farg0);
}

void fn_800E4698(void) {
    extern void *lbl_80496640;
    if ((void *) lbl_80496640 != NULL) {
        M2C_FIELD(lbl_80496640, s32 *, 4) = (s32) M2C_FIELD(lbl_80496640, s32 *, 0);
    }
    lbl_80496640 = NULL;
}

void fn_800E4724(void) {
    M2C_UNK fn_800E46B8(s32);
    extern s32 lbl_80496640;
    fn_800E46B8(lbl_80496640);
}

void fn_800E4810(s32 arg0) {
    M2C_UNK fn_800E4748(s32, s32);
    extern s32 lbl_80496640;
    fn_800E4748(lbl_80496640, arg0);
}

void fn_800E4838(s32 arg0) {
    M2C_UNK fn_800E47AC(s32, s32);
    extern s32 lbl_80496640;
    fn_800E47AC(lbl_80496640, arg0);
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

void fn_800E49EC(s32 arg0) {
    M2C_UNK fn_800E44CC(s32);
    fn_800E44CC(arg0 + 0x38);
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

void fn_800E4A34(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
}

void fn_800E4A40(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x90) = 1;
}

void fn_800E4A4C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
}

void fn_800E4A58(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
}

void fn_800E4A64(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
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

void fn_800E5104(void *arg0) {
    M2C_UNK fn_800490B0(M2C_UNK *);
    extern s32 lbl_80494F40;
    extern s32 lbl_80494F44;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        lbl_80494F40 = 1;
        lbl_80494F44 = 1;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    fn_800490B0(&lbl_8041F754);
}

void fn_800E54D0(void *arg0) {
    M2C_UNK fn_800CEE00(void *);
    void *temp_r11;
    void *temp_r9;

    fn_800CEE00(M2C_FIELD(arg0, void **, 0x18));
    temp_r11 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x44);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    M2C_FIELD((int)arg0, void **, 0x18) = NULL;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

void fn_800E5B8C(void) {

}

void fn_800E64BC(void) {

}

void fn_800E6570(void) {

}

void fn_800E65D4(void *arg0, s32 arg1) {
    void *temp_r11;
    void *temp_r9;

    fn_80048A48(&lbl_8041F754);
    temp_r11 = M2C_FIELD(arg0, void **, 0x18);
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x44);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0x1C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x18), arg1);
}

void fn_800E662C(void) {

}

void fn_800E6630(void) {
    M2C_UNK fn_803338AC(s32, M2C_UNK);
    extern s32 lbl_80494FCC;
    fn_803338AC(lbl_80494FCC, 0);
}

void fn_800E82E8(void *arg0, s32 arg1) {
    void *temp_r11;
    void *temp_r9;

    fn_80048A48(&lbl_8041F754);
    temp_r11 = M2C_FIELD(arg0, void **, 0x18);
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x44);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0x1C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x18), arg1);
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

s32 *fn_800E97F4(s32 *self, s32 a) {
    extern s32 lbl_8040CE90[];
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040CE90;
    self[6] = 0;
    return self;
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

s32 *fn_800E995C(s32 *self, s32 a) {
    extern s32 lbl_8040CDB8[];
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040CDB8;
    self[6] = 0;
    return self;
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

s32 fn_800E9A9C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x98);
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

s32 *fn_800E9B14(s32 *self, s32 a) {
    extern s32 lbl_8040CD28[];
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040CD28;
    self[6] = 0;
    return self;
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

s32 *fn_800E9D34(s32 *self, s32 a) {
    extern s32 lbl_8040CC50[];
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040CC50;
    self[6] = 0;
    return self;
}

s32 fn_800E9D6C(s32 *self) {
    return self[6];
}

void fn_800E9D74(void *arg0) {
    extern s32 lbl_8041F754[];
    extern void fn_800D28AC(void *);
    lbl_8041F754[0] = 3;
    fn_800D28AC(arg0);
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

void fn_800E9F68(void *arg0) {
    extern s32 lbl_8041F754[];
    extern void fn_800D28AC(void *);
    lbl_8041F754[0] = 3;
    fn_800D28AC(arg0);
}

void fn_800EA4DC(void) {
    M2C_UNK fn_800487EC(M2C_UNK *);
    fn_800D2AE4();
    fn_800487EC(&lbl_8041F754);
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

void fn_800EA6C0(u64 *arg0) {
    *arg0 = 0;
}

typedef struct Bits64 {
    u64 bits;
} Bits64;

static inline Bits64 Bits64_Shr(Bits64 *a, s32 n) {
    Bits64 r;
    r.bits = a->bits >> n;
    return r;
}

Bits64 fn_800EA6D4(Bits64 *arg0) {
    return *arg0;
}

void fn_800EA6EC(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

Bits64 fn_800EA714(Bits64 *arg0) {
    return *arg0;
}

Bits64 fn_800EA72C(Bits64 *arg0) {
    return *arg0;
}

void fn_800EA744(u64 *arg0) {
    *arg0 = 0;
}

s32 fn_800EA758(s32 arg0, s32 arg1) {
    Bits64 v = Bits64_Shr((Bits64 *)arg0, arg1);
    u64 bit = 1;
    s32 ret = 0;
    if ((v.bits & bit) != 0) {
        ret = 1;
    }
    return ret;
}

void fn_800EA7F8(u64 *arg0, s32 arg1) {
    *arg0 |= (u64)1 << arg1;
}

s32 fn_800EA9B0(s32 arg0) {
    s32 fn_800EA758(s32, s32);
    s32 temp_r3;
    s32 var_r30;
    s32 var_r31;

    var_r30 = 0;
    var_r31 = 0;
    do {
        temp_r3 = fn_800EA758(arg0, var_r31);
        var_r31 += 1;
        var_r30 += temp_r3;
    } while (var_r31 <= 0x3F);
    return var_r30;
}

void fn_800EAAF8(s32 arg0, s32 arg1) {
    s32 var_r31;

    if (arg0 != 0) {
        var_r31 = arg0 + 0x200;
        if (arg0 != var_r31) {
            do {
                var_r31 -= 8;
                fn_800EA6EC(var_r31, 0);
            } while (arg0 != var_r31);
        }
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

s32 fn_800EABC0(s32 arg0, s32 arg1) {
    return arg0 + (arg1 * 8);
}

s32 fn_800EABCC(s32 arg0, s32 arg1) {
    return arg0 + (arg1 * 8);
}

s32 fn_800EACF0(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EA8D0(s32, s32);
    s32 temp_r29;
    s32 var_r30;
    s32 var_r31;

    var_r31 = arg1;
    temp_r29 = var_r31 + 0x1F8;
    var_r30 = arg0;
    do {
        fn_800EA8D0(var_r30, var_r31);
        var_r31 += 8;
        var_r30 += 8;
    } while (var_r31 <= temp_r29);
    return arg0;
}

s32 fn_800EAD44(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EA8A8(s32, s32);
    s32 temp_r29;
    s32 var_r30;
    s32 var_r31;

    var_r31 = arg1;
    temp_r29 = var_r31 + 0x1F8;
    var_r30 = arg0;
    do {
        fn_800EA8A8(var_r30, var_r31);
        var_r31 += 8;
        var_r30 += 8;
    } while (var_r31 <= temp_r29);
    return arg0;
}

s32 fn_800EAD98(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EA8F8(s32, s32);
    s32 temp_r29;
    s32 var_r30;
    s32 var_r31;

    var_r31 = arg1;
    temp_r29 = var_r31 + 0x1F8;
    var_r30 = arg0;
    do {
        fn_800EA8F8(var_r30, var_r31);
        var_r31 += 8;
        var_r30 += 8;
    } while (var_r31 <= temp_r29);
    return arg0;
}

s32 fn_800EADEC(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EA920(s32, s32);
    s32 var_r31;

    var_r31 = arg0;
    do {
        fn_800EA920(var_r31, arg1);
        var_r31 += 8;
    } while (var_r31 <= (s32) (arg0 + 0x1F8));
    return arg0;
}

s32 fn_800EAE3C(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EA968(s32, s32);
    s32 var_r31;

    var_r31 = arg0;
    do {
        fn_800EA968(var_r31, arg1);
        var_r31 += 8;
    } while (var_r31 <= (s32) (arg0 + 0x1F8));
    return arg0;
}

s32 fn_800EAE8C(s32 arg0) {
    s32 fn_800EA9B0(s32);
    s32 temp_r29;
    s32 temp_r3;
    s32 var_r30;
    s32 var_r31;

    var_r31 = arg0;
    var_r30 = 0;
    temp_r29 = var_r31 + 0x1F8;
    do {
        temp_r3 = fn_800EA9B0(var_r31);
        var_r31 += 8;
        var_r30 += temp_r3;
    } while (var_r31 <= temp_r29);
    return var_r30;
}

void fn_800EAED8(u8 *dst, u16 *src) {
    while (*src != 0) {
        *dst++ = *src++;
    }
    *dst = 0;
}

void fn_800EAF08(s32 self) {
    extern void fn_802D1A00(void *, void *);
    void *p;

    if (M2C_FIELD(self, s32 *, 8) != 0) {
        p = M2C_FIELD(self, void **, 0);
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), p);
        M2C_FIELD(self, s32 *, 8) = 0;
        M2C_FIELD(self, void **, 0) = 0;
    }
}

void fn_800EAF58(void) {

}

void fn_800EAF5C(void) {

}

void fn_800EAF60(s32 self) {
    extern void fn_802D1A00(void *, void *);
    extern void fn_800EBC3C(s32, s32);
    void *p;

    M2C_FIELD(M2C_FIELD(self, void **, 0), s32 *, 0xC)--;
    if (M2C_FIELD(M2C_FIELD(self, void **, 0), s32 *, 0xC) == 0) {
        fn_800EBC3C(M2C_FIELD(self, s32 *, 0), 2);
        p = M2C_FIELD(self, void **, 0);
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), p);
    }
}

s32 fn_800EAFC0(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0xC);
}

u8 *fn_800EAFCC(void **arg0) {
    u8 *r;

    if (fn_800EF6F8(arg0) == 0) {
        r = 0;
    } else {
        r = *(u8 **)*arg0;
    }
    return r;
}

s32 fn_800EB010(s32 **arg0) {
    return **arg0;
}

s32 fn_800EB01C(s32 *arg0) {
    return *arg0 + 4;
}

s8 fn_800EB074(void **arg0, u32 arg1) {
    if (arg1 < (u32)fn_800EF6F8(arg0)) {
        return fn_800EAFCC(arg0)[arg1];
    }
    return 0;
}

s32 fn_800EB0C0(s32 arg0, s32 arg1) {
    s32 fn_800EEFC4(s32, s32, s32, s32);
    return fn_800EEFC4(arg0, arg1, 0, -1) == 0;
}

s32 fn_800EB0F0(s32 arg0, s32 arg1) {
    return fn_800EF0A8(arg1, arg0, 0) == 0;
}

s32 fn_800EB128(s32 arg0, s32 arg1) {
    s32 fn_800EF110(s32, s32, s32, s32);
    return fn_800EF110(arg1, arg0, 0, 1) == 0;
}

s32 fn_800EB244(s32 arg0, s32 arg1) {
    return fn_800EF0A8(arg0, arg1, 0) != 0;
}

s32 fn_800EB278(s32 arg0, s32 arg1) {
    s32 fn_800EF110(s32, s32, s32, s32);
    return fn_800EF110(arg0, arg1, 0, 1) != 0;
}

s32 fn_800EEFC4(s32, s32, s32, s32);
s32 fn_800EB2B0(s32 arg0, s32 arg1) {
    return (u32)fn_800EEFC4(arg0, arg1, 0, -1) >> 31;
}

s32 fn_800EB2DC(s32 arg0, s32 arg1) {
    return fn_800EF0A8(arg1, arg0, 0) > 0;
}

s32 fn_800EB360(s32 arg0, s32 arg1) {
    return (u32)fn_800EF0A8(arg0, arg1, 0) >> 31;
}

s32 fn_800EF0A8(s32, s32, s32);
s32 fn_800EF110(s32, s32, s32, s32);
s32 fn_800EB388(s32 arg0, s32 arg1) {
    return (u32)fn_800EF110(arg0, arg1, 0, 1) >> 31;
}

void fn_800EB3B4(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EB360(s32, s32);
    fn_800EB360(arg1, arg0);
}

void fn_800EB3E0(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EB388(s32, s32);
    fn_800EB388(arg1, arg0);
}

void fn_800EB40C(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EB2DC(s32, s32);
    fn_800EB2DC(arg1, arg0);
}

void fn_800EB438(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EB31C(s32, s32);
    fn_800EB31C(arg1, arg0);
}

s32 fn_800EB464(void) {
    s32 fn_800EB2DC();
    return fn_800EB2DC() ^ 1;
}

s32 fn_800EB488(void) {
    s32 fn_800EB31C();
    return fn_800EB31C() ^ 1;
}

s32 fn_800EB4AC(void) {
    s32 fn_800EB360();
    return fn_800EB360() ^ 1;
}

s32 fn_800EB4D0(void) {
    s32 fn_800EB388();
    return fn_800EB388() ^ 1;
}

s32 fn_800EB4F4(s32 arg0, s32 arg1) {
    return fn_800EB360(arg1, arg0) ^ 1;
}

s32 fn_800EB524(s32 arg0, s32 arg1) {
    return fn_800EB388(arg1, arg0) ^ 1;
}

s32 fn_800EB554(s32 arg0, s32 arg1) {
    return fn_800EB2DC(arg1, arg0) ^ 1;
}

s32 fn_800EB5B4(void) {
    return 0;
}

void *fn_800EB5BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC)++;
    return arg0;
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

M2C_UNK fn_800EC9AC(s32 arg0) {
    extern s32 lbl_80434AE8[];
    *(s32 *)arg0 = (s32)lbl_80434AE8;
    lbl_80434AE8[3]++;
}

void *fn_800EB5D0(void *mem, s32 arg1, s32 arg2);
void *fn_800EB848(void *mem, const u8 *begin, u32 pos, u32 end);
void fn_800EAF58(void);
void **fn_800EC9CC(void **arg0, s32 arg1, s32 arg2) {
    *arg0 = fn_800EB5D0(BString_Alloc(0x10, 4), arg1, arg2);
    return arg0;
}

void **fn_800ECB80(void **arg0, const u8 *arg1, u32 arg2, u32 arg3) {
    if (arg2 >= ~arg3) {
        fn_800EAF58();
    }
    *arg0 = fn_800EB848(BString_Alloc(0x10, 4), arg1, arg2, arg2 + arg3);
    return arg0;
}

void *fn_800ECCD0(void **arg0, s32 arg1) {
    *arg0 = fn_800EBA28(BString_Alloc(0x10, 4), arg1);
    return arg0;
}

void *fn_800EBB2C(void *mem, s32 arg1, s32 arg2);
void **fn_800ECD64(void **arg0, s32 arg1, s32 arg2) {
    *arg0 = fn_800EBB2C(BString_Alloc(0x10, 4), arg1, arg2);
    return arg0;
}

extern void fn_800EAF60(s32);
void fn_800ECE00(s32 self, s32 flags) {
    fn_800EAF60(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void *fn_800ECF20(void *arg0, const char *arg1) {
    ((void (*)(void *, const char *, s32))fn_800EBC84)(arg0, arg1, arg1 ? fn_80248808(arg1) : 0);
    return arg0;
}

void *fn_800ED068(void *arg0, void **arg1) {
    ((void (*)(void *, u8 *, s32))fn_800EBDA4)(arg0, fn_800EAFCC(arg1), fn_800EF6F8(arg1));
    return arg0;
}

void *fn_800ED0BC(void *arg0, const char *arg1) {
    ((void (*)(void *, const char *, s32))fn_800EBDA4)(arg0, arg1, arg1 ? fn_80248808(arg1) : 0);
    return arg0;
}

void *fn_800ED274(void *arg0, void **arg1, u32 arg2, u32 arg3) {
    if (arg2 > fn_800EF6F8(arg1)) {
        fn_800EAF5C();
    }
    ((void (*)(void *, u8 *, u32))fn_800EBDA4)(arg0, fn_800EAFCC(arg1) + arg2,
        arg3 > fn_800EF6F8(arg1) - arg2 ? fn_800EF6F8(arg1) - arg2 : arg3);
    return arg0;
}

extern void fn_800EBDA4(void *);
void *fn_800ED300(void *self) {
    fn_800EBDA4(self);
    return self;
}

void *fn_800ED330(void *arg0, const char *arg1) {
    ((void (*)(void *, const char *, s32))fn_800EBDA4)(arg0, arg1, arg1 ? fn_80248808(arg1) : 0);
    return arg0;
}

extern void fn_800EBC84(void *);
void *fn_800ED5D8(void *self) {
    fn_800EBC84(self);
    return self;
}

void *fn_800ED608(void *arg0, const char *arg1) {
    ((void (*)(void *, const char *, s32))fn_800EBC84)(arg0, arg1, arg1 ? fn_80248808(arg1) : 0);
    return arg0;
}

extern void fn_800EBF1C(void *);
void *fn_800ED814(void *self) {
    fn_800EBF1C(self);
    return self;
}

void fn_800EE5C4(s32 arg0, s32 arg1) {
    M2C_UNK fn_800EE454(s32, s32, s32);
    fn_800EE454(arg0, arg1, fn_800EBC7C());
}

u32 fn_800EE6DC(void **arg0, void *arg1, u32 arg2, u32 arg3) {
    if (arg3 > fn_800EF6F8(arg0)) {
        fn_800EAF5C();
    }
    {
        u32 n = arg2;
        if (n > fn_800EF6F8(arg0) - arg3) {
            n = fn_800EF6F8(arg0) - arg3;
        }
        if (fn_800EF6F8(arg0) != 0) {
            fn_8024839C(arg1, fn_800EAFCC(arg0) + arg3, n);
        }
        return n;
    }
}

void fn_800EE76C(s32 arg0, void **arg1, s32 arg2) {
    fn_800EC49C(arg0, (s32)fn_800EAFCC(arg1), arg2, fn_800EF6F8(arg1));
}

void fn_800EC49C(s32, s32, s32, s32);
void fn_800EE7C4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_800EC49C(arg0, arg1, arg2, arg3);
}

u8 *fn_800EAFCC(void **arg0);
s32 fn_80248808(const char *arg0);
void fn_8024839C(void *dst, const void *src, u32 n);
void fn_800EE7E4(s32 arg0, const char *arg1, s32 arg2) {
    fn_800EC49C(arg0, (s32)arg1, arg2, arg1 ? fn_80248808(arg1) : 0);
}

u32 fn_800EE83C(void **arg0, u8 arg1, u32 arg2) {
    const u8 *c = &arg1;
    while (arg2 < fn_800EF6F8(arg0)) {
        s32 ne = 1;
        if (fn_800EAFCC(arg0)[arg2] == *c) {
            ne = 0;
        }
        if (!ne) {
            break;
        }
        arg2++;
    }
    return arg2 < fn_800EF6F8(arg0) ? arg2 : -1;
}

void fn_800EC59C(void);
void fn_800EE91C(void) {
    fn_800EC59C();
}

void fn_800EC6BC(void);
void fn_800EEAC4(void) {
    fn_800EC6BC();
}

u32 fn_800EE83C(void **arg0, u8 arg1, u32 arg2);
void fn_800EEB3C(void **arg0, u8 arg1, u32 arg2) {
    fn_800EE83C(arg0, arg1, arg2);
}

void fn_800EC774(void);
void fn_800EEBB4(void) {
    fn_800EC774();
}

void fn_800EE994(void);
void fn_800EEC2C(void) {
    fn_800EE994();
}

u32 fn_800EC848(void **arg0, const u8 *arg1, u32 arg2, u32 arg3);
void fn_800EECA4(void **arg0, const u8 *arg1, u32 arg2, u32 arg3) {
    fn_800EC848(arg0, arg1, arg2, arg3);
}

void fn_800EC8E0(void);
void fn_800EEDEC(void) {
    fn_800EC8E0();
}

s32 fn_800EEF1C(s32 arg0, s32 arg1, u32 arg2, u32 arg3) {
    M2C_UNK fn_800EC9AC(s32);
    M2C_UNK fn_800ECC34(s32, s32, u32);
    s32 temp_r28;
    u32 var_r5;

    if (arg2 > fn_800EF6F8(arg1)) {
        fn_800EAF5C();
    }
    if (fn_800EF6F8(arg1) != 0) {
        temp_r28 = fn_800EAFCC(arg1) + arg2;
        if (arg3 > (u32) (fn_800EF6F8(arg1) - arg2)) {
            var_r5 = fn_800EF6F8(arg1) - arg2;
        } else {
            var_r5 = arg3;
        }
        fn_800ECC34(arg0, temp_r28, var_r5);
    } else {
        fn_800EC9AC(arg0);
    }
    return arg0;
}

void fn_800EF048(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_800EC3E4(s32, s32, s32, s32, s32);
    if (arg3 == -1) {
        fn_800EAF58();
    }
    fn_800EC3E4(arg0, arg2, arg1, fn_800EF6F8(arg0) - arg2, arg3);
}

s32 fn_800EF664(s32 arg0, s32 arg1) {
    s32 fn_800EEFC4(s32, s32, s32, s32);
    return fn_800EEFC4(arg0, arg1, 0, -1) == 0;
}

s32 fn_800EF6CC(s32 arg0, s32 arg1) {
    return (u32)fn_800EEFC4(arg0, arg1, 0, -1) >> 31;
}

s32 fn_800EF6F8(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 4);
}

s32 fn_800EF704(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 8);
}

void fn_800EF7E0(void) {
    M2C_UNK fn_800EF78C(M2C_UNK, M2C_UNK);
    fn_800EF78C(1, 0xFFFF);
}

