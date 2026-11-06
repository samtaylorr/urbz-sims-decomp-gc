/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct cXPersonImpl_Entry {
    void *unk0;
    s32 unk4;
    s32 unk8;
} cXPersonImpl_Entry;

typedef struct cXPersonImpl_EntryVec {
    cXPersonImpl_Entry *begin;
    cXPersonImpl_Entry *end;
} cXPersonImpl_EntryVec;

static inline s32 cXPersonImpl_EntryVec_Size(cXPersonImpl_EntryVec *v) {
    return v->end - v->begin;
}

static inline cXPersonImpl_Entry *cXPersonImpl_EntryVec_At(cXPersonImpl_EntryVec *v, s32 i) {
    return &v->begin[i];
}

typedef struct cXPersonImpl_Res {
    u8 pad[0x10];
    s32 unk10;
} cXPersonImpl_Res;

typedef struct cXPersonImpl_ResVec {
    cXPersonImpl_Res *data;
    s32 count;
} cXPersonImpl_ResVec;

extern s32 lbl_803F6780[];
void fn_80186224(void *, s32);

static inline s32 cXPersonImpl_ResVec_Size(cXPersonImpl_ResVec *v) {
    return v->count;
}

static inline cXPersonImpl_Res *cXPersonImpl_ResVec_At(cXPersonImpl_ResVec *v, s32 i) {
    return &v->data[i];
}

extern s32 lbl_804944B0;
void fn_801181F8(void *, s32, s32);

static inline void cXPersonImpl_ResVec_Setup(cXPersonImpl_ResVec *v, s32 line) {
    cXPersonImpl_Res *r;
    s32 i;
    for (i = 0; i < v->count; i++) {
        fn_80186224(&v->data[i], 8);
        r = &v->data[i];
        r->unk10 = lbl_803F6780[i];
    }
    fn_801181F8(v, lbl_804944B0, line);
}

static inline void cXPersonImpl_ResVec_Init(s32 i, cXPersonImpl_ResVec *v, s32 line) {
    cXPersonImpl_Res *r;
    for (; i < v->count; i++) {
        fn_80186224(&v->data[i], 8);
        r = &v->data[i];
        r->unk10 = lbl_803F6780[i];
    }
    fn_801181F8(v, lbl_804944B0, line);
}

extern s32 lbl_80495C94;
extern void fn_800F1A60(s32, s32);
void fn_80176558(void) {
    fn_800F1A60((s32)&lbl_80495C94, 2);
}

s32 fn_8017699C(void *arg0, u32 arg1) {
    s32 fn_80176904(void *, void *);
    void *e;

    while (arg1 < (u32)(M2C_FIELD(arg0, s32 *, 0x374) - M2C_FIELD(arg0, s32 *, 0x370))) {
        e = arg0 + (((M2C_FIELD(arg0, u32 *, 0x370) + arg1) % 10U) * 0x58);
        if (fn_80176904(arg0, e) != 0) {
            return M2C_FIELD(e, s32 *, 0x40);
        }
        arg1++;
    }
    return 0;
}

s32 fn_80176A3C(void *arg0, u32 arg1) {
    M2C_UNK fn_80176690(void *, u32);
    M2C_UNK fn_80176778(void *, u32);
    s32 fn_80176904(void *, void *);
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x370);
    if (arg1 >= (u32) (M2C_FIELD(arg0, s32 *, 0x374) - temp_r4)) {
        return 0;
    }
    if (fn_80176904(arg0, arg0 + (((temp_r4 + arg1) % 10) * 0x58)) == 0) {
        fn_80176778(arg0, arg1);
    } else {
        fn_80176690(arg0, arg1);
    }
    return 1;
}

void fn_80176D9C(void *arg0, s32 arg1) {
    M2C_UNK fn_80176AD8(void *, s32, s32);
    fn_80176AD8(arg0, arg1, M2C_FIELD(arg0, s32 *, 0x374) - M2C_FIELD(arg0, s32 *, 0x370));
}

void fn_80176DCC(void *arg0, s32 arg1) {
    extern void *lbl_8041F774[];
    M2C_UNK fn_801F983C(void *, u8);
    if (M2C_FIELD(arg0, u8 *, 0x378) == 0) {
        if (lbl_8041F774[0] != NULL) {
            fn_801F983C(lbl_8041F774[0], M2C_FIELD(arg0, u8 *, 0x379));
        }
        M2C_FIELD(arg0, u8 *, 0x378) = 1;
        M2C_FIELD(arg0, u8 *, 0x379) = 0xFF;
    }
}

void fn_80176E28(void *arg0, s32 arg1) {
    extern void *lbl_8041F754[];
    M2C_UNK fn_801F983C(void *, u8);
    s32 fn_801F9038(void *, u8);
    M2C_UNK fn_80176690(void *, u32);
    u32 i;

    if (M2C_FIELD(arg0, u8 *, 0x378) != 0) {
        if (lbl_8041F754[8] != NULL) {
            if (fn_801F9038(lbl_8041F754[8], arg1) != 0) {
                M2C_FIELD(arg0, u8 *, 0x379) = arg1;
                M2C_FIELD(arg0, u8 *, 0x378) = 0;
                fn_801F983C(lbl_8041F754[8], arg1);
                for (i = 0; i < (u32) (M2C_FIELD(arg0, s32 *, 0x374) - M2C_FIELD(arg0, s32 *, 0x370)); i++) {
                    fn_80176690(arg0, i);
                }
            }
        }
    }
}

void fn_80176ED8(void) {
    extern s32 lbl_80494518;
    extern u8 lbl_80435198[];
    extern u8 lbl_8043522C[];
    s32 i;

    if (lbl_80494518 == 0) {
        {
            cXPersonImpl_ResVec *v = (cXPersonImpl_ResVec *)lbl_80435198;
            for (i = 0; i < v->count; i++) {
                fn_80186224(&v->data[i], 8);
                cXPersonImpl_ResVec_At(v, i)->unk10 = lbl_803F6780[i];
            }
            fn_801181F8(v, lbl_804944B0, 0x1f6);
        }
        {
            cXPersonImpl_ResVec *v = (cXPersonImpl_ResVec *)lbl_8043522C;
            for (i = 0; i < v->count; i++) {
                fn_80186224(&v->data[i], 8);
                cXPersonImpl_ResVec_At(v, i)->unk10 = lbl_803F6780[i];
            }
            fn_801181F8(v, lbl_804944B0, 0x1f8);
        }
        lbl_80494518 = 1;
    }
}

void fn_80176FE8(void) {
    extern s32 lbl_80494518;
    extern u8 lbl_80435198[];
    extern u8 lbl_8043522C[];
    s32 i;

    if (lbl_80494518 == 0) {
        {
            cXPersonImpl_ResVec *v = (cXPersonImpl_ResVec *)lbl_80435198;
            for (i = 0; i < v->count; i++) {
                fn_80186224(&v->data[i], 8);
                cXPersonImpl_ResVec_At(v, i)->unk10 = lbl_803F6780[i];
            }
            fn_801181F8(v, lbl_804944B0, 0x1f6);
        }
        {
            cXPersonImpl_ResVec *v = (cXPersonImpl_ResVec *)lbl_8043522C;
            for (i = 0; i < v->count; i++) {
                fn_80186224(&v->data[i], 8);
                cXPersonImpl_ResVec_At(v, i)->unk10 = lbl_803F6780[i];
            }
            fn_801181F8(v, lbl_804944B0, 0x1f8);
        }
        lbl_80494518 = 1;
    }
}

void fn_801770F8(s32 *arg0, void *arg1, void *arg2) {
    void fn_8018D8BC(void *, s32 *, s32);
    void fn_8018DA88(void *, s32 *, s32);
    fn_8018D8BC(arg1, &arg0[0], 1);
    fn_8018DA88(arg1, &arg0[1], 1);
    fn_8018DA88(arg1, &arg0[2], 1);
}

M2C_UNK *fn_80177154(void) {
    extern M2C_UNK lbl_80495CA0;
    return &lbl_80495CA0;
}

void fn_80177470(void *arg0, void *arg1) {
    extern u8 *lbl_80496668;
    void fn_8018D8BC(void *, void *, s32);
    void fn_8018D6D8(void *, void *);
    u8 *obj = lbl_80496668;
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *, void *, void *))(vt + 0x1C4))(obj + *(s16 *)(vt + 0x1C0), arg1, arg0);
    fn_8018D8BC(arg1, arg0 + 4, 1);
    fn_8018D6D8(arg1, arg0 + 8);
}

void fn_801774D8(void *arg0) {
    u8 *obj = M2C_FIELD(arg0, u8 **, 0x4BC);
    u8 *vt = *(u8 **)obj;
    (*(void (**)(void *))(vt + 0x1C))(obj + *(s16 *)(vt + 0x18));
}

void fn_80177510(void *arg0, s32 arg1) {
    void *fn_801170B0(void *);
    void fn_800F3304(void *);
    void *list;
    s32 n;

    n = 0;
    if (M2C_FIELD(arg0, s32 *, 0x5FC) != 0) {
        n = 1;
    }
    list = arg0 + 0x130;
    fn_800F3304(fn_801170B0(list + (((M2C_FIELD(list, u32 *, 0x370) + (arg1 + n)) % 10U) * 0x58)));
}

void fn_8017E10C(void) {
    void fn_802D20E8(void *);
    void fn_803997AC(void *, u32);
    extern u8 lbl_80435188[];
    u8 *p = *(u8 **)lbl_80435188;
    if (p != NULL) {
        u32 size = (*(u32 *)(lbl_80435188 + 0xC) - (u32)p) & ~3;
        if (size > 0x80) {
            fn_802D20E8(p);
        } else {
            fn_803997AC(p, size);
        }
    }
}

s32 fn_8017F6A8(void *arg0) {
    typedef struct { u8 data[0xA4]; } Elem;
    Elem *begin = M2C_FIELD(arg0, Elem **, 0x4D4);
    s32 n = M2C_FIELD(arg0, Elem **, 0x4D8) - begin;

    if (n != 0) {
        n--;
        return (s32)&begin[n];
    }
    return 0;
}

s64 fn_80180E24(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_801362CC(s32, s32 *, s32);
    void *temp_r11;
    void *temp_r9;
    void *temp_r3;
    void *temp_r9_2;

    fn_801362CC(M2C_FIELD(arg0, s32 *, 0), &arg2, 1);
    temp_r11 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r11, void **, 4);
    temp_r3 = M2C_FIELD(temp_r9, void *(**)(void *), 0x14C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x148));
    temp_r9_2 = M2C_FIELD(temp_r3, void **, 0);
    M2C_FIELD(temp_r9_2, void (**)(void *), 0x44)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0x40));
    return 1;
}

s32 fn_80181314(void) {
    return 0x50455253;
}

f32 fn_8018167C(void *self, s32 i) {
    return ((struct { u8 pad[0xA8]; f32 vals[1]; } *)self)->vals[i];
}

void *fn_8018168C(void *arg0, s32 i) {
    return (u8 *)arg0 + (i * 4 + 0xA8);
}

void *fn_8018169C(void *arg0, s32 i) {
    return (u8 *)arg0 + (i * 4 + 0xE8);
}

void fn_801816AC(void *arg0, s32 i, f32 v) {
    struct { u8 pad[0xA8]; f32 a[1]; } *p = arg0;
    p->a[i] = v;
}

void fn_801816BC(void *arg0) {
    M2C_UNK fn_80117E80(void *);
    s16 *fn_80141C5C(s32, M2C_UNK);
    void *temp_r10;
    void *temp_r11;

    if (((s16) M2C_FIELD(arg0, s16 *, 0x42) == 0) && ((s16) *fn_80141C5C(M2C_FIELD(arg0, void **, 0) + 0x28, 0x22) == 0)) {
        temp_r10 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        temp_r11 = M2C_FIELD(temp_r10, void **, 4);
        if (M2C_FIELD(temp_r11, s32 (**)(void *), 0x174)(temp_r10 + M2C_FIELD(temp_r11, s16 *, 0x170)) != 0) {
            fn_80117E80(arg0 + 0xA8);
        }
    }
}

s32 fn_80181A20(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5FC) ^ 1;
}

s32 fn_80181F1C(void *arg0, s32 arg1) {
    u8 *q;
    u8 *e;
    u32 start;
    u32 i;
    start = 0;
    if (M2C_FIELD(arg0, s32 *, 0x5FC) != 0) {
        start = 1;
    }
    q = (u8 *)arg0 + 0x130;
    for (i = start; i < M2C_FIELD(q, u32 *, 0x374) - M2C_FIELD(q, u32 *, 0x370); i++) {
        e = &q[((M2C_FIELD(q, u32 *, 0x370) + i) % 10U) * 0x58];
        if (M2C_FIELD(e, s32 *, 0x28) == arg1) {
            return 1;
        }
    }
    return 0;
}

void *fn_80182168(void *arg0) {
    void *fn_80117474(void *);
    void *list;
    void *ret;
    if (M2C_FIELD(arg0, s32 *, 0x5FC) == 0) {
        ret = 0;
    } else {
        list = arg0 + 0x130;
        ret = fn_80117474(list + ((M2C_FIELD(list, u32 *, 0x370) % 10U) * 0x58));
    }
    return ret;
}

void *fn_801821C4(void *arg0) {
    void *fn_80117484(void *);
    void *list;
    void *ret;
    if (M2C_FIELD(arg0, s32 *, 0x5FC) == 0) {
        ret = 0;
    } else {
        list = arg0 + 0x130;
        ret = fn_80117484(list + ((M2C_FIELD(list, u32 *, 0x370) % 10U) * 0x58));
    }
    return ret;
}

void fn_80182220(void) {

}

s32 fn_801836B8(void *a, void *b) {
    return M2C_FIELD(a, f32 *, 0x8) > M2C_FIELD(b, f32 *, 0x8);
}

void fn_801836D0(char *self) {
    if (({
            char *o = *(char **)(self + 4);
            char *v = *(char **)(o + 0x4);
            (*(s32 (**)(char *))(v + 0x14C))(o + *(s16 *)(v + 0x148));
        }) != 0) {
        char *r = ({
            char *o = *(char **)(self + 4);
            char *v = *(char **)(o + 0x4);
            (*(char *(**)(char *))(v + 0x14C))(o + *(s16 *)(v + 0x148));
        });
        char *vt = *(char **)r;
        (*(void (**)(char *))(vt + 0xCC))(r + *(s16 *)(vt + 0xC8));
    }
}

void fn_80183830(void *arg0) {
    M2C_UNK fn_80134F20(s32);
    void *temp_r11;
    void *temp_r9;

    fn_80134F20(M2C_FIELD(arg0, s32 *, 0));
    temp_r11 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r11, void **, 4);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x16C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x168));
}

void fn_80183DDC(char *self, s32 arg1);
void fn_8013220C(void *, s32);
void fn_80183AEC(char *self, s32 arg1) {
    s32 bits = arg1 & 0x1F;
    if (bits != 0) {
        if ((M2C_FIELD(M2C_FIELD(self, char **, 0), s32 *, 0x84) & 0x1F) == 0) {
            fn_80183DDC(self, 1);
        }
    } else {
        if ((M2C_FIELD(M2C_FIELD(self, char **, 0), s32 *, 0x84) & 0x1F) != 0) {
            fn_80183DDC(self, 0);
        }
    }
    fn_8013220C(M2C_FIELD(self, void **, 0), bits);
}

s32 fn_80183B60(void **arg0) {
    return ((u32) M2C_FIELD(*arg0, u32 *, 0x84) >> 1U) & 1;
}

void fn_80183DDC(char *self, s32 arg1) {
    extern struct { u8 pad[0xD8]; s32 a; s32 b; } lbl_8041F94C;
    extern void fn_80176E28(void *, s32);
    extern void fn_80176DCC(void *, s32);
    s32 x = M2C_FIELD(self, s32 *, 4);
    s32 t = 0;
    if (x != lbl_8041F94C.a) {
        if (x == lbl_8041F94C.b) {
            t = 1;
        } else {
            arg1 = 0;
        }
    }
    if (arg1 != 0) {
        fn_80176E28(self + 0x130, t);
    } else {
        fn_80176DCC(self + 0x130, t);
    }
}

s32 fn_80183E50(void *arg0) {
    extern void *lbl_80496650;
    void *obj;
    void *vt;

    vt = *(void **)lbl_80496650;
    obj = M2C_FIELD(vt, void *(**)(void *), 0x13C)((char *)lbl_80496650 + M2C_FIELD(vt, s16 *, 0x138));
    if (obj != 0) {
        vt = M2C_FIELD(obj, void **, 0);
        return M2C_FIELD(vt, s32 (**)(void *, s32), 0x44)(obj + M2C_FIELD(vt, s16 *, 0x40), M2C_FIELD(arg0, s32 *, 4));
    }
    return 0;
}

void fn_80183EC0(void *arg0) {
    void *obj;
    void *vt;

    obj = M2C_FIELD(arg0, void **, 0x4BC);
    vt = M2C_FIELD(obj, void **, 0);
    M2C_FIELD(vt, void (**)(void *), 0x44)(obj + M2C_FIELD(vt, s16 *, 0x40));
    M2C_FIELD(arg0, s16 *, 0x88) = 0;
}

void fn_80184444(void *arg0, s32 arg1) {
    M2C_UNK fn_80176AD8(void *, s32, s32);
    M2C_UNK fn_80184488(void *);
    M2C_FIELD(arg0, s32 *, 0x5FC) = 1;
    fn_80176AD8(arg0 + 0x130, arg1, 0);
    fn_80184488(arg0);
}

void fn_80184F48(void *arg0) {
    M2C_UNK fn_80176C18(void *, M2C_UNK);
    M2C_UNK fn_80184488(void *);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x5FC) != 0) {
        fn_80176C18(arg0 + 0x130, 0);
        M2C_FIELD(arg0, s32 *, 0x5FC) = 0;
        fn_80184488(arg0);
    }
}

void fn_80184F98(void *arg0) {
    void fn_80185008(void *, void *);
    void *list;
    u32 n;

    n = 0;
    if (M2C_FIELD(arg0, s32 *, 0x5FC) != 0) {
        n = 1;
    }
    list = arg0 + 0x130;
    if (M2C_FIELD(list, u32 *, 0x374) - M2C_FIELD(list, u32 *, 0x370) > n) {
        fn_80185008(arg0, list + ((M2C_FIELD(list, u32 *, 0x370) + n) % 10U) * 0x58);
    }
}

s32 fn_8018540C(void *arg0) {
    extern const f32 lbl_803DA840[];
    return M2C_FIELD(arg0, f32 *, 0xD4) < lbl_803DA840[0];
}

s32 fn_80185428(void *arg0) {
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r3, void **, 4);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x124)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x120)) != 0) {
        return 0;
    }
    temp_r11 = M2C_FIELD(arg0, void **, 4);
    temp_r9_2 = M2C_FIELD(temp_r11, void **, 4);
    return M2C_FIELD(M2C_FIELD(temp_r9_2, void *(**)(void *), 0x12C)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x128)), s32 *, 4) == 2;
}

s32 fn_801854A8(void *arg0) {
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r3, void **, 4);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x124)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x120)) != 0) {
        return 0;
    }
    temp_r11 = M2C_FIELD(arg0, void **, 4);
    temp_r9_2 = M2C_FIELD(temp_r11, void **, 4);
    return M2C_FIELD(M2C_FIELD(temp_r9_2, void *(**)(void *), 0x12C)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x128)), s32 *, 4) == 3;
}

s32 fn_80185528(void *arg0) {
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r3, void **, 4);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x124)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x120)) != 0) {
        return 0;
    }
    temp_r11 = M2C_FIELD(arg0, void **, 4);
    temp_r9_2 = M2C_FIELD(temp_r11, void **, 4);
    return M2C_FIELD(M2C_FIELD(temp_r9_2, void *(**)(void *), 0x12C)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x128)), s32 *, 4) == 4;
}

s32 fn_80185680(void *arg0) {
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r3, void **, 4);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x124)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x120)) != 0) {
        return 0;
    }
    temp_r11 = M2C_FIELD(arg0, void **, 4);
    temp_r9_2 = M2C_FIELD(temp_r11, void **, 4);
    return M2C_FIELD(M2C_FIELD(temp_r9_2, void *(**)(void *), 0x12C)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x128)), s32 *, 4) == 1;
}

s32 fn_80185700(void *arg0) {
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *res;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r3, void **, 4);
    res = M2C_FIELD(temp_r9, void *(**)(void *), 0x124)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x120));
    if (res != NULL) {
        return M2C_FIELD(res, s32 *, 0x80);
    }
    temp_r11 = M2C_FIELD(arg0, void **, 4);
    temp_r9_2 = M2C_FIELD(temp_r11, void **, 4);
    return M2C_FIELD(M2C_FIELD(temp_r9_2, void *(**)(void *), 0x12C)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x128)), s32 *, 0) == 0;
}

s32 fn_8018577C(void *arg0) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r3, void **, 4);
    return M2C_FIELD(temp_r9, s32 (**)(void *), 0x1C4)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x1C0)) ^ 1;
}

s32 fn_801857B8(char *self) {
    if ((*(s32 (**)(char *))(*(char **)(*(char **)(self + 4) + 4) + 0x124))(
            *(char **)(self + 4) + *(s16 *)(*(char **)(*(char **)(self + 4) + 4) + 0x120)) != 0) {
        return 1;
    }
    {
        char *o = *(char **)(self + 4);
        char *v = *(char **)(o + 0x4);
        char *r = (*(char *(**)(char *))(v + 0x12C))(o + *(s16 *)(v + 0x128));
        return *(s32 *)(r + 4) == 0;
    }
}

void fn_80185834(char *self) {
    char *it;
    self += 0x4D4;
    for (it = *(char **)self; it != ((char **)self)[1]; it += 0xA4) {
        *(s32 *)(it + 0x7C) = 0;
    }
}

void fn_80185868(void) {

}

void fn_8018586C(void) {

}

void fn_80185870(void) {

}

s32 fn_80185874(void) {
    return 0;
}

void fn_8018587C(void) {

}

void fn_80185880(void) {

}

void fn_80185884(void) {

}

void fn_8018596C(void *arg0) {
    f32 fn_80097C84();
    M2C_UNK fn_80136440(s32);
    void *temp_r11;
    void *temp_r30;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;

    fn_80136440(M2C_FIELD(arg0, s32 *, 0));
    temp_r3 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r3, void **, 4);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x14C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x148)) != 0) {
        temp_r11 = M2C_FIELD(arg0, void **, 4);
        temp_r9_2 = M2C_FIELD(temp_r11, void **, 4);
        temp_r30 = M2C_FIELD(temp_r9_2, void *(**)(void *), 0x14C)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x148));
        M2C_FIELD(temp_r30, f32 *, 0x34) = fn_80097C84();
    }
}

s32 fn_801859E8(char *self) {
    extern s32 fn_801A2F28(char *);
    extern void *fn_801A2EF4(char *, s32);
    extern s32 fn_801A2F3C(void *);
    s32 i;
    for (i = fn_801A2F28(**(char ***)self + 8) - 1; i >= 0; i--) {
        if (fn_801A2F3C(fn_801A2EF4(**(char ***)self + 8, i)) == 0x189) {
            *(u16 *)(self + 0x9C) |= 1;
            return 1;
        }
    }
    return 0;
}

void fn_80185A68(char *self, s32 arg1) {
    extern void fn_801767DC(char *, s32, s32);
    fn_801767DC(self + 0x130, arg1, 0);
}

void fn_80185DA8(void ***arg0, s32 arg1) {
    M2C_FIELD(**arg0, s32 *, 4) = arg1;
}

void fn_80185DB8(void) {

}

s32 fn_80185DBC(void *arg0) {
    char *vt;

    if (arg0 != NULL) {
        vt = M2C_FIELD(arg0, char **, 4);
        return ((s32 (*)(void *))M2C_FIELD(vt, void **, 0x29C))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x298));
    }
    return 0;
}

void fn_80185E00(void) {

}

void fn_80185E04(void) {

}

s32 fn_80185E08(void *arg0, s32 arg1) {
    s32 temp_r3;
    void *temp_r9;

    temp_r9 = arg0 + 0x130;
    temp_r3 = M2C_FIELD(temp_r9, s32 *, 0x374) - M2C_FIELD(temp_r9, s32 *, 0x370);
    if ((arg1 == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x5FC) != 0)) {
        return temp_r3 - 1;
    }
    return temp_r3;
}

s32 fn_80185E38(void *arg0) {
    s32 ret = 0;
    if (M2C_FIELD(arg0, s32 *, 0x5FC) != 0) {
        ret = 1;
    }
    return ret;
}

void *fn_80185E50(void *self) {
    struct Ring { struct { u8 d[0x58]; } e[10]; u32 n; };
    struct Ring *r = (struct Ring *)((u8 *)self + 0x130);
    return &r->e[r->n % 10];
}

s32 fn_80185E7C(void *self, s32 i) {
    return ((struct { u8 pad[0x8]; s16 a[1]; } *)self)->a[i];
}

void fn_80185E8C(void *self, s32 i, s16 v) {
    ((struct { u8 pad[0x8]; s16 a[1]; } *)self)->a[i] = v;
}

u8 *fn_80185E9C(u8 *self) {
    return self + 8;
}

s16 fn_80185EA4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 8);
}

s32 fn_80185EAC(void **arg0) {
    char *obj = *(char **)((char *)*arg0 + 4);
    char *vt = *(char **)(obj + 4);
    char *r = (*(char *(**)(void *, s32))(vt + 0x27C))(obj + *(s16 *)(vt + 0x278), 0);
    return *(s16 *)(r + 4) != 0;
}

s32 fn_80185F00(s32 arg0) {
    return arg0 + 0x4C0;
}

s32 fn_80185F08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4BC);
}

u16 fn_80185F10(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x4E4);
}

void fn_80185F18(void *arg0) {
    void *temp_r3;
    void *temp_r9;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r3, void **, 4);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0x10C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x108), 0x1F);
}

void fn_80185F54(void *arg0, s32 arg1) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 4);
    temp_r9 = M2C_FIELD(temp_r11, void **, 4);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, s32), 0x114)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x110), 0x1F, arg1);
}

s32 fn_80185F94(void *arg0) {
    s32 fn_8017F6A8(void *);
    return fn_8017F6A8(arg0) != 0;
}

s32 fn_80185FC4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x48) != 0;
}

s32 fn_80185FDC(void **arg0) {
    return M2C_FIELD(M2C_FIELD(*arg0, void **, 0x8C), s32 *, 0x8C);
}

s32 fn_80185FEC(void **arg0) {
    return M2C_FIELD(M2C_FIELD(*arg0, void **, 0x8C), s32 *, 0x90);
}

s32 fn_80185FFC(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x90) & 1;
}

s32 fn_80186008(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x9C) & 1;
}

s32 fn_80186014(void *arg0) {
    return ((u16) M2C_FIELD(arg0, u16 *, 0x9C) >> 1U) & 1;
}

s16 fn_80186020(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x9C);
}

s32 fn_80186028(s32 arg0) {
    return arg0 + 0xA8;
}

s32 fn_80186030(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4D0);
}

s32 fn_80186038(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4F8);
}

s32 fn_80186040(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4FC);
}

void fn_80186048(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4FC) = arg1;
}

s32 fn_80186050(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x500);
}

void fn_80186058(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x500) = arg1;
}

s32 fn_80186060(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x508);
}

s32 fn_80186068(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x504);
}

s32 fn_80186070(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x50C);
}

s32 fn_80186078(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x510);
}

s32 fn_80186080(void *arg0) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x4D8) - M2C_FIELD(arg0, s32 *, 0x4D4)) * 0xC18F9C19) >> 2;
}

void fn_801860A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x5F8) = arg1;
}

s32 fn_801860A8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x600);
}

void fn_801860B0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x600) = arg1;
}

s32 fn_801860B8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x604);
}

void fn_801860C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x604) = arg1;
}

void fn_801860C8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x604) = 0;
}

s32 fn_801860D4(char *arg0) {
    cXPersonImpl_EntryVec *v = (cXPersonImpl_EntryVec *)(arg0 + 0x4E8);
    if (cXPersonImpl_EntryVec_Size(v) > 0) {
        s32 r = 0;
        void *p = cXPersonImpl_EntryVec_At(v, cXPersonImpl_EntryVec_Size(v) - 1)->unk0;
        if (p != 0) {
            r = *(s32 *)((char *)p + 4);
        }
        return r;
    }
    return **(s32 **)(arg0 + 4);
}

void *fn_80186120(void *arg0) {
    void fn_80149BC8(void *, s32);
    extern char lbl_80412430[];
    fn_80149BC8(arg0, 2);
    *(void **)arg0 = lbl_80412430;
    return arg0;
}

void fn_80186160(void) {
    M2C_UNK fn_80185A90(M2C_UNK, M2C_UNK);
    fn_80185A90(1, 0xFFFF);
}

void fn_8018618C(void) {
    void fn_80185A90(s32, s32);
    fn_80185A90(0, 0xFFFF);
}

