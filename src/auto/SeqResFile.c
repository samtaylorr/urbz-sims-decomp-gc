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

extern s32 lbl_80495D10;
extern void fn_800F1A60(s32, s32);
void fn_80197AC8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
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
    void fn_800F687C(void *, void *, s32);
    void fn_800F5A4C(void *, s32, void *);
    char a[0x110];
    char b[0x114];
    char *vt;
    void *obj;

    vt = M2C_FIELD(arg0, char **, 0x10);
    if (M2C_FIELD(vt, s32 (**)(void *), 0x64)((char *)arg0 + M2C_FIELD(vt, s16 *, 0x60)) != 0) {
        fn_800F687C(a, a + 8, 0x104);
        fn_800F687C(b, b + 8, 0x104);
        obj = fn_80102DAC(arg0, 0);
        vt = M2C_FIELD(obj, char **, 0x10);
        M2C_FIELD(vt, void (**)(void *, void *), 0x5C)((char *)obj + M2C_FIELD(vt, s16 *, 0x58), a);
        fn_800F5A4C(a, arg1, b);
    }
}

void *fn_80198444(void *arg0) {
    void fn_80102B5C(void *);
    void fn_800F687C(void *, void *, s32);
    void fn_800F68F0(void *, s32, s32);
    void fn_800F6A38(void *, void *);
    extern s32 lbl_80414248[];
    s32 i;
    char *p;
    char buf[0x10];

    i = 8;
    p = (char *)arg0 + 0xD4;
    fn_80102B5C(arg0);
    M2C_FIELD(arg0, s32 **, 0x10) = lbl_80414248;
    do {
        fn_800F687C(p + 4, p + 0xC, 8);
        p += 0x14;
    } while (i-- != 0);
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    fn_800F687C(buf, buf + 8, 8);
    fn_800F68F0(buf, 0, -1);
    fn_800F6A38((char *)arg0 + 0xD8, buf);
    return arg0;
}

s32 fn_801984E0(s32 arg0, s32 arg1) {
    s32 var_r0;

    if (arg1 != 0xE) {
        if (arg1 != 0xF) {
            var_r0 = 0;
            if (arg1 == 0x10) {
                var_r0 = arg0;
            }
            return var_r0;
        }
    }
    return arg0;
}

void fn_8019882C(void) {
    fn_800F1A60((s32)&lbl_80495D10, 2);
}

void fn_801991B4(void) {

}

void fn_801991B8(void) {

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

void fn_80199720(void *arg0) {
    SeqRes_Init(arg0);
}

void fn_80199EB8(s32 *self) {
    self[0] = 1;
}

void fn_80199FF8(s32 arg0, s32 arg1) {
    extern u8 lbl_804353F4[];
    void fn_80199720(void *);
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

