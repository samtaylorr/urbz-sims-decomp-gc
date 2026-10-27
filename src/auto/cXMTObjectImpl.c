/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

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

s32 fn_8011CD4C(u8 *self) {
    u8 *p = *(u8 **)(self + 8);
    return p != NULL ? *(s32 *)(p + 4) : 0;
}

void fn_8011CD64(void) {

}

s32 fn_8011D7D0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
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

s32 fn_8011DCBC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
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

