/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8041C438[];
extern void fn_802D20E8(void *);
extern u8 lbl_8041C3F8[];
void **fn_8033E14C(void **self) {
    *self = lbl_8041C3F8;
    return self;
}

void fn_8033E160(void **self, s32 flags) {
    *self = lbl_8041C438;
    if (flags & 1) {
        fn_802D20E8(self);
    }
}

void fn_8033E194(void) {

}

void fn_8033E198(void) {

}

typedef struct ClockTimer {
    s64 time;
    f32 elapsed;
} ClockTimer;

extern s64 fn_8025A3DC(void);
extern f32 lbl_803F3F38;
extern s32 lbl_80496280;

void fn_8033E1DC(void *self, ClockTimer *timer) {
    s64 now = fn_8025A3DC();
    u32 ticks = ((u32)now - (u32)timer->time) / (*(u32 *)0x800000F8 / 4000);
    timer->time = now;
    timer->elapsed += (f32)ticks / lbl_803F3F38;
}

f32 fn_8033E26C(void *self, ClockTimer *timer) {
    fn_8033E1DC(self, timer);
    return timer->elapsed;
}

f32 fn_8033E29C(void *self, ClockTimer *timer) {
    fn_8033E1DC(self, timer);
    return timer->elapsed;
}

void fn_8033E2CC(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_8033E14C((void **)&lbl_80496280);
            return;
        }
        fn_8033E160((void **)&lbl_80496280, 2);
    }
}

void fn_8033E318(void) {
    fn_8033E2CC(1, 0xFFFF);
}

void fn_8033E344(void) {
    fn_8033E2CC(0, 0xFFFF);
}

