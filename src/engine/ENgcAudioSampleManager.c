/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_80336078(void);
void fn_8033D278(void *);
extern u8 lbl_8041C368[];

typedef struct SampleNode {
    struct SampleNode *next;
} SampleNode;

typedef struct SampleList {
    s32 unk0;
    SampleNode *head;
    s32 count;
} SampleList;

void fn_80335F5C(void *);
void fn_80335FD8(void *);
extern u8 lbl_8041C3B0[];
extern void *lbl_8049627C;
void fn_8033D2B8(void *arg0) {
    M2C_FIELD(arg0, u8 **, 0xA4) = lbl_8041C3B0;
    fn_80335FD8(arg0);
}

void *fn_8033D2E8(void *arg0) {
    fn_8033D278(arg0);
    M2C_FIELD(arg0, s32 *, 0x68) = 1;
    M2C_FIELD(arg0, void **, 0xA4) = lbl_8041C368;
    return arg0;
}

void fn_8033D35C(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_803360FC(s32, s32, s32);
    M2C_UNK fn_8033D700();
    fn_8033D700();
    fn_803360FC(arg0, arg1, arg2);
}

void fn_8033D3A0(void) {
    fn_80336078();
}

s32 fn_8033DD68(void *arg0, void *arg1) {
    s32 var_r9;

    var_r9 = 0;
    if (((s32) M2C_FIELD(arg1, s32 *, 0xC) != 0) || ((s32) M2C_FIELD(arg1, s32 *, 8) != 0) || (arg1 == (s32) M2C_FIELD(arg0, s32 *, 0xAC))) {
        var_r9 = 1;
    }
    return var_r9;
}

void fn_8033740C(void);
void fn_8033E0B4(void) {
    fn_8033740C();
}

void fn_80337430(void);
void fn_8033E0D4(void) {
    fn_80337430();
}

void fn_8033E010(s32, s32);
void fn_8033E0F4(void) {
    fn_8033E010(1, 0xFFFF);
}

