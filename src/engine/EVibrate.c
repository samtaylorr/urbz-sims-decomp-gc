/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_80314E68(void *self, u8 index);
extern void fn_802D20E8(void *);
void *fn_80314CC0(void *arg0) {
    M2C_UNK fn_80248488(M2C_UNK *, M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_8049670C;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    fn_80248488(arg0 + 8, 0, 0x88);
    fn_80248488(&lbl_8049670C, 0, 6);
    return arg0;
}

void fn_80314D18(void *self, s32 flags) {
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_80314DA4(s32 *arg0) {
    *arg0 = 0;
}

s32 fn_80314DB0(s32 *self) {
    return *self;
}

void fn_80314E34(void *self, u8 index) {
    fn_80314E68(self, index);
}

s32 fn_8031536C(void *self, s32 idx) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    void *obj = fn_803338D0(lbl_80494FCC, idx);
    void *vt;
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0x204);
        return M2C_FIELD(vt, s32 (**)(void *), 0x7C)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x78));
    }
    return 0;
}

void fn_803153B8(void *self) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    s32 i = 0;
    do {
        if (fn_80314E68(self, (u8)i) != 0) {
            void *obj = fn_803338D0(lbl_80494FCC, i);
            if (obj != NULL) {
                void *vt = M2C_FIELD(obj, void **, 0x204);
                M2C_FIELD(vt, void (**)(void *), 0x7C)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x78));
            }
        }
    } while (++i < 4);
}

s32 fn_80315430(void) {
    return 1;
}

void fn_80316EFC(void *arg0, s32 arg1) {
    M2C_UNK fn_80316A58();
    if (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x9C)) {
        M2C_FIELD(arg0, s32 *, 0x9C) = arg1;
        fn_80316A58();
    }
}

void fn_803171E8(void *self, s32 arg) {
    void fn_80316F2C(void *, void *, void *);
    if (M2C_FIELD(self, s32 *, 0x3C) != arg) {
        M2C_FIELD(self, s32 *, 0x3C) = arg;
        fn_80316F2C(self, self, (s8 *)self + 0xC);
    }
}

void fn_80317390(void) {
    M2C_UNK fn_80317224(M2C_UNK, M2C_UNK);
    fn_80317224(1, 0xFFFF);
}

s32 fn_80317224(s32, s32);
void fn_803173BC(void) {
    fn_80317224(0, 0xFFFF);
}

