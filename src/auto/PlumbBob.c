/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80068444(void) {

}

void fn_8006A194(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8006A1F4(void) {
    return 1;
}

void fn_8006C7F0(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8006CD40(void) {
    fn_8006D798();
}

void fn_8006D99C(s32 *self, s32 value) {
    *self = value;
}

extern s32 fn_802E0904(void *);
extern s32 fn_802E091C(void *);
extern void fn_8010CD4C(s32);
extern void fn_800E3B38(void *, s32, f32);
extern void fn_800490B0(void *);
extern s32 lbl_8041E1C8[];
extern s32 lbl_8041F754[];
extern s32 lbl_80496644;
extern f32 lbl_803C9700[];
extern s32 lbl_804093B0[];
void fn_8006E268(void *self) {
    if (fn_802E0904(lbl_8041E1C8) == 0 && fn_802E091C(lbl_8041E1C8) == 0) {
        fn_8010CD4C(lbl_80496644);
        fn_800E3B38(self, 3, lbl_803C9700[0]);
    }
}

void fn_8006E2D0(void) {
}

void fn_8006E2D4(void) {
    fn_802E091C(lbl_8041E1C8);
    fn_800490B0(lbl_8041F754);
}

s32 *fn_8006E308(s32 *self, s32 a) {
    self[0] = a;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_804093B0;
    return self;
}

s32 fn_800702F8(void) {
    return 0;
}

s32 fn_80070464(void) {
    return 0;
}

void fn_80072B0C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80078124(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_80078160(void) {
    return 0;
}

void fn_8007B35C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8007BB0C(void) {
    fn_80308518();
}

void fn_8007BB2C(void) {
    fn_8030861C();
}

s32 fn_8007C488(void) {
    return 0;
}

void fn_8007C54C(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80081D84(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80089604(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

extern void fn_802D20E8(void *);
void fn_80089698(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8008A398(void) {
    fn_8008A3B8();
}

void fn_8008A6D4(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

s32 fn_8008A708(s32 *self) {
    return *self;
}

void fn_8008C388(void) {
    fn_8008C3A8();
}

