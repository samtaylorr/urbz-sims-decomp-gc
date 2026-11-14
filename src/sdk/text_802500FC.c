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

typedef struct OSMutex_ {
    s32 queue[2];
    struct OSThread_ *thread;
    s32 count;
    struct OSMutex_ *next;
    struct OSMutex_ *prev;
} OSMutex_;

typedef struct OSThread_ {
    u8 pad[0x2F0];
    OSMutex_ *mutex;
    OSMutex_ *head;
    OSMutex_ *tail;
} OSThread_;

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

u32 fn_8025474C(u32 mask, u32 current);
#pragma push
#pragma dont_inline on
#pragma peephole off
u32 fn_80254AC0(u32 global) {
    s32 enabled;
    u32 prev;
    u32 local;
    u32 mask;

    enabled = fn_8025465C();
    prev = *(u32 *)0x800000C4;
    local = *(u32 *)0x800000C8;
    mask = global & ~(prev | local);
    global |= prev;
    *(u32 *)0x800000C4 = global;
    while (mask) {
        mask = fn_8025474C(mask, global | local);
    }
    fn_80254684(enabled);
    return prev;
}

#pragma push
#pragma dont_inline on
#pragma peephole off
u32 fn_80254B48(u32 global) {
    s32 enabled;
    u32 prev;
    u32 local;
    u32 mask;

    enabled = fn_8025465C();
    prev = *(u32 *)0x800000C4;
    local = *(u32 *)0x800000C8;
    mask = global & (prev | local);
    global = prev & ~global;
    *(u32 *)0x800000C4 = global;
    while (mask) {
        mask = fn_8025474C(mask, global | local);
    }
    fn_80254684(enabled);
    return prev;
}
#pragma pop

#pragma pop

void fn_80254F64(void) {

}

void fn_80254F68(void) {

}

void fn_80254F6C(s32 arg0) {
    *(s32 *)0x800030D0 = arg0;
}

BOOL fn_80255234(OSModuleInfo *newModule, void *bss, BOOL fixed);
BOOL fn_80255514(OSModuleInfo *newModule, void *bss) {
    return fn_80255234(newModule, bss, FALSE);
}

BOOL fn_80255538(OSModuleInfo *newModule, void *bss) {
    if (M2C_FIELD(newModule, u32 *, 0x1C) > 3 || M2C_FIELD(newModule, u32 *, 0x1C) < 3) {
        return FALSE;
    }
    return fn_80255234(newModule, bss, TRUE);
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

typedef struct SramControlBlock {
    u8 sram[64];
    u32 offset;
    s32 enabled;
    s32 locked;
} SramControlBlock;

static inline u8 *LockSram(u32 offset) {
    extern SramControlBlock lbl_80440C00;
    SramControlBlock *scb = &lbl_80440C00;
    s32 enabled;

    enabled = fn_8025465C();
    if (scb->locked != 0) {
        fn_80254684(enabled);
        return NULL;
    }
    scb->enabled = enabled;
    scb->locked = 1;
    return scb->sram + offset;
}

void fn_8025810C(s32 chan, u16 id) {
    extern SramControlBlock lbl_80440C00;
    s32 fn_802572CC(s32, s32);
    SramControlBlock *scb;
    u8 *sram;
    s32 enabled;
    s32 *locked;
    u16 *p;
    u8 pad[4];

    scb = &lbl_80440C00;
    enabled = fn_8025465C();
    locked = &scb->locked;
    if (*locked != 0) {
        fn_80254684(enabled);
        sram = NULL;
    } else {
        scb->enabled = enabled;
        *locked = 1;
        sram = scb->sram + 0x14;
    }
    p = &((u16 *)(sram + 0x1C))[chan];
    if (*p != id) {
        *p = id;
        fn_802572CC(1, 0x14);
        return;
    }
    fn_802572CC(0, 0x14);
}

u16 fn_802581B8(void) {
    extern SramControlBlock lbl_80440C00;
    s32 fn_802572CC(s32, s32);
    SramControlBlock *scb;
    u8 *sram;
    s32 enabled;
    s32 *locked;
    u16 id;
    u8 pad[8];

    scb = &lbl_80440C00;
    enabled = fn_8025465C();
    locked = &scb->locked;
    if (*locked != 0) {
        fn_80254684(enabled);
        sram = NULL;
    } else {
        scb->enabled = enabled;
        *locked = 1;
        sram = scb->sram + 0x14;
    }
    id = *(u16 *)(sram + 0x28);
    fn_802572CC(0, 0x14);
    return id;
}

void fn_80258228(u16 mode) {
    extern SramControlBlock lbl_80440C00;
    s32 fn_802572CC(s32, s32);
    SramControlBlock *scb;
    u8 *sram;
    s32 enabled;
    s32 *locked;
    u8 pad[8];

    scb = &lbl_80440C00;
    if ((u32)(mode & 0x7C00) == 0x5000 || (u32)(mode & 0xC0) == 0xC0) {
        mode = 0;
    }
    enabled = fn_8025465C();
    locked = &scb->locked;
    if (*locked != 0) {
        fn_80254684(enabled);
        sram = NULL;
    } else {
        scb->enabled = enabled;
        *locked = 1;
        sram = scb->sram + 0x14;
    }
    if (mode == *(u16 *)(sram + 0x28)) {
        fn_802572CC(0, 0x14);
        return;
    }
    *(u16 *)(sram + 0x28) = mode;
    fn_802572CC(1, 0x14);
}

void fn_80258300(void) {
    void fn_802582E0(void);
    void *fn_802482F8(void *, void *, u32);
    void fn_80251C7C(void *, u32);
    void fn_80251D2C(void *, u32);
    void *addr;

    addr = (void *)0x80000C00;
    fn_802482F8(addr, (void *)fn_802582E0, (u8 *)fn_802582E0 + 0x1C - (u8 *)fn_802582E0);
    fn_80251C7C(addr, 0x100);
    __sync();
    fn_80251D2C(addr, 0x100);
}

void fn_80258364(void) {

}

void *fn_80258368(void *cb) {
    extern void *lbl_804949C0;
    s32 enabled;
    void *prev;

    enabled = fn_8025465C();
    prev = lbl_804949C0;
    lbl_804949C0 = cb ? cb : (void *)fn_80258364;
    fn_80254684(enabled);
    if (prev == (void *)fn_80258364) {
        return NULL;
    }
    return prev;
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

extern u8 lbl_80440C58[];
extern u8 lbl_80440D58[];
s32 fn_80258CEC(void *, void *, void *, void *, u32, s32, u16);
s32 fn_80259354(void *);
void fn_80258FB8(void *);
void *fn_80259A04(void *func, void *param, void *stack, u32 stackSize) {
    u8 *base = lbl_80440C58;
    if (func != NULL) {
        if (M2C_FIELD(base + 0x100, u16 *, 0x2c8) == 0) {
            fn_80258CEC(base + 0x100, func, param, stack, stackSize, 31, 1);
            fn_80259354(base + 0x100);
            return base + 0x100;
        }
    } else if (M2C_FIELD(base + 0x100, u16 *, 0x2c8) != 0) {
        fn_80258FB8(base + 0x100);
    }
    return NULL;
}

void *fn_80259A94(void) {
    if (M2C_FIELD(lbl_80440D58, u16 *, 0x2c8) == 0) {
        return NULL;
    }
    return lbl_80440D58;
}

BOOL fn_80259AB0(u8 **queue) {
    u8 *t;

    if (queue[0] != NULL && M2C_FIELD(queue[0], u8 **, 0x2e4) != NULL) {
        return FALSE;
    }
    if (queue[1] != NULL && M2C_FIELD(queue[1], u8 **, 0x2e0) != NULL) {
        return FALSE;
    }
    for (t = queue[0]; t != NULL; t = M2C_FIELD(t, u8 **, 0x2e0)) {
        if (M2C_FIELD(t, u8 **, 0x2e0) != NULL && t != M2C_FIELD(M2C_FIELD(t, u8 **, 0x2e0), u8 **, 0x2e4)) {
            return FALSE;
        }
        if (M2C_FIELD(t, u8 **, 0x2e4) != NULL && t != M2C_FIELD(M2C_FIELD(t, u8 **, 0x2e4), u8 **, 0x2e0)) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL fn_80259B4C(u8 **queue, u8 *thread) {
    u8 *t;

    for (t = queue[0]; t != NULL; t = M2C_FIELD(t, u8 **, 0x2e0)) {
        if (thread == t) {
            return TRUE;
        }
    }
    return FALSE;
}

void fn_8025A2C8(u8 val) {
    u32 fn_80252A64(void);
    u32 sp;
    u32 *p;
    u32 pattern;

    pattern = ((u32)val << 24) | ((u32)val << 16) | ((u32)val << 8) | (u32)val;
    sp = fn_80252A64();
    for (p = M2C_FIELD(*(u8 **)0x800000E4, u32 **, 0x308) + 1; p < (u32 *)sp; p++) {
        *p = pattern;
    }
}

void fn_8025A374(s32 index, void *ptr) {
    struct { u8 pad[0x310]; void *specific[2]; } *thread = *(void **)0x800000E4;

    if (thread != NULL && 0 <= index && index < 2) {
        thread->specific[index] = ptr;
    }
}

void *fn_8025A3A4(s32 index) {
    struct { u8 pad[0x310]; void *specific[2]; } *thread = *(void **)0x800000E4;

    if (thread != NULL && 0 <= index && index < 2) {
        return thread->specific[index];
    }
    return NULL;
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

s64 fn_8025A494(void) {
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    s64 fn_8025A3DC(void);
    s32 enabled;
    s64 *timeAdjustAddr = (s64 *)((u32)0x30D8 + 0x80000000);
    s64 result;

    enabled = fn_8025465C();
    result = *timeAdjustAddr + fn_8025A3DC();
    fn_80254684(enabled);
    return result;
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

BOOL fn_8025B100(OSMutex_ *mutex) {
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    OSThread_ *fn_80258544(void);
    s32 enabled;
    OSThread_ *current;
    BOOL locked;

    enabled = fn_8025465C();
    current = fn_80258544();
    if (mutex->thread == NULL) {
        OSMutex_ *prev;
        mutex->thread = current;
        mutex->count++;
        prev = current->tail;
        if (prev == NULL) {
            current->head = mutex;
        } else {
            prev->next = mutex;
        }
        mutex->prev = prev;
        mutex->next = NULL;
        current->tail = mutex;
        locked = TRUE;
    } else if (mutex->thread == current) {
        mutex->count++;
        locked = TRUE;
    } else {
        locked = FALSE;
    }
    fn_80254684(enabled);
    return locked;
}

void fn_8025B1BC(void) {
    M2C_UNK fn_80258534();
    fn_80258534();
}

void fn_8025B2B0(void) {
    M2C_UNK fn_80259838();
    fn_80259838();
}

BOOL fn_8025B2D0(OSMutex_ **queue, OSMutex_ *mutex) {
    OSMutex_ *member;

    for (member = queue[0]; member != NULL; member = member->next) {
        if (mutex == member) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL fn_8025B3FC(OSThread_ *thread) {
    OSMutex_ *mutex = thread->mutex;

    while (mutex && mutex->thread) {
        if (mutex->thread == thread) {
            return TRUE;
        }
        mutex = mutex->thread->mutex;
    }
    return FALSE;
}

BOOL fn_8025B434(OSThread_ *thread) {
    BOOL fn_8025B2FC(OSMutex_ *);
    OSMutex_ *mutex;

    for (mutex = thread->head; mutex; mutex = mutex->next) {
        if (mutex->thread != thread) {
            return FALSE;
        }
        if (!fn_8025B2FC(mutex)) {
            return FALSE;
        }
    }
    return TRUE;
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

s32 fn_8025DAB8(void) {
    typedef struct { s32 chan; u32 poll; u32 inputBytes; void *input; void *callback; } SIControl;
    extern SIControl lbl_803F9124;
    return lbl_803F9124.chan != -1 ? 1 : 0;
}

s32 fn_8025DAD8(s32 chan) {
    typedef struct { s32 chan; u32 poll; u32 inputBytes; void *input; void *callback; } SIControl;
    typedef struct { s32 chan; u8 pad[0x1C]; } SIPacket;
    extern SIControl lbl_803F9124;
    extern SIPacket lbl_80441710[];
    return lbl_80441710[chan].chan != -1 || lbl_803F9124.chan == chan;
}

void fn_8025DB14(void) {
    __SIRegs[13] = (__SIRegs[13] | 0x80000000) & ~1;
}

s32 fn_8025E260(s32 enable) {
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    extern u8 lbl_80441710[];
    u8 *si = lbl_80441710;
    s32 enabled;
    u32 reg;
    s32 rc;
    s32 i;

    enabled = fn_8025465C();
    reg = __SIRegs[13];
    if (reg & 0x08000000) {
        rc = 1;
    } else {
        rc = 0;
    }
    if (enable) {
        reg |= 0x08000000;
        for (i = 0; i < 4; i++) {
            ((s32 *)(si + 0x1E0))[i] = 0;
        }
    } else {
        reg &= ~0x08000000;
    }
    reg &= ~(0x80000000 | 1);
    __SIRegs[13] = reg;
    fn_80254684(enabled);
    return rc;
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

void fn_8025F9A4(f32 *a, f32 *b, f32 *ab) {
    f32 v0, v1, s;
    v0 = __psq_l(a, 0, 0, 0);
    v1 = __psq_l(b, 0, 0, 0);
    s = __ps_add(v0, v1);
    __psq_st(ab, s, 0, 0, 0);
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
    f32 mag = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    return mag;
}
#pragma pop

#pragma push
#pragma fp_contract off
f32 fn_8025FC84(f32 *a, f32 *b) {
    return a[2] * b[2] + (a[0] * b[0] + a[1] * b[1]);
}
#pragma push
#pragma fp_contract off
void fn_8025FCD4(f32 *a, f32 *b, f32 *axb) {
    f32 x = a[1] * b[2] - a[2] * b[1];
    f32 y = a[2] * b[0] - a[0] * b[2];
    f32 z = a[0] * b[1] - a[1] * b[0];
    axb[0] = x;
    axb[1] = y;
    axb[2] = z;
}

f32 fn_8025FF08(f32 *a, f32 *b) {
    f32 dx = a[0] - b[0];
    f32 dy = a[1] - b[1];
    f32 dz = a[2] - b[2];
    return dz * dz + (dx * dx + dy * dy);
}

#pragma push
#pragma peephole off
f32 fn_8025FF6C(f32 *a, f32 *b) {
    f32 diff[3];
    diff[0] = a[0] - b[0];
    diff[1] = a[1] - b[1];
    diff[2] = a[2] - b[2];
    return fn_8025FBAC(diff);
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
s32 fn_802664BC(void (*)(void));
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
        *(volatile u32 *)&lbl_80495EF0 = 0;
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

void fn_80261940(u32 arg0) {
    extern void fn_802652F4(u32);
    extern void fn_80264274(void);
    extern void fn_80261458(s32);
    extern void fn_80266548(void (*)(void));
    extern void fn_8026199C(void);
    extern void fn_80261A1C(void);

    if (arg0 == 0x10) {
        fn_802652F4(0x01234568);
        fn_80264274();
        fn_80261458(0);
        return;
    }
    if (arg0 & 1) {
        fn_80261A1C();
        return;
    }
    fn_80266548(fn_8026199C);
}

volatile u32 __DIRegs[] : 0xCC006000;
void fn_8026199C(u32 arg0) {
    extern void fn_802652F4(u32);
    extern void fn_80264274(void);
    extern void fn_80261458(s32);
    extern s32 fn_802664BC(void (*)(s32));

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

void fn_80262030(void) {
    extern void fn_80264274(void);
    extern void fn_80251BF0(void *, u32);
    extern void fn_80262140(DVDCommandBlock *);
    extern u8 lbl_80442940[];
    extern void (*lbl_80495F24)(DVDCommandBlock *);
    fn_80264274();
    fn_80251BF0(lbl_80442940, 0x20);
    lbl_80495F24 = fn_80262140;
    fn_80262140(lbl_80495ED0);
}

void fn_80262140(DVDCommandBlock *block) {
    extern s32 fn_80266418(void *diskID, void (*cb)(s32));
    extern u8 lbl_80442940[];
    extern void fn_80262170(u32);
    fn_80266418(lbl_80442940, (void (*)(s32))fn_80262170);
}

void fn_80262170(u32 arg0) {
    extern void fn_802652F4(u32);
    extern void fn_80264274(void);
    extern void fn_80261458(s32);
    extern void fn_80266548(void (*)(void));
    extern void fn_802616DC(void);
    extern void fn_80261B84(void);
    extern s32 lbl_80495F04;

    if (arg0 == 0x10) {
        fn_802652F4(0x01234568);
        fn_80264274();
        fn_80261458(0);
        return;
    }
    if (arg0 & 1) {
        lbl_80495F04 = 0;
        fn_80261B84();
        return;
    }
    fn_80266548(fn_802616DC);
}

void fn_802621FC(void);
s32 fn_802663EC(void (*)(void));
void fn_802621D4(void) {
    fn_802663EC(fn_802621FC);
}

void fn_80262828(u32 arg0) {
    extern u32 lbl_803F9760[];
    extern s32 lbl_80495F1C;
    lbl_803F9760[lbl_80495F1C++] = arg0;
}

void fn_8026284C(u32 arg0) {
    extern u32 lbl_80494A3C;
    extern s32 lbl_80495F20;
    (&lbl_80494A3C)[lbl_80495F20++] = arg0;
}

s32 fn_80262868(u32 arg0) {
    extern u32 lbl_803F9760[];
    s32 i;
    if ((u32)(arg0 - 9) <= 3U) {
        return 1;
    }
    for (i = 0; i < 3; i++) {
        if (arg0 == lbl_803F9760[i]) {
            return 1;
        }
    }
    return 0;
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

#pragma push
#pragma dont_inline on
s32 fn_80266358(u32 offset, void (*cb)(s32)) {
    extern void (*lbl_80495F48)(s32);
    extern s32 lbl_80495F40;
    extern u8 lbl_80442AB0[];
    void fn_80251224(void *, s64, void *);
    void fn_80265CC4(void *, void *);
    u32 timeout;

    lbl_80495F48 = cb;
    lbl_80495F40 = 0;
    __DIRegs[2] = 0xAB000000;
    __DIRegs[3] = offset >> 2;
    __DIRegs[7] = 1;
    timeout = (*(u32 *)0x800000F8 / 4) * 10;
    fn_80250FC4(lbl_80442AB0);
    fn_80251224(lbl_80442AB0, timeout, fn_80265CC4);
    return 1;
}
#pragma pop

s32 fn_802663EC(void (*cb)(void)) {
    extern void (*lbl_80495F48)(void);
    extern s32 lbl_80495F40;
    extern s32 lbl_80495F5C;

    lbl_80495F48 = cb;
    lbl_80495F5C = 1;
    lbl_80495F40 = 0;
    __DIRegs[1] = 2;
    return 1;
}

#pragma push
#pragma dont_inline on
s32 fn_80266418(void *diskID, void (*cb)(s32)) {
    extern void (*lbl_80495F48)(s32);
    extern s32 lbl_80495F40;
    extern u8 lbl_80442AB0[];
    void fn_80251224(void *, s64, void *);
    void fn_80265CC4(void *, void *);
    u32 timeout;

    lbl_80495F48 = cb;
    lbl_80495F40 = 0;
    __DIRegs[2] = 0xA8000040;
    __DIRegs[3] = 0;
    __DIRegs[4] = 0x20;
    __DIRegs[5] = (u32)diskID;
    __DIRegs[6] = 0x20;
    __DIRegs[7] = 3;
    timeout = (*(u32 *)0x800000F8 / 4) * 10;
    fn_80250FC4(lbl_80442AB0);
    fn_80251224(lbl_80442AB0, timeout, fn_80265CC4);
    return 1;
}

s32 fn_802664BC(void (*cb)(void)) {
    extern void (*lbl_80495F48)(void);
    extern s32 lbl_80495F40;
    extern u8 lbl_80442AB0[];
    void fn_80251224(void *, s64, void *);
    void fn_80265CC4(void *, void *);
    u32 timeout;

    lbl_80495F48 = cb;
    lbl_80495F40 = 0;
    __DIRegs[2] = 0xE3000000;
    __DIRegs[7] = 1;
    timeout = (*(u32 *)0x800000F8 / 4) * 10;
    fn_80250FC4(lbl_80442AB0);
    fn_80251224(lbl_80442AB0, timeout, fn_80265CC4);
    return 1;
}
#pragma pop

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

void fn_802698E8(u32 hct, u32 vct, s16 *x, s16 *y);
volatile u16 __VIRegs[] : 0xCC002000;

static void GetCurrentDisplayPosition(u32 *hct, u32 *vct) {
    u32 hcount, vcount0, vcount;

    vcount = __VIRegs[0x16] & 0x7FF;
    do {
        vcount0 = vcount;
        hcount = __VIRegs[0x17] & 0x7FF;
        vcount = __VIRegs[0x16] & 0x7FF;
    } while (vcount0 != vcount);
    *hct = hcount;
    *vct = vcount;
}

void fn_802696D0(s16 *arg0, s16 *arg1) {
    extern s16 lbl_80495FAC;
    extern s16 lbl_80495FAE;
    fn_8025465C();
    *arg0 = lbl_80495FAC;
    *arg1 = lbl_80495FAE;
    fn_80254684();
}

void fn_80269B04(s16 *x, s16 *y) {
    u32 hct, vct;

    GetCurrentDisplayPosition(&hct, &vct);
    fn_802698E8(hct, vct, x, y);
}

void fn_80269B64(u32 arg0) {
    u32 reg;

    reg = __VIRegs[1];
    reg = (reg & ~0x30) | (arg0 << 4);
    reg = (reg & ~0xC0) | (arg0 << 6);
    __VIRegs[1] = reg;
}

s32 fn_80269B90(s16 *x, s16 *y) {
    u32 hcount, vcount;

    if (__VIRegs[0x20] >> 15 & 1) {
        vcount = __VIRegs[0x20] & 0x7FF;
        hcount = __VIRegs[0x21] & 0x7FF;
        __VIRegs[0x20] = 0;
        __VIRegs[0x21] = 0;
        fn_802698E8(hcount, vcount, x, y);
        return 1;
    }
    *x = *y = -1;
    return 0;
}

s32 fn_80269C04(s16 *x, s16 *y) {
    u32 hcount, vcount;

    if (__VIRegs[0x22] >> 15 & 1) {
        vcount = __VIRegs[0x22] & 0x7FF;
        hcount = __VIRegs[0x23] & 0x7FF;
        __VIRegs[0x22] = 0;
        __VIRegs[0x23] = 0;
        fn_802698E8(hcount, vcount, x, y);
        return 1;
    }
    *x = *y = -1;
    return 0;
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

#pragma dont_inline on
void fn_8026AE04(s32 chan, u32 mode) {
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    u32 fn_8025F148(s32);
    extern u32 lbl_80495FEC;
    extern u32 lbl_80494AC0;
    extern u32 lbl_80494ABC;
    s32 enabled;
    u32 chanBit;

    enabled = fn_8025465C();
    chanBit = 0x80000000 >> chan;
    if ((lbl_80495FEC & chanBit) && !(fn_8025F148(chan) & 0x20000000)) {
        if (lbl_80494AC0 < 2 && mode == 2) {
            mode = 0;
        }
        if (*(u8 *)0x800030E3 & 0x20) {
            mode = 0;
        }
        fn_8025E8FC(chan, lbl_80494ABC | 0x400000 | (mode & 3));
        fn_8025E924();
    }
    fn_80254684(enabled);
}
#pragma dont_inline reset
void fn_8026AEBC(u32 type) {
    extern s32 lbl_80496014;
    extern void *lbl_80494AC4;
    extern u32 lbl_80494AC0;
    void fn_8026AF24();
    void fn_8026B098();
    void fn_8026B27C();

    lbl_80496014 = 0;
    switch (type) {
    case 0:
        lbl_80494AC4 = fn_8026AF24;
        break;
    case 1:
        lbl_80494AC4 = fn_8026B098;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        lbl_80494AC4 = fn_8026B27C;
        break;
    }
    lbl_80494AC0 = type;
}

extern s32 lbl_80494AC0;
s32 fn_8026AF1C(void) {
    return lbl_80494AC0;
}

s8 fn_8026B20C(s8 x, s8 min) {
    s8 m;

    if (min > 0) {
        m = min - 128;
        if (x < m) {
            x = m;
        }
    } else if (min < 0) {
        m = min + 127;
        if (m < x) {
            x = m;
        }
    }
    return x - min;
}

u8 fn_8026B260(u8 x, u8 min) {
    if (x < min) {
        x = min;
    }
    return x - min;
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

static inline s32 PADSync(void) {
    extern u32 lbl_80495FF0;
    extern s32 lbl_80494AB4;
    extern s32 fn_8025DAB8(void);
    s32 sync = lbl_80495FF0 == 0 && lbl_80494AB4 == 0x20 && !fn_8025DAB8();
    return sync;
}

s32 fn_8026B838(s32 final) {
    extern void *lbl_8049600C;
    extern s32 lbl_80496010;
    extern s32 fn_8026A7B4(u32);
    extern void *fn_8026B960(void *);
    s32 sync;

    if (lbl_8049600C != NULL) {
        fn_8026B960(NULL);
    }
    if (!final) {
        sync = PADSync();
        if (!lbl_80496010 && sync) {
            lbl_80496010 = fn_8026A7B4(0xF0000000);
            return 0;
        }
        return sync;
    } else {
        lbl_80496010 = 0;
    }
    return 1;
}

void fn_8026B8F4(void) {
    extern s32 lbl_80494AB8;
    lbl_80494AB8 = 0;
}

void fn_8026B900(s16 interrupt, void *context) {
    void fn_80252AAC(void *);
    void fn_802528A4(void *);
    extern void (*lbl_8049600C)(void);
    u8 ctx[0x2C8];

    if (lbl_8049600C != NULL) {
        fn_80252AAC(ctx);
        fn_802528A4(ctx);
        lbl_8049600C();
        fn_80252AAC(ctx);
        fn_802528A4(context);
    }
}

void *fn_8026B960(void *cb) {
    extern void *lbl_8049600C;
    extern void fn_8025E2F8(void (*)(s16, void *));
    extern void fn_8025E3C4(void (*)(s16, void *));
    extern void fn_8026B900(s16, void *);
    void *old;

    old = lbl_8049600C;
    lbl_8049600C = cb;
    if (cb != NULL) {
        fn_8025E2F8(fn_8026B900);
    } else {
        fn_8025E3C4(fn_8026B900);
    }
    return old;
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

volatile u32 __AIRegs[] : 0xCC006C00;

void fn_8026BFC8(u8 vol) {
    __AIRegs[1] = (__AIRegs[1] & ~0xFF) | vol;
}

u8 fn_8026BFE4(void) {
    return (u8) *(s32 *)0xCC006C04;
}

void fn_8026BFF4(u8 vol) {
    __AIRegs[1] = (__AIRegs[1] & ~0xFF00) | (vol << 8);
}

u8 fn_8026C010(void) {
    return (u8) ((u32) *(u32 *)0xCC006C04 >> 8U);
}

void fn_8026C18C(void) {
    extern s32 lbl_80496028;
    lbl_80496028 = 0;
}

void fn_8026C198(s16 interrupt, void *context) {
    void fn_80252AAC(void *);
    void fn_802528A4(void *);
    extern void (*lbl_80496018)(u32);
    u8 exceptionContext[0x2C8];

    __AIRegs[0] |= 8;
    fn_80252AAC(exceptionContext);
    fn_802528A4(exceptionContext);
    if (lbl_80496018) {
        lbl_80496018(__AIRegs[2]);
    }
    fn_80252AAC(exceptionContext);
    fn_802528A4(context);
}

void fn_8026C2C0(void (*callback)(void));

void fn_8026C214(s16 interrupt, void *context) {
    void fn_80252AAC(void *);
    void fn_802528A4(void *);
    extern void (*lbl_8049601C)(void);
    extern void *lbl_80496020;
    extern s32 lbl_8049602C;
    u8 exceptionContext[0x2C8];
    u16 tmp;

    tmp = __DSPRegs[5];
    __DSPRegs[5] = (tmp & ~0xA0) | 8;
    fn_80252AAC(exceptionContext);
    fn_802528A4(exceptionContext);
    if (lbl_8049601C && !lbl_8049602C) {
        lbl_8049602C = 1;
        if (lbl_80496020) {
            fn_8026C2C0(lbl_8049601C);
        } else {
            lbl_8049601C();
        }
        lbl_8049602C = 0;
    }
    fn_80252AAC(exceptionContext);
    fn_802528A4(context);
}

s32 fn_8026C4FC(void) {
    return 0;
}

void fn_8026C9FC(u32 type, u32 src, u32 dst, u32 op) {
    extern void *__GXData;
    u32 *gx = __GXData;
    u32 reg;

    reg = gx[0x1D0 / 4];
    reg = __rlwimi(reg, (type == 3), 11, 20, 20);
    reg = __rlwimi(reg, type, 0, 31, 31);
    reg = __rlwimi(reg, (type == 2), 1, 30, 30);
    reg = __rlwimi(reg, op, 12, 16, 19);
    reg = __rlwimi(reg, src, 8, 21, 23);
    reg = __rlwimi(reg, dst, 5, 24, 26);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = reg;
    gx[0x1D0 / 4] = reg;
    ((u16 *)gx)[1] = 0;
}

void fn_8026CA50(u8 enable) {
    extern void *__GXData;
    u32 *gx = __GXData;
    u32 reg;

    reg = gx[0x1D0 / 4];
    reg = __rlwimi(reg, enable, 3, 28, 28);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = reg;
    gx[0x1D0 / 4] = reg;
    ((u16 *)gx)[1] = 0;
}

void fn_8026CA7C(u8 enable) {
    extern void *__GXData;
    u32 *gx = __GXData;
    u32 reg;

    reg = gx[0x1D0 / 4];
    reg = __rlwimi(reg, enable, 4, 27, 27);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = reg;
    gx[0x1D0 / 4] = reg;
    ((u16 *)gx)[1] = 0;
}

void fn_8026CAA8(u8 enable, u32 func, u8 update) {
    extern void *__GXData;
    u32 *gx = __GXData;
    u32 reg;

    reg = gx[0x1D8 / 4];
    reg = __rlwimi(reg, enable, 0, 31, 31);
    reg = __rlwimi(reg, func, 1, 28, 30);
    reg = __rlwimi(reg, update, 4, 27, 27);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = reg;
    gx[0x1D8 / 4] = reg;
    ((u16 *)gx)[1] = 0;
}

void fn_8026CADC(u8 before_tex) {
    extern void *__GXData;
    u32 *gx = __GXData;

    gx[0x1DC / 4] = __rlwimi(gx[0x1DC / 4], before_tex, 6, 25, 25);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = gx[0x1DC / 4];
    ((u16 *)gx)[1] = 0;
}

void fn_8026CBE4(u8 dither) {
    extern void *__GXData;
    u32 *gx = __GXData;
    u32 reg;

    reg = gx[0x1D0 / 4];
    reg = __rlwimi(reg, dither, 2, 29, 29);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = reg;
    gx[0x1D0 / 4] = reg;
    ((u16 *)gx)[1] = 0;
}

void fn_8026CC10(u8 enable, u8 alpha) {
    extern void *__GXData;
    u32 *gx = __GXData;
    u32 reg;

    reg = gx[0x1D4 / 4];
    reg = __rlwimi(reg, alpha, 0, 24, 31);
    reg = __rlwimi(reg, enable, 8, 23, 23);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = reg;
    gx[0x1D4 / 4] = reg;
    ((u16 *)gx)[1] = 0;
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

#pragma push
#pragma peephole off
void *fn_8026CE70(u32 id) {
    extern u8 *__GXData;

    if (id >= 20) {
        return NULL;
    }
    return __GXData + 0x388 + id * 16;
}
#pragma pop
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

void fn_8026E7C0(void *fifo) {
    extern volatile u16 *__cpReg;

    M2C_FIELD(fifo, u32 *, 0x14) = ((__cpReg[0x1D] << 16) | __cpReg[0x1C]) + 0x80000000;
    M2C_FIELD(fifo, u32 *, 0x1C) = (__cpReg[0x19] << 16) | __cpReg[0x18];
}

void fn_8026E7F0(u8 *overhi, u8 *underlow, u8 *readIdle, u8 *cmdIdle, u8 *brkpt) {
    extern volatile u16 *__cpReg;
    extern void *__GXData;
    u32 *gx = __GXData;

    gx[3] = __cpReg[0];
    *overhi = gx[3] & 1;
    *underlow = (gx[3] >> 1) & 1;
    *readIdle = (gx[3] >> 2) & 1;
    *cmdIdle = (gx[3] >> 3) & 1;
    *brkpt = (gx[3] >> 4) & 1;
}

void fn_8026E954(void *fifo, u32 *readPtr, u32 *writePtr) {
    extern void *lbl_80496090;
    extern void *lbl_80496094;
    extern volatile u32 *__piReg;
    extern volatile u16 *__cpReg;

    if (fifo == lbl_80496090) {
        M2C_FIELD(fifo, u32 *, 0x18) = (__piReg[5] & 0xFBFFFFFF) + 0x80000000;
    }
    if (fifo == lbl_80496094) {
        M2C_FIELD(fifo, u32 *, 0x14) = ((__cpReg[0x1D] << 16) | __cpReg[0x1C]) + 0x80000000;
        M2C_FIELD(fifo, u32 *, 0x1C) = (__cpReg[0x19] << 16) | __cpReg[0x18];
    } else {
        M2C_FIELD(fifo, s32 *, 0x1C) = M2C_FIELD(fifo, s32 *, 0x18) - M2C_FIELD(fifo, s32 *, 0x14);
        if (M2C_FIELD(fifo, s32 *, 0x1C) < 0) {
            M2C_FIELD(fifo, s32 *, 0x1C) += M2C_FIELD(fifo, s32 *, 0x8);
        }
    }
    *readPtr = M2C_FIELD(fifo, u32 *, 0x14);
    *writePtr = M2C_FIELD(fifo, u32 *, 0x18);
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

void fn_8026EA54(u32 breakPt) {
    extern volatile u16 *__cpReg;
    extern void *__GXData;
    extern u32 lbl_804960AC;
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    void fn_8026EBA4(void);
    void fn_8026EB80(void);
    u32 *gx;
    s32 enabled;

    enabled = fn_8025465C();
    fn_8026EBA4();
    __cpReg[0x1E] = breakPt;
    __cpReg[0x1F] = (breakPt >> 16) & 0x3FFF;
    gx = __GXData;
    gx[2] = __rlwimi(gx[2], 1, 1, 30, 30);
    gx[2] = __rlwimi(gx[2], 1, 5, 26, 26);
    __cpReg[1] = gx[2];
    lbl_804960AC = breakPt;
    fn_8026EB80();
    fn_80254684(enabled);
}

void fn_8026EAE0(void) {
    extern void *__GXData;
    extern volatile u16 *__cpReg;
    extern s32 lbl_804960AC;
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    s32 enabled;
    u32 *gx;

    enabled = fn_8025465C();
    gx = __GXData;
    gx[2] = __rlwimi(gx[2], 0, 1, 30, 30);
    gx[2] = __rlwimi(gx[2], 0, 5, 26, 26);
    __cpReg[1] = gx[2];
    lbl_804960AC = 0;
    fn_80254684(enabled);
}

void __GXFifoInit(void) {
    extern void fn_8026E208();
    M2C_UNK fn_802546A8(s32, void *);
    M2C_UNK fn_80254B48(s32);
    s32 fn_80258544(void);
    extern s32 lbl_80496098;
    extern s32 lbl_804960A0;
    extern s32 lbl_80496090;
    extern s32 lbl_80496094;

    fn_802546A8(0x11, fn_8026E208);
    fn_80254B48(0x4000);
    lbl_80496098 = fn_80258544();
    lbl_804960A0 = 0;
    lbl_80496090 = 0;
    lbl_80496094 = 0;
}

void fn_8026EB80(void) {
    extern void *__GXData;
    extern volatile u16 *__cpReg;
    u32 *gx = __GXData;

    gx[2] = __rlwimi(gx[2], 1, 0, 31, 31);
    __cpReg[1] = gx[2];
}

void fn_8026EBA4(void) {
    extern void *__GXData;
    extern volatile u16 *__cpReg;
    u32 *gx = __GXData;

    gx[2] = __rlwimi(gx[2], 0, 0, 31, 31);
    __cpReg[1] = gx[2];
}

void fn_8026EBC8(u8 en) {
    extern void *__GXData;
    extern volatile u16 *__cpReg;
    u32 v;
    u32 *gx;

    if (en) {
        v = 1;
    } else {
        v = 0;
    }
    gx = __GXData;
    gx[2] = __rlwimi(gx[2], v, 4, 27, 27);
    __cpReg[1] = gx[2];
}

void fn_8026EBFC(u8 hiWatermarkEn, u8 loWatermarkEn) {
    extern void *__GXData;
    extern volatile u16 *__cpReg;
    u32 *gx = __GXData;

    gx[2] = __rlwimi(gx[2], hiWatermarkEn, 2, 29, 29);
    gx[2] = __rlwimi(gx[2], loWatermarkEn, 3, 28, 28);
    __cpReg[1] = gx[2];
}

void fn_8026EC2C(u8 hiWatermarkClr, u8 loWatermarkClr) {
    extern void *__GXData;
    extern volatile u16 *__cpReg;
    u32 *gx = __GXData;

    gx[4] = __rlwimi(gx[4], hiWatermarkClr, 0, 31, 31);
    gx[4] = __rlwimi(gx[4], loWatermarkClr, 1, 30, 30);
    __cpReg[2] = gx[4];
}

void fn_8026EC5C(void) {
    extern s32 lbl_80496094;
    extern volatile u16 *__cpReg;
    u8 *fifo = (u8 *)lbl_80496094;

    M2C_FIELD(fifo, u32 *, 0xC) = M2C_FIELD(fifo, u32 *, 0x10) + 0x200;
    __cpReg[0x14] = M2C_FIELD(fifo, u32 *, 0xC);
    __cpReg[0x15] = M2C_FIELD(fifo, u32 *, 0xC) >> 16 & 0x3FFF;
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

volatile union {
    u8 u8;
    u16 u16;
    u32 u32;
    f32 f32;
} GXWGFifo : 0xCC008000;

extern volatile u8 lbl_804960B8;
extern u8 lbl_804960BC[8];
void fn_80270C50(void) {
    extern u8 *const __GXData;
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    void fn_802713FC(void);
    void fn_8024FFA8(void);
    s32 level;
    u32 reg;

    level = fn_8025465C();
    reg = 0x45000002;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    if (*(u32 *)(__GXData + 0x5AC)) {
        fn_802713FC();
    }
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    GXWGFifo.u32 = 0;
    fn_8024FFA8();
    lbl_804960B8 = 0;
    fn_80254684(level);
}

void fn_80270CE8(void) {
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    void fn_8025974C(void *);
    s32 level;

    level = fn_8025465C();
    while (!lbl_804960B8) {
        fn_8025974C(lbl_804960BC);
    }
    fn_80254684(level);
}

void fn_80270D34(void) {
    s32 fn_8025465C(void);
    void fn_80254684(s32);
    void fn_802706E4(void);
    s32 level;
    u32 reg;
    s32 level2;

    level = fn_8025465C();
    reg = 0x45000002;
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = reg;
    fn_802706E4();
    lbl_804960B8 = 0;
    fn_80254684(level);
    level2 = fn_8025465C();
    while (!lbl_804960B8) {
        fn_8025974C(lbl_804960BC);
    }
    fn_80254684(level2);
}

void fn_80270DB4(void) {
    extern u8 *__GXData;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = *(u32 *)(__GXData + 0x1DC);
    *(u16 *)(__GXData + 2) = 0;
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

void fn_80270E48(s32 type, s32 src, s32 dst, s32 op) {
    extern volatile u16 *__peReg;
    u32 reg = __peReg[1];
    reg = __rlwimi(reg, (type == 1 || type == 3), 0, 31, 31);
    reg = __rlwimi(reg, type == 3, 11, 20, 20);
    reg = __rlwimi(reg, type == 2, 1, 30, 30);
    reg = __rlwimi(reg, op, 12, 16, 19);
    reg = __rlwimi(reg, src, 8, 21, 23);
    reg = __rlwimi(reg, dst, 5, 24, 26);
    reg = __rlwimi(reg, 0x41, 24, 0, 7);
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

void fn_80270F20(u16 x, u16 y, u32 *z) {
    u32 addr = 0xC8000000;
    addr = __rlwimi(addr, x, 2, 20, 29);
    addr = __rlwimi(addr, y, 12, 10, 19);
    addr = __rlwimi(addr, 0, 22, 8, 9);
    *z = *(volatile u32 *)addr;
}

void fn_80270F44(u16 x, u16 y, u32 z) {
    u32 addr = 0xC8000000;
    addr = __rlwimi(addr, x, 2, 20, 29);
    addr = __rlwimi(addr, y, 12, 10, 19);
    addr = __rlwimi(addr, 0, 22, 8, 9);
    *(volatile u32 *)addr = z;
}

void fn_80270F64(u16 x, u16 y, u32 *z) {
    u32 addr = 0xC8000000;
    addr = __rlwimi(addr, x, 2, 20, 29);
    addr = __rlwimi(addr, y, 12, 10, 19);
    addr = __rlwimi(addr, 1, 22, 8, 9);
    *z = *(volatile u32 *)addr;
}

void fn_80270F88(u16 x, u16 y, u32 z) {
    u32 addr = 0xC8000000;
    addr = __rlwimi(addr, x, 2, 20, 29);
    addr = __rlwimi(addr, y, 12, 10, 19);
    addr = __rlwimi(addr, 1, 22, 8, 9);
    *(volatile u32 *)addr = z;
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

void fn_802715D4(u8 a, u32 b) {
    extern void *__GXData;
    u32 *gx = __GXData;

    gx[0x7C / 4] = __rlwimi(gx[0x7C / 4], a, 0, 24, 31);
    gx[0x7C / 4] = __rlwimi(gx[0x7C / 4], b, 16, 13, 15);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = gx[0x7C / 4];
    ((u16 *)gx)[1] = 0;
}

void fn_80271614(u8 *a, u32 *b) {
    extern void *__GXData;
    u32 *gx = __GXData;

    *a = gx[0x7C / 4];
    *b = (gx[0x7C / 4] >> 16) & 7;
}

void fn_80271630(u8 a, u32 b) {
    extern void *__GXData;
    u32 *gx = __GXData;

    gx[0x7C / 4] = __rlwimi(gx[0x7C / 4], a, 8, 16, 23);
    gx[0x7C / 4] = __rlwimi(gx[0x7C / 4], b, 19, 10, 12);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = gx[0x7C / 4];
    ((u16 *)gx)[1] = 0;
}

void fn_80271670(u8 *a, u32 *b) {
    extern void *__GXData;
    u32 *gx = __GXData;

    *a = gx[0x7C / 4] >> 8;
    *b = (gx[0x7C / 4] >> 19) & 7;
}

void fn_802716D8(u32 a) {
    extern u32 *__GXData;
    u32 *gx;
    switch (a) {
    case 1:
        a = 2;
        break;
    case 2:
        a = 1;
        break;
    }
    gx = __GXData;
    gx[0x204 / 4] = __rlwimi(gx[0x204 / 4], a, 14, 16, 17);
    gx[0x5AC / 4] |= 4;
}

void fn_8027171C(u32 *a) {
    extern u32 *__GXData;
    u32 val = (__GXData[0x204 / 4] >> 14) & 3;
    switch (val) {
    case 1:
        *a = 2;
        break;
    case 2:
        *a = 1;
        break;
    default:
        *a = val;
        break;
    }
}

void fn_80271760(u8 a) {
    extern u32 *__GXData;
    u32 *gx = __GXData;

    gx[0x204 / 4] = __rlwimi(gx[0x204 / 4], a, 19, 12, 12);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = 0xFE080000;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = gx[0x204 / 4];
}

void fn_80271794(void) {
    extern u8 *__GXData;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = *(u32 *)(__GXData + 0x204);
    *(u16 *)(__GXData + 2) = 0;
}

void fn_80271B58(u32 mode) {
    extern u32 *__GXData;
    u32 *gx = __GXData;

    gx[0x1EC / 4] = __rlwimi(gx[0x1EC / 4], mode, 12, 18, 19);
    gx[0x1FC / 4] = __rlwimi(gx[0x1FC / 4], 0, 12, 18, 19);
}

void fn_80271B7C(u32 clamp) {
    extern u8 *__GXData;
    u8 clmpB = (clamp & 1) == 1;
    u8 clmpT = (clamp & 2) == 2;
    u8 *gx = __GXData;

    *(u32 *)(gx + 0x1EC) = __rlwimi(*(u32 *)(gx + 0x1EC), clmpB, 0, 31, 31);
    *(u32 *)(gx + 0x1EC) = __rlwimi(*(u32 *)(gx + 0x1EC), clmpT, 1, 30, 30);
    *(u32 *)(gx + 0x1FC) = __rlwimi(*(u32 *)(gx + 0x1FC), clmpB, 0, 31, 31);
    *(u32 *)(gx + 0x1FC) = __rlwimi(*(u32 *)(gx + 0x1FC), clmpT, 1, 30, 30);
}

u32 fn_80271BD4(u32 efbHt, u32 iScale) {
    u32 count;
    u32 realHt;
    u32 iScaleD;

    count = (efbHt - 1) * 0x100;
    realHt = (count / iScale) + 1;
    iScaleD = iScale;
    if (iScaleD > 0x80 && iScaleD < 0x100) {
        while (iScaleD % 2 == 0) {
            iScaleD /= 2;
        }
        if (efbHt % iScaleD == 0) {
            realHt++;
        }
    }
    if (realHt > 0x400) {
        realHt = 0x400;
    }
    return realHt;
}

u16 fn_80271C2C(u16 efbHeight, f32 yScale) {
    u32 iScale = (u32)(256.0f / yScale) & 0x1FF;
    return fn_80271BD4(efbHeight, iScale);
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

void fn_802729DC(void *lt_obj, f32 px, f32 py, f32 pz, f32 nx, f32 ny, f32 nz) {
    extern f32 lbl_804975A0;
    M2C_FIELD(lt_obj, f32 *, 0x34) = nx;
    M2C_FIELD(lt_obj, f32 *, 0x38) = ny;
    M2C_FIELD(lt_obj, f32 *, 0x3C) = nz;
    px = lbl_804975A0 * px;
    py = lbl_804975A0 * py;
    pz = lbl_804975A0 * pz;
    M2C_FIELD(lt_obj, f32 *, 0x28) = px;
    M2C_FIELD(lt_obj, f32 *, 0x2C) = py;
    M2C_FIELD(lt_obj, f32 *, 0x30) = pz;
}

void fn_80272A08(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) *arg1;
}

void fn_80272A14(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0xC);
}

void fn_80272A9C(u32 lt_obj_indx, u32 light) {
    extern void *__GXData;
    u32 reg = 0;
    u32 idx = 31 - __cntlzw(light);

    reg = __rlwimi(reg, (idx & 7) * 16 + 0x600, 0, 20, 31);
    reg = __rlwimi(reg, 0xF, 12, 16, 19);
    reg = __rlwimi(reg, lt_obj_indx, 16, 0, 15);
    GXWGFifo.u8 = 0x38;
    GXWGFifo.u32 = reg;
    M2C_FIELD(__GXData, u16 *, 0x2) = 1;
}

void fn_80272CC4(u8 nChans) {
    extern void *__GXData;
    u32 *gx = __GXData;

    gx[0x204 / 4] = __rlwimi(gx[0x204 / 4], nChans, 4, 25, 27);
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x1009;
    GXWGFifo.u32 = nChans;
    gx[0x5AC / 4] |= 4;
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

void fn_802734F4(u32 *obj, f32 v) {
    extern f32 lbl_804975C8;
    extern f32 lbl_804975CC;
    extern f32 lbl_804975A8;
    if (v < lbl_804975C8) {
        v = lbl_804975C8;
    } else if (v > lbl_804975CC) {
        v = lbl_804975CC;
    }
    obj[1] = __rlwimi(obj[1], (s32)(lbl_804975A8 * v), 0, 24, 31);
}

void fn_80273544(u32 *obj, f32 v) {
    extern f32 lbl_804975B8;
    extern f32 lbl_804975BC;
    extern f32 lbl_804975C0;
    extern f32 lbl_804975C4;
    if (v < lbl_804975B8) {
        v = lbl_804975B8;
    } else if (v >= lbl_804975BC) {
        v = lbl_804975C0;
    }
    obj[0] = __rlwimi(obj[0], (s32)(lbl_804975C4 * v), 9, 15, 22);
}

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

void fn_80274940(u32 tev_stage, u32 ind_stage, u32 format, u32 bias_sel, u32 matrix_sel, u32 wrap_s, u32 wrap_t, u8 add_prev, u8 utc_lod, u32 alpha_sel);

void fn_80274D54(u8 nIndStages) {
    extern u32 *__GXData;
    u32 *gx = __GXData;

    gx[0x204 / 4] = __rlwimi(gx[0x204 / 4], nIndStages, 16, 13, 15);
    gx[0x5AC / 4] |= 6;
}

void fn_80274D78(u32 tev_stage) {
    fn_80274940(tev_stage, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

void fn_80274DC0(u32 tev_stage, u32 ind_stage, u8 signed_offsets, u8 replace_mode, u32 matrix_sel) {
    u32 wrap;

    wrap = replace_mode ? 6 : 0;
    fn_80274940(tev_stage, ind_stage, 0, signed_offsets ? 7 : 0, matrix_sel, wrap, wrap, 0, 0, 0);
}

void fn_802750DC(u32 tev_stage, u32 ind_stage, u32 matrix_sel) {
    fn_80274940(tev_stage, ind_stage, 0, 7, matrix_sel, 0, 0, 0, 0, 0);
}

void fn_80275120(u32 tev_stage) {
    fn_80274940(tev_stage, 0, 0, 0, 0, 6, 6, 1, 0, 0);
}

void fn_80275168(void) {

}

void __GXSetIndirectMask(u32 mask) {
    extern void *__GXData;
    u32 *gx = __GXData;

    gx[0x124 / 4] = __rlwimi(gx[0x124 / 4], mask, 0, 24, 31);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = gx[0x124 / 4];
    ((u16 *)gx)[1] = 0;
}

void __GXFlushTextureState(void) {
    extern u8 *__GXData;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = *(u32 *)(__GXData + 0x124);
    *(u16 *)(__GXData + 2) = 0;
}

void fn_802751C0(s32 id, u32 mode) {
    extern void *__GXData;
    extern u32 lbl_803FB248[4][5];
    u32 (*tbl)[5] = lbl_803FB248;
    u8 *gx;
    u32 *ctmp;
    u32 *atmp;
    u32 *regs;
    u32 tevReg;

    if (id == 0) {
        ctmp = tbl[0] + mode;
        atmp = tbl[2] + mode;
    } else {
        ctmp = tbl[1] + mode;
        atmp = tbl[3] + mode;
    }
    gx = __GXData;
    regs = (u32 *)(gx + id * 4);
    tevReg = regs[0x130 / 4];
    tevReg = (*ctmp & ~0xFF000000) | (tevReg & 0xFF000000);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = tevReg;
    regs[0x130 / 4] = tevReg;
    tevReg = regs[0x170 / 4];
    tevReg = (*atmp & ~0xFF00000F) | (tevReg & 0xFF00000F);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = tevReg;
    regs[0x170 / 4] = tevReg;
    *(u16 *)(gx + 2) = 0;
}

void fn_80275690(void) {

}

void fn_80275694(u32 comp0, u8 ref0, u32 op, u32 comp1, u8 ref1) {
    extern void *__GXData;
    u32 reg = 0xF3000000;

    reg = __rlwimi(reg, ref0, 0, 24, 31);
    reg = __rlwimi(reg, ref1, 8, 16, 23);
    reg = __rlwimi(reg, comp0, 16, 13, 15);
    reg = __rlwimi(reg, comp1, 19, 10, 12);
    reg = __rlwimi(reg, op, 22, 8, 9);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    M2C_FIELD(__GXData, u16 *, 0x2) = 0;
}

void fn_802756D8(u32 op, u32 fmt, u32 bias) {
    extern void *__GXData;
    u32 zenv0;
    u32 zenv1;
    u32 type;

    zenv0 = 0;
    zenv0 = __rlwimi(zenv0, bias, 0, 8, 31);
    zenv0 = __rlwimi(zenv0, 0xF4, 24, 0, 7);
    zenv1 = 0;
    switch (fmt) {
    case 0x11:
        type = 0;
        break;
    case 0x13:
        type = 1;
        break;
    case 0x16:
        type = 2;
        break;
    default:
        type = 2;
        break;
    }
    zenv1 = __rlwimi(zenv1, type, 0, 30, 31);
    zenv1 = __rlwimi(zenv1, op, 2, 28, 29);
    zenv1 = __rlwimi(zenv1, 0xF5, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = zenv0;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = zenv1;
    M2C_FIELD(__GXData, u16 *, 0x2) = 0;
}

void fn_80275900(u8 nStages) {
    extern u32 *__GXData;
    u32 *gx = __GXData;

    gx[0x204 / 4] = __rlwimi(gx[0x204 / 4], nStages - 1, 10, 18, 21);
    gx[0x5AC / 4] |= 4;
}

void fn_80275CC8(const f32 *src, volatile f32 *dst) {
    f32 v0, v1, v2, v3, v4, v5;
    v0 = __psq_l(src, 0, 0, 0);
    v1 = src[2];
    v2 = __psq_l(src, 0x10, 0, 0);
    v3 = src[6];
    v4 = __psq_l(src, 0x20, 0, 0);
    v5 = src[10];
    __psq_st(dst, v0, 0, 0, 0);
    *dst = v1;
    __psq_st(dst, v2, 0, 0, 0);
    *dst = v3;
    __psq_st(dst, v4, 0, 0, 0);
    *dst = v5;
}

void fn_80275CFC(const f32 *src, volatile f32 *dst) {
    f32 v0, v1, v2, v3, v4;
    v0 = __psq_l(src, 0, 0, 0);
    v1 = __psq_l(src, 0x8, 0, 0);
    v2 = __psq_l(src, 0x10, 0, 0);
    v3 = __psq_l(src, 0x18, 0, 0);
    v4 = src[8];
    __psq_st(dst, v0, 0, 0, 0);
    __psq_st(dst, v1, 0, 0, 0);
    __psq_st(dst, v2, 0, 0, 0);
    __psq_st(dst, v3, 0, 0, 0);
    *dst = v4;
}

void fn_80275D28(const f32 *src, volatile f32 *dst) {
    f32 v0, v1, v2, v3;
    v0 = __psq_l(src, 0, 0, 0);
    v1 = __psq_l(src, 0x8, 0, 0);
    v2 = __psq_l(src, 0x10, 0, 0);
    v3 = __psq_l(src, 0x18, 0, 0);
    __psq_st(dst, v0, 0, 0, 0);
    __psq_st(dst, v1, 0, 0, 0);
    __psq_st(dst, v2, 0, 0, 0);
    __psq_st(dst, v3, 0, 0, 0);
}

void fn_80275D4C(const f32 *mtx, u32 id) {
    volatile f32 *dst;
    f32 v0, v1, v2, v3, v4, v5;
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = (id * 4) | 0xB0000;
    dst = &GXWGFifo.f32;
    v0 = __psq_l(mtx, 0, 0, 0);
    v1 = __psq_l(mtx, 0x8, 0, 0);
    v2 = __psq_l(mtx, 0x10, 0, 0);
    v3 = __psq_l(mtx, 0x18, 0, 0);
    v4 = __psq_l(mtx, 0x20, 0, 0);
    v5 = __psq_l(mtx, 0x28, 0, 0);
    __psq_st(dst, v0, 0, 0, 0);
    __psq_st(dst, v1, 0, 0, 0);
    __psq_st(dst, v2, 0, 0, 0);
    __psq_st(dst, v3, 0, 0, 0);
    __psq_st(dst, v4, 0, 0, 0);
    __psq_st(dst, v5, 0, 0, 0);
}

void fn_802760C0(f32 left, f32 top, f32 wd, f32 ht, f32 nearz, f32 farz) {
    void fn_80275FD8(void);
    extern void *__GXData;
    u8 *gx = __GXData;

    M2C_FIELD(gx, f32 *, 0x4F4) = left;
    M2C_FIELD(gx, f32 *, 0x4F8) = top;
    M2C_FIELD(gx, f32 *, 0x4FC) = wd;
    M2C_FIELD(gx, f32 *, 0x500) = ht;
    M2C_FIELD(gx, f32 *, 0x504) = nearz;
    M2C_FIELD(gx, f32 *, 0x508) = farz;
    fn_80275FD8();
    M2C_FIELD(__GXData, u16 *, 0x2) = 1;
}

void fn_8027612C(f32 scale, f32 offset) {
    extern void *__GXData;
    extern f32 lbl_80497608;
    extern f32 lbl_804975FC;
    u8 *gx = __GXData;
    f32 zScale;
    f32 zOffset;
    f32 zmax;

    zOffset = lbl_80497608 * offset;
    offset = lbl_80497608 * scale;
    M2C_FIELD(gx, f32 *, 0x50C) = zOffset;
    zScale = lbl_804975FC + offset;
    M2C_FIELD(gx, f32 *, 0x510) = zScale;
    zmax = M2C_FIELD(gx, f32 *, 0x508) * zScale;
    scale = M2C_FIELD(gx, f32 *, 0x504) * zScale;
    zOffset = zOffset + zmax;
    scale = zmax - scale;
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x101C;
    GXWGFifo.f32 = scale;
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x101F;
    GXWGFifo.f32 = zOffset;
    M2C_FIELD(gx, u16 *, 0x2) = 1;
}

void fn_80276198(u32 left, u32 top, u32 wd, u32 ht) {
    extern void *__GXData;
    u32 *gx = __GXData;
    u32 tp, lf, bm, rt;

    tp = top + 0x156;
    lf = left + 0x156;
    bm = tp + ht - 1;
    rt = lf + wd - 1;
    gx[0xF8 / 4] = __rlwimi(gx[0xF8 / 4], tp, 0, 21, 31);
    gx[0xF8 / 4] = __rlwimi(gx[0xF8 / 4], lf, 12, 9, 19);
    gx[0xFC / 4] = __rlwimi(gx[0xFC / 4], bm, 0, 21, 31);
    gx[0xFC / 4] = __rlwimi(gx[0xFC / 4], rt, 12, 9, 19);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = gx[0xF8 / 4];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = gx[0xFC / 4];
    M2C_FIELD(gx, u16 *, 0x2) = 0;
}

#pragma push
#pragma scheduling off
void fn_80276210(u32 *left, u32 *top, u32 *wd, u32 *ht) {
    extern void *__GXData;
    u32 tp, lf, bm, rt;
    u32 scis0 = M2C_FIELD(__GXData, u32 *, 0xF8);
    u32 scis1 = M2C_FIELD(__GXData, u32 *, 0xFC);
    u32 w;

    lf = (scis0 >> 12) & 0x7FF;
    *left = lf - 0x156;
    tp = scis0 & 0x7FF;
    *top = tp - 0x156;
    rt = (scis1 >> 12) & 0x7FF;
    w = rt - lf + 1;
    bm = scis1 & 0x7FF;
    *wd = w;
    *ht = bm - tp + 1;
}
#pragma pop
void fn_80276258(s32 x, s32 y) {
    extern void *__GXData;
    u32 reg = 0;
    u32 hx = (u32)(x + 0x156) >> 1;
    u32 hy = (u32)(y + 0x156) >> 1;

    reg = __rlwimi(reg, hx, 0, 22, 31);
    reg = __rlwimi(reg, hy, 10, 12, 21);
    reg = __rlwimi(reg, 0x59, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    M2C_FIELD(__GXData, u16 *, 0x2) = 0;
}

void fn_80276298(u32 mode) {
    extern void *__GXData;
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x1005;
    GXWGFifo.u32 = mode;
    M2C_FIELD(__GXData, u16 *, 0x2) = 1;
}

void fn_802762C0(s32 attr) {
    extern void *__GXData;

    if (attr < 5) {
        GXWGFifo.u8 = 0x08;
        GXWGFifo.u8 = 0x30;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x80);
        GXWGFifo.u8 = 0x10;
        GXWGFifo.u32 = 0x1018;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x80);
    } else {
        GXWGFifo.u8 = 0x08;
        GXWGFifo.u8 = 0x40;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x84);
        GXWGFifo.u8 = 0x10;
        GXWGFifo.u32 = 0x1019;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x84);
    }
    M2C_FIELD(__GXData, u16 *, 0x2) = 1;
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

void fn_802771C0(u32 v) {
    extern void *__GXData;
    u32 *gx = __GXData;

    gx[0x5A4 / 4] = __rlwimi(gx[0x5A4 / 4], v, 0, 28, 31);
    *(volatile u8 *)0xCC008000 = 0x8;
    *(volatile u8 *)0xCC008000 = 0x20;
    *(volatile u32 *)0xCC008000 = gx[0x5A4 / 4];
    *(volatile u8 *)0xCC008000 = 0x8;
    *(volatile u8 *)0xCC008000 = 0x10;
    *(volatile u32 *)0xCC008000 = 1;
}

static inline u32 __GXReadCPCounterU32(volatile u16 *hi, volatile u16 *lo) {
    u32 h0, h1, l;

    h0 = *hi;
    do {
        h1 = h0;
        l = *lo;
        h0 = *hi;
    } while (h0 != h1);
    return (h0 << 16) | l;
}

void fn_80277204(u32 *a, u32 *b, u32 *c) {
    extern volatile u16 *__cpReg;

    *a = __GXReadCPCounterU32(&__cpReg[0x29], &__cpReg[0x28]);
    *b = __GXReadCPCounterU32(&__cpReg[0x2B], &__cpReg[0x2A]);
    *c = __GXReadCPCounterU32(&__cpReg[0x2D], &__cpReg[0x2C]);
}

void fn_80277298(void) {
    *(volatile u8 *)0xCC008000 = 0x8;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u32 *)0xCC008000 = 0;
}

void fn_802772B4(void) {
    extern void *__GXData;
    void *gx = __GXData;
    u32 reg = 0x31000;

    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = 0x2402C022;
    *(volatile u8 *)0xCC008000 = 0x10;
    *(volatile u32 *)0xCC008000 = 0x1006;
    *(volatile u32 *)0xCC008000 = reg;
    M2C_FIELD(gx, u16 *, 0x2) = 1;
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

volatile u32 __EXIRegs[] : 0xCC006800;
s32 fn_80277EB4(void *buf, s32 len, s32 mode);

extern void (*lbl_804960C8)(s32);
extern void (*lbl_804960CC)(s32, void *);
extern void *lbl_804960D8;
extern s8 lbl_804960DC;

void fn_80277960(void **arg0, void (*arg1)(s32)) {
    s32 enabled;

    enabled = fn_8025465C();
    lbl_804960D8 = &lbl_804960DC;
    *arg0 = lbl_804960D8;
    lbl_804960C8 = arg1;
    fn_80254AC0(0x18000);
    __EXIRegs[10] = 0;
    fn_80254684(enabled);
}

void fn_802779D8(s16 arg0, void *arg1) {
    __PIRegs[0] = 0x1000;
    if (lbl_804960CC != NULL) {
        lbl_804960CC(arg0, arg1);
    }
}

void fn_80277A18(void) {
    lbl_804960DC = 1;
    if (lbl_804960C8 != NULL) {
        lbl_804960C8(0);
    }
}

static inline BOOL DBGEXISelect(u32 v) {
    u32 regs = __EXIRegs[10];
    regs &= 0x405;
    regs |= 0x80 | (v << 4);
    __EXIRegs[10] = regs;
    return TRUE;
}

static inline BOOL DBGEXIDeselect(void) {
    __EXIRegs[10] &= 0x405;
    return TRUE;
}

static inline BOOL DBGEXISync(void) {
    while (__EXIRegs[13] & 1) {
    }
    return TRUE;
}

s32 fn_80277A54(u32 *arg0) {
    BOOL total;
    u32 v;

    DBGEXISelect(4);
    v = 0x40000000;
    total = !fn_80277EB4(&v, 2, 1);
    total |= !DBGEXISync();
    total |= !fn_80277EB4(arg0, 4, 0);
    total |= !DBGEXISync();
    total |= !DBGEXIDeselect();
    return !total;
}

s32 fn_80277CB8(u32 *arg0) {
    BOOL total = FALSE;
    u32 v;

    DBGEXISelect(4);
    v = 0x60000000;
    total |= !fn_80277EB4(&v, 2, 1);
    total |= !DBGEXISync();
    total |= !fn_80277EB4(arg0, 4, 0);
    total |= !DBGEXISync();
    total |= !DBGEXIDeselect();
    return !total;
}

s32 fn_80277D64(u32 arg0) {
    BOOL total;
    u32 v;

    DBGEXISelect(4);
    v = (arg0 & 0x1FFFFFFF) | 0xC0000000;
    total = !fn_80277EB4(&v, 4, 1);
    total |= !DBGEXISync();
    total |= !DBGEXIDeselect();
    return !total;
}

s32 fn_80277DF0(u32 *arg0) {
    BOOL total = FALSE;
    u32 v;

    DBGEXISelect(0);
    v = 0;
    total |= !fn_80277EB4(&v, 2, 1);
    total |= !DBGEXISync();
    total |= !fn_80277EB4(arg0, 4, 0);
    total |= !DBGEXISync();
    total |= !DBGEXIDeselect();
    return !total;
}

u32 fn_80277E9C(void) {
    u32 reg = __EXIRegs[10];
    __EXIRegs[10] = 0x80A;
    return reg;
}

BOOL fn_8027814C(void) {
    while (__EXIRegs[13] & 1) {
    }
    return TRUE;
}

BOOL fn_80278184(u32 v) {
    u32 regs = __EXIRegs[10];
    regs &= 0x405;
    regs |= 0x80 | (v << 4);
    __EXIRegs[10] = regs;
    return TRUE;
}

void fn_802781AC(void) {
    void fn_80254AC0(u32);
    fn_80254AC0(0x18000);
    __EXIRegs[10] = 0;
}

s32 fn_80278168(void) {
    u32 regs = __EXIRegs[10];
    regs &= 0x405;
    __EXIRegs[10] = regs;
    return TRUE;
}

void fn_802781E0(void) {

}

