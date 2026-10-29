/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

struct BBI_Handle { s32 v; };
struct BBI_Vec3 { s32 a; s32 b; s32 c; };

static inline void *BBI_AllocAligned(s32 size) {
    void *fn_802D0AB8(void);
    void *fn_802D0B3C(void);
    void *fn_802D197C(void *, s32, s32);
    void *fn_802DC3C0(void *, s32, s32, s32, s32);
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

static inline s32 BBI_ListValid(void *n) {
    return n != NULL;
}

static inline void *BBI_AllocZero(s32 size) {
    void *fn_80248488(void *, s32, u32);
    void *p = BBI_AllocAligned(size);
    fn_80248488(p, 0, size);
    return p;
}

void *fn_80059918(void *arg0) {
    extern u8 lbl_80408398[];
    M2C_FIELD(arg0, void **, 8) = lbl_80408398;
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 2) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}

void fn_80059948(void *arg0, s32 arg1) {
    extern u8 lbl_80408398[];
    void fn_802D20E8(void *);
    M2C_FIELD(arg0, void **, 8) = lbl_80408398;
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8005997C(s8 *arg0, s8 arg1) {
    void fn_800599B0(s8 *);
    fn_800599B0(arg0);
    *arg0 = arg1;
}

s8 fn_800599B0(u8 *arg0) {
    return (s8) *arg0;
}

void fn_800599BC(s8 *arg0, s8 arg1) {
    void fn_800599F0(s8 *);
    fn_800599F0(arg0);
    arg0[3] = arg1;
}

s8 fn_800599F0(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 3);
}

s32 fn_80059AC4(s32 *self) {
    return self[1];
}

s8 fn_80059B50(void *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 1);
}

u8 fn_80059B90(u8 *self) {
    return self[2];
}

s32 fn_80059B98(s32 *self, struct BBI_Vec3 *out) {
    struct BBI_Vec3 tmp;
    s32 ret;

    if (out != 0) {
        out->a = self[0];
        out->b = self[1];
        tmp.c = out->c;
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}

s32 *fn_80059BD4(s32 *self) {
    s32 i;
    s32 *p = self;

    for (i = 0x24; i != 0; i--) {
        *p++ = 0;
    }
    return self;
}

extern void fn_8005A038(s32);
extern void fn_802D20E8(s32);
void fn_80059BF4(s32 self, s32 flags) {
    fn_8005A038(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_8005A2D4(s32 *arg0) {
    s32 fn_8005A910(s32 *);
    s32 idx;
    s32 ret;

    idx = fn_8005A910(arg0);
    if (idx != -1) {
        ret = arg0[idx];
    } else {
        ret = 0;
    }
    return ret;
}

s32 fn_8005A38C(void) {
    return 0x24;
}

s32 fn_8005A574(s32 *arg0) {
    s32 fn_8005A5B8(s32 *);
    s32 idx;
    s32 ret;

    idx = fn_8005A5B8(arg0);
    if (idx != -1) {
        ret = arg0[idx];
    } else {
        ret = 0;
    }
    return ret;
}

s32 fn_8005AB08(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0x50) == 0x200) {
        return 3;
    }
    switch (M2C_FIELD(arg0, s16 *, 0x12)) {
    case 4:
    case 15:
        return 1;
    case 8:
        return 2;
    }
    return 0;
}

void *fn_8005AB88(s32 arg0) {
    extern char *lbl_80496650;
    char *obj;
    char *e;

    if (lbl_80496650 != NULL) {
        e = *(char **)lbl_80496650 + 0x138;
        obj = (*(char *(**)(void *, s32))(e + 4))(lbl_80496650 + *(s16 *)e, arg0);
    } else {
        obj = NULL;
    }
    if (obj != NULL) {
        e = *(char **)obj + 0x120;
        return (*(void *(**)(void *))(e + 4))(obj + *(s16 *)e);
    }
    return NULL;
}

s32 *fn_8005ACE4(s32 *arg0) {
    arg0[1] = 0;
    arg0[0] = 0;
    return arg0;
}

void *fn_8005ACF8(void *arg0, void *arg1) {
    extern char lbl_8045BBA0[];
    void fn_803374C8(void *, void *);
    void fn_8005AD4C(void *);

    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, void **, 0xC) = arg1;
    fn_803374C8(lbl_8045BBA0, arg1);
    fn_8005AD4C(arg0);
    return arg0;
}

void fn_8005AF5C(void *arg0, s32 arg1) {
    extern char lbl_8045BBA0[];
    void fn_8030AC1C(void *, s32, s32);
    void fn_803379C8(void *, s32);
    void *obj = M2C_FIELD(arg0, void **, 8);

    if (obj != NULL) {
        void **v;
        fn_8030AC1C(obj, 0x4000, 1);
        fn_8030AC1C(M2C_FIELD(arg0, void **, 8), 8, 1);
        v = M2C_FIELD(arg0, void ***, 8);
        if (v != NULL) {
            char *vt = (char *)*v;
            (*(void (**)(void *, s32))(vt + 0x34))((char *)v + *(s16 *)(vt + 0x30), 3);
        }
        M2C_FIELD(arg0, void **, 8) = NULL;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    } else {
        fn_803379C8(lbl_8045BBA0, M2C_FIELD(arg0, s32 *, 0xC));
        M2C_FIELD(arg0, void **, 0x10) = obj;
    }
    if (arg1 & 1) {
        fn_802D20E8((s32)arg0);
    }
}

void fn_8005B368(void) {

}

s32 *fn_8005B36C(s32 *arg0) {
    arg0[1] = 0;
    arg0[0] = 0;
    arg0[2] = 1;
    arg0[3] = 0;
    return arg0;
}

void fn_8005B38C(void *arg0, s32 arg1) {
    void fn_8005AF5C(void *, s32);
    void fn_802CB8D4(void *);
    void *node;
    void *obj;
    void *next;

    node = M2C_FIELD(arg0, void **, 4);
    while (BBI_ListValid(node)) {
        next = M2C_FIELD(node, void **, 4);
        obj = M2C_FIELD(node, void **, 0);
        if (M2C_FIELD(arg0, s32 *, 8) != 0 && obj != NULL) {
            fn_8005AF5C(obj, 3);
        }
        node = next;
    }
    fn_802CB8D4(arg0);
    fn_802CB8D4(arg0);
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_8005B67C(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8005B69C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8005B6DC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8005BAE8(void *arg0, s32 arg1) {
    M2C_UNK fn_803256E0(s32, s32, M2C_UNK);
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x430);
    if (var_r31 != NULL) {
        do {
            fn_803256E0(arg1, M2C_FIELD(var_r31, s32 *, 0), 0);
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}

void fn_8005BB38(void *arg0) {
    void *temp_r3;
    void *temp_r9;
    void *sub;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x430);
    if (var_r31 != NULL) {
        do {
            temp_r3 = M2C_FIELD(var_r31, void **, 0);
            sub = (u8 *)temp_r3 + 0x300;
            temp_r9 = M2C_FIELD(sub, void **, 0);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0x1C)((u8 *)sub + M2C_FIELD(temp_r9, s16 *, 0x18), M2C_FIELD(arg0, s32 *, 0x30C));
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}

void fn_8005CB90(void *arg0, void *arg1) {
    s32 *p;
    s32 v;

    if (arg1 == NULL) {
        return;
    }
    p = (s32 *)((u8 *)arg0 + 0x400);
    v = M2C_FIELD(arg1, s32 *, 0x14);
    if (p[5] == v) {
        return;
    }
    p[5] = v;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x440), s32 *, 0x9C) = v == 1;
}

void fn_8005CE50(char *self, s32 arg1) {
    extern void fn_802EA51C(void *, s32, s32, s32, s32, f32);
    extern f32 lbl_803C8068[];

    fn_802EA51C(self + 0x314, 1, arg1, 0, 0, lbl_803C8068[0]);
    M2C_FIELD(self, s32 *, 0x3C8) = 1;
}

void fn_8005CEA0(char *self, s32 arg1) {
    extern void fn_802EA51C(void *, s32, s32, s32, s32, f32);
    extern f32 lbl_803C806C[];

    fn_802EA51C(self + 0x314, 1, arg1, 3, 0, lbl_803C806C[0]);
    M2C_FIELD(self, s32 *, 0x3C8) = 2;
}

void fn_8005CEF0(void *arg0) {
    M2C_UNK fn_802E9CD4(s32);
    fn_802E9CD4(arg0 + 0x314);
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
}

void fn_8005D344(void) {
    fn_8005D054();
}

void fn_8005D364(void *arg0, void *arg1) {
    void fn_80325C50(void *, void *);
    void fn_8032582C(void *, void *);
    void **node;
    void *obj;
    void *vt;

    for (node = M2C_FIELD(arg0, void ***, 0x430); node != NULL; node = (void **)node[2]) {
        obj = node[0];
        fn_80325C50(arg1, obj);
        vt = M2C_FIELD(obj, void **, 0);
        if (((void *(*)(void *))M2C_FIELD(vt, void **, 0x17C))((char *)obj + M2C_FIELD(vt, s16 *, 0x178)) != NULL) {
            vt = M2C_FIELD(obj, void **, 0);
            fn_80325C50(arg1, ((void *(*)(void *))M2C_FIELD(vt, void **, 0x17C))((char *)obj + M2C_FIELD(vt, s16 *, 0x178)));
        }
        if (M2C_FIELD(obj, void **, 0x39C) != NULL) {
            fn_8032582C(arg1, M2C_FIELD(obj, void **, 0x39C));
        }
        if (M2C_FIELD(obj, void **, 0x3A0) != NULL) {
            fn_8032582C(arg1, M2C_FIELD(obj, void **, 0x3A0));
        }
    }
}

void fn_8005D420(void *self, s32 arg1, s32 arg2) {
    void fn_8031EA2C(void *);
    void *fn_8033740C(void *, s32, s32, s32);
    void fn_802F52DC(void *, s32, s32);
    extern u8 lbl_8045BA40[];

    if (M2C_FIELD(self, s32 *, 0x134) != 0) {
        if (M2C_FIELD(self, void **, 0x3FC) != NULL) {
            fn_8031EA2C(M2C_FIELD(self, void **, 0x3FC));
        }
        M2C_FIELD(self, void **, 0x3FC) = NULL;
        if (arg2 != 0) {
            M2C_FIELD(self, void **, 0x3FC) = fn_8033740C(lbl_8045BA40, arg2, 0, 0);
        }
    }
    fn_802F52DC(self, arg1, arg2);
}

void fn_8005D4A8(u8 *self, s32 arg1, u16 *arg2, u16 *arg3) {
    s32 fn_8005D5E4(u8 *, s32);
    void *fn_80190AA4(s32, u32);
    extern s32 lbl_80496654;
    s32 id;
    void *temp_r3;

    id = fn_8005D5E4(self, arg1);
    *arg3 = id;
    *arg2 = id;
    if (lbl_80496654 != 0 && *arg2 <= 0xFFFAU) {
        temp_r3 = fn_80190AA4(lbl_80496654, *arg2);
        if (temp_r3 != NULL) {
            *arg3 = M2C_FIELD(temp_r3, u16 *, 2);
        }
    }
}

void fn_8005D518(u8 *self, s32 arg1, u16 *arg2, u16 *arg3) {
    void *fn_80190AA4(s32, u32);
    extern s32 lbl_80496654;
    u8 *vt = *(u8 **)(self + 4);
    s32 id;
    void *temp_r3;

    id = (*(s32 (**)(u8 *, s32))(vt + 0x2CC))(self + *(s16 *)(vt + 0x2C8), arg1);
    *arg3 = id;
    *arg2 = id;
    if (lbl_80496654 != 0 && *arg2 <= 0xFFFAU) {
        temp_r3 = fn_80190AA4(lbl_80496654, *arg2);
        if (temp_r3 != NULL) {
            *arg3 = M2C_FIELD(temp_r3, u16 *, 2);
        }
    }
}

s32 fn_8005D59C(u8 *self) {
    u8 *vt = *(u8 **)(self + 4);
    return (*(s32 (**)(u8 *, s32))(vt + 0x224))(self + *(s16 *)(vt + 0x220), 0x22) != 0;
}

s32 fn_8005D5E4(u8 *self, s32 arg1) {
    void fn_8005D670(u8 *);
    s32 fn_80034F8C(s32);
    u8 *obj;
    u8 *vt;

    if (arg1 != 0) {
        M2C_FIELD(self, s32 *, 0x43C) = 0;
    }
    obj = M2C_FIELD(self, u8 **, 0x308);
    vt = *(u8 **)(obj + 4);
    if ((*(s32 (**)(u8 *))(vt + 0x3C))(obj + *(s16 *)(vt + 0x38)) != 0) {
        if (M2C_FIELD(self, s32 *, 0x43C) == 0) {
            fn_8005D670(self);
            if (M2C_FIELD(self, s32 *, 0x43C) == 0) {
                goto fail;
            }
        }
        return fn_80034F8C(M2C_FIELD(self, s32 *, 0x43C));
    }
fail:
    return -1;
}

void fn_8005DA60(void) {

}

void fn_8005DB64(u8 *self) {
    extern f32 lbl_803C80A0[];
    extern f32 lbl_803C80A4[];
    void fn_802C9368(f32 *, f32 *);
    f32 mtx[16];
    f32 vec[3];
    f32 *m;
    f32 *v;
    u8 *obj;

    if (M2C_FIELD(self, u8 **, 0x42C) != 0) {
        (*(void (**)(u8 *, f32 *))(*(u8 **)self + 0xF4))(self + *(s16 *)(*(u8 **)self + 0xF0), mtx);
        m = mtx;
        v = vec;
        v[0] = lbl_803C80A0[0];
        v[1] = lbl_803C80A0[0];
        v[2] = lbl_803C80A4[0];
        fn_802C9368(m, v);
        obj = M2C_FIELD(self, u8 **, 0x42C);
        (*(void (**)(u8 *, f32 *))(*(u8 **)obj + 0x9C))(obj + *(s16 *)(*(u8 **)obj + 0x98), m);
    }
}

void fn_8005DC04(void) {

}

void fn_8005EA88(void *arg0) {
    M2C_UNK fn_8005ED44(void *);
    M2C_UNK fn_802E77F0(void *, void *, s32);
    extern s32 lbl_80494DFC;
    s32 var_r0;
    s32 var_r0_2;
    void *temp_r9;

    var_r0 = 1;
    temp_r9 = M2C_FIELD(arg0, void **, 0x334);
    if (temp_r9 == NULL) {
        var_r0 = 0;
    }
    var_r0_2 = 0;
    if (var_r0 != 0) {
        var_r0_2 = M2C_FIELD(temp_r9, s32 *, 0x24);
    }
    if (var_r0_2 != 0) {
        fn_802E77F0(arg0 + 0x314, arg0 + 0xD0, lbl_80494DFC);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x610) > 0) {
        fn_8005ED44(arg0);
    }
}

void fn_8005F6E8(void *arg0, s32 arg1, s32 arg2) {
    void fn_8005F54C(void *);
    void *sub;
    void *temp_r9;
    void *temp_r9_3;

    M2C_FIELD(arg0, s32 *, 0x308) = arg1;
    sub = (u8 *)arg0 + 0x300;
    M2C_FIELD(arg0, s32 *, 0x3A8) = arg2;
    temp_r9 = M2C_FIELD(sub, void **, 0);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x14)((u8 *)sub + M2C_FIELD(temp_r9, s16 *, 0x10));
    fn_8005F54C(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x134) != 0) {
        temp_r9_3 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x54)((u8 *)arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x50));
    }
}

void fn_8005F8D0(void *arg0) {
    void *temp_r3;
    void *temp_r9;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x430);
    if (var_r31 != NULL) {
        do {
            temp_r3 = M2C_FIELD(var_r31, void **, 0);
            temp_r9 = M2C_FIELD(temp_r3, void **, 0);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0x14C)((u8 *)temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x148), M2C_FIELD(arg0, s32 *, 0x308));
            var_r31 = M2C_FIELD(var_r31, void **, 8);
        } while (var_r31 != NULL);
    }
}

void fn_8005FAD0(void) {
    fn_802D2FD0();
}

s32 fn_8005FAF0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_8005FB30(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void *fn_8005FB70(arg0)
    void *arg0;
{
    void fn_8005B71C(void *);
    extern u8 lbl_804089D0[];
    extern u8 lbl_80408A08[];
    fn_8005B71C(arg0);
    M2C_FIELD(arg0, void **, 0x300) = lbl_804089D0;
    M2C_FIELD(arg0, void **, 0) = lbl_80408A08;
    return arg0;
}

void fn_8005FBB8(void *arg0, s32 arg1) {
    void fn_8005B890(void *, s32);
    void *fn_802D0AB8(void);
    void fn_802D1A00(void *, void *);
    extern u8 lbl_804089D0[];
    extern u8 lbl_80408A08[];
    M2C_FIELD(arg0, void **, 0x300) = lbl_804089D0;
    M2C_FIELD(arg0, void **, 0) = lbl_80408A08;
    fn_8005B890(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

void fn_8005FC18(void) {

}

void fn_8005FC1C(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8005F54C();
    M2C_UNK fn_8005FC7C(void *);
    void *temp_r9;

    M2C_FIELD(arg0, s32 *, 0x308) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3A8) = arg2;
    fn_8005F54C();
    fn_8005FC7C(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x134) != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x54)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x50));
    }
}

void fn_80060610(void) {
    fn_802D2FD0();
}

s32 fn_80060630(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_80060670(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void *fn_800606B0(arg0)
    void *arg0;
{
    void fn_8005B71C(void *);
    extern u8 lbl_804087D0[];
    extern u8 lbl_80408808[];
    fn_8005B71C(arg0);
    M2C_FIELD(arg0, void **, 0x300) = lbl_804087D0;
    M2C_FIELD(arg0, void **, 0) = lbl_80408808;
    return arg0;
}

void fn_800606F8(void *arg0, s32 arg1) {
    void fn_8005B890(void *, s32);
    void *fn_802D0AB8(void);
    void fn_802D1A00(void *, void *);
    extern u8 lbl_804087D0[];
    extern u8 lbl_80408808[];
    M2C_FIELD(arg0, void **, 0x300) = lbl_804087D0;
    M2C_FIELD(arg0, void **, 0) = lbl_80408808;
    fn_8005B890(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

void fn_80060758(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800607B8();
    M2C_UNK fn_8005F54C(void *);
    void *temp_r9;

    M2C_FIELD(arg0, s32 *, 0x308) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3A8) = arg2;
    fn_800607B8();
    fn_8005F54C(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x134) != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x54)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x50));
    }
}

void fn_80060C30(void) {
    fn_802D2FD0();
}

s32 fn_80060C50(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_80060C90(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_80060D20(void *arg0, s32 arg1) {
    void fn_8005B890(void *, s32);
    void *fn_802D0AB8(void);
    void fn_802D1A00(void *, void *);
    extern u8 lbl_804085C0[];
    extern u8 lbl_804085F8[];
    M2C_FIELD(arg0, void **, 0x300) = lbl_804085C0;
    M2C_FIELD(arg0, void **, 0) = lbl_804085F8;
    fn_8005B890(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

void fn_80060D80(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80060DE4(void *);
    M2C_FIELD(arg0, s32 *, 0x308) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3A8) = arg2;
    fn_80060DE4(arg0);
}

s32 fn_80060DAC(void) {
    return 0;
}

void fn_800616D8(void) {

}

void fn_800616DC(void) {
    fn_802D2FD0();
}

s32 fn_800616FC(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_8006173C(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void *fn_8006177C(arg0)
    void *arg0;
{
    void fn_8005B71C(void *);
    extern u8 lbl_804083C0[];
    extern u8 lbl_804083F8[];
    fn_8005B71C(arg0);
    M2C_FIELD(arg0, void **, 0x300) = lbl_804083C0;
    M2C_FIELD(arg0, void **, 0) = lbl_804083F8;
    return arg0;
}

void fn_800617C4(void *arg0, s32 arg1) {
    void fn_8005B890(void *, s32);
    void *fn_802D0AB8(void);
    void fn_802D1A00(void *, void *);
    extern u8 lbl_804083C0[];
    extern u8 lbl_804083F8[];
    M2C_FIELD(arg0, void **, 0x300) = lbl_804083C0;
    M2C_FIELD(arg0, void **, 0) = lbl_804083F8;
    fn_8005B890(arg0, 0);
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

void fn_80061824(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80061884();
    M2C_UNK fn_8005F54C(void *);
    void *temp_r9;

    M2C_FIELD(arg0, s32 *, 0x308) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3A8) = arg2;
    fn_80061884();
    fn_8005F54C(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x134) != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x54)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x50));
    }
}

s32 fn_80061F9C(char *self) {
    char *obj = *(char **)(self + 0x308);
    char *vt = *(char **)(obj + 4);
    char *r = (*(char *(**)(void *))(vt + 0x2D4))(obj + *(s16 *)(vt + 0x2D0));
    return *(u8 *)(*(char **)(r + 0xC0) + 9) != 0;
}

void fn_80063054(void) {
    extern void fn_8005B71C(void *);
    void *memset(void *, int, unsigned long);
    void *p;

    p = BBI_AllocAligned(0x660);
    memset(p, 0, 0x660);
    fn_8005B71C(p);
}

void fn_800630FC(void) {
    fn_8005B71C();
}

void fn_8006311C(void *self) {
    void fn_8005B890(void *, s32);
    fn_8005B890(self, 2);
}

void fn_80063140(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491E44[];
void *fn_80063180(void) {
    return lbl_80491E44;
}

extern s32 lbl_80491E50[];
s32 fn_8006318C(void) {
    return lbl_80491E50[0];
}

extern s32 lbl_80491E54[];
s32 fn_80063198(void) {
    return lbl_80491E54[0];
}

extern u16 lbl_80491E58[];
u16 fn_800631A4(void) {
    return lbl_80491E58[0];
}

void *fn_800631B0(void) {
    return lbl_80491E44;
}

extern u16 lbl_80491E5A[];
u16 fn_800631BC(void) {
    return lbl_80491E5A[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80063054(void);
extern void fn_8006311C(void *);
extern u8 lbl_803C7EE4[];
extern u8 lbl_80491CA0[];
void fn_800631C8(s32 arg0) {
    fn_802D6A90(lbl_80491E44, fn_80063054, fn_800630FC, fn_8006311C, arg0, lbl_803C7EE4, lbl_80491CA0);
}

void fn_8006321C(void) {
    fn_802D2430();
}

s32 fn_8006323C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x42C);
}

s32 fn_80063244(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x30C) >> 6U) & 1;
}

void fn_80063250(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x30C) = (s32) (M2C_FIELD(arg0, s32 *, 0x30C) | 0x40);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30C) = (s32) (M2C_FIELD(arg0, s32 *, 0x30C) & 0xFFFFFFBF);
}

s32 fn_80063278(s32 arg0) {
    return arg0 + 0x3E4;
}

void fn_80063280(u8 *arg0, struct BBI_Vec3 *arg1) {
    *(struct BBI_Vec3 *)(arg0 + 0x3E4) = *arg1;
}

s32 fn_800632A0(s32 arg0) {
    return arg0 + 0x3F0;
}

void fn_800632A8(u8 *arg0, struct BBI_Vec3 *arg1) {
    *(struct BBI_Vec3 *)(arg0 + 0x3F0) = *arg1;
}

f32 fn_800632C8(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3D0);
}

void fn_800632D0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x3D0) = farg0;
}

s32 fn_800632D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x440);
}

s32 fn_800632E0(void *arg0, s32 arg1) {
    return *(s32 *)((u8 *)arg0 + 0x408) != 0 && arg1 != 0;
}

s32 fn_80063300(void *arg0, s32 arg1) {
    return arg1 != 0;
}

s32 fn_80063314(void *arg0, s32 arg1) {
    return arg1 == 0;
}

void fn_800633C8(void) {
    fn_8005FB70();
}

void fn_800633E8(void *self) {
    fn_8005FBB8(self, 2);
}

void fn_8006340C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491E6C[];
void *fn_8006344C(void) {
    return lbl_80491E6C;
}

extern s32 lbl_80491E78[];
s32 fn_80063458(void) {
    return lbl_80491E78[0];
}

extern s32 lbl_80491E7C[];
s32 fn_80063464(void) {
    return lbl_80491E7C[0];
}

extern u16 lbl_80491E80[];
u16 fn_80063470(void) {
    return lbl_80491E80[0];
}

void *fn_8006347C(void) {
    return lbl_80491E6C;
}

extern u16 lbl_80491E82[];
u16 fn_80063488(void) {
    return lbl_80491E82[0];
}

extern void fn_80063320(void);
extern void fn_800633E8(void *);
extern u8 lbl_803C7EF8[];
void fn_80063494(s32 arg0) {
    fn_802D6A90(lbl_80491E6C, fn_80063320, fn_800633C8, fn_800633E8, arg0, lbl_803C7EF8, lbl_80491E44);
}

void fn_800634E8(void) {
    fn_802D2430();
}

void fn_800635B0(void) {
    fn_800606B0();
}

void fn_800635D0(void *self) {
    fn_800606F8(self, 2);
}

void fn_800635F4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491E94[];
void *fn_80063634(void) {
    return lbl_80491E94;
}

extern s32 lbl_80491EA0[];
s32 fn_80063640(void) {
    return lbl_80491EA0[0];
}

extern s32 lbl_80491EA4[];
s32 fn_8006364C(void) {
    return lbl_80491EA4[0];
}

extern u16 lbl_80491EA8[];
u16 fn_80063658(void) {
    return lbl_80491EA8[0];
}

void *fn_80063664(void) {
    return lbl_80491E94;
}

extern u16 lbl_80491EAA[];
u16 fn_80063670(void) {
    return lbl_80491EAA[0];
}

extern void fn_80063508(void);
extern void fn_800635D0(void *);
extern u8 lbl_803C7F10[];
void fn_8006367C(s32 arg0) {
    fn_802D6A90(lbl_80491E94, fn_80063508, fn_800635B0, fn_800635D0, arg0, lbl_803C7F10, lbl_80491E44);
}

void fn_800636D0(void) {
    fn_802D2430();
}

void fn_800636F0(void) {
    extern void fn_80060CD0(void *);
    void *p = BBI_AllocAligned(0x690);
    __builtin_memset(p, 0, 0x688);
    fn_80060CD0(p);
}

void fn_80063798(void) {
    fn_80060CD0();
}

void fn_800637B8(void *self) {
    fn_80060D20(self, 2);
}

void fn_800637DC(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491EBC[];
void *fn_8006381C(void) {
    return lbl_80491EBC;
}

extern s32 lbl_80491EC8[];
s32 fn_80063828(void) {
    return lbl_80491EC8[0];
}

extern s32 lbl_80491ECC[];
s32 fn_80063834(void) {
    return lbl_80491ECC[0];
}

extern u16 lbl_80491ED0[];
u16 fn_80063840(void) {
    return lbl_80491ED0[0];
}

void *fn_8006384C(void) {
    return lbl_80491EBC;
}

extern u16 lbl_80491ED2[];
u16 fn_80063858(void) {
    return lbl_80491ED2[0];
}

extern void fn_800636F0(void);
extern void fn_800637B8(void *);
extern u8 lbl_803C7F2C[];
void fn_80063864(s32 arg0) {
    fn_802D6A90(lbl_80491EBC, fn_800636F0, fn_80063798, fn_800637B8, arg0, lbl_803C7F2C, lbl_80491E44);
}

void fn_800638B8(void) {
    fn_802D2430();
}

void fn_80063980(void) {
    fn_8006177C();
}

void fn_800639A0(void *self) {
    fn_800617C4(self, 2);
}

void fn_800639C4(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80491EE4[];
void *fn_80063A04(void) {
    return lbl_80491EE4;
}

extern s32 lbl_80491EF0[];
s32 fn_80063A10(void) {
    return lbl_80491EF0[0];
}

extern s32 lbl_80491EF4[];
s32 fn_80063A1C(void) {
    return lbl_80491EF4[0];
}

extern u16 lbl_80491EF8[];
u16 fn_80063A28(void) {
    return lbl_80491EF8[0];
}

void *fn_80063A34(void) {
    return lbl_80491EE4;
}

extern u16 lbl_80491EFA[];
u16 fn_80063A40(void) {
    return lbl_80491EFA[0];
}

extern void fn_800638D8(void);
extern void fn_800639A0(void *);
extern u8 lbl_803C7F44[];
void fn_80063A4C(s32 arg0) {
    fn_802D6A90(lbl_80491EE4, fn_800638D8, fn_80063980, fn_800639A0, arg0, lbl_803C7F44, lbl_80491E44);
}

void fn_80063AA0(void) {
    fn_802D2430();
}

void fn_80063AC0(void *arg0, s32 *arg1) {
    M2C_UNK fn_8005CBC8();
    s32 temp_r4;

    temp_r4 = *arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x400) != temp_r4) {
        M2C_FIELD(arg0, s32 *, 0x400) = temp_r4;
        if (temp_r4 != 0) {
            fn_8005CBC8();
        }
    }
}

void fn_80063AFC(void *arg0, void *arg1) {
    void fn_8005D420(void *, s32, s32);
    char *p = (char *)arg0 + 0x400;
    s32 v = M2C_FIELD(arg1, s32 *, 0x10);

    if (M2C_FIELD(p, s32 *, 0x10) != v && v != 0) {
        M2C_FIELD(p, s32 *, 0x10) = v;
        M2C_FIELD(p, s32 *, 0xC) = M2C_FIELD(arg1, s32 *, 0xC);
        fn_8005D420(arg0, M2C_FIELD(arg1, s32 *, 0xC), M2C_FIELD(arg1, s32 *, 0x10));
    }
}

s32 fn_80063E00(char *obj) {
    s32 ret = 0;

    if (obj != NULL) {
        char *vt = *(char **)(obj + 4);
        if ((*(char *(**)(void *))(vt + 0x2D4))(obj + *(s16 *)(vt + 0x2D0)) != NULL) {
            vt = *(char **)(obj + 4);
            if (*(char **)((*(char *(**)(void *))(vt + 0x2D4))(obj + *(s16 *)(vt + 0x2D0)) + 0xC0) != NULL) {
                vt = *(char **)(obj + 4);
                if (*(u8 *)(*(char **)((*(char *(**)(void *))(vt + 0x2D4))(obj + *(s16 *)(vt + 0x2D0)) + 0xC0) + 7) != 0) {
                    ret = 1;
                }
            }
        }
    }
    return ret;
}

void fn_80063EA4(void) {
    M2C_UNK fn_80062EBC(M2C_UNK, M2C_UNK);
    fn_80062EBC(1, 0xFFFF);
}

