/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800A9720(void);
void fn_800BF5E0(void) {

}

void fn_800BF7DC(void) {

}

s32 fn_800BF7E0(void) {
    return 0;
}

void fn_800BF7E8(void) {

}

s32 fn_800BF7EC(void) {
    return 0;
}

s32 fn_800BF7F4(void) {
    return 0;
}

void fn_800BFBCC(void) {

}

void fn_800BFBD0(void) {

}

s32 fn_800C0604(void) {
    return 0;
}

void fn_800C060C(void) {

}

void fn_800C0610(void) {

}

void fn_800C0614(void) {

}

void fn_800C0618(void) {

}

void fn_800C061C(void) {

}

void fn_800C0634(void) {

}

void fn_800C243C(void) {

}

void fn_800C2834(void) {

}

void fn_800C2950(void) {
    fn_800A9720();
}

void fn_800A9920(void);
void fn_800C2970(void) {
    fn_800A9920();
}

extern s32 lbl_80494360;
void fn_800C2E1C(void (*cb)(void)) {
    lbl_80494360 = cb;
}

extern s32 lbl_80495A24;
void fn_800C3820(void (*cb)(void)) {
    lbl_80495A24 = cb;
}

extern void (*lbl_8044331C[])(void);
extern u8 *lbl_80494DF0;
extern char lbl_803D04B8[];
extern char lbl_803D0268[];
extern char lbl_803D04C0[];
void fn_802D3C60(void *, void *);
void fn_802D41A8(void *, char *);
void fn_8027897C(char *, char *);
void fn_802D39F0(void *, char *);
s32 fn_800C3998(char *arg0) {
    char *str;
    char **s = &str;
    u8 *vt = *(u8 **)(lbl_80494DF0 + 0x338);

    fn_802D3C60(s, (*(void *(**)(void *))(vt + 0x24))(lbl_80494DF0 + *(s16 *)(vt + 0x20)));
    fn_802D41A8(s, lbl_803D04B8);
    fn_802D41A8(s, lbl_803D0268);
    fn_802D41A8(s, arg0);
    fn_8027897C(str, lbl_803D04C0);
    fn_802D39F0(s, str);
    return 1;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_800C3AC8(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_802D22C8(void);
void fn_800C3AFC(void) {
    fn_802D22C8();
}

void fn_800C3B1C(void) {
    lbl_8044331C[0]();
}

void fn_800C3B48(u16 *src, s32 len, u8 *dst) {
    s32 i;

    if (len == -1) {
        u16 *p = src;
        len = 0;
        while (*p != 0) {
            p++;
            len++;
        }
        len++;
    }
    for (i = 0; i < len; i++) {
        if (*src <= 0x7F) {
            *dst = *src;
        } else if (*src <= 0x7FF) {
            *dst = ((*src >> 6) & 0x1F) | 0xC0;
            *++dst = (*src & 0x3F) | 0x80;
        } else {
            *dst = ((*src >> 12) & 0xF) | 0xE0;
            *++dst = ((*src >> 6) & 0x3F) | 0x80;
            *++dst = (*src & 0x3F) | 0x80;
        }
        dst++;
        src++;
    }
}

void fn_800C3C04(u8 *src, s32 len, u16 *dst) {
    u8 *end;

    for (end = src + len; src < end; dst++) {
        if (!(*src & 0x80)) {
            *dst = *src;
            src++;
        } else if ((*src & 0xE0) == 0xC0) {
            *dst = ((*src & 0x1F) << 6) | (src[1] & 0x3F);
            src += 2;
        } else if ((*src & 0xF0) == 0xE0) {
            *dst = ((*src & 0xF) << 12) | ((src[1] & 0x3F) << 6) | (src[2] & 0x3F);
            src += 3;
        } else {
            break;
        }
    }
}

