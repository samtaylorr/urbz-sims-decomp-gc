/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802414E4(void);
s32 fn_8024154C(void);
void fn_80241510(void);
void fn_8024158C(s32);

void fn_8023EF7C(void) {
    register s32 v asm("r4");
    register u8 *p asm("r3");
    p = (u8 *)0x80437CA0;
    v = 1;
    *(s32 *)(p + 0x6d4) = v;
}

void fn_8023F0A4(void) {

}

void fn_8023F530(void) {
    register s32 *p asm("r4");
    register s32 v asm("r5");
    p = (s32 *)0x803F711C;
    v = 0;
    *(volatile s32 *)p = v;
}

void fn_8023F584(volatile u32 *arg0) {
    register u32 v asm("r4");
    while ((v = *arg0 & 0x14) == 0) {
    }
    *arg0 = v;
}

s32 fn_80240584(void) {
    register s32 *p asm("r3") = (s32 *)0x80437CA0;
    return p[0x1B4];
}

s32 fn_80240E84(void) {
    void fn_8025302C(void *);
    fn_8025302C((void *)0x803F7351);
    return -1;
}

void fn_80240EB0(void) {
    fn_80240E84();
}

void fn_80240EB4(void) {

}

void fn_80240EB8(void) {
    fn_80240E84();
}

void fn_80240EBC(void) {

}

void fn_80240EC0(void) {
    fn_80240E84();
}

void fn_80240EC4(void) {

}

void fn_80240EC8(void) {
    fn_80240E84();
}

void fn_80240ECC(void) {

}

void fn_80240ED0(void) {
    fn_80240E84();
}

void fn_80240ED4(void) {

}

void fn_80240ED8(void) {
    fn_80240E84();
}

void fn_80240EDC(void) {

}

void fn_80240EE0(void) {
    fn_80240E84();
}

void fn_80240EE4(void) {

}

void fn_80240EE8(void) {
    fn_80240E84();
}

void fn_80240EEC(void) {

}

void fn_80240EF0(void) {
    fn_80240E84();
}

void fn_80240EF4(void) {

}

void fn_80240EF8(void) {
    fn_80240E84();
}

void fn_80240EFC(void) {

}

void fn_80240F00(void) {
    fn_80240E84();
}

void fn_80240F04(void) {

}

void fn_80240F08(void) {
    fn_80240E84();
}

void fn_80240F0C(void) {

}

void fn_80241064(void) {
    void fn_80254AC0(s32);
    void fn_802546A8(s32, void *);
    void fn_80254B48(s32);

    fn_80254AC0(0x18000);
    fn_80254AC0(0x40);
    fn_802546A8(0x19, (void *)0x80241490);
    fn_80254B48(0x40);
}

s32 fn_802410AC(void) {
    void fn_802414E4(void);
    s32 fn_8024154C(void);
    void fn_80241510(void);
    void fn_8024158C(s32);
    s32 fn_802415C0(void);
    void fn_802414FC(void);
    s32 i;
    s32 r;

    fn_802414E4();
    while (fn_8024154C() == 0) {
    }
    do {
        fn_80241510();
    } while (fn_8024154C() == 0xff);
    fn_80241510();
    fn_8024158C(1);
    fn_80241510();
    while (fn_8024154C() == 0) {
    }
    do {
        fn_80241510();
    } while (fn_8024154C() == 0xff);
    fn_80241510();
    r = fn_802415C0();
    for (i = 15; i != 0; i--) {
    }
    fn_802414FC();
    return r;
}

void fn_80241488(void) {

}

void fn_8024148C(void) {

}

void fn_802414E4(void) {
    register u8 *p asm("r4");
    register s32 v asm("r3");
    p = (u8 *)0xCC000000;
    v = *(volatile s32 *)(p + 0x6828) & 5;
    v |= 0xD0;
    *(volatile s32 *)(p + 0x6828) = v;
}

void fn_802414FC(void) {
    register u8 *p asm("r4");
    register s32 v asm("r3");
    p = (u8 *)0xCC000000;
    v = *(volatile s32 *)(p + 0x6828) & 5;
    *(volatile s32 *)(p + 0x6828) = v;
}

void fn_80241510(void) {
    register u8 *p asm("r4");
    register s32 v asm("r5");
    s32 i;
    p = (u8 *)0xCC000000;
    v = *(volatile s32 *)(p + 0x6828) & 5;
    *(volatile s32 *)(p + 0x6828) = v;
    for (i = 6; i != 0; i--) {
    }
    v |= 0xD0;
    *(volatile s32 *)(p + 0x6828) = v;
}

void fn_80241538(void) {
    register u8 *p asm("r4");
    register u32 v asm("r3");
    p = (u8 *)0xCC000000;
    do {
        v = *(volatile u32 *)(p + 0x6834);
        v &= 1;
    } while (v != 0);
}

void fn_80241934(void) {

}

u32 fn_80241938(double x) {
    extern const double lbl_803EBA18[];
    register const double *p = lbl_803EBA18;
    if (x >= *p) {
        return (s32)(x - *p) ^ 0x80000000;
    }
    return (s32)x;
}

long long fn_80241980(long long u, s32 b) {
    long long fn_8024E9AC(long long, s32);
    return fn_8024E9AC(u, b);
}

void fn_80241984(void) {
    fn_8024E1D0();
    return;
}

long long fn_80241988(long long u, s32 b) {
    long long fn_8024E114(long long, s32);
    return fn_8024E114(u, b);
}

void fn_8024198C(void) {
    void fn_8024E9EC(void);
    fn_8024E9EC();
}

long long fn_80241990(long long u, long long v) {
    long long fn_8024E154(long long, long long);
    return fn_8024E154(u, v);
}

long long fn_80241994(long long u, long long v) {
    long long fn_8024EF40(long long, long long);
    return fn_8024EF40(u, v);
}

long long fn_80241998(long long u, long long v) {
    long long fn_8024F424(long long, long long);
    return fn_8024F424(u, v);
}

s32 fn_80241A90(void) {
    return -1;
}

