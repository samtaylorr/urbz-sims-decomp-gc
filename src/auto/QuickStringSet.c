/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80495A94;
extern s32 lbl_804943C0;

typedef struct QSSAlloc { u8 *unk0; u8 *cap; } QSSAlloc;
typedef struct QSSVec { u8 *begin; u8 *end; QSSAlloc alloc; } QSSVec;

static inline void QSSAlloc_Clear(QSSAlloc *a) {
    a->cap = 0;
}

static inline void QSSVec_Init(QSSVec *v) {
    v->begin = 0;
    v->end = 0;
    QSSAlloc_Clear(&v->alloc);
}

static inline s32 QVec_Count(s32 **vec) {
    s32 *arr = *vec;
    s32 n = 0;
    if (arr != NULL) {
        n = arr[-1];
    }
    return n;
}

static inline s32 QVec_At(s32 **vec, s32 i) {
    s32 *arr = *vec;
    return arr[i];
}

static inline void QSSVec_Dealloc(void *p, s32 end) {
    void fn_802D20E8(void *);
    void fn_803997AC(void *, u32);
    u32 size = (u32)(end - (s32)p) & ~3;
    if (size > 0x80) {
        fn_802D20E8(p);
    } else {
        fn_803997AC(p, size);
    }
}

static inline void QSSVec_Free(QSSVec *v) {
    void *p = (void *)v->begin;
    if (p != 0) {
        QSSVec_Dealloc(p, (s32)v->alloc.cap);
    }
}
s32 fn_800F6498(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x114) != 0;
}

void fn_800F661C(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F6A78(s32, s32, M2C_UNK);
    fn_800F68E0();
    fn_800F6A78(arg0, arg1, -1);
}

s32 fn_800F6688(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10C);
}

void fn_800F6690(void (*cb)(void)) {
    lbl_804943C0 = cb;
}

s32 fn_800F6698(void) {
    return lbl_80495A94;
}

void fn_800F66A0(void (*cb)(void)) {
    lbl_80495A94 = cb;
}

s32 fn_800F67E4(u32 arg0) {
    s32 fn_800F66D8();
    s32 temp_r31;
    s32 var_r30;

    temp_r31 = fn_800F66D8() % arg0;
    var_r30 = fn_800F66D8() % arg0;
    if (temp_r31 < var_r30) {
        var_r30 = temp_r31;
    }
    if (fn_800F66D8() & 1) {
        var_r30 = -var_r30;
    }
    return var_r30;
}

void fn_800F684C(u8 *dst, u16 *src) {
    while (*src != 0) {
        *dst++ = *src++;
    }
    *dst = 0;
}

void *fn_800F687C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    fn_800F68E0();
    return arg0;
}

s32 fn_800F68B4(s32 *self) {
    return self[1];
}

s32 fn_800F68BC(s32 *arg0) {
    s32 fn_80248808(s32);
    return fn_80248808(*arg0);
}

void fn_800F68E0(self)
    void *self;
{
    **(u8 **)self = 0;
}

s32 fn_800F69E8(s32 *self) {
    return *self;
}

s32 fn_800F69F0(s32 *self) {
    return *self;
}

void fn_800F69F8(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F68F0(s32, s32, M2C_UNK);
    fn_800F68E0();
    fn_800F68F0(arg0, arg1, -1);
}

void fn_800F6A38(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F6A78(s32, s32, M2C_UNK);
    fn_800F68E0();
    fn_800F6A78(arg0, arg1, -1);
}

void fn_800F6A78(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800F68F0(s32, s32, s32);
    fn_800F68F0(arg0, fn_800F69E8(arg1), arg2);
}

s32 fn_800F6ABC(s32 *arg0, s32 *arg1) {
    s32 fn_802486DC(s32, s32);
    s32 a = fn_800F69E8(arg0);
    return fn_802486DC(a, fn_800F69E8(arg1));
}

void fn_800F6B00(void *arg0, s32 *arg1) {
    void fn_800F6B50(void *, s32, s32);
    fn_800F6B50(arg0, fn_800F69E8(arg1), fn_800F68BC(arg1));
}

void fn_800F6C54(s32 *self) {
    s32 len = fn_800F68BC(self);
    s32 i;
    for (i = 0; i < len; i++) {
        u8 c = ((u8 *)*self)[i];
        if ((u8)(c - 'A') <= 25) {
            ((u8 *)*self)[i] = c + 0x20;
        }
    }
}

void fn_800F6CB4(s32 self, u8 c) {
    M2C_UNK fn_800F68F0(s32, s32, s32);
    u16 buf = c << 8;
    fn_800F68F0(self, (s32)&buf, -1);
}

void fn_800F6CE4(s32 self, s32 arg1) {
    s32 fn_80245BB4(char *, const char *, ...);
    M2C_UNK fn_800F68F0(s32, s32, s32);
    extern char lbl_803D5A5C[];
    char buf[32];

    fn_80245BB4(buf, lbl_803D5A5C, arg1);
    fn_800F68F0(self, (s32)buf, -1);
}

void fn_800F6D34(s32 self, s32 arg1) {
    s32 fn_80245BB4(char *, const char *, ...);
    M2C_UNK fn_800F68F0(s32, s32, s32);
    extern char lbl_803D5A60[];
    char buf[32];
    char fmt[32];

    fn_80245BB4(fmt, lbl_803D5A60);
    fn_80245BB4(buf, fmt, arg1);
    fn_800F68F0(self, (s32)buf, -1);
}

s32 fn_800F6D9C(s32 *self, char *str, s32 start) {
    s32 fn_80248808(s32);
    s32 fn_800F6C00(s32 *, s32);
    s32 len;
    s32 end;
    s32 i;
    s32 j;
    s32 found;

    len = fn_80248808((s32)str);
    end = fn_800F68BC(self) - len + 1;
    for (i = start; i < end; i++) {
        found = 1;
        for (j = 0; j < len; j++) {
            if (fn_800F6C00(self, i + j) != str[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            return i;
        }
    }
    return -1;
}

void fn_800F6F88(u16 *dst, const u8 *src) {
    while (*src != 0) {
        *dst++ = *src++;
    }
    *dst = 0;
}

void *fn_800F6FB4(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    fn_800F7018();
    return arg0;
}

s32 fn_800F6FEC(s32 *self) {
    return self[1];
}

s32 fn_800F6FF4(s32 *arg0) {
    s32 fn_800F8120(s32);
    return fn_800F8120(*arg0);
}

void fn_800F7018(s16 **arg0) {
    **arg0 = 0;
}

s32 fn_800F7138(s32 *self) {
    return *self;
}

s32 fn_800F7140(s32 *self) {
    return *self;
}

void fn_800F7148(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F7028(s32, s32, s32);
    fn_800F7018((s16 **)arg0);
    fn_800F7028(arg0, arg1, -1);
}

void fn_800F7188(s32 arg0, s32 arg1) {
    void fn_800F71C8(s32, s32, s32);
    fn_800F7018((s16 **)arg0);
    fn_800F71C8(arg0, arg1, -1);
}

void fn_800F71C8(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800F7028(s32, s32, s32);
    fn_800F7028(arg0, fn_800F7138(arg1), arg2);
}

s32 fn_800F720C(s32 *arg0, s32 *arg1) {
    s32 fn_800F8148(s32, s32);
    s32 a = fn_800F7138(arg0);
    return fn_800F8148(a, fn_800F7138(arg1));
}

void fn_800F7250(void *arg0, s32 *arg1) {
    void fn_800F72A0(void *, s32, s32);
    fn_800F72A0(arg0, fn_800F7138(arg1), fn_800F6FF4(arg1));
}

s32 fn_800F72A0(s32 *self, u16 *other, s32 n) {
    u16 *str = (u16 *)fn_800F7138(self);
    s32 len = fn_800F6FF4(self);
    s32 count = len;
    s32 i;
    if (count > n) {
        count = n;
    }
    for (i = 0; i < count; i++) {
        u16 a = str[i];
        u16 b = other[i];
        s32 d;
        if ((u16)(a - 'A') <= 25) {
            a += 0x20;
        }
        if ((u16)(b - 'A') <= 25) {
            b += 0x20;
        }
        d = a - b;
        if (d != 0) {
            return d;
        }
    }
    return len - n;
}

u16 fn_800F7350(s32 *self, s32 i) {
    if (i >= 0 && i < fn_800F6FF4(self)) {
        return ((u16 *)fn_800F7138(self))[i];
    }
    return 0;
}

u16 *fn_800F73A4(s32 *self, s32 i) {
    if (i >= 0 && i < fn_800F6FF4(self)) {
        return (u16 *)fn_800F7138(self) + i;
    }
    return 0;
}

void fn_800F73F8(s32 *self) {
    s32 len = fn_800F6FF4(self);
    s32 i;
    for (i = 0; i < len; i++) {
        u16 c = ((u16 *)*self)[i];
        if ((u16)(c - 'A') <= 25) {
            ((u16 *)*self)[i] = c + 0x20;
        }
    }
}

void fn_800F745C(s32 self, u16 c) {
    M2C_UNK fn_800F7028(s32, s32, s32);
    u16 buf[2];

    buf[0] = c;
    buf[1] = 0;
    fn_800F7028(self, (s32)buf, -1);
}

void fn_800F7494(s32 self, s32 arg1) {
    s32 fn_80245BB4(char *, const char *, ...);
    M2C_UNK fn_800F7028(s32, s32, s32);
    extern char lbl_803D5A68[];
    char buf[32];
    u16 wbuf[32];

    fn_80245BB4(buf, lbl_803D5A68, arg1);
    fn_800F6F88(wbuf, (const u8 *)buf);
    fn_800F7028(self, (s32)wbuf, -1);
}

void fn_800F74F4(s32 self, s32 arg1) {
    s32 fn_80245BB4(char *, const char *, ...);
    M2C_UNK fn_800F7028(s32, s32, s32);
    extern char lbl_803D5A6C[];
    char buf[32];
    char fmt[32];
    u16 wbuf[32];
    u16 *w;
    char *f;

    w = wbuf;
    f = fmt;
    fn_80245BB4(f, lbl_803D5A6C);
    fn_80245BB4(buf, f, arg1);
    fn_800F6F88(w, (const u8 *)buf);
    fn_800F7028(self, (s32)w, -1);
}

s32 fn_800F756C(s32 *self, u16 *str, s32 start) {
    s32 fn_800F8120(s32);
    s32 len;
    s32 end;
    s32 i;
    s32 j;
    s32 found;

    len = fn_800F8120((s32)str);
    end = fn_800F6FF4(self) - len + 1;
    for (i = start; i < end; i++) {
        found = 1;
        for (j = 0; j < len; j++) {
            if (fn_800F7350(self, i + j) != str[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            return i;
        }
    }
    return -1;
}

void fn_800F7708(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F7744(s32, s32);
    fn_800F7744(arg0, fn_800F69E8(arg1));
}

void fn_800F7744(s32 arg0, s32 arg1) {
    s32 fn_80248808(s32);
    void *fn_802D2058(s32);
    void fn_802D211C(void *);
    u16 *buf;

    buf = fn_802D2058((fn_80248808(arg1) + 1) * 2);
    fn_800F6F88(buf, (const u8 *)arg1);
    fn_800F7148(arg0, (s32)buf);
    if (buf != 0) {
        fn_802D211C(buf);
    }
}

void fn_800F77AC(void) {
    M2C_UNK fn_800F788C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_800F788C();
}

void fn_800F77D4(void) {
    M2C_UNK fn_800F788C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_800F788C();
}

void fn_800F77FC(void) {
    M2C_UNK fn_800F788C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_800F788C();
}

void fn_800F7824(void) {
    M2C_UNK fn_800F788C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_800F788C();
}

void fn_800F784C(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x64))((char *)obj + *(s16 *)(vt + 0x60), 3);
    }
}

s32 *fn_800F788C(s32 *self) {
    extern char lbl_8040D178[];
    extern s32 lbl_804943C4;
    self[1] = 0;
    self[0] = (s32)lbl_8040D178;
    self[2] = 0;
    self[3] = (s32)&lbl_804943C4;
    self[4] = 0;
    return self;
}

extern u8 lbl_8040D2A8[];
extern void fn_802D20E8(void *);
void fn_800F78B8(void **self, s32 flags) {
    *self = lbl_8040D2A8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800F78EC(void) {

}

s32 fn_800F78F0(void *arg0) {
    s32 *p = M2C_FIELD(arg0, s32 **, 8);
    if (p != NULL) {
        s32 *q = *(s32 **)p;
        s32 r = 0;
        if (q != NULL) {
            r = q[-1];
        }
        return r;
    }
    return 0;
}

void fn_800F791C(char *self) {
    char *vt = *(char **)self;
    (*(void (**)(char *, s32))(vt + 0x74))(self + *(s16 *)(vt + 0x70), 0);
}

s32 fn_800F7954(void *self, s32 idx) {
    s32 **vec = M2C_FIELD(self, s32 ***, 8);
    if (vec != NULL) {
        if (idx <= 0 || idx > QVec_Count(vec)) {
            return 0;
        }
        return QVec_At(vec, idx - 1);
    }
    return 0;
}

void fn_800F79A4(s32 *out, void *self, s32 idx) {
    s32 **vec = M2C_FIELD(self, s32 ***, 4);
    if (vec != NULL) {
        if (idx <= 0 || idx > QVec_Count(vec)) {
            *out = M2C_FIELD(self, s32 *, 0xC);
            return;
        }
        *out = QVec_At(vec, idx - 1);
        return;
    }
    *out = M2C_FIELD(self, s32 *, 0xC);
}

s32 fn_800F7A00(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        return 0;
    }
    return 0;
}

void fn_800F7A10(void) {

}

void fn_800F7A14(void) {

}

void fn_800F7A18(void) {

}

void fn_800F7A1C(void) {

}

s32 fn_800F7A20(void) {
    return 0;
}

void fn_800F7A28(void) {

}

void fn_800F68E0(void *);
void fn_800F7A2C(void *self, void *arg) {
    fn_800F68E0(arg);
}

void fn_800F7A50(void) {

}

void fn_800F7A54(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    extern u8 *lbl_8049665C;
    void fn_800F7C3C(void *, void *, s32, s32, s32, s32);
    u8 *e = *(u8 **)lbl_8049665C + 0x38;
    void *obj = (*(void *(**)(u8 *))(e + 4))(lbl_8049665C + *(s16 *)e);
    fn_800F7C3C(arg0, obj, arg2, arg3, arg4, arg5);
}

void fn_800F7B34(void *arg0, s32 arg1, s32 arg2) {
    extern u8 *lbl_8049665C;
    void fn_800F7D14(void *, void *, s32);
    void *obj;
    obj = (*(void *(**)(u8 *))(*(u8 **)lbl_8049665C + 0x3C))(lbl_8049665C + *(s16 *)(*(u8 **)lbl_8049665C + 0x38));
    fn_800F7D14(arg0, obj, arg2);
}

void fn_800F7B8C(void *arg0, s32 arg1, s32 arg2) {
    extern u8 *lbl_8049665C;
    void fn_800F7E18(void *, void *, s32);
    void *obj;
    obj = (*(void *(**)(u8 *))(*(u8 **)lbl_8049665C + 0x3C))(lbl_8049665C + *(s16 *)(*(u8 **)lbl_8049665C + 0x38));
    fn_800F7E18(arg0, obj, arg2);
}

void fn_800F7BE4(void *arg0, s32 arg1, s32 arg2) {
    extern u8 *lbl_8049665C;
    void fn_800F7E98(void *, void *, s32);
    void *obj;
    obj = (*(void *(**)(u8 *))(*(u8 **)lbl_8049665C + 0x3C))(lbl_8049665C + *(s16 *)(*(u8 **)lbl_8049665C + 0x38));
    fn_800F7E98(arg0, obj, arg2);
}

void fn_800F7C3C(void *arg0, void *arg1, s32 arg2) {
    s32 fn_8039FDA4(void *, void *, s32);
    u8 *p;
    s32 n;
    void *t;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    if (arg1 != NULL) {
        t = M2C_FIELD(arg1, void **, 0xC);
        if (t != NULL) {
            p = M2C_FIELD(t, u8 **, 0x10);
            n = 0;
            if (p != NULL) {
                n = *(s32 *)(p - 4);
            }
            M2C_FIELD(arg0, s32 *, 8) = fn_8039FDA4(p, p + n * 0xC, arg2);
        }
    }
}

void fn_800F7CA8(void *arg0, void *arg1) {
    s32 fn_8039FE14(void *, void *);
    u8 *p;
    s32 n;
    void *t;

    if (arg1 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        t = M2C_FIELD(arg1, void **, 0xC);
        if (t != NULL) {
            p = M2C_FIELD(t, u8 **, 0x14);
            n = 0;
            if (p != NULL) {
                n = *(s32 *)(p - 4);
            }
            M2C_FIELD(arg0, s32 *, 4) = fn_8039FE14(p, p + n * 0xC);
        }
    }
}

s32 fn_800F7E18(void *arg0, void *arg1) {
    s32 fn_8039FE14(void *, void *);
    u8 *p;
    s32 n;
    void *t;

    if (arg1 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        t = M2C_FIELD(arg1, void **, 0xC);
        if (t != NULL) {
            p = M2C_FIELD(t, u8 **, 0x14);
            n = 0;
            if (p != NULL) {
                n = *(s32 *)(p - 4);
            }
            M2C_FIELD(arg0, s32 *, 4) = fn_8039FE14(p, p + n * 0xC);
        }
    }
    return M2C_FIELD(arg0, s32 *, 4) == 0 ? -1 : 0;
}

s32 fn_800F7E98(void) {
    return 0;
}

s32 fn_800F7EA0(void) {
    return 0;
}

s32 fn_800F7EA8(void) {
    return 0;
}

s16 fn_800F7EB0(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 8);
    if (temp_r9 != NULL) {
        return M2C_FIELD(temp_r9, s16 *, 8);
    }
    return 0;
}

void fn_800F7EC8(void) {

}

void fn_800F7ECC(void) {

}

void *fn_800F7ED0(void *arg0) {
    void fn_801B3814(void *, s32, s32);
    fn_801B3814(arg0, -1, 0);
    return arg0;
}

s32 fn_800F7F08(u8 **arg0, u8 *arg1) {
    u8 *vt = *arg0;
    return (*(s32 (**)(void *, s32, s16))(vt + 0xEC))((u8 *)arg0 + *(s16 *)(vt + 0xE8), *(s32 *)arg1, *(s16 *)(arg1 + 4)) == 0;
}

s32 fn_800F7F4C(void) {
    return 0;
}

s32 fn_800F7F54(void) {
    return 0;
}

s32 fn_800F7F5C(void) {
    return 0;
}

s32 fn_800F7F64(void) {
    return 0;
}

s32 fn_800F7F6C(void) {
    return 1;
}

s32 fn_800F7F74(void) {
    return 0;
}

s32 fn_800F7F7C(void *arg0, s32 arg1, void **arg2) {
    void *temp_r9;

    if (arg2 != NULL && (arg1 == 1 || arg1 == 0x6BC37BC5)) {
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r9, void (**)(void *), 0x14)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x10));
        *arg2 = arg0;
        return 1;
    }
    return 0;
}

s32 fn_800F7FEC(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_800F8000(void *arg0) {
    s32 var_r3;
    void *temp_r9;

    var_r3 = M2C_FIELD(arg0, s32 *, 0x10) - 1;
    M2C_FIELD(arg0, s32 *, 0x10) = var_r3;
    if (var_r3 == 0) {
        if (arg0 != NULL) {
            temp_r9 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_r9, void (**)(void *, s32), 0x64)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x60), 3);
        }
        return 0;
    }
    return var_r3;
}

void fn_800F805C(s32 *arg0) {
    void fn_800F80B4(s32 *);
    s32 a;
    s32 b;

    a = arg0[0];
    b = arg0[1];
    fn_800F80B4(&a);
    fn_800F80B4(&b);
    arg0[0] = b;
    arg0[1] = a;
}

void fn_800F80B4(s16 *arg0) {
    void fn_800F810C(s16 *);
    s16 a;
    s16 b;

    a = arg0[0];
    b = arg0[1];
    fn_800F810C(&a);
    fn_800F810C(&b);
    arg0[0] = b;
    arg0[1] = a;
}

void fn_800F810C(u8 *p) {
    u8 t = p[0];
    p[0] = p[1];
    p[1] = t;
}

s32 fn_800F8120(u16 *s) {
    s32 n = 0;

    while (*s != 0) {
        s++;
        n++;
    }
    return n;
}

s32 fn_800F8148(u16 *a, u16 *b) {
    s32 d;

    for (;;) {
        u16 c1 = *a;
        u16 c2 = *b;
        d = c1 - c2;
        if (d != 0) {
            break;
        }
        a++;
        if (c1 == 0) {
            break;
        }
        b++;
        if (c2 == 0) {
            break;
        }
    }
    return d;
}

u16 *fn_800F8178(u16 *dst, const u16 *src) {
    u16 *d = dst;

    while (*src != 0) {
        *d++ = *src++;
    }
    *d = 0;
    return dst;
}

u16 *fn_800F81A8(u16 *dst, const u16 *src, s32 n) {
    u16 *ret = dst;

    while (*src != 0 && n != 0) {
        *dst++ = *src++;
        n--;
    }
    while (n != 0) {
        *dst++ = 0;
        n--;
    }
    return ret;
}

s32 fn_800F86C8(void *arg0, s32 arg1) {
    s32 temp_r9;
    s32 var_r3;

    temp_r9 = (M2C_FIELD(arg0, s32 *, 4) + arg1) - M2C_FIELD(arg0, s32 *, 0);
    var_r3 = temp_r9;
    if (temp_r9 < 0) {
        var_r3 = temp_r9 + 0x7F;
    }
    return temp_r9 - (var_r3 & 0xFFFFFF80);
}

void *fn_800F86F4(void *arg0, s32 arg1) {
    s32 temp_r9;
    s32 var_r3;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0);
    if ((arg1 > temp_r9) || (arg1 <= (s32) (temp_r9 - 0x80))) {
        return NULL;
    }
    var_r3 = (M2C_FIELD(arg0, s32 *, 4) + arg1) - temp_r9;
    if (var_r3 < 0) {
        var_r3 += 0x80;
    }
    return arg0 + ((var_r3 * 8) + 8);
}

s32 fn_800F873C(void) {
    return 0;
}

extern s32 lbl_804943C8;
void fn_800F8820(void (*cb)(void)) {
    lbl_804943C8 = cb;
}

void fn_800F8BF4(s32 arg0) {
    M2C_UNK fn_80248488(s32, M2C_UNK, M2C_UNK);
    fn_80248488(arg0 + 0x2940, 0, 0x140);
}

void fn_800F8CB4(void) {

}

s32 fn_800F8EA4(void) {
    return 0;
}

void fn_800F9564(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x34) = farg0;
}

s32 fn_800F96C4(void *arg0) {
    s32 fn_800C488C();
    M2C_FIELD(arg0, s32 *, 0x38) = fn_800C488C();
    M2C_FIELD(arg0, s32 *, 0) = 1;
    return 1;
}

s32 fn_800F98E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    return 1;
}

s32 fn_800F98EC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_800F98F4(s32 *self) {
    return self[2];
}

s32 fn_800F98FC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_800F9904(s32 arg0) {
    return arg0 + 0x20;
}

void fn_800FA0F0(s32 *self, s32 value) {
    *self = value;
}

void fn_800FA0F8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

void fn_800FA100(s32 arg0) {
    M2C_UNK fn_800FB360(s32);
    fn_800FAE08();
    fn_800FB360(arg0);
}

s32 fn_800FB614(s32 *self) {
    return self[1];
}

s32 fn_800FB678(void *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 4) != 0)) {
        var_r9 = 1;
    }
    return var_r9;
}

char *fn_800FB6A0(void *arg0) {
    extern u8 *lbl_80496660;
    extern char lbl_803D5E1C[];
    char *s = NULL;
    if (arg0 != NULL) {
        s = (*(char *(**)(u8 *, void *))(*(u8 **)(lbl_80496660 + 0x3A4) + 0x15C))(lbl_80496660 + *(s16 *)(*(u8 **)(lbl_80496660 + 0x3A4) + 0x158), arg0);
    }
    return s ? s : lbl_803D5E1C;
}

void fn_800FB6F8(void) {
    M2C_UNK fn_800FB760();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(8);
    fn_800FB760();
}

void fn_800FB720(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

void **fn_800FB760(void **arg0) {
    extern char lbl_8040D418[];
    arg0[0] = lbl_8040D418;
    arg0[1] = 0;
    return arg0;
}

extern u8 lbl_8040D458[];
void fn_800FB77C(void **self, s32 flags) {
    *self = lbl_8040D458;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800FB7B0(void *arg0, s32 arg1, s32 arg2) {
    extern u8 *lbl_8049665C;
    s32 fn_803A053C(u8 *, u8 *, s32);
    u8 *obj;
    u8 *p;
    s32 n;
    s32 r;
    obj = (*(u8 *(**)(u8 *))(*(u8 **)lbl_8049665C + 0x3C))(lbl_8049665C + *(s16 *)(*(u8 **)lbl_8049665C + 0x38));
    p = *(u8 **)(*(u8 **)(obj + 0xC) + 4);
    n = 0;
    if (p != NULL) {
        n = *(s32 *)(p - 4);
    }
    r = fn_803A053C(p, p + n * 8, arg2);
    if (r != 0) {
        *(s32 *)((u8 *)arg0 + 4) = r;
        return 0;
    }
    return -1;
}

s16 fn_800FB878(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 4);
}

s16 fn_800FB884(void *arg0) {
    s32 var_r3;
    void *temp_r9;

    var_r3 = 0;
    temp_r9 = *M2C_FIELD(arg0, void ***, 4);
    if (temp_r9 != NULL) {
        var_r3 = M2C_FIELD(temp_r9, s32 *, -4);
    }
    return (s16) var_r3;
}

s32 fn_800FB8A4(void) {
    return 0;
}

void fn_800FB8AC(void) {
    extern void *lbl_80496648;
    void *vt;

    vt = *(void **)lbl_80496648;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x4C))((char *)lbl_80496648 + M2C_FIELD(vt, s16 *, 0x48));
}

extern u8 lbl_8040D5A0[];
void fn_800FC178(void **self, s32 flags) {
    *self = lbl_8040D5A0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_8040D548[];
void **fn_800FC1AC(void **self) {
    *self = lbl_8040D548;
    return self;
}

s32 fn_800FC360(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4);
}

s32 fn_800FC36C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8);
}

extern s32 lbl_804944B0;
s32 fn_800FC378(void) {
    return lbl_804944B0;
}

void fn_800FC6E0(void) {

}

s32 fn_800FC788(void *arg0, s32 arg1) {
    if ((u32) (arg1 - 0x100) > 0x2228U) {
        /* Duplicate return node #1. Try simplifying control flow for better match */
        return -1;
    }
    if (arg1 <= 0xFFF) {
        return lbl_804944B0;
    }
    if (arg1 <= 0x1FFF) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4);
    }
    if (arg1 <= 0x2328) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8);
    }
    return -1;
}

s32 fn_800FC814(s32 arg0) {
    s32 r = 0;
    switch (arg0) {
    case 0: break;
    case 1: r = 0xFFF; break;
    case 2: r = 0x1FFF; break;
    case 3: r = 0x2328; break;
    }
    return r;
}

void fn_800FC8A8(s32 arg0, s32 arg1) {
    void fn_800F69F8(s32, s32);
    const char *str;
    switch (arg0) {
    case 0: str = "Primitives"; break;
    case 1: str = "Global"; break;
    case 2: str = "Private"; break;
    case 3: str = "Semi-global"; break;
    default: str = "unknown"; break;
    }
    fn_800F69F8(arg1, (s32)str);
}

void fn_800FCA68(s32 arg0, s32 arg1) {
    s32 fn_80248808(s32);
    void fn_80248784(s32, s32);
    if ((u32)fn_80248808(arg1) <= 0x200) {
        fn_80248784(arg0, arg1);
    }
}

void fn_800FCAB0(void) {
    extern u8 lbl_80434B08[];
    void fn_802D20E8(void *);
    void fn_803997AC(void *, u32);
    u8 *p = *(u8 **)lbl_80434B08;
    if (p != 0) {
        u32 size = (u32)(*(u32 *)(lbl_80434B08 + 0xC) - (u32)p) & ~1;
        if (size > 0x80) {
            fn_802D20E8(p);
        } else {
            fn_803997AC(p, size);
        }
    }
}

void fn_800FCB00(void) {
    extern u8 lbl_80434B18[];
    void fn_802D20E8(void *);
    void fn_803997AC(void *, u32);
    u8 *p = *(u8 **)lbl_80434B18;
    if (p != 0) {
        u32 size = (u32)(*(u32 *)(lbl_80434B18 + 0xC) - (u32)p) & ~1;
        if (size > 0x80) {
            fn_802D20E8(p);
        } else {
            fn_803997AC(p, size);
        }
    }
}

s32 fn_800FD808(void *arg0, s32 arg1) {
    void *var_r9;

    var_r9 = NULL;
    switch (arg1) {                                 /* irregular */
    case 1:
        var_r9 = M2C_FIELD(arg0, void **, 0x18);
        break;
    case 2:
        var_r9 = M2C_FIELD(arg0, void **, 0x10);
        break;
    case 3:
        var_r9 = M2C_FIELD(arg0, void **, 0x14);
        break;
    }
    if (var_r9 != NULL) {
        return M2C_FIELD(var_r9, s32 *, 0x24);
    }
    return 0;
}

s16 fn_800FD858(void *arg0, s32 arg1) {
    extern s32 fn_8031C470(s32, s32);
    s32 ret;
    s32 p;

    ret = fn_8031C470(M2C_FIELD(arg0, s32 *, 0x10), arg1);
    if (ret == 0) {
        p = M2C_FIELD(arg0, s32 *, 0x14);
        if (p != 0) {
            ret = fn_8031C470(p, arg1);
        }
        if (ret == 0) {
            ret = fn_8031C470(M2C_FIELD(arg0, s32 *, 0x18), arg1);
        }
    }
    return ret;
}

s32 fn_800FD8C4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern s32 fn_8031C444(s32);
    extern s32 fn_800FD1A4(void *, s16, s32, s32);
    s32 id;
    s32 h;

    id = 0;
    switch (arg2) {
    case 1:
        id = M2C_FIELD(arg0, s32 *, 0x18);
        break;
    case 2:
        id = M2C_FIELD(arg0, s32 *, 0x10);
        break;
    case 3:
        id = M2C_FIELD(arg0, s32 *, 0x14);
        break;
    }
    if (id == 0) {
        return 0;
    }
    h = fn_8031C444(id);
    if (h == 0) {
        return 0;
    }
    return fn_800FD1A4(arg0, h, arg3, 1);
}

s32 fn_800FD964(void **arg0, s32 arg1, void **arg2) {
    void *vt;

    if (arg2 != NULL && (arg1 == 1 || arg1 == (s32)0x9F2BC11C)) {
        vt = *arg0;
        ((void (*)(void *))M2C_FIELD(vt, void **, 0x14))((u8 *)arg0 + M2C_FIELD(vt, s16 *, 0x10));
        *arg2 = arg0;
        return 1;
    }
    return 0;
}

s32 fn_800FD9D4(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x1C);
}

s32 fn_800FD9E8(void **obj) {
    s32 n;
    n = --M2C_FIELD(obj, s32 *, 0x1C);
    if (n == 0) {
        if (obj != NULL) {
            char *vt = (char *)*obj;
            (*(void (**)(void *, s32))(vt + 0x24))((char *)obj + *(s16 *)(vt + 0x20), 3);
        }
        return 0;
    }
    return n;
}

extern u8 lbl_8040D498[];
void **fn_800FDA44(void **self) {
    fn_800FC1AC(self);
    self[4] = 0;
    self[0] = lbl_8040D498;
    return self;
}

void fn_800FDA88(void **self) {
    M2C_UNK fn_800FC1C0(void **);
    *self = lbl_8040D498;
    fn_800FC1C0(self);
}

s32 fn_800FDAB8(void *arg0, s32 arg1) {
    extern u8 *lbl_8049665C;
    s32 id;
    u8 *obj;
    u8 *vt;
    id = -1;
    switch (arg1) {
    case 1:
        id = fn_800FC378();
        break;
    case 2:
        id = fn_800FC360(arg0);
        break;
    case 3:
        id = fn_800FC36C(arg0);
        break;
    }
    if (id == -1) {
        return 0;
    }
    obj = (*(u8 *(**)(u8 *, s32))(*(u8 **)lbl_8049665C + 0x3C))(lbl_8049665C + *(s16 *)(*(u8 **)lbl_8049665C + 0x38), id);
    vt = *(u8 **)(obj + 0x10);
    return (*(s32 (**)(u8 *, s32))(vt + 0x7C))(obj + *(s16 *)(vt + 0x78), 0x42484156);
}

s32 fn_800FDDD0(void **arg0, s32 arg1, void **arg2) {
    void *vt;

    if (arg2 != NULL && (arg1 == 1 || arg1 == (s32)0x9F2BC11C)) {
        vt = *arg0;
        ((void (*)(void *))M2C_FIELD(vt, void **, 0x14))((u8 *)arg0 + M2C_FIELD(vt, s16 *, 0x10));
        *arg2 = arg0;
        return 1;
    }
    return 0;
}

s32 fn_800FDE40(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x10);
}

void fn_800FDEB0(s32 arg0, s32 arg1) {
    extern QSSVec lbl_80434B28;
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            lbl_80434B28.begin = 0;
            lbl_80434B28.end = 0;
            QSSAlloc_Clear(&lbl_80434B28.alloc);
        } else if (lbl_80434B28.begin != 0) {
            QSSAlloc_Free(lbl_80434B28.begin, (lbl_80434B28.alloc.cap - lbl_80434B28.begin) & ~3);
        }
    }
}

s32 fn_800FDF38(s32 *self) {
    return self[1];
}

s32 fn_800FDF40(s32 *self) {
    return self[2];
}

void fn_800FDF48(u8 *arg0, s32 arg1) {
    s32 fn_800FC7D4(s32);
    u8 *vt;
    u8 *obj;

    vt = *(u8 **)arg0 + 0x30;
    obj = arg0 + *(s16 *)vt;
    (*(void (**)(u8 *, s32))(vt + 4))(obj, fn_800FC7D4(arg1));
}

s32 fn_800FDF9C(s32 *arg0) {
    return arg0[0] == -1 && arg0[1] == -1;
}

void fn_800FDFC4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 4) = -1;
}

void fn_800FDFD4(void) {
    void fn_800FDEB0(s32, s32);
    fn_800FDEB0(1, 0xFFFF);
}

void fn_800FE000(void) {
    void fn_800FDEB0(s32, s32);
    fn_800FDEB0(0, 0xFFFF);
}

