/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"
typedef struct {
    u8 pad0[0x14];
    void *unk14;
    u8 pad18[0x2C - 0x18];
    s32 unk2C[1];
} EIWallPartFlags;


void fn_802D2FD0(void);
extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
extern void *fn_802D197C(void *heap, u32 size, s32 align);
extern void *fn_802DBBCC(void *heap, u32 size, s32 align);
extern void *fn_802D0B3C(void);
void *fn_8032D280(u32 size);
void *fn_8032D280(u32 size) {
    void *heap;
    void *p;

    heap = ((void *(*)(void))fn_802D0AB8)();
    if (size == 0) {
        return NULL;
    }
    p = fn_802D197C(heap, size, 4);
    if (p == NULL) {
        p = fn_802DBBCC(heap, size, 0);
        if (p == NULL && heap == ((void *(*)(void))fn_802D0AB8)()) {
            return fn_802DBBCC(fn_802D0B3C(), size, 0);
        }
    }
    return p;
}

void fn_8032D310(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8032D440(void) {

}

void fn_8032D444(void) {

}

s32 fn_8032D9F0(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_r9 != NULL) {
        return M2C_FIELD(temp_r9, s32 *, 0xC);
    }
    return 0;
}

void fn_8032E124(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045B980[];
    fn_80338000(lbl_8045B980, arg0, 4);
}

void fn_8032E154(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045B980[];
    fn_80338184(lbl_8045B980, arg0);
}

s32 fn_8032E180(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_8032E188(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

void fn_8032E190(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8032E1B0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8032E1F0(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8032F0BC(s8 arg0) {
    extern s8 lbl_80494F50;
    lbl_80494F50 = arg0;
}

void fn_8032F5A0(void);
void fn_8033031C(void) {
    fn_8032F5A0();
}

void fn_80331064(void) {
    M2C_UNK fn_8032E230();
    M2C_UNK fn_803311D8(M2C_UNK);
    fn_803311D8(0x78);
    fn_8032E230();
}

void fn_803310DC(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493970[];
void *fn_8033111C(void) {
    return lbl_80493970;
}

extern s32 lbl_8049397C[];
s32 fn_80331128(void) {
    return lbl_8049397C[0];
}

extern s32 lbl_80493980[];
s32 fn_80331134(void) {
    return lbl_80493980[0];
}

extern u16 lbl_80493984[];
u16 fn_80331140(void) {
    return lbl_80493984[0];
}

void *fn_8033114C(void) {
    return lbl_80493970;
}

extern u16 lbl_80493986[];
u16 fn_80331158(void) {
    return lbl_80493986[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_80331064(void);
extern void fn_8033108C(void);
extern void fn_803310B8(void);
extern u8 lbl_803F34C0[];
extern u8 lbl_80493858[];
void fn_80331164(s32 arg0) {
    fn_802D6A90(lbl_80493970, fn_80331064, fn_8033108C, fn_803310B8, arg0, lbl_803F34C0, lbl_80493858);
}

void fn_802D2430(void);
void fn_803311B8(void) {
    fn_802D2430();
}

void fn_803311D8(s32 arg0) {
    void fn_80338000(void *, s32, s32);
    extern u8 lbl_8045BA40[];
    fn_80338000(lbl_8045BA40, arg0, 4);
}

void *fn_80331208(u32 size, void *p);
void *fn_80331208(u32 size, void *p) {
    return p;
}

void fn_80331210(s32 arg0) {
    void fn_80338184(void *, s32);
    extern u8 lbl_8045BA40[];
    fn_80338184(lbl_8045BA40, arg0);
}

s32 fn_8033123C(u8 *self) {
    return *(s32 *)(self + 0x20);
}

void fn_80331244(void *arg0, s32 arg1) {
    s32 temp_r0;
    void *temp_r9;
    void *temp_r9_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_r0 & 2) {
        if (arg1 != 0) {
            temp_r9 = M2C_FIELD(arg0, void **, 0x24);
            M2C_FIELD(temp_r9, s32 *, 0x64) = (s32) (M2C_FIELD(temp_r9, s32 *, 0x64) | 0x80);
            return;
        }
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x24);
        M2C_FIELD(temp_r9_2, s32 *, 0x64) = (s32) (M2C_FIELD(temp_r9_2, s32 *, 0x64) & 0xFFFFFF7F);
        return;
    }
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = (s32) (temp_r0 | 0x80);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (temp_r0 & 0xFFFFFF7F);
}

s32 fn_803312C8(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x64) >> 5U) & 1;
}

s32 fn_803312D4(EIWallPartFlags *self, s32 i) {
    return self->unk2C[i];
}

u8 fn_80331364(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5C);
}

s32 fn_8033136C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x64) >> 2U) & 1;
}

u8 fn_80331378(void *arg0) {
    return (u8) ((M2C_FIELD(arg0, u8 *, 0x72) * 4) + (M2C_FIELD(arg0, u8 *, 0x73) / 15));
}

s32 fn_80331410(void *arg0) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x20);
    return ((u32) (M2C_FIELD(temp_r9, s32 *, 0x74) | M2C_FIELD(temp_r9, s32 *, 0xB4)) >> 5U) & 1;
}

void fn_8033143C(void) {
    M2C_UNK fn_80330FC4(M2C_UNK, M2C_UNK);
    fn_80330FC4(1, 0xFFFF);
}

