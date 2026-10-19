/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8030AA98(void);
s32 fn_8030ACB0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8C);
}

void fn_8030AF88(void *arg0, f32 farg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x8C), f32 *, 0xBC) = farg0;
}

s32 fn_8030AFC8(void) {
    return 0;
}

void fn_8030C490(void) {
    fn_8030AA98();
}

void fn_8030CB5C(void) {

}

