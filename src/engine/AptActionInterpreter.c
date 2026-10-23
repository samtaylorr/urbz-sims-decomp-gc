/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

static inline char *AptStack_Peek(void *s, s32 i) {
    return M2C_FIELD(s, char ***, 8)[M2C_FIELD(s, s32 *, 0) - i - 1];
}

static inline u8 AptStream_ReadU8(u8 **pp) {
    return *(*pp)++;
}

static inline void AptTriple_Init(s32 *p) {
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
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

void fn_802892A4(void *arg0) {
    s32 fn_802B71E8(void *);
    extern char *lbl_80496130;
    char *obj = lbl_80496130;
    M2C_FIELD(arg0, char ***, 8)[M2C_FIELD(arg0, s32 *, 0)++] = obj;
    if (fn_802B71E8(obj) == 0) {
        char *vt = *(char **)(obj + 4);
        (*(void (**)(char *))(vt + 0xC))(obj + *(s16 *)(vt + 8));
    }
}

void fn_80289310(void *arg0) {
    s32 fn_802B71E8(void *);
    extern char *lbl_80496130;
    char *obj = lbl_80496130;
    M2C_FIELD(arg0, char ***, 8)[M2C_FIELD(arg0, s32 *, 0)++] = obj;
    if (fn_802B71E8(obj) == 0) {
        char *vt = *(char **)(obj + 4);
        (*(void (**)(char *))(vt + 0xC))(obj + *(s16 *)(vt + 8));
    }
}

void fn_8028937C(void *arg0, u8 **arg1) {
    s32 fn_802B71E8(void *);
    void fn_802828BC(void *, u8 **);
    void fn_802BBE7C(void);
    extern void *lbl_80494B48;
    char *obj;
    fn_802828BC(arg0, arg1);
    obj = AptStack_Peek(arg0, 0);
    if (fn_802B71E8(obj) == 0) {
        char *vt = *(char **)(obj + 4);
        (*(void (**)(char *))(vt + 0x14))(obj + *(s16 *)(vt + 0x10));
    }
    M2C_FIELD(arg0, s32 *, 0)--;
    if (M2C_FIELD(lbl_80494B48, s32 *, 4) != 0 && M2C_FIELD(arg0, s32 *, 0) == 0) {
        fn_802BBE7C();
    }
}

void fn_8028940C(s32 *arg0, s32 arg1) {
    void fn_802828BC(s32 *, s32);
    void fn_802814D0(s32 *, s32);
    void fn_802BBE7C(void);
    extern void *lbl_80494B48;
    fn_802828BC(arg0, arg1);
    fn_802814D0(arg0, arg1);
    if (M2C_FIELD(lbl_80494B48, s32 *, 4) != 0 && *arg0 == 0) {
        fn_802BBE7C();
    }
}

void fn_80289554(void *arg0, void *arg1) {
    char *fn_8027D768(void *, s32, s32, char *, s32, s32);
    s32 fn_802B71E8(void *);
    extern char lbl_80444628[];
    char *obj;
    s32 count;
    obj = fn_8027D768(arg0, M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8),
                      lbl_80444628 + 0x288, 1, 1);
    count = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, char ***, 8)[count] = obj;
    M2C_FIELD(arg0, s32 *, 0) = count + 1;
    if (fn_802B71E8(obj) == 0) {
        char *vt = *(char **)(obj + 4);
        (*(void (**)(char *))(vt + 0xC))(obj + *(s16 *)(vt + 8));
    }
}

void fn_802895DC(void *arg0) {
    s32 fn_802B71E8(void *);
    extern char *lbl_80494D58;
    char *obj = lbl_80494D58;
    M2C_FIELD(arg0, char ***, 8)[M2C_FIELD(arg0, s32 *, 0)++] = obj;
    if (fn_802B71E8(obj) == 0) {
        char *vt = *(char **)(obj + 4);
        (*(void (**)(char *))(vt + 0xC))(obj + *(s16 *)(vt + 8));
    }
}

void fn_8028A06C(void *arg0, u8 **arg1) {
    s32 fn_802B71E8(void *);
    void fn_80285078(void *, u8 **);
    char *obj;
    s32 count;
    obj = M2C_FIELD(arg0, char ***, 0x4C)[AptStream_ReadU8(arg1)];
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
    u8 idx = **arg1;
    (*arg1)++;
    obj = M2C_FIELD(arg0, char ***, 0x4C)[idx];
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

void fn_8028AABC(s32 arg0, s32 arg1) {
    extern s32 lbl_804433C4[];
    void fn_803B70D0(void *, s32);
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            AptTriple_Init(lbl_804433C4);
            AptTriple_Init(lbl_804433C4 + 3);
            AptTriple_Init(lbl_804433C4 + 6);
            AptTriple_Init(lbl_804433C4 + 9);
            AptTriple_Init(lbl_804433C4 + 12);
            AptTriple_Init(lbl_804433C4 + 15);
        } else {
            fn_803B70D0(lbl_804433C4, 2);
        }
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

