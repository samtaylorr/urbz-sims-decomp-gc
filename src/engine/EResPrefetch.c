/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

M2C_UNK fn_8031EF04(void *self, s32 flags) {
    extern u8 lbl_8041B6A0[];
    extern u8 lbl_8041B6C0[];
    extern u8 lbl_8041B6F0[];
    M2C_UNK fn_80366708(s32);
    M2C_UNK fn_802D8E50(void *);
    M2C_UNK fn_80366554(void *, s32);
    M2C_UNK fn_8031FAF8(void *, s32);
    M2C_UNK fn_802D8BEC(void *, s32);
    M2C_UNK fn_802D20E8(void *);
    register void *p asm("r3");

    M2C_FIELD(self, void **, 0x340) = lbl_8041B6A0;
    M2C_FIELD(self, void **, 0) = lbl_8041B6C0;
    if (M2C_FIELD(self, s32 *, 0x3D8) != 0) {
        fn_80366708(self + 0x38C);
    }
    fn_802D8E50(self + 8);
    p = self + 0x38C;
    fn_80366554(p, 2);
    p = self + 0x348;
    fn_8031FAF8(p, 2);
    fn_802D8BEC(self + 8, 0);
    M2C_FIELD(self, void **, 0) = lbl_8041B6F0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8031F074(void *arg0) {
    M2C_UNK fn_802D8F1C(s32);
    M2C_UNK fn_8031F568();
    M2C_UNK fn_80366708(s32);
    fn_8031F568();
    fn_802D8F1C(arg0 + 8);
    fn_80366708(arg0 + 0x38C);
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
}

void fn_8031F0B8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x408) = arg1;
    M2C_FIELD(arg0, s32 *, 0x404) = 0;
}

void fn_8031F0CC(void *arg0) {
    extern struct { s32 unk0; s32 unk4; void *unk8; } lbl_8045BA2C;
    M2C_UNK fn_80338BAC(void *, void *);
    extern f32 lbl_803F2EB4[];
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x404) = 0;
    M2C_FIELD(arg0, s32 *, 0x408) = 0;
    M2C_FIELD(arg0, s32 *, 0x40C) = 0;
    M2C_FIELD(arg0, f32 *, 0x410) = lbl_803F2EB4[0];
    M2C_FIELD(arg0, s32 *, 0x414) = 0;
    if (arg0 == lbl_8045BA2C.unk8) {
        fn_80338BAC(&lbl_8045BA2C, arg0);
    }
}

M2C_UNK fn_8031F140(void *arg0, s32 *arg1) {
    extern struct { s32 unk0; s32 unk4; void *unk8; } lbl_8045BA2C;
    M2C_UNK fn_80338BAC(void *, void *);
    M2C_UNK fn_802D838C(s32);
    extern f32 lbl_803F2EB8[];
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x404) = 0;
    M2C_FIELD(arg0, s32 *, 0x408) = 0;
    M2C_FIELD(arg0, s32 *, 0x40C) = 0;
    M2C_FIELD(arg0, f32 *, 0x410) = lbl_803F2EB8[0];
    M2C_FIELD(arg0, s32 *, 0x414) = 0;
    if (arg0 == lbl_8045BA2C.unk8) {
        fn_80338BAC(&lbl_8045BA2C, arg0);
    }
    fn_802D838C(arg1[4]);
}

M2C_UNK fn_8031F1CC(void *self, s32 *arg1) {
    extern struct { s32 unk0; s32 unk4; void *unk8; } lbl_8045BA2C;
    extern char lbl_803F2EBC[];
    extern f32 lbl_803F2EEC[];
    void fn_80338AF4(char *, char *, s32, s32);
    s32 fn_80337CBC(s32, s32);
    u32 fn_80337D30(s32, s32);
    M2C_UNK fn_802D20E8(void *);
    s32 r;
    register u32 n asm("r3");
    register u32 d asm("r0");

    if (M2C_FIELD(self, s32 *, 0x3FC) != 0) {
        fn_80338AF4((char *)&lbl_8045BA2C, self, (s32)lbl_803F2EBC, 0xEE);
    }
    M2C_FIELD(self, s32 *, 0x3DC) = arg1[3];
    M2C_FIELD(self, s32 *, 0x3E0) = arg1[1];
    r = fn_80337CBC(M2C_FIELD(self, s32 *, 0x3DC), M2C_FIELD(self, s32 *, 0x3E0));
    M2C_FIELD(self, s32 *, 0x3EC) = r;
    M2C_FIELD(self, s32 *, 0x3E4) = r;
    n = fn_80337D30(M2C_FIELD(self, s32 *, 0x3DC), M2C_FIELD(self, s32 *, 0x3E0));
    d = M2C_FIELD(self, u32 *, 0x3F8);
    M2C_FIELD(self, u32 *, 0x3E8) = n;
    M2C_FIELD(self, s32 *, 0x414) = 1;
    M2C_FIELD(self, f32 *, 0x410) = lbl_803F2EEC[0];
    M2C_FIELD(self, u32 *, 0x3F0) = n / d;
    M2C_FIELD(self, u32 *, 0x3F4) = n % d;
    fn_802D20E8(arg1);
}

void fn_8031F47C(void *arg0, void *arg1) {
    M2C_UNK fn_8031F288(void *);
    M2C_UNK fn_802D838C(s32);
    while (M2C_FIELD(arg0, s32 *, 0x414) != 0) {
        fn_8031F288(arg0);
    }
    if (M2C_FIELD(arg1, s32 *, 0x10) != 0) {
        fn_802D838C(M2C_FIELD(arg1, s32 *, 0x10));
    }
}

void fn_8031F4D0(void *arg0) {
    s32 fn_80366820(void *, void *, s32);
    M2C_UNK fn_8031F140(void *, s32 *);
    M2C_UNK fn_8031F1CC(void *, s32 *);
    M2C_UNK fn_8031F288(void *);
    s32 *msg;
    s32 **pmsg;

loop:
    pmsg = &msg;
    *pmsg = 0;
    if (fn_80366820(arg0 + 0x38C, pmsg, M2C_FIELD(arg0, s32 *, 0x414) ^ 1) != 0) {
        switch (msg[0]) {
        case 0:
            fn_8031F140(arg0, msg);
            break;
        case 1:
            fn_8031F1CC(arg0, msg);
            break;
        case 2:
            fn_8031F47C(arg0, msg);
            break;
        }
    } else {
        fn_8031F288(arg0);
    }
    goto loop;
}

void fn_8031F568(void *arg0) {
    M2C_UNK fn_802D81B8(void *);
    M2C_UNK fn_802D8260(void *, s32);
    M2C_UNK fn_802D82D4(void *, s32, s32);
    M2C_UNK fn_802D8328(void *);
    M2C_UNK fn_802D8334(void *, s32);
    M2C_UNK fn_80366760(void *, void *, s32);
    struct {
        u8 pad[0x18];
    } evt;
    struct {
        s32 unk0;
        s32 unk4;
        s32 unk8;
        s32 unkC;
        void *unk10;
    } msg;
    void *e;

    if (M2C_FIELD(arg0, s32 *, 0x414) != 0) {
        e = &evt;
        fn_802D81B8(e);
        fn_802D82D4(e, 1, 0);
        msg.unk10 = e;
        msg.unk0 = 2;
        msg.unkC = 0;
        msg.unk8 = 0;
        msg.unk4 = -1;
        fn_80366760(arg0 + 0x38C, &msg, 1);
        fn_802D8334(e, -1);
        fn_802D8328(e);
        fn_802D8260(e, 2);
    }
}

void fn_8031F608(s32 arg0) {
    M2C_UNK fn_802D81B8(void *);
    M2C_UNK fn_802D8260(void *, s32);
    M2C_UNK fn_802D82D4(void *, s32, s32);
    M2C_UNK fn_802D8328(void *);
    M2C_UNK fn_802D8334(void *, s32);
    M2C_UNK fn_80366760(s32, void *, s32);
    struct {
        u8 pad[0x18];
    } evt;
    struct {
        s32 unk0;
        s32 unk4;
        s32 unk8;
        s32 unkC;
        void *unk10;
    } msg;
    void *e;

    e = &evt;
    fn_802D81B8(e);
    fn_802D82D4(e, 1, 0);
    msg.unk10 = e;
    msg.unk0 = 0;
    msg.unkC = 0;
    msg.unk8 = 0;
    msg.unk4 = -1;
    fn_80366760(arg0 + 0x38C, &msg, 1);
    fn_802D8334(e, -1);
    fn_802D8328(e);
    fn_802D8260(e, 2);
}

void fn_8031F698(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_802C52EC(s32);
    M2C_UNK fn_8031F6DC(s32, s32, s32);
    fn_8031F6DC(arg0, arg1, fn_802C52EC(arg2));
}

M2C_UNK fn_8031F6DC(s32 arg0, s32 arg1, s32 arg2) {
    s32 *fn_802D1FC8(s32);
    void fn_8031F608(s32);
    M2C_UNK fn_80366760(s32, void *, s32);
    extern void **lbl_80496220;
    s32 *msg;
    void *temp_r9;
    s32 r;

    fn_8031F608(arg0);
    msg = fn_802D1FC8(0x14);
    temp_r9 = *lbl_80496220;
    r = M2C_FIELD(temp_r9, s32 (**)(void *, s32), 0xAC)((char *)lbl_80496220 + M2C_FIELD(temp_r9, s16 *, 0xA8), arg1);
    msg[3] = r;
    msg[0] = 1;
    msg[1] = arg2;
    msg[4] = 0;
    fn_80366760(arg0 + 0x38C, msg, 1);
}

void fn_8031F764(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_802C52EC(s32);
    M2C_UNK fn_8031F7A8(s32, s32, s32);
    fn_8031F7A8(arg0, arg1, fn_802C52EC(arg2));
}

s32 fn_8031F8A0(void *arg0) {
    extern void *lbl_8045BA34[];
    s32 ok;
    s32 result;
    u32 a;
    u32 b;

    ok = arg0 == lbl_8045BA34[0] && M2C_FIELD(arg0, s32 *, 0x414) == 0;
    result = 0;
    if (ok) {
        a = M2C_FIELD(arg0, u32 *, 0x3F0);
        b = M2C_FIELD(arg0, u32 *, 0x400);
        if (a < b ? M2C_FIELD(arg0, u32 *, 0x404) == a : M2C_FIELD(arg0, u32 *, 0x404) == b) {
            result = 1;
        }
    }
    return result;
}

M2C_UNK fn_8031F904(s32 arg0, s32 arg1) {
    M2C_UNK fn_8031EE78(void *);
    M2C_UNK fn_8031EF04(void *, s32);
    extern u8 lbl_8045A638[];
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8031EE78(lbl_8045A638);
        } else {
            fn_8031EF04(lbl_8045A638, 2);
        }
    }
}

s32 fn_8031F958(void *arg0) {
    s32 fn_803669C0(void *);
    s32 var_r31;

    var_r31 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        s32 ok = fn_803669C0(arg0 + 0x38C) != 0;
        if (ok) {
            var_r31 = 1;
        }
    }
    return var_r31;
}

f32 fn_8031F9B4(void *arg0) {
    extern f32 lbl_803F2EFC[];
    return M2C_FIELD(arg0, s32 *, 0x414) != 0 ? M2C_FIELD(arg0, f32 *, 0x410) : lbl_803F2EFC[0];
}

void fn_8031F9D4(void *arg0) {
    extern struct { s32 unk0; s32 unk4; void *unk8; } lbl_8045BA2C;
    M2C_UNK fn_80338BAC(void *, void *);
    extern f32 lbl_803F2F00[];
    M2C_FIELD(arg0, f32 *, 0x410) = lbl_803F2F00[0];
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x404) = 0;
    M2C_FIELD(arg0, s32 *, 0x408) = 0;
    M2C_FIELD(arg0, s32 *, 0x40C) = 0;
    M2C_FIELD(arg0, s32 *, 0x414) = 0;
    if (arg0 == lbl_8045BA2C.unk8) {
        fn_80338BAC(&lbl_8045BA2C, arg0);
    }
}

void fn_8031FA48(void) {
    M2C_UNK fn_8031F904(M2C_UNK, M2C_UNK);
    fn_8031F904(1, 0xFFFF);
}

void fn_8031FA74(void) {
    M2C_UNK fn_8031F904(M2C_UNK, M2C_UNK);
    fn_8031F904(0, 0xFFFF);
}

