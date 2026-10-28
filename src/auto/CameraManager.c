/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void fn_802D20E8(void *);
extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
extern void *fn_80248488(void *, s32, u32);

static inline void *CameraManager_AllocAligned(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

s32 *fn_80014DCC(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

void fn_80014DE0(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_80014E08(void) {

}

void fn_80014E0C(void) {

}

s32 fn_80014EE0(void) {
    void *fn_802D1FC8(s32);
    extern s32 lbl_80493F2C;
    s32 *p;
    if ((s32)lbl_80493F2C == 0) {
        p = fn_802D1FC8(8);
        lbl_80493F2C = (s32)fn_80014DCC(p);
        fn_80014E08();
    }
    return lbl_80493F2C;
}

void fn_80014F24(s32 *arg0, s32 arg1, s32 arg2) {
    s32 off = arg1 << 2;
    *(s32 *)((s32)arg0 + off) = arg2;
}

s32 fn_80014F30(s32 *arg0, s32 arg1) {
    s32 off = arg1 << 2;
    return *(s32 *)((s32)arg0 + off);
}

void fn_80014F3C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_80014F48(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800150A8(void *arg0) {
    M2C_UNK fn_800159F4(s32);
    fn_800159F4(M2C_FIELD(arg0, s32 *, 4));
}

void fn_80015250(s32 arg0) {
    void fn_800151C0(void);
    extern s32 lbl_80495704;
    extern void **lbl_804961A4;
    extern s32 lbl_8049664C;
    char *vt;
    lbl_80495704 = arg0;
    vt = (char *)*lbl_804961A4;
    lbl_8049664C = 0;
    (*(void (**)(void *, void (*)(void)))(vt + 0x44))(
        (char *)lbl_804961A4 + *(s16 *)(vt + 0x40), fn_800151C0);
}

f32 fn_8001529C(void) {
    extern f32 lbl_8049570C;
    return lbl_8049570C;
}

void fn_800153B0(void *arg0) {
    M2C_UNK fn_8000B13C(s32, void *, M2C_UNK);
    M2C_UNK fn_8000C1EC(s32, void *);
    extern u8 lbl_803C2610[];
    extern u8 lbl_8041F94C[];
    u8 *p;
    M2C_FIELD(arg0, s32 *, 0xED8) = 0;
    p = lbl_8041F94C;
    fn_8000C1EC(M2C_FIELD(p, s32 *, 0xD0), arg0);
    fn_8000B13C(M2C_FIELD(p, s32 *, 0xD0), lbl_803C2610, 0);
}

void fn_80015404(void) {

}

void fn_80015408(void *arg0) {
    s32 fn_8033740C(void *, u32, s32, s32);
    extern u8 lbl_8045BA40[];
    u8 *p = lbl_8045BA40;
    M2C_FIELD(arg0, s32 *, 0x4C) = fn_8033740C(p, 0xAB5FDCCC, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x50) = fn_8033740C(p, 0x0F303F75, 0, 0);
}

void fn_80015470(s32 arg0, s32 arg1, u16 *arg2, u16 *arg3) {
    void *fn_80190AA4(s32, u32);
    extern s32 lbl_80496654;
    void *temp_r3;

    *arg2 = 0;
    *arg3 = 0;
    if (lbl_80496654 != 0 && *arg2 <= 0xFFFAU) {
        temp_r3 = fn_80190AA4(lbl_80496654, *arg2);
        if (temp_r3 != NULL) {
            *arg3 = M2C_FIELD(temp_r3, u16 *, 2);
        }
    }
}

void fn_800156E8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x550) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x578) != 0) {
        M2C_FIELD(arg0, s32 *, 0x554) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x554) = 1;
}

void fn_80015710(void) {
    extern s32 lbl_80495100;
    extern s32 lbl_80495704;
    lbl_80495704 = 0;
    lbl_80495100 = 0;
}

void fn_800157CC(void) {

}

void fn_800159F0(void) {

}

void fn_80016300(void *arg0) {
    M2C_UNK fn_800F8178(s32, s32);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        M2C_FIELD(arg0, s32 *, 0x570) = 0;
        fn_800F8178(M2C_FIELD(arg0, s32 *, 0xF50), M2C_FIELD(arg0, s32 *, 0xF58));
        fn_800F8178(M2C_FIELD(arg0, s32 *, 0xF54), M2C_FIELD(arg0, s32 *, 0xF5C));
    }
}

void fn_80016354(void) {

}

void fn_80016358(void) {

}

void fn_8001635C(void) {

}

void fn_80016810(void) {
    M2C_UNK fn_80043F0C(M2C_UNK);
    fn_80043F0C(0);
}

void fn_80016C78(void) {

}

void fn_800170FC(void) {

}

void fn_800176DC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_800177CC(void) {
    M2C_UNK fn_80017100(M2C_UNK, M2C_UNK);
    fn_80017100(1, 0xFFFF);
}

