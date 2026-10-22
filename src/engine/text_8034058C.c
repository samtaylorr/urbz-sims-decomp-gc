/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8036FF6C(void *);
extern u8 lbl_8041DD60[];
extern void *lbl_80495058;
extern s32 lbl_80496290;
void fn_803405CC(s32, s32);

void *fn_8034058C(void *self) {
    fn_8036FF6C(self);
    M2C_FIELD(self, u8 **, 4) = lbl_8041DD60;
    lbl_80495058 = self;
    return self;
}

void fn_803405CC(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF && arg0 != 0) {
        fn_8034058C(&lbl_80496290);
    }
}

void fn_80340608(void) {
    fn_803405CC(1, 0xFFFF);
}
