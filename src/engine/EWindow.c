/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80307CCC();
void fn_80306CAC(void *arg0) {
    s32 fn_80307224(void *);
    void *temp_r9;
    void *temp_r9_2;

    if (fn_80307224(arg0 + 0xCC) != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x44);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xDC)(arg0 + M2C_FIELD(temp_r9, s16 *, 0xD8));
        return;
    }
    if (fn_80307224(arg0 + 0xA4) != 0) {
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x44);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0xD4)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0xD0));
    }
}

void fn_80306D28(void) {

}

void fn_80306F64(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x88) = farg0;
}

s32 fn_80306F6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

s32 fn_80306F74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60);
}

s32 fn_80306F7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C);
}

f32 fn_80306F84(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x7C);
}

void fn_80306FC8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
}

void fn_80306FD0(void *arg0) {
    extern void fn_80305EE0(void *, s32);
    fn_80305EE0(arg0, 1);
}

void fn_80306FF4(void *arg0) {
    extern void fn_80305FE0(void *, s32);
    fn_80305FE0(arg0, 1);
}

void fn_80307018(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x8C) = arg1;
}

void fn_8030744C(void *arg0) {
    void fn_80307478(void *);
    if (M2C_FIELD(arg0, s32 *, 0x18) & 2) {
        fn_80307478(arg0);
    }
}

void fn_80307748(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) (M2C_FIELD(arg1, s32 *, 0x18) | 0x20);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | 0x40);
}

void fn_8030793C(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 4);
}

void fn_80307994(void) {

}

s32 fn_80307998(void) {
    return 0;
}

void fn_803079A0(void) {

}

void fn_803079A4(void) {

}

void fn_803079A8(void) {

}

void fn_803079AC(s32 arg0, s32 *arg1) {
    M2C_UNK fn_802D3CE4(s32, s32);
    fn_802D3CE4(arg0 + 0x14, *arg1);
}

s32 fn_803079D4(s32 arg0) {
    return arg0 + 0x14;
}

void fn_803079DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

s32 fn_803079E4(s32 *self) {
    return self[6];
}

void fn_80307A04(void *arg0, s32 arg1, s32 arg2) {
    void *vt;

    vt = M2C_FIELD(arg0, void **, 0x44);
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x54))((char *)arg0 + M2C_FIELD(vt, s16 *, 0x50));
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) |= arg1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) &= ~arg1;
    }
}

s32 fn_80307A6C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 1U) & 1;
}

s32 fn_80307A78(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 2U) & 1;
}

s32 fn_80307A84(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 3U) & 1;
}

s32 fn_80307A90(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x18) >> 4U) & 1;
}

s32 fn_80307A9C(s32 arg0) {
    return arg0 + 0x2C;
}

s32 fn_80307AA4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

s32 fn_80307AAC(s32 *self) {
    return self[7];
}

f32 fn_80307AB4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x28);
}

f32 fn_80307ABC(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x20);
}

f32 fn_80307AC4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x24);
}

s32 fn_80307ACC(s32 arg0) {
    return arg0 + 0x20;
}

s32 fn_80307AD4(char *self) {
    return *(s32 *)(self + 0xC);
}

void fn_80307ADC(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0xC) = arg0;
}

s32 fn_80307B58(void *arg0) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 4);
    if (temp_r3 != NULL) {
        return *temp_r3;
    }
    return 0;
}

s32 fn_80307B74(void *arg0, void *arg1) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x10), s32 **, 4);
    if (temp_r3 != NULL) {
        return *temp_r3;
    }
    return 0;
}

s32 fn_80307B94(void *arg0, void *arg1) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x10), s32 **, 8);
    if (temp_r3 != NULL) {
        return *temp_r3;
    }
    return 0;
}

s32 fn_80307BB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

extern s32 lbl_80494EB0;
void fn_80307BBC(void (*cb)(void)) {
    lbl_80494EB0 = cb;
}

extern s32 lbl_80494EB4;
void fn_80307BC4(void (*cb)(void)) {
    lbl_80494EB4 = cb;
}

extern s32 lbl_80494EB8;
void fn_80307BCC(void (*cb)(void)) {
    lbl_80494EB8 = cb;
}

extern s32 lbl_80494EBC;
void fn_80307BD4(void (*cb)(void)) {
    lbl_80494EBC = cb;
}

void fn_80307BDC(void) {
    extern s32 lbl_80494EB0;
    lbl_80494EB0 = 0;
}

void fn_80307BE8(void) {
    extern s32 lbl_80494EB4;
    lbl_80494EB4 = 0;
}

void fn_80307BF4(void) {
    extern s32 lbl_80494EB8;
    lbl_80494EB8 = 0;
}

void fn_80307C00(void) {
    extern s32 lbl_80494EBC;
    lbl_80494EBC = 0;
}

void fn_80307C0C(void) {
    extern s32 lbl_80494EB0;
    if (lbl_80494EB0 != 0) {
        ((void (*)(void))lbl_80494EB0)();
    }
}

void fn_80307C3C(void) {
    extern s32 lbl_80494EB4;
    if (lbl_80494EB4 != 0) {
        ((void (*)(void))lbl_80494EB4)();
    }
}

void fn_80307C6C(void) {
    extern s32 lbl_80494EB8;
    if (lbl_80494EB8 != 0) {
        ((void (*)(void))lbl_80494EB8)();
    }
}

void fn_80307C9C(void) {
    extern s32 lbl_80494EBC;
    if (lbl_80494EBC != 0) {
        ((void (*)(void))lbl_80494EBC)();
    }
}

void fn_80307CCC(s32 arg0) {
    void fn_803076D4(void);
    void fn_80307D00(s32);
    fn_803076D4();
    fn_80307D00(arg0);
}

void fn_80307DF0(void) {

}

extern u8 lbl_8041AD40[];
extern void fn_8030951C(void *);
void fn_803081BC(u8 *self) {
    *(u8 **)(self + 0x44) = lbl_8041AD40;
    fn_8030951C(self);
}

void fn_803081EC(s32 arg0) {
    void fn_80307CCC(s32);
    fn_80307CCC(arg0);
}

void fn_8030824C(s32 arg0) {
    M2C_UNK fn_80307D00(s32);
    fn_803075C8();
    fn_80307D00(arg0);
}

f32 fn_803082B4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0xA8);
}

void fn_803082BC(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xA8) = farg0;
}

s32 fn_803082C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA4);
}

void fn_803083BC(void *arg0) {
    M2C_UNK fn_80305B1C();
    fn_80305B1C();
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
}

void fn_803090EC(void *arg0) {
    void *temp_r9;

    fn_803075C8();
    temp_r9 = M2C_FIELD(arg0, void **, 0x44);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x9C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x98));
}

void fn_80308518(void);
void fn_80309178(void) {
    fn_80308518();
}

void fn_8030861C(void);
void fn_80309198(void) {
    fn_8030861C();
}

s32 *fn_803091B8(s32 *arg0) {
    arg0[0] = 0;
    arg0[1] = 0;
    return arg0;
}

void fn_80309928(s32 arg0) {
    M2C_UNK fn_80309214(s32);
    fn_80309214(arg0 + 0x9C);
}

void fn_8030994C(s32 arg0) {
    M2C_UNK fn_80309214(s32);
    fn_80309214(arg0 + 0x9C);
}

void fn_80309970(s32 arg0) {
    M2C_UNK fn_8030935C(s32);
    fn_8030935C(arg0 + 0x9C);
}

void fn_80309994(s32 arg0) {
    M2C_UNK fn_8030935C(s32);
    fn_8030935C(arg0 + 0x9C);
}

s32 fn_803099E8(s32 arg0) {
    return arg0 + 0x80;
}

void fn_803099F0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x8C) = farg0;
}

void fn_8030A190(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0)) + M2C_FIELD(arg0, f32 *, 0x30));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x14)) + M2C_FIELD(arg0, f32 *, 0x34));
}

void fn_8030A40C(void *arg0) {
    f32 temp_f10;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;

    temp_f8 = M2C_FIELD(arg0, f32 *, 0x30);
    temp_f7 = M2C_FIELD(arg0, f32 *, 0x34);
    temp_f10 = M2C_FIELD(arg0, f32 *, 0);
    temp_f9 = M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x60) = (M2C_FIELD(arg0, f32 *, 0x70) - temp_f8) / temp_f10;
    M2C_FIELD(arg0, f32 *, 0x64) = (M2C_FIELD(arg0, f32 *, 0x74) - temp_f7) / temp_f9;
    M2C_FIELD(arg0, f32 *, 0x68) = (M2C_FIELD(arg0, f32 *, 0x78) - temp_f8) / temp_f10;
    M2C_FIELD(arg0, f32 *, 0x6C) = (M2C_FIELD(arg0, f32 *, 0x7C) - temp_f7) / temp_f9;
}

extern void *fn_802D197C(void *, u32, s32);
extern void *fn_802DC3C0(void *, u32, s32, s32, s32);
extern void *fn_802D0B3C(void);
void *fn_8030A68C(u32 size) {
    void *heap;
    void *p;

    heap = fn_802D0AB8();
    if (size == 0) {
        return NULL;
    }
    size = (size + 0xF) & ~0xF;
    p = fn_802D197C(heap, size, 0x10);
    if (p == NULL) {
        p = fn_802DC3C0(heap, size, 0x10, 0, 0);
        if (p == NULL && heap == fn_802D0AB8()) {
            return fn_802DC3C0(fn_802D0B3C(), size, 0x10, 0, 0);
        }
    }
    return p;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8030A738(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8030A76C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8030A4A8();
    M2C_UNK fn_8030A460(s32, s32);
    fn_8030A4A8();
    fn_8030A460(arg0, arg1);
}

void fn_8030A7A8(s32 arg0, s32 arg1) {
    M2C_UNK fn_8030A4A8();
    M2C_UNK fn_8030A570(s32, s32);
    M2C_UNK fn_8030A460(s32, s32);
    fn_8030A4A8(arg0, arg1);
    fn_8030A570(arg0, arg1);
    fn_8030A460(arg0, arg1);
}

void fn_8030A7F0(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0)) + M2C_FIELD(arg0, f32 *, 0x30));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x14)) + M2C_FIELD(arg0, f32 *, 0x34));
}

void fn_8030A81C(void *arg0, f32 *arg1, f32 *arg2, f32 farg0, f32 farg1) {
    *arg1 = (farg0 * M2C_FIELD(arg0, f32 *, 0)) + M2C_FIELD(arg0, f32 *, 0x30);
    *arg2 = (farg1 * M2C_FIELD(arg0, f32 *, 0x14)) + M2C_FIELD(arg0, f32 *, 0x34);
}

void fn_8030A840(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0x30)) / M2C_FIELD(arg0, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(arg0, f32 *, 0x34)) / M2C_FIELD(arg0, f32 *, 0x14));
}

void fn_8030A874(void *arg0, f32 *arg1, f32 *arg2, f32 farg0, f32 farg1) {
    *arg1 = (farg0 - M2C_FIELD(arg0, f32 *, 0x30)) / M2C_FIELD(arg0, f32 *, 0);
    *arg2 = (farg1 - M2C_FIELD(arg0, f32 *, 0x34)) / M2C_FIELD(arg0, f32 *, 0x14);
}

void fn_8030A8A0(void *arg0, f32 *arg1, f32 *arg2, f32 farg0, f32 farg1) {
    *arg1 = farg0 * M2C_FIELD(arg0, f32 *, 0);
    *arg2 = farg1 * M2C_FIELD(arg0, f32 *, 0x14);
}

void fn_8030A8BC(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x14));
}

extern s32 lbl_80494EC0;
s32 fn_8030A9B4(void) {
    return lbl_80494EC0;
}

extern s32 lbl_80494EC4;
s32 fn_8030A9BC(void) {
    return lbl_80494EC4;
}

void fn_8030A9C4(void) {

}

void fn_8030A9C8(void) {

}

void fn_8030A9CC(void) {

}

s32 fn_8030A9D0(void) {
    return 0;
}

void fn_8030A9D8(void) {
    M2C_UNK fn_8030A638(M2C_UNK, M2C_UNK);
    fn_8030A638(1, 0xFFFF);
}

