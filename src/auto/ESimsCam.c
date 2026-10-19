/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_80014C94(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_80014CC8(void) {
}

char *fn_80014CCC(char *self) {
    return self + 0x428;
}

char *fn_80014CD4(char *self) {
    return self + 0x44C;
}

