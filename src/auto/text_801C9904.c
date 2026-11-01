/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } Vec3_801CD;

extern void fn_801C9934(void *);
void *fn_801C9904(void *self) {
    fn_801C9934(self);
    return self;
}

s8 fn_801C9BC8(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 3:
        return (s8) M2C_FIELD(arg0, u8 *, 0x89);
    case 4:
        return (s8) M2C_FIELD(arg0, u8 *, 0x8B);
    case 5:
        return (s8) M2C_FIELD(arg0, u8 *, 0x8C);
    case 6:
        return (s8) M2C_FIELD(arg0, u8 *, 0x8D);
    case 1:
        return (s8) M2C_FIELD(arg0, u8 *, 0x87);
    case 2:
        return (s8) M2C_FIELD(arg0, u8 *, 0x88);
    case 7:
        return (s8) M2C_FIELD(arg0, u8 *, 0x8E);
    case 0:
        return (s8) M2C_FIELD(arg0, u8 *, 0x86);
    case 8:
        return (s8) M2C_FIELD(arg0, u8 *, 0x8F);
    case 9:
        return (s8) M2C_FIELD(arg0, u8 *, 0x90);
    case 10:
        return (s8) M2C_FIELD(arg0, u8 *, 0x91);
    case 11:
        return (s8) M2C_FIELD(arg0, u8 *, 0x92);
    case 12:
        return (s8) M2C_FIELD(arg0, u8 *, 0x93);
    case 13:
        return (s8) M2C_FIELD(arg0, u8 *, 0x94);
    case 14:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA1);
    case 15:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA2);
    case 18:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA5);
    case 16:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA3);
    case 17:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA4);
    case 21:
    case 19:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA6);
    case 20:
    case 22:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA7);
    default:
        return 0;
    }
}

void fn_801C9DC0(void *arg0, s32 arg1, s8 arg2) {
    switch (arg1) {                                 /* irregular */
    case 3:
        M2C_FIELD(arg0, s8 *, 0x89) = arg2;
        return;
    case 4:
        M2C_FIELD(arg0, s8 *, 0x8B) = arg2;
        return;
    case 5:
        M2C_FIELD(arg0, s8 *, 0x8C) = arg2;
        return;
    case 6:
        M2C_FIELD(arg0, s8 *, 0x8D) = arg2;
        return;
    case 1:
        M2C_FIELD(arg0, s8 *, 0x87) = arg2;
        return;
    case 2:
        M2C_FIELD(arg0, s8 *, 0x88) = arg2;
        return;
    case 7:
        M2C_FIELD(arg0, s8 *, 0x8E) = arg2;
        return;
    case 0:
        M2C_FIELD(arg0, s8 *, 0x86) = arg2;
        return;
    case 8:
        M2C_FIELD(arg0, s8 *, 0x8F) = arg2;
        return;
    case 9:
        M2C_FIELD(arg0, s8 *, 0x90) = arg2;
        return;
    case 10:
        M2C_FIELD(arg0, s8 *, 0x91) = arg2;
        return;
    case 11:
        M2C_FIELD(arg0, s8 *, 0x92) = arg2;
        return;
    case 12:
        M2C_FIELD(arg0, s8 *, 0x93) = arg2;
        return;
    case 13:
        M2C_FIELD(arg0, s8 *, 0x94) = arg2;
        return;
    case 14:
        M2C_FIELD(arg0, s8 *, 0xA1) = arg2;
        return;
    case 15:
        M2C_FIELD(arg0, s8 *, 0xA2) = arg2;
        return;
    case 18:
        M2C_FIELD(arg0, s8 *, 0xA5) = arg2;
        return;
    case 16:
        M2C_FIELD(arg0, s8 *, 0xA3) = arg2;
        return;
    case 17:
        M2C_FIELD(arg0, s8 *, 0xA4) = arg2;
        return;
    case 21:
    case 19:
        M2C_FIELD(arg0, s8 *, 0xA6) = arg2;
        return;
    case 20:
    case 22:
        M2C_FIELD(arg0, s8 *, 0xA7) = arg2;
        return;
    }
}

s32 *fn_801CAFCC(s32 *self) {
    extern u8 lbl_8045B980[];
    extern u8 lbl_803DE9C4[];
    s32 fn_8033740C(void *, u32, s32, s32);
    s32 *fn_8032D5C8(s32, void *);
    s32 *q;

    self[0] = 0;
    self[1] = 0;
    self[2] = 0;
    self[3] = 1;
    self[4] = 0;
    self[5] = 0;
    self[0] = fn_8033740C(lbl_8045B980, 0x2A2AF469, 0, 0);
    q = fn_8032D5C8(self[0], lbl_803DE9C4);
    self[4] = q[1];
    self[5] = q[3];
    return self;
}

void fn_801CB130(s32 *self, s32 flags) {
    void fn_8031EA2C(s32);
    void fn_802D20E8(void *);

    self[1] = 0;
    if (self[0] != 0) {
        fn_8031EA2C(self[0]);
        self[0] = 0;
    }
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_801CB188(s32 *self) {
    return self[1];
}

s32 fn_801CB378(void *self, s32 idx) {
    s32 fn_801CCA18(void *, s32, s32 *);
    s32 buf[600];
    s32 *p = M2C_FIELD(self, s32 **, 8);
    s32 *q;
    s32 n;

    if (p != NULL) {
        switch (idx) {
        case 0: case 1: case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: case 10: case 11:
            return fn_801CCA18(self, idx, buf);
        case 12:
            q = (s32 *)p[1];
            n = 0;
            if (q != NULL) {
                n = q[-1];
            }
            return n;
        }
    }
    return 0;
}

s32 fn_801CB6F8(void *self, s32 idx, u32 n) {
    s32 fn_801CB378(void *, s32);
    s32 buf[600];

    if (M2C_FIELD(self, s32 *, 8) == 0) {
        return 0;
    }
    if (n < (u32)fn_801CB378(self, idx) && idx >= 0) {
        if (idx <= 11) {
            fn_801CCA18(self, idx, buf);
            return *(s32 *)(M2C_FIELD(M2C_FIELD(self, u8 **, 8), u8 **, 0x2C) + buf[n] * 0x14);
        }
        if (idx == 12) {
            return *(s32 *)(M2C_FIELD(M2C_FIELD(self, u8 **, 8), u8 **, 4) + n * 0x14);
        }
    }
    return 0;
}

s32 fn_801CCA18(void *arg0, s32 arg1, s32 *arg2) {
    typedef struct { char pad[0x10]; s32 v; } Entry;
    s32 fn_801CCAC0(void *, s32);
    u32 n = 0;
    u32 i;
    s32 count;
    Entry *p = M2C_FIELD(M2C_FIELD(arg0, void **, 8), Entry **, 0x2C);

    if (p != NULL) {
        n = ((u32 *)p)[-1];
    }
    arg2[0] = 0;
    count = 1;
    for (i = 0; i < n; i++) {
        s32 v = fn_801CCAC0(arg0, arg1);
        if ((M2C_FIELD(M2C_FIELD(arg0, void **, 8), Entry **, 0x2C) + i)->v == v) {
            arg2[count] = i;
            count++;
        }
    }
    return count;
}

void fn_801CCDD4(void *arg0, void *arg1, s32 *arg2) {
    s32 fn_801CCEA4(void *, u8);
    s32 fn_801CCBA0(void *, u8, s8, s32, void *);
    s32 i;

    for (i = 0; i <= 22; i++) {
        s32 r = fn_801CCEA4(arg0, i);
        if (r < 0) {
            continue;
        }
        arg2[i] = fn_801CCBA0(arg0, r, fn_801C9BC8(arg1, i), 2, arg1);
    }
}

s32 fn_801CCE54(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 fn_801CD02C(void *, s32);
    s32 r = fn_801CD02C(arg0, arg1);
    if (r < 0) {
        return 0;
    }
    return fn_801C9BC8(arg3, r) == arg2;
}

s32 fn_801CD5F8(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 fn_801CB190(void *, s32);
    s32 fn_801CB3E4(void *, s32, s32);
    s32 i;
    s32 n = fn_801CB190(arg0, arg1);

    for (i = 0; i < n; i++) {
        if (fn_801CB3E4(arg0, arg1, i) == arg2) {
            *arg3 = i;
            return 1;
        }
    }
    return 0;
}

void *fn_801CD674(char *arg0) {
    void fn_802E55C0(void *);
    void fn_800A61AC(void *);
    void fn_800A73B8(void *);
    void fn_801CD87C(void *);
    extern u8 lbl_804160F8[];

    M2C_FIELD(arg0, s32 *, 0x0) = 0;
    M2C_FIELD(arg0, u8 **, 0x4) = lbl_804160F8;
    fn_802E55C0(arg0 + 0x68);
    fn_801CAFCC((s32 *)(arg0 + 0xF8));
    fn_800A61AC(arg0 + 0x128);
    fn_800A73B8(arg0 + 0x13C);
    fn_801CD87C(arg0);
    return arg0;
}

void fn_801CD858(void *self, Vec3_801CD *v, f32 f) {
    M2C_FIELD(self, Vec3_801CD *, 0xE0) = *v;
    M2C_FIELD(self, f32 *, 0x114) = f;
}

void fn_801CD968(void *self);
void fn_801CD87C(void *self) {
    extern Vec3_801CD lbl_8043629C;
    extern Vec3_801CD lbl_804362A8;
    extern f32 lbl_803DEAF8;
    s32 *p;
    s32 i;

    p = (s32 *)((char *)self + 8);
    for (i = 0; i < 23; i++) {
        *p++ = 0;
    }
    M2C_FIELD(self, s32 *, 0x64) = 0;
    M2C_FIELD(self, Vec3_801CD *, 0xE0) = lbl_8043629C;
    M2C_FIELD(self, Vec3_801CD *, 0xEC) = lbl_804362A8;
    M2C_FIELD(self, f32 *, 0x118) = lbl_803DEAF8;
    M2C_FIELD(self, s32 *, 0x124) = 0;
    M2C_FIELD(self, s32 *, 0x110) = 0;
    M2C_FIELD(self, f32 *, 0x114) = lbl_803DEAF8;
    M2C_FIELD(self, s32 *, 0x11C) = 0;
    M2C_FIELD(self, s32 *, 0x120) = 0;
    fn_801CD968(self);
}

s32 fn_801CD938(void *self) {
    s32 *p;
    s32 i;
    s32 n;

    p = (s32 *)((char *)self + 8);
    n = 0;
    for (i = 0; i < 23; i++) {
        if (*p++ != 0) {
            n++;
        }
    }
    return n;
}

void fn_801CD968(void *self) {

}

void fn_801CD96C(void *self, s32 arg1) {
    void *fn_800A4754(void);
    void fn_800A48D0(void *, s32, s32);
    void fn_800A479C(void *, s32, s32 *, s32 *);

    if (M2C_FIELD(self, s32 *, 0x120) != 0 && M2C_FIELD(self, s32 *, 0x124) != 0) {
        if (arg1 == M2C_FIELD(self, s32 *, 0x144)) {
            return;
        }
        fn_800A48D0(fn_800A4754(), M2C_FIELD(self, s32 *, 0x120), M2C_FIELD(self, s32 *, 0x124));
        M2C_FIELD(self, s32 *, 0x120) = 0;
        M2C_FIELD(self, s32 *, 0x124) = 0;
    }
    fn_800A479C(fn_800A4754(), arg1, (s32 *)((char *)self + 0x120), (s32 *)((char *)self + 0x124));
    M2C_FIELD(self, s32 *, 0x144) = arg1;
}

void fn_801CDFBC(char *arg0, s32 arg1) {
    void fn_8032BF30(void *, s32);
    s32 off = arg1 * 4;
    char *p = arg0 + 8;

    if (*(u8 **)(p + off) != 0) {
        u8 *obj;
        if (M2C_FIELD(*(u8 **)(p + off), void **, 0x134) != 0) {
            fn_8032BF30(M2C_FIELD(*(u8 **)(p + off), void **, 0x134), 0);
        }
        obj = *(u8 **)(p + off);
        if (obj != 0) {
            u8 *vt = *(u8 **)obj;
            (*(void (**)(void *, s32))(vt + 0x34))(obj + *(s16 *)(vt + 0x30), 3);
        }
        *(u8 **)(p + off) = 0;
    }
}

void fn_801CE504(char *arg0, s32 arg1) {
    void *fn_802EA51C(void *, s32, s32, s32, s32, f32);
    void fn_802EBE54(void *, s32);
    s32 fn_80337DCC(void *);
    void fn_803374C8(void *, s32);
    extern f32 lbl_803DEB1C[];
    extern u8 lbl_8045B0F0[];
    char *self = arg0;
    s32 id = arg1;

    if (fn_80337DCC(lbl_8045B0F0) == 0) {
        M2C_FIELD(self, s32 *, 0x110) = id;
        fn_803374C8(lbl_8045B0F0, id);
    } else {
        fn_802EA51C(self + 0x68, 1, id, -1, 0, lbl_803DEB1C[0]);
        fn_802EBE54(self + 0x68, 1);
    }
}

s32 fn_801CE588(char *arg0) {
    void *fn_802EA51C(void *, s32, s32, s32, s32, f32);
    void fn_802EBE54(void *, s32);
    s32 fn_80336E08(void *, s32);
    void fn_8033789C(void *, s32);
    extern f32 lbl_803DEB20[];
    extern u8 lbl_8045B0F0[];

    if (M2C_FIELD(arg0, s32 *, 0x110) != 0) {
        if (fn_80336E08(lbl_8045B0F0, M2C_FIELD(arg0, s32 *, 0x110)) == 0) {
            return 1;
        }
        fn_802EA51C(arg0 + 0x68, 1, M2C_FIELD(arg0, s32 *, 0x110), -1, 0, lbl_803DEB20[0]);
        fn_802EBE54(arg0 + 0x68, 1);
        fn_8033789C(lbl_8045B0F0, M2C_FIELD(arg0, s32 *, 0x110));
        M2C_FIELD(arg0, s32 *, 0x110) = 0;
    }
    return 0;
}

void fn_801CE7E4(s32 arg0) {
    M2C_UNK fn_801CB190(s32);
    fn_801CB190(arg0 + 0xF8);
}

s32 fn_801CE808(void *arg0, s32 arg1) {
    s32 fn_801CB378(void *, s32);
    return fn_801CB378((char *)arg0 + 0xF8, arg1);
}

void fn_801CE82C(s32 arg0) {
    M2C_UNK fn_801CBFF8(s32);
    fn_801CBFF8(arg0 + 0xF8);
}

void fn_801CE850(s32 arg0) {
    M2C_UNK fn_801CC288(s32);
    fn_801CC288(arg0 + 0xF8);
}

void fn_801CE874(s32 arg0) {
    M2C_UNK fn_801CC354(s32);
    fn_801CC354(arg0 + 0xF8);
}

void fn_801CE898(s32 arg0) {
    M2C_UNK fn_801CC5E0(s32);
    fn_801CC5E0(arg0 + 0xF8);
}

void fn_801CE8BC(s32 arg0) {
    M2C_UNK fn_801CB3E4(s32);
    fn_801CB3E4(arg0 + 0xF8);
}

s32 fn_801CE8E0(void *arg0, s32 arg1, u32 arg2) {
    s32 fn_801CB6F8(void *, s32, u32);
    return fn_801CB6F8((char *)arg0 + 0xF8, arg1, arg2);
}

void fn_801CE904(s32 arg0) {
    M2C_UNK fn_801CC6A4(s32);
    fn_801CC6A4(arg0 + 0xF8);
}

void fn_801CE928(s32 arg0) {
    M2C_UNK fn_801CC954(s32);
    fn_801CC954(arg0 + 0xF8);
}

void fn_801CEA60(s32 *arg0, s32 arg1) {
    void fn_8009CCE4(void *);
    void fn_8009CD40(void *, s32);
    void fn_8009D0F8(void *, s32);
    void fn_8009D108(void *, s32, s32);
    void fn_8009E244(void *, s32);
    void *fn_801C6370(s32);
    u8 buf[0x1F8];
    s32 *p;
    s32 i;
    s32 v;

    p = arg0 + 2;
    fn_8009CCE4(buf);
    fn_8009D0F8(buf, M2C_FIELD(fn_801C6370(*arg0), s32 *, 0x80));
    for (i = 0; i <= 0x16; i++) {
        v = *p++;
        if (v != 0) {
            fn_8009D108(buf, i, v);
        }
    }
    fn_8009E244(buf, arg1);
    fn_8009CD40(buf, 2);
}

char *fn_801CEAF0(char *arg0, s32 arg1) {
    extern char lbl_803DEB6C[];
    char *ret;
    char *p;

    p = ((struct { s32 pad[2]; char *arr[1]; } *)arg0)->arr[arg1];
    ret = lbl_803DEB6C;
    if (p != NULL) {
        p = *(char **)(p + 0x134);
        if (p != NULL) {
            ret = *(char **)(p + 0x18);
        }
    }
    return ret;
}

void fn_801CEB20(s32 arg0, s32 arg1) {
    extern f32 lbl_803DEB78[];
    extern f32 lbl_803DEB7C[];
    extern f32 lbl_8043629C[];
    extern f32 lbl_804362A8[];

    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_8043629C[1] = lbl_803DEB78[0];
        lbl_804362A8[1] = lbl_803DEB7C[0];
        lbl_8043629C[0] = lbl_803DEB78[0];
        lbl_804362A8[0] = lbl_803DEB7C[0];
        lbl_8043629C[2] = lbl_803DEB78[0];
        lbl_804362A8[2] = lbl_803DEB7C[0];
    }
}

void fn_801CEB74(void) {
    void fn_801CEB20(s32, s32);
    fn_801CEB20(1, 0xFFFF);
}

