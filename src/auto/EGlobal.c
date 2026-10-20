/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct EGlobalHandle {
    s32 value;
} EGlobalHandle;

s32 fn_80049BFC(void) {
    return 0x67F664FB;
}

void fn_8004AF3C(void) {

}

void fn_8004AF40(void) {

}

s32 fn_8004B944(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xF4);
    if (temp_r3 == 0) {
        return 0;
    }
    return temp_r3 + 0x18;
}

void fn_8004B95C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xF4) = arg1;
}

s32 fn_8004B964(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xF4);
}

void fn_8004B96C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x114) = arg1;
}

void fn_8004BA08(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_802E4420(s32, s32, s32);
    void *vt;

    vt = M2C_FIELD(arg0, void **, 0x3A4);
    if (((s32 (*)(void *))M2C_FIELD(vt, void **, 0xE4))((char *)arg0 + M2C_FIELD(vt, s16 *, 0xE0)) != 0) {
        vt = M2C_FIELD(arg0, void **, 0x3A4);
        fn_802E4420(((s32 (*)(void *))M2C_FIELD(vt, void **, 0xE4))((char *)arg0 + M2C_FIELD(vt, s16 *, 0xE0)), arg1, arg2);
    }
}

EGlobalHandle fn_8004BA7C(void) {
    extern s32 lbl_80495804;
    EGlobalHandle h;
    h.value = lbl_80495804;
    return h;
}

EGlobalHandle fn_8004BA8C(void *arg1, s32 arg2) {
    s32 fn_8032D5C8(s32, void *);
    EGlobalHandle *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803C6C28[];
    extern s32 lbl_8041FA68[];
    extern EGlobalHandle lbl_80495804;
    EGlobalHandle *p;
    s32 key;

    if (arg2 != 0) {
        key = fn_8032D5C8(M2C_FIELD(arg1, s32 *, 0x11C), lbl_803C6C28);
        p = fn_8032D6E8(lbl_8041FA68[0], key, arg2);
        if (p != NULL) {
            return *p;
        }
    }
    return lbl_80495804;
}

EGlobalHandle fn_8004BAFC(void *arg1, s32 arg2) {
    s32 fn_8032D5C8(s32, void *);
    s32 *fn_8032D6E8(s32, s32, s32);
    extern u8 lbl_803C6C28[];
    extern s32 lbl_8041FA68[];
    extern s32 lbl_80495804;
    EGlobalHandle h;
    s32 *p;
    s32 key;

    if (arg2 != 0) {
        key = fn_8032D5C8(M2C_FIELD(arg1, s32 *, 0x11C), lbl_803C6C28);
        p = fn_8032D6E8(lbl_8041FA68[0], key, arg2);
        if (p != NULL) {
            h.value = p[3];
            goto end;
        }
    }
    h.value = lbl_80495804;
end:
    return h;
}

EGlobalHandle fn_8004BB6C(void) {
    extern s32 lbl_80495804;
    EGlobalHandle h;
    h.value = lbl_80495804;
    return h;
}

void fn_8004C614(void) {

}

void fn_8004D3E8(void) {

}

void fn_8004D3EC(void) {

}

void fn_8004D8E0(void *arg0) {
    M2C_UNK fn_8004174C(s32);
    fn_8004174C(M2C_FIELD(arg0, s32 *, 0x150));
}

void fn_8004D930(void *arg0) {
    M2C_UNK fn_800416F4(s32);
    fn_800416F4(M2C_FIELD(arg0, s32 *, 0x150));
}

extern u8 lbl_8041ED64[];
void fn_8001E370(u8 *arg);
void fn_8004D9D4(void) {
    fn_8001E370(lbl_8041ED64);
}

void fn_8004DCC0(void *arg0) {
    M2C_UNK fn_80064EC4(s32);
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0xEC);
    if (temp_r9 != NULL) {
        fn_80064EC4(M2C_FIELD(temp_r9, s32 *, 4));
    }
}

s32 fn_8004E644(void) {
    return 0;
}

s32 fn_8004E72C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x384);
}

s32 fn_8004E734(void) {
    return 0;
}

s32 fn_8004E814(void) {
    return 0;
}

s32 fn_8004E81C(void) {
    return 0;
}

s32 fn_8004F0B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xFC);
}

s32 fn_8004F0B8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x100);
}

s32 fn_8004F0C0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x104);
}

s32 fn_8004F0C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x368);
}

void fn_8004F0D0(void *arg0, s32 arg1) {
    extern s32 lbl_80494F40;
    lbl_80494F40 = arg1;
}

extern s32 lbl_80494F40;
s32 fn_8004F0D8(void) {
    return lbl_80494F40;
}

void fn_8004F0E0(void *arg0, s32 arg1) {
    extern s32 lbl_80494F44;
    lbl_80494F44 = arg1;
}

extern s32 lbl_80494F44;
s32 fn_8004F0E8(void) {
    return lbl_80494F44;
}

s32 fn_8004F0F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x378);
}

void fn_8004F0F8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x384) = arg1;
}

void fn_8004F100(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x390) = arg1;
}

void fn_8004F108(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x194) = arg1;
}

s32 fn_8004F110(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x194);
}

void fn_8004F118(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x198) = arg1;
}

s32 fn_8004F120(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x198);
}

void fn_8004F128(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0xAA) = 0;
}

u16 fn_8004F134(u16 *arg0) {
    return *arg0;
}

u16 fn_8004F13C(struct { u8 pad[0x92]; u16 unk92[1]; } *arg0, s32 arg1) {
    return arg0->unk92[arg1];
}

u16 fn_8004F14C(struct { u16 unk0; u16 unk2[1][6]; } *arg0, s32 arg1, s32 arg2) {
    return arg0->unk2[arg1][arg2];
}

void fn_8004F164(void) {
    M2C_UNK fn_8004EDEC(M2C_UNK, M2C_UNK);
    fn_8004EDEC(1, 0xFFFF);
}

