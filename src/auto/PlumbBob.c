/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
s32 fn_800671A0(void *arg0) {
    extern s32 lbl_80494420;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28D4) == 0) {
        M2C_FIELD(arg0, s32 *, 0x28D4) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x28C8) = 0;
    lbl_80494420 = 0;
    return 0;
}

void fn_80067978(void *arg0) {
    extern void *lbl_8041FA38[];
    extern s32 lbl_8041F94C[];
    extern s32 lbl_80496644;
    extern void fn_8006410C(s32);
    extern void fn_80067750(void *);
    extern void fn_803073C4(void *);
    extern s32 fn_80049B6C(void *);
    extern void fn_8010CDD4(s32);
    s32 flag;
    void *p;
    void *q;

    M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
    flag = 0;
    fn_8006410C(M2C_FIELD(lbl_8041FA38[0], s32 *, 0x4));
    fn_80067750(arg0);
    fn_803073C4(arg0);
    p = M2C_FIELD(arg0, void **, 0x1E4);
    if (p != NULL && M2C_FIELD(p, s32 *, 0x10) != 0) {
        flag = 1;
    }
    if (fn_80049B6C(lbl_8041F94C) != 0) {
        q = M2C_FIELD(arg0, void **, 0x1E8);
        if (q != NULL && M2C_FIELD(q, s32 *, 0x10) != 0) {
            flag = 1;
        }
    }
    if (flag != 0) {
        fn_8010CDD4(lbl_80496644);
    }
}

void fn_80067A28(void *arg0) {
    extern void fn_800671CC(void *, s32);
    extern void fn_8000EC58(s32);
    fn_800671CC(arg0, 1);
    fn_8000EC58(M2C_FIELD(arg0, s32 *, 0x1E4));
    fn_8000EC58(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void fn_80067A68(void *arg0) {
    extern void fn_800675EC(void *, s32);
    fn_800675EC(arg0, 1);
}

s32 fn_80067A8C(void *arg0, s32 arg1) {
    s32 base = (s32)arg0 + 0x1FC;
    s32 off = arg1 << 2;
    void *p = *(void **)(base + off);
    return (M2C_FIELD(p, u32 *, 0x18) >> 1) & 1;
}

void fn_80068444(void) {

}

void fn_80068448(void *arg0, s32 arg1) {
    M2C_UNK fn_80067AA4(void *, s32, M2C_UNK);
    M2C_UNK fn_80024ADC(void *, s32 *);
    M2C_UNK fn_802CB8D4(s32 *);
    struct {
        char pad[0x204];
        void *arr[1];
    } *self = arg0;
    s32 sp8[3];
    s32 *var_r31;
    s32 var_r30;
    void *temp_r3;

    temp_r3 = self->arr[arg1];
    var_r30 = 0;
    if (temp_r3 == NULL || *M2C_FIELD(temp_r3, s32 **, 0xF4) != 2) {
        var_r31 = sp8;
        var_r31[1] = 0;
        var_r31[0] = 0;
        var_r31[2] = 1;
        fn_80024ADC(temp_r3, var_r31);
        if (sp8[0] != 0) {
            var_r30 = 2;
        }
        fn_802CB8D4(var_r31);
        fn_802CB8D4(var_r31);
    }
    fn_80067AA4(self, arg1, var_r30);
}

void fn_800684E8(void) {

}

void fn_800684EC(void) {

}

void fn_800684F0(void *arg0, s32 arg1) {
    M2C_UNK fn_800292C4(void *, s32);
    extern void *lbl_8041FA38[];
    fn_800292C4(lbl_8041FA38[0], arg1);
}

void fn_80068518(void) {

}

void fn_8006851C(void) {

}

void fn_80068520(void *arg0, void *arg1) {
    M2C_UNK fn_80067AA4(void *, s32, M2C_UNK);
    M2C_UNK fn_800A1FF8(void *, s32, s32);
    s32 temp_r29;
    void *temp_r3;
    void **var_r9;

    temp_r29 = M2C_FIELD(arg1, s32 *, 0x38);
    var_r9 = (void **) ((char *) arg0 + 0x1FC);
    temp_r3 = var_r9[temp_r29];
    fn_800A1FF8(temp_r3, M2C_FIELD(temp_r3, s32 *, 0x174), 0);
    fn_80067AA4(arg0, temp_r29, 0);
}

void fn_80068574(void) {

}

void fn_80068578(void) {

}

void fn_8006857C(void *arg0, s32 arg1) {
    M2C_UNK fn_80067AA4(void *, s32, M2C_UNK);
    s32 fn_801BFD60(s32);
    s32 fn_801BFD7C(s32);
    s32 var_r29;

    var_r29 = 0;
    if (arg1 == fn_801BFD7C(M2C_FIELD(arg0, s32 *, 0x1F4))) {
        var_r29 = M2C_FIELD(arg0, s32 *, 0x1F4);
    } else if (arg1 == fn_801BFD7C(M2C_FIELD(arg0, s32 *, 0x1F8))) {
        var_r29 = M2C_FIELD(arg0, s32 *, 0x1F8);
    }
    fn_80067AA4(arg0, fn_801BFD60(var_r29), 5);
}

void fn_800685F0(void *arg0, s32 arg1) {
    M2C_UNK fn_80067AA4(void *, s32, M2C_UNK);
    s32 fn_801BFD60(s32);
    s32 fn_801BFD7C(s32);
    s32 var_r29;

    var_r29 = 0;
    if (arg1 == fn_801BFD7C(M2C_FIELD(arg0, s32 *, 0x1F4))) {
        var_r29 = M2C_FIELD(arg0, s32 *, 0x1F4);
    } else if (arg1 == fn_801BFD7C(M2C_FIELD(arg0, s32 *, 0x1F8))) {
        var_r29 = M2C_FIELD(arg0, s32 *, 0x1F8);
    }
    fn_80067AA4(arg0, fn_801BFD60(var_r29), 0);
}

void fn_80068664(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1CC) = 1;
}

void fn_80068670(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1CC) = 1;
}

void fn_8006867C(void) {

}

void fn_80068680(void) {

}

void fn_80068684(void) {

}

void fn_80068688(void) {

}

void fn_8006868C(void) {

}

void fn_80068690(void) {

}

void fn_800688B8(void) {

}

void fn_80068978(s32 arg0) {
    M2C_UNK fn_80086094(s32);
    fn_80086094(arg0 + 0x210);
}

void fn_80068F58(void) {

}

void fn_8006A194(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8006A1C8(u8 *self, s32 i) {
    struct { char pad[0x1E4]; s32 arr[1]; } *s = (void *)self;
    return s->arr[i];
}

s32 fn_8006A1D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C8);
}

s32 fn_8006A1E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x29D0);
}

void fn_8006A1E8(void) {

}

void fn_8006A1EC(void) {

}

void fn_8006A1F0(void) {

}

s32 fn_8006A1F4(void) {
    return 1;
}

void fn_8006A1FC(void) {

}

void fn_8006A200(void) {

}

void fn_8006A204(void) {

}

void fn_8006A208(void) {

}

void fn_8006A20C(void) {

}

s32 fn_8006A210(u8 *self) {
    if (*(s32 *)(self + 0x27F8) != 0) {
        return 1;
    }
    return 0;
}

u8 *fn_8006A228(u8 *self) {
    extern u8 lbl_804092E8[];
    extern void fn_8030728C(void *);
    fn_8030728C(self);
    *(u8 **)(self + 0x44) = lbl_804092E8;
    *(s32 *)(self + 0x48) = 0;
    *(s32 *)(self + 0x4C) = 0;
    *(s32 *)(self + 0x54) = 0;
    return self;
}

extern u8 lbl_804092E8[];
extern void fn_80307364(void *);
extern void fn_8030728C(void *);
void fn_8006A274(u8 *self) {
    *(u8 **)(self + 0x44) = lbl_804092E8;
    fn_80307364(self);
}

void fn_8006A2A4(void *arg0) {
    register unsigned temp_r9;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_r9 == 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_r9;
        M2C_FIELD(arg0, s32 *, 0x50) = temp_r9;
        M2C_FIELD(arg0, s32 *, 0x54) = temp_r9;
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
    }
}

void fn_8006A2C8(void) {

}

void fn_8006A494(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
    }
}

s32 fn_8006A598(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

void fn_8006A5E8(void) {
    extern s32 lbl_8049664C;
    lbl_8049664C = 1;
}

s32 fn_8006A5F4(void) {
    void fn_802D85A4(void *);
    void fn_802D8640(void *, s32);
    void fn_802D85FC(void *, s32);
    extern s32 lbl_8049664C;
    u8 buf[0x40];
    s32 ret;

    fn_802D85A4(buf);
    fn_802D8640(buf, 0x10);
    ret = lbl_8049664C;
    fn_802D85FC(buf, 2);
    return ret;
}

void fn_8006A640(void) {
    M2C_UNK fn_8006AD28(s32);
    extern s32 lbl_80494148;
    fn_8006AD28(lbl_80494148);
    lbl_80494148 = 0;
    fn_8006A5E8();
}

void fn_8006C6B4(void *arg0) {
    M2C_UNK fn_8006C130(void *);
    M2C_UNK fn_8006C2F8();
    M2C_UNK fn_8006C458(void *);
    extern s32 lbl_80494138;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3A4) == 9) {
        lbl_80494138 = 0;
        fn_8006C2F8();
        fn_8006C458(arg0);
        fn_8006C130(arg0);
    }
}

void fn_8006C704(void *arg0) {
    M2C_UNK fn_8006C35C();
    M2C_UNK fn_8006C3F4(void *);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3A4) == 9) {
        fn_8006C35C();
        fn_8006C3F4(arg0);
    }
}

void fn_8006C7F0(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8006C824(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3A4);
}

void fn_8006C82C(void *arg0) {
    extern void fn_8006C91C(void *);
    extern char lbl_80409388[];
    extern f32 lbl_803C937C;
    M2C_FIELD(arg0, void **, 0x4) = lbl_80409388;
    M2C_FIELD(arg0, s32 *, 0x0) = 0;
    M2C_FIELD(arg0, f32 *, 0x8) = lbl_803C937C;
    M2C_FIELD(arg0, f32 *, 0x10) = lbl_803C937C;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, f32 *, 0x18) = lbl_803C937C;
    M2C_FIELD(arg0, s32 *, 0x1c) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = lbl_803C937C;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_803C937C;
    M2C_FIELD(arg0, s32 *, 0x2c) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6c) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7c) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    fn_8006C91C(arg0);
}

void fn_8006C8C4(void *arg0, s32 arg1) {
    extern char lbl_80409388[];
    extern char lbl_80406CE0[];
    extern void fn_8006CBF0(void *);
    extern void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 0x4) = lbl_80409388;
    fn_8006CBF0(arg0);
    M2C_FIELD(arg0, void **, 0x4) = lbl_80406CE0;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8006CD40(void) {
    fn_8006D798();
}

s32 fn_8006D704(void *self, s32 arg1) {
    extern char *lbl_8049665C;
    extern f32 lbl_803C940C[];
    extern s32 fn_8006D798(void *);
    char *vt;
    s32 n;

    if (arg1 == 0) {
        return 0;
    }
    fn_8006D798(self);
    if (M2C_FIELD(self, f32 *, 0x8) >= lbl_803C940C[0]) {
        return 0;
    }
    vt = *(char **)lbl_8049665C;
    n = (*(s32 (**)(char *, s32))(vt + 0x194))(lbl_8049665C + *(s16 *)(vt + 0x190), arg1);
    return (u32)(M2C_FIELD(self, s32 *, 0x48) + n) <= (u32)M2C_FIELD(self, s32 *, 0x4C);
}

void fn_8006D998(void) {

}

void fn_8006D99C(s32 *self, s32 value) {
    *self = value;
}

void fn_8006D9A4(void *self, s32 flags) {
    extern void fn_802D20E8(void *);
    *(s32 *)self = 0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8006D9D4(void *self, void *arg1) {
    extern void fn_8006DA60(void *, s32, f32);
    extern void fn_8006DBBC(void *, f32, f32, f32);
    fn_8006DA60(self, 0, M2C_FIELD(arg1, f32 *, 0xB4));
    fn_8006DA60(self, 1, M2C_FIELD(arg1, f32 *, 0xB8));
    fn_8006DA60(self, 2, M2C_FIELD(arg1, f32 *, 0xBC));
    fn_8006DA60(self, 3, M2C_FIELD(arg1, f32 *, 0xC0));
    fn_8006DA60(self, 4, M2C_FIELD(arg1, f32 *, 0xC4));
    fn_8006DBBC(self, M2C_FIELD(arg1, f32 *, 0xC8), M2C_FIELD(arg1, f32 *, 0xCC), M2C_FIELD(arg1, f32 *, 0xD0));
}

void fn_8006DBBC(void *self, f32 x, f32 y, f32 z) {
    extern void fn_8006DC70(void *, s32, f32, f32, f32);
    fn_8006DC70(self, 1, x, y, z);
    fn_8006DC70(self, 2, x, y, z);
    fn_8006DC70(self, 7, x, y, z);
    fn_8006DC70(self, 0, x, y, z);
    fn_8006DC70(self, 6, x, y, z);
}

extern s32 fn_802E0904(void *);
extern s32 fn_802E091C(void *);
extern void fn_8010CD4C(s32);
extern void fn_800E3B38(void *, s32, f32);
extern void fn_800490B0(void *);
extern s32 lbl_8041E1C8[];
extern s32 lbl_8041F754[];
extern s32 lbl_80496644;
extern f32 lbl_803C9700[];
extern s32 lbl_804093B0[];
void fn_8006E268(void *self) {
    if (fn_802E0904(lbl_8041E1C8) == 0 && fn_802E091C(lbl_8041E1C8) == 0) {
        fn_8010CD4C(lbl_80496644);
        fn_800E3B38(self, 3, lbl_803C9700[0]);
    }
}

void fn_8006E2D0(void) {
}

void fn_8006E2D4(void) {
    fn_802E091C(lbl_8041E1C8);
    fn_800490B0(lbl_8041F754);
}

s32 *fn_8006E308(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_804093B0;
    return self;
}

void fn_8006E7AC(void) {

}

void fn_8006F534(void) {

}

void fn_8006F538(void) {

}

void fn_8006F788(void) {

}

s32 fn_8006F878(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA8);
}

s32 fn_8006FD2C(s32 arg0) {
    return arg0 + 0x70;
}

s32 fn_8006FDB4(s32 arg0) {
    M2C_UNK fn_8006FF58(s32);
    M2C_UNK fn_800F6FB4(s32, s32, M2C_UNK);
    fn_800F6FB4(arg0 + 0x4C, arg0 + 0x54, 0x20);
    fn_800F6FB4(arg0 + 0x94, arg0 + 0x9C, 0x20);
    fn_8006FF58(arg0);
    return arg0;
}

s32 fn_800702F8(void) {
    return 0;
}

s32 fn_80070464(void) {
    return 0;
}

void fn_800704E0(void *arg0) {
    extern s32 lbl_80494168;
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    lbl_80494168 = 1;
}

void fn_80070560(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DBBCC(void *, u32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_80248488(void *, s32, u32);
void *fn_80072A60(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        heap = NULL;
    } else {
        p = fn_802D197C(heap, size, 4);
        if (p == NULL && (p = fn_802DBBCC(heap, size, 0)) == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            heap = fn_802DBBCC(fn_802D0B3C(), size, 0);
        } else {
            heap = p;
        }
    }
    fn_80248488(heap, 0, size);
    return heap;
}

void fn_80072B0C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80076E18(void *arg0) {
    extern void fn_80305EE0(void *, s32);
    fn_80305EE0(arg0, 1);
}

void fn_80076E3C(void *arg0) {
    extern void fn_80305FE0(void *, s32);
    fn_80305FE0(arg0, 1);
}

void fn_800775F0(void) {

}

void fn_80077678(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xFE4) != 0) {
        M2C_FIELD(arg0, s8 *, 0xF80) = 2;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0xF80) = 1;
}

void fn_80077F64(s32 arg0) {
    M2C_UNK fn_8007C278(s32);
    s32 var_r30;
    s32 var_r31;

    var_r31 = arg0 + 0xF4;
    var_r30 = 8;
    do {
        fn_8007C278(var_r31);
        var_r31 += 0x19C;
        var_r30 -= 1;
    } while (var_r30 != 0);
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DBBCC(void *, u32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_80248488(void *, s32, u32);
void *fn_80078078(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        heap = NULL;
    } else {
        p = fn_802D197C(heap, size, 4);
        if (p == NULL && (p = fn_802DBBCC(heap, size, 0)) == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            heap = fn_802DBBCC(fn_802D0B3C(), size, 0);
        } else {
            heap = p;
        }
    }
    fn_80248488(heap, 0, size);
    return heap;
}

void fn_80078124(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80078158(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1230) = arg1;
}

s32 fn_80078160(void) {
    return 0;
}

void fn_8007A888(void *arg0) {
    extern void fn_80305EE0(void *, s32);
    fn_80305EE0(arg0, 1);
}

void fn_8007A8AC(void *arg0) {
    extern void fn_80305FE0(void *, s32);
    fn_80305FE0(arg0, 1);
}

void fn_8007ACF8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xFDC) != 0) {
        M2C_FIELD(arg0, s8 *, 0xF7C) = 2;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0xF7C) = 1;
}

void *fn_8007B2B0(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        heap = NULL;
    } else {
        p = fn_802D197C(heap, size, 4);
        if (p == NULL && (p = fn_802DBBCC(heap, size, 0)) == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            heap = fn_802DBBCC(fn_802D0B3C(), size, 0);
        } else {
            heap = p;
        }
    }
    fn_80248488(heap, 0, size);
    return heap;
}

void fn_8007B35C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8007B390(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1224) = arg1;
}

extern u8 lbl_80409910[];
extern void fn_80304AB4(void *);
void fn_8007B80C(u8 *self) {
    *(u8 **)(self + 0x44) = lbl_80409910;
    fn_80304AB4(self);
}

void fn_8007BB0C(void) {
    fn_80308518();
}

void fn_8007BB2C(void) {
    fn_8030861C();
}

void fn_8007BBDC(void **arg0) {
    void *var_r3;

    var_r3 = *arg0;
    if (var_r3 != NULL) {
        do {
            var_r3 = M2C_FIELD(var_r3, void **, 8);
        } while (var_r3 != NULL);
    }
}

void fn_8007C42C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
}

void fn_8007C434(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
}

void fn_8007C43C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
}

s32 fn_8007C444(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x7C);
}

s32 fn_8007C44C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

s32 fn_8007C454(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_8007C470(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

s32 fn_8007C478(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

s32 fn_8007C480(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x90);
}

s32 fn_8007C488(void) {
    return 0;
}

void fn_8007C490(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x94) = arg1;
}

void fn_8007C498(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10C) = arg1;
}

void *fn_8007C4A0(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        heap = NULL;
    } else {
        p = fn_802D197C(heap, size, 4);
        if (p == NULL && (p = fn_802DBBCC(heap, size, 0)) == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            heap = fn_802DBBCC(fn_802D0B3C(), size, 0);
        } else {
            heap = p;
        }
    }
    fn_80248488(heap, 0, size);
    return heap;
}

void fn_8007C54C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8007C580(s32 arg0) {
    M2C_UNK fn_803074F0(s32);
    fn_803074F0(arg0 + 0x7C);
}

void fn_8007C5A4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x198) = arg1;
}

void fn_8007C5AC(s32 arg0) {
    M2C_UNK fn_8007BB4C(s32);
    fn_8007BB4C(arg0 + 0x7C);
}

void fn_8007C5D0(s32 arg0) {
    M2C_UNK fn_8007BB94(s32);
    fn_8007BB94(arg0 + 0x7C);
}

void fn_8007C5F4(s32 arg0) {
    fn_8007BBDC(arg0 + 0x7C);
}

void fn_8007C618(s32 arg0) {
    M2C_UNK fn_80308518(s32);
    fn_80308518(arg0 + 0x7C);
}

void fn_8007C63C(s32 arg0) {
    M2C_UNK fn_8030861C(s32);
    fn_8030861C(arg0 + 0x7C);
}

void fn_8007C660(s32 arg0) {
    M2C_UNK fn_802CB994(s32);
    fn_802CB994(arg0 + 0x18C);
}

void fn_8007F894(void) {
    s32 fn_801D7E6C();
    M2C_UNK fn_801D841C(s32, M2C_UNK);
    M2C_UNK fn_802D1FC8(M2C_UNK);
    extern s32 lbl_80494600;
    if ((s32) lbl_80494600 == 0) {
        fn_802D1FC8(0x78);
        lbl_80494600 = fn_801D7E6C();
    }
    fn_801D841C(lbl_80494600, 0x3804219F);
}

void fn_800816B0(void) {

}

void fn_80081790(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1A28) = arg1;
}

s32 fn_80081798(void) {
    M2C_UNK fn_800817BC();
    fn_800817BC();
    return 0;
}

s32 fn_800817BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1A40) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A44) = 0;
    return 0;
}

s32 fn_800817D4(void) {
    void *fn_80081808();
    s32 var_r0;
    void *temp_r3;

    temp_r3 = fn_80081808();
    var_r0 = 0;
    if (temp_r3 != NULL) {
        var_r0 = M2C_FIELD(temp_r3, s32 *, 8);
    }
    return var_r0;
}

void fn_80081A14(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1A38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1A48) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A3C) - arg1);
}

void fn_80081D84(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80081DB8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C4) = arg1;
}

void fn_80081DC0(void *arg0, s32 arg1) {
    M2C_UNK fn_800BD804(s32, s32, M2C_UNK);
    fn_800BD804(arg1, arg0 + 0x164, 1);
    M2C_FIELD(arg0, s32 *, 0x160) = arg1;
}

void fn_80081E00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x36C) = arg1;
}

void fn_80081E08(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x370) = arg1;
}

s32 fn_80081E10(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x36C);
}

void fn_80087D64(s32 arg0) {
    void fn_8000AA2C();
    extern u8 lbl_803CB0C8[];
    extern u8 lbl_803CB0D0[];
    extern u8 lbl_803CB0D4[];
    extern s32 lbl_8041FA1C[];

    fn_8000AA2C(lbl_8041FA1C[0], lbl_803CB0C8, 0, 0, 1, arg0 ? lbl_803CB0D0 : lbl_803CB0D4);
}

void fn_80087DC0(s32 arg0) {
    void fn_8000AA2C();
    extern u8 lbl_803CB0D8[];
    extern u8 lbl_803CB0D0[];
    extern u8 lbl_803CB0D4[];
    extern s32 lbl_8041FA1C[];

    fn_8000AA2C(lbl_8041FA1C[0], lbl_803CB0D8, 0, 0, 1, arg0 ? lbl_803CB0D0 : lbl_803CB0D4);
}

void fn_80087E1C(s32 arg0) {
    void fn_8000AA2C();
    extern u8 lbl_803CB0E4[];
    extern u8 lbl_803CB0D0[];
    extern u8 lbl_803CB0D4[];
    extern s32 lbl_8041FA1C[];

    fn_8000AA2C(lbl_8041FA1C[0], lbl_803CB0E4, 0, 0, 1, arg0 ? lbl_803CB0D0 : lbl_803CB0D4);
}

void fn_80087E78(s32 arg0) {
    void fn_8000AA2C();
    extern u8 lbl_803CB0F0[];
    extern u8 lbl_803CB0D0[];
    extern u8 lbl_803CB0D4[];
    extern s32 lbl_8041FA1C[];

    fn_8000AA2C(lbl_8041FA1C[0], lbl_803CB0F0, 0, 0, 1, arg0 ? lbl_803CB0D0 : lbl_803CB0D4);
}

void fn_8008824C(void *arg0) {
    void fn_80088278(void *);
    if (M2C_FIELD(arg0, s32 *, 0x18) & 2) {
        fn_80088278(arg0);
    }
}

f32 fn_8008940C(void *arg0) {
    extern f32 lbl_803CBCF8[];
    f32 v[3];
    f32 *p = v;
    f32 r;

    r = lbl_803CBCF8[0];
    v[0] = r;
    p[1] = r;
    p[2] = v[0];
    if (M2C_FIELD(arg0, s32 *, 0x18) & 2) {
        r = M2C_FIELD(arg0, f32 *, 0xC8);
    }
    return r;
}

void *fn_80089558(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        heap = NULL;
    } else {
        p = fn_802D197C(heap, size, 4);
        if (p == NULL && (p = fn_802DBBCC(heap, size, 0)) == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            heap = fn_802DBBCC(fn_802D0B3C(), size, 0);
        } else {
            heap = p;
        }
    }
    fn_80248488(heap, 0, size);
    return heap;
}

void fn_80089604(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80089638(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xBC) = arg1;
}

void fn_80089640(f32 arg0) {
    extern f32 lbl_804966A0;
    lbl_804966A0 = arg0;
}

f32 fn_80089648(void) {
    extern f32 lbl_804966A0;
    return lbl_804966A0;
}

extern void fn_802D20E8(void *);
void fn_80089698(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8008A398(void) {
    fn_8008A3B8();
}

void fn_8008A6D4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8008A708(s32 *self) {
    return *self;
}

void fn_8008A7A4(s32 *arg0) {
    *arg0 = 0;
}

void fn_8008A7B0(s32 arg0, s32 arg1) {
    M2C_UNK fn_8008BCC8(s32, s32);
    fn_8008BCC8(arg1, arg0);
}

void fn_8008ABBC(s32 arg0, s32 arg1) {
    M2C_UNK fn_8008AB4C();
    s32 temp_r0;
    s32 var_r9;

    fn_8008AB4C();
    temp_r0 = arg0 + 0x184;
    if (temp_r0 != 0) {
        var_r9 = arg0 + 0x1C4;
        if (temp_r0 != var_r9) {
            do {
                var_r9 -= 0x10;
            } while (temp_r0 != var_r9);
        }
    }
    fn_80089698(arg0, arg1);
}

void fn_8008B420(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x158) = 1;
}

void fn_8008B42C(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x158) != 0) {
        M2C_FIELD(arg0, s32 *, 0x158) = 0;
    }
}

void fn_8008C160(void *arg0, s32 arg1) {
    extern f32 lbl_803CC1C8[];
    struct V { f32 x, y, z; } v;
    struct V *pv = &v;
    struct V *a;

    pv->x = pv->y = pv->z = lbl_803CC1C8[0];
    if (arg1 != 0) {
        v.z = M2C_FIELD(arg0, f32 *, 0x14);
    }
    a = (struct V *)((u8 *)arg0 + 0xC);
    *a = *pv;
    if (arg1 != 0) {
        v.z = a->z;
    }
    *(struct V *)((u8 *)arg0 + 0x18) = *pv;
}

void fn_8008C388(void) {
    fn_8008C3A8();
}

void fn_8008C3A8(void *arg0) {
    extern f32 lbl_803CC224[];
    M2C_FIELD(arg0, f32 *, 0x5C) = lbl_803CC224[0] / M2C_FIELD(arg0, f32 *, 0x28);
}

void fn_8008C3C0(s32 arg0, s32 arg1) {
    extern void fn_8008C1D8(void *);
    extern s32 lbl_80409BE0[];
    extern s32 lbl_8042EF54[];
    extern void *lbl_8042EFB4[];

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8008C1D8(lbl_8042EF54);
        } else {
            lbl_8042EFB4[0] = lbl_80409BE0;
        }
    }
}

void fn_8008C414(void) {
    void fn_8008C3C0(s32, s32);
    fn_8008C3C0(1, 0xFFFF);
}

void fn_8008C440(void) {
    fn_8008C3C0(0, 0xFFFF);
}

