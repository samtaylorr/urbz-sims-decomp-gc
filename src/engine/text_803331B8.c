/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_8033325C(s32 arg0, s32 arg1);

void fn_8033740C(void);
void *fn_802D0AB8(void);
void *fn_802D0B3C(void);
void *fn_802D197C(void *, u32, s32);
void *fn_802DBBCC(void *, u32, s32);
void *fn_8037117C(void *);
void fn_803712D4(void *, s32, s32);
extern u8 lbl_8045B240[];
extern u8 lbl_8041BD10[];
void fn_80335F5C(void *p);
void fn_80335FD8(void *p, s32 n);
void fn_8033325C(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u8 *p = lbl_8045B240;
            fn_80335F5C(p);
            *(u8 **)(p + 0xA4) = lbl_8041BD10;
            return;
        }
        fn_80335FD8(lbl_8045B240, 2);
    }
}

void fn_803332C8(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_803332E8(void) {
    fn_80337430();
}

void fn_80333308(void) {
    fn_8033325C(1, 0xFFFF);
}

