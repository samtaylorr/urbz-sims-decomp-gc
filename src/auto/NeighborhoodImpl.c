/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80123160(void) {
    M2C_UNK fn_801234B4();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x1D8);
    fn_801234B4();
}

void fn_80123188(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

M2C_UNK *fn_801231C8(void) {
    extern M2C_UNK lbl_80495B74;
    return &lbl_80495B74;
}

void fn_801236E8(void) {

}

void fn_8012373C(s32 arg0) {
    M2C_UNK fn_800F6A38(s32);
    fn_800F6A38(arg0 + 4);
}

void fn_801245D0(s32 arg0) {
    M2C_UNK fn_800F5974(s32);
    fn_800F5974(arg0 + 4);
}

void fn_80124758(char *self, s32 arg1, void *arg2) {
    void fn_800F687C(void *, char *, s32);
    char *fn_800F69F0(void *);
    char *fn_800F69E8(void *);
    void fn_800F6A38(void *, void *);
    void fn_80245BB4(char *, const char *, ...);
    extern char lbl_803D8640[];
    typedef struct { s32 a; s32 b; char buf[0x104]; } Path;
    Path p1;
    Path p2;
    char *vt;
    char *s;

    fn_800F687C(&p1, p1.buf, 0x104);
    fn_800F687C(&p2, p2.buf, 0x104);
    vt = *(char **)self;
    M2C_FIELD(vt, void (**)(void *, void *), 0x3C)(self + M2C_FIELD(vt, s16 *, 0x38), &p2);
    s = fn_800F69F0(&p1);
    fn_80245BB4(s, lbl_803D8640, fn_800F69E8(&p2), arg1);
    fn_800F6A38(arg2, &p1);
}

s32 fn_80124808(void) {
    return 0;
}

s32 fn_80124810(void *self, s32 idx) {
    s32 *begin = M2C_FIELD(self, s32 **, 0x1B0);

    if (idx <= 0 || (u32)idx > (u32)(M2C_FIELD(self, s32 **, 0x1B4) - begin)) {
        return 0;
    }
    return begin[idx - 1];
}

void *fn_80124848(void *self, s32 id) {
    s32 fn_8012242C(void *);
    typedef struct { void **begin; void **end; } V;
    V *v;
    void **it;
    void *found;

    if (id == 0) {
        return NULL;
    }
    v = (V *)((char *)self + 0x1B0);
    found = NULL;
    for (it = v->begin; it != v->end; it++) {
        if (*it != NULL && fn_8012242C(*it) == id && found == NULL) {
            found = *it;
        }
    }
    return found;
}

void *fn_801248D0(void *self, s32 id) {
    typedef struct { void **begin; void **end; } V;
    V *v = (V *)((char *)self + 0x1B0);
    void **it;
    void *found = NULL;

    for (it = v->begin; it != v->end; it++) {
        if (*it != NULL && M2C_FIELD(*it, s32 *, 0xC) == id && found == NULL) {
            found = *it;
        }
    }
    return found;
}

s32 fn_80125014(void *arg0) {
    void *vt;
    void *p;

    vt = *(void **)arg0;
    p = M2C_FIELD(vt, void *(**)(void *), 0xDC)((char *)arg0 + M2C_FIELD(vt, s16 *, 0xD8));
    if (p != NULL) {
        return M2C_FIELD(p, s32 *, 0xC);
    }
    return 0;
}

s16 fn_8012505C(void *self, s16 arg1) {
    s32 *begin = M2C_FIELD(self, s32 **, 0x1B0);
    u32 n = M2C_FIELD(self, s32 **, 0x1B4) - begin;

    while ((u32)arg1 < n) {
        if (begin[arg1++] != 0) {
            return arg1;
        }
    }
    return 0;
}

s32 fn_80125674(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x1C4) - M2C_FIELD(arg0, s32 *, 0x1C0)) >> 2;
}

s32 fn_80125688(void *arg0, s32 arg1) {
    return *(s32 *)((char *)M2C_FIELD(arg0, s32 **, 0x1C0) + arg1 * 4);
}

s32 fn_80125698(char *self, s32 arg1) {
    typedef struct { s32 *begin; s32 *end; } V;
    V *v = (V *)(self + 0x1C0);
    u32 i;

    for (i = 0; i < (u32)(v->end - M2C_FIELD(self, s32 **, 0x1C0)); i++) {
        char *vt = *(char **)self;
        s32 (*f)(void *, s32) = M2C_FIELD(vt, s32 (**)(void *, s32), 0x134);
        if (f(self + M2C_FIELD(vt, s16 *, 0x130), i) == arg1) {
            return i;
        }
    }
    return -1;
}

s32 fn_80127CA0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}

void fn_80127CA8(void) {

}

void fn_80127F7C(void) {

}

extern s32 lbl_80495B9C;
s32 fn_80128338(void) {
    return lbl_80495B9C;
}

extern s32 lbl_80495BA0;
s32 fn_80128340(void) {
    return lbl_80495BA0;
}

extern s32 lbl_80495BA4;
s32 fn_80128348(void) {
    return lbl_80495BA4;
}

void fn_801285D0(s32 arg0) {
    M2C_UNK fn_800F7138(s32);
    fn_800F7138(arg0 + 0x110);
}

s16 fn_801285F4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x168);
}

void fn_801285FC(char *self, void *arg1) {
    void fn_800F6A38(void *, void *);
    fn_800F6A38(arg1, self + 4);
}

s32 fn_80128628(void *self, s32 i) {
    return ((struct { u8 pad[0x168]; s16 a[1]; } *)self)->a[i];
}

void *fn_80128638(void *arg0, s32 i) {
    return (u8 *)arg0 + (i * 2 + 0x168);
}

void fn_80128648(void *self, s32 i, s16 v) {
    ((struct { u8 pad[0x168]; s16 a[1]; } *)self)->a[i] = v;
}

s32 fn_801286A0(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x15C) - M2C_FIELD(arg0, s32 *, 0x158)) >> 2;
}

s16 fn_801286C4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x16A);
}

s32 fn_801286CC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x16E) == 0;
}

void fn_801286DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x16E) = (s16) (arg1 ^ 1);
}

void fn_801286E8(void) {

}

void fn_801286EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1D4) = arg1;
}

s32 fn_801286F4(s32 arg0) {
    return (u32)(arg0 - 10) <= 2;
}

void *fn_80128708(void *arg0) {
    void fn_80149BC8(void *, s32);
    extern char lbl_8040FD38[];
    fn_80149BC8(arg0, 4);
    *(void **)arg0 = lbl_8040FD38;
    return arg0;
}

void fn_80128748(void) {
    void fn_80128408(s32, s32);
    fn_80128408(1, 0xFFFF);
}

void fn_80128774(void) {
    void fn_80128408(s32, s32);
    fn_80128408(0, 0xFFFF);
}

