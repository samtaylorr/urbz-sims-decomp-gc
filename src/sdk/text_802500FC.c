/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

typedef struct DVDCommandBlock {
    void *next;
    void *prev;
    u32 command;
    s32 state;
    u32 offset;
    u32 length;
    void *addr;
    u32 currTransferSize;
    u32 transferredSize;
    void *id;
    void *callback;
    void *userData;
} DVDCommandBlock;

extern DVDCommandBlock *lbl_80495ED0;

typedef struct DVDFileInfo {
    DVDCommandBlock cb;
    u32 startAddr;
    u32 length;
    void (*callback)(s32, struct DVDFileInfo *);
} DVDFileInfo;

typedef struct FSTEntry {
    u32 isDirAndStringOff;
    u32 parentOrPosition;
    u32 nextEntryOrLength;
} FSTEntry;

extern FSTEntry *lbl_80495EB4;
extern s32 lbl_80495EC0;
s32 fn_80260144(char *);
void fn_802530CC(char *, s32, char *, ...);
extern char lbl_80494A20[8];
extern char lbl_803F93A8[];
extern char lbl_803F940C[];
s32 fn_80262FE0(void *, void *, s32, s32, void *, s32);
s32 fn_802630BC(void *, s32, void *, s32);
void fn_80260A68(s32 result, DVDCommandBlock *block);
void fn_80260C6C(s32 result, DVDCommandBlock *block);

unsigned long fn_8024FF70(void);
void fn_8024FF78(unsigned long);
void fn_802500FC(void) {
    fn_8024FF78(fn_8024FF70() & ~0x200);
}

void fn_80250124(void) {
    fn_8024FF78(fn_8024FF70() | 0x200);
}

s32 fn_8025015C(void) {
    return *(s32 *)0x80000040;
}

void fn_80250290(void) {
    s32 PPCMfhid2();
    M2C_UNK PPCMthid2(s32);
    PPCMthid2(PPCMfhid2() & 0xBFFFFFFF);
}

void fn_80250FC4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_80251714(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

extern s32 lbl_80495E08;
s32 fn_8025186C(void) {
    return lbl_80495E08;
}

extern s32 lbl_804949A8;
s32 fn_80251874(void) {
    return lbl_804949A8;
}

void fn_8025187C(s32 arg0) {
    lbl_80495E08 = arg0;
}

void fn_80251884(s32 arg0) {
    lbl_804949A8 = arg0;
}

void fn_80251E98(void) {
    M2C_UNK fn_80251DCC();
    s32 fn_8025465C();
    M2C_UNK fn_80254684(s32);
    s32 temp_r31;

    temp_r31 = fn_8025465C();
    fn_80251DCC();
    fn_80254684(temp_r31);
}

void fn_80251F94(void *addr, u32 nBytes) {
    s32 PPCMfhid2();
    M2C_UNK fn_80251DCC();
    s32 fn_8025465C();
    M2C_UNK fn_80254684(s32);
    void fn_80251F0C(s32, void *, u32);
    u32 numBlocks = nBytes >> 5;

    if (!(PPCMfhid2() & 0x10000000)) {
        s32 enabled = fn_8025465C();
        fn_80251DCC();
        fn_80254684(enabled);
    }
    fn_80251F0C(1, addr, numBlocks);
}

void fn_80252004(void *addr, u32 nBytes) {
    s32 PPCMfhid2();
    M2C_UNK fn_80251DCC();
    s32 fn_8025465C();
    M2C_UNK fn_80254684(s32);
    void fn_80251F0C(s32, void *, u32);
    u32 numBlocks = nBytes >> 5;

    if (!(PPCMfhid2() & 0x10000000)) {
        s32 enabled = fn_8025465C();
        fn_80251DCC();
        fn_80254684(enabled);
    }
    fn_80251F0C(0, addr, numBlocks);
}

u32 fn_80252074(u8 *destAddr, u8 *srcAddr, u32 nBytes) {
    void fn_80251F4C(void *, void *, u32);
    u32 numBlocks = (nBytes + 31) / 32;
    u32 numTransactions = (numBlocks + 128 - 1) / 128;

    while (numBlocks > 0) {
        if (numBlocks < 128) {
            fn_80251F4C(destAddr, srcAddr, numBlocks);
            numBlocks = 0;
        } else {
            fn_80251F4C(destAddr, srcAddr, 0);
            numBlocks -= 128;
            destAddr += 4096;
            srcAddr += 4096;
        }
    }
    return numTransactions;
}

void fn_802521EC(void) {
    void fn_802500E4(s32);
    void fn_802500EC(u32);
    void fn_8024FFA8(void);
    union {
        struct {
            u32 pad : 31;
            u32 bit : 1;
        } b;
        u32 w;
    } v;
    v.w = 0;
    v.b.bit = 1;
    fn_802500E4(0);
    fn_802500EC(v.w);
    fn_8024FFA8();
}

void fn_80252234(void) {
    u32 fn_8024FF3C(void);
    void fn_8024FF44(u32);
    void fn_802522AC(void);
    void fn_802522DC(void);
    u32 oldMSR;

    oldMSR = fn_8024FF3C();
    __sync();
    fn_8024FF44(0x30);
    __sync();
    fn_802522AC();
    fn_802522DC();
    fn_8024FF44(oldMSR);
}

void fn_80252280(void) {
    s32 fn_8024FF88();
    M2C_UNK fn_8024FF90(s32);
    fn_8024FF90((fn_8024FF88() | 0x80000000) & 0xFFDFFFFF);
}

void fn_802522AC(void) {
    u32 fn_8024FF88(void);
    void fn_8024FF90(u32);

    __sync();
    fn_8024FF90(fn_8024FF88() & ~0x80000000);
    __sync();
}

s32 fn_80252900(void) {
    return *(s32 *)0x800000D4;
}

void fn_802530AC(void) {
    M2C_UNK fn_80378324();
    fn_80378324();
}

#pragma scheduling off
#pragma peephole off
void fn_80253924(void *arg0, s32 arg1, s32 arg2) {
    s32 fn_802642C0(DVDCommandBlock *);
    s32 fn_802649F8(void);
    void fn_802560D4(s32);
    DVDCommandBlock block;

    fn_80262FE0(&block, arg0, arg1, arg2, NULL, 0);
    while (fn_802642C0(&block)) {
        if (!fn_802649F8()) {
            fn_802560D4(0);
        }
    }
}
#pragma peephole reset
#pragma scheduling reset
void fn_80253990(void) {
    extern s32 lbl_80495E10;
    lbl_80495E10 = 1;
}

s32 fn_8025399C(void) {
    u8 *fn_802649F0(void);
    if (fn_802649F0()[8]) {
        return 1;
    }
    return 0;
}

void fn_802539D4(void *arg0) {
    void fn_802482F8(void *, void *, u32);
    void *p = *(void **)0x800030F0;
    if ((u32)p >= 0x80000000U) {
        fn_802482F8(arg0, p, 0x1C);
    } else {
        *(s32 *)arg0 = 0;
    }
}

#pragma scheduling off
#pragma peephole off
void fn_80253A14(void *arg0, void *arg1) {
    void fn_802482F8(void *, void *, u32);
    fn_802482F8(arg1, arg0, 0x1C);
    *(void **)0x800030F0 = arg1;
}
#pragma peephole reset
#pragma scheduling reset
s32 fn_80254A24(void) {
    return *(s32 *)0x800000C8;
}

void fn_80254F64(void) {

}

void fn_80254F68(void) {

}

void fn_80254F6C(s32 arg0) {
    *(s32 *)0x800030D0 = arg0;
}

s32 fn_80255A38(void) {
    return *(s32 *)0x80000028;
}

s32 fn_80255A44(void) {
    return *(s32 *)0x800000F0;
}

void fn_80255E5C(s32 arg0, s32 arg1) {
    extern s32 lbl_80495E30;
    extern s32 lbl_80495E34;
    lbl_80495E30 = arg0;
    lbl_80495E34 = arg1;
}

void fn_80255F1C(void *arg0) {
    extern M2C_UNK ResetFunctionQueue_80495E38;
    void *temp_r4;
    void *temp_r5;

    temp_r4 = M2C_FIELD(arg0, void **, 8);
    temp_r5 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r4 == NULL) {
        M2C_FIELD(&ResetFunctionQueue_80495E38, void **, 4) = temp_r5;
    } else {
        M2C_FIELD(temp_r4, void **, 0xC) = temp_r5;
    }
    if (temp_r5 == NULL) {
        M2C_FIELD(&ResetFunctionQueue_80495E38, void **, 0) = temp_r4;
        return;
    }
    M2C_FIELD(temp_r5, void **, 8) = temp_r4;
}

s32 fn_80256504(s32 arg0) {
    extern s32 lbl_80495E40;
    s32 temp_r0;

    temp_r0 = lbl_80495E40;
    lbl_80495E40 = arg0;
    return temp_r0;
}

u32 fn_80256608(u32 arg0) {
    M2C_UNK fn_80254AC0(M2C_UNK);
    M2C_UNK fn_80254B48(M2C_UNK);
    extern u32 lbl_80495E48;
    s32 temp_r3;
    u32 temp_r30;

    temp_r3 = fn_8025465C();
    temp_r30 = lbl_80495E48;
    lbl_80495E48 = arg0;
    if (arg0 != 0U) {
        *(s32 *)0xCC003000 = 2;
        fn_80254B48(0x200);
    } else {
        fn_80254AC0(0x200);
    }
    fn_80254684(temp_r3);
    return temp_r30;
}

void fn_80256914(void) {
    M2C_UNK fn_8025667C();
    fn_8025667C();
}

void fn_80258364(void) {

}

void fn_80258534(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

s32 fn_80258544(void) {
    return *(s32 *)0x800000E4;
}

s32 fn_802585AC(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2CC) > 0) {
        return 1;
    }
    return 0;
}

void fn_80258C80(void) {
    M2C_UNK fn_80258A58(M2C_UNK);
    extern s32 lbl_80495E6C;
    if ((s32) lbl_80495E6C != 0) {
        fn_80258A58(0);
    }
}

void fn_80258CB0(void) {
    s32 temp_r31;

    temp_r31 = fn_8025465C();
    fn_80258A58(1);
    fn_80254684(temp_r31);
}

s32 fn_802599FC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2D4);
}

void fn_8025AD58(void) {
    M2C_UNK fn_8025AD78();
    fn_8025AD78();
}

#pragma push
#pragma peephole off
#pragma scheduling off
void fn_8025AD78(void) {
    extern void (*lbl_80401390[])(void);
    void (**ctor)(void);

    for (ctor = lbl_80401390; *ctor; ctor++) {
        (*ctor)();
    }
}

void fn_8025ADCC(void) {
    extern void (*lbl_80401398[])(void);
    void (**ctor)(void);

    for (ctor = lbl_80401398; *ctor; ctor++) {
        (*ctor)();
    }
}

#pragma pop
void fn_8025AE20(void) {
    M2C_UNK fn_8025AE94();
    fn_8025AE94();
}

#pragma push
#pragma peephole off
#pragma scheduling off
void fn_8025AE40(s32 status) {
    void fn_8025AE94(void);
    fn_8025ADCC();
    fn_8025AE94();
}
#pragma pop
void fn_8025AE94(void) {
    M2C_UNK PPCHalt();
    PPCHalt();
}

void fn_8025AEB4(void *arg0) {
    void fn_80258534(void *);
    fn_80258534(arg0);
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
}

void fn_8025B090(void *arg0) {
    typedef struct Mtx_ {
        s32 queue[2];
        void *thread;
        s32 count;
        struct Mtx_ *next;
        struct Mtx_ *prev;
    } Mtx_;
    typedef struct {
        u8 pad[0x2F4];
        Mtx_ *head;
        Mtx_ *tail;
    } Thr_;
    void fn_80259838(void *);
    Thr_ *thread = arg0;
    Mtx_ *mutex;

    while (thread->head) {
        Mtx_ *next;
        mutex = thread->head;
        next = mutex->next;
        if (next == NULL) {
            thread->tail = NULL;
        } else {
            next->prev = NULL;
        }
        thread->head = next;
        mutex->count = 0;
        mutex->thread = NULL;
        fn_80259838(mutex);
    }
}

void fn_8025B1BC(void) {
    M2C_UNK fn_80258534();
    fn_80258534();
}

void fn_8025B2B0(void) {
    M2C_UNK fn_80259838();
    fn_80259838();
}

s32 fn_8025D78C(void) {
    s32 fn_802502B8();
    extern s32 lbl_80495E80;
    extern s32 lbl_80495E84;
    extern s32 lbl_80495E88;
    extern s32 lbl_80495E8C;
    if ((u32) (lbl_80495E8C + 0x5A010000) == 0x5AU) {
        return 0;
    }
    if (!(fn_802502B8() & 0x10000000)) {
        lbl_80495E88 = 0;
        return 2;
    }
    lbl_80495E88 = 0xA5FF005A;
    lbl_80495E80 = 0;
    lbl_80495E84 = 1;
    return 0;
}

s32 fn_8025D7FC(void) {
    return 4;
}

void fn_8025F594(void) {
    M2C_UNK fn_8025F148();
    M2C_UNK fn_8025F448();
    fn_8025F148();
    fn_8025F448();
}

void fn_8025F7F4(void) {
    extern s32 lbl_80495EA0;
    fn_8025F710(lbl_80495EA0);
}

void fn_8025F914(s32 arg0) {
    extern s32 *lbl_80495EA8;
    *lbl_80495EA8 = arg0;
}

void fn_8025F920(const char *fmt, ...) {
}

void fn_8025F970(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) + M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg1, f32 *, 8));
}

void fn_8025F9C8(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg1, f32 *, 8));
}

void fn_8025FA20(void *arg0, void *arg1, f32 farg0) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * farg0);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * farg0);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * farg0);
}

s32 fn_80260574(void) {
    M2C_UNK fn_802646D0();
    fn_802646D0();
    return 1;
}

s32 fn_80260948(char *dirName) {
    s32 entry;
    entry = fn_80260144(dirName);
    if ((entry < 0) || !((!(lbl_80495EB4[entry].isDirAndStringOff & 0xFF000000)) ? 0 : 1)) {
        return 0;
    }
    lbl_80495EC0 = entry;
    return 1;
}

s32 fn_802609A8(DVDFileInfo *fileInfo, void *addr, s32 length, s32 offset, void (*callback)(s32, DVDFileInfo *), s32 prio) {
    if (!((0 <= offset) && (offset <= fileInfo->length))) {
        fn_802530CC(lbl_80494A20, 0x2EE, lbl_803F93A8);
    }
    if (!((0 <= offset + length) && (offset + length < fileInfo->length + 32))) {
        fn_802530CC(lbl_80494A20, 0x2F4, lbl_803F93A8);
    }
    fileInfo->callback = callback;
    fn_80262FE0(&fileInfo->cb, addr, length, fileInfo->startAddr + offset, fn_80260A68, prio);
    return 1;
}

void fn_80260A68(s32 result, DVDCommandBlock *block) {
    DVDFileInfo *fileInfo = (DVDFileInfo *)block;
    if (fileInfo->callback) {
        (fileInfo->callback)(result, fileInfo);
    }
}

void fn_80260BB0(void) {
    extern M2C_UNK lbl_80495EC8;
    fn_80259838(&lbl_80495EC8);
}

s32 fn_80260BD4(DVDFileInfo *fileInfo, s32 offset, void (*callback)(s32, DVDFileInfo *), s32 prio) {
    if (!((0 <= offset) && (offset <= fileInfo->length))) {
        fn_802530CC(lbl_80494A20, 0x38B, lbl_803F940C);
    }
    fileInfo->callback = callback;
    fn_802630BC(&fileInfo->cb, fileInfo->startAddr + offset, fn_80260C6C, prio);
    return 1;
}

void fn_80260C6C(s32 result, DVDCommandBlock *block) {
    DVDFileInfo *fileInfo = (DVDFileInfo *)block;
    if (fileInfo->callback) {
        (fileInfo->callback)(result, fileInfo);
    }
}

void fn_80260D48(void) {
    extern M2C_UNK lbl_80495EC8;
    fn_80259838(&lbl_80495EC8);
}

void fn_80260D6C(void) {
    M2C_UNK fn_802642C0();
    fn_802642C0();
}

s32 fn_80260F58(void) {
    return 1;
}

void fn_80260F60(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
}

s32 fn_80260F70(void) {
    extern void *lbl_80495EB0;
    return M2C_FIELD(lbl_80495EB0, s32 *, 0x38);
}

void fn_80261068(s32 result, DVDCommandBlock *block);
void fn_80261068(s32 result, DVDCommandBlock *block) {
    DVDFileInfo *fileInfo = (DVDFileInfo *)block;
    if (fileInfo->callback) {
        (fileInfo->callback)(result, fileInfo);
    }
}

void fn_802611DC(void) {
    extern M2C_UNK lbl_80495EC8;
    fn_80259838(&lbl_80495EC8);
}

void fn_8026126C(void) {

}

extern s32 lbl_80494A30;
void fn_80261270(s32 arg0) {
    lbl_80494A30 = arg0;
}

void fn_80261458(void);
void fn_802652F4(void);
void fn_802664BC(void (*)(void));
void fn_80261504(void) {
    fn_802652F4();
    fn_802664BC(fn_80261458);
}

void fn_80261530(void) {
    M2C_UNK fn_80261458(M2C_UNK);
    M2C_UNK fn_80264274();
    M2C_UNK fn_802652F4(M2C_UNK);
    fn_802652F4(0x01234568);
    fn_80264274();
    fn_80261458(0);
}

void fn_802616DC(void);
void fn_80266548(void (*)(void));
void fn_80261564(void) {
    fn_80266548(fn_802616DC);
}

extern u32 lbl_80495F00;
extern s32 lbl_80495F04;
u32 fn_8026158C(u32 error) {
    extern DVDCommandBlock *lbl_80495ED0;
    if (error == 0x20400) {
        lbl_80495F00 = error;
        return 1;
    }
    error &= 0xffffff;
    if ((error == 0x62800) || (error == 0x23a00) || (error == 0xb5a01)) {
        return 0;
    }
    ++lbl_80495F04;
    if (lbl_80495F04 == 2) {
        if (error == lbl_80495F00) {
            lbl_80495F00 = error;
            return 1;
        } else {
            lbl_80495F00 = error;
            return 2;
        }
    }
    lbl_80495F00 = error;
    if ((error == 0x31100) || (lbl_80495ED0->command == 5)) {
        return 2;
    } else {
        return 3;
    }
}

extern u32 lbl_80495EF0;
extern u32 lbl_80495EF8;
extern void (*lbl_80495EF4)(s32, DVDCommandBlock *);
extern DVDCommandBlock lbl_80442960;
void fn_802622E0(void);
s32 fn_80261640(u32 resume) {
    DVDCommandBlock *finished;
    if (lbl_80495EF0) {
        lbl_80495EF8 = resume;
        lbl_80495EF0 = 0;
        finished = lbl_80495ED0;
        lbl_80495ED0 = &lbl_80442960;
        finished->state = 10;
        if (finished->callback) {
            ((void (*)(s32, DVDCommandBlock *))finished->callback)(-3, finished);
        }
        if (lbl_80495EF4) {
            lbl_80495EF4(0, finished);
        }
        fn_802622E0();
        return 1;
    }
    return 0;
}

volatile u32 __DIRegs[] : 0xCC006000;
void fn_8026199C(u32 arg0) {
    extern void fn_802652F4(u32);
    extern void fn_80264274(void);
    extern void fn_80261458(s32);
    extern void fn_802664BC(void (*)(s32));

    if (arg0 == 0x10) {
        fn_802652F4(0x01234568);
        fn_80264274();
        fn_80261458(0);
        return;
    }
    if (arg0 & 2) {
        fn_802652F4(0x01234567);
        fn_802664BC(fn_80261458);
        return;
    }
    fn_802652F4(__DIRegs[8]);
    fn_802664BC(fn_80261458);
}

void fn_80261A44(void);
void fn_80261A1C(void) {
    fn_802664BC(fn_80261A44);
}

void fn_80261C64(void) {
    extern void fn_80266794(u8, s32, void (*)(void));
    extern void fn_80261F40(void);
    extern u8 *lbl_80495ED4;
    fn_80266794(lbl_80495ED4[8], 0xA, fn_80261F40);
}

void fn_80261C98(void) {
    extern void fn_80266794(u8, s32, void (*)(void));
    extern void fn_80261CCC(void);
    extern u8 *lbl_80495ED4;
    fn_80266794(lbl_80495ED4[8], 0xA, fn_80261CCC);
}

void fn_80261CCC(u32 arg0) {
    extern void fn_802652F4(u32);
    extern void fn_80264274(void);
    extern void fn_80261458(s32);
    extern void fn_80266548(void (*)(void));
    extern void fn_802616DC(void);
    extern void fn_80261D34(s32);
    extern s32 lbl_80495F04;

    if (arg0 == 0x10) {
        fn_802652F4(0x01234568);
        fn_80264274();
        fn_80261458(0);
        return;
    }
    if (arg0 & 1) {
        lbl_80495F04 = 0;
        fn_80261D34((s32)lbl_80495ED0);
        return;
    }
    fn_80266548(fn_802616DC);
}

void fn_80261D34(s32 arg0);
void fn_80261D34(s32 arg0) {
    extern void fn_802660C0(void *, s32, s32, void (*)(void));
    extern u8 lbl_80442920[];
    extern void fn_80261E68(void);
    fn_802660C0(lbl_80442920, 0x20, 0x420, fn_80261E68);
}

void fn_802621FC(void);
void fn_802663EC(void (*)(void));
void fn_802621D4(void) {
    fn_802663EC(fn_802621FC);
}

s32 fn_802628C4(u32 arg0) {
    extern u32 lbl_80494A3C;
    if ((arg0 == 1U) || ((u32) (arg0 - 4) <= 1U) || (arg0 == 0xEU)) {
        return 1;
    }
    if (arg0 == (u32) lbl_80494A3C) {
        return 1;
    }
    return 0;
}

s32 fn_80262F24(s32, DVDCommandBlock *);
void *fn_80262F18(void) {
    return (void *)fn_80262F24;
}

s32 fn_80262F24(s32 prio, DVDCommandBlock *block) {
    M2C_UNK fn_80251BF0(void *, u32);
    s32 fn_8025465C();
    M2C_UNK fn_80254684(s32);
    M2C_UNK fn_802622E0();
    s32 fn_80264C7C(s32, void *);
    extern s32 lbl_80494A2C;
    extern DVDCommandBlock *lbl_80495ED0;
    extern s32 lbl_80495EDC;
    s32 level;
    s32 result;

    if (lbl_80494A2C != 0 && (block->command == 1 || block->command - 4 <= 1 || block->command == 0xE)) {
        fn_80251BF0(block->addr, block->length);
    }
    level = fn_8025465C();
    block->state = 2;
    result = fn_80264C7C(prio, block);
    if (lbl_80495ED0 == 0 && lbl_80495EDC == 0) {
        fn_802622E0();
    }
    fn_80254684(level);
    return result;
}

s32 fn_802633F0(DVDCommandBlock *block, void *callback) {
    s32 idle;

    block->command = 7;
    block->callback = callback;
    idle = fn_80262F24(1, block);
    return idle;
}

void fn_8026354C(s32 arg0, void *arg1);
s32 fn_802634AC(DVDCommandBlock *block) {
    s32 fn_8025465C();
    M2C_UNK fn_80254684(s32);
    M2C_UNK fn_8025974C(M2C_UNK *);
    extern M2C_UNK lbl_80495EC8;
    s32 result;
    s32 enabled;
    s32 state;
    s32 retVal;

    result = fn_802633F0(block, (void *)fn_8026354C);
    if (result == 0) {
        return -1;
    }
    enabled = fn_8025465C();
    while (1) {
        state = block->state;
        if (state == 0 || state == -1 || state == 10) {
            retVal = block->transferredSize;
            break;
        }
        fn_8025974C(&lbl_80495EC8);
    }
    fn_80254684(enabled);
    return retVal;
}

void fn_8026354C(s32 arg0, void *arg1) {
    M2C_UNK fn_80259838(M2C_UNK *);
    extern M2C_UNK lbl_80495EC8;
    M2C_FIELD(arg1, s32 *, 0x20) = arg0;
    fn_80259838(&lbl_80495EC8);
}

s32 fn_80263574(DVDCommandBlock *block, void *callback) {
    s32 idle;

    block->command = 8;
    block->callback = callback;
    idle = fn_80262F24(1, block);
    return idle;
}

s32 fn_80263630(DVDCommandBlock *block) {
    s32 fn_8025465C();
    M2C_UNK fn_80254684(s32);
    M2C_UNK fn_8025974C(M2C_UNK *);
    void fn_802636D0();
    extern M2C_UNK lbl_80495EC8;
    s32 result;
    s32 enabled;
    s32 state;
    s32 retVal;

    result = fn_80263574(block, (void *)fn_802636D0);
    if (result == 0) {
        return -1;
    }
    enabled = fn_8025465C();
    while (1) {
        state = block->state;
        if (state == 0 || state == -1 || state == 10) {
            retVal = block->transferredSize;
            break;
        }
        fn_8025974C(&lbl_80495EC8);
    }
    fn_80254684(enabled);
    return retVal;
}

void fn_802636D0(s32 arg0, void *arg1) {
    M2C_UNK fn_80259838(M2C_UNK *);
    extern M2C_UNK lbl_80495EC8;
    M2C_FIELD(arg1, s32 *, 0x20) = arg0;
    fn_80259838(&lbl_80495EC8);
}

void fn_80263854(s32 arg0, void *arg1);
void fn_80263854(s32 arg0, void *arg1) {
    M2C_UNK fn_80259838(M2C_UNK *);
    extern M2C_UNK lbl_80495EC8;
    M2C_FIELD(arg1, s32 *, 0x20) = arg0;
    fn_80259838(&lbl_80495EC8);
}

void fn_802639D8(s32 arg0, void *arg1);
void fn_802639D8(s32 arg0, void *arg1) {
    M2C_UNK fn_80259838(M2C_UNK *);
    extern M2C_UNK lbl_80495EC8;
    M2C_FIELD(arg1, s32 *, 0x20) = arg0;
    fn_80259838(&lbl_80495EC8);
}

void fn_80263B5C(s32 arg0, void *arg1);
void fn_80263B5C(s32 arg0, void *arg1) {
    M2C_UNK fn_80259838(M2C_UNK *);
    extern M2C_UNK lbl_80495EC8;
    M2C_FIELD(arg1, s32 *, 0x20) = arg0;
    fn_80259838(&lbl_80495EC8);
}

void fn_80263CE0(s32 arg0, void *arg1);
void fn_80263CE0(s32 arg0, void *arg1) {
    M2C_UNK fn_80259838(M2C_UNK *);
    extern M2C_UNK lbl_80495EC8;
    M2C_FIELD(arg1, s32 *, 0x20) = arg0;
    fn_80259838(&lbl_80495EC8);
}

void fn_80264094(void) {
    extern M2C_UNK lbl_80495EC8;
    fn_80259838(&lbl_80495EC8);
}

void fn_80264250(void) {
    extern M2C_UNK lbl_80495EC8;
    fn_80259838(&lbl_80495EC8);
}

extern s32 lbl_80495F08;
s32 fn_802642B8(void) {
    return lbl_80495F08;
}

s32 fn_802642C0(void *arg0) {
    s32 temp_r0;
    s32 var_r31;

    fn_8025465C();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r0 == 3) {
        var_r31 = 1;
    } else {
        var_r31 = temp_r0;
    }
    fn_80254684();
    return var_r31;
}

s32 fn_802643B8(s32 arg0) {
    extern s32 lbl_80494A2C;
    s32 temp_r0;

    temp_r0 = lbl_80494A2C;
    lbl_80494A2C = arg0;
    return temp_r0;
}

void fn_8026477C(void) {
    extern M2C_UNK lbl_80495EC8;
    fn_80259838(&lbl_80495EC8);
}

void fn_802649C4(void) {
    M2C_UNK fn_80259838(M2C_UNK *);
    extern s32 lbl_80495F0C;
    extern M2C_UNK lbl_80495EC8;
    lbl_80495F0C = 1;
    fn_80259838(&lbl_80495EC8);
}

s32 fn_802649F0(void) {
    return 0x80000000;
}

void *fn_802654A0(u8 *id, char *game, char *company, u8 diskNumber, u8 version) {
    extern void *fn_80248488(void *, s32, u32);
    extern char *fn_80248A10(char *, const char *, u32);

    fn_80248488(id, 0, 0x20);
    if (game != NULL) {
        fn_80248A10((char *)id, game, 4);
    }
    if (company != NULL) {
        fn_80248A10((char *)id + 4, company, 2);
    }
    id[6] = diskNumber;
    id[7] = version;
    return id;
}

void fn_80265520(void) {
    typedef struct { u8 r, g, b, a; } Color;
    extern u32 fn_80269364(void);
    extern u16 fn_803798D8(void);
    extern u8 fn_80257D64(void);
    extern void fn_80378D0C(Color, Color, const char *);
    extern const char *lbl_803EC2A8[];
    extern const char *lbl_80494A80;
    extern const char *lbl_80494A84;
    extern Color lbl_80497480;
    extern Color lbl_80497484;
    const char *message;
    Color bg = lbl_80497480;
    Color fg = lbl_80497484;

    if (fn_80269364() == 0) {
        if (fn_803798D8() == 1) {
            message = lbl_80494A80;
        } else {
            message = lbl_80494A84;
        }
    } else {
        message = lbl_803EC2A8[fn_80257D64()];
    }
    fn_80378D0C(fg, bg, message);
}

s32 fn_802655AC(s32 enable) {
    extern void fn_80265520(void);
    extern void (*lbl_80495F28)(void);
    s32 fn_8025465C();
    M2C_UNK fn_80254684(s32);
    s32 enabled;
    s32 old;

    enabled = fn_8025465C();
    if (lbl_80495F28 != NULL) {
        old = 1;
    } else {
        old = 0;
    }
    lbl_80495F28 = enable ? fn_80265520 : NULL;
    fn_80254684(enabled);
    return old;
}

void fn_8026561C(void) {
    extern void (*lbl_80495F28)(void);
    if (lbl_80495F28 != NULL) {
        lbl_80495F28();
    }
}

void fn_80265CC4(void *alarm, void *context) {
    M2C_UNK fn_80254AC0(M2C_UNK);
    void fn_80252AAC(void *);
    void fn_802528A4(void *);
    extern void (*lbl_80495F48)(s32);
    void (*cb)(s32);
    u8 ctx[0x2C8];

    fn_80254AC0(0x400);
    fn_80252AAC(ctx);
    fn_802528A4(ctx);
    cb = lbl_80495F48;
    lbl_80495F48 = NULL;
    if (cb != NULL) {
        cb(0x10);
    }
    fn_80252AAC(ctx);
    fn_802528A4(context);
}

#pragma dont_inline on
void fn_80265D34(s64 timeout) {
    extern u8 lbl_80442AB0[];
    void fn_80251224(void *, s64, void *);
    void fn_80265CC4(void *, void *);

    fn_80250FC4(lbl_80442AB0);
    fn_80251224(lbl_80442AB0, timeout, fn_80265CC4);
}
#pragma dont_inline reset
s32 fn_80265EA8(void) {
    u8 *fn_802649F0(void);
    if (fn_802649F0()[8]) {
        return 1;
    }
    return 0;
}

s32 fn_80265EE0(void *cur, void *prev) {
    u8 *fn_802649F0(void);
    u32 prevEnd = (M2C_FIELD(prev, u32 *, 8) + M2C_FIELD(prev, u32 *, 4) - 1) >> 15;
    u32 curStart = M2C_FIELD(cur, u32 *, 8) >> 15;
    u32 blockSize = ((fn_802649F0()[8] ? 1 : 0) ? 5 : 15);

    if (curStart > prevEnd - 2 || curStart < prevEnd + blockSize + 3) {
        return 1;
    }
    return 0;
}

void fn_80265F80(s32 a, s32 b, s32 c, s32 d) {
    extern s32 lbl_80442A48[];
    extern s32 lbl_80495F84;
    void fn_80265D98(s32, s32, s32, s32);

    lbl_80442A48[0] = -1;
    lbl_80495F84 = 0;
    fn_80265D98(a, b, c, d);
}

s32 fn_802668EC(s32 arg0) {
    extern s32 lbl_80495F4C;
    s32 temp_r31;

    fn_8025465C();
    temp_r31 = lbl_80495F4C;
    lbl_80495F4C = arg0;
    fn_80254684();
    return temp_r31;
}

void fn_80266930(void) {
    extern volatile s32 lbl_80495F60;
    volatile u32 *regs = (volatile u32 *)0xCC006000;
    regs[0] |= 0x41;
    lbl_80495F60 = 1;
}

void fn_8026694C(void *alarm, void *context) {
    extern u32 lbl_80495F44;
    extern volatile s32 lbl_80495F60;
    void fn_802669C0(s64);

    if (__DIRegs[6] < lbl_80495F44) {
        __DIRegs[0] |= 0x41;
        lbl_80495F60 = 1;
    } else {
        fn_802669C0(20 * ((*(u32 *)0x800000F8 / 4) / 1000));
    }
}

#pragma dont_inline on
void fn_802669C0(s64 timeout) {
    extern u8 lbl_80442AD8[];
    void fn_80251224(void *, s64, void *);
    void fn_8026694C(void *, void *);

    fn_80250FC4(lbl_80442AD8);
    fn_80251224(lbl_80442AD8, timeout, fn_8026694C);
}
#pragma dont_inline reset

s32 fn_80266A24(void) {
    extern s32 lbl_80495F40;
    extern s32 lbl_80495F60;
    lbl_80495F40 = 1;
    lbl_80495F60 = 1;
    return 1;
}

void *fn_80266A38(void) {
    extern void *lbl_80495F48;
    extern s32 lbl_80495F5C;
    void *cb;

    __DIRegs[1] = 0;
    cb = lbl_80495F48;
    lbl_80495F5C = 0;
    lbl_80495F48 = NULL;
    return cb;
}

s32 fn_80266A54(void) {
    extern s64 lbl_80495F50;
    s64 fn_8025A494(void);
    s64 now;

    now = fn_8025A494();
    if (now - lbl_80495F50 < (s64)(100 * ((*(u32 *)0x800000F8 / 4) / 1000))) {
        return 0;
    }
    if (__DIRegs[1] & 1) {
        return 1;
    }
    return 2;
}

void fn_80266AE8(s32 arg0, s32 arg1) {
    extern s32 lbl_80495F64;
    extern s32 lbl_80495F68;
    fn_8025465C();
    lbl_80495F64 = arg0;
    lbl_80495F68 = arg1;
    fn_80254684();
}

s32 fn_80266B64(void) {
    return 1;
}

s32 fn_80266F5C(s32 arg0) {
    extern s32 lbl_80495F9C;
    s32 temp_r31;

    temp_r31 = lbl_80495F9C;
    fn_8025465C();
    lbl_80495F9C = arg0;
    fn_80254684();
    return temp_r31;
}

s32 fn_80266FA0(s32 arg0) {
    extern s32 lbl_80495FA0;
    s32 temp_r31;

    temp_r31 = lbl_80495FA0;
    fn_8025465C();
    lbl_80495FA0 = arg0;
    fn_80254684();
    return temp_r31;
}

extern s32 lbl_80495FD8;
s32 fn_80268F3C(void) {
    return lbl_80495FD8;
}

extern s32 lbl_80495FDC;
s32 fn_80268F44(void) {
    return lbl_80495FDC;
}

extern s32 lbl_80495F8C;
s32 fn_80269134(void) {
    return lbl_80495F8C;
}

void fn_802696D0(s16 *arg0, s16 *arg1) {
    extern s16 lbl_80495FAC;
    extern s16 lbl_80495FAE;
    fn_8025465C();
    *arg0 = lbl_80495FAC;
    *arg1 = lbl_80495FAE;
    fn_80254684();
}

void fn_80269C78(u32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80269B90(s32, s32);
    M2C_UNK fn_80269C04(s32, s32);
    if (arg0 == 0U) {
        fn_80269B90(arg1, arg2);
        return;
    }
    fn_80269C04(arg1, arg2);
}

void fn_8026AD18(void) {
    M2C_UNK fn_8025F710();
    fn_8025F710();
}

extern s32 lbl_80494AC0;
s32 fn_8026AF1C(void) {
    return lbl_80494AC0;
}

s32 fn_8026B6EC(s32 arg0, s32 *arg1) {
    extern s32 lbl_80494AB4;
    extern s32 lbl_80495FEC;
    extern s32 lbl_80495FF0;
    u32 temp_r3;

    *arg1 = fn_8025F148();
    temp_r3 = 0x80000000U >> arg0;
    if ((lbl_80495FF0 & temp_r3) || ((s32) lbl_80494AB4 == arg0) || !(lbl_80495FEC & temp_r3)) {
        return 0;
    }
    return 1;
}

void fn_8026B8F4(void) {
    extern s32 lbl_80494AB8;
    lbl_80494AB8 = 0;
}

s32 fn_8026BAAC(s32 arg0) {
    extern s32 lbl_80496004;
    if ((arg0 < 0) || (arg0 >= 4)) {
        return 0;
    }
    if (lbl_80496004 & (0x80000000U >> arg0)) {
        return 1;
    }
    return 0;
}

s32 fn_8026BAE8(s32 arg0) {
    extern s32 lbl_8049601C;
    s32 temp_r31;

    temp_r31 = lbl_8049601C;
    fn_8025465C();
    lbl_8049601C = arg0;
    fn_80254684();
    return temp_r31;
}

s32 fn_8026BBB4(void) {
    return ((u16) *(u16 *)0xCC005036 >> 0xFU) & 1;
}

s32 fn_8026BBF4(void) {
    return (*(u16 *)0xCC00503A << 5) & 0xFFFE0;
}

s32 fn_8026BC20(void) {
    return (*(u16 *)0xCC005036 << 5) & 0xFFFE0;
}

extern s32 lbl_80496028;
s32 fn_8026BC30(void) {
    return lbl_80496028;
}

s32 fn_8026BC38(s32 arg0) {
    extern s32 lbl_80496018;
    s32 temp_r31;

    temp_r31 = lbl_80496018;
    fn_8025465C();
    lbl_80496018 = arg0;
    fn_80254684();
    return temp_r31;
}

void fn_8026BC8C(void) {
    *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFDF) | 0x20;
}

void fn_8026BCA4(s32 arg0) {
    *(s32 *)0xCC006C0C = arg0;
}

s32 fn_8026BD98(void) {
    return *(s32 *)0xCC006C00 & 1;
}

s32 fn_8026BE88(void) {
    return (((u32) *(u32 *)0xCC006C00 >> 6U) & 1) ^ 1;
}

void fn_8026BE9C(u32 arg0) {
    if (arg0 == 1U) {
        fn_8026BEE4();
    }
}

void fn_8026BEC4(void) {
    M2C_UNK fn_8026BEE4();
    fn_8026BEE4();
}

s32 fn_8026BFB8(void) {
    return ((u32) *(u32 *)0xCC006C00 >> 1U) & 1;
}

u8 fn_8026BFE4(void) {
    return (u8) *(s32 *)0xCC006C04;
}

u8 fn_8026C010(void) {
    return (u8) ((u32) *(u32 *)0xCC006C04 >> 8U);
}

void fn_8026C18C(void) {
    extern s32 lbl_80496028;
    lbl_80496028 = 0;
}

s32 fn_8026C4FC(void) {
    return 0;
}

void fn_8026CD4C(void) {
    s32 PPCMfhid2();
    M2C_UNK PPCMthid2(s32);
    PPCMthid2(PPCMfhid2() & 0xBFFFFFFF);
}

void fn_8026E418(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
}

void fn_8026E6C4(s32 arg0) {
    M2C_UNK fn_8026E6F8(s32);
    M2C_UNK fn_802706E4();
    fn_802706E4();
    fn_8026E6F8(arg0);
}

s32 fn_8026E9EC(s32 *self) {
    return *self;
}

s32 fn_8026E9F4(s32 *self) {
    return self[2];
}

void fn_8026E9FC(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0xC);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_8026EA10(s32 arg0) {
    extern s32 lbl_804960A4;
    s32 temp_r31;

    temp_r31 = lbl_804960A4;
    fn_8025465C();
    lbl_804960A4 = arg0;
    fn_80254684();
    return temp_r31;
}

extern s32 lbl_80496098;
s32 fn_8026EDD8(void) {
    return lbl_80496098;
}

extern s32 lbl_80496090;
s32 fn_8026EDE0(void) {
    return lbl_80496090;
}

extern s32 lbl_80496094;
s32 fn_8026EDE8(void) {
    return lbl_80496094;
}

extern s32 lbl_804960A8;
s32 fn_8026EDF0(void) {
    return lbl_804960A8;
}

s32 fn_8026EDF8(void) {
    s32 temp_r3;

    temp_r3 = lbl_804960A8;
    lbl_804960A8 = 0;
    return temp_r3;
}

void fn_80270384(void) {
    *(s8 *)0xCC008000 = 0x48;
}

void fn_80270740(void) {
    M2C_UNK PPCMtwpar(M2C_UNK);
    s32 fn_802500C0();
    do {

    } while (fn_802500C0() & 1);
    PPCMtwpar(0x0C008000);
}

u16 fn_80270C44(void) {
    extern void *__peReg;
    return M2C_FIELD(__peReg, u16 *, 0xE);
}

s32 fn_80270FA8(s32 arg0) {
    extern s32 lbl_804960B0;
    s32 temp_r31;

    temp_r31 = lbl_804960B0;
    fn_8025465C();
    lbl_804960B0 = arg0;
    fn_80254684();
    return temp_r31;
}

s32 fn_80271074(s32 arg0) {
    extern s32 lbl_804960B4;
    s32 temp_r31;

    temp_r31 = lbl_804960B4;
    fn_8025465C();
    lbl_804960B4 = arg0;
    fn_80254684();
    return temp_r31;
}

void fn_802725B4(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = farg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg3;
    M2C_FIELD(arg0, f32 *, 0x20) = farg4;
    M2C_FIELD(arg0, f32 *, 0x24) = farg5;
}

void fn_802725D0(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = farg2;
}

void fn_802725E0(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0x10);
    *arg2 = M2C_FIELD(arg0, f32 *, 0x14);
    *arg3 = M2C_FIELD(arg0, f32 *, 0x18);
}

void fn_802725FC(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x1C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x20) = farg1;
    M2C_FIELD(arg0, f32 *, 0x24) = farg2;
}

void fn_8027260C(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0x1C);
    *arg2 = M2C_FIELD(arg0, f32 *, 0x20);
    *arg3 = M2C_FIELD(arg0, f32 *, 0x24);
}

void fn_80272888(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x30) = farg2;
}

void fn_80272898(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0x28);
    *arg2 = M2C_FIELD(arg0, f32 *, 0x2C);
    *arg3 = M2C_FIELD(arg0, f32 *, 0x30);
}

void fn_802728B4(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) -farg0;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) -farg1;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) -farg2;
}

void fn_802728D0(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    *arg1 = -M2C_FIELD(arg0, f32 *, 0x34);
    *arg2 = -M2C_FIELD(arg0, f32 *, 0x38);
    *arg3 = -M2C_FIELD(arg0, f32 *, 0x3C);
}

void fn_80272A08(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) *arg1;
}

void fn_80272A14(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0xC);
}

void fn_80273464(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

void fn_802735E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

s32 fn_802735E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80273658(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0xC) << 5) & 0x03FFFFE0;
}

s32 fn_80273664(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x3FF) + 1;
}

s32 fn_80273674(void *arg0) {
    return (((u32) M2C_FIELD(arg0, u32 *, 8) >> 0xAU) & 0x3FF) + 1;
}

s32 fn_80273684(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 fn_8027368C(s32 *arg0) {
    return *arg0 & 3;
}

s32 fn_80273698(u32 *arg0) {
    return ((u32) *arg0 >> 2U) & 3;
}

s32 fn_802737B4(u32 *arg0) {
    return ((u32) *arg0 >> 4U) & 1;
}

f32 fn_802737C0(void *arg0) {
    extern f32 lbl_804975D0;
    return (f32) (u8) M2C_FIELD(arg0, s32 *, 4) * lbl_804975D0;
}

s32 fn_80273868(u32 *arg0) {
    return ((u32) *arg0 >> 0x15U) & 1;
}

s32 fn_80273888(u32 *arg0) {
    return ((u32) *arg0 >> 0x13U) & 3;
}

s32 fn_80273894(s32 *self) {
    return self[6];
}

void fn_80273AA4(void *arg0, s32 *arg1, s32 *arg2, u16 *arg3) {
    *arg1 = (M2C_FIELD(arg0, s32 *, 4) << 5) & 0x03FFFFE0;
    *arg2 = ((u32) M2C_FIELD(arg0, u32 *, 0) >> 0xAU) & 3;
    *arg3 = M2C_FIELD(arg0, u16 *, 8);
}

s32 fn_80273AC8(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) << 5) & 0x03FFFFE0;
}

s32 fn_80273AD4(u32 *arg0) {
    return ((u32) *arg0 >> 0xAU) & 3;
}

u16 fn_80273AE0(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 8);
}

void fn_80273E3C(u32 *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = ((*arg0 << 9) & 0x7FE00) + 0x80000;
    *arg2 = ((u32) *arg0 >> 0xAU) & 0x7FF;
}

s32 fn_80273FD0(s32 arg0) {
    extern void *__GXData;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(__GXData, s32 *, 0x4C8);
    M2C_FIELD(__GXData, s32 *, 0x4C8) = arg0;
    return temp_r0;
}

void fn_80275168(void) {

}

void fn_80275690(void) {

}

void fn_80276D34(void) {
    extern void *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
}

s32 fn_80276D44(void) {
    M2C_UNK fn_80276B8C(s32 *, M2C_UNK *);
    s32 spC;
    M2C_UNK sp8;

    fn_80276B8C(&spC, &sp8);
    return spC;
}

s32 fn_80276D70(void) {
    M2C_UNK spC;
    s32 sp8;

    fn_80276B8C(&spC, &sp8);
    return sp8;
}

void fn_80276FB0(void) {
    extern void *__memReg;
    M2C_FIELD(__memReg, s16 *, 0x32) = 0;
    M2C_FIELD(__memReg, s16 *, 0x34) = 0;
    M2C_FIELD(__memReg, s16 *, 0x36) = 0;
    M2C_FIELD(__memReg, s16 *, 0x38) = 0;
    M2C_FIELD(__memReg, s16 *, 0x3C) = 0;
    M2C_FIELD(__memReg, s16 *, 0x3A) = 0;
    M2C_FIELD(__memReg, s16 *, 0x40) = 0;
    M2C_FIELD(__memReg, s16 *, 0x3E) = 0;
    M2C_FIELD(__memReg, s16 *, 0x44) = 0;
    M2C_FIELD(__memReg, s16 *, 0x42) = 0;
    M2C_FIELD(__memReg, s16 *, 0x48) = 0;
    M2C_FIELD(__memReg, s16 *, 0x46) = 0;
    M2C_FIELD(__memReg, s16 *, 0x4C) = 0;
    M2C_FIELD(__memReg, s16 *, 0x4A) = 0;
    M2C_FIELD(__memReg, s16 *, 0x50) = 0;
    M2C_FIELD(__memReg, s16 *, 0x4E) = 0;
    M2C_FIELD(__memReg, s16 *, 0x54) = 0;
    M2C_FIELD(__memReg, s16 *, 0x52) = 0;
    M2C_FIELD(__memReg, s16 *, 0x58) = 0;
    M2C_FIELD(__memReg, s16 *, 0x56) = 0;
}

void fn_802773FC(void) {

}

void fn_80277400(void) {

}

s32 fn_80277404(void) {
    return 0;
}

s32 fn_8027740C(void) {
    return 0;
}

s32 fn_80277414(void) {
    return 0;
}

void fn_8027741C(void) {

}

void fn_80277420(void) {

}

s32 fn_80277424(void) {
    return 1;
}

void fn_8027742C(void) {

}

void fn_80277430(void) {

}

s32 fn_80277694(s32 arg0, s32 arg1) {
    M2C_UNK fn_80277BDC(s32, s32, s32);
    extern s32 lbl_804960D0;
    extern s32 lbl_804960D4;
    extern s8 lbl_804960DC;
    s32 temp_r31;
    s32 var_r3;

    temp_r31 = fn_8025465C();
    if (lbl_804960D0 & 0x10000) {
        var_r3 = 0x1000;
    } else {
        var_r3 = 0;
    }
    fn_80277BDC(var_r3 + 0x1E000, arg0, (arg1 + 3) & 0xFFFFFFFC);
    lbl_804960D4 = 0;
    lbl_804960DC = 0;
    fn_80254684(temp_r31);
    return 0;
}

void fn_802781E0(void) {

}

