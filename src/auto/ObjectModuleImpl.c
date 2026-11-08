/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s16 v[10];
} S16Table10;

extern s32 lbl_804944B0;
void fn_800F68E0(void *);
void fn_80149624(char *self) {
    char *p;
    char *e;
    s32 r;

    {
        char *obj = M2C_FIELD(self, char **, 4);
        char *vt = M2C_FIELD(obj, char **, 4);
        M2C_FIELD(vt, void (**)(void *, s32, s32), 0x6C)(obj + M2C_FIELD(vt, s16 *, 0x68), 0x100, 1);
    }
    {
        char *obj = M2C_FIELD(self, char **, 4);
        char *vt;
        p = M2C_FIELD(self, char **, 0x58);
        vt = M2C_FIELD(obj, char **, 4);
        e = *(char **)p + 0x228;
        p += *(s16 *)e;
        r = M2C_FIELD(vt, s32 (**)(void *), 0x2EC)(obj + M2C_FIELD(vt, s16 *, 0x2E8));
    }
    M2C_FIELD(e, void (**)(void *, s32, s32, s32), 4)(p, r, 4, 1);
}

void fn_80149998(void *self, void *arg) {
    fn_800F68E0(arg);
}

void fn_80149AF4(void) {
    M2C_UNK fn_8014A1E4();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x6F0);
    fn_8014A1E4();
}

void fn_80149B1C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

void fn_80149B5C(void *arg0) {
    extern s32 fn_800F68BC(void *);
    extern char *fn_800F69F0(void *);
    s32 i;
    s32 n;

    i = 0;
    n = fn_800F68BC(arg0);
    for (; i < n; i++) {
        if (fn_800F69F0(arg0)[i] == '/') {
            fn_800F69F0(arg0)[i] = '\\';
        }
    }
}

extern char lbl_80411120[];
void fn_80149BC8(void **arg0, s16 arg1) {
    *arg0 = lbl_80411120;
    M2C_FIELD(arg0, s16 *, 4) = arg1;
}

s32 fn_80149BDC(void) {
    return lbl_804944B0;
}

s16 fn_80149BE4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 4);
}

s32 fn_8014A690(char *arg0) {
    s32 i;
    s32 total;
    s32 n;
    char **tbl;
    char *it;

    tbl = (char **)(arg0 + 0x50);
    total = 0;
    for (i = 0; i <= 0xFF; i++) {
        n = 0;
        for (it = tbl[i]; it != NULL; it = M2C_FIELD(it, char **, 0xA0)) {
            n++;
        }
        total += n;
    }
    return total;
}

char *fn_8014A6D8(char *self, u8 key) {
    char **tbl = (char **)(self + 0x50);
    s32 *pkey;
    s32 k;
    char *prev;
    char *n;

    n = tbl[key];
    k = key;
    pkey = &k;
    prev = 0;
    while (n != 0) {
        if (*pkey == fn_8016CCE0(n)) {
            if (prev != 0) {
                *(char **)(prev + 0xA0) = *(char **)(n + 0xA0);
                *(char **)(n + 0xA0) = tbl[key];
                tbl[key] = n;
            }
            break;
        }
        prev = n;
        n = *(char **)(n + 0xA0);
    }
    return n;
}

void fn_8014ABB0(void *);
s32 fn_8016CCE0(void *);
extern void **lbl_80496220;
void fn_8014AB64(void *self) {
    char *vt = (char *)*lbl_80496220;
    (*(void (**)(void *))(vt + 0x4C))((char *)lbl_80496220 + *(s16 *)(vt + 0x48));
    fn_8014ABB0(self);
}

s32 fn_8014B05C(char *self) {
    char *vt = *(char **)self;
    char *r;
    char **arr;
    char **p;
    char *x;
    s32 i;

    r = (*(char *(**)(void *))(vt + 0x84))(self + *(s16 *)(vt + 0x80));
    arr = **(char ****)(r + 0x54);
    p = arr;
    for (i = 0; i < (arr != 0 ? ((s32 *)arr)[-1] : 0); i++) {
        x = *(char **)(*p + 0xC0);
        if (x != 0) {
            return *(s32 *)(x + 0x1C);
        }
        p++;
    }
    return 0;
}

void *fn_8014B0E0(void *arg0, void *arg1) {
    s32 fn_8016CC2C(void *, void *);
    s32 id;
    void *it;

    it = NULL;
    id = M2C_FIELD(M2C_FIELD(arg1, void **, 0x38), s16 *, 0x14);
    if (id != 0) {
        while ((it = M2C_FIELD(*(void **)arg0, void *(**)(void *, void *), 0x7C)((char *)arg0 + M2C_FIELD(*(void **)arg0, s16 *, 0x78), it)) != NULL) {
            if (fn_8016CC2C(it, arg1) != 0 && M2C_FIELD(M2C_FIELD(it, void **, 0x38), s16 *, 0x14) == id &&
                (M2C_FIELD(M2C_FIELD(it, void **, 0x38), s16 *, 0x14) != 0 && M2C_FIELD(M2C_FIELD(it, void **, 0x38), s16 *, 0x16) == -1)) {
                return it;
            }
        }
    }
    return arg1;
}

s32 fn_8014BDFC(void *arg0) {
    s32 fn_8032D8E0(void *, void *, s32 *);
    void *p;
    void *h;
    s32 out;
    s32 result;

    p = M2C_FIELD(*(void **)arg0, void *(**)(void *), 0x3C)((char *)arg0 + M2C_FIELD(*(void **)arg0, s16 *, 0x38));
    if (p == NULL || M2C_FIELD(p, void **, 0xC) == NULL || (h = M2C_FIELD(M2C_FIELD(p, void **, 0xC), void **, 0x34)) == NULL) {
        return -1;
    }
    result = fn_8032D8E0(M2C_FIELD(arg0, void **, 0x6A0), h, &out) != 0 ? out : -1;
    if (result == 0) {
        result = -1;
    }
    return result;
}

void fn_8014C314(void *arg0, void **arg1) {
    s32 fn_800F5748(s32, void *);
    void *temp_r31;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r31 = *arg1;
    if ((temp_r31 != NULL) && (fn_800F5748(M2C_FIELD(arg0, s32 *, 0x4C), temp_r31) != 0)) {
        temp_r9 = M2C_FIELD(temp_r31, void **, 0x10);
        if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x64)(temp_r31 + M2C_FIELD(temp_r9, s16 *, 0x60)) != 0) {
            temp_r9_2 = M2C_FIELD(temp_r31, void **, 0x10);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x44)(temp_r31 + M2C_FIELD(temp_r9_2, s16 *, 0x40));
        }
        temp_r9_3 = M2C_FIELD(temp_r31, void **, 0x10);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r31 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
    }
    *arg1 = NULL;
}

s32 fn_8014C3B8(void *arg0) {
    void *p = M2C_FIELD(*(void **)arg0, void *(**)(void *), 0x3C)((char *)arg0 + M2C_FIELD(*(void **)arg0, s16 *, 0x38));
    return M2C_FIELD(M2C_FIELD(p, void **, 0xC), s32 *, 0x44);
}

void fn_8014C3F4(void) {

}

s32 fn_8014D4C8(void *arg0, s32 *out) {
    extern void *lbl_80496650;
    s32 i;
    void *obj;

    *out = 0;
    for (i = 1; i <= 4; i++) {
        obj = M2C_FIELD(*(void **)lbl_80496650, void *(**)(void *, s32), 0x13C)((char *)lbl_80496650 + M2C_FIELD(*(void **)lbl_80496650, s16 *, 0x138), i);
        if (M2C_FIELD(*(void **)obj, s32 (**)(void *, void *), 0x4C)((char *)obj + M2C_FIELD(*(void **)obj, s16 *, 0x48), arg0) != 0) {
            if (M2C_FIELD(*(void **)obj, s32 (**)(void *), 0x9C)((char *)obj + M2C_FIELD(*(void **)obj, s16 *, 0x98)) != 0) {
                *out = i;
                return 1;
            }
            return 0;
        }
    }
    return 0;
}

u8 *fn_8014DA30(u8 *self) {
    s32 fn_8019FC9C(void *);
    u8 *fn_8014BA60(void *, s32, s32);
    void *fn_802D1FC8(s32);
    s32 fn_801C9904(void *);
    s32 a = fn_8019FC9C(self);
    s16 n = ++*(u16 *)(self + 0x6CC);
    u8 *r = fn_8014BA60(self, a, n);

    *(s32 *)(r + 0x8C) = fn_801C9904(fn_802D1FC8(0xE8));
    return r;
}

void fn_8014DD00(u8 *self, u8 *obj) {
    extern u8 *lbl_80496660;

    if (*(s32 *)(obj + 0x98) == 0) {
        u8 *e;
        s32 v;
        (*(void (**)(void *))(*(u8 **)(lbl_80496660 + 0x3A4) + 0xA4))(lbl_80496660 + *(s16 *)(*(u8 **)(lbl_80496660 + 0x3A4) + 0xA0));
        if (*(s32 *)obj == 0) {
            (*(void (**)(void *, void *))(*(u8 **)self + 0x154))(self + *(s16 *)(*(u8 **)self + 0x150), obj);
        }
        e = *(u8 **)(*(u8 **)(obj + 0x38) + 0xC0);
        v = *(s32 *)(self + 0x6D4);
        if (e != NULL) {
            v = v + *(s32 *)(e + 0x10);
        } else {
            v = v;
        }
        *(s32 *)(self + 0x6D4) = v;
    }
}

void fn_8014DDA4(u8 *self, u8 *obj) {
    s32 fn_8014FDB4(void *, void *);

    if (*(s32 *)(obj + 0x9C) != 1 && *(s32 *)(*(u8 **)(obj + 0x38) + 0xC0) != 0) {
        (*(void (**)(void *, void *, s32))(*(u8 **)self + 0x264))(self + *(s16 *)(*(u8 **)self + 0x260), obj, 1);
        *(s32 *)(self + 0x6D8) += fn_8014FDB4(self, obj);
        *(s32 *)(obj + 0x68) += 1;
    }
}

void fn_8014DE2C(void *arg0, void *arg1) {
    M2C_UNK fn_8014F258(void *, void *);
    s32 fn_8014FDB4(void *, void *);
    s32 fn_8016CB30(void *);
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg1, s32 *, 0x68) - 1;
    M2C_FIELD(arg1, s32 *, 0x68) = temp_r9;
    if ((temp_r9 == 0) && (fn_8016CB30(arg1) == 0)) {
        fn_8014F258(arg0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x6D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x6D8) - fn_8014FDB4(arg0, arg1));
}

void fn_8014DEA0(void *arg0, void *arg1) {
    s32 temp_r0;
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg1, void **, 0xC);
    if (temp_r11 != NULL) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x6D4) + M2C_FIELD(temp_r11, s32 *, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x6D4) = temp_r0;
        M2C_FIELD(arg0, s32 *, 0x6D4) = (s32) (temp_r0 + M2C_FIELD(temp_r11, s32 *, 0x40));
    }
}

void fn_8014DECC(void *arg0, void *arg1) {
    s32 temp_r0;
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg1, void **, 0xC);
    if (temp_r11 != NULL) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x6D4) - M2C_FIELD(temp_r11, s32 *, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x6D4) = temp_r0;
        M2C_FIELD(arg0, s32 *, 0x6D4) = (s32) (temp_r0 - M2C_FIELD(temp_r11, s32 *, 0x40));
    }
}

void fn_8014E9B0(u8 *self) {
    u8 *vt = *(u8 **)self;
    (*(void (**)(void *, u32))(vt + 0x84))(self + *(s16 *)(vt + 0x80), 0x7FD96B54);
}

s32 *fn_8014F3DC(void *self, s32 id) {
    s32 **it;
    for (it = M2C_FIELD(self, s32 ***, 0x670); it != M2C_FIELD(self, s32 ***, 0x674); it++) {
        if (**it == id) {
            return *it;
        }
    }
    return NULL;
}

void fn_8014F414(void *arg0, s32 arg1) {
    void fn_803A5154(void *, s32, s32, s32, s32);
    fn_803A5154(arg0, arg1, 0x54415454, 1, 0);
}

void fn_8014F444(void *arg0, s32 arg1) {
    void fn_803A51C0(void *, s32, s32, s32, s32);
    fn_803A51C0(arg0, arg1, 0x54415454, 1, 0);
}

s32 fn_8014F698(void *arg0, s32 arg1) {
    void *vt;

    if (arg1 == 0) {
        return 0;
    }
    vt = *(void **)arg0;
    return M2C_FIELD(vt, s32 (**)(void *, s32), 0x1BC)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x1B8), arg1);
}

s32 fn_8014F6E0(void *arg0, s32 arg1) {
    s32 fn_8032D5C8(s32, void *);
    s32 *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803D8FFC[];
    s32 *p;

    if (arg1 == 0) {
        return 0;
    } else {
        u8 *name = lbl_803D8FFC;
        s32 key;

        key = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x6A0), name);
        p = fn_8032D6E8(M2C_FIELD(arg0, s32 *, 0x6A0), key, arg1);
        if (p != NULL) {
            return *p;
        }
        return 0;
    }
}

s32 fn_8014F744(void *arg0) {
    void *vt;
    void *p;

    vt = *(void **)arg0;
    p = M2C_FIELD(vt, void *(**)(void *), 0x1B4)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x1B0));
    if (p != NULL) {
        return M2C_FIELD(p, s32 *, 4);
    }
    return 0;
}

void *fn_8014F78C(void *arg0, s32 arg1) {
    s32 fn_8032D5C8(s32, void *);
    s32 *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803D9014[];
    u8 *name = lbl_803D9014;
    s32 key;
    s32 *p;

    key = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x6A0), name);
    p = fn_8032D6E8(M2C_FIELD(arg0, s32 *, 0x6A0), key, arg1);
    if (p != NULL) {
        return p;
    }
    return NULL;
}

void *fn_8014F7E4(void *arg0, s32 arg1) {
    s32 fn_8032D5C8(s32, void *);
    s32 *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803D9028[];
    u8 *name = lbl_803D9028;
    s32 key;
    s32 *p;

    key = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x6A0), name);
    p = fn_8032D6E8(M2C_FIELD(arg0, s32 *, 0x6A0), key, arg1);
    if (p != NULL) {
        return p;
    }
    return NULL;
}

void *fn_8014F83C(void *arg0, s32 arg1) {
    s32 fn_8032D5C8(s32, void *);
    s32 *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803D9040[];
    u8 *name = lbl_803D9040;
    s32 key;
    s32 *p;

    key = fn_8032D5C8(M2C_FIELD(arg0, s32 *, 0x6A0), name);
    p = fn_8032D6E8(M2C_FIELD(arg0, s32 *, 0x6A0), key, arg1);
    if (p != NULL) {
        return p;
    }
    return NULL;
}

s32 fn_8014F894(s32 id, void **list) {
    void *it;
    for (it = *list; it != NULL; it = M2C_FIELD(it, void **, 8)) {
        if (M2C_FIELD(it, s32 *, 0) == id) {
            return 1;
        }
    }
    return 0;
}

s32 fn_8014FA04(void *arg0, void *arg1) {
    s32 fn_8016CC2C(void *, void *);
    s32 fn_8014FBCC(void *, void *);
    s32 total;
    s32 id;
    void *it;

    total = 0;
    if (M2C_FIELD(M2C_FIELD(arg1, void **, 0x38), s32 *, 0xC0) == 0) {
        id = M2C_FIELD(M2C_FIELD(arg1, void **, 0x38), s16 *, 0x14);
        it = M2C_FIELD(*(void **)arg0, void *(**)(void *, void *), 0x7C)((char *)arg0 + M2C_FIELD(*(void **)arg0, s16 *, 0x78), NULL);
        while (it != NULL) {
            if (M2C_FIELD(M2C_FIELD(it, void **, 0x38), s16 *, 0x14) == id && M2C_FIELD(M2C_FIELD(it, void **, 0x38), s32 *, 0xC0) != 0 && fn_8016CC2C(it, arg1) != 0) {
                total += fn_8014FBCC(arg0, it);
            }
            it = M2C_FIELD(*(void **)arg0, void *(**)(void *, void *), 0x7C)((char *)arg0 + M2C_FIELD(*(void **)arg0, s16 *, 0x78), it);
        }
    } else {
        total = fn_8014FBCC(arg0, arg1);
    }
    return total;
}

s32 fn_8014FAE8(void *arg0, void *arg1) {
    s32 fn_8016CC2C(void *, void *);
    s32 fn_8014FC44(void *, void *);
    s32 total;
    s32 id;
    void *it;

    total = 0;
    if (M2C_FIELD(M2C_FIELD(arg1, void **, 0x38), s32 *, 0xC0) == 0) {
        id = M2C_FIELD(M2C_FIELD(arg1, void **, 0x38), s16 *, 0x14);
        it = M2C_FIELD(*(void **)arg0, void *(**)(void *, void *), 0x7C)((char *)arg0 + M2C_FIELD(*(void **)arg0, s16 *, 0x78), NULL);
        while (it != NULL) {
            if (M2C_FIELD(M2C_FIELD(it, void **, 0x38), s16 *, 0x14) == id && M2C_FIELD(M2C_FIELD(it, void **, 0x38), s32 *, 0xC0) != 0 && fn_8016CC2C(it, arg1) != 0) {
                total += fn_8014FC44(arg0, it);
            }
            it = M2C_FIELD(*(void **)arg0, void *(**)(void *, void *), 0x7C)((char *)arg0 + M2C_FIELD(*(void **)arg0, s16 *, 0x78), it);
        }
    } else {
        total = fn_8014FC44(arg0, arg1);
    }
    return total;
}

s32 fn_8014FBCC(void *arg0, void *arg1) {
    s32 fn_800F5530(s32, void *);
    s32 var_r30;
    void *temp_r9;

    var_r30 = 0;
    if (M2C_FIELD(arg1, s32 *, 0x68) == 0) {
        temp_r9 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x38), void **, 0xC0);
        if (temp_r9 != NULL) {
            var_r30 = M2C_FIELD(temp_r9, s32 *, 0x10);
        }
        if (fn_800F5530(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg1, void **, 0x54)) == 0) {
            var_r30 += M2C_FIELD(M2C_FIELD(arg1, void **, 0x54), s32 *, 0x3C);
            var_r30 += M2C_FIELD(M2C_FIELD(arg1, void **, 0x54), s32 *, 0x40);
        }
    }
    return var_r30;
}

s32 fn_8014FC44(void *arg0, void *arg1) {
    s32 fn_8016CB30(void *);
    s32 fn_800F5530(s32, void *);
    s32 var_r30;
    void *temp_r9;

    var_r30 = 0;
    if (M2C_FIELD(arg1, s32 *, 0x68) == 1 && fn_8016CB30(arg1) == 0) {
        temp_r9 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x38), void **, 0xC0);
        if (temp_r9 != NULL) {
            var_r30 = M2C_FIELD(temp_r9, s32 *, 0x10);
        }
        if (fn_800F5530(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg1, void **, 0x54)) == 1) {
            var_r30 += M2C_FIELD(M2C_FIELD(arg1, void **, 0x54), s32 *, 0x3C);
            var_r30 += M2C_FIELD(M2C_FIELD(arg1, void **, 0x54), s32 *, 0x40);
        }
    }
    return var_r30;
}

s32 fn_8014FCD0(void *arg0, void *arg1) {
    s32 fn_8016CC2C(void *, void *);
    s32 fn_8014FDB4(void *, void *);
    s32 total;
    s32 id;
    void *it;

    total = 0;
    if (M2C_FIELD(M2C_FIELD(arg1, void **, 0x38), s32 *, 0xC0) == 0) {
        id = M2C_FIELD(M2C_FIELD(arg1, void **, 0x38), s16 *, 0x14);
        it = M2C_FIELD(*(void **)arg0, void *(**)(void *, void *), 0x7C)((char *)arg0 + M2C_FIELD(*(void **)arg0, s16 *, 0x78), NULL);
        while (it != NULL) {
            if (M2C_FIELD(M2C_FIELD(it, void **, 0x38), s16 *, 0x14) == id && M2C_FIELD(M2C_FIELD(it, void **, 0x38), s32 *, 0xC0) != 0 && fn_8016CC2C(it, arg1) != 0) {
                total += fn_8014FDB4(arg0, it);
            }
            it = M2C_FIELD(*(void **)arg0, void *(**)(void *, void *), 0x7C)((char *)arg0 + M2C_FIELD(*(void **)arg0, s16 *, 0x78), it);
        }
    } else {
        total = fn_8014FDB4(arg0, arg1);
    }
    return total;
}

s32 fn_8014FDB4(void *arg0, void *arg1) {
    u8 *p = M2C_FIELD(M2C_FIELD(arg1, void **, 0x38), u8 **, 0xC0);
    return p != NULL ? *(s32 *)(p + 0x14) : 0;
}

void fn_8014FDD0(void) {

}

void fn_8014FDD4(void) {

}

s32 fn_8014FDD8(void) {
    return 1;
}

s32 fn_801501D0(void *self, s32 arg1, s32 arg2, void *obj, s32 arg4) {
    s32 result;
    if (arg1 == -1) {
        result = 0;
    } else if (arg4 == 0) {
        u8 *vt = M2C_FIELD(obj, u8 **, 0);
        result = (*(s32 (**)(void *))(vt + 0x34))((u8 *)obj + *(s16 *)(vt + 0x30));
    } else {
        u8 *vt = M2C_FIELD(obj, u8 **, 0);
        result = (*(s32 (**)(void *))(vt + 0x3C))((u8 *)obj + *(s16 *)(vt + 0x38));
    }
    return result;
}

s32 fn_80150238(void *self, s32 arg1, s32 arg2, s32 arg3, void *obj) {
    s32 result;
    if (arg1 != -1) {
        u8 *vt = M2C_FIELD(obj, u8 **, 0);
        result = (*(s32 (**)(void *))(vt + 0x44))((u8 *)obj + *(s16 *)(vt + 0x40));
    } else {
        result = 0;
    }
    return result;
}

s32 fn_8015027C(char *self, s32 arg1, s32 arg2, s32 arg3) {
    char *vt;
    char *r;
    s32 result;

    if (arg3 != 1) {
        result = 0;
    } else {
        vt = *(char **)self;
        r = (*(char *(**)(void *, s32))(vt + 0x3C))(self + *(s16 *)(vt + 0x38), arg2);
        vt = *(char **)(r + 0x10);
        result = (*(s32 (**)(void *, s32))(vt + 0x7C))(r + *(s16 *)(vt + 0x78), arg1);
    }
    return result;
}

void fn_80150520(char *self, s32 arg1, s32 arg2) {
    extern void fn_800F687C(void *, void *, s32);
    extern void fn_800F59D8(void *, s32);
    char *obj;
    char buf[0x110];

    {
        char *vt = *(char **)self;
        obj = M2C_FIELD(vt, char *(**)(void *), 0x3C)(self + M2C_FIELD(vt, s16 *, 0x38));
    }
    if (obj != NULL) {
        char *p = ({ char *t = buf; fn_800F687C(t, t + 8, 0x104); t; });
        char *vt = M2C_FIELD(obj, char **, 0x10);
        M2C_FIELD(vt, void (**)(void *, void *), 0x5C)(obj + M2C_FIELD(vt, s16 *, 0x58), p);
        fn_800F59D8(p, arg2);
    }
}

s32 fn_801505A4(char *self, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 != -1) {
        char *obj;
        {
            char *vt = *(char **)self;
            obj = M2C_FIELD(vt, char *(**)(void *), 0x3C)(self + M2C_FIELD(vt, s16 *, 0x38));
        }
        if (obj != NULL) {
            char *vt = M2C_FIELD(obj, char **, 0x10);
            M2C_FIELD(vt, void (**)(void *, s32, s32), 0xCC)(obj + M2C_FIELD(vt, s16 *, 0xC8), arg2, arg3);
            return 1;
        }
    }
    return 0;
}

s32 fn_80150628(char *self, s32 arg1, s32 arg2, s16 *out) {
    if (arg1 != -1) {
        char *obj;
        {
            char *vt = *(char **)self;
            obj = M2C_FIELD(vt, char *(**)(void *), 0x3C)(self + M2C_FIELD(vt, s16 *, 0x38));
        }
        if (obj != NULL) {
            char *vt = M2C_FIELD(obj, char **, 0x10);
            *out = M2C_FIELD(vt, s16 (**)(void *, s32), 0xD4)(obj + M2C_FIELD(vt, s16 *, 0xD0), arg2);
            return 1;
        }
    }
    return 0;
}

s32 fn_801506AC(void) {
    return 0;
}

s32 fn_801506B4(void) {
    return 0;
}

void fn_80150F98(void *self) {
    extern void fn_803A479C(void *, void *);
    s32 *p = (s32 *)((char *)self + 0x6DC);
    if (p[2] != 0) {
        fn_803A479C(p, (void *)((s32 *)p[1])[1]);
        ((s32 *)p[1])[2] = p[1];
        ((s32 *)p[1])[1] = 0;
        ((s32 *)p[1])[3] = p[1];
        p[2] = 0;
    }
}

void fn_80150FFC(s32 arg0) {
    M2C_UNK fn_800F69E8(s32);
    fn_800F69E8(arg0 + 0x560);
}

s32 fn_80151020(s32 arg0) {
    return arg0 + 4;
}

s32 fn_80151028(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6A0);
}

s32 fn_80151030(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6D4);
}

s32 fn_80151038(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6D0);
}

s32 fn_80151040(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6D8);
}

void fn_80151048(s32 *self, s32 arg1, s32 arg2) {
    extern char *lbl_80496668;
    char *obj = lbl_80496668;
    char *vt = *(char **)obj;
    s32 r = (*(s32 (**)(char *))(vt + 0x23C))(obj + *(s16 *)(vt + 0x238));
    obj = lbl_80496668;
    vt = *(char **)obj;
    r = (*(s32 (**)(char *, s32))(vt + 0x94))(obj + *(s16 *)(vt + 0x90), r);
    self[0] = r;
    self[1] = r;
    self[2] = arg2;
}

extern void fn_803A479C(void *, void *);
extern char *lbl_80496668;
s32 *fn_801510BC(s32 *self, s32 a, s32 b) {
    s32 *p = self;
    p[0] = a;
    p[1] = a;
    p[2] = b;
    return self;
}

s32 fn_801510D0(s32 *self, s32 *other) {
    s32 r;
    if (other[1] == self[1]) {
        if (other[1] == 0) {
            return 1;
        }
        r = 1;
        if (other[0] == self[0]) {
            return r;
        }
    }
    return 0;
}

void fn_801511F4(void) {
    M2C_UNK fn_80151338();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x20E0);
    fn_80151338();
}

void fn_8015121C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

void fn_80151734(void) {

}

void fn_80152310(void) {

}

void fn_80154BB4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2048) = (s32) M2C_FIELD(arg0, s32 *, 0x2044);
}

s32 fn_80156444(void) {
    return 0;
}

void fn_8015644C(void) {

}

void fn_80156450(void) {

}

void fn_801566DC(void) {

}

void fn_801566E0(void) {

}

void fn_801566E4(void) {

}

void fn_801566E8(void) {

}

s32 fn_80156DB8(void *arg0) {
    u8 *p = M2C_FIELD(arg0, u8 **, 0x2088);
    return p != NULL ? *(s32 *)(p + 4) : 0;
}

s32 fn_80156DD0(void *arg0, void *arg1) {
    extern void fn_801051C8(s32, s32);
    void *r;

    if (arg1 != NULL) {
        void *vt = M2C_FIELD(arg1, void **, 4);
        r = M2C_FIELD(vt, void *(**)(void *), 0x4D4)((u8 *)arg1 + M2C_FIELD(vt, s16 *, 0x4D0));
    } else {
        r = NULL;
    }
    if (M2C_FIELD(arg0, void **, 0x2088) != NULL && r != NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, void **, 0x2088) != r) {
        M2C_FIELD(arg0, void **, 0x2088) = r;
        fn_801051C8(0x103, 0);
    }
    return 1;
}

void fn_80156E5C(void *arg0) {
    extern char lbl_803D96F8[];
    u8 *p = M2C_FIELD(arg0, u8 **, 0x2088);
    if (p != NULL) {
        u8 *obj = M2C_FIELD(p, u8 **, 4);
        u8 *vt = M2C_FIELD(obj, u8 **, 4);
        M2C_FIELD(vt, void (**)(void *, char *), 0xC4)(obj + M2C_FIELD(vt, s16 *, 0xC0), lbl_803D96F8);
    }
}

void fn_801573F4(void *arg0, s32 arg1) {
    extern u8 *lbl_80496660;
    u8 *obj = lbl_80496660;
    u8 *vt = M2C_FIELD(obj, u8 **, 0x3A4);
    M2C_FIELD(vt, void (**)(void *, s32, s32), 0x7C)(obj + M2C_FIELD(vt, s16 *, 0x78), 0, arg1);
}

s32 fn_80157434(void) {
    extern u8 *lbl_80496650;
    extern u8 *lbl_80496648;
    u8 *obj = lbl_80496650;
    u8 *obj2;
    if (obj == NULL
        || ((*(s32 (**)(void *))(*(u8 **)obj + 0x1DC))(obj + *(s16 *)(*(u8 **)obj + 0x1D8)) == 0
            && (*(s32 (**)(void *))(*(u8 **)lbl_80496650 + 0x1E4))(lbl_80496650 + *(s16 *)(*(u8 **)lbl_80496650 + 0x1E0)) == 0
            && ((obj2 = lbl_80496648) == NULL
                || (*(s32 (**)(void *))(*(u8 **)obj2 + 0xEC))(obj2 + *(s16 *)(*(u8 **)obj2 + 0xE8)) <= 0x5B))) {
        return 0;
    }
    return 1;
}

s32 fn_801574D8(void) {
    extern u8 *lbl_80496660;
    u8 *obj = lbl_80496660;
    u8 *vt = *(u8 **)(obj + 0x3A4);
    (*(void (**)(void *))(vt + 0x8C))(obj + *(s16 *)(vt + 0x88));
    return 0;
}

void fn_80157514(void) {
    extern u8 *lbl_80496660;
    u8 *obj = lbl_80496660;
    u8 *vt = *(u8 **)(obj + 0x3A4);
    (*(void (**)(void *))(vt + 0x74))(obj + *(s16 *)(vt + 0x70));
}

void fn_8015763C(void *self, s32 idx, s32 bits, s32 set) {
    s32 off = (idx - 1) * 4;
    *(u32 *)((u8 *)M2C_FIELD(self, u32 **, 0x1C) + off) &= ~(bits << 16);
    if (set != 0) {
        *(u32 *)((u8 *)M2C_FIELD(self, u32 **, 0x1C) + off) |= bits << 16;
    }
}

s32 fn_80157674(void *self, s32 idx, s32 mask) {
    s32 off = (idx - 1) * 4;
    return (*(u32 *)((u8 *)M2C_FIELD(self, u32 **, 0x1C) + off) & (mask << 16)) != 0;
}

s16 fn_8015769C(void *self, s32 idx) {
    s32 off = (idx - 1) * 4;
    return *(s16 *)((u8 *)M2C_FIELD(self, u32 **, 0x1C) + off + 2);
}

void fn_801576B4(void *self, s32 idx, s32 val) {
    s32 off = (idx - 1) * 4;
    *(u32 *)((u8 *)M2C_FIELD(self, u32 **, 0x1C) + off) &= 0xFFFF0000;
    *(u32 *)((u8 *)M2C_FIELD(self, u32 **, 0x1C) + off) |= (u16)val;
}

s32 fn_801576E4(void *self, s32 idx) {
    s32 *p;
    s32 off;
    s32 r;
    if (idx <= 0 || idx > M2C_FIELD(self, s32 ***, 0x2094) - M2C_FIELD(self, s32 ***, 0x2090)) {
        return 0;
    }
    off = (idx - 1) * 4;
    r = 0;
    p = *(s32 **)((u8 *)M2C_FIELD(self, s32 ***, 0x2090) + off);
    if (p != NULL) {
        r = p[1];
    }
    return r;
}

s32 fn_8015794C(void *self, s32 id) {
    s32 *p;
    s32 **arr;
    u32 idx = id - 0x4000;
    if (idx <= 15) {
        arr = (s32 **)((char *)self + 0x20A0);
        p = arr[idx];
        return p != NULL ? p[1] : 0;
    }
    p = *(s32 **)(id * 4 + M2C_FIELD(self, char **, 0x2090));
    return p != NULL ? p[1] : 0;
}

s32 fn_801579A0(void *self) {
    s32 *p;
    s32 i;
    s32 n;

    p = (s32 *)((char *)self + 0x20A0);
    n = 0;
    for (i = 0; i < 16; i++) {
        if (*p++ != 0) {
            n++;
        }
    }
    return (M2C_FIELD(self, s32 **, 0x2094) - M2C_FIELD(self, s32 **, 0x2090)) + n;
}

extern s32 lbl_8049665C;
s32 fn_801579E0(void) {
    return lbl_8049665C;
}

void fn_801579E8(char *self, s32 arg1, s32 arg2) {
    char *vt = *(char **)self;
    (*(void (**)(char *, s32, s32, s32))(vt + 0x24C))(self + *(s16 *)(vt + 0x248), arg1, arg2, 0);
}

s32 fn_80157A20(void *arg0) {
    u8 *p = M2C_FIELD(arg0, u8 **, 0x2C);
    return p != NULL ? *(s32 *)(p + 4) : 0;
}

extern s32 lbl_80496648;
s32 fn_80157A38(void) {
    return lbl_80496648;
}

s32 fn_80157A40(void *self, s32 i) {
    u8 *p = *(u8 **)(M2C_FIELD(self, char **, 0x2058) + (i << 2));
    return p != NULL ? *(s32 *)(p + 4) : 0;
}

s32 fn_80157A60(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x205C) - M2C_FIELD(arg0, s32 *, 0x2058)) >> 2;
}

s32 fn_80157A74(void *self, s32 i) {
    return *(s32 *)(M2C_FIELD(self, char **, 0x2068) + (i << 2));
}

s32 fn_80157A84(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x206C) - M2C_FIELD(arg0, s32 *, 0x2068)) >> 2;
}

s32 fn_80157A98(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x2078) + (arg1 * 0x3C);
}

s32 fn_80157AA8(void *arg0) {
    return (s32) ((M2C_FIELD(arg0, s32 *, 0x207C) - M2C_FIELD(arg0, s32 *, 0x2078)) * 0xEEEEEEEF) >> 2;
}

s32 fn_80157AC8(void *arg0) {
    s32 var_r11;

    var_r11 = 1;
    if (((u32) (M2C_FIELD(arg0, s32 *, 0x2038) - M2C_FIELD(arg0, s32 *, 0x2034)) >> 2U) == 0) {
        var_r11 = 0;
    }
    return var_r11;
}

extern s32 lbl_80495BE0;
extern void fn_800F1A60(s32, s32);
void fn_80157AEC(void) {
    fn_800F1A60((s32)&lbl_80495BE0, 2);
}

void fn_80157F24(void) {

}

s32 fn_80157F28(void *self) {
    s16 *fn_80141C5C(s32, s32);
    s32 found = 0;
    u8 *end = M2C_FIELD(self, u8 **, 0xB4);
    u8 *p;
    u8 *obj;
    u8 *e;

    for (p = M2C_FIELD(self, u8 **, 0xB0); p != end; p += 0x6C) {
        s32 has = *(s32 *)(p + 0x10) != 0;
        if (has) {
            found = 1;
            break;
        }
    }
    obj = M2C_FIELD(self, u8 **, 4);
    e = *(u8 **)(obj + 4) + 0x2D8;
    if ((*(s32 (**)(void *))(e + 4))(obj + *(s16 *)e) == 2 ||
        *fn_80141C5C((s32)self + 0x28, 0x19) != 0 || !found) {
        return 1;
    }
    return 0;
}

void fn_80157FDC(s32 *arg0) {
    M2C_UNK fn_801A1E50(s32);
    fn_801A1E50(*arg0);
}

s64 fn_80158338(void) {
    return 1;
}

extern s32 lbl_80495BE8;
void fn_8015A3FC(void) {
    fn_800F1A60((s32)&lbl_80495BE8, 2);
}

extern s32 lbl_80495BF0;
void fn_8015A424(void) {
    fn_800F1A60((s32)&lbl_80495BF0, 2);
}

extern s32 lbl_80495BF8;
void fn_8015A44C(void) {
    fn_800F1A60((s32)&lbl_80495BF8, 2);
}

extern s32 lbl_80495C00;
void fn_8015A474(void) {
    fn_800F1A60((s32)&lbl_80495C00, 2);
}

extern s32 lbl_80495C08;
void fn_8015A49C(void) {
    fn_800F1A60((s32)&lbl_80495C08, 2);
}

extern s32 lbl_80495C10;
void fn_8015A4C4(void) {
    fn_800F1A60((s32)&lbl_80495C10, 2);
}

extern s32 lbl_80495C18;
void fn_8015A4EC(void) {
    fn_800F1A60((s32)&lbl_80495C18, 2);
}

extern s32 lbl_80495C20;
void fn_8015A514(void) {
    fn_800F1A60((s32)&lbl_80495C20, 2);
}

extern s32 lbl_80495C28;
void fn_8015A53C(void) {
    fn_800F1A60((s32)&lbl_80495C28, 2);
}

extern s32 lbl_80495C30;
void fn_8015A564(void) {
    fn_800F1A60((s32)&lbl_80495C30, 2);
}

void fn_80161548(void) {
    void fn_802D20E8(void *);
    void fn_803997AC(void *, u32);
    extern u8 lbl_80434C58[];
    u8 *p = *(u8 **)lbl_80434C58;
    if (p != NULL) {
        u32 size = (*(u32 *)(lbl_80434C58 + 0xC) - (u32)p) & ~3;
        if (size > 0x80) {
            fn_802D20E8(p);
        } else {
            fn_803997AC(p, size);
        }
    }
}

void fn_8016204C(void) {
    extern struct { s32 a; s32 b; s32 c; } lbl_80434DB8[];
    s32 i;
    for (i = 0; i < 12; i++) {
        if (i == 0 || (u32)(i - 10) <= 2) {
            lbl_80434DB8[i].a = 1;
        } else {
            lbl_80434DB8[i].a = 0;
        }
        lbl_80434DB8[i].b = 15;
        lbl_80434DB8[i].c = 0;
    }
}

void fn_80162914(void *arg0, s32 arg1) {
    void *fn_8015125C(s32, s32);
    extern void *lbl_80496650;
    void *p;
    void *vt;
    void *obj;
    p = M2C_FIELD(arg0, void **, 0x58);
    vt = *(void **)p;
    M2C_FIELD(vt, void (**)(void *, s32, s32), 0x64)(p + M2C_FIELD(vt, s16 *, 0x60), M2C_FIELD(arg0, s16 *, 0x64), arg1);
    obj = arg0 != NULL ? fn_8015125C(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0), 2) : NULL;
    if (obj != NULL) {
        M2C_FIELD(*(void **)lbl_80496650, void (**)(void *, void *), 0x10C)((char *)lbl_80496650 + M2C_FIELD(*(void **)lbl_80496650, s16 *, 0x108), obj);
    }
}

s64 fn_80162F80(void *arg0, void *arg1, s16 *arg2) {
    s64 fn_80166A5C(void *, s32, s32, s32, s32, s16 *);
    s16 local;
    if (fn_80166A5C(arg0, arg2[1], arg2[0], 0, 0, &local) == -1) {
        return -1;
    }
    local = 0;
    return 1;
}

void *fn_801658B8(void **self) {
    extern void *fn_801A23AC(void *);
    extern s16 *fn_80141C5C(void *, s32);
    extern void fn_80142174(void *, s32, s16);
    extern void fn_8019CFF4(void *);
    void *ret = fn_801A23AC(*self);

    if (ret != NULL) {
        char *p = (char *)self + 0x28;
        char **vec;
        char *it;

        if (*fn_80141C5C(p, 0x19) != 0) {
            fn_80142174(p, 0x19, *fn_80141C5C(p, 0x19) - 1);
        }
        vec = (char **)((char *)self + 0xB0);
        for (it = vec[0]; it != vec[1]; it += 0x6C) {
            fn_8019CFF4(it);
        }
    }
    return ret;
}

s64 fn_80165DA8(char *self, char *arg1, s16 *arg2) {
    extern void *lbl_80496644;
    extern void fn_8010CBA8(void *, s32);

    fn_8010CBA8(lbl_80496644, *arg2 != 0 ? M2C_FIELD(arg1, s16 *, 4) : M2C_FIELD(self, s16 *, 0x64));
    return 1;
}

s32 fn_801660AC(void **self, char *obj, s32 arg2, s32 arg3, s32 arg4) {
    extern s32 fn_801A1B50(void *, void *, s32, void *, s32);
    char *vt = *(char **)obj;
    void *r = M2C_FIELD(vt, void *(**)(void *, s32), 0x4C)(obj + M2C_FIELD(vt, s16 *, 0x48), arg3);

    if (r == NULL) {
        return 0;
    }
    return fn_801A1B50(*self, obj, arg2, r, arg4);
}

s32 fn_801669D0(f32 x) {
    if (!(x < 0.0f)) {
        return x + 0.5;
    }
    return x - 0.5;
}

void fn_80166A1C(void) {
    extern void **lbl_80495C3C;
    void **obj = lbl_80495C3C;
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *))(vt + 0x1C))((char *)obj + *(s16 *)(vt + 0x18));
    }
}

s64 fn_80168EC0(void) {
    return 0;
}

void fn_801690B0(void) {

}

extern u8 lbl_803D9C80[];
void *fn_8016A870(void) {
    return lbl_803D9C80;
}

s16 fn_8016BD5C(void *self, s32 arg1, s32 arg2) {
    extern S16Table10 lbl_803D9CF8;
    S16Table10 t;
    s16 a;
    s16 b;
    s16 d;

    t = lbl_803D9CF8;
    a = t.v[arg1];
    b = t.v[arg2];
    if (a == -1 || b == -1) {
        return 5;
    }
    d = a - b;
    while (d < -4) {
        d += 8;
    }
    while (d > 4) {
        d -= 8;
    }
    if (d < 0) {
        d = -d;
    }
    return d;
}

void fn_8016BFB4(void) {
    M2C_UNK fn_8016BE04(M2C_UNK, M2C_UNK);
    fn_8016BE04(1, 0xFFFF);
}

void fn_8016BFE0(void) {
    M2C_UNK fn_8016BE04(M2C_UNK, M2C_UNK);
    fn_8016BE04(0, 0xFFFF);
}

