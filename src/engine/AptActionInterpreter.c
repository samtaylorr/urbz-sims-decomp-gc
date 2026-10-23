/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

static inline char *AptStack_Peek(void *s, s32 i) {
    return M2C_FIELD(s, char ***, 8)[M2C_FIELD(s, s32 *, 0) - i - 1];
}

void fn_8027AEC8(void);
void fn_8027B774(void) {
    fn_8027AEC8();
}

void fn_8027F924(void) {

}

void fn_8027FAA8(void) {

}

void fn_8027FAAC(void) {

}

void fn_80280E28(void) {

}

void fn_80281E3C(void) {

}

void fn_80281E40(void) {

}

void fn_80281E44(void) {

}

void fn_80282008(void) {

}

void fn_8028200C(void) {

}

void fn_80282398(void) {

}

void fn_8028239C(void) {

}

void fn_802823A0(void) {

}

void fn_80282800(void *arg0, void *arg1) {
    void fn_8027BF7C(void *, s32, s32, char *, char *, s32, s32);
    s32 fn_802B71E8(void *);
    s32 i;
    fn_8027BF7C(arg0, M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8),
                AptStack_Peek(arg0, 1) + 8, AptStack_Peek(arg0, 0), 0, 1);
    for (i = 1; i <= 2; i++) {
        char *obj = M2C_FIELD(arg0, char ***, 8)[M2C_FIELD(arg0, s32 *, 0) - i];
        if (fn_802B71E8(obj) == 0) {
            char *vt = *(char **)(obj + 4);
            (*(void (**)(char *))(vt + 0x14))(obj + *(s16 *)(vt + 0x10));
        }
    }
    M2C_FIELD(arg0, s32 *, 0) -= 2;
}

void fn_80282A9C(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0x14) = 1;
}

void fn_80283AD8(void *arg0, void *arg1) {
    void fn_8027ED84(void *, s32, s32);
    fn_8027ED84(arg0, M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8));
}

void fn_80285004(void *arg0) {
    s32 fn_802B71E8(void *);
    char *obj;
    s32 count = M2C_FIELD(arg0, s32 *, 0);
    obj = M2C_FIELD(arg0, char ***, 8)[count - 1];
    M2C_FIELD(arg0, char ***, 8)[count] = obj;
    M2C_FIELD(arg0, s32 *, 0) = count + 1;
    if (fn_802B71E8(obj) == 0) {
        char *vt = *(char **)(obj + 4);
        (*(void (**)(char *))(vt + 0xC))(obj + *(s16 *)(vt + 8));
    }
}

void fn_80285074(void) {

}

void fn_802869E0(void *arg0, void *arg1) {
    void fn_8027ED84(void *, s32, s32);
    fn_8027ED84(arg0, M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8));
}

void fn_80287304(void) {

}

void fn_80287CF8(void) {

}

void fn_80287DE4(void) {

}

void fn_8028A06C(void *arg0, u8 **arg1) {
    s32 fn_802B71E8(void *);
    void fn_80285078(void *, u8 **);
    char *obj;
    s32 count;
    obj = M2C_FIELD(arg0, char ***, 0x4C)[*(*arg1)++];
    count = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, char ***, 8)[count] = obj;
    M2C_FIELD(arg0, s32 *, 0) = count + 1;
    if (fn_802B71E8(obj) == 0) {
        char *vt = *(char **)(obj + 4);
        (*(void (**)(char *))(vt + 0xC))(obj + *(s16 *)(vt + 8));
    }
    fn_80285078(arg0, arg1);
}

void fn_8028A1F8(void *arg0, u8 **arg1) {
    s32 fn_802B71E8(void *);
    void fn_802828BC(void *, u8 **);
    void fn_802814D0(void *, u8 **);
    void fn_802BBE7C(void);
    extern void *lbl_80494B48;
    char *obj;
    s32 count;
    obj = M2C_FIELD(arg0, char ***, 0x4C)[*(*arg1)++];
    count = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, char ***, 8)[count] = obj;
    M2C_FIELD(arg0, s32 *, 0) = count + 1;
    if (fn_802B71E8(obj) == 0) {
        char *vt = *(char **)(obj + 4);
        (*(void (**)(char *))(vt + 0xC))(obj + *(s16 *)(vt + 8));
    }
    fn_802828BC(arg0, arg1);
    fn_802814D0(arg0, arg1);
    if (M2C_FIELD(lbl_80494B48, s32 *, 4) != 0 && M2C_FIELD(arg0, s32 *, 0) == 0) {
        fn_802BBE7C();
    }
}

void fn_8028AB6C(void) {
    void fn_8028AABC(s32, s32);
    fn_8028AABC(1, 0xFFFF);
}

void fn_8028AB98(void) {
    void fn_8028AABC(s32, s32);
    fn_8028AABC(0, 0xFFFF);
}

