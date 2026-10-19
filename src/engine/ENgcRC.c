/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_802FB604(void);
void *fn_80348E8C(u32 size, void *p);
void fn_80345FB0(void) {

}

void fn_80346F5C(void) {

}

void *fn_80348E8C(u32 size, void *p) {
    return p;
}

s32 fn_80348EBC(u8 *self) {
    return *(s32 *)(self + 0x20);
}

void fn_80348F38(void) {
    fn_802FB604();
}

void fn_8034AD3C(void) {

}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8034BCEC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8034BDCC(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80270D34(void);
void fn_8034F8BC(void) {
    fn_80270D34();
}

void fn_80273F88(void);
void fn_80357AA0(void) {
    fn_80273F88();
}

