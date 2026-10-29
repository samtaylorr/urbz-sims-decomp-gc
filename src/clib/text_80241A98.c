/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct __va_list_tag {
    char gpr;
    char fpr;
    char *overflow_arg_area;
    char *reg_save_area;
} va_list[1];

#define va_start(AP, LASTARG) \
    (__builtin_next_arg(LASTARG), *(AP) = *(struct __va_list_tag *)__builtin_saveregs())

void fn_80247D48(void);

typedef struct AtExitBlock {
    struct AtExitBlock *next;
    s32 count;
    s32 funcs[32];
} AtExitBlock;

typedef struct StrFile {
    unsigned char *_p;
    s32 _r;
    s32 _w;
    s16 _flags;
    s16 _file;
    unsigned char *_base;
    s32 _size;
    s32 pad[17];
    s32 _data;
} StrFile;

s32 fn_80249390(StrFile *f, const char *fmt, void *ap);

void fn_80242320(s32 arg0) {
    fn_802422DC();
    *(s32 *)0xCC006008 = 0x12000000;
    *(s32 *)0xCC00600C = 0;
    *(s32 *)0xCC006010 = 0x20;
    *(s32 *)0xCC006018 = 0x20;
    *(s32 *)0xCC006014 = arg0;
    *(s32 *)0xCC00601C = 3;
    fn_802422FC();
}

void fn_802423A8(void) {
    M2C_UNK fn_802422DC();
    M2C_UNK fn_802422FC();
    fn_802422DC();
    *(s32 *)0xCC006008 = 0;
    *(s32 *)0xCC00601C = 1;
    fn_802422FC();
}

f32 fn_80243E1C(f32 x, f32 y, s32 iy) {
    extern f32 lbl_8049483C;
    extern f32 lbl_80494840;
    extern f32 lbl_80494844;
    extern f32 lbl_80494848;
    extern f32 lbl_8049484C;
    extern f32 lbl_80494850;
    extern f32 lbl_80494854;
    f32 z, r, v;
    s32 ix;
    do { union { f32 value; u32 word; } gf_u; gf_u.value = x; ix = gf_u.word; } while (0);
    ix &= 0x7fffffff;
    if (ix < 0x32000000) {
        if ((s32)x == 0) return x;
    }
    z = x * x;
    v = z * x;
    r = lbl_8049484C + z * (lbl_80494848 + z * (lbl_80494844 + z * (lbl_80494840 + z * lbl_8049483C)));
    if (iy == 0) return x + v * (lbl_80494850 + z * r);
    else return x - ((z * (y * lbl_80494854 - v * r) - y) - v * lbl_80494850);
}

f64 fn_80245904(f64 x, f64 y) {
    u32 hx, hy;
    do { union { f64 value; struct { u32 msw; u32 lsw; } parts; } gh_u; gh_u.value = x; hx = gh_u.parts.msw; } while (0);
    do { union { f64 value; struct { u32 msw; u32 lsw; } parts; } gh_u; gh_u.value = y; hy = gh_u.parts.msw; } while (0);
    do { union { f64 value; struct { u32 msw; u32 lsw; } parts; } sh_u; sh_u.value = x; sh_u.parts.msw = (hx & 0x7FFFFFFF) | (hy & 0x80000000); x = sh_u.value; } while (0);
    return x;
}

f32 fn_80245954(f32 x, f32 y) {
    u32 ix, iy;
    do { union { f32 value; u32 word; } gf_u; gf_u.value = x; ix = gf_u.word; } while (0);
    do { union { f32 value; u32 word; } gf_u; gf_u.value = y; iy = gf_u.word; } while (0);
    do { union { f32 value; u32 word; } sf_u; sf_u.word = (ix & 0x7FFFFFFF) | (iy & 0x80000000); x = sf_u.value; } while (0);
    return x;
}

s32 fn_80245988(s32 c) {
    extern const u8 lbl_803EBA39[];
    return c[lbl_803EBA39] & 4;
}

s32 fn_8024599C(StrFile *f, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    return fn_80249390(f, fmt, ap);
}

s32 fn_80245A30(s32 self, s32 str) {
    extern char lbl_803EBB3C[];
    s32 fn_80248808(const char *);
    s32 fn_8024CAE8(void *, void *);
    u8 buf[0x20];
    s32 len;
    register void *obj asm("r3");
    s32 r;
    len = fn_80248808((char *)str);
    obj = *(void **)((char *)self + 8);
    *(s32 *)(buf + 0x10) = str;
    *(char **)(buf + 0x18) = lbl_803EBB3C;
    *(s32 *)(buf + 0x1c) = 1;
    *(s32 *)(buf + 8) = len + 1;
    *(u8 **)(buf + 0) = buf + 0x10;
    *(s32 *)(buf + 4) = 2;
    *(s32 *)(buf + 0x14) = len;
    r = fn_8024CAE8(obj, buf);
    if (r == 0) return 10;
    return -1;
}

void fn_80245AB8(s32 arg0) {
    M2C_UNK fn_80245A30(s32, s32);
    extern s32 lbl_80494988;
    fn_80245A30(lbl_80494988, arg0);
}

s32 fn_80245C8C(void) {
    return 0;
}

s32 fn_80246C5C(char *str, const char *fmt, void *ap) {
    extern s32 lbl_80494988;
    StrFile f;
    s32 ret;
    f._flags = 0x208;
    f._base = f._p = (unsigned char *)str;
    f._size = f._w = 0x7FFFFFFF;
    f._data = lbl_80494988;
    ret = fn_80249390(&f, fmt, ap);
    *f._p = 0;
    return ret;
}

s32 fn_80249390(StrFile *f, const char *fmt, void *ap);
s32 fn_80246CB8(char *str, u32 size, const char *fmt, void *ap) {
    extern s32 lbl_80494988;
    StrFile f;
    s32 ret;
    f._flags = 0x208;
    f._base = f._p = (unsigned char *)str;
    f._size = f._w = size;
    f._data = lbl_80494988;
    ret = fn_80249390(&f, fmt, ap);
    *f._p = 0;
    if ((u32)ret > size) {
        ret = -1;
    }
    return ret;
}

void fn_80246D2C(void) {
    void lbl_8024E74C() __attribute__((noreturn));
    lbl_8024E74C(1);
}

s32 fn_80246D44(s32 func) {
    extern s32 lbl_80494988;
    void *fn_802D2150(u32 size);
    AtExitBlock *blk = *(AtExitBlock **)(lbl_80494988 + 0x148);
    if (blk == NULL) {
        blk = (AtExitBlock *)(lbl_80494988 + 0x14C);
        *(AtExitBlock **)(lbl_80494988 + 0x148) = blk;
    }
    if (blk->count > 31) {
        blk = fn_802D2150(sizeof(AtExitBlock));
        if (blk == NULL) {
            return -1;
        }
        blk->count = 0;
        blk->next = *(AtExitBlock **)(lbl_80494988 + 0x148);
        *(AtExitBlock **)(lbl_80494988 + 0x148) = blk;
    }
    blk->funcs[blk->count++] = func;
    return 0;
}

void fn_80246DDC(void *self) {
    ((void (*)(void *, s32))fn_80247D48)(self, 0);
}

void fn_80246E00(s32 arg0) {
    void fn_8024BE60(s32 arg0, s32 arg1, s32 arg2);
    fn_8024BE60(arg0, 0, 0xA);
}

s32 fn_80246EEC(s32 arg0, u32 *arg1, s32 arg2, u32 n, s32 arg4) {
    extern s32 lbl_80494974;
    s32 fn_80246F80(s32, u32 *, s32, s32, s32);
    u32 *p = arg1;
    u32 total = n;
    s32 ret;

    if (n != 0) {
        do {
            ret = fn_80246F80(arg0, p, arg2, lbl_80494974, arg4);
            if (ret == -1)
                return -1;
            if (ret == 0)
                return p - arg1;
            arg2 += ret;
            p++;
        } while (--n != 0);
    }
    return total;
}

void fn_80247C28(s32 arg0) {
    extern s32 lbl_80494988;
    *(s32 *)(lbl_80494988 + 0x58) = arg0;
}

s32 fn_80247C34(void) {
    extern s32 lbl_80494988;
    s32 *p = (s32 *)(lbl_80494988 + 0x58);
    *p = *p * 0x41C64E6D + 0x3039;
    return *p & 0x7FFFFFFF;
}

void fn_80247C58(void) {
    extern char lbl_803EBB7C[];
    s32 fn_802530CC();
    register char *lr asm("r6");
    fn_802530CC(0, 0, lbl_803EBB7C, lr - 4);
}

void fn_80248078(void) {
    fn_80247D48();
}

void fn_80248230(s32 arg0, s32 arg1, s32 arg2) {
    extern s32 lbl_80494988;
    void fn_80248098(s32, s32, s32, s32);
    fn_80248098(lbl_80494988, arg0, arg1, arg2);
}

s32 fn_80248268(const void *m1, const void *m2, u32 len) {
    unsigned char *s1 = (unsigned char *)m1;
    unsigned char *s2 = (unsigned char *)m2;
    unsigned long *a1;
    unsigned long *a2;
    int n = len;

    if (!((unsigned)n < 4) && !(((long)s1 | (long)s2) & 3)) {
        a1 = (unsigned long *)s1;
        a2 = (unsigned long *)s2;
        while ((unsigned)n >= 4) {
            if (*a1 != *a2)
                break;
            a1++;
            a2++;
            n -= 4;
        }
        s1 = (unsigned char *)a1;
        s2 = (unsigned char *)a2;
    }

    while (n--) {
        if (*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
    }

    return 0;
}

void *fn_802482F8(void *dst0, const void *src0, u32 len0) {
    char *dst = dst0;
    const char *src = src0;
    long *aligned_dst;
    const long *aligned_src;
    int len = len0;

    if (!((unsigned)len < 16) && !(((long)src | (long)dst) & 3)) {
        aligned_dst = (long *)dst;
        aligned_src = (const long *)src;
        while ((unsigned)len >= 16) {
            *aligned_dst++ = *aligned_src++;
            *aligned_dst++ = *aligned_src++;
            *aligned_dst++ = *aligned_src++;
            *aligned_dst++ = *aligned_src++;
            len -= 16;
        }
        while ((unsigned)len >= 4) {
            *aligned_dst++ = *aligned_src++;
            len -= 4;
        }
        dst = (char *)aligned_dst;
        src = (const char *)aligned_src;
    }

    while (len--)
        *dst++ = *src++;

    return dst0;
}

void *fn_80248488(void *m, s32 c, u32 len) {
    char *s = (char *)m;
    unsigned long buffer;
    unsigned long *aligned_addr;
    int n = len;

    if (!((unsigned)n < 4) && !((long)m & 3)) {
        aligned_addr = (unsigned long *)m;
        c &= 0xff;
        buffer = (c << 8) | c;
        buffer |= (buffer << 16);
        while ((unsigned)n >= 16) {
            *aligned_addr++ = buffer;
            *aligned_addr++ = buffer;
            *aligned_addr++ = buffer;
            *aligned_addr++ = buffer;
            n -= 16;
        }
        while ((unsigned)n >= 4) {
            *aligned_addr++ = buffer;
            n -= 4;
        }
        s = (char *)aligned_addr;
    }

    while (n--)
        *s++ = (char)c;

    return m;
}

s32 fn_80248808(const char *str) {
    const char *start = str;
    const u32 *w;

    if (((u32)str & 3) == 0) {
        w = (const u32 *)str;
        if (((*w - 0x01010101) & ~*w & 0x80808080) == 0) {
            do {
                str += 4;
            } while (((*(u32 *)str - 0x01010101) & ~*(u32 *)str & 0x80808080) == 0);
        }
    }
    while (*str)
        str++;
    return str - start;
}

s32 fn_80248874(const char *s1, const char *s2, u32 n) {
    extern const u8 lbl_803EBA39[];
#define TOLOWER(c) ({ int __x = (c); (__x[lbl_803EBA39] & 1) ? __x + 0x20 : __x; })

    if (n == 0)
        return 0;
    while (n-- != 0 && TOLOWER(*s1) == TOLOWER(*s2)) {
        if (n == 0 || *s1 == 0 || *s2 == 0)
            break;
        s1++;
        s2++;
    }
    return TOLOWER(*(const u8 *)s1) - TOLOWER(*(const u8 *)s2);
#undef TOLOWER
}

char *fn_80248ADC(const char *s, s32 i) {
    const char *last = NULL;
    char c = i;

    while (*s != 0) {
        if (*s == c) {
            last = s;
        }
        s++;
    }
    if (*s == c) {
        last = s;
    }
    return (char *)last;
}

char *fn_80248B28(const char *s1, const char *s2) {
    if (*s1 == 0) {
        if (*s2 != 0) {
            return NULL;
        }
        return (char *)s1;
    }
    while (*s1 != 0) {
        u32 i = 0;
        while (1) {
            if (s2[i] == 0) {
                return (char *)s1;
            }
            if (s2[i] != s1[i]) {
                break;
            }
            i++;
        }
        s1++;
    }
    return NULL;
}

char *fn_80248B90(char *s, const char *delim) {
    extern s32 lbl_80494988;
    char *fn_80248BB8(char *, const char *, char **);
    return fn_80248BB8(s, delim, (char **)(lbl_80494988 + 0x5C));
}

s32 fn_80248C80(char *buf, s32 n) {
    if (n > 0) {
        n--;
        if (buf[n] > '4') {
            do {
                buf[n] = '0';
                if (--n <= 0) {
                    break;
                }
            } while (buf[n] == '9');
            if (buf[n] == '9') {
                return 0;
            }
            buf[n]++;
        }
    }
    return 1;
}

void fn_80248CDC(u8 *s) {
    s32 i = 0;
    s32 j;
    while (s[i] != 0) {
        i++;
    }
    j = 0;
    i--;
    if (j >= i) return;
    do {
        u8 a = s[i];
        u8 b = s[j];
        s[j] = a;
        s[i] = b;
        j++;
        i--;
    } while (j < i);
}

void fn_80248D28(s32 value, char *buf, s32 base) {
    extern char lbl_803F774C[];
    s32 neg = (u32)value >> 31;
    s32 v = value;
    s32 i;
    if (neg) {
        if (base == 10) {
            v = -v;
        }
    }
    i = 0;
    do {
        s32 q = (u32)v / (u32)base;
        u32 rem = (u32)v - (u32)q * (u32)base;
        buf[i++] = lbl_803F774C[rem];
        v = q;
    } while (v != 0);
    if (neg) {
        buf[i++] = '-';
    }
    buf[i] = 0;
    fn_80248CDC((u8 *)buf);
}

void fn_8024928C(void *arg0) {
    M2C_UNK fn_802492BC(s16, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_802492BC(M2C_FIELD(arg0, s16 *, 0xE), 0, 0, 2);
}

s32 fn_802492BC(s32 fd, u8 *src, u32 n, s32 flush) {
    extern u8 lbl_80440644[];
    extern s32 lbl_80494964;
    extern u8 *lbl_80494968;
    s32 fn_80375D08(s32, void *, s32);
    u32 i;
    s32 ret;

    if (flush == 1) {
        ret = fn_80375D08(fd, lbl_80440644, lbl_80494964);
        lbl_80494964 = 0;
        lbl_80494968 = lbl_80440644;
        return ret;
    }
    for (i = 0; i < n; i++) {
        *lbl_80494968 = src[i];
        lbl_80494968++;
        if (++lbl_80494964 > 0x7F) {
            ret = fn_80375D08(fd, lbl_80440644, lbl_80494964);
            lbl_80494968 = lbl_80440644;
            lbl_80494964 = 0;
            if (ret == 0) {
                return 0;
            }
        }
    }
    return i;
}

s32 fn_8024A8AC(s32 fd, u8 *src, u32 n, s32 flush) {
    extern u8 lbl_804406C4[];
    extern s32 lbl_8049496C;
    extern u8 *lbl_80494970;
    s32 fn_80375D08(s32, void *, s32);
    u32 i;
    s32 ret;

    if (flush == 1) {
        ret = fn_80375D08(fd, lbl_804406C4, lbl_8049496C);
        lbl_8049496C = 0;
        lbl_80494970 = lbl_804406C4;
        return ret;
    }
    for (i = 0; i < n; i++) {
        *lbl_80494970 = src[i];
        lbl_80494970++;
        if (++lbl_8049496C > 0x7F) {
            ret = fn_80375D08(fd, lbl_804406C4, lbl_8049496C);
            lbl_80494970 = lbl_804406C4;
            lbl_8049496C = 0;
            if (ret == 0) {
                return 0;
            }
        }
    }
    return i;
}

void fn_8024A980(s32 arg0, s32 arg1, s32 arg2) {
    void fn_8024A9BC(s32, ...);
    fn_8024A9BC(*(s32 *)(arg0 + 0x5c), arg0, arg1, arg2);
}

void fn_8024BE60(s32 arg0, s32 arg1, s32 arg2) {
    extern s32 lbl_80494988;
    void fn_8024BCB0(s32, s32, s32, s32);
    fn_8024BCB0(lbl_80494988, arg0, arg1, arg2);
}

s32 fn_8024BE98(s32 c) {
    extern const u8 lbl_803EBA39[];
    return c[lbl_803EBA39] & 8;
}

extern s32 lbl_80494988;
s32 fn_8024BEAC(void) {
    return lbl_80494988;
}

extern u8 lbl_803EBED4[];
void *fn_8024C068(s32 arg0) {
    return lbl_803EBED4;
}

void fn_8024C074(s32 arg0, s32 arg1) {
    M2C_UNK fn_8024BEB4(s32, s32, s32);
    fn_8024BEB4(lbl_80494988, arg0, arg1);
}

void fn_8024C0A4(void) {
    fn_8024C068(lbl_80494988);
}

void fn_8024C9DC(void *dst0, const void *src0, u32 len0) {
    char *dst = dst0;
    const char *src = src0;
    int len = len0;

    while (len--)
        *dst++ = *src++;
}

void fn_8024D324(void);
void fn_8024CE64(void) {
    fn_8024D324();
}

void *fn_8024D264(const void *src_void, s32 c, int length) {
    const u8 *src = src_void;
    u8 d = c;
    u32 *asrc;
    u32 mask;
    s32 i;

    if (!((unsigned)length < 4) && !((u32)src & 3)) {
        asrc = (u32 *)src;
        mask = 0;
        for (i = 0; i < 4; i++) {
            mask = (mask << 8) + d;
        }
        while (!((unsigned)length < 4)) {
            if (((*asrc ^ mask) - 0x01010101) & ~(*asrc ^ mask) & 0x80808080) {
                src = (u8 *)asrc;
                for (i = 0; i < 4; i++) {
                    if (*src == d) {
                        return (void *)src;
                    }
                    src++;
                }
            }
            length -= 4;
            asrc++;
        }
        src = (u8 *)asrc;
    }
    while (length--) {
        if (*src == d) {
            return (void *)src;
        }
        src++;
    }
    return NULL;
}

void fn_8024D418(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    extern char fn_8024DD0C[];
    extern char fn_8024DD70[];
    extern char fn_8024DDE0[];
    extern char fn_8024DE44[];

    M2C_FIELD(arg0, s32 *, 0x0) = 0;
    M2C_FIELD(arg0, s32 *, 0x4) = 0;
    M2C_FIELD(arg0, s32 *, 0x8) = 0;
    M2C_FIELD(arg0, s16 *, 0xC) = arg1;
    M2C_FIELD(arg0, s16 *, 0xE) = arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, void **, 0x1C) = arg0;
    M2C_FIELD(arg0, void **, 0x20) = fn_8024DD0C;
    M2C_FIELD(arg0, void **, 0x24) = fn_8024DD70;
    M2C_FIELD(arg0, void **, 0x28) = fn_8024DDE0;
    M2C_FIELD(arg0, void **, 0x2C) = fn_8024DE44;
    M2C_FIELD(arg0, void **, 0x5C) = arg3;
}

void fn_8024D474(char *arg0) {
    extern char fn_8024D784[];
    extern struct { s32 unk0; s32 unk4; void *unk8; } lbl_80440B04;
    extern char lbl_80440744[];
    char *temp_r29;

    temp_r29 = arg0 + 0x1E4;
    M2C_FIELD(arg0, s32 *, 0x38) = 1;
    M2C_FIELD(arg0, void **, 0x3C) = fn_8024D784;
    fn_8024D418(temp_r29, 4, 0, arg0);
    fn_8024D418(arg0 + 0x244, 9, 1, arg0);
    fn_8024D418(arg0 + 0x2A4, 0xA, 2, arg0);
    M2C_FIELD(arg0, void **, 0x1D8) = &lbl_80440B04;
    M2C_FIELD(arg0, s32 *, 0x1DC) = 3;
    M2C_FIELD(arg0, void **, 0x1E0) = temp_r29;
    lbl_80440B04.unk0 = 0;
    lbl_80440B04.unk4 = 0xA;
    lbl_80440B04.unk8 = lbl_80440744;
}

void fn_8024D754(s32 arg0, s32 arg1) {
    M2C_UNK fn_8024D668(s32, s32, s32);
    fn_8024D668(lbl_80494988, arg0, arg1);
}

s32 fn_8024D784(s32 arg0) {
    s32 fn_8024DBB4(char *, s32 (*)());
    return fn_8024DBB4((char *)arg0, (s32 (*)())fn_8024D324);
}

void fn_8024D7AC(void) {
    M2C_UNK fn_8024D784(s32);
    extern s32 lbl_80494988;
    fn_8024D784(lbl_80494988);
}

s32 fn_8024DBB4(char *arg0, s32 (*arg1)());
s32 fn_8024DBB4(char *arg0, s32 (*arg1)()) {
    s32 var_r28;
    char *var_r30;
    s32 var_r31;
    void *var_r29;

    var_r28 = 0;
    for (var_r29 = arg0 + 0x1D8; var_r29 != NULL; var_r29 = M2C_FIELD(var_r29, void **, 0)) {
        var_r31 = M2C_FIELD(var_r29, s32 *, 4);
        var_r30 = M2C_FIELD(var_r29, char **, 8);
        while (--var_r31 >= 0) {
            if (M2C_FIELD(var_r30, s16 *, 0xC) != 0) {
                var_r28 |= arg1(var_r30);
            }
            var_r30 += 0x60;
        }
    }
    return var_r28;
}

s32 fn_8024DDE0(void *arg0, s32 arg1, s32 arg2) {
    s32 fn_8024DF14(s32 *, s32, s32, s32);
    s32 ret;

    ret = fn_8024DF14(M2C_FIELD(arg0, s32 **, 0x5C), M2C_FIELD(arg0, s16 *, 0xE), arg1, arg2);
    if (ret == -1) {
        M2C_FIELD(arg0, s16 *, 0xC) &= ~0x1000;
    } else {
        M2C_FIELD(arg0, s16 *, 0xC) |= 0x1000;
        M2C_FIELD(arg0, s32 *, 0x58) = ret;
    }
    return ret;
}

void fn_8024DE44(void *arg0) {
    M2C_UNK fn_8024DE6C(s32, s16);
    fn_8024DE6C(M2C_FIELD(arg0, s32 *, 0x5C), M2C_FIELD(arg0, s16 *, 0xE));
}

void fn_8024DE6C(s32 *arg0, s32 arg1) {
    s32 fn_80375D28(s32);
    extern s32 lbl_804966F8;
    lbl_804966F8 = 0;
    if ((fn_80375D28(arg1) == -1) && ((s32) lbl_804966F8 != 0)) {
        *arg0 = lbl_804966F8;
    }
}

s32 fn_8024DEBC(s32 *arg0, s32 arg1, s32 arg2) {
    s32 fn_80375D48(s32, ...);
    extern s32 lbl_804966F8;
    s32 ret;
    lbl_804966F8 = 0;
    if ((ret = fn_80375D48(arg1, arg2)) == -1 && lbl_804966F8 != 0) {
        *arg0 = lbl_804966F8;
    }
    return ret;
}

s32 fn_8024DF14(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_80375D58(s32, s32, s32);
    extern s32 lbl_804966F8;
    s32 ret;
    lbl_804966F8 = 0;
    if ((ret = fn_80375D58(arg1, arg2, arg3)) == -1 && lbl_804966F8 != 0) {
        *arg0 = lbl_804966F8;
    }
    return ret;
}

s32 fn_8024DF6C(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_80375D98(s32, ...);
    extern s32 lbl_804966F8;
    s32 ret;
    lbl_804966F8 = 0;
    if ((ret = fn_80375D98(arg1, arg2, arg3)) == -1 && lbl_804966F8 != 0) {
        *arg0 = lbl_804966F8;
    }
    return ret;
}

s32 fn_8024DFC8(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_80375D78(s32, s32, s32);
    extern s32 lbl_804966F8;
    s32 ret;
    lbl_804966F8 = 0;
    if ((ret = fn_80375D78(arg1, arg2, arg3)) == -1 && lbl_804966F8 != 0) {
        *arg0 = lbl_804966F8;
    }
    return ret;
}

s32 fn_8024E020(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_80375D08(s32, s32, s32);
    extern s32 lbl_804966F8;
    s32 ret;
    lbl_804966F8 = 0;
    if ((ret = fn_80375D08(arg1, arg2, arg3)) == -1 && lbl_804966F8 != 0) {
        *arg0 = lbl_804966F8;
    }
    return ret;
}

void fn_8024F99C(void);
void fn_8024EF20(void) {
    fn_8024F99C();
}

void fn_8024F8BC(void) {
    extern char lbl_803EC0BC[];
    s32 fn_802530CC();
    fn_802530CC(0, 0, lbl_803EC0BC);
}

void fn_8024F8F0(void) {
    extern char lbl_803EC110[];
    s32 fn_802530CC();
    fn_802530CC(0, 0, lbl_803EC110);
}

void fn_8024F924(void) {
    extern char lbl_803EC168[];
    s32 fn_802530CC();
    fn_802530CC(0, 0, lbl_803EC168);
}

void fn_8024F958(void) {
    extern char lbl_803EC1C0[];
    s32 fn_802530CC();
    fn_802530CC(0, 0, lbl_803EC1C0);
}

void fn_8024F98C(void) {
    void fn_80246D2C(void) __attribute__((noreturn));
    fn_80246D2C();
}

void fn_8024F99C(void) {
    extern void (*lbl_803F7AD0[])(void);
    lbl_803F7AD0[0]();
}

s32 fn_8024F9C8(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_802486DC(s32, s32);
    if (fn_802486DC(arg0, arg1) == 0) {
        return arg2;
    }
    return 0;
}

void fn_8024FA04(void) {

}

void *fn_8024FA08(void) {
    extern u8 lbl_803EC218[];
    extern void *(*lbl_80494958[])(s32);
    extern void fn_802530CC();
    extern void fn_8024F99C(void);
    char *p;

    if (lbl_80494958[0] == NULL) {
        fn_802530CC(0, 0, lbl_803EC218);
    }
    p = lbl_80494958[0](0x18);
    if (p == NULL) {
        fn_8024F99C();
    }
    ((void (*)())fn_80248488)(p, 0, 0x18);
    *(char **)(p + 4) = p + 0x10;
    return p;
}

void fn_8024FA90(void) {
    extern void (*lbl_803F7AD4[])(void);
    lbl_803F7AD4[0]();
}

char *fn_8024FABC(void) {
    extern void (*lbl_803F7AD4[])(void);
    return ((char *(*)(void))lbl_803F7AD4[0])() + 8;
}

void fn_8024FAEC(void) {
    extern void (*lbl_803F7AD4[])(void);
    extern void fn_8024FB20(void);
    lbl_803F7AD4[0] = fn_8024FB20;
    lbl_803F7AD4[0]();
}

