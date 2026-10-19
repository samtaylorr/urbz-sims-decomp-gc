/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80317758(void);
void fn_80317B98(void) {
    fn_80317758();
}

void fn_8031A4F8(void) {

}

void fn_802D2FD0(void);
void fn_8031B708(void) {
    fn_802D2FD0();
}

extern void fn_802D30D4(void *, s32 *);
s32 fn_8031B728(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802D30D4((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

extern void fn_802C5C58(void *, s32 *);
s32 fn_8031B768(s32 arg0, s32 *out) {
    s32 tmp;

    fn_802C5C58((void *)arg0, &tmp);
    *out = tmp;
    return arg0;
}

void fn_8031BC44(void **obj) {
    if (obj != NULL) {
        char *vt = (char *)*obj;
        (*(void (**)(void *, s32))(vt + 0x34))((char *)obj + *(s16 *)(vt + 0x30), 3);
    }
}

extern u8 lbl_80493830[];
void *fn_8031BC84(void) {
    return lbl_80493830;
}

extern s32 lbl_8049383C[];
s32 fn_8031BC90(void) {
    return lbl_8049383C[0];
}

extern s32 lbl_80493840[];
s32 fn_8031BC9C(void) {
    return lbl_80493840[0];
}

extern u16 lbl_80493844[];
u16 fn_8031BCA8(void) {
    return lbl_80493844[0];
}

void *fn_8031BCB4(void) {
    return lbl_80493830;
}

extern u16 lbl_80493846[];
u16 fn_8031BCC0(void) {
    return lbl_80493846[0];
}

extern void fn_802D6A90(void *, void *, void *, void *, s32, void *, void *);
extern void fn_8031BBCC(void);
extern void fn_8031BBF4(void);
extern void fn_8031BC20(void);
extern u8 lbl_803F2CC0[];
extern u8 lbl_80493858[];
void fn_8031BCCC(s32 arg0) {
    fn_802D6A90(lbl_80493830, fn_8031BBCC, fn_8031BBF4, fn_8031BC20, arg0, lbl_803F2CC0, lbl_80493858);
}

void fn_802D2430(void);
void fn_8031BD20(void) {
    fn_802D2430();
}

void *fn_8031BD70(u32 size, void *p);
void *fn_8031BD70(u32 size, void *p) {
    return p;
}

