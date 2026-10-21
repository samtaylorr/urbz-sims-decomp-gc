/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80317758(void);
s32 fn_80317514(void *arg0) {
    s32 temp_r3;
    s32 var_r7;
    u8 temp_r10;
    u8 temp_r8;

    temp_r8 = M2C_FIELD(arg0, u8 *, 0);
    temp_r10 = M2C_FIELD(arg0, u8 *, 1);
    var_r7 = 0;
    if ((s32) ((temp_r8 << 8) | temp_r10) == 0xC0FB) {
        var_r7 = 1;
    } else {
        temp_r3 = (temp_r8 << 0x18) | (temp_r10 << 0x10) | (M2C_FIELD(arg0, u8 *, 2) << 8) | M2C_FIELD(arg0, u8 *, 3);
        if (temp_r3 == 0x42494746) {
            var_r7 = 2;
        } else if ((s32) (temp_r3 & 0xFFFFFF00) == 0x42494700) {
            var_r7 = 3;
        }
    }
    return var_r7;
}

void fn_80317B98(void) {
    fn_80317758();
}

s32 fn_80317CD8(s32 arg0) {
    s32 fn_80317BB8();
    s32 temp_r3;
    s32 var_r30;

    var_r30 = 0;
    temp_r3 = fn_80317BB8();
    if (temp_r3 != 0) {
        var_r30 = arg0 + temp_r3;
    }
    return var_r30;
}

s32 fn_80317D18(s32 arg0) {
    s32 fn_80317BF8();
    s32 temp_r3;
    s32 var_r30;

    var_r30 = 0;
    temp_r3 = fn_80317BF8();
    if (temp_r3 != 0) {
        var_r30 = arg0 + temp_r3;
    }
    return var_r30;
}

void fn_80318A70(const char *fmt, ...) {
}

void fn_8031A4F8(void) {

}

s32 fn_8031AE8C(void *arg0) {
    s32 temp_r3;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x94) == 0) || (temp_r3 = M2C_FIELD(arg0, s32 *, 0x90), ((temp_r3 > 1) == 0))) {
        return 0;
    }
    return temp_r3 - 1;
}

s32 fn_8031B700(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x80);
}

void fn_802D2FD0(void);
void fn_8031B708(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8031B728(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8031B768(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

s32 fn_8031BAD4(u8 *self, s32 arg1) {
    s32 fn_802D3EE8(void *, s32);
    s32 i;

    for (i = 0; i < *(s32 *)(self + 0x20 + 4); i++) {
        if (fn_802D3EE8(*(u8 **)(self + 0x20) + i * 0xB8 + 0xB4, arg1) == 0) {
            return i;
        }
    }
    return -1;
}

void fn_8031BB58(void) {

}

void fn_8031BB5C(s32 arg0, s32 arg1) {
    extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
    extern void fn_8031BBCC(void);
    extern void fn_8031BBF4(void *);
    extern void fn_8031BC20(void *);
    extern u8 lbl_80493830[];
    extern u8 lbl_803F2CC0[];
    extern u8 lbl_80493858[];
    extern s32 lbl_80496218;
    if (arg1 == 0xFFFF && arg0 != 0) {
        lbl_80496218 = fn_802D6A90(lbl_80493830, fn_8031BBCC, fn_8031BBF4, fn_8031BC20, 0, lbl_803F2CC0, lbl_80493858);
    }
}

void fn_8031BBCC(void) {
    M2C_UNK fn_8031B7A8();
    M2C_UNK fn_8031BD40(M2C_UNK);
    fn_8031BD40(0x40);
    fn_8031B7A8();
}

void fn_8031BBF4(void *self) {
    void fn_8031B7A8(void *);
    void *fn_8031BD70(u32 size, void *p);
    fn_8031B7A8(fn_8031BD70(0x40, self));
}

void fn_8031BC20(void *self) {
    void fn_8031B7EC(void *, s32);
    fn_8031B7EC(self, 2);
}

void fn_8031BC44(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493830[];
void *fn_8031BC84(void) {
    return lbl_80493830;
}

extern s32 lbl_8049383C[];
s32 fn_8031BC90(void) {
    return lbl_8049383C[0];
}

extern s32 lbl_80493840[];
s32 fn_8031BC9C(void) {
    return lbl_80493840[0];
}

extern u16 lbl_80493844[];
u16 fn_8031BCA8(void) {
    return lbl_80493844[0];
}

void *fn_8031BCB4(void) {
    return lbl_80493830;
}

extern u16 lbl_80493846[];
u16 fn_8031BCC0(void) {
    return lbl_80493846[0];
}

extern s32 fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8031BBCC(void);
extern void fn_8031BBF4(void *);
extern void fn_8031BC20(void *);
extern u8 lbl_803F2CC0[];
extern u8 lbl_80493858[];
void fn_8031BCCC(s32 arg0) {
    fn_802D6A90(lbl_80493830, fn_8031BBCC, fn_8031BBF4, fn_8031BC20, arg0, lbl_803F2CC0, lbl_80493858);
}

void fn_802D2430(void);
void fn_8031BD20(void) {
    fn_802D2430();
}

void fn_8031BD40(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045B390[];
    fn_80338000(lbl_8045B390, arg0, 4);
}

void *fn_8031BD70(u32 size, void *p);
void *fn_8031BD70(u32 size, void *p) {
    return p;
}

void fn_8031BD78(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045B390[];
    fn_80338184(lbl_8045B390, arg0);
}

s32 fn_8031BDA4(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 0xB8);
}

void fn_8031BDB4(void) {
    void fn_8031BB5C(s32, s32);
    fn_8031BB5C(1, 0xFFFF);
}

