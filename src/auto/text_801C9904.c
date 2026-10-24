/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void fn_801C9934(void *);
void *fn_801C9904(void *self) {
    fn_801C9934(self);
    return self;
}

s8 fn_801C9BC8(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 3:
        return (s8) M2C_FIELD(arg0, u8 *, 0x89);
    case 4:
        return (s8) M2C_FIELD(arg0, u8 *, 0x8B);
    case 5:
        return (s8) M2C_FIELD(arg0, u8 *, 0x8C);
    case 6:
        return (s8) M2C_FIELD(arg0, u8 *, 0x8D);
    case 1:
        return (s8) M2C_FIELD(arg0, u8 *, 0x87);
    case 2:
        return (s8) M2C_FIELD(arg0, u8 *, 0x88);
    case 7:
        return (s8) M2C_FIELD(arg0, u8 *, 0x8E);
    case 0:
        return (s8) M2C_FIELD(arg0, u8 *, 0x86);
    case 8:
        return (s8) M2C_FIELD(arg0, u8 *, 0x8F);
    case 9:
        return (s8) M2C_FIELD(arg0, u8 *, 0x90);
    case 10:
        return (s8) M2C_FIELD(arg0, u8 *, 0x91);
    case 11:
        return (s8) M2C_FIELD(arg0, u8 *, 0x92);
    case 12:
        return (s8) M2C_FIELD(arg0, u8 *, 0x93);
    case 13:
        return (s8) M2C_FIELD(arg0, u8 *, 0x94);
    case 14:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA1);
    case 15:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA2);
    case 18:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA5);
    case 16:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA3);
    case 17:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA4);
    case 21:
    case 19:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA6);
    case 20:
    case 22:
        return (s8) M2C_FIELD(arg0, u8 *, 0xA7);
    default:
        return 0;
    }
}

void fn_801C9DC0(void *arg0, s32 arg1, s8 arg2) {
    switch (arg1) {                                 /* irregular */
    case 3:
        M2C_FIELD(arg0, s8 *, 0x89) = arg2;
        return;
    case 4:
        M2C_FIELD(arg0, s8 *, 0x8B) = arg2;
        return;
    case 5:
        M2C_FIELD(arg0, s8 *, 0x8C) = arg2;
        return;
    case 6:
        M2C_FIELD(arg0, s8 *, 0x8D) = arg2;
        return;
    case 1:
        M2C_FIELD(arg0, s8 *, 0x87) = arg2;
        return;
    case 2:
        M2C_FIELD(arg0, s8 *, 0x88) = arg2;
        return;
    case 7:
        M2C_FIELD(arg0, s8 *, 0x8E) = arg2;
        return;
    case 0:
        M2C_FIELD(arg0, s8 *, 0x86) = arg2;
        return;
    case 8:
        M2C_FIELD(arg0, s8 *, 0x8F) = arg2;
        return;
    case 9:
        M2C_FIELD(arg0, s8 *, 0x90) = arg2;
        return;
    case 10:
        M2C_FIELD(arg0, s8 *, 0x91) = arg2;
        return;
    case 11:
        M2C_FIELD(arg0, s8 *, 0x92) = arg2;
        return;
    case 12:
        M2C_FIELD(arg0, s8 *, 0x93) = arg2;
        return;
    case 13:
        M2C_FIELD(arg0, s8 *, 0x94) = arg2;
        return;
    case 14:
        M2C_FIELD(arg0, s8 *, 0xA1) = arg2;
        return;
    case 15:
        M2C_FIELD(arg0, s8 *, 0xA2) = arg2;
        return;
    case 18:
        M2C_FIELD(arg0, s8 *, 0xA5) = arg2;
        return;
    case 16:
        M2C_FIELD(arg0, s8 *, 0xA3) = arg2;
        return;
    case 17:
        M2C_FIELD(arg0, s8 *, 0xA4) = arg2;
        return;
    case 21:
    case 19:
        M2C_FIELD(arg0, s8 *, 0xA6) = arg2;
        return;
    case 20:
    case 22:
        M2C_FIELD(arg0, s8 *, 0xA7) = arg2;
        return;
    }
}

s32 fn_801CB188(s32 *self) {
    return self[1];
}

void fn_801CD968(void) {

}

s32 fn_801CE588(char *arg0) {
    void fn_802EA51C(void *, s32, s32, s32, s32, f32);
    void fn_802EBE54(void *, s32);
    s32 fn_80336E08(void *, s32);
    void fn_8033789C(void *, s32);
    extern f32 lbl_803DEB20[];
    extern u8 lbl_8045B0F0[];
    char *p;

    if (M2C_FIELD(arg0, s32 *, 0x110) != 0) {
        if (fn_80336E08(lbl_8045B0F0, M2C_FIELD(arg0, s32 *, 0x110)) == 0) {
            return 1;
        }
        p = arg0 + 0x68;
        fn_802EA51C(p, 1, M2C_FIELD(arg0, s32 *, 0x110), -1, 0, lbl_803DEB20[0]);
        fn_802EBE54(p, 1);
        fn_8033789C(lbl_8045B0F0, M2C_FIELD(arg0, s32 *, 0x110));
        M2C_FIELD(arg0, s32 *, 0x110) = 0;
    }
    return 0;
}

void fn_801CE7E4(s32 arg0) {
    M2C_UNK fn_801CB190(s32);
    fn_801CB190(arg0 + 0xF8);
}

void fn_801CE808(s32 arg0) {
    M2C_UNK fn_801CB378(s32);
    fn_801CB378(arg0 + 0xF8);
}

void fn_801CE82C(s32 arg0) {
    M2C_UNK fn_801CBFF8(s32);
    fn_801CBFF8(arg0 + 0xF8);
}

void fn_801CE850(s32 arg0) {
    M2C_UNK fn_801CC288(s32);
    fn_801CC288(arg0 + 0xF8);
}

void fn_801CE874(s32 arg0) {
    M2C_UNK fn_801CC354(s32);
    fn_801CC354(arg0 + 0xF8);
}

void fn_801CE898(s32 arg0) {
    M2C_UNK fn_801CC5E0(s32);
    fn_801CC5E0(arg0 + 0xF8);
}

void fn_801CE8BC(s32 arg0) {
    M2C_UNK fn_801CB3E4(s32);
    fn_801CB3E4(arg0 + 0xF8);
}

void fn_801CE8E0(s32 arg0) {
    M2C_UNK fn_801CB6F8(s32);
    fn_801CB6F8(arg0 + 0xF8);
}

void fn_801CE904(s32 arg0) {
    M2C_UNK fn_801CC6A4(s32);
    fn_801CC6A4(arg0 + 0xF8);
}

void fn_801CE928(s32 arg0) {
    M2C_UNK fn_801CC954(s32);
    fn_801CC954(arg0 + 0xF8);
}

void fn_801CEA60(s32 *arg0, s32 arg1) {
    void fn_8009CCE4(void *);
    void fn_8009CD40(void *, s32);
    void fn_8009D0F8(void *, s32);
    void fn_8009D108(void *, s32, s32);
    void fn_8009E244(void *, s32);
    void *fn_801C6370(s32);
    u8 buf[0x1F8];
    s32 *p;
    s32 i;
    s32 v;

    p = arg0 + 2;
    fn_8009CCE4(buf);
    fn_8009D0F8(buf, M2C_FIELD(fn_801C6370(*arg0), s32 *, 0x80));
    for (i = 0; i <= 0x16; i++) {
        v = *p++;
        if (v != 0) {
            fn_8009D108(buf, i, v);
        }
    }
    fn_8009E244(buf, arg1);
    fn_8009CD40(buf, 2);
}

char *fn_801CEAF0(char *arg0, s32 arg1) {
    extern char lbl_803DEB6C[];
    char *ret;
    char *p;

    p = ((char **)(arg0 + 8))[arg1];
    ret = lbl_803DEB6C;
    if (p != NULL) {
        p = *(char **)(p + 0x134);
        if (p != NULL) {
            ret = *(char **)(p + 0x18);
        }
    }
    return ret;
}

void fn_801CEB20(s32 arg0, s32 arg1) {
    extern f32 lbl_803DEB78[];
    extern f32 lbl_803DEB7C[];
    extern f32 lbl_8043629C[];
    extern f32 lbl_804362A8[];

    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_8043629C[2] = lbl_803DEB78[0];
        lbl_804362A8[2] = lbl_803DEB7C[0];
        lbl_8043629C[0] = lbl_803DEB78[0];
        lbl_804362A8[0] = lbl_803DEB7C[0];
        lbl_8043629C[1] = lbl_803DEB78[0];
        lbl_804362A8[1] = lbl_803DEB7C[0];
    }
}

void fn_801CEB74(void) {
    void fn_801CEB20(s32, s32);
    fn_801CEB20(1, 0xFFFF);
}

