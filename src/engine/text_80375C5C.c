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

s32 fn_80375C5C(s32, s32);
s32 fn_80240ED8(s32);
s32 fn_80240EB8(s32, s32);
s32 fn_80240EC0(s32, s32, s32);

s32 fn_80375CB8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80375C5C(s32 arg0, s32 arg1) {
    extern s32 lbl_80401388[];
    void fn_8025D78C(s32);
    void fn_8025D89C(s32, s32);
    if (lbl_80401388[0] != 0) {
        lbl_80401388[0] = 0;
        fn_8025D78C(0);
    }
    fn_8025D89C(arg0, arg1);
    return arg1;
}

s32 fn_80375CB8(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32)(arg0 - 1) <= 1) {
        return fn_80375C5C(arg1, arg2);
    }
    if (arg0 == 0) {
        return -1;
    }
    return ((s32 (*)(s32, s32, s32))fn_80240ED8)(arg0, arg1, arg2);
}

void fn_80375D08(void) {
    ((void (*)(void))fn_80375CB8)();
}

void fn_80240EC8(void);
void fn_80375D28(void) {
    fn_80240EC8();
}

s32 fn_80375D48(s32 arg0, s32 *arg1) {
    arg1[1] = 0x2000;
    return 0;
}

void fn_80240EE0(void);
void fn_80375D58(void) {
    fn_80240EE0();
}

void fn_80240ED0(void);
void fn_80375D78(void) {
    fn_80240ED0();
}

s32 fn_80375D98(s32 arg0, s32 arg1, ...) {
    if (arg1 & 0x200) {
        s32 r = fn_80240EB8(arg0, 0);
        if (r != -1) {
            if (((s32 (*)(s32))fn_80240EC8)(r) != 0) {
                return -1;
            }
        }
    }
    return fn_80240EC0(arg0, arg1, 0);
}

s32 fn_80375E3C(u32 arg0) {
    return __builtin_clz(arg0);
}

s32 fn_80375E44(void) {
    return 0;
}

s32 fn_80375E4C(void) {
    return 0;
}

s32 fn_803781C0(s32 c) {
    extern const u8 lbl_803EBA39[];
    if (c[lbl_803EBA39] & 1) {
        c += 0x20;
    }
    return c;
}

s32 fn_803781DC(char *f, const char *fmt, ...) {
    s32 fn_80249468(void *, s32, const char *, va_list);
    va_list ap;
    va_start(ap, fmt);
    return fn_80249468(f, *(s32 *)(f + 8), fmt, ap);
}

s32 fn_80378278(const char *fmt, ...) {
    extern char *lbl_80494988;
    s32 fn_80249390(void *, const char *, va_list);
    va_list ap;
    char *g;
    va_start(ap, fmt);
    g = lbl_80494988;
    *(char **)(*(char **)(g + 8) + 0x5C) = g;
    return fn_80249390(*(void **)(g + 8), fmt, ap);
}

s32 fn_80378324(const char *fmt, va_list ap) {
    extern char *lbl_80494988;
    s32 fn_80249390(void *, const char *, va_list);
    return fn_80249390(*(void **)(lbl_80494988 + 8), fmt, ap);
}

void *fn_80378358(const void *key, const void *base, u32 nmemb, u32 size, s32 (*compar)(const void *, const void *)) {
    u32 lo = 0;
    u32 hi = nmemb;
    u32 mid;
    const u8 *p;
    s32 c;

    if (nmemb == 0 || size == 0) {
        return NULL;
    }
    while (lo < hi) {
        mid = (lo + hi) >> 1;
        p = (const u8 *)base + mid * size;
        c = compar(key, p);
        if (c < 0) {
            hi = mid;
        } else if (c > 0) {
            lo = mid + 1;
        } else {
            return (void *)p;
        }
    }
    return NULL;
}

char *fn_803783F0(char *s) {
    extern const u8 lbl_803EBA39[];
    char *p;
    for (p = s; *p; p++) {
        if (lbl_803EBA39[(s32)*p] & 1) {
            *p = *p + 0x20;
        }
    }
    return s;
}

void fn_80378434(void) {
    extern void (**lbl_804013A0)(void);
    while (*lbl_804013A0) {
        lbl_804013A0++;
        (*(lbl_804013A0 - 1))();
    }
}

void fn_80378498(void) {
    extern void (*lbl_803C0D60[])(void);
    u32 nptrs = (u32)lbl_803C0D60[0];
    u32 i;
    if (nptrs == (u32)-1) {
        for (nptrs = 0; lbl_803C0D60[nptrs + 1] != 0; nptrs++)
            ;
    }
    for (i = nptrs; i >= 1; i--) {
        lbl_803C0D60[i]();
    }
}

typedef void (*func_ptr)(void);
void fn_80378528(void) {
    extern s32 lbl_804760E0[];
    if (lbl_804760E0[0] == 0) {
        lbl_804760E0[0] = 1;
        fn_80378498();
    }
}

