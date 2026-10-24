/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

static inline char *SeqVec_End(char **v) {
    return v[1];
}

static inline void SeqPair_Clear(s32 *p) {
    p[1] = 0;
}

static inline void SeqRes_Init(void *self) {
    M2C_FIELD(self, s32 *, 4) = 0;
    M2C_FIELD(self, s32 *, 8) = 0;
    SeqPair_Clear((s32 *)((char *)self + 0xC));
    M2C_FIELD(self, s32 *, 0x14) = 0;
    SeqPair_Clear((s32 *)((char *)self + 0x14));
    SeqPair_Clear((s32 *)((char *)self + 0x1C));
    M2C_FIELD(self, s32 *, 0) = 0;
}

extern s32 lbl_80495D10;
extern void fn_800F1A60(s32, s32);
void fn_80197AC8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
}

void fn_8019882C(void) {
    fn_800F1A60((s32)&lbl_80495D10, 2);
}

void fn_801991B4(void) {

}

void fn_801991B8(void) {

}

void fn_8019968C(void *arg0) {
    char *fn_800F3304(void *);
    void *fn_800F5248(void *, char *);
    void *fn_800F524C(void *, char *);
    void fn_80198A50(char *);
    extern char lbl_803DB28C[];
    extern s32 lbl_80495A90;
    char *it;

    for (it = *(char **)((char *)arg0 + 0x10); it != SeqVec_End((char **)((char *)arg0 + 0x10)); it += 0x3C) {
        fn_800F5248(fn_800F524C(&lbl_80495A90, fn_800F3304((char *)arg0 + 8)), lbl_803DB28C);
        fn_800F5248(fn_800F524C(&lbl_80495A90, fn_800F3304((char *)arg0 + 0xC)), lbl_803DB28C);
        fn_80198A50(it);
    }
}

void fn_80199720(void *arg0) {
    SeqRes_Init(arg0);
}

void fn_80199EB8(s32 *self) {
    self[0] = 1;
}

void fn_80199FF8(s32 arg0, s32 arg1) {
    extern u8 lbl_804353F4[];
    void fn_80199720(void *);
    void fn_803AA8B0(void *, s32);
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_80199720(lbl_804353F4);
        } else {
            fn_803AA8B0(lbl_804353F4, 2);
        }
    }
}

void fn_80199FF8(s32 arg0, s32 arg1);

void fn_8019A04C(void) {
    fn_80199FF8(1, 0xFFFF);
}

extern u8 lbl_804353F4[];
void fn_8019A078(void) {
    fn_80199FF8(0, 0xFFFF);
}

