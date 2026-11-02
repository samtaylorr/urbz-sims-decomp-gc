/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    u8 pad0[0x14];
    void *unk14;
    u8 pad18[0x2C - 0x18];
    s32 unk2C[1];
} EIWallPartFlags;

typedef struct ERQdLookup {
    u8 pad0[0x20];
    u32 *unk20;
    struct ERQdLookup *unk24;
    u8 pad28[0x34 - 0x28];
    s32 unk34[2];
    u32 unk3C;
    u8 pad40[4];
    s32 *unk44;
    u8 pad48[0x64 - 0x48];
    u32 unk64;
} ERQdLookup;

typedef struct {
    s32 unk0;
    u32 unk4;
    s32 unk8;
    s32 unkC;
    u32 unk10;
} ERQdEntry;

typedef struct {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x18 - 0xC];
    ERQdEntry entries[1];
} ERQdTable;

void fn_802D2FD0(void);
extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void *fn_802D197C(void *heap, u32 size, s32 align);
extern void *fn_802DBBCC(void *heap, u32 size, s32 align);
extern void *fn_802D0B3C(void);
void *fn_8032D280(u32 size);
void fn_8032D098(void **self, s32 flags) {
    extern u8 lbl_8041B9B0[];
    extern char *lbl_80495050;
    extern void fn_8031E910(void *, s32);
    s32 res;

    *self = lbl_8041B9B0;
    res = M2C_FIELD(self, s32 *, 0x30);
    if (res != 0) {
        char *obj = lbl_80495050;
        char *vt = *(char **)obj;
        (*(void (**)(void *, s32))(vt + 0xDC))(obj + *(s16 *)(vt + 0xD8), res);
        M2C_FIELD(self, s32 *, 0x30) = 0;
    }
    fn_8031E910(self, 0);
    if (flags & 1) {
        fn_802D1A00(((void *(*)(void))fn_802D0AB8)(), self);
    }
}

void fn_8032D124(void *self) {
    char *obj = M2C_FIELD(self, char **, 0x30);
    if (obj != NULL) {
        char *vt = M2C_FIELD(obj, char **, 8);
        (*(void (**)(void *))(vt + 0x14))(obj + *(s16 *)(vt + 0x10));
    }
}

void fn_8032D164(void *self) {
    char *obj = M2C_FIELD(self, char **, 0x30);
    if (obj != NULL) {
        char *vt = M2C_FIELD(obj, char **, 8);
        (*(void (**)(void *))(vt + 0x1C))(obj + *(s16 *)(vt + 0x18));
    }
}

void fn_8032D1A4(void *self) {
    char *obj = M2C_FIELD(self, char **, 0x30);
    if (obj != NULL) {
        char *vt = M2C_FIELD(obj, char **, 8);
        (*(void (**)(void *))(vt + 0x24))(obj + *(s16 *)(vt + 0x20));
    }
}

s32 fn_8032D224(void *arg0) {
    char *obj = M2C_FIELD(arg0, char **, 0x30);
    s32 result = 0;
    if (obj == NULL || (*(s32 (**)(char *))(*(char **)(obj + 8) + 0x2C))(obj + *(s16 *)(*(char **)(obj + 8) + 0x28)) != 0) {
        result = 1;
    }
    return result;
}

void *fn_8032D280(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DBBCC(fn_802D0B3C(), size, 0);
        }
    }
    return p;
}

void fn_8032D310(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void *fn_8032D344(void *arg0) {
    extern void fn_8031E8B0(void *);
    extern u8 lbl_8041BA38[];

    fn_8031E8B0(arg0);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x0) = lbl_8041BA38;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    return arg0;
}

void fn_8032D38C(void **self, s32 flags) {
    extern u8 lbl_8041BA38[];
    extern void fn_8032D3EC(void *);
    extern void fn_8031E910(void *, s32);
    void fn_80338184(void *, s32);
    extern u8 lbl_8045B980[];
    *self = lbl_8041BA38;
    fn_8032D3EC(self);
    fn_8031E910(self, 0);
    if (flags & 1) {
        fn_80338184(lbl_8045B980, (s32)self);
    }
}

void fn_8032D3EC(void *arg0) {
    void fn_8032D440(void *);
    void fn_80338184(void *, s32);
    extern u8 lbl_8045B980[];
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        fn_8032D440(arg0);
    }
    fn_80338184(lbl_8045B980, M2C_FIELD(arg0, s32 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}

void fn_8032D440(void *arg0) {

}

void fn_8032D444(void *arg0) {

}

void fn_8032D448(void *arg0, s32 arg1) {
    extern s32 fn_8032DE08(s32, s32, void *, s32);
    extern s32 lbl_8045BA28[];
    fn_8032D440(arg0);
    fn_8032DE08(arg1, M2C_FIELD(arg0, s32 *, 0x20), (char *)arg0 + 0x24, lbl_8045BA28[0]);
    fn_8032D444(arg0);
}

void *fn_8032D8E0(void *arg0, u32 arg1, u32 *out) {
    s32 fn_8032D7DC(void *, s32, s32, u32);
    s32 idx;
    void *result;
    ERQdTable *tbl;
    u32 step;
    u32 diff;
    u32 q;

    idx = fn_8032D7DC(arg0, 0, M2C_FIELD(arg0, ERQdTable **, 0x20)->unk8 - 1, arg1);
    result = NULL;
    if (idx >= 0) {
        tbl = M2C_FIELD(arg0, ERQdTable **, 0x20);
        step = tbl->entries[idx].unk10;
        if (step == 0) {
            step = 1;
        }
        diff = arg1 - tbl->entries[idx].unk4;
        q = diff / step;
        if (diff == q * step) {
            *out = q;
            result = &tbl->entries[idx];
        }
    }
    return result;
}

s32 fn_8032D97C(void *arg0, u32 arg1, s32 *out) {
    s32 fn_8032D7DC(void *, s32, s32, u32);
    s32 idx;

    idx = fn_8032D7DC(arg0, 0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 8) - 1, arg1);
    if (idx < 0) {
        *out = 0;
        return 0;
    }
    *out = *(s32 *)(M2C_FIELD(arg0, char **, 0x20) + 0x18 + idx * 0x14);
    return 1;
}

s32 fn_8032D9F0(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_r9 != NULL) {
        return M2C_FIELD(temp_r9, s32 *, 0xC);
    }
    return 0;
}

s32 fn_8032DD4C(s32 arg0, s32 arg1) {
    s32 fn_802C6290(void *, s32 *, s32, void *, s32, s32, s32);
    void fn_802C63E8(void *, s32 *);
    s32 fn_8032DDD4(s32, s32);
    extern u8 lbl_804448E8[];
    extern char lbl_803F3438[];
    s32 tmp;
    s32 result;

    tmp = 0;
    result = 0;
    if (fn_802C6290(lbl_804448E8, &tmp, arg0, lbl_803F3438, 0x80000000, 0x80000000, 0) != 0) {
        result = fn_8032DDD4(tmp, arg1);
        fn_802C63E8(lbl_804448E8, &tmp);
    }
    return result;
}

s32 fn_8032DDD4(s32 arg0, s32 arg1) {
    extern s32 fn_8032DE08(s32, s32, void *, s32);
    s32 tmp = 0;
    return fn_8032DE08(arg0, 0, &tmp, arg1);
}

void fn_8032E124(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045B980[];
    fn_80338000(lbl_8045B980, arg0, 4);
}

void fn_8032E154(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045B980[];
    fn_80338184(lbl_8045B980, arg0);
}

s32 fn_8032E180(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_8032E188(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

void fn_8032E190(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8032E1B0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8032E1F0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8032F0BC(s8 arg0) {
    extern s8 lbl_80494F50;
    lbl_80494F50 = arg0;
}

void fn_8032F5A0(void);
void fn_8033031C(void) {
    fn_8032F5A0();
}

s32 fn_80330F38(ERQdLookup *self, s32 id) {
    if (self->unk64 & 2) {
        return fn_80330F38(self->unk24, id);
    }
    if (self->unk20[1] & 0x4000000) {
        u32 i;
        for (i = 0; i < self->unk3C; i++) {
            if (self->unk44[i] == id) {
                return 1;
            }
        }
    } else {
        s32 i;
        for (i = 0; i < 2; i++) {
            if (self->unk34[i] == id) {
                return 1;
            }
        }
    }
    return 0;
}

void fn_80330FC4(s32 arg0, s32 arg1) {
    extern s32 lbl_8049624C[2];
    extern s32 lbl_80496254;
    extern u8 lbl_8045AA90[];
    extern u8 lbl_80493970[];
    extern u8 lbl_803F34C0[];
    extern u8 lbl_80493858[];
    void fn_80331064(void);
    void fn_8033108C(void *);
    void fn_803310B8(void *);
    s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
    void fn_802CA9A8(void *);
    void fn_802CAA00(void *, s32);
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            s32 *p = lbl_8049624C;
            s32 zero = 0;
            p[1] = zero;
            p[0] = zero;
            fn_802CA9A8(lbl_8045AA90);
            lbl_80496254 = fn_802D6A90(lbl_80493970, fn_80331064, fn_8033108C, fn_803310B8, 2, lbl_803F34C0, lbl_80493858);
        } else {
            fn_802CAA00(lbl_8045AA90, 2);
        }
    }
}

void fn_80331064(void) {
    M2C_UNK fn_8032E230();
    M2C_UNK fn_803311D8(M2C_UNK);
    fn_803311D8(0x78);
    fn_8032E230();
}

void fn_8033108C(void *self) {
    void fn_8032E230(void *);
    void *fn_80331208(u32 size, void *p);
    fn_8032E230(fn_80331208(0x78, self));
}

void fn_803310B8(void *self) {
    extern void fn_8032E2F4(void *, s32);
    fn_8032E2F4(self, 2);
}

void fn_803310DC(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493970[];
void *fn_8033111C(void) {
    return lbl_80493970;
}

extern s32 lbl_8049397C[];
s32 fn_80331128(void) {
    return lbl_8049397C[0];
}

extern s32 lbl_80493980[];
s32 fn_80331134(void) {
    return lbl_80493980[0];
}

extern u16 lbl_80493984[];
u16 fn_80331140(void) {
    return lbl_80493984[0];
}

void *fn_8033114C(void) {
    return lbl_80493970;
}

extern u16 lbl_80493986[];
u16 fn_80331158(void) {
    return lbl_80493986[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80331064(void);
extern void fn_8033108C(void *);
extern void fn_803310B8(void *);
extern u8 lbl_803F34C0[];
extern u8 lbl_80493858[];
void fn_80331164(s32 arg0) {
    fn_802D6A90(lbl_80493970, fn_80331064, fn_8033108C, fn_803310B8, arg0, lbl_803F34C0, lbl_80493858);
}

void fn_802D2430(void);
void fn_803311B8(void) {
    fn_802D2430();
}

void fn_803311D8(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BA40[];
    fn_80338000(lbl_8045BA40, arg0, 4);
}

void *fn_80331208(u32 size, void *p);
void *fn_80331208(u32 size, void *p) {
    return p;
}

void fn_80331210(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BA40[];
    fn_80338184(lbl_8045BA40, arg0);
}

s32 fn_8033123C(u8 *self) {
    return *(s32 *)(self + 0x20);
}

void fn_80331244(void *arg0, s32 arg1) {
    s32 temp_r0;
    void *temp_r9;
    void *temp_r9_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_r0 & 2) {
        if (arg1 != 0) {
            temp_r9 = M2C_FIELD(arg0, void **, 0x24);
            M2C_FIELD(temp_r9, s32 *, 0x64) = (s32) (M2C_FIELD(temp_r9, s32 *, 0x64) | 0x80);
            return;
        }
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x24);
        M2C_FIELD(temp_r9_2, s32 *, 0x64) = (s32) (M2C_FIELD(temp_r9_2, s32 *, 0x64) & 0xFFFFFF7F);
        return;
    }
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = (s32) (temp_r0 | 0x80);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (temp_r0 & 0xFFFFFF7F);
}

s32 fn_803312A0(void *arg0) {
    u32 flags = M2C_FIELD(arg0, u32 *, 0x64);
    if (flags & 2) {
        return (M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u32 *, 0x64) >> 7) & 1;
    }
    return (flags >> 7) & 1;
}

s32 fn_803312C8(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x64) >> 5U) & 1;
}

s32 fn_803312D4(EIWallPartFlags *self, s32 i) {
    return self->unk2C[i];
}

s32 fn_803312E4(void *arg0) {
    if (M2C_FIELD(arg0, u32 *, 0x64) & 2) {
        return M2C_FIELD(arg0, s32 *, 0x24);
    }
    return 0;
}

s32 fn_80331300(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48) == 2;
}

u8 fn_80331314(void *arg0) {
    if (!(M2C_FIELD(arg0, u32 *, 0x64) & 2)) {
        return 0;
    }
    return M2C_FIELD(arg0, u8 *, 0x50);
}

u8 fn_80331330(void *arg0, u32 arg1) {
    if (!(M2C_FIELD(arg0, u32 *, 0x64) & 2)) {
        return 0;
    }
    return (M2C_FIELD(arg0, u8 *, 0x50) > arg1) ? M2C_FIELD(arg0, u8 **, 0x54)[arg1] : 0;
}

u8 fn_80331364(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5C);
}

s32 fn_8033136C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x64) >> 2U) & 1;
}

u8 fn_80331378(void *arg0) {
    return (u8) ((M2C_FIELD(arg0, u8 *, 0x72) * 4) + (M2C_FIELD(arg0, u8 *, 0x73) / 15));
}

void fn_803313A0(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x20);
    u8 *vt = *(u8 **)(obj + 0xF0);
    (*(void (**)(void *))(vt + 0x14))(obj + *(s16 *)(vt + 0x10));
}

void fn_803313D8(void *self) {
    u8 *obj = *(u8 **)((u8 *)self + 0x20);
    u8 *vt = *(u8 **)(obj + 0xF0);
    (*(void (**)(void *))(vt + 0x1C))(obj + *(s16 *)(vt + 0x18));
}

s32 fn_80331410(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x20);
    return ((u32) (M2C_FIELD(temp_r9, s32 *, 0x74) | M2C_FIELD(temp_r9, s32 *, 0xB4)) >> 5U) & 1;
}

s32 fn_80331428(u8 *self, s32 idx) {
    struct { u8 pad[0x40]; s32 a[4]; } *p = *(void **)(self + 0x20);
    return p->a[idx];
}

void fn_8033143C(void) {
    void fn_80330FC4(s32, s32);
    fn_80330FC4(1, 0xFFFF);
}

void fn_80331468(void) {
    fn_80330FC4(0, 0xFFFF);
}

