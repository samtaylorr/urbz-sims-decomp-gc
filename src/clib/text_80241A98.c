/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80247D48(void);

typedef struct AtExitBlock {
    struct AtExitBlock *next;
    s32 count;
    s32 funcs[32];
} AtExitBlock;

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

void fn_80245AB8(s32 arg0) {
    M2C_UNK fn_80245A30(s32, s32);
    extern s32 lbl_80494988;
    fn_80245A30(lbl_80494988, arg0);
}

s32 fn_80245C8C(void) {
    return 0;
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
    register unsigned long buffer asm("r0");
    unsigned long *p = (unsigned long *)m;
    int n = len;
    if (n > 3 && !((long)m & 3)) {
        c &= 0xff;
        buffer = (c << 8) | c;
        buffer |= buffer << 16;
        if (n > 15) {
            *p = buffer;
            n -= 16;
            do {
                *++p = buffer;
                *++p = buffer;
                *++p = buffer;
                n -= 16;
            } while ((unsigned)n > 15);
        }
        if (n > 3) {
            *p = buffer;
            n -= 4;
            p++;
        }
        s = (char *)p;
    }
    while (n-- > 0)
        *s++ = c;
    return m;
}

s32 fn_8024851C(const char *s1, const char *s2) {
    extern signed char lbl_803EBA39[];
    int c1, c2;
    s1++;
    s2++;
    do {
        c1 = *s1++;
        c2 = *s2++;
        if (c1 == 0)
            return 0;
        if (lbl_803EBA39[(signed char)c1] & 1)
            c1 = (signed char)c1 + 0x20;
        if (lbl_803EBA39[(signed char)c2] & 1)
            c2 = (signed char)c2 + 0x20;
    } while (c1 == c2);
    return (unsigned char)s1[-1] - (unsigned char)s2[-1];
}

s32 fn_802485B0(const char *s) {
    extern s32 fn_80248784(const char *);
    const unsigned char *p = (const unsigned char *)s;
    if (((u32)p & 3) == 0) {
        u32 x = *(const u32 *)p;
        if ((((x - 0x01010101) & ~x) & 0x80808080) == 0) {
            p += 4;
            while (1) {
                x = *(const u32 *)p;
                if ((((x - 0x01010101) & ~x) & 0x80808080) != 0)
                    break;
                p += 4;
            }
            if (p[-4] != 0 && p[-3] != 0 && p[-2] != 0 && p[-1] != 0)
                return fn_80248784(s);
            return (const char *)p - s - 4;
        }
    }
    return fn_80248784(s);
}

char *fn_80248640(const char *s1, int i) {
    const unsigned char *s = (const unsigned char *)s1;
    unsigned char c = i;
    unsigned long mask, j;
    unsigned long *aligned_addr;

    if (!((long)s & 3)) {
        mask = 0;
        for (j = 0; j < 4; j++)
            mask = (mask << 8) | c;

        aligned_addr = (unsigned long *)s;
        while (!((*aligned_addr - 0x01010101) & ~*aligned_addr & 0x80808080) &&
               !(((*aligned_addr ^ mask) - 0x01010101) & ~(*aligned_addr ^ mask) & 0x80808080))
            aligned_addr++;

        s = (unsigned char *)aligned_addr;
    }

    while (*s && *s != c)
        s++;
    if (*s == c)
        return (char *)s;
    return 0;
}

void fn_8024928C(void *arg0) {
    M2C_UNK fn_802492BC(s16, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_802492BC(M2C_FIELD(arg0, s16 *, 0xE), 0, 0, 2);
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

