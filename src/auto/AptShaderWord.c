/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80007EAC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 1);
}

void fn_80007EBC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
}

void fn_800086CC(M2C_UNK **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK fn_80008658(M2C_UNK *, s32, s32, s32, s32);
    M2C_UNK *temp_r30;
    M2C_UNK *temp_r3;
    M2C_UNK *var_r30;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r30 = temp_r3;
        do {
            temp_r30 = *var_r30;
            fn_80008658(var_r30, arg1, arg2, arg3, arg4);
            var_r30 = temp_r30;
        } while (var_r30 != NULL);
    }
}

f32 fn_8000A334(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x2C);
}

void fn_8000A468(s32 arg0, s32 arg1) {

}
