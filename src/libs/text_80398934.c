/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041CFA8[];
void fn_802D8BEC(void *);
void fn_8030AD40(void);
void fn_8039AB04(void) {
    fn_8030AD40();
}

void fn_8018EA6C(void);
void fn_8039AD30(void) {
    fn_8018EA6C();
}

void fn_802C5484(void);
void fn_8039B5F8(void) {
    fn_802C5484();
}

void fn_8039B618(void) {
    fn_8018EA6C();
}

void fn_8039BB90(void) {
    fn_8018EA6C();
}

void fn_8039BCB8(void) {
    fn_8018EA6C();
}

void fn_8039BCD8(void) {
    fn_8018EA6C();
}

void fn_8039C1B8(void) {
    fn_8030AD40();
}

void fn_8039C1D8(void) {
    fn_8030AD40();
}

void fn_8039C32C(void) {
    fn_8018EA6C();
}

void fn_8039D338(void) {
    fn_8018EA6C();
}

void fn_803A1424(void) {
    fn_8018EA6C();
}

void fn_803A161C(void) {
    fn_8018EA6C();
}

void fn_803A29C8(void) {
    fn_8018EA6C();
}

void fn_803A3F50(void) {
    fn_8018EA6C();
}

void fn_803A5FA8(void) {
    fn_8018EA6C();
}

void fn_803A5FC8(void) {
    fn_8018EA6C();
}

void fn_803BEC14(u8 *self) {
    *(u8 **)(self + 0x338) = lbl_8041CFA8;
    fn_802D8BEC(self);
}
