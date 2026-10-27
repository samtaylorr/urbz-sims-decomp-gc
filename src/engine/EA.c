/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_80258544(void);
M2C_UNK **fn_802D7E20(M2C_UNK **arg0) {
    M2C_UNK fn_802C5D4C();
    extern M2C_UNK lbl_80419570[];
    fn_802C5D4C();
    *arg0 = lbl_80419570;
    return arg0;
}

void fn_802D7E5C(M2C_UNK **arg0, s32 arg1) {
    M2C_UNK fn_802C5DB8(M2C_UNK **, s32);
    M2C_UNK fn_802C7C90();
    extern M2C_UNK lbl_80419570[];
    extern s32 lbl_80494DBC;
    s32 temp = lbl_80494DBC;
    *arg0 = lbl_80419570;
    if (temp == 0) {
        fn_802C7C90();
    }
    fn_802C5DB8(arg0, arg1);
}

s32 fn_802D7EB0(s32 arg0, s32 arg1) {
    M2C_UNK fn_80261278();
    s32 fn_802C6434(s32, s32);
    M2C_UNK fn_802C6508(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *);
    void fn_802D87A0();
    void fn_802DFC94();
    s32 temp_r3;
    s32 var_r31;

    var_r31 = arg1;
    fn_80261278();
    if (var_r31 == 0x80000000) {
        var_r31 = 3;
    }
    temp_r3 = fn_802C6434(arg0, var_r31);
    if (temp_r3 != 0) {
        fn_802C6508(arg0, 0x80000000, 0x80000000, 0x80000000, 0, fn_802DFC94);
        fn_802C6508(arg0, 0x80000000, 2, 0x80000000, 0, fn_802D87A0);
    }
    return temp_r3;
}

s32 fn_802D7F48(s32 arg0, s32 arg1) {
    M2C_UNK fn_802C6290(M2C_UNK *, s32 *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_804448E8[];
    s32 sp8;

    sp8 = 0;
    fn_802C6290(lbl_804448E8, &sp8, arg0, arg1, 0x80000000, 0x80000000, 0);
    return sp8;
}

void fn_802D8260(void *arg0, s32 arg1) {
    extern void fn_802D6A28(void *, s32);
    extern void fn_802D8328(void *);
    extern u8 lbl_804195C8[];
    M2C_FIELD(arg0, void **, 0) = lbl_804195C8;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        fn_802D8328(arg0);
    }
    fn_802D6A28(arg0, arg1);
}

s32 fn_802D82B4(void) {
    return 0;
}

s32 fn_802D82BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) != 0;
}

s32 fn_802D82D4(void *arg0, s32 arg1, s32 arg2) {
    extern void fn_8037ABB0(void *, s32);
    void *p;

    if (arg2 == -1) {
        arg2 = arg1;
    }
    p = (char *)arg0 + 0xC;
    fn_8037ABB0(p, arg2);
    M2C_FIELD(arg0, void **, 4) = p;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 1;
}

void fn_802D8328(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

s32 fn_802D8334(void *arg0, s32 arg1) {
    extern void fn_8037AC08(void *);
    extern s32 fn_8037AC78(void *);

    if (arg1 != -1) {
        if (fn_8037AC78((char *)arg0 + 0xC) == M2C_FIELD(arg0, s32 *, 0xC)) {
            return 0;
        }
    } else {
        fn_8037AC08((char *)arg0 + 0xC);
    }
    return 1;
}

s32 fn_802D838C(void *arg0) {
    s32 fn_8025465C();
    M2C_UNK fn_80254684(M2C_UNK);
    M2C_UNK fn_8037ACCC(void *);
    M2C_UNK var_r30;

    var_r30 = 1;
    if (fn_8025465C() == 0) {
        var_r30 = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) < (s32) M2C_FIELD(arg0, s32 *, 8)) {
        fn_8037ACCC(arg0 + 0xC);
    }
    fn_80254684(var_r30);
    return 1;
}

s32 fn_802D8458(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_802D8460(s32 *self) {
    return self[2];
}

void **fn_802D8468(void **arg0) {
    char *vt = *arg0;
    ((void (*)(void *, s32))M2C_FIELD(vt, void **, 0x14))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x10), -1);
    return arg0;
}

void **fn_802D84B0(void **arg0) {
    char *vt = *arg0;
    ((void (*)(void *, s32))M2C_FIELD(vt, void **, 0x14))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x10), -1);
    return arg0;
}

void **fn_802D84F8(void **arg0) {
    char *vt = *arg0;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x1C))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x18));
    return arg0;
}

void **fn_802D853C(void **arg0) {
    char *vt = *arg0;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x1C))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x18));
    return arg0;
}

void fn_802D8580(void *arg0) {
    M2C_UNK fn_802D8424(s32);
    fn_802D8424(M2C_FIELD(arg0, s32 *, 4));
}

void fn_802D88C8(void *arg0) {
    M2C_UNK fn_80240EC8(s32);
    void *temp_r9;

    fn_80240EC8(M2C_FIELD(arg0, s32 *, 0x2C));
    if (arg0 != NULL) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x28);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(arg0 + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
}

s32 fn_802D891C(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_802D8988(s32, s32, s32);
    s32 temp_r3;
    s32 var_r30;
    s32 var_r31;

    var_r30 = arg1;
    var_r31 = arg2;
    if (arg2 != 0) {
loop_1:
        temp_r3 = fn_802D8988(arg0, var_r30, var_r31);
        if (temp_r3 == 0) {
            return 0;
        }
        var_r30 += temp_r3;
        var_r31 -= temp_r3;
        if (var_r31 == 0) {
            goto block_4;
        }
        goto loop_1;
    }
block_4:
    return arg2;
}

void fn_802D8AAC(void *arg0) {
    M2C_UNK fn_80240ED8(s32);
    fn_80240ED8(M2C_FIELD(arg0, s32 *, 0x2C));
}

s32 fn_802D8AD0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r0;

    if (arg2 == 1) {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x30) + arg1;
        goto block_5;
    }
    if (arg2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    } else {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x14) - arg1;
block_5:
        M2C_FIELD(arg0, s32 *, 0x30) = var_r0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = 1;
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 fn_802D8B14(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 fn_802D8B1C(void) {
    return 1;
}

s32 fn_802D8B24(void) {
    return 0;
}

s32 fn_802D8B2C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

void fn_802D8E50(void *arg0) {
    M2C_UNK fn_80258ED4(M2C_UNK);
    M2C_UNK fn_80258FB8(s32);
    M2C_UNK fn_802D8C4C(void *);
    s32 fn_802D8F90(void *);
    extern void *lbl_8049619C;
    extern void *lbl_804961A0;
    s32 temp_r3;

    if ((void *) lbl_8049619C == arg0) {
        lbl_8049619C = M2C_FIELD(arg0, void **, 0x334);
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x330), void **, 0x334) = (void *) M2C_FIELD(arg0, void **, 0x334);
    }
    if ((void *) lbl_804961A0 == arg0) {
        lbl_804961A0 = M2C_FIELD(arg0, void **, 0x330);
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x334), void **, 0x330) = (void *) M2C_FIELD(arg0, void **, 0x330);
    }
    temp_r3 = fn_802D8F90(arg0);
    if (temp_r3 != 0) {
        M2C_FIELD(arg0, s32 *, 0x318) = 0;
        fn_80258ED4(0);
        return;
    }
    fn_80258FB8(M2C_FIELD(arg0, s32 *, 0x318));
    fn_802D8C4C(arg0);
    M2C_FIELD(arg0, s32 *, 0x318) = temp_r3;
}

void fn_802D8EF8(void *arg0) {
    M2C_UNK fn_80259354(s32);
    fn_80259354(M2C_FIELD(arg0, s32 *, 0x318));
}

void fn_802D8F48(void *arg0) {
    M2C_UNK fn_8025993C(s32);
    fn_8025993C(M2C_FIELD(arg0, s32 *, 0x318));
}

void fn_802D8F6C(void *arg0) {
    M2C_UNK fn_802599FC(s32);
    fn_802599FC(M2C_FIELD(arg0, s32 *, 0x318));
}

void fn_802D8FFC(void) {
    M2C_UNK fn_802D8FCC();
    M2C_UNK fn_802D9124();
    fn_802D9124();
    fn_802D8FCC();
}

s32 fn_802D9020(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x31C);
}

s32 fn_802D9028(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x320);
}

s32 fn_802D9030(void *arg0) {
    s32 fn_802D9060(void *);
    return fn_802D9060(arg0) != 0;
}

void fn_802D9110(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x32C) = arg1;
}

s32 fn_802D9118(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x32C);
}

void fn_802D9120(void) {

}

s32 fn_802D9124(void) {
    return fn_80258544();
}

s32 fn_802D91D4(void *arg0, s32 arg1) {
    return arg1 == 0;
}

extern void fn_8025AEB4(void *);
void *fn_802D91E0(void *self) {
    fn_8025AEB4(self);
    return self;
}

void fn_802D9210(void) {

}

s32 fn_802D9214(void *arg0) {
    M2C_UNK fn_8025AEEC();
    fn_8025AEEC();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 fn_802D9244(void *arg0) {
    M2C_UNK fn_8025AFC8();
    s32 temp_r30;

    temp_r30 = M2C_FIELD(arg0, s32 *, 0xC) - 1;
    fn_8025AFC8();
    return temp_r30;
}

s32 fn_802D9278(char *self) {
    return *(s32 *)(self + 0xC);
}

extern void fn_802D96A8(s32);
extern void fn_802D20E8(s32);
void fn_802D94C0(s32 self, s32 flags) {
    fn_802D96A8(self);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802D9A0C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4C4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C8) = arg2;
}

void fn_802D9A18(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4BC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C0) = arg2;
}

void fn_802D9A24(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4D8) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4DC) = arg2;
}

void fn_802D9A30(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s8 *, 0x484) = arg1;
    M2C_FIELD(arg0, s8 *, 0x485) = arg2;
}

s32 fn_802D9A3C(void) {
    return 0x1000;
}

void fn_802D9DE4(void) {

}

void fn_802D9DE8(void *arg0, void *arg1, s32 arg2) {
    void *temp_r9;
    void *temp_r10;
    void *temp_r11;

    temp_r11 = M2C_FIELD(arg0, void **, 0x444);
    temp_r10 = arg0 + 0x34;
    M2C_FIELD(arg0, void **, 0x444) = arg1;
    M2C_FIELD(arg1, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8) = arg1;
    if ((temp_r11 != temp_r10) && (arg2 != 0)) {
        temp_r9 = M2C_FIELD(temp_r10, void **, 0xC);
        M2C_FIELD(temp_r11, void **, 8) = temp_r10;
        M2C_FIELD(temp_r11, void **, 0xC) = temp_r9;
        M2C_FIELD(temp_r10, void **, 0xC) = temp_r11;
        M2C_FIELD(temp_r9, void **, 8) = temp_r11;
    }
}

s32 fn_802D9E3C(void) {
    return 1;
}

s32 fn_802D9E44(void *arg0, s32 arg1) {
    s32 temp_r3;

    if ((s32) (arg1 & 6) == 6) {
        return 1;
    }
    temp_r3 = M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 4) & 0xFFFFFFF8)), s32 *, 4) & 1;
    if (!(arg1 & 2)) {
        if (!(arg1 & 4)) {
            return 0;
        }
        return temp_r3 ^ 1;
    }
    return temp_r3;
}

void fn_802DB018(void);
void fn_802DAFB0(void) {
    fn_802DB018();
}

void fn_802DAFD0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4D0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4D4) = arg2;
}

void fn_802DBBA8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x48C) = arg2;
    if (arg2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x48C) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x488) = arg1;
    M2C_FIELD(arg0, s32 *, 0x490) = 0;
}

void fn_802DC1C4(void *arg0, s32 arg1) {
    extern void fn_802DC220(void *, s32);
    void *volatile p;
    void *q;
    void *r;

    q = M2C_FIELD(arg0, void **, 0x4FC);
    p = q;
    if (q != NULL) {
        fn_802D9214(q);
    }
    fn_802DC220(arg0, arg1);
    r = p;
    if (r != NULL) {
        fn_802D9244(r);
    }
}

s32 fn_802DC3C0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern s32 fn_802DC43C(void *, s32, s32, s32, s32);
    void *volatile p;
    void *q;
    void *r;
    s32 ret;

    q = M2C_FIELD(arg0, void **, 0x4FC);
    p = q;
    if (q != NULL) {
        fn_802D9214(q);
    }
    ret = fn_802DC43C(arg0, arg1, arg2, arg3, arg4);
    r = p;
    if (r != NULL) {
        fn_802D9244(r);
    }
    return ret;
}

s32 fn_802DC6B4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern s32 fn_802DC728(void *, s32, s32, s32);
    void *volatile p;
    void *q;
    void *r;
    s32 ret;

    q = M2C_FIELD(arg0, void **, 0x4FC);
    p = q;
    if (q != NULL) {
        fn_802D9214(q);
    }
    ret = fn_802DC728(arg0, arg1, arg2, arg3);
    r = p;
    if (r != NULL) {
        fn_802D9244(r);
    }
    return ret;
}

s32 fn_802DC9F4(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern s32 fn_802DCA68(void *, s32, s32, s32);
    void *volatile p;
    void *q;
    void *r;
    s32 ret;

    q = M2C_FIELD(arg0, void **, 0x4FC);
    p = q;
    if (q != NULL) {
        fn_802D9214(q);
    }
    ret = fn_802DCA68(arg0, arg1, arg2, arg3);
    r = p;
    if (r != NULL) {
        fn_802D9244(r);
    }
    return ret;
}

s32 fn_802DCB78(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern s32 fn_802DCC78(void *, s32, s32, s32 *, s32, s32);
    void *volatile p;
    void *q;
    void *r;
    s32 ret;

    q = M2C_FIELD(arg0, void **, 0x4FC);
    p = q;
    if (q != NULL) {
        fn_802D9214(q);
    }
    ret = fn_802DCC78(arg0, arg1, 1, &arg2, arg3, arg4);
    r = p;
    if (r != NULL) {
        fn_802D9244(r);
    }
    return ret;
}

void fn_802D21E0(void *);
void fn_802DD5B0(void *self, void *arg) {
    fn_802D21E0(arg);
}

extern void fn_802CAA00(void *, s32);
extern u8 lbl_80451F84[];
void fn_802DD5D4(void);
void fn_802DD5D4(void) {
    fn_802CAA00(lbl_80451F84, 2);
}

void fn_802DD82C(void *arg0, s32 arg1) {
    M2C_UNK fn_802DDCAC(s32, s32, s32);
    fn_802DDCAC(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), arg1);
}

void fn_802DDDC8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((arg1 + 0x1F) & 0xFFFFFFE0);
}

u32 fn_802DE1B0(void *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 4) + 0x1F) >> 5U;
}

void fn_802DE598(void) {

}

s32 fn_802DEC58(s32 *self) {
    return self[1];
}

void fn_802DECDC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_802DDFD4(void *, s32, s32, s32, s32);
    fn_802DDFD4(arg0, arg1, arg2, M2C_FIELD(arg0, s32 *, 4), arg3);
}

s32 fn_802DED04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) == 0;
}

void fn_802DED14(void *self) {
    M2C_UNK fn_802DDDD8(void *, s32, s32);
    fn_802DDDD8(self, 0, 0);
}

void fn_802DED3C(void *self) {
    M2C_UNK fn_802DDDD8(void *, s32, s32);
    fn_802DDDD8(self, 0, 0);
}

void fn_802DED64(void *self, void *arg1) {
    M2C_UNK fn_802DDCAC(void *, void *, s32);
    fn_802DDCAC(self, arg1, 0);
}

extern void fn_802DED88(void *);
void fn_802DED88(void *self) {
    extern void *fn_802DDCE8(void *, s32);
    fn_802DDCE8(self, 0);
}

void fn_802DDC6C(void);
void fn_802DEDAC(void) {
    fn_802DDC6C();
}

s32 *fn_802DEDCC(s32 *arg0, s32 arg1, s32 arg2) {
    arg0[0] = arg1;
    arg0[1] = arg2;
    return arg0;
}

s32 fn_802DEDDC(void) {
    s32 fn_802DE2F8();
    return fn_802DE2F8() ^ 1;
}

s32 fn_802DEE00(s32 *self) {
    return *self;
}

s32 fn_802DEE08(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_802482F8(s32, s32);
    if (arg1 != 0) {
        fn_802482F8(arg1, M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x20));
    }
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + arg2);
    return arg2;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_802DF214(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802DF248(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 n;
    char *src;
    void *vt;

    while (arg3 != 0) {
        src = M2C_FIELD(arg0, char ***, 0x20)[arg2 / 0x1000];
        n = 0x1000 - (arg2 & 0xFFF);
        src += arg2 & 0xFFF;
        if (arg3 < n) {
            n = arg3;
        }
        vt = M2C_FIELD(arg1, void **, 0x18);
        arg2 += n;
        M2C_FIELD(vt, void (**)(void *, char *, s32), 0x3C)((char *)arg1 + M2C_FIELD(vt, s16 *, 0x38), src, n);
        arg3 -= n;
    }
}

void *fn_802DF2E0(void *arg0, s32 arg1) {
    extern char lbl_80419730[];
    M2C_FIELD(arg0, char **, 0x18) = lbl_80419730;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return arg0;
}

s32 fn_802DF304(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802DF30C(void) {
    return 0;
}

void *fn_802DF314(void *arg0, s32 arg1) {
    extern char lbl_804196E8[];
    M2C_FIELD(arg0, char **, 0x18) = lbl_804196E8;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return arg0;
}

s32 fn_802DF338(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_802DF340(void) {
    return 0;
}

s32 fn_802DF348(s32 *self) {
    return self[7];
}

s32 fn_802DF350(void) {
    return 0;
}

char *fn_802DF358(char *dst, char *src) {
    char *p = dst;

    while (*src != 0) {
        switch (*src) {
        case '"':
        case '#':
        case '*':
        case '/':
        case ':':
        case '<':
        case '>':
        case '?':
        case '\\':
        case '|':
            *p = '_';
            break;
        default:
            *p = *src;
            break;
        }
        src++;
        p++;
    }
    return dst;
}

s32 fn_802DF3F0(s32 arg0) {
    s32 fn_80248640(s32, M2C_UNK);
    s32 p;

    p = fn_80248640(arg0, 0x5C);
    while (p != 0) {
        *(char *)p = '/';
        p = fn_80248640(p, 0x5C);
    }
    return arg0;
}

s32 fn_802DF4B8(s32 arg0, s32 arg1) {
    s32 fn_80248640(s32, M2C_UNK);
    M2C_UNK fn_80248784(s32, s32);
    M2C_UNK fn_802DF3F0(s32);
    s32 temp_r3;

    temp_r3 = fn_80248640(arg1, 0x3A);
    if ((temp_r3 != 0) && (temp_r3 == (s32) (arg1 + 1))) {
        fn_80248784(arg0, temp_r3 + 1);
    } else if (arg0 != arg1) {
        fn_80248784(arg0, arg1);
    }
    fn_802DF3F0(arg0);
    return arg0;
}

void fn_802DF890(void *arg0, s32 arg1) {
    M2C_UNK fn_802DF924();
    if ((s32) M2C_FIELD(arg0, s32 *, 8) != 0) {
        fn_802DF924();
    }
    if (arg1 & 1) {
        fn_802D20E8(arg0);
    }
}

void fn_802DF8DC(void *arg0) {
    void *obj = M2C_FIELD(arg0, void **, 0);
    void *vt = M2C_FIELD(obj, void **, 0);
    M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(vt, s32 (**)(void *), 0x14)((u8 *)obj + M2C_FIELD(vt, s16 *, 0x10));
}

s32 fn_802DF924(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        void *obj = M2C_FIELD(arg0, void **, 0);
        void *vt = M2C_FIELD(obj, void **, 0);
        M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(vt, s32 (**)(void *), 0x1C)((u8 *)obj + M2C_FIELD(vt, s16 *, 0x18)) ^ 1;
    }
    return M2C_FIELD(arg0, s32 *, 4) ^ 1;
}

s32 fn_802DF984(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        void *obj = M2C_FIELD(arg0, void **, 0);
        void *vt = M2C_FIELD(obj, void **, 0);
        M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(vt, s32 (**)(void *), 0x24)((u8 *)obj + M2C_FIELD(vt, s16 *, 0x20)) ^ 1;
    }
    return M2C_FIELD(arg0, s32 *, 4) ^ 1;
}

void fn_802DF9E4(s32 arg0) {
    M2C_UNK fn_802D8DA4(s32, s32);
    fn_802D8DA4(arg0, fn_802D9124());
}

void fn_802DFB30(void) {

}

void fn_802DFB34(void) {

}

s32 fn_802DFB38(void) {
    return 0;
}

void fn_802DFB40(void) {

}

void fn_802DFB70(void) {
    M2C_UNK fn_802DFB44(M2C_UNK, M2C_UNK);
    fn_802DFB44(1, 0xFFFF);
}

