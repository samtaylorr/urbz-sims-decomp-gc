/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y, z; } EVec3;
typedef struct { EVec3 min; EVec3 max; } EBox;

static inline void EBox_AddPoint(EBox *box, EVec3 *p) {
    s32 j;
    for (j = 0; j < 3; j++) {
        if ((&p->x)[j] < (&box->min.x)[j]) {
            (&box->min.x)[j] = (&p->x)[j];
        } else if ((&p->x)[j] > (&box->max.x)[j]) {
            (&box->max.x)[j] = (&p->x)[j];
        }
    }
}

static inline s32 ListCount(u8 *list) {
    return *(s32 *)(list + 4);
}

void *fn_802C45F8(void *self, s32 arg1, s32 arg2) {
    extern u8 lbl_804189F0[];
    extern u8 lbl_804191F0[];
    extern void fn_802B6FA8(void *, s32);
    extern void fn_802ADDD8(void *, s32);
    fn_802B6FA8(self, arg1);
    M2C_FIELD(self, u8 **, 4) = lbl_804189F0;
    fn_802ADDD8((u8 *)self + 8, 8);
    M2C_FIELD(self, s32 *, 0x18) = 0;
    M2C_FIELD(self, u8 **, 4) = lbl_804191F0;
    M2C_FIELD(self, s32 *, 0x1C) = arg2;
    return self;
}

void fn_802C465C(void *arg0, s32 arg1) {
    extern u8 lbl_804189F0[];
    extern void (*lbl_80443318[])(void *, s32);
    extern void fn_802ADDF4(void *, s32);
    extern void fn_802B709C(void *, s32);
    extern void fn_802A1EF0(void *);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u8 **, 4) = lbl_804189F0;
    fn_802ADDF4((u8 *)arg0 + 8, 2);
    fn_802B709C(arg0, 0);
    if (arg1 & 1) {
        fn_802A1EF0(arg0);
        lbl_80443318[0]((u8 *)arg0 - 8, 0x28);
    }
}

void fn_802C46DC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

s32 fn_802C46E8(void *self, u32 *a, s32 *b, u32 *c) {
    s32 ok;
    u32 v;
    char *obj;
    char *vt;
    if ((a[0] & 0x3F) == 0x22) {
        v = c[0];
        ok = 0;
        if ((v & 0x3F) == 1) {
            ok = (v >> 15) & 1;
        }
        if (ok) {
            obj = (char *)a[7];
            vt = *(char **)obj;
            (*(void (**)(void *, s32, s32))(vt + 0x2C))(obj + *(s16 *)(vt + 0x28), b[0] + 8, c[2] + 8);
        }
    }
    return 1;
}

s32 fn_802C4764(s32 arg0) {
    extern s32 (*lbl_80443310[])(s32);
    extern void fn_802A1E98(s32);
    s32 r;

    r = lbl_80443310[0](arg0 + 8) + 8;
    fn_802A1E98(r);
    return r;
}

void fn_802C47AC(s32 arg0, s32 arg1) {
    extern void (*lbl_80443318[])(s32, s32);
    extern void fn_802A1EF0(void);

    fn_802A1EF0();
    lbl_80443318[0](arg0 - 8, arg1 + 8);
}

s32 fn_802C47F4(void) {
    return 0;
}

void fn_802C47FC(void) {

}

void fn_802C4800(f32 *box, f32 *out) {
    f32 *max = box + 3;
    s32 i;

    for (i = 0; i < 8; i++) {
        f32 x, y, z;
        x = (i & 1) ? box[3] : box[0];
        y = ((i >> 1) & 1) ? max[1] : box[1];
        z = ((i >> 2) & 1) ? max[2] : box[2];
        out[0] = x;
        out[1] = y;
        out[2] = z;
        out += 3;
    }
}

void fn_802C4868(f32 *box, f32 *out) {
    extern const f32 lbl_803F0078[];
    f32 *max = box + 3;
    s32 i;
    f32 x, y, z;

    for (i = 0; i < 8; i++) {
        if (i & 1) x = box[3]; else x = box[0];
        if (i & 2) y = max[1]; else y = box[1];
        if (i & 4) z = max[2]; else z = box[2];
        out[0] = x;
        out[1] = y;
        out[2] = z;
        out[3] = lbl_803F0078[0];
        out += 4;
    }
}

void fn_802C49D4(f32 *box, s32 arg1, s32 arg2) {
    extern void fn_802C4DCC(s32, f32 *, s32, s32);
    f32 corners[8][3];
    s32 i;

    for (i = 0; i < 8; i++) {
    }
    fn_802C4800(box, corners[0]);
    fn_802C4DCC(arg2, corners[0], 8, arg1);
}

void fn_802C4A28(EBox *box, EVec3 *pts, s32 n) {
    s32 i;
    s32 j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            if (((f32 *)pts)[i * 3 + j] < ((f32 *)box)[j]) {
                ((f32 *)box)[j] = ((f32 *)pts)[i * 3 + j];
            } else if (((f32 *)pts)[i * 3 + j] > ((f32 *)box)[j + 3]) {
                ((f32 *)box)[j + 3] = ((f32 *)pts)[i * 3 + j];
            }
        }
    }
}

void fn_802C4A90(EBox *box, f32 (*pts)[4], s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        EVec3 p;
        EVec3 *q = &p;
        q->x = pts[i][0];
        q->y = pts[i][1];
        q->z = pts[i][2];
        EBox_AddPoint(box, q);
    }
}

void fn_802C4D24(EBox *box, EVec3 *pts, s32 n) {
    extern const f32 lbl_803F007C[];
    void fn_802C4A28(EBox *, EVec3 *, s32);
    if (n != 0) {
        box->max = *pts;
        box->min = box->max;
        fn_802C4A28(box, pts + 1, n - 1);
    } else {
        EVec3 tmp;
        EVec3 *t = &tmp;
        f32 f = lbl_803F007C[0];
        t->z = f;
        t->y = f;
        tmp.x = f;
        box->max = *t;
        box->min = box->max;
    }
}

void fn_802C5148(EBox *box, EVec3 *c, f32 r) {
    EVec3 *mx;
    f32 x, y, z;
    x = c->x - r;
    y = c->y - r;
    z = c->z - r;
    box->min.x = x;
    box->min.y = y;
    box->min.z = z;
    mx = &box->max;
    x = c->x + r;
    z = c->z + r;
    y = c->y + r;
    mx->x = x;
    mx->z = z;
    mx->y = y;
}

void fn_802C5198(f32 *out, f32 *in) {
    f32 *max;
    f32 r, x, y, z;
    f32 r2, x2, y2, z2;

    r = in[3];
    x = in[0] - r;
    y = in[1] - r;
    z = in[2] - r;
    out[0] = x;
    out[1] = y;
    out[2] = z;
    max = out + 3;
    r2 = in[3];
    x2 = in[0] + r2;
    y2 = in[1] + r2;
    z2 = in[2] + r2;
    max[0] = x2;
    max[2] = z2;
    max[1] = y2;
}

u32 fn_802C51F0(u8 *p, s32 len) {
    extern u32 lbl_803FCE68[];
    u32 crc = -1;
    s32 i;

    for (i = len - 1; len != 0; len = i--) {
        u32 idx = crc & 0xFF;
        idx ^= *p++;
        crc = (crc >> 8) ^ lbl_803FCE68[idx];
    }
    return ~crc;
}

u32 fn_802C5240(char *s) {
    extern u32 lbl_803FCE68[];
    u32 crc = -1;
    char c;

    while (*s != 0) {
        c = *s;
        crc = (crc >> 8) ^ lbl_803FCE68[(u8)crc ^ c];
        s++;
    }
    return ~crc;
}

u32 fn_802C528C(char *s) {
    extern u32 lbl_803FCE68[];
    u32 crc = -1;
    char c;

    while (*s != 0) {
        c = *s;
        if ((u32)(c - 'a') <= 25) {
            c -= 0x20;
        }
        crc = (crc >> 8) ^ lbl_803FCE68[(u8)crc ^ c];
        s++;
    }
    return ~crc;
}

u32 fn_802C52EC(u8 *s) {
    extern u32 lbl_803FCE68[];
    u32 crc = -1;
    char c;

    if ((u32)(*s - '0') <= 9) {
        crc = (crc >> 8) ^ lbl_803FCE68[(u8)crc ^ '_'];
    }
    while (*s != 0) {
        c = *s;
        if ((u32)(c - 'a') <= 25) {
            c -= 0x20;
        } else if ((u32)(c - 'A') <= 25) {
        } else if ((u32)(c - '0') <= 9) {
        } else {
            c = '_';
        }
        crc = (crc >> 8) ^ lbl_803FCE68[(u8)crc ^ c];
        s++;
    }
    return ~crc;
}

u32 fn_802C5390(char *s, u32 h) {
    while (*s != 0) {
        h *= 0x1000193;
        h ^= *s++;
    }
    return h;
}

u64 fn_802C53C8(char *s, u64 h) {
    while (*s != 0) {
        h *= 0x100000001B3ULL;
        h ^= (s64)*s++;
    }
    return h;
}

s32 *fn_802C5440(s32 *self) {
    extern u8 lbl_80419270[];
    self[0] = 0;
    self[1] = 0;
    self[2] = 0x80000000;
    self[3] = 0x80000000;
    self[5] = 0;
    self[6] = 0;
    self[7] = 0;
    self[8] = 0;
    self[4] = 0x80000000;
    self[10] = (s32)lbl_80419270;
    self[9] = 0;
    return self;
}

void fn_802C5484(void *self, s32 flags) {
    extern u8 lbl_80419270[];
    extern void *fn_802D0AB8(void);
    void fn_802D1A00(void *, void *);
    void fn_802D20E8(void *);

    M2C_FIELD(self, u8 **, 0x28) = lbl_80419270;
    fn_802D1A00(fn_802D0AB8(), M2C_FIELD(self, void **, 0x18));
    fn_802D1A00(fn_802D0AB8(), M2C_FIELD(self, void **, 0x1C));
    fn_802D1A00(fn_802D0AB8(), M2C_FIELD(self, void **, 0x20));
    fn_802D1A00(fn_802D0AB8(), M2C_FIELD(self, void **, 0x24));
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern s32 lbl_80494DB0;
void fn_802C54FC(void (*cb)(void)) {
    lbl_80494DB0 = cb;
}

void *fn_802C5B1C(void *self, void *stream) {
    extern void fn_802D3E40(void *);
    extern void fn_802D41A8(void *, char *);
    char buf[64];
    char *vt;
    s32 i;
    i = 0;
    fn_802D3E40(stream);
    for (;;) {
        vt = M2C_FIELD(self, char **, 0x28);
        (*(void (**)(void *, char *, s32))(vt + 0x1C))((char *)self + *(s16 *)(vt + 0x18), buf + i, 1);
        if (buf[i] == 0) {
            break;
        }
        i++;
        if (i == 0x3F) {
            buf[63] = 0;
            fn_802D41A8(stream, buf);
            i = 0;
        }
    }
    fn_802D41A8(stream, buf);
    return self;
}

void *fn_802C5BBC(void *arg0, void *arg1) {
    void *vt;
    void *obj;
    s16 val;

    vt = M2C_FIELD(arg1, void **, 0x0);
    obj = M2C_FIELD(vt, void *(**)(void *), 0x14)((char *)arg1 + M2C_FIELD(vt, s16 *, 0x10));
    vt = M2C_FIELD(arg0, void **, 0x28);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x1C)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x18), &val, 2);
    M2C_FIELD(obj, s16 *, 0x16) = val;
    if (M2C_FIELD(obj, void **, 0x18) == 0) {
        vt = M2C_FIELD(arg1, void **, 0x0);
        M2C_FIELD(vt, void (**)(void *, void *), 0x4C)((char *)arg1 + M2C_FIELD(vt, s16 *, 0x48), arg0);
    }
    return arg0;
}

void *fn_802C5C58(void *arg0, s32 *arg1) {
    s32 fn_802C5954(void *, s32);
    void *vt;
    s32 idx;

    vt = M2C_FIELD(arg0, void **, 0x28);
    M2C_FIELD(vt, void (**)(void *, void *, s32), 0x1C)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x18), &idx, 4);
    if (idx != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x0) != 0) {
            *arg1 = M2C_FIELD(arg0, s32 **, 0x4)[idx - 1];
        } else {
            *arg1 = fn_802C5954(arg0, idx);
        }
    } else {
        *arg1 = idx;
    }
    return arg0;
}

s32 fn_802C5CEC(void) {
    return 0;
}

s32 fn_802C5CF4(s32 *self) {
    return self[2];
}

s32 fn_802C5CFC(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_802C5D04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_802C5D0C(s32 *self) {
    return self[6];
}

s32 fn_802C5D14(s32 *self) {
    return self[7];
}

s32 fn_802C5D1C(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802C5D24(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_802C5D2C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void fn_802C5D34(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

void fn_802C5D3C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

void fn_802C5D44(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void *fn_802C5D4C(u8 *self) {
    extern u8 lbl_80419328[];
    extern u8 lbl_804192D0[];
    extern void fn_802C7B28(void *, s32);
    extern void fn_803B90DC(void *);
    *(u8 **)(self + 0x0) = lbl_80419328;
    fn_802C7B28(self, 3);
    *(u8 **)(self + 0x0) = lbl_804192D0;
    fn_803B90DC(self + 4);
    *(s32 *)(self + 0x14) = 0;
    *(s32 *)(self + 0x18) = 4;
    *(s32 *)(self + 0x1C) = 4;
    *(s32 *)(self + 0x20) = 4;
    return self;
}

void fn_802C5DB8(u8 *self, s32 flags) {
    extern s32 lbl_80494DBC;
    extern u8 lbl_804192D0[];
    extern u8 lbl_80419328[];
    void fn_802C7C90(void);
    void fn_803B9174(void *, s32);
    void fn_803B9594(void *);
    void fn_802D20E8(void *);
    s32 v = lbl_80494DBC;
    *(u8 **)self = lbl_804192D0;
    if (v == 0) {
        fn_802C7C90();
    }
    fn_803B9174(self + 4, 2);
    *(u8 **)self = lbl_80419328;
    fn_803B9594(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802C5E30(s32 arg0) {
    M2C_UNK fn_803B9128(s32);
    fn_803B9128(arg0 + 4);
}

void *fn_802C5E54(void *self) {
    void *fn_80248488(void *, s32, u32);
    fn_80248488(self, 0, 4);
    return self;
}

void *fn_802C5E8C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5) {
    M2C_UNK fn_80248A10(void *, u8 *, M2C_UNK);
    u8 *var_r4;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    var_r4 = arg5;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x13) = 0;
    if (var_r4 != NULL) {
        if ((s32) *var_r4 == 0x2E) {
            var_r4 += 1;
        }
        fn_80248A10(arg0 + 0x10, var_r4, 3);
        M2C_FIELD(arg0, s8 *, 0x13) = 0;
    }
    return arg0;
}

s32 fn_802C5F04(void *p, u8 *q) {
    s32 *a = p;
    s32 *b = (s32 *)q;
    return a[0] == b[0] && a[1] == b[1] && a[2] == b[2] && a[3] == b[3] && a[4] == b[4];
}

s32 fn_802C5F64(void *self, s32 a, s32 b, s32 c) {
    if (a == b) {
        return c;
    }
    if (a == (s32)0x80000000) {
        return 0;
    }
    return 0x80000000;
}

s32 fn_802C605C(s32 *self) {
    return *self;
}

void fn_802C63E8(void *self, void **p) {
    char *obj = (char *)*p;
    char *vt = *(char **)(obj + 0x28);
    (*(void (**)(void *))(vt + 0x14))(obj + *(s16 *)(vt + 0x10));
    *p = 0;
}

s32 fn_802C6434(void *arg0, s32 arg1) {
    M2C_UNK fn_802C7B54();
    extern s32 lbl_80494DB8;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        if ((s32) lbl_80494DB8 == 0) {
            fn_802C7B54();
        }
        M2C_FIELD(arg0, s32 *, 0x10) = arg1;
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
        return 1;
    }
    return 0;
}

s32 fn_802C6494(void) {
    return 1;
}

s32 fn_802C649C(void) {
    return 0;
}

s32 fn_802C64A4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) == 11;
}

s32 fn_802C64B8(s32 *self) {
    return self[6];
}

s32 fn_802C64C0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C) == 11;
}

s32 fn_802C64D4(s32 *self) {
    return self[7];
}

s32 fn_802C64DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20) == 11;
}

s32 fn_802C64F0(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802C64F8(void) {
    return 0;
}

s32 fn_802C6500(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_802C6508(u8 *self, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5) {
    s32 fn_802C5F04(void *, u8 *);
    void fn_803B9520(void *, void *);
    u8 entry[0x14];
    s32 i;

    fn_802C5E8C(entry, (s32)arg5, arg1, arg2, arg3, (u8 *)arg4);
    for (i = 0; i < ListCount(self + 4); i++) {
        if (fn_802C5F04(entry, *(u8 **)(self + 4) + i * 0x14) != 0) {
            return 1;
        }
    }
    fn_803B9520(self + 4, entry);
    return 1;
}

s32 fn_802C65B4(s32 arg0, s32 arg1, s32 *arg2) {
    s32 fn_80248640(s32, s32);
    s32 flags;

    flags = 0;
    if (fn_80248640(arg1, 'r') != 0) {
        flags = 1;
    }
    if (fn_80248640(arg1, 'w') != 0) {
        flags |= 0x10002;
    }
    if (fn_80248640(arg1, 'a') != 0) {
        flags |= 6;
    }
    if (fn_80248640(arg1, '+') != 0) {
        flags |= 3;
    }
    *arg2 = flags;
    return 1;
}

void fn_802C6650(s32 arg0, s32 arg1) {
    extern u8 lbl_804448E8[];
    void fn_802D7E20(void *);
    void fn_802D7E5C(void *, s32);

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_802D7E20(lbl_804448E8);
        } else {
            fn_802D7E5C(lbl_804448E8, 2);
        }
    }
}

void fn_802C66A4(void) {
    void fn_802C6650(s32, s32);
    fn_802C6650(1, 0xFFFF);
}

void fn_802C66D0(void) {
    fn_802C6650(0, 0xFFFF);
}

