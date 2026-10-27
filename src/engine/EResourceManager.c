/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

s32 fn_802C52EC(s32);

typedef struct ResLock {
    char *obj;
    s32 unk4;
} ResLock;

static inline void ResLock_Init(ResLock *l, char *obj) {
    char *vt;
    l->obj = obj;
    vt = *(char **)obj;
    (*(void (**)(void *, s32))(vt + 0x14))(obj + *(s16 *)(vt + 0x10), -1);
}

static inline void ResLock_Release(ResLock *l) {
    char *vt = *(char **)l->obj;
    (*(void (**)(void *))(vt + 0x1C))(l->obj + *(s16 *)(vt + 0x18));
}

typedef struct ERMLock {
    char *obj;
    u8 unk4[3];
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

void fn_80336CBC(char *self) {
    void fn_8033789C(char *, s32);
    u32 i;

    for (i = 0; i < **(u32 **)(self + 0x60); i++) {
        fn_8033789C(self, (*(s32 **)(self + 0x60))[i + 1]);
    }
}

void fn_80336D24(char *self) {
    void fn_80338940(char *, s32);
    ERMLock lock[1];

    ERMLock_Lock(lock, self);
    fn_80338940(self + 0x40, *(s32 *)(self + 0x54));
    ERMLock_Unlock(lock);
}

void fn_80336D94(char *self) {
    void fn_80338944(char *, s32);
    ERMLock lock[1];

    ERMLock_Lock(lock, self);
    fn_80338944(self + 0x40, *(s32 *)(self + 0x54));
    ERMLock_Unlock(lock);
}

void fn_80336E04(void) {

}


char *fn_80336E08(char *self, s32 key) {
    s32 fn_80338598(char *, s32, char **);
    char *res;
    struct {
        char *obj;
        u8 unk4[0];
    } lock;
    if (key != 0) {
        ERMLock_Lock((ERMLock *)&lock, self);
        if (fn_80338598(self + 0x40, key, &res) != 0) {
            self = res;
            if (*(s32 *)(self + 0xC) != 0) {
                ERMLock_Unlock((ERMLock *)&lock);
                return self;
            }
        }
        ERMLock_Unlock((ERMLock *)&lock);
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
    if (fn_80337DCC(self, arg1) != 0) {
        return 1;
    }
    vt = *(char **)(self + 0xA4);
    (*(void (**)(void *, s32))(vt + 0x24))(self + *(s16 *)(vt + 0x20), arg1);
    fn_803379C8(self, arg1);
    return fn_80337DCC(self, arg1);
}

void fn_8033707C(char *arg0, s32 arg1) {
    s32 fn_80337008(char *, s32);
    s32 fn_80337F14(s32);
    fn_80337008(arg0, fn_80337F14(arg1));
}

void fn_80337354(char *self, char *res, s32 arg2) {
    s32 fn_8033860C(char *, s32, char *, s32);
    ERMLock lock[1];
    char *vt;
    if (res != NULL) {
        ERMLock_Lock(lock, self);
        *(char **)(res + 4) = self;
        *(s32 *)(res + 8) = arg2;
        if (fn_8033860C(self + 0x40, arg2, res, *(s32 *)(self + 0x54)) == 0) {
            *(s32 *)(res + 0xC) += 1;
        }
        vt = *(char **)res;
        (*(void (**)(void *))(vt + 0x5C))(res + *(s16 *)(vt + 0x58));
        ERMLock_Unlock(lock);
    }
}

void fn_8033740C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_803370B8(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_803370B8(arg0, arg1, arg2, arg3, 1);
}

void fn_80337480(s32 arg0, s32 arg1) {
    M2C_UNK fn_803370B8(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 fn_80337F14(s32);
    fn_803370B8(arg0, fn_80337F14(arg1), 0, 0, 0);
}

void fn_8033775C(char *self, s32 key) {
    void fn_80337510(char *, char *);
    s32 fn_80338598(char *, s32, char **);
    ERMLock lock;
    char *res;

    ERMLock_Lock(&lock, self);
    res = 0;
    fn_80338598(self + 0x40, key, &res);
    if (res != 0) {
        fn_80337510(self, res);
    }
    ERMLock_Unlock(&lock);
}

void fn_803377F0(char *arg0, s32 arg1) {
    s32 fn_80337F14(s32);
    void fn_8033775C(char *, s32);
    fn_8033775C(arg0, fn_80337F14(arg1));
}

void fn_8033782C(char *self, char *res) {
    ResLock lock;

    ResLock_Init(&lock, self);
    *(s32 *)(res + 0xC) += 1;
    ResLock_Release(&lock);
}

void fn_8033789C(char *self, s32 key) {
    void fn_80337AEC(char *, char *);
    s32 fn_80338598(char *, s32, char **);
    ResLock lock;
    char *res;

    ResLock_Init(&lock, self);
    res = 0;
    fn_80338598(self + 0x40, key, &res);
    if (res == 0) {
        ResLock_Release(&lock);
        return;
    }
    fn_80337AEC(self, res);
    ResLock_Release(&lock);
}

void fn_80337950(char *arg0, s32 arg1) {
    void fn_8033789C(char *, s32);
    s32 fn_80337F14(s32);
    fn_8033789C(arg0, fn_80337F14(arg1));
}

void fn_8033798C(char *arg0, s32 arg1) {
    void fn_803379C8(char *, s32);
    s32 fn_80337F14(s32);
    fn_803379C8(arg0, fn_80337F14(arg1));
}

void fn_80337C24(char *self, char *res) {
    void fn_802CAB54(char *, s32);
    void fn_802CAC04(char *);
    void fn_80338858(char *, s32);
    if (*(s32 *)(self + 0x5C) != 0) {
        fn_802CAB54(self, -1);
        fn_80338858(self + 0x40, *(s32 *)(res + 8));
        *(s32 *)(res + 4) = 0;
        fn_802CAC04(self);
    }
}

void fn_80337C80(char *arg0, s32 arg1) {
    s32 fn_80337CBC(char *, s32);
    s32 fn_80337F14(s32);
    fn_80337CBC(arg0, fn_80337F14(arg1));
}

s32 fn_80337CBC(char *self, s32 key) {
    s32 fn_803365B8(char *, s32, s32 *, s32 *);
    s32 a;
    s32 b;
    if (fn_803365B8(self, key, &a, &b) == 0) {
        return 0;
    }
    return a;
}

void fn_80337CF4(char *arg0, s32 arg1) {
    s32 fn_80337D30(char *, s32);
    s32 fn_80337F14(s32);
    fn_80337D30(arg0, fn_80337F14(arg1));
}

s32 fn_80337D30(char *self, s32 key) {
    s32 fn_803365B8(char *, s32, s32 *, s32 *);
    s32 a;
    s32 b;
    if (fn_803365B8(self, key, &a, &b) == 0) {
        return 0;
    }
    return b;
}

s32 fn_80337D68(char *self, s32 key) {
    s32 fn_803365B8(char *, s32, s32 *, s32 *);
    s32 a;
    s32 b;
    return fn_803365B8(self, key, &a, &b);
}

s32 fn_80337D90(char *arg0, s32 arg1) {
    s32 fn_80337F14(s32);
    return fn_80337D68(arg0, fn_80337F14(arg1));
}

s32 fn_80337DCC(char *self, s32 key) {
    s32 fn_80338598(char *, s32, char **);
    ERMLock lock;
    s32 r;
    ERMLock_Lock(&lock, self);
    r = fn_80338598(self + 0x40, key, 0);
    ERMLock_Unlock(&lock);
    return r;
}

s32 fn_80337E4C(char *arg0, s32 arg1) {
    s32 fn_80337F14(s32);
    return fn_80337DCC(arg0, fn_80337F14(arg1));
}

void fn_80337E88(char *self, char *res) {
    s32 fn_80338598(char *, s32, char **);
    void fn_80338858(char *, s32);
    ERMLock lock;
    ERMLock_Lock(&lock, self);
    if (fn_80338598(self + 0x40, *(s32 *)(res + 8), 0) != 0) {
        fn_80338858(self + 0x40, *(s32 *)(res + 8));
    }
    ERMLock_Unlock(&lock);
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

