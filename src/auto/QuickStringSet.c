/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80495A94;
extern s32 lbl_804943C0;
void fn_800F661C(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F6A78(s32, s32, M2C_UNK);
    fn_800F68E0();
    fn_800F6A78(arg0, arg1, -1);
}

s32 fn_800F6688(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10C);
}

void fn_800F6690(void (*cb)(void)) {
    lbl_804943C0 = cb;
}

s32 fn_800F6698(void) {
    return lbl_80495A94;
}

void fn_800F66A0(void (*cb)(void)) {
    lbl_80495A94 = cb;
}

s32 fn_800F67E4(u32 arg0) {
    s32 fn_800F66D8();
    s32 temp_r31;
    s32 var_r30;

    temp_r31 = fn_800F66D8() % arg0;
    var_r30 = fn_800F66D8() % arg0;
    if (temp_r31 < var_r30) {
        var_r30 = temp_r31;
    }
    if (fn_800F66D8() & 1) {
        var_r30 = -var_r30;
    }
    return var_r30;
}

void *fn_800F687C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    fn_800F68E0();
    return arg0;
}

s32 fn_800F68B4(s32 *self) {
    return self[1];
}

void fn_800F68BC(s32 *arg0) {
    M2C_UNK fn_80248808(s32);
    fn_80248808(*arg0);
}

s32 fn_800F69E8(s32 *self) {
    return *self;
}

s32 fn_800F69F0(s32 *self) {
    return *self;
}

void fn_800F69F8(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F68F0(s32, s32, M2C_UNK);
    fn_800F68E0();
    fn_800F68F0(arg0, arg1, -1);
}

void fn_800F6A38(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F6A78(s32, s32, M2C_UNK);
    fn_800F68E0();
    fn_800F6A78(arg0, arg1, -1);
}

void fn_800F6A78(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800F68F0(s32, s32, s32);
    fn_800F68F0(arg0, fn_800F69E8(arg1), arg2);
}

void *fn_800F6FB4(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    fn_800F7018();
    return arg0;
}

s32 fn_800F6FEC(s32 *self) {
    return self[1];
}

void fn_800F6FF4(s32 *arg0) {
    M2C_UNK fn_800F8120(s32);
    fn_800F8120(*arg0);
}

void fn_800F7018(s16 **arg0) {
    **arg0 = 0;
}

s32 fn_800F7138(s32 *self) {
    return *self;
}

s32 fn_800F7140(s32 *self) {
    return *self;
}

void fn_800F71C8(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_800F7028(s32, s32, s32);
    fn_800F7028(arg0, fn_800F7138(arg1), arg2);
}

void fn_800F7708(s32 arg0, s32 arg1) {
    M2C_UNK fn_800F7744(s32, s32);
    fn_800F7744(arg0, fn_800F69E8(arg1));
}

void fn_800F77AC(void) {
    M2C_UNK fn_800F788C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_800F788C();
}

void fn_800F77D4(void) {
    M2C_UNK fn_800F788C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_800F788C();
}

void fn_800F77FC(void) {
    M2C_UNK fn_800F788C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_800F788C();
}

void fn_800F7824(void) {
    M2C_UNK fn_800F788C();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(0x14);
    fn_800F788C();
}

extern u8 lbl_8040D2A8[];
extern void fn_802D20E8(void *);
void fn_800F78B8(void **self, s32 flags) {
    *self = lbl_8040D2A8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_800F78EC(void) {

}

void fn_800F7A10(void) {

}

void fn_800F7A14(void) {

}

void fn_800F7A18(void) {

}

void fn_800F7A1C(void) {

}

s32 fn_800F7A20(void) {
    return 0;
}

void fn_800F7A28(void) {

}

void fn_800F68E0(void *);
void fn_800F7A2C(void *self, void *arg) {
    fn_800F68E0(arg);
}

void fn_800F7A50(void) {

}

s32 fn_800F7E98(void) {
    return 0;
}

s32 fn_800F7EA0(void) {
    return 0;
}

s32 fn_800F7EA8(void) {
    return 0;
}

s16 fn_800F7EB0(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 8);
    if (temp_r9 != NULL) {
        return M2C_FIELD(temp_r9, s16 *, 8);
    }
    return 0;
}

void fn_800F7EC8(void) {

}

void fn_800F7ECC(void) {

}

s32 fn_800F7F4C(void) {
    return 0;
}

s32 fn_800F7F54(void) {
    return 0;
}

s32 fn_800F7F5C(void) {
    return 0;
}

s32 fn_800F7F64(void) {
    return 0;
}

s32 fn_800F7F6C(void) {
    return 1;
}

s32 fn_800F7F74(void) {
    return 0;
}

s32 fn_800F7F7C(void *arg0, s32 arg1, void **arg2) {
    void *temp_r9;

    if (arg2 != NULL && (arg1 == 1 || arg1 == 0x6BC37BC5)) {
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r9, void (**)(void *), 0x14)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x10));
        *arg2 = arg0;
        return 1;
    }
    return 0;
}

s32 fn_800F7FEC(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_800F8000(void *arg0) {
    s32 var_r3;
    void *temp_r9;

    var_r3 = M2C_FIELD(arg0, s32 *, 0x10) - 1;
    M2C_FIELD(arg0, s32 *, 0x10) = var_r3;
    if (var_r3 == 0) {
        if (arg0 != NULL) {
            temp_r9 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_r9, void (**)(void *, s32), 0x64)((char *)arg0 + M2C_FIELD(temp_r9, s16 *, 0x60), 3);
        }
        return 0;
    }
    return var_r3;
}

void fn_800F805C(s32 *arg0) {
    void fn_800F80B4(s32 *);
    s32 a;
    s32 b;

    a = arg0[0];
    b = arg0[1];
    fn_800F80B4(&a);
    fn_800F80B4(&b);
    arg0[0] = b;
    arg0[1] = a;
}

s32 fn_800F86C8(void *arg0, s32 arg1) {
    s32 temp_r9;
    s32 var_r3;

    temp_r9 = (M2C_FIELD(arg0, s32 *, 4) + arg1) - M2C_FIELD(arg0, s32 *, 0);
    var_r3 = temp_r9;
    if (temp_r9 < 0) {
        var_r3 = temp_r9 + 0x7F;
    }
    return temp_r9 - (var_r3 & 0xFFFFFF80);
}

void *fn_800F86F4(void *arg0, s32 arg1) {
    s32 temp_r9;
    s32 var_r3;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0);
    if ((arg1 > temp_r9) || (arg1 <= (s32) (temp_r9 - 0x80))) {
        return NULL;
    }
    var_r3 = (M2C_FIELD(arg0, s32 *, 4) + arg1) - temp_r9;
    if (var_r3 < 0) {
        var_r3 += 0x80;
    }
    return arg0 + ((var_r3 * 8) + 8);
}

s32 fn_800F873C(void) {
    return 0;
}

extern s32 lbl_804943C8;
void fn_800F8820(void (*cb)(void)) {
    lbl_804943C8 = cb;
}

void fn_800F8BF4(s32 arg0) {
    M2C_UNK fn_80248488(s32, M2C_UNK, M2C_UNK);
    fn_80248488(arg0 + 0x2940, 0, 0x140);
}

void fn_800F8CB4(void) {

}

s32 fn_800F8EA4(void) {
    return 0;
}

void fn_800F9564(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x34) = farg0;
}

s32 fn_800F96C4(void *arg0) {
    s32 fn_800C488C();
    M2C_FIELD(arg0, s32 *, 0x38) = fn_800C488C();
    M2C_FIELD(arg0, s32 *, 0) = 1;
    return 1;
}

s32 fn_800F98E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    return 1;
}

s32 fn_800F98EC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_800F98F4(s32 *self) {
    return self[2];
}

s32 fn_800F98FC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_800F9904(s32 arg0) {
    return arg0 + 0x20;
}

void fn_800FA0F0(s32 *self, s32 value) {
    *self = value;
}

void fn_800FA0F8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

void fn_800FA100(s32 arg0) {
    M2C_UNK fn_800FB360(s32);
    fn_800FAE08();
    fn_800FB360(arg0);
}

s32 fn_800FB614(s32 *self) {
    return self[1];
}

s32 fn_800FB678(void *arg0) {
    s32 var_r9;

    var_r9 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 4) != 0)) {
        var_r9 = 1;
    }
    return var_r9;
}

char *fn_800FB6A0(void *arg0) {
    extern u8 *lbl_80496660;
    extern char lbl_803D5E1C[];
    char *s = NULL;
    if (arg0 != NULL) {
        s = (*(char *(**)(u8 *, void *))(*(u8 **)(lbl_80496660 + 0x3A4) + 0x15C))(lbl_80496660 + *(s16 *)(*(u8 **)(lbl_80496660 + 0x3A4) + 0x158), arg0);
    }
    return s ? s : lbl_803D5E1C;
}

void fn_800FB6F8(void) {
    M2C_UNK fn_800FB760();
    M2C_UNK fn_802D1FC8(M2C_UNK);
    fn_802D1FC8(8);
    fn_800FB760();
}

void fn_800FB720(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0xC))((char *)obj + *(s16 *)(vt + 0x8), 3);
    }
}

void **fn_800FB760(void **arg0) {
    extern char lbl_8040D418[];
    arg0[0] = lbl_8040D418;
    arg0[1] = 0;
    return arg0;
}

extern u8 lbl_8040D458[];
void fn_800FB77C(void **self, s32 flags) {
    *self = lbl_8040D458;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

s32 fn_800FB7B0(void *arg0, s32 arg1, s32 arg2) {
    extern u8 *lbl_8049665C;
    s32 fn_803A053C(u8 *, u8 *, s32);
    u8 *obj;
    u8 *p;
    s32 n;
    s32 r;
    obj = (*(u8 *(**)(u8 *))(*(u8 **)lbl_8049665C + 0x3C))(lbl_8049665C + *(s16 *)(*(u8 **)lbl_8049665C + 0x38));
    p = *(u8 **)(*(u8 **)(obj + 0xC) + 4);
    n = 0;
    if (p != NULL) {
        n = *(s32 *)(p - 4);
    }
    r = fn_803A053C(p, p + n * 8, arg2);
    if (r != 0) {
        *(s32 *)((u8 *)arg0 + 4) = r;
        return 0;
    }
    return -1;
}

s16 fn_800FB878(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 4);
}

s16 fn_800FB884(void *arg0) {
    s32 var_r3;
    void *temp_r9;

    var_r3 = 0;
    temp_r9 = *M2C_FIELD(arg0, void ***, 4);
    if (temp_r9 != NULL) {
        var_r3 = M2C_FIELD(temp_r9, s32 *, -4);
    }
    return (s16) var_r3;
}

s32 fn_800FB8A4(void) {
    return 0;
}

void fn_800FB8AC(void) {
    extern void *lbl_80496648;
    void *vt;

    vt = *(void **)lbl_80496648;
    ((void (*)(void *))M2C_FIELD(vt, void **, 0x4C))((char *)lbl_80496648 + M2C_FIELD(vt, s16 *, 0x48));
}

extern u8 lbl_8040D5A0[];
void fn_800FC178(void **self, s32 flags) {
    *self = lbl_8040D5A0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

extern u8 lbl_8040D548[];
void **fn_800FC1AC(void **self) {
    *self = lbl_8040D548;
    return self;
}

s32 fn_800FC360(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4);
}

s32 fn_800FC36C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8);
}

extern s32 lbl_804944B0;
s32 fn_800FC378(void) {
    return lbl_804944B0;
}

void fn_800FC6E0(void) {

}

s32 fn_800FC788(void *arg0, s32 arg1) {
    if ((u32) (arg1 - 0x100) > 0x2228U) {
        /* Duplicate return node #1. Try simplifying control flow for better match */
        return -1;
    }
    if (arg1 <= 0xFFF) {
        return lbl_804944B0;
    }
    if (arg1 <= 0x1FFF) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4);
    }
    if (arg1 <= 0x2328) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8);
    }
    return -1;
}

s32 fn_800FD808(void *arg0, s32 arg1) {
    void *var_r9;

    var_r9 = NULL;
    switch (arg1) {                                 /* irregular */
    case 1:
        var_r9 = M2C_FIELD(arg0, void **, 0x18);
        break;
    case 2:
        var_r9 = M2C_FIELD(arg0, void **, 0x10);
        break;
    case 3:
        var_r9 = M2C_FIELD(arg0, void **, 0x14);
        break;
    }
    if (var_r9 != NULL) {
        return M2C_FIELD(var_r9, s32 *, 0x24);
    }
    return 0;
}

s32 fn_800FD9E8(void **obj) {
    s32 n;
    n = --M2C_FIELD(obj, s32 *, 0x1C);
    if (n == 0) {
        if (obj != NULL) {
            char *vt = (char *)*obj;
            (*(void (**)(void *, s32))(vt + 0x24))((char *)obj + *(s16 *)(vt + 0x20), 3);
        }
        return 0;
    }
    return n;
}

extern u8 lbl_8040D498[];
void **fn_800FDA44(void **self) {
    fn_800FC1AC(self);
    self[4] = 0;
    self[0] = lbl_8040D498;
    return self;
}

void fn_800FDA88(void **self) {
    M2C_UNK fn_800FC1C0(void **);
    *self = lbl_8040D498;
    fn_800FC1C0(self);
}

s32 fn_800FDAB8(void *arg0, s32 arg1) {
    extern u8 *lbl_8049665C;
    s32 id;
    u8 *obj;
    u8 *vt;
    id = -1;
    switch (arg1) {
    case 1:
        id = fn_800FC378();
        break;
    case 2:
        id = fn_800FC360(arg0);
        break;
    case 3:
        id = fn_800FC36C(arg0);
        break;
    }
    if (id == -1) {
        return 0;
    }
    obj = (*(u8 *(**)(u8 *, s32))(*(u8 **)lbl_8049665C + 0x3C))(lbl_8049665C + *(s16 *)(*(u8 **)lbl_8049665C + 0x38), id);
    vt = *(u8 **)(obj + 0x10);
    return (*(s32 (**)(u8 *, s32))(vt + 0x7C))(obj + *(s16 *)(vt + 0x78), 0x42484156);
}

s32 fn_800FDE40(void *arg0) {
    return ++M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_800FDF38(s32 *self) {
    return self[1];
}

s32 fn_800FDF40(s32 *self) {
    return self[2];
}

void fn_800FDFC4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 4) = -1;
}

void fn_800FDFD4(void) {
    M2C_UNK fn_800FDEB0(M2C_UNK, M2C_UNK);
    fn_800FDEB0(1, 0xFFFF);
}

