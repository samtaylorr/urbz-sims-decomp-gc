/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

static inline char *SeqVec_End(char **v) {
    return v[1];
}

static inline void SeqPair_Clear(s32 *p) {
    p[1] = 0;
}

static inline void SeqRes_Init(void *self) {
    M2C_FIELD(self, s32 *, 4) = 0;
    M2C_FIELD(self, s32 *, 8) = 0;
    SeqPair_Clear((s32 *)((char *)self + 0xC));
    M2C_FIELD(self, s32 *, 0x14) = 0;
    SeqPair_Clear((s32 *)((char *)self + 0x14));
    SeqPair_Clear((s32 *)((char *)self + 0x1C));
    M2C_FIELD(self, s32 *, 0) = 0;
}

void fn_800F687C(void *, void *, s32);

typedef struct SeqStr {
    char *cur;
    s32 len;
    char buf[0x108];
} SeqStr;

typedef struct SeqStr8 {
    char *cur;
    s32 len;
    char buf[8];
} SeqStr8;

static inline SeqStr *SeqStr_Init(SeqStr *s) {
    fn_800F687C(s, s->buf, 0x104);
    return s;
}

static inline SeqStr8 *SeqStr8_Init(SeqStr8 *s) {
    fn_800F687C(s, s->buf, 8);
    return s;
}

static inline void *SeqStr_InitBuf(void *s, char *data, s32 n) {
    fn_800F687C(s, data, n);
    return s;
}

static inline void *SeqStr8_InitBuf(void *s, char *data) {
    fn_800F687C(s, data, 8);
    return s;
}

static inline void *SeqStr_InitBuf104(void *s, char *data) {
    fn_800F687C(s, data, 0x104);
    return s;
}

s32 fn_80197E68(void *arg0, void *arg1, void *arg2, s32 arg3);

static inline s32 SeqRes_Load(void *self, void *obj, void *name, s32 i, s32 *err) {
    return fn_80197E68(self, obj, name, i);
}

extern s32 lbl_80495D10;
extern void fn_800F1A60(s32, s32);
void fn_80197AC8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
}

void fn_80197AD4(void *arg0, s32 arg1, s32 arg2) {
    void fn_800F68F0(void *, s32, s32);
    void fn_800F6A38(void *, void *);
    typedef struct {
        s32 type;
        char name[0x10];
    } SeqEntry;
    SeqEntry *e;
    s32 i;
    SeqStr8 buf;
    SeqStr8 *q;
    void *b;

    i = 0;
    e = (SeqEntry *)((char *)arg0 + 0xD4);
    while (e[i].type != 0) {
        i++;
    }
    if (i > 7 || arg1 > 4 || arg1 < 0) {
        return;
    }
    e = (SeqEntry *)((char *)arg0 + 0xD4);
    q = &buf;
    e[i].type = arg1;
    b = SeqStr_InitBuf(q, q->buf, 8);
    fn_800F68F0(b, arg2, -1);
    fn_800F6A38(((SeqEntry *)((char *)arg0 + 0xD4))[i].name, b);
    i++;
    e[i].type = 0;
}

void fn_80197B90(void *arg0, s32 arg1) {
    s32 fn_80102D70(void *);
    void *fn_80102DAC(void *, s16);
    void fn_80102CA0(void *, void *);
    void fn_80102BC8(void *, s32);
    extern s32 lbl_80414248[];
    s32 i;
    void *obj;
    char *vt;

    M2C_FIELD(arg0, s32 **, 0x10) = lbl_80414248;
    for (i = fn_80102D70(arg0) - 1; i >= 0; i--) {
        obj = fn_80102DAC(arg0, i);
        fn_80102CA0(arg0, obj);
        if (obj != NULL) {
            vt = M2C_FIELD(obj, char **, 0x10);
            M2C_FIELD(vt, void (**)(void *, s32), 0xC)((char *)obj + M2C_FIELD(vt, s16 *, 0x8), 3);
        }
    }
    fn_80102BC8(arg0, arg1);
}

s32 fn_80197E68(void *arg0, void *arg1, void *arg2, s32 arg3) {
    void fn_800F6A38(void *, void *);
    s32 fn_80197990(void *, void *);
    s32 ret = -0xFA;
    s32 r;
    char *vt;
    SeqStr buf;
    SeqStr *s;

    if (arg1 != NULL) {
        s = SeqStr_Init(&buf);
        r = -0xFA;
        fn_800F6A38(s, arg2);
        if (fn_80197990(s, (char *)arg0 + (arg3 * 0x14 + 0xD4)) != 0) {
            vt = M2C_FIELD(arg1, char **, 0x10);
            r = M2C_FIELD(vt, s32 (**)(void *, void *), 0x24)((char *)arg1 + M2C_FIELD(vt, s16 *, 0x20), s);
        }
        if (r != 0) {
            ret = r;
        }
        vt = M2C_FIELD(arg1, char **, 0x10);
        M2C_FIELD(vt, void (**)(void *, s32), 0xC)((char *)arg1 + M2C_FIELD(vt, s16 *, 0x8), 3);
    }
    if (ret == -0x5E || ret == -0x2D) {
        return ret;
    }
    return ret;
}

s32 fn_801980C8(void *arg0, void *arg1) {
    void *fn_802D1FC8(s32);
    void *fn_80113378(void *);
    extern s32 lbl_8040EE08[];
    extern s32 lbl_8040EE20[];
    typedef struct {
        s32 type;
        char name[0x10];
    } SeqEntry;
    s32 err = 0;
    s32 ret = -0xFA;
    s32 i = 0;
    void *obj;

    while (((SeqEntry *)((char *)arg0 + 0xD4))[i].type != 0) {
        obj = NULL;
        switch (((SeqEntry *)((char *)arg0 + 0xD4))[i].type) {
        case 2:
            obj = fn_80113378(fn_802D1FC8(0x154));
            break;
        case 3:
            obj = fn_802D1FC8(0x154);
            fn_80113378(obj);
            M2C_FIELD(obj, s32 **, 0x138) = lbl_8040EE08;
            M2C_FIELD(obj, s32 **, 0x10) = lbl_8040EE20;
            break;
        }
        ret = fn_80197E68(arg0, obj, arg1, i++);
    }
    if (err != 0) {
        return 0;
    }
    return ret;
}

s32 fn_80198314(void *arg0) {
    s32 fn_80102E0C(void *);
    void *fn_80102DAC(void *, s32);
    void fn_80102CA0(void *, void *);
    s32 fn_80102D70(void *);
    s32 ret;
    void *obj;
    char *vt;

    ret = fn_80102E0C(arg0);
    while (fn_80102D70(arg0) != 0) {
        obj = fn_80102DAC(arg0, 0);
        fn_80102CA0(arg0, obj);
        if (obj != NULL) {
            vt = M2C_FIELD(obj, char **, 0x10);
            M2C_FIELD(vt, void (**)(void *, s32), 0xC)((char *)obj + M2C_FIELD(vt, s16 *, 0x8), 3);
        }
    }
    return ret;
}

void fn_8019839C(void *arg0, s32 arg1) {
    void *fn_80102DAC(void *, s32);
    void fn_800F5A4C(void *, s32, void *);
    SeqStr a;
    SeqStr b;
    SeqStr *q;
    void *obj;

    {
        char *vt = M2C_FIELD(arg0, char **, 0x10);
        if (M2C_FIELD(vt, s32 (**)(void *), 0x64)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x60)) == 0) {
            return;
        }
    }
    q = &a;
    SeqStr_InitBuf104(q, q->buf);
    SeqStr_InitBuf104(&b, b.buf);
    obj = fn_80102DAC(arg0, 0);
    {
        char *vt = M2C_FIELD(obj, char **, 0x10);
        M2C_FIELD(vt, void (**)(void *, void *), 0x5C)((char *)obj + M2C_FIELD(vt, s16 *, 0x58), q);
    }
    fn_800F5A4C(q, arg1, &b);
}

void *fn_80198444(void *arg0) {
    void fn_80102B5C(void *);
    void fn_800F68F0(void *, s32, s32);
    void fn_800F6A38(void *, void *);
    extern s32 lbl_80414248[];
    typedef struct { u8 hdr[8]; u8 data[8]; } Str8;
    s32 i;
    char *p;
    void *b;
    Str8 s;

    i = 8;
    p = (char *)arg0 + 0xD4;
    fn_80102B5C(arg0);
    M2C_FIELD(arg0, s32 **, 0x10) = lbl_80414248;
    do {
        SeqStr8_Init((SeqStr8 *)(p + 4));
        p += 0x14;
    } while (--i != -1);
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    b = SeqStr8_InitBuf(&s, (char *)s.data);
    fn_800F68F0(b, 0, -1);
    fn_800F6A38((char *)arg0 + 0xD8, b);
    return arg0;
}

s32 fn_801984E0(s32 arg0, s32 arg1) {
    s32 var_r0;

    if (arg1 == 0xE) {
        return arg0;
    }
    if (arg1 == 0xF) {
        return arg0;
    }
    var_r0 = 0;
    if (arg1 == 0x10) {
        var_r0 = arg0;
    }
    return var_r0;
}

void fn_8019882C(void) {
    fn_800F1A60((s32)&lbl_80495D10, 2);
}

extern f32 lbl_803DB288[];
void *fn_80198854(void *arg0, s32 arg1) {
    s32 fn_8016CCE0(s32);
    f32 *self = arg0;
    char **p = (char **)arg1;
    if (p == NULL) {
        f32 z;
        *(s32 *)self = 0;
        z = lbl_803DB288[0];
        self[1] = z;
        self[2] = z;
        self[3] = z;
        self[4] = z;
        self[5] = z;
        self[6] = z;
        self[7] = z;
        self[8] = z;
        self[9] = z;
    } else {
        f32 *m;
        {
            char *o = *p;
            char *vt = *(char **)(o + 4);
            *(s32 *)self = fn_8016CCE0((*(s32 (**)(void *))(vt + 0x32C))(o + *(s16 *)(vt + 0x328)));
        }
        {
            char *vt = p[1];
            m = (*(f32 *(**)(void *))(vt + 0x1FC))((char *)p + *(s16 *)(vt + 0x1F8));
        }
        self[1] = m[3];
        self[2] = m[5];
        self[3] = m[6];
        self[4] = m[7];
        self[5] = m[8];
        self[6] = m[9];
        self[7] = m[13];
        self[8] = m[14];
        self[9] = m[15];
    }
    return self;
}

void fn_80198940(f32 *self, s32 arg1) {
    f32 tmp[10];
    fn_80198854(tmp, arg1);
    self[1] = tmp[1] - self[1];
    self[2] = tmp[2] - self[2];
    self[3] = tmp[3] - self[3];
    self[4] = tmp[4] - self[4];
    self[5] = tmp[5] - self[5];
    self[6] = tmp[6] - self[6];
    self[7] = tmp[7] - self[7];
    self[8] = tmp[8] - self[8];
    self[9] = tmp[9] - self[9];
}

void *fn_80198A08(void *arg0) {
    fn_80198854(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    return arg0;
}

s32 fn_80198DFC(void *arg0, void *arg1) {
    void *fn_80117474(void *);
    s32 fn_8016CC44(s32);
    s32 fn_8016CCE0(s32);
    void *obj;
    char *vt;
    s32 a;
    s32 b;
    s32 c;

    a = 0;
    obj = fn_80117474(arg1);
    b = 0;
    c = -1;
    if (obj != NULL) {
        vt = M2C_FIELD(obj, char **, 4);
        a = fn_8016CCE0(fn_8016CC44(M2C_FIELD(vt, s32 (**)(void *), 0x32C)((char *)obj + M2C_FIELD(vt, s16 *, 0x328))));
        vt = M2C_FIELD(obj, char **, 4);
        b = M2C_FIELD(vt, s32 (**)(void *), 0x2EC)((char *)obj + M2C_FIELD(vt, s16 *, 0x2E8));
        c = M2C_FIELD(arg1, s32 *, 0x14);
    }
    return a == M2C_FIELD(arg0, s32 *, 8) && b == M2C_FIELD(arg0, s16 *, 0xC) && c == M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80199004(s32 *self, char **obj) {
    s32 fn_8016CCE0(s32);
    s32 id = 0;
    s32 sub = 0;
    if (obj != NULL) {
        char *o = *obj;
        char *vt = *(char **)(o + 4);
        id = fn_8016CCE0((*(s32 (**)(void *))(vt + 0x32C))(o + *(s16 *)(vt + 0x328)));
        o = *obj;
        vt = *(char **)(o + 4);
        sub = (*(s32 (**)(void *))(vt + 0x2EC))(o + *(s16 *)(vt + 0x2E8));
    }
    return id == self[0] && sub == *(s16 *)((char *)self + 4);
}

void fn_801991B4(void) {

}

void fn_801991B8(void) {

}

s32 fn_80199300(s32 *a, s32 *b) {
    s32 x = b[2];
    s32 y = b[4];
    return x == a[0] && y == a[1];
}

void fn_8019964C(void) {
    void *fn_800F5248(void *, char *);
    void fn_80198C5C(void);
    extern char lbl_803DB348[];
    extern char lbl_803DB350[];
    extern s32 lbl_80495A90;
    fn_800F5248(&lbl_80495A90, lbl_803DB348);
    fn_800F5248(&lbl_80495A90, lbl_803DB350);
    fn_80198C5C();
}

void fn_8019968C(void *arg0) {
    char *fn_800F3304(void *);
    void *fn_800F5248(void *, char *);
    void *fn_800F524C(void *, char *);
    void fn_80198A50(char *);
    extern char lbl_803DB28C[];
    extern s32 lbl_80495A90;
    char *it;

    for (it = *(char **)((char *)arg0 + 0x10); it != SeqVec_End((char **)((char *)arg0 + 0x10)); it += 0x3C) {
        fn_800F5248(fn_800F524C(&lbl_80495A90, fn_800F3304((char *)arg0 + 8)), lbl_803DB28C);
        fn_800F5248(fn_800F524C(&lbl_80495A90, fn_800F3304((char *)arg0 + 0xC)), lbl_803DB28C);
        fn_80198A50(it);
    }
}

void *fn_80199720(void *arg0) {
    struct { s32 a, b, c, d; } tmp;
    SeqRes_Init(arg0);
    return arg0;
}

void fn_80199EB8(s32 *self) {
    self[0] = 1;
}

void fn_80199FF8(s32 arg0, s32 arg1) {
    extern u8 lbl_804353F4[];
    void *fn_80199720(void *);
    void fn_803AA8B0(void *, s32);
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_80199720(lbl_804353F4);
        } else {
            fn_803AA8B0(lbl_804353F4, 2);
        }
    }
}

void fn_80199FF8(s32 arg0, s32 arg1);

void fn_8019A04C(void) {
    fn_80199FF8(1, 0xFFFF);
}

extern u8 lbl_804353F4[];
void fn_8019A078(void) {
    fn_80199FF8(0, 0xFFFF);
}

