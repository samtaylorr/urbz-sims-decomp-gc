/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8040E9C8[];
extern void fn_802D20E8(void *);
void fn_8010D324(void **self, s32 flags) {
    *self = lbl_8040E9C8;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8010D628(s32 *self, s32 value) {
    *self = value;
}

extern u8 lbl_8040EBA0[];
void fn_8010D784(void **self, s32 flags) {
    *self = lbl_8040EBA0;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8010DA6C(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x38) = (void *) M2C_FIELD(arg0, void **, 0x404);
    M2C_FIELD(arg0, void **, 0x404) = arg1;
}

void fn_8010DABC(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x24) = (void *) M2C_FIELD(arg0, void **, 0x408);
    M2C_FIELD(arg0, void **, 0x408) = arg1;
}

void fn_8010E984(void) {

}

void fn_8010E988(void) {

}

s32 fn_8010EA58(void) {
    return 1;
}

s32 fn_8010F020(void) {
    return 1;
}

s32 fn_8010F028(void) {
    return 1;
}

s32 fn_8010F030(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_8010F1E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_8010F2A4(void) {
    return 0x5622;
}

s32 fn_8010F2AC(void) {
    return 1;
}

s32 fn_8010F2B4(void) {
    return 1;
}

s32 fn_8010F578(void) {
    return 1;
}

s32 fn_8010F724(s32 *self) {
    return self[2];
}

s32 fn_8010F82C(void) {
    return 1;
}

s32 fn_8010F834(void) {
    return 1;
}

s32 fn_8010F83C(s32 *self) {
    return self[6];
}

s32 fn_8010FA08(void) {
    return 0x200;
}

s32 fn_8010FABC(void) {
    return 0x5622;
}

s32 fn_8010FAC4(void) {
    return 1;
}

s32 fn_8010FACC(void) {
    return 1;
}

extern void *fn_802D0AB8(void *);
extern void fn_802D1A00(void *, void *);
void fn_8010FC58(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_8010FD34(void *arg0) {
    fn_802D1A00(fn_802D0AB8(arg0), arg0);
}

void fn_801102DC(void) {

}

s32 fn_80111A54(s32 *self) {
    return *self;
}

s32 fn_80111F5C(s32 *self) {
    return self[2];
}

s32 fn_80111F64(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_80111F6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80111F74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_80111F7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_80111F84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_80111F8C(s32 *self) {
    return self[7];
}

s32 fn_80111F94(u8 *self) {
    return *(s32 *)(self + 0x20);
}

void fn_80111F9C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}

void fn_80112168(void) {

}

void fn_8011216C(void) {

}

s32 fn_80112304(s32 arg0) {
    return arg0 >> 8;
}

void fn_8011230C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, u8 *, 1) | (arg1 << 8));
}

s32 fn_80114000(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x120);
}

void fn_80116748(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14C) = 1;
}

extern s32 lbl_80495B00;
extern void fn_800F1A60(s32, s32);
void fn_80116754(void) {
    fn_800F1A60((s32)&lbl_80495B00, 2);
}

extern u8 lbl_80434BD4[];
void fn_802C7FE8(u8 *arg);
void fn_801168DC(void) {
    fn_802C7FE8(lbl_80434BD4);
}

void fn_8011709C(void *arg0) {
    extern s32 lbl_80494438;
    s32 temp_r9;

    temp_r9 = lbl_80494438 + 1;
    lbl_80494438 = temp_r9;
    M2C_FIELD(arg0, s32 *, 0x40) = temp_r9;
}

s32 fn_80117474(char *self) {
    return *(s32 *)(self + 0xC);
}

s32 fn_8011747C(s32 *self) {
    return self[2];
}

s32 fn_80117484(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void fn_8011748C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

extern s32 lbl_80495B08;
extern void fn_801055FC(s32, s32);
void fn_80117494(void) {
    fn_801055FC((s32)&lbl_80495B08, 2);
}

s32 fn_80117520(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 0xCU) & 7;
}

s32 fn_801175AC(s32 *self) {
    return self[1];
}

f32 fn_801175B4(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x30);
}

s16 fn_801175BC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x2C);
}

s32 fn_801175C4(s32 arg0) {
    return arg0 + 0x18;
}

s32 fn_801175CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 fn_801175D4(u8 *self) {
    return *(s32 *)(self + 0x20);
}

s32 fn_801175DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_801175E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

void fn_801175EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
}

s32 fn_801175F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

void fn_801175FC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

s32 fn_80117604(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3C);
}

void fn_8011760C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}

s32 fn_8011762C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

void fn_80117634(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}

s32 fn_8011763C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44) & 1;
}

s32 fn_80117668(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 1U) & 1;
}

s32 fn_80117694(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 2U) & 1;
}

s32 fn_801176C0(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 3U) & 1;
}

s32 fn_801176EC(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 4U) & 1;
}

s32 fn_80117718(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 5U) & 1;
}

s32 fn_80117744(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 6U) & 1;
}

s32 fn_80117770(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 7U) & 1;
}

s32 fn_8011779C(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 8U) & 1;
}

s32 fn_801177C8(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 9U) & 1;
}

s32 fn_801177F4(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 0xAU) & 1;
}

s32 fn_80117820(void *arg0) {
    return ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 0xBU) & 1;
}

s32 fn_8011784C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}

void fn_80117854(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}

s32 fn_8011785C(void) {
    return 0;
}

s32 fn_80117864(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

s32 fn_8011786C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

s32 fn_80117874(u8 *self) {
    return *(s32 *)(self + 0x50);
}

