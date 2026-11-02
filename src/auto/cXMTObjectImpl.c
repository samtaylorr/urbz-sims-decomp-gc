/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct { s32 a, b, c; } Unk8011C094;

void fn_801181F0(void) {

}

void fn_801181F4(void) {

}

extern s32 lbl_80495B6C;
extern void fn_800F1A60(s32, s32);
void fn_80118300(void) {
    fn_800F1A60((s32)&lbl_80495B6C, 2);
}

void fn_8011B5F0(void *arg0) {
    void fn_80134C5C(void *);
    void *head;
    void *it;
    void *obj;
    void *vt;

    head = M2C_FIELD(arg0, void **, 0xC);
    if (head == NULL) {
        head = arg0;
    }
    for (it = head; it != NULL; it = M2C_FIELD(it, void **, 8)) {
        obj = M2C_FIELD(M2C_FIELD(it, void **, 0), void **, 4);
        vt = M2C_FIELD(obj, void **, 4);
        M2C_FIELD(vt, void (**)(void *, s32, s32, s32), 0xCC)((u8 *)obj + M2C_FIELD(vt, s16 *, 0xC8), 10, 0, 0);
    }
    for (it = head; it != NULL; it = M2C_FIELD(it, void **, 8)) {
        fn_80134C5C(M2C_FIELD(it, void **, 0));
    }
}

s32 fn_8011B9EC(void *arg0) {
    s32 fn_8013819C(s32);
    void *it;

    arg0 = M2C_FIELD(arg0, void **, 4);
    for (it = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void *(**)(void *), 0x14)((u8 *)arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x10)); it != NULL;
         it = M2C_FIELD(M2C_FIELD(it, void **, 4), void *(**)(void *), 0x1C)((u8 *)it + M2C_FIELD(M2C_FIELD(it, void **, 4), s16 *, 0x18))) {
        if (fn_8013819C(*M2C_FIELD(M2C_FIELD(it, void **, 4), s32 *(**)(void *), 0x5C)((u8 *)it + M2C_FIELD(M2C_FIELD(it, void **, 4), s16 *, 0x58))) == 0) {
            return 0;
        }
    }
    return 1;
}

s32 fn_8011BC04(void *arg0) {
    s32 fn_80138360(s32);
    void *it;

    arg0 = M2C_FIELD(arg0, void **, 4);
    for (it = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void *(**)(void *), 0x14)((u8 *)arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x10)); it != NULL;
         it = M2C_FIELD(M2C_FIELD(it, void **, 4), void *(**)(void *), 0x1C)((u8 *)it + M2C_FIELD(M2C_FIELD(it, void **, 4), s16 *, 0x18))) {
        if (fn_80138360(*M2C_FIELD(M2C_FIELD(it, void **, 4), s32 *(**)(void *), 0x5C)((u8 *)it + M2C_FIELD(M2C_FIELD(it, void **, 4), s16 *, 0x58))) == 0) {
            return 0;
        }
    }
    return 1;
}

s32 fn_8011BC98(void *arg0, s32 arg1) {
    void *it;

    it = arg0;
    if (M2C_FIELD(arg0, void **, 0xC) != NULL) {
        it = M2C_FIELD(arg0, void **, 0xC);
    }
    for (; it != NULL; it = M2C_FIELD(it, void **, 8)) {
        if (M2C_FIELD(M2C_FIELD(it, void **, 4), s32 *, 0) == arg1) {
            return 1;
        }
    }
    return 0;
}

s32 fn_8011BE28(void) {
    return 0x584D544F;
}

void fn_8011BF84(void *arg0, s32 arg1) {
    M2C_UNK fn_801319F8(s32);
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    fn_801319F8(M2C_FIELD(arg0, s32 *, 0));
    if (arg1 <= 0x39) {
        temp_r3 = M2C_FIELD(arg0, void **, 4);
        temp_r9 = M2C_FIELD(temp_r3, void **, 4);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x2C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x28));
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 4);
    temp_r9_2 = M2C_FIELD(temp_r3_2, void **, 4);
    if (M2C_FIELD(temp_r9_2, s32 (**)(void *), 0x44)(temp_r3_2 + M2C_FIELD(temp_r9_2, s16 *, 0x40)) != 0) {
        temp_r3_3 = M2C_FIELD(arg0, void **, 4);
        temp_r9_3 = M2C_FIELD(temp_r3_3, void **, 4);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x4C)(temp_r3_3 + M2C_FIELD(temp_r9_3, s16 *, 0x48));
    }
}

void fn_8011C01C(void *arg0, s32 arg1, s32 arg2) {
    void *head;
    void *it;
    void *obj;
    void *vt;

    head = M2C_FIELD(arg0, void **, 0xC);
    it = arg0;
    if (head != NULL) {
        it = head;
    }
    for (; it != NULL; it = M2C_FIELD(it, void **, 8)) {
        obj = M2C_FIELD(M2C_FIELD(it, void **, 0), void **, 4);
        vt = M2C_FIELD(obj, void **, 4);
        M2C_FIELD(vt, void (**)(void *, s32, s16), 0x1AC)((u8 *)obj + M2C_FIELD(vt, s16 *, 0x1A8), arg1, arg2);
    }
}

void fn_8011CCA8(void ***arg0, s32 arg1) {
    M2C_FIELD(**arg0, s32 *, 8) = arg1;
}

void fn_8011CCB8(void ***arg0, s32 arg1) {
    M2C_FIELD(**arg0, s32 *, 0xC) = arg1;
}

void fn_8011CCC8(void ***arg0, s32 arg1) {
    M2C_FIELD(**arg0, s32 *, 0x10) = arg1;
}

s32 fn_8011CCD8(void *arg0) {
    char *vt;

    if (arg0 != NULL) {
        vt = M2C_FIELD(arg0, char **, 4);
        return ((s32 (*)(void *))M2C_FIELD(vt, void **, 0x5C))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x58));
    }
    return 0;
}

s32 fn_8011CD1C(void *arg0) {
    void *c = M2C_FIELD(arg0, void **, 0xC);

    if (c != NULL || arg0 != NULL) {
        void *p = c;
        if (c == NULL) {
            p = arg0;
        }
        return M2C_FIELD(p, s32 *, 4);
    }
    return 0;
}

s32 fn_8011CD4C(u8 *self) {
    u8 *p = *(u8 **)(self + 8);
    return p != NULL ? *(s32 *)(p + 4) : 0;
}

void fn_8011CD64(void) {

}

void fn_8011CD68(void *arg0) {
    void fn_801A15F0(s32);
    fn_801A15F0(*M2C_FIELD(arg0, s32 **, 0));
}

s32 fn_8011CD90(void *arg0) {
    char *p;
    char *vt;

    if (arg0 != NULL) {
        p = M2C_FIELD(arg0, char **, 4);
        vt = M2C_FIELD(p, char **, 4);
        return ((s32 (*)(void *))M2C_FIELD(vt, void **, 0x5C))(p + M2C_FIELD(vt, s16 *, 0x58));
    }
    return 0;
}

void fn_8011CECC(void *arg0, s32 arg1) {
    void fn_8011D0D0(void *, s32, void *, s32, s32);
    fn_8011D0D0(arg0, arg1, (u8 *)arg0 + 0x10, 0xEBD8CAB4, 3);
}

void fn_8011CEFC(void *arg0, s32 arg1) {
    void fn_8011D0D0(void *, s32, void *, s32, s32);
    fn_8011D0D0(arg0, arg1, (u8 *)arg0 + 0x18, 0x6BF17876, 1);
}

void fn_8011CF2C(char *self, s32 arg1) {
    void fn_8011D0D0(char *, s32, void *, s32, s32);
    fn_8011D0D0(self, arg1, self + 8, 0x6BC37BC5, 2);
}

void fn_8011CF5C(char *self, s32 arg1) {
    void fn_8011CFA4(char *, s32, void *);
    fn_8011CFA4(self, arg1, self + 0x10);
}

void fn_8011CF80(char *self, s32 arg1) {
    void fn_8011CFA4(char *, s32, void *);
    fn_8011CFA4(self, arg1, self + 0x18);
}

void fn_8011CFA4(void *self, s32 key, void *list) {
    char buf[0x18];
    s32 ne;

    *(char **)(buf + 0) = **(char ***)((char *)list + 4);
    for (;;) {
        *(char **)(buf + 8) = *(char **)((char *)list + 4);
        ne = 1;
        if (*(char **)(buf + 0) == *(char **)(buf + 8)) {
            ne = 0;
        }
        if (ne == 0) {
            break;
        }
        {
            char *e = *(char **)(buf + 0) + 8;
            if (*(u16 *)e == key) {
                *(s32 *)(e + 8) = 0;
                *(u16 *)(*(char **)(buf + 0) + 8) = 0;
                return;
            }
        }
        *(char **)(buf + 0x10) = *(char **)(buf + 0);
        *(char **)(buf + 0) = **(char ***)(buf + 0x10);
        *(char **)(buf + 8) = *(char **)(buf + 0x10);
    }
}

void fn_8011D014(void *arg0, s32 arg1) {
    void fn_8011CFA4(void *, s32, void *);
    fn_8011CFA4(arg0, arg1, (u8 *)arg0 + 8);
}

void fn_8011D038(void *arg0) {
    void fn_803A044C(void *);
    void fn_803A04E0(void *, s32);
    void fn_8031EA2C(void *);
    void *list;
    void *temp_r9;
    void *temp_r9_2;

    list = (u8 *)arg0 + 0x20;
    fn_803A044C((u8 *)arg0 + 0x10);
    fn_803A044C((u8 *)arg0 + 8);
    if (M2C_FIELD(list, s32 *, 8) != 0) {
        fn_803A04E0(list, M2C_FIELD(M2C_FIELD(list, void **, 4), s32 *, 4));
        temp_r9 = M2C_FIELD(list, void **, 4);
        M2C_FIELD(temp_r9, void **, 8) = temp_r9;
        M2C_FIELD(M2C_FIELD(list, void **, 4), s32 *, 4) = 0;
        temp_r9_2 = M2C_FIELD(list, void **, 4);
        M2C_FIELD(temp_r9_2, void **, 0xC) = temp_r9_2;
        M2C_FIELD(list, s32 *, 8) = 0;
    }
    fn_803A044C((u8 *)arg0 + 0x18);
    if (M2C_FIELD(arg0, void **, 0x30) != NULL) {
        fn_8031EA2C(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, void **, 0x30) = NULL;
    }
}

s32 fn_8011D7D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

void *fn_8011D904(void *arg0) {
    void fn_801C9A9C(void *, s32);
    s32 i;
    s32 *p;

    fn_801C9A9C((u8 *)arg0 + 0x14, 0);
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, u8 *, 0xC) = 0;
    M2C_FIELD(arg0, u16 *, 0) = 0;
    M2C_FIELD(arg0, u16 *, 2) = 0;
    M2C_FIELD(arg0, u16 *, 4) = 0;
    M2C_FIELD(arg0, u16 *, 6) = 0;
    M2C_FIELD(arg0, u16 *, 8) = 0;
    M2C_FIELD(arg0, u16 *, 0xA) = 0;
    M2C_FIELD(arg0, void **, 0x10) = NULL;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    M2C_FIELD(arg0, s32 *, 0x108) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C) = 0;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    p = (s32 *)((u8 *)arg0 + 0x148);
    for (i = 4; i != 0; i--) {
        *p-- = 0;
    }
    return arg0;
}

void *fn_8011D9C0(void *arg0) {
    M2C_UNK fn_800F687C(void *, void *, M2C_UNK);
    M2C_UNK fn_80117DE4(void *);
    s32 fn_8018ED98();
    void *temp_r29;

    M2C_FIELD(arg0, s16 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x1A) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
    temp_r29 = (u8 *)arg0 + 0x10C;
    fn_800F687C((u8 *)arg0 + 0x24, (u8 *)arg0 + 0x2C, 0x40);
    fn_80117DE4(temp_r29);
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = fn_8018ED98();
    fn_80117DE4(temp_r29);
    return arg0;
}

void fn_8011DA34(void *arg0, s32 arg1) {
    void fn_8018EDE0(s32);
    void *fn_802D0AB8(void);
    void fn_802D1A00(void *, void *);

    fn_8018EDE0(M2C_FIELD(arg0, s32 *, 0x10));
    if (arg1 & 1) {
        fn_802D1A00(fn_802D0AB8(), arg0);
    }
}

void *fn_8011DA7C(void *arg0, s16 arg1, s32 arg2) {
    M2C_UNK fn_800F687C(void *, void *, M2C_UNK);
    M2C_UNK fn_80117DE4(void *);
    s32 fn_8016CCE0(s32);
    M2C_UNK fn_8016DAB4(s32, void *);
    s32 fn_8018ED98();
    void *temp_r29;

    M2C_FIELD(arg0, s16 *, 4) = arg1;
    temp_r29 = arg0 + 0x24;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    fn_800F687C(temp_r29, arg0 + 0x2C, 0x40);
    fn_80117DE4(arg0 + 0x10C);
    M2C_FIELD(arg0, s32 *, 8) = fn_8016CCE0(M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x10) = fn_8018ED98();
    fn_8016DAB4(arg2, temp_r29);
    return arg0;
}

void *fn_8011DAF0(void *arg0, void *arg1) {
    M2C_UNK fn_800F687C(void *, void *, M2C_UNK);
    M2C_UNK fn_80117DE4(void *);
    void fn_8011DB44(void *, void *);

    fn_800F687C((u8 *)arg0 + 0x24, (u8 *)arg0 + 0x2C, 0x40);
    fn_80117DE4((u8 *)arg0 + 0x10C);
    fn_8011DB44(arg0, arg1);
    return arg0;
}

s32 fn_8011DCBC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80122274(s32 arg0) {
    extern s32 lbl_80434BE0[];
    return lbl_80434BE0[0] + arg0 * 8;
}

s32 fn_80122288(void) {
    return 7;
}

s32 fn_8012242C(s32 *self) {
    return self[2];
}

void fn_80122434(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void *fn_8012243C(void *arg0) {
    extern char *lbl_80496650;
    s32 i;
    s32 count;
    char *obj;

    i = 0;
    {
        char *p = lbl_80496650;
        char *vt = *(char **)p;
        s32 (*f)(void *) = M2C_FIELD(vt, s32 (**)(void *), 0x12C);
        count = f(p + M2C_FIELD(vt, s16 *, 0x128));
    }
    for (; i < count; i++) {
        {
            char *p = lbl_80496650;
            char *vt = *(char **)p;
            char *(*f)(void *, s32) = M2C_FIELD(vt, char *(**)(void *, s32), 0x134);
            obj = f(p + M2C_FIELD(vt, s16 *, 0x130), i);
        }
        {
            char *vt = *(char **)obj;
            s32 (*f)(void *, s32) = M2C_FIELD(vt, s32 (**)(void *, s32), 0x4C);
            if (f(obj + M2C_FIELD(vt, s16 *, 0x48), M2C_FIELD(arg0, s32 *, 8)) != 0) {
                return obj;
            }
        }
    }
    return NULL;
}

s32 fn_801224F0(void *arg0) {
    s32 fn_803A3010(void *);
    s32 var_r31;
    void *p;

    var_r31 = 0;
    p = M2C_FIELD(arg0, void **, 0xC);
    if (p != NULL) {
        s32 ok = fn_803A3010(p) != 0;
        if (ok) {
            var_r31 = 1;
        }
    }
    return var_r31;
}

s16 fn_801229CC(void *arg0) {
    M2C_UNK fn_80122700();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        fn_80122700();
    }
    return M2C_FIELD(arg0, s16 *, 0x18);
}

s16 fn_80122A08(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        fn_80122700();
    }
    return M2C_FIELD(arg0, s16 *, 0x1A);
}

s16 fn_80122A44(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        fn_80122700();
    }
    return M2C_FIELD(arg0, s16 *, 0x1C);
}

s32 fn_80122A80(void *arg0, void *arg1, s32 *arg2) {
    s16 id;
    s32 res;

    if (arg1 == NULL) {
        if (arg2 != NULL) {
            *arg2 = 0;
        }
        return 0;
    }
    id = M2C_FIELD(arg1, s16 *, 4);
    {
        char *p = M2C_FIELD(arg0, char **, 0x10);
        char *vt = *(char **)p;
        s32 (*f)(void *, s32) = M2C_FIELD(vt, s32 (**)(void *, s32), 0x24);
        res = f(p + M2C_FIELD(vt, s16 *, 0x20), id);
    }
    if (res == 0) {
        if (arg2 != NULL) {
            *arg2 = 0;
        }
        return 0;
    }
    if (arg2 != NULL) {
        char *p = M2C_FIELD(arg0, char **, 0x10);
        char *vt = *(char **)p;
        s32 (*f)(void *, s32, s32) = M2C_FIELD(vt, s32 (**)(void *, s32, s32), 0x44);
        *arg2 = f(p + M2C_FIELD(vt, s16 *, 0x40), id, 0);
    }
    return 1;
}

void fn_80122B38(void *arg0, void *arg1, s32 arg2) {
    s16 id;

    if (arg1 != NULL) {
        id = M2C_FIELD(arg1, s16 *, 4);
        {
            char *p = M2C_FIELD(arg0, char **, 0x10);
            char *vt = *(char **)p;
            s32 (*f)(void *, s32) = M2C_FIELD(vt, s32 (**)(void *, s32), 0x24);
            if (f(p + M2C_FIELD(vt, s16 *, 0x20), id) == 0) {
                char *p2 = M2C_FIELD(arg0, char **, 0x10);
                char *vt2 = *(char **)p2;
                void (*f2)(void *, s32, s32) = M2C_FIELD(vt2, void (**)(void *, s32, s32), 0x2C);
                f2(p2 + M2C_FIELD(vt2, s16 *, 0x28), id, 1);
            }
        }
        {
            char *p = M2C_FIELD(arg0, char **, 0x10);
            char *vt = *(char **)p;
            void (*f)(void *, s32, s32, s32) = M2C_FIELD(vt, void (**)(void *, s32, s32, s32), 0x4C);
            f(p + M2C_FIELD(vt, s16 *, 0x48), id, 0, arg2);
        }
    }
}

void fn_80122BE4(void *arg0) {
    char *p;
    char *vt;

    p = M2C_FIELD(arg0, char **, 0x10);
    vt = *(char **)p;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x3C))(p + M2C_FIELD(vt, s16 *, 0x38));
}

void fn_80123040(s32 arg0) {
    M2C_UNK fn_8011D830(s32);
    fn_8011D830(arg0 + 0x6C);
}

void fn_80123064(s32 arg0, s32 arg1) {
    struct VecAlloc { s32 unk0; char *cap; };
    struct Vec { char *begin; char *end; struct VecAlloc alloc; };
    extern struct Vec lbl_80434BE0;
    M2C_UNK fn_802D20E8(void *, u32);
    M2C_UNK fn_803997AC(void *, u32);
    struct Vec *v;
    char *it;

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            struct VecAlloc *a;
            v = &lbl_80434BE0;
            v->begin = 0;
            a = &v->alloc;
            v->end = 0;
            a->cap = 0;
        } else {
            v = &lbl_80434BE0;
            for (it = v->begin; it != v->end; it += 8) {
            }
            if (v->begin != NULL) {
                u32 size = (v->alloc.cap - v->begin) & ~7;
                if (size > 0x80) {
                    fn_802D20E8(v->begin, size);
                } else {
                    fn_803997AC(v->begin, size);
                }
            }
        }
    }
}

void fn_80123108(void) {
    void fn_80123064(s32, s32);
    fn_80123064(1, 0xFFFF);
}

void fn_80123134(void) {
    void fn_80123064(s32, s32);
    fn_80123064(0, 0xFFFF);
}

