/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct EVibratePort {
    s32 active;
    u8 pad[0x40];
} EVibratePort;

static inline EVibratePort *EVibrate_PortAt(EVibratePort *ports, u32 n) {
    return ports + n;
}

static inline EVibratePort *EVibrate_Port(void *self, u32 n) {
    return (EVibratePort *)((s8 *)self + 0x38) + n;
}

s32 fn_80314E68(void *self, u8 index);
s32 fn_80314DB0(s32 *self);
static inline s32 EVibrate_NumPorts(void) {
    return 4;
}
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

void fn_80314D40(s32 *self) {
    if (fn_80314DB0(self) == 0) {
        u8 i;
        self[1] = 0;
        self[0] = 1;
        for (i = 0; i <= 1; i++) {
            EVibrate_PortAt((EVibratePort *)((s8 *)self + 0x38), i)->active = 0;
        }
    }
}

void fn_80314DA4(s32 *arg0) {
    *arg0 = 0;
}

s32 fn_80314DB0(s32 *self) {
    return *self;
}

s32 fn_80314DB8(void *self, s32 idx) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    struct { u8 pad[0x38]; struct { s32 val; u8 pad[0x40]; } ent[4]; } *s = self;
    void *obj = fn_803338D0(lbl_80494FCC, idx);
    if (obj != NULL) {
        void *vt = M2C_FIELD(obj, void **, 0x204);
        s->ent[idx].val = M2C_FIELD(vt, s32 (**)(void *), 0x24)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x20));
    } else {
        s->ent[idx].val = (s32)obj;
    }
    return s->ent[idx].val;
}

void fn_80314E34(void *self, u8 index) {
    fn_80314E68(self, index);
}

void fn_80314E54(void *self, s32 idx) {
    struct { u8 pad[0x38]; struct { s32 val; u8 pad[0x40]; } ent[4]; } *s = self;
    s->ent[idx].val = 0;
}

s32 fn_80314E68(void *self, u8 index) {
    if (index > 1) {
        return 0;
    }
    return EVibrate_PortAt((EVibratePort *)((s8 *)self + 0x38), index)->active;
}

void fn_80314E88(void *self) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    s32 i;
    for (i = 0; i < EVibrate_NumPorts(); i++) {
        if (fn_80314E68(self, i) != 0) {
            void *obj = fn_803338D0(lbl_80494FCC, i);
            if (obj != NULL) {
                void *vt = M2C_FIELD(obj, void **, 0x204);
                M2C_FIELD(vt, void (**)(void *), 0x9C)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x98));
            }
        }
    }
    M2C_FIELD(self, s32 *, 4) = 1;
}

void fn_80314F08(void *self) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    s32 i;
    if (M2C_FIELD(self, s32 *, 4) != 0) {
        M2C_FIELD(self, s32 *, 4) = 0;
        for (i = 0; i < EVibrate_NumPorts(); i++) {
            if (fn_80314E68(self, i) != 0) {
                void *obj = fn_803338D0(lbl_80494FCC, i);
                if (obj != NULL) {
                    void *vt = M2C_FIELD(obj, void **, 0x204);
                    M2C_FIELD(vt, void (**)(void *), 0xA4)((s8 *)obj + M2C_FIELD(vt, s16 *, 0xA0));
                }
            }
        }
    }
}

s32 fn_80314F94(void *self, s32 idx, f32 a) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    void *obj = fn_803338D0(lbl_80494FCC, idx);
    void *vt;
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0x204);
        return M2C_FIELD(vt, s32 (**)(void *, f32), 0x2C)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x28), a);
    }
    return 0;
}

s32 fn_80314FF0(void *self, s32 idx, f32 a, f32 b) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    void *obj = fn_803338D0(lbl_80494FCC, idx);
    void *vt;
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0x204);
        return M2C_FIELD(vt, s32 (**)(void *, f32, f32), 0x34)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x30), a, b);
    }
    return 0;
}

s32 fn_8031505C(void *self, s32 idx, f32 a) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    void *obj = fn_803338D0(lbl_80494FCC, idx);
    void *vt;
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0x204);
        return M2C_FIELD(vt, s32 (**)(void *, f32), 0x3C)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x38), a);
    }
    return 0;
}

s32 fn_803150B8(void *self, s32 idx, f32 a, f32 b) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    void *obj = fn_803338D0(lbl_80494FCC, idx);
    void *vt;
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0x204);
        return M2C_FIELD(vt, s32 (**)(void *, f32, f32), 0x44)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x40), a, b);
    }
    return 0;
}

s32 fn_80315124(void *self, s32 idx, f32 a, f32 b) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    void *obj = fn_803338D0(lbl_80494FCC, idx);
    void *vt;
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0x204);
        return M2C_FIELD(vt, s32 (**)(void *, f32, f32), 0x4C)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x48), a, b);
    }
    return 0;
}

s32 fn_80315190(void *self, s32 idx, f32 a, f32 b, f32 c, f32 d) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    void *obj = fn_803338D0(lbl_80494FCC, idx);
    void *vt;
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0x204);
        return M2C_FIELD(vt, s32 (**)(void *, f32, f32, f32, f32), 0x54)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x50), a, b, c, d);
    }
    return 0;
}

s32 fn_8031521C(void *self, s32 idx) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    void *obj = fn_803338D0(lbl_80494FCC, idx);
    void *vt;
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0x204);
        return M2C_FIELD(vt, s32 (**)(void *), 0x5C)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x58));
    }
    return 0;
}

s32 fn_80315268(void *self, s32 idx, f32 a) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    void *obj = fn_803338D0(lbl_80494FCC, idx);
    void *vt;
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0x204);
        return M2C_FIELD(vt, s32 (**)(void *, f32), 0x64)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x60), a);
    }
    return 0;
}

s32 fn_803152C4(void *self, s32 idx) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    void *obj = fn_803338D0(lbl_80494FCC, idx);
    void *vt;
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0x204);
        return M2C_FIELD(vt, s32 (**)(void *), 0x6C)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x68));
    }
    return 0;
}

s32 fn_80315310(void *self, s32 idx, f32 a) {
    extern void *lbl_80494FCC;
    void *fn_803338D0(void *, s32);
    void *obj = fn_803338D0(lbl_80494FCC, idx);
    void *vt;
    if (obj != NULL) {
        vt = M2C_FIELD(obj, void **, 0x204);
        return M2C_FIELD(vt, s32 (**)(void *, f32), 0x74)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x70), a);
    }
    return 0;
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
    s32 i;
    for (i = 0; i < EVibrate_NumPorts(); i++) {
        if (fn_80314E68(self, i) != 0) {
            void *obj = fn_803338D0(lbl_80494FCC, i);
            if (obj != NULL) {
                void *vt = M2C_FIELD(obj, void **, 0x204);
                M2C_FIELD(vt, void (**)(void *), 0x7C)((s8 *)obj + M2C_FIELD(vt, s16 *, 0x78));
            }
        }
    }
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

