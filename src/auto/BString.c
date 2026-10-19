/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

void fn_800D1F84(void);

/* base-class constructor shared by the fn_800D1Dxx/fn_800D1Exx constructors */
static inline void BaseCtor_800D1D(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
}
extern u8 lbl_8040B320[];
void fn_800D1DE8(s32 *self, s32 arg1) {
    self[0] = arg1;
    self[1] = -1;
    self[2] = 0;
    self[3] = -1;
    self[4] = 1;
    self[5] = (s32)lbl_8040B320;
    self[6] = 0;
    self[7] = 0;
}

void fn_800D4428(void) {
    fn_800D1F84();
}

s32 fn_800D6434(void) {
    return 0;
}

void fn_800E3BC0(void);
void fn_800D855C(void) {
    fn_800E3BC0();
}

void fn_800E3D4C(void);
void fn_800D857C(void) {
    fn_800E3D4C();
}

void fn_800DAAC4(void) {
    fn_800D1F84();
}

void fn_802D0F9C(void);
void fn_800DB148(void) {
    fn_802D0F9C();
}

void fn_802D0F9C(void);
void fn_800DB81C(void) {
    fn_802D0F9C();
}

void fn_800DBC9C(void) {
    fn_800E3BC0();
}

extern s32 lbl_80495A70;
s32 fn_800DC6B4(void) {
    return lbl_80495A70;
}

void fn_800E1868(void) {
    fn_800E3BC0();
}

extern s32 lbl_804966DC;
s32 fn_800E1A2C(void) {
    return lbl_804966DC;
}

extern s32 lbl_804966E4;
s32 fn_800E1C34(void) {
    return lbl_804966E4;
}

s32 fn_800EB5B4(void) {
    return 0;
}

s32 fn_800EBC7C(void) {
    return 0;
}

void fn_800EC49C(void);
void fn_800EE7C4(void) {
    fn_800EC49C();
}

void fn_800EC59C(void);
void fn_800EE91C(void) {
    fn_800EC59C();
}

void fn_800EC6BC(void);
void fn_800EEAC4(void) {
    fn_800EC6BC();
}

void fn_800EE83C(void);
void fn_800EEB3C(void) {
    fn_800EE83C();
}

void fn_800EC774(void);
void fn_800EEBB4(void) {
    fn_800EC774();
}

void fn_800EE994(void);
void fn_800EEC2C(void) {
    fn_800EE994();
}

void fn_800EC848(void);
void fn_800EECA4(void) {
    fn_800EC848();
}

void fn_800EC8E0(void);
void fn_800EEDEC(void) {
    fn_800EC8E0();
}

