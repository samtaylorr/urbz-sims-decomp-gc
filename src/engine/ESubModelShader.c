/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void *fn_802FFD98(void *arg0) {
    M2C_UNK fn_803BAD8C();
    fn_803BAD8C();
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    return arg0;
}

void fn_802FFDD0(u8 *self, s32 flags) {
    extern void fn_803BAE58(u8 *, s32);
    extern void fn_802D20E8(u8 *);
    *(s32 *)(self + 0x14) = 0;
    fn_803BAE58(self, 2);
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_802FFE1C(u8 *self) {
    extern void fn_80300A40(u8 *);
    s32 i;

    for (i = 0; i < *(s32 *)(self + 4); i++) {
        fn_80300A40(*(u8 **)self + i * 0x6C);
    }
}

void fn_802FFE78(u8 *self) {
    extern void fn_80300A80(u8 *);
    s32 i;

    for (i = 0; i < *(s32 *)(self + 4); i++) {
        fn_80300A80(*(u8 **)self + i * 0x6C);
    }
}

s32 fn_802FFED4(u8 *self) {
    extern void fn_80300A40(u8 *);
    extern s32 fn_80300ACC(u8 *);
    s32 i;
    s32 j;

    for (i = 0; i < *(s32 *)(self + 4); i++) {
        if (fn_80300ACC(*(u8 **)self + i * 0x6C) == 0) {
            for (j = i - 1; j >= 0; j--) {
                fn_80300A40(*(u8 **)self + j * 0x6C);
            }
            return 0;
        }
    }
    return 1;
}

s32 fn_802FFF68(void) {
    return 0;
}

void fn_802FFF70(void) {

}

void fn_80300044(u8 *self, u8 *arg1) {
    s32 i;

    for (i = 0; i < *(s32 *)(self + 4); i++) {
        u8 *items = *(u8 **)self;
        u8 *item = items + i * 0x6C;
        u8 *obj = *(u8 **)(*(u8 **)(item + 8) + 0x20);
        u8 *vt = *(u8 **)(obj + 0xF0);
        (*(void (**)(void *, u8 *, s32))(vt + 0x14))(obj + *(s16 *)(vt + 0x10), arg1, 0);
        vt = *(u8 **)(arg1 + 0x68);
        (*(void (**)(void *, s32, f32))(vt + 0x1AC))(arg1 + *(s16 *)(vt + 0x1A8), 0, *(f32 *)(item + 0x24));
        vt = *(u8 **)(arg1 + 0x68);
        (*(void (**)(void *, s32))(vt + 0xB4))(arg1 + *(s16 *)(vt + 0xB0), *(s32 *)(items + i * 0x6C));
    }
}

void fn_8030089C(void) {

}

void fn_803008A0(void) {

}

extern u8 lbl_8045B82C[];
void fn_80338000(u8 *arg);
void fn_8030091C(void) {
    fn_80338000(lbl_8045B82C);
}

void fn_80338184(u8 *arg);
void fn_80300944(void) {
    fn_80338184(lbl_8045B82C);
}

void fn_80302228(void) {

}

void fn_8030222C(void) {

}

void fn_80302230(void) {

}

s32 fn_8030417C(void *arg0) {
    void *temp_r11;

    temp_r11 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0x20);
    return ((u32) (M2C_FIELD(temp_r11, s32 *, 0x74) | M2C_FIELD(temp_r11, s32 *, 0xB4)) >> 5U) & 1;
}

void fn_803042D4(s32 arg0, s32 arg1) {
    M2C_UNK fn_802E2288(s32, s32, s32, s32);
    fn_802E2288(arg1, arg0, arg0 + 0xC, arg0 + 0x18);
}

void fn_8030582C(s32 arg0, s32 arg1) {
    s32 var_ctr;

    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        var_ctr = 0xA;
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}

s32 fn_80305908(s32 arg0) {
    return arg0 + 0x48;
}

void fn_8030599C(void) {
    fn_8030582C(1, 0xFFFF);
}

