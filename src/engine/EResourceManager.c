/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_802C52EC(s32);
void fn_80336E04(void) {

}

typedef struct ERMLock {
    char *obj;
} ERMLock;

static inline void ERMLock_Lock(ERMLock *l, char *obj) {
    char *vt;
    l->obj = obj;
    vt = *(char **)obj;
    (*(void (**)(void *, s32))(vt + 0x14))(obj + *(s16 *)(vt + 0x10), -1);
}

static inline void ERMLock_Unlock(ERMLock *l) {
    char *vt = *(char **)l->obj;
    (*(void (**)(void *))(vt + 0x1C))(l->obj + *(s16 *)(vt + 0x18));
}

char *fn_80336E08(char *self, s32 key) {
    s32 fn_80338598(char *, s32, char **);
    ERMLock lock;
    char *res;
    if (key != 0) {
        ERMLock_Lock(&lock, self);
        if (fn_80338598(self + 0x40, key, &res) != 0 && *(s32 *)(res + 0xC) != 0) {
            ERMLock_Unlock(&lock);
            return res;
        }
        ERMLock_Unlock(&lock);
    }
    return 0;
}

void fn_80336EC4(char *arg0, s32 arg1) {
    s32 fn_80337F14(s32);
    fn_80336E08(arg0, fn_80337F14(arg1));
}

char *fn_80336F00(char *arg0, s32 arg1, s32 arg2) {
    extern char *lbl_80496220;
    char *res = fn_80336E08(arg0, arg1);
    if (res == 0 && arg2 != 0) {
        char *vt = *(char **)lbl_80496220;
        (*(void (**)(void *))(vt + 0x4C))(lbl_80496220 + *(s16 *)(vt + 0x48));
        res = fn_80336E08(arg0, arg1);
    }
    return res;
}

void fn_80336F6C(char *arg0, s32 arg1, s32 arg2) {
    s32 fn_80337F14(s32);
    fn_80336F00(arg0, fn_80337F14(arg1), arg2);
}

void fn_80336FB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern char *lbl_80496220;
    char *vt = *(char **)lbl_80496220;
    (*(void (**)(void *, s32, s32, s32, s32, s32, s32))(vt + 0x8C))(lbl_80496220 + *(s16 *)(vt + 0x88), arg0, arg1, arg2, arg3, 1, 0);
}

s32 fn_80337008(char *self, s32 arg1) {
    s32 fn_80337DCC(char *, s32);
    void fn_803379C8(char *, s32);
    char *vt;
    if (fn_80337DCC(self, arg1) == 0) {
        vt = *(char **)(self + 0xA4);
        (*(void (**)(void *, s32))(vt + 0x24))(self + *(s16 *)(vt + 0x20), arg1);
        fn_803379C8(self, arg1);
        return fn_80337DCC(self, arg1);
    }
    return 1;
}

void fn_8033707C(char *arg0, s32 arg1) {
    s32 fn_80337008(char *, s32);
    fn_80337008(arg0, fn_80337F14(arg1));
}

void fn_80337480(s32 arg0, s32 arg1) {
    M2C_UNK fn_803370B8(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 fn_80337F14(s32);
    fn_803370B8(arg0, fn_80337F14(arg1), 0, 0, 0);
}

s32 fn_80337F14(s32 arg0) {
    return fn_802C52EC(arg0);
}

s32 fn_80337F34(void) {
    return 0;
}

void fn_80337FDC(s32 arg0) {
    M2C_UNK fn_8033983C(s32);
    fn_8033983C(arg0 + 0x6C);
}

s32 fn_8033891C(s32 *self) {
    return self[1];
}

s32 fn_80338924(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) == 0;
}

void fn_80338934(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_80338940(void) {

}

void fn_80338944(void) {

}

s32 fn_80338948(s32 *self) {
    return self[1];
}

s32 fn_80338950(s32 *self) {
    return self[2];
}

s32 fn_80338958(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_80338960(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80338968(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C);
}

void fn_803365B8(void);
void fn_80338970(void) {
    fn_803365B8();
}

void fn_80338AF4(char *self, char *obj, s32 a, s32 b) {
    char *vt;
    if (obj == *(char **)(self + 8)) {
        vt = *(char **)obj;
        (*(void (**)(void *, s32, s32))(vt + 0x14))(obj + *(s16 *)(vt + 0x10), *(s32 *)(self + 0xC), 0);
    }
    if (*(char **)(self + 8) != NULL) {
        vt = *(char **)obj;
        (*(void (**)(void *, s32, s32))(vt + 0x14))(obj + *(s16 *)(vt + 0x10), 0, 2);
    }
    *(s32 *)(self + 0) = a;
    *(s32 *)(self + 4) = b;
    *(char **)(self + 8) = obj;
    vt = *(char **)obj;
    (*(void (**)(void *, s32, s32))(vt + 0x14))(obj + *(s16 *)(vt + 0x10), *(s32 *)(self + 0xC), 1);
}

s32 fn_80338BAC(s32 *self) {
    char *obj = (char *)self[2];
    char *vt = *(char **)obj;
    (*(void (**)(void *))(vt + 0x1C))(obj + *(s16 *)(vt + 0x18));
    self[2] = 0;
    self[0] = 0;
    self[1] = 0;
    return 1;
}

void fn_80338C04(s32 arg0, s32 arg1) {
    extern u8 lbl_8045BA2C[];
    void fn_80338990(void *);
    void fn_803389B8(void *, s32);
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_80338990(lbl_8045BA2C);
        } else {
            fn_803389B8(lbl_8045BA2C, 2);
        }
    }
}

void fn_80338C58(void) {
    void fn_80338C04(s32, s32);
    fn_80338C04(1, 0xFFFF);
}

void fn_80338C84(void) {
    void fn_80338C04(s32, s32);
    fn_80338C04(0, 0xFFFF);
}

