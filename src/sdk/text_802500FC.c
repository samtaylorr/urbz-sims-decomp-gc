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

volatile u32 __SIRegs[] : 0xCC006400;

#pragma push
#pragma fp_contract off
static inline f32 sqrtf(f32 x) {
    volatile f32 y;

    if (x > 0.0f) {
        f64 guess = __frsqrte((f64)x);
        guess = 0.5 * guess * (3.0 - guess * guess * x);
        guess = 0.5 * guess * (3.0 - guess * guess * x);
        guess = 0.5 * guess * (3.0 - guess * guess * x);
        y = (f32)(x * guess);
        return y;
    }
    return x;
}
#pragma pop

typedef struct OSResetFunctionInfo {
    s32 (*func)(s32 final);
    u32 priority;
    struct OSResetFunctionInfo *next;
    struct OSResetFunctionInfo *prev;
} OSResetFunctionInfo;

typedef struct OSResetFunctionQueue {
    OSResetFunctionInfo *head;
    OSResetFunctionInfo *tail;
} OSResetFunctionQueue;

typedef struct DVDFileInfo {
    DVDCommandBlock cb;
    u32 startAddr;
    u32 length;
    void (*callback)(s32, struct DVDFileInfo *);
} DVDFileInfo;

typedef struct OSSectionInfo {
    u32 offset;
    u32 size;
} OSSectionInfo;

typedef struct OSModuleInfo {
    u32 id;
    struct OSModuleInfo *next;
    struct OSModuleInfo *prev;
    u32 numSections;
    OSSectionInfo *sectionInfo;
} OSModuleInfo;

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

#pragma push
#pragma peephole off
s32 fn_802502B8(void) {
    extern u32 *lbl_80495DC8;
    if (lbl_80495DC8 == NULL || lbl_80495DC8[11] == 0) {
        return 0x10000002;
    }
    return lbl_80495DC8[11];
}
#pragma pop
extern u32 *lbl_80495DC8;
extern u16 lbl_80440B40[];
#pragma push
#pragma peephole off
void fn_80250418(void *arg0, s32 *arg1) {
    switch (arg1[3]) {
    case 0:
        *(u16 *)0x800030E6 = lbl_80440B40[1] | 0x8000;
        break;
    default:
        *(u16 *)0x800030E6 = 1;
        break;
    }
}
#pragma pop
typedef void (*__OSExceptionHandler)(u8, void *);
extern __OSExceptionHandler *lbl_80495DEC;

#pragma push
#pragma peephole off
__OSExceptionHandler fn_80250BDC(u8 exception, __OSExceptionHandler handler) {
    __OSExceptionHandler oldHandler;
    oldHandler = lbl_80495DEC[exception];
    lbl_80495DEC[exception] = handler;
    return oldHandler;
}

__OSExceptionHandler fn_80250BF8(u8 exception) {
    return lbl_80495DEC[exception];
}

u8 fn_80250D54(void) {
    extern volatile u32 __DIRegs[];
    return (u8)__DIRegs[9];
}

void OSRegisterVersion(char *version) {
    void fn_8025302C(char *, ...);
    extern char lbl_804949A4[4];
    fn_8025302C(lbl_804949A4, version);
}

#pragma pop
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

void *fn_8025188C(u32 size, u32 align) {
    void *ptr;
    u32 arenaLo;

    ptr = (void *)(((u32)lbl_804949A8 + align - 1) & ~(align - 1));
    arenaLo = (u32)ptr + size;
    arenaLo = (arenaLo + align - 1) & ~(align - 1);
    lbl_804949A8 = arenaLo;
    return ptr;
}

void *fn_802518B8(u32 size, u32 align) {
    u32 arenaHi;
    void *ptr;

    arenaHi = (u32)lbl_80495E08 & ~(align - 1);
    arenaHi -= size;
    arenaHi = (u32)(ptr = (void *)(arenaHi & ~(align - 1)));
    lbl_80495E08 = arenaHi;
    return ptr;
}

void fn_80251B7C(void) {
    __sync();
    __mtspr(1008, __mfspr(1008) | 0x4000);
}

void fn_80251B90(void) {
    __sync();
    __mtspr(1008, __mfspr(1008) & ~0x4000);
}

void fn_80251BA4(void) {
    __sync();
    __mtspr(1008, __mfspr(1008) | 0x1000);
}

void fn_80251BB8(void) { __mtspr(1008, __mfspr(1008) & ~0x1000); }

void fn_80251BC8(void *addr) { __dcbt(addr, 0); }

void fn_80251BD0(void *addr) { __dcbz(addr, 0); }

void fn_80251BD8(void *addr) { __dcbst(addr, 0); }

void fn_80251BE0(void *addr) { __dcbf(addr, 0); }

void fn_80251BE8(void *addr) { __dcbi(addr, 0); }

void fn_80251BF0(void *addr, u32 nBytes) {
    u32 n;

    if (nBytes == 0) {
        return;
    }
    n = (nBytes + ((u32)addr & 0x1F) + 0x1F) >> 5;
    do {
        __dcbi(addr, 0);
        addr = (u8 *)addr + 0x20;
    } while (--n);
}

#pragma optimize_for_size on
void fn_80251C7C(void *addr, u32 nBytes) {
    if (nBytes > 0) {
        nBytes += (u32)addr & 0x1F;
        nBytes = (nBytes + 0x1F) >> 5;
        while (nBytes--) {
            __dcbf(addr, 0);
            addr = (char *)addr + 0x20;
        }
    }
}
#pragma optimize_for_size off

#pragma optimize_for_size on
void fn_80251CA8(void *addr, u32 nBytes) {
    if (nBytes > 0) {
        nBytes += (u32)addr & 0x1F;
        nBytes = (nBytes + 0x1F) >> 5;
        while (nBytes--) {
            __dcbst(addr, 0);
            addr = (char *)addr + 0x20;
        }
    }
}
#pragma optimize_for_size off

#pragma opt_unroll_loops off
void fn_80251CD4(void *addr, u32 nBytes) {
    if (nBytes <= 0) {
        return;
    }
    nBytes += (u32)addr & 0x1F;
    nBytes = (nBytes + 0x1F) >> 5;
    while (nBytes--) {
        __dcbz(addr, 0);
        addr = (char *)addr + 0x20;
    }
}
#pragma opt_unroll_loops reset
void fn_80251D84(void) {
    __isync();
    __mtspr(1008, __mfspr(1008) & ~0x10000);
}

void fn_80251D98(void) {
    __isync();
    __mtspr(1008, __mfspr(1008) | 0x2000);
}

void fn_80251DAC(void) {
    __mtspr(1008, __mfspr(1008) & ~0x4000);
}

void fn_80251DBC(void *addr) {
    __icbi(addr, 0);
}

void fn_80251DC4(void) {
    __isync();
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

#pragma push
#pragma peephole off
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

u32 fn_80252120(u8 *destAddr, u8 *srcAddr, u32 nBytes) {
    void fn_80251F70(void *, void *, u32);
    u32 numBlocks = (nBytes + 31) / 32;
    u32 numTransactions = (numBlocks + 128 - 1) / 128;

    while (numBlocks > 0) {
        if (numBlocks < 128) {
            fn_80251F70(destAddr, srcAddr, numBlocks);
            numBlocks = 0;
        } else {
            fn_80251F70(destAddr, srcAddr, 0);
            numBlocks -= 128;
            destAddr += 4096;
            srcAddr += 4096;
        }
    }
    return numTransactions;
}

#pragma pop
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

void fn_802522DC(void) {
    u32 fn_8024FF88(void);
    void fn_8024FF90(u32);
    void fn_8025F920(const char *fmt, ...);

    __sync();
    fn_8024FF90(fn_8024FF88() & ~0x80000000);
    __sync();
    fn_8024FF90(fn_8024FF88() | 0x00200000);
    while (fn_8024FF88() & 0x00000001) {
    }
    fn_8024FF90(fn_8024FF88() & ~0x00200000);
    while (fn_8024FF88() & 0x00000001) {
        fn_8025F920(">>> L2 INVALIDATE : SHOULD NEVER HAPPEN\n");
    }
}

void fn_80252374(u8 arg0) {
    s32 fn_8024FF88();
    void fn_8024FF90(s32);
    if (arg0) {
        fn_8024FF90(fn_8024FF88() | 0x400000);
    } else {
        fn_8024FF90(fn_8024FF88() & ~0x400000);
    }
}

void fn_802523B4(s32 enable) {
    s32 fn_8024FF88();
    M2C_UNK fn_8024FF90(s32);
    s32 reg;
    if (enable) {
        reg = fn_8024FF88();
        fn_8024FF90(reg | 0x80000);
    } else {
        reg = fn_8024FF88();
        fn_8024FF90(reg & ~0x80000);
    }
}

void fn_80252648(void *, void *);
void fn_8025276C(void *, void *, void *);
void fn_8025289C(void *a, void *b) {
    fn_8025276C(a, b, a);
}

s32 fn_80252900(void) {
    return *(s32 *)0x800000D4;
}

#pragma peephole off
void fn_80252AAC(void *ctx) {
    *(u16 *)((u8 *)ctx + 0x1A0) = 0;
    *(u16 *)((u8 *)ctx + 0x1A2) = 0;
    if (ctx == *(void **)0x800000D8) {
        *(void **)0x800000D8 = 0;
    }
}
#pragma peephole reset
void fn_802530AC(void) {
    M2C_UNK fn_80378324();
    fn_80378324();
}

#pragma push
#pragma dont_inline on
#pragma peephole off
void fn_802538BC(void *arg0, u32 entry) {
    extern volatile u32 __PIRegs[];
    void fn_80253A14(void *, void *);
    void fn_80253880(u32);
    s32 fn_8025465C(void);
    fn_80253A14(arg0, fn_8025188C(0x1C, 1));
    __PIRegs[9] = 7;
    fn_8025465C();
    fn_80253880(entry);
}
#pragma pop
volatile u32 __PIRegs[] : 0xCC003000;
volatile u16 __MEMRegs[] : 0xCC004000;

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

void fn_80254420(char *path, char **argv) {
    s32 fn_802604AC(char *, DVDFileInfo *);
    void fn_80254284(u32, u32, char **);
    DVDFileInfo fileInfo;
    u32 addr;

    if (path[0] == 0) {
        addr = 0;
    } else if (fn_802604AC(path, &fileInfo)) {
        addr = fileInfo.startAddr;
    } else {
        return;
    }
    fn_80254284(addr, 0xC0000000, (char **)argv);
}

void fn_80254488(char *path, char **argv) {
    s32 fn_802604AC(char *, DVDFileInfo *);
    void fn_80254284(u32, u32, char **);
    void fn_80258640(void);
    void fn_8025611C(s32);
    void fn_80258680(void);
    void fn_80251884(u32);
    void fn_8025187C(u32);
    DVDFileInfo fileInfo;
    u32 addr;

    fn_80258640();
    fn_8025611C(0);
    fn_80258680();
    fn_80251884(0x81280000);
    fn_8025187C(0x812F0000);
    if (path[0] == 0) {
        addr = 0;
    } else {
        if (!fn_802604AC(path, &fileInfo)) {
            return;
        }
        addr = fileInfo.startAddr;
    }
    fn_80254284(addr, 0xC0000000, argv);
}

s32 fn_80254670(void) {
    u32 msr = __mfmsr();
    __mtmsr(msr | 0x8000);
    return (msr >> 15) & 1;
}

#pragma peephole reset
#pragma scheduling reset

typedef void (*__OSInterruptHandler)(s16 interrupt, void *context);
extern __OSInterruptHandler *lbl_80495E18;
__OSInterruptHandler fn_802546A8(s16 interrupt, __OSInterruptHandler handler) {
    __OSInterruptHandler oldHandler;
    oldHandler = lbl_80495E18[interrupt];
    lbl_80495E18[interrupt] = handler;
    return oldHandler;
}

__OSInterruptHandler fn_802546C4(s16 interrupt) {
    return lbl_80495E18[interrupt];
}

void fn_802546D8(void) {
    extern volatile u32 __PIRegs[];
    void *fn_80248488(void *, s32, u32);
    void fn_80254AC0(u32);
    void fn_80250BDC(s32, void *);
    void fn_80254F14(void);

    lbl_80495E18 = (__OSInterruptHandler *)((u8 *)0x80000000 + 0x3040);
    fn_80248488(lbl_80495E18, 0, 32 * sizeof(__OSInterruptHandler));
    *(u32 *)0x800000C4 = 0;
    *(u32 *)0x800000C8 = 0;
    __PIRegs[1] = 0xF0;
    fn_80254AC0(0xFFFFFFE0);
    fn_80250BDC(4, fn_80254F14);
}
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

void fn_80255980(void) {
    OSModuleInfo **list = (OSModuleInfo **)0x800030C8;
    list[1] = NULL;
    list[0] = NULL;
    *(u32 *)0x800030D0 = 0;
}

OSModuleInfo *fn_80255998(void *ptr, u32 *section, u32 *offset) {
    OSModuleInfo *module;
    OSSectionInfo *info;
    u32 i;
    u32 addr;

    if (ptr == NULL) {
        return NULL;
    }
    for (module = *(OSModuleInfo **)0x800030C8; module; module = module->next) {
        info = module->sectionInfo;
        for (i = 0; i < module->numSections; ++i) {
            if (info->size) {
                addr = info->offset & ~1;
                if (addr <= (u32)ptr && (u32)ptr < addr + info->size) {
                    if (section) {
                        *section = i;
                    }
                    if (offset) {
                        *offset = (u32)ptr - addr;
                    }
                    return module;
                }
            }
            info++;
        }
    }
    return NULL;
}

s32 fn_80255A38(void) {
    return *(s32 *)0x80000028;
}

s32 fn_80255A44(void) {
    return *(s32 *)0x800000F0;
}

s32 fn_80255A50(s32 final) {
    void fn_80254AC0(u32);
    if (final) {
        __MEMRegs[8] = 0xFF;
        fn_80254AC0(0xF0000000);
    }
    return 1;
}

void fn_80255A8C(s16 interrupt, void *context) {
    extern void (*lbl_80440BB0[])(u16, void *, ...);
    void fn_80253410(u16, void *, u32, u32);
    u32 cause;
    u32 addr;

    cause = __MEMRegs[0xF];
    addr = (((u32)__MEMRegs[0x12] & 0x3FF) << 16) | __MEMRegs[0x11];
    __MEMRegs[0x10] = 0;
    if (lbl_80440BB0[15]) {
        lbl_80440BB0[15](15, context, cause, addr);
        return;
    }
    fn_80253410(15, context, cause, addr);
}

#pragma dont_inline on
void fn_80255DEC(u32 arg0, s32 arg1) {
    void fn_80252AAC(void *);
    void fn_802528A4(void *);
    void fn_80254284(s32, u32, void *);
    f64 context[0x2C8 / 8];
    s32 sp10;

    fn_8025465C();
    fn_80251884(0x81280000);
    fn_8025187C(0x812F0000);
    fn_80252AAC(context);
    fn_802528A4(context);
    sp10 = 0;
    fn_80254284(arg1, arg0 | 0x80000000, &sp10);
}
#pragma dont_inline reset
void fn_80255E5C(s32 arg0, s32 arg1) {
    extern s32 lbl_80495E30;
    extern s32 lbl_80495E34;
    lbl_80495E30 = arg0;
    lbl_80495E34 = arg1;
}

void fn_80255E68(s32 *arg0, s32 *arg1) {
    extern s32 lbl_80495E30;
    extern s32 lbl_80495E34;
    *arg0 = lbl_80495E30;
    *arg1 = lbl_80495E34;
}

void fn_80255E7C(s32 *arg0, s32 *arg1) {
    extern s32 lbl_80440B90[];
    *arg0 = lbl_80440B90[3];
    *arg1 = lbl_80440B90[4];
}

void OSRegisterResetFunction(OSResetFunctionInfo *info) {
    extern OSResetFunctionQueue ResetFunctionQueue_80495E38;
    OSResetFunctionInfo *tmp;
    OSResetFunctionInfo *iter;

    for (iter = ResetFunctionQueue_80495E38.head; iter && iter->priority <= info->priority; iter = iter->next)
        ;

    if (iter == NULL) {
        tmp = ResetFunctionQueue_80495E38.tail;
        if (tmp == NULL) {
            ResetFunctionQueue_80495E38.head = info;
        } else {
            tmp->next = info;
        }
        info->prev = tmp;
        info->next = NULL;
        ResetFunctionQueue_80495E38.tail = info;
        return;
    }

    info->next = iter;
    tmp = iter->prev;
    iter->prev = info;
    info->prev = tmp;
    if (tmp == NULL) {
        ResetFunctionQueue_80495E38.head = info;
    } else {
        tmp->next = info;
    }
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

s32 fn_80255F54(s32 final) {
    extern OSResetFunctionQueue ResetFunctionQueue_80495E38;
    u32 fn_80257650(void);
    OSResetFunctionInfo *info;
    s32 err = 0;
    u32 priority = 0;

    for (info = ResetFunctionQueue_80495E38.head; info; info = info->next) {
        if (err && priority != info->priority) {
            break;
        }
        err |= !info->func(final);
        priority = info->priority;
    }
    err |= !fn_80257650();
    if (err) {
        return 0;
    }
    return 1;
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

s32 fn_80257608(s32 arg0) {
    s32 fn_802572CC(s32, s32);
    return fn_802572CC(arg0, 0);
}

s32 fn_8025762C(s32 arg0) {
    s32 fn_802572CC(s32, s32);
    return fn_802572CC(arg0, 0x14);
}

u32 fn_80257650(void) {
    extern u32 lbl_80440C00[];
    return lbl_80440C00[0x13];
}

void fn_80257894(s32 arg0) {
    extern u32 lbl_80440C00[];
    void fn_8025C4A4(void);
    void fn_8025CC2C(s32);
    void (*cb)(void);
    fn_8025C4A4();
    fn_8025CC2C(arg0);
    cb = (void (*)(void))lbl_80440C00[0x14];
    if (cb != NULL) {
        lbl_80440C00[0x14] = 0;
        cb();
    }
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

u32 fn_8025A3F4(void) {
    return __mftb();
}

#pragma push
#pragma peephole off
void fn_8025A410(s64 time) {
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    s64 fn_8025A3DC(void);
    void fn_8025A3FC(s64);
    void fn_8025BDE8(void);
    s32 enabled;
    s64 *timeAdjustAddr;
    s64 diff;

    enabled = fn_8025465C();
    diff = fn_8025A3DC() - time;
    timeAdjustAddr = (s64 *)0x800030D8;
    *timeAdjustAddr += diff;
    fn_8025A3FC(time);
    fn_8025BDE8();
    fn_80254684(enabled);
}
#pragma pop
#pragma push
#pragma peephole off
s64 fn_8025A4F8(s64 time) {
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    s32 enabled;
    s64 *timeAdjustAddr = (s64 *)((u32)0x30D8 + 0x80000000);
    s64 result;

    enabled = fn_8025465C();
    result = *timeAdjustAddr + time;
    fn_80254684(enabled);
    return result;
}
#pragma pop

#pragma push
#pragma peephole off
s32 fn_8025A558(s32 year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
#pragma pop

#pragma push
#pragma peephole off
s32 fn_8025A5E0(s32 year, s32 mon) {
    extern s32 lbl_803F8F70[];
    extern s32 lbl_803F8FA0[];
    s32 *md = fn_8025A558(year) ? lbl_803F8FA0 : lbl_803F8F70;

    return md[mon];
}
#pragma pop
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

#pragma push
#pragma scheduling off
s32 fn_8025C2BC(s32 chan) {
    typedef struct { u8 pad0[0xC]; volatile u32 state; u8 pad10[8]; u32 dev; u8 pad1C[0x24]; } EXICtrl;
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    void fn_80254AC0(u32);
    extern EXICtrl lbl_80441650[];
    EXICtrl *exi = &lbl_80441650[chan];
    s32 enabled;

    enabled = fn_8025465C();
    if (!(exi->state & 8)) {
        fn_80254684(enabled);
        return 1;
    }
    if ((exi->state & 0x10) && exi->dev == 0) {
        fn_80254684(enabled);
        return 0;
    }
    exi->state &= ~8;
    fn_80254AC0(0x500000u >> (chan * 3));
    fn_80254684(enabled);
    return 1;
}
#pragma pop

#pragma push
#pragma scheduling off
s32 fn_8025CD08(s32 chan) {
    typedef struct { u8 pad0[0xC]; s32 state; u8 pad10[0x30]; } EXICtrl;
    extern EXICtrl lbl_80441650[];
    EXICtrl *exi = &lbl_80441650[chan];
    return exi->state;
}

s32 fn_8025CD20(s32 chan) {
    s32 fn_8025CD48(s32, s32, u32 *);
    u64 id;
    return fn_8025CD48(chan, 0, (u32 *)&id);
}
#pragma pop

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

s32 fn_8025D804(void) {
    s32 fn_8025C378(s32, s32, s32);
    s32 fn_8025B6F0(s32, void *, s32, s32, void *);
    s32 fn_8025BAD8(s32);
    s32 fn_8025C4A4(s32);
    extern s32 lbl_80495E80;
    extern s32 lbl_80495E84;
    u32 cmd;

    if (!fn_8025C378(lbl_80495E80, lbl_80495E84, 3)) {
        return -1;
    }
    cmd = 0x20010000;
    fn_8025B6F0(lbl_80495E80, &cmd, 4, 1, 0);
    fn_8025BAD8(lbl_80495E80);
    fn_8025B6F0(lbl_80495E80, &cmd, 1, 0, 0);
    fn_8025BAD8(lbl_80495E80);
    fn_8025C4A4(lbl_80495E80);
    return 0x10 - (cmd >> 24);
}

void fn_8025E8FC(s32 chan, u32 command) {
    __SIRegs[chan * 3] = command;
}

u32 fn_8025E910(s32 chan) {
    return __SIRegs[chan * 3];
}

void fn_8025E924(void) {
    __SIRegs[14] = 0x80000000;
}

u32 fn_8025E934(u32 x, u32 y) {
    typedef struct { s32 chan; u32 poll; u32 inputBytes; void *input; void *callback; } SIControl;
    extern SIControl lbl_803F9124;
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    u32 poll;
    s32 enabled;

    poll = x << 16;
    poll |= y << 8;
    enabled = fn_8025465C();
    lbl_803F9124.poll &= ~0x03FFFF00;
    lbl_803F9124.poll |= poll;
    poll = lbl_803F9124.poll;
    __SIRegs[12] = poll;
    fn_80254684(enabled);
    return poll;
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

void fn_8025F818(void) {
    extern void fn_8025F8A4(void);
    extern u32 *lbl_80495EA8;
    extern s32 lbl_80495EAC;
    lbl_80495EA8 = (u32 *)0x80000040;
    *(u32 *)0x80000048 = (u32)fn_8025F8A4 + 0x80000000;
    lbl_80495EAC = 1;
}

u32 fn_8025F840(void) {
    extern u32 *lbl_80495EA8;
    if (lbl_80495EA8 == NULL) {
        return 0;
    }
    return lbl_80495EA8[0];
}

void fn_8025F85C(void) {
    extern char lbl_803F9290[];
    void fn_8025302C(char *, ...);
    void fn_80252B8C(u32);
    void PPCHalt(void);
    u32 phys;
    u32 addr;
    phys = *(u32 *)0xC0;
    addr = phys + 0x80000000;
    fn_8025302C(lbl_803F9290);
    fn_80252B8C(addr);
    PPCHalt();
}

u32 fn_8025F8B4(u8 bit) {
    extern u32 *lbl_80495EA8;
    return lbl_80495EA8[1] & (1 << bit);
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

f32 fn_8025FB70(f32 *v) {
    return v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
}

#pragma push
#pragma fp_contract off
f32 fn_8025FBAC(f32 *v) {
    f32 sqmag;
    f32 mag;

    sqmag = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    mag = sqrtf(sqmag);
    return mag;
}
#pragma pop
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

s32 fn_8026B9B4(s32 arg0) {
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    s32 enabled;
    s32 prev;

    enabled = fn_8025465C();
    if (*(u8 *)0x800030E3 & 0x40) {
        prev = 1;
    } else {
        prev = 0;
    }
    *(u8 *)0x800030E3 &= ~0x40;
    if (arg0) {
        *(u8 *)0x800030E3 |= 0x40;
    }
    fn_80254684(enabled);
    return prev;
}

s32 fn_8026BA30(s32 arg0) {
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    s32 enabled;
    s32 prev;

    enabled = fn_8025465C();
    if (*(u8 *)0x800030E3 & 0x20) {
        prev = 1;
    } else {
        prev = 0;
    }
    *(u8 *)0x800030E3 &= ~0x20;
    if (arg0) {
        *(u8 *)0x800030E3 |= 0x20;
    }
    fn_80254684(enabled);
    return prev;
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

volatile u16 __DSPRegs[] : 0xCC005000;
void fn_8026BB2C(u32 addr, u32 len) {
    s32 enabled;

    enabled = fn_8025465C();
    __DSPRegs[0x18] = (u16)((__DSPRegs[0x18] & ~0x3FF) | (addr >> 16));
    __DSPRegs[0x19] = (u16)((__DSPRegs[0x19] & ~0xFFE0) | (0xFFFF & addr));
    __DSPRegs[0x1B] = (u16)((__DSPRegs[0x1B] & ~0x7FFF) | (u16)((len >> 5) & 0xFFFF));
    fn_80254684(enabled);
}

s32 fn_8026BBB4(void) {
    return ((u16) *(u16 *)0xCC005036 >> 0xFU) & 1;
}

void fn_8026BBC4(void) {
    extern volatile u16 __DSPRegs[];
    __DSPRegs[0x1B] |= 0x8000;
}

void fn_8026BBDC(void) {
    extern volatile u16 __DSPRegs[];
    __DSPRegs[0x1B] &= ~0x8000;
}

s32 fn_8026BBF4(void) {
    return (*(u16 *)0xCC00503A << 5) & 0xFFFE0;
}

u32 fn_8026BC04(void) {
    extern volatile u16 __DSPRegs[];
    return ((__DSPRegs[0x18] << 16) & 0x03FF0000) | (__DSPRegs[0x19] & 0xFFE0);
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

u32 fn_8026BC7C(void) {
    extern volatile u32 __AIRegs[];
    return __AIRegs[2];
}

void fn_8026BC8C(void) {
    *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFDF) | 0x20;
}

void fn_8026BCA4(s32 arg0) {
    *(s32 *)0xCC006C0C = arg0;
}

u32 fn_8026BCB0(void) {
    extern volatile u32 __AIRegs[];
    return __AIRegs[3];
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

void fn_8026CC4C(u8 odd, u8 even) {
    extern void *__GXData;
    void *gx = __GXData;
    u32 reg;

    reg = 0;
    reg = __rlwimi(reg, even, 0, 31, 31);
    reg = __rlwimi(reg, odd, 1, 30, 30);
    reg = __rlwimi(reg, 0x44, 24, 0, 7);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = reg;
    M2C_FIELD(gx, u16 *, 0x2) = 0;
}

void fn_8026CC84(u8 field_mode, u8 half_aspect_ratio) {
    extern void *__GXData;
    void __GXFlushTextureState(void);
    u32 *gx = __GXData;

    gx[0x7C / 4] = __rlwimi(gx[0x7C / 4], half_aspect_ratio, 22, 9, 9);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = gx[0x7C / 4];
    __GXFlushTextureState();
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = 0x68000000 | field_mode;
    __GXFlushTextureState();
}

#pragma push
#pragma peephole off
void fn_8026CD0C(void) {
    s32 PPCMfhid2();
    void PPCMtwpar(u32);
    void PPCMthid2(s32);
    s32 hid2;

    hid2 = PPCMfhid2();
    PPCMtwpar(0x0C008000);
    hid2 |= 0x40000000;
    PPCMthid2(hid2);
}
#pragma pop

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

void fn_80270DD8(void) {
    extern u16 *const __GXData;
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = 0x63000000;
    __GXData[1] = 0;
}

void fn_80270DFC(u32 a, u8 b) {
    extern volatile u16 *__peReg;
    __peReg[3] = (a << 8) | b;
}

void fn_80270E10(u32 x) {
    extern volatile u16 *__peReg;
    u32 reg = 0;
    reg = __rlwimi(reg, x, 0, 30, 31);
    reg = __rlwimi(reg, 1, 2, 29, 29);
    __peReg[4] = reg;
}

void fn_80270E30(u8 x) {
    extern volatile u16 *__peReg;
    u32 reg = __peReg[1];
    reg = __rlwimi(reg, x, 4, 27, 27);
    __peReg[1] = reg;
}

void fn_80270EAC(u8 x) {
    extern volatile u16 *__peReg;
    u32 reg = __peReg[1];
    reg = __rlwimi(reg, x, 3, 28, 28);
    __peReg[1] = reg;
}

void fn_80270EC4(u8 a, u8 b) {
    extern volatile u16 *__peReg;
    u32 reg = 0;
    reg = __rlwimi(reg, b, 0, 24, 31);
    reg = __rlwimi(reg, a, 8, 23, 23);
    __peReg[2] = reg;
}

void fn_80270EE8(u8 x) {
    extern volatile u16 *__peReg;
    u32 reg = __peReg[1];
    reg = __rlwimi(reg, x, 2, 29, 29);
    __peReg[1] = reg;
}

void fn_80270F00(u8 a, u32 b, u8 c) {
    extern volatile u16 *__peReg;
    u32 reg = 0;
    reg = __rlwimi(reg, a, 0, 31, 31);
    reg = __rlwimi(reg, b, 1, 28, 30);
    reg = __rlwimi(reg, c, 4, 27, 27);
    __peReg[0] = reg;
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

void fn_80271FC0(u8 *color, u32 val) {
    extern void *__GXData;
    void *gx = __GXData;
    u32 reg0;
    u32 reg1;
    u32 reg2;

    reg0 = 0;
    reg0 = __rlwimi(reg0, color[0], 0, 24, 31);
    reg0 = __rlwimi(reg0, color[3], 8, 16, 23);
    reg0 = __rlwimi(reg0, 0x4F, 24, 0, 7);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = reg0;
    reg1 = 0;
    reg1 = __rlwimi(reg1, color[2], 0, 24, 31);
    reg1 = __rlwimi(reg1, color[1], 8, 16, 23);
    reg1 = __rlwimi(reg1, 0x50, 24, 0, 7);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = reg1;
    reg2 = 0;
    reg2 = __rlwimi(reg2, val, 0, 8, 31);
    reg2 = __rlwimi(reg2, 0x51, 24, 0, 7);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = reg2;
    M2C_FIELD(gx, u16 *, 0x2) = 0;
}

void fn_80272240(u32 v) {
    extern void *__GXData;
    u32 *gx = __GXData;
    gx[0x1EC / 4] = __rlwimi(gx[0x1EC / 4], v, 7, 23, 24);
}

void fn_80272548(void) {
    extern void *__GXData;
    void *gx = __GXData;
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = 0x550003FF;
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = 0x560003FF;
    M2C_FIELD(gx, u16 *, 0x2) = 0;
}

void fn_80272580(u16 *a, u16 *b, u16 *c, u16 *d) {
    extern volatile u16 *__peReg;
    *a = __peReg[8];
    *b = __peReg[10];
    *c = __peReg[9];
    *d = __peReg[11];
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

void fn_80273438(void *arg0, u32 arg1) {
    struct { u32 w0, w1, w2; u32 pad : 11; u32 addr : 21; } *p = arg0;
    p->addr = arg1 >> 5;
}

#pragma push
#pragma peephole on
void fn_80273448(u32 *arg0, u32 arg1, u32 arg2) {
    arg0[0] = (arg0[0] & ~3) | (arg1 & 3);
    arg0[0] = (arg0[0] & ~0xC) | ((arg2 << 2) & 0xC);
}
void fn_80273464(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

void fn_8027346C(u32 *arg0, s32 arg1, s32 arg2) {
    extern u8 lbl_80494B28[6];
    arg0[0] = (arg0[0] & ~0x10) | (((arg2 == 1 ? 1 : 0) << 4) & 0x10);
    arg0[0] = (arg0[0] & ~0xE0) | ((lbl_80494B28[arg1] << 5) & 0xE0);
}

void fn_802734A4(u32 *arg0, f32 arg1) {
    extern f32 lbl_804975C8;
    extern f32 lbl_804975CC;
    extern f32 lbl_804975A8;
    if (arg1 < lbl_804975C8) {
        arg1 = lbl_804975C8;
    } else if (arg1 > lbl_804975CC) {
        arg1 = lbl_804975CC;
    }
    arg0[1] = (arg0[1] & ~0xFF00) | (((s32)(lbl_804975A8 * arg1) << 8) & 0xFF00);
}
#pragma pop
void fn_80273598(u32 *obj, u8 v) {
    *obj = __rlwimi(*obj, v, 21, 10, 10);
}

void fn_802735AC(u32 *obj, u8 v) {
    *obj = __rlwimi(*obj, v ? 0 : 1, 8, 23, 23);
}

void fn_802735D0(u32 *obj, u32 v) {
    *obj = __rlwimi(*obj, v, 19, 11, 12);
}

void fn_802735E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

s32 fn_802735E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void fn_802735F0(u32 *obj, u32 *image, u16 *width, u16 *height, u32 *format, u32 *wrapS, u32 *wrapT, u8 *mipmap) {
    *image = (obj[3] & 0x1FFFFF) << 5;
    *width = (obj[2] & 0x3FF) + 1;
    *height = ((obj[2] >> 10) & 0x3FF) + 1;
    *format = obj[5];
    *wrapS = obj[0] & 3;
    *wrapT = (obj[0] >> 2) & 3;
    *mipmap = (((u8 *)obj)[0x1F] & 1) == 1;
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

u8 fn_802736A4(u32 *obj) {
    return (((u8 *)obj)[0x1F] & 1) == 1;
}

u8 fn_802737A0(u32 *arg0) {
    extern u8 lbl_80494B30[8];
    return lbl_80494B30[((u32) *arg0 >> 5U) & 7];
}

s32 fn_802737B4(u32 *arg0) {
    return ((u32) *arg0 >> 4U) & 1;
}

f32 fn_802737C0(void *arg0) {
    extern f32 lbl_804975D0;
    return (f32) (u8) M2C_FIELD(arg0, s32 *, 4) * lbl_804975D0;
}

f32 fn_802737F4(void *arg0) {
    extern f32 lbl_804975D0;
    return (f32) (u8) ((u32) M2C_FIELD(arg0, u32 *, 4) >> 8U) * lbl_804975D0;
}

f32 fn_80273828(u32 *arg0) {
    extern f32 lbl_804975D4;
    return (f32) (s8) (s16) ((u32) *arg0 >> 9U) * lbl_804975D4;
}

s32 fn_80273868(u32 *arg0) {
    return ((u32) *arg0 >> 0x15U) & 1;
}

u8 fn_80273874(u32 *arg0) {
    return !(((u32) *arg0 >> 8U) & 1);
}

s32 fn_80273888(u32 *arg0) {
    return ((u32) *arg0 >> 0x13U) & 3;
}

s32 fn_80273894(s32 *self) {
    return self[6];
}

void fn_80273A18(void *obj, u32 id) {
    extern void *__GXData;
    extern void fn_8027389C(void *obj, void *region, u32 id);
    fn_8027389C(obj, M2C_FIELD(__GXData, void *(**)(void *, u32), 0x4C8)(obj, id), id);
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

void GXInitTlutRegion(u32 *region, u32 tmem_addr, u32 tlut_size) {
    *region = 0;
    *region = __rlwimi(*region, (tmem_addr - 0x80000) >> 9, 0, 22, 31);
    *region = __rlwimi(*region, tlut_size, 10, 11, 21);
    *region = __rlwimi(*region, 0x65, 24, 0, 7);
}

void fn_80273E3C(u32 *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = ((*arg0 << 9) & 0x7FE00) + 0x80000;
    *arg2 = ((u32) *arg0 >> 0xAU) & 0x7FF;
}

void fn_80273F88(void) {
    extern void __GXFlushTextureState(void);
    __GXFlushTextureState();
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = 0x66001000;
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = 0x66001100;
    __GXFlushTextureState();
}

s32 fn_80273FD0(s32 arg0) {
    extern void *__GXData;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(__GXData, s32 *, 0x4C8);
    M2C_FIELD(__GXData, s32 *, 0x4C8) = arg0;
    return temp_r0;
}

s32 fn_80273FE4(s32 arg0) {
    extern void *__GXData;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(__GXData, s32 *, 0x4CC);
    M2C_FIELD(__GXData, s32 *, 0x4CC) = arg0;
    return temp_r0;
}

void fn_8027425C(u32 coord, u8 enable, u32 ss, u32 ts) {
    extern void *__GXData;
    u8 *gx = __GXData;
    u32 *ts0;

    M2C_FIELD(gx, u32 *, 0x594) = (M2C_FIELD(gx, u32 *, 0x594) & ~(1 << coord)) | (enable << coord);
    if (enable) {
        ts0 = (u32 *)(gx + coord * 4);
        ts0[0xB8 / 4] = __rlwimi(ts0[0xB8 / 4], ss - 1, 0, 16, 31);
        ts0[0xD8 / 4] = __rlwimi(ts0[0xD8 / 4], ts - 1, 0, 16, 31);
        *(volatile u8 *)0xCC008000 = 0x61;
        *(volatile u32 *)0xCC008000 = ts0[0xB8 / 4];
        *(volatile u8 *)0xCC008000 = 0x61;
        *(volatile u32 *)0xCC008000 = ts0[0xD8 / 4];
        M2C_FIELD(gx, u16 *, 0x2) = 0;
    }
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

