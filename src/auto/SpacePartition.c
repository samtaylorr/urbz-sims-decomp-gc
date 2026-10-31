/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_80435398[];
extern void fn_80193050(void *);
extern void fn_803AA364(void *, s32);
extern void *fn_80193260(void *, s32);
extern void fn_801961D4(void *);
extern s32 fn_80194D94(void *);
void fn_801978E4(s32 arg0, s32 arg1);

typedef struct SPRect {
    s32 x0;
    s32 y0;
    s32 x1;
    s32 y1;
} SPRect;

typedef struct SPCell {
    SPRect rect;
    s32 unk10;
} SPCell;

typedef struct SPCellVec {
    SPCell *begin;
    SPCell *end;
} SPCellVec;

typedef struct SPNode {
    u8 pad0[4];
    s32 cell;
    u8 pad8[0x24];
} SPNode;

typedef struct SPart {
    u8 pad0[0xC];
    SPCell *cellsBegin;
    SPCell *cellsEnd;
    u8 pad14[0x38];
    SPNode *nodesBegin;
    SPNode *nodesEnd;
} SPart;

static inline SPCell *SPart_Cell(SPart *sp, u32 n) {
    return sp->cellsBegin + n;
}

static inline s32 *SPart_Index(SPart *sp, u32 n) {
    return M2C_FIELD(sp, s32 **, 0x3C) + n;
}

static inline s32 *SPart_At(s32 *v, u32 n) {
    return v + n;
}

typedef struct SPPoint {
    s32 a;
    s32 b;
} SPPoint;

static inline SPPoint *SPPoint_Init(SPPoint *p, s32 a, s32 b) {
    p->a = a;
    p->b = b;
    return p;
}

extern void fn_80192EEC(SPart *, SPNode *, SPNode *, SPRect *);

static inline SPRect SPart_NodesRect(SPart *sp, SPNode *na, SPNode *nb) {
    SPRect r;

    fn_80192EEC(sp, na, nb, &r);
    return r;
}
SPCell *fn_80192D9C(SPCell *self, SPRect *r, s32 arg2) {
    self->rect = *r;
    self->unk10 = arg2;
    return self;
}

SPCell *fn_80192DC8(SPCell *self, s32 y0, s32 x0, s32 y1, s32 x1, s32 arg5) {
    self->rect.y0 = y0;
    self->rect.y1 = y1;
    self->rect.x0 = x0;
    self->rect.x1 = x1;
    self->unk10 = arg5;
    return self;
}

s32 fn_80192DE4(SPRect *r, SPCellVec *v) {
    SPCell *c;

    for (c = v->begin; c != v->end; c++) {
        if (r->x0 < c->rect.x1 && r->x1 > c->rect.x0 && r->y0 < c->rect.y1 && r->y1 > c->rect.y0) {
            return c - v->begin;
        }
    }
    return -1;
}

void fn_80192E6C(SPart *sp, s32 a, s32 b, SPRect *out) {
    SPNode *na;
    SPNode *nb;

    na = fn_80193260(sp, a);
    nb = fn_80193260(sp, b);
    if (na == NULL || nb == NULL) {
        out->y0 = 0;
        out->x0 = 0;
        out->y1 = 0;
        out->x1 = 0;
    } else {
        fn_80192EEC(sp, na, nb, out);
    }
}

SPPoint fn_80192FC8(SPart *sp, SPNode *na, SPNode *nb) {
    SPPoint t;
    {
        SPRect r;

        fn_80192EEC(sp, na, nb, &r);
        return *SPPoint_Init(&t, (r.y1 + r.y0) / 2, (r.x1 + r.x0) / 2);
    }
}

void fn_80193050(void *arg0) {
    volatile s32 z[10];
    char *p14 = (char *)arg0 + 0x14;
    char *p1c = (char *)arg0 + 0x1C;
    char *p24 = (char *)arg0 + 0x24;
    char *p2c = (char *)arg0 + 0x2C;
    char *p34 = (char *)arg0 + 0x34;
    char *p3c = (char *)arg0 + 0x3C;
    char *p44 = (char *)arg0 + 0x44;
    char *p4c = (char *)arg0 + 0x4C;
    char *p54 = (char *)arg0 + 0x54;

    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    *(volatile s32 *)(p14 + 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    *(volatile s32 *)(p1c + 4) = 0;
    *(volatile s32 *)(p24 + 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    *(volatile s32 *)(p2c + 4) = 0;
    *(volatile s32 *)(p34 + 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    *(volatile s32 *)(p3c + 4) = 0;
    *(volatile s32 *)(p44 + 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    *(volatile s32 *)(p4c + 4) = 0;
    *(volatile s32 *)(p54 + 4) = 0;
}

s32 fn_801930C4(SPart *arg0, SPRect *r) {
    SPCell *c;

    for (c = arg0->cellsBegin; c != arg0->cellsEnd; c++) {
        if (r->x0 < c->rect.x1 && r->x1 > c->rect.x0 && r->y0 < c->rect.y1 && r->y1 > c->rect.y0) {
            return c - arg0->cellsBegin;
        }
    }
    return -1;
}

void *fn_80193260(void *arg0, s32 arg1) {
    SPart *sp = arg0;

    if (arg1 < 0 || (u32)arg1 >= (u32)(sp->nodesEnd - sp->nodesBegin)) {
        return NULL;
    }
    return &sp->nodesBegin[arg1];
}

s32 fn_801932A0(SPart *arg0, s32 arg1, SPRect *out) {
    SPNode *n;
    s32 idx;

    if (arg1 == -1) {
        return 0;
    }
    n = fn_80193260(arg0, arg1);
    if (n != NULL) {
        idx = n->cell;
        if (idx >= 0 && (u32)idx < (u32)(arg0->cellsEnd - arg0->cellsBegin)) {
            *out = SPart_Cell(arg0, idx)->rect;
            return 1;
        }
    }
    return 0;
}

s32 fn_8019334C(s32 arg0, s32 arg1) {
    return (u32)(arg1 + 1) > 2;
}

void fn_80193680(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = 0;
    *arg2 = 1;
}

s32 fn_80193C00(SPart *arg0, s32 arg1, s32 arg2) {
    s32 fn_80193694(SPart *);
    u8 *n;
    s32 cnt;

    cnt = fn_80193694(arg0);
    if (arg2 < 0 || arg2 >= cnt || (n = fn_80193260(arg0, arg1)) == NULL) {
        return -1;
    }
    return *SPart_Index(arg0, M2C_FIELD(n, s32 *, 0xC) + arg2);
}

void fn_80193C74(void *arg0) {
    s32 *v0c = (s32 *)((u8 *)arg0 + 0xC);
    s32 *v4c = (s32 *)((u8 *)arg0 + 0x4C);
    s32 *v1c = (s32 *)((u8 *)arg0 + 0x1C);
    s32 *v2c = (s32 *)((u8 *)arg0 + 0x2C);
    s32 *v3c = (s32 *)((u8 *)arg0 + 0x3C);
    s32 begin;
    s32 end;
    s32 p;

    begin = M2C_FIELD(arg0, s32 *, 0xC);
    end = v0c[1];
    for (p = begin; p != end; p += 0x14) {
    }
    v0c[1] = begin;
    begin = M2C_FIELD(arg0, s32 *, 0x4C);
    end = v4c[1];
    for (p = begin; p != end; p += 0x2C) {
    }
    v4c[1] = begin;
    v1c[1] = M2C_FIELD(arg0, s32 *, 0x1C);
    v2c[1] = M2C_FIELD(arg0, s32 *, 0x2C);
    v3c[1] = M2C_FIELD(arg0, s32 *, 0x3C);
}

s32 fn_80193CEC(SPRect *a, SPRect *b) {
    if (b == NULL) {
        return 1;
    }
    if (a->y0 >= b->y0 && a->y1 <= b->y1 && a->x0 >= b->x0 && a->x1 <= b->x1) {
        return 1;
    }
    return 0;
}

void fn_80197794(void *arg0, s32 arg1) {
    typedef struct { s32 a, b; } E8;
    typedef struct { E8 *begin; E8 *end; } V8;
    V8 *vec;
    E8 *begin;
    E8 *end;
    E8 *p;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    fn_801961D4(lbl_80435398);
    vec = (V8 *)((u8 *)arg0 + 0x24);
    M2C_FIELD(arg0, s32 *, 8) = M2C_FIELD(arg0, s32 *, 4);
    begin = vec->begin;
    M2C_FIELD(arg0, s32 *, 0x18) = M2C_FIELD(arg0, s32 *, 0x14);
    end = vec->end;
    for (p = begin; p != end; p++) {
    }
    vec->end = begin;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = -1;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    if (fn_80194D94(arg0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = 1;
    }
}

s32 fn_80197838(void *arg0) {
    s32 idx;
    s32 **vec;
    s32 *p;
    f32 best;
    f32 f;

    idx = 0;
    vec = (s32 **)((u8 *)arg0 + 0x3C);
    best = M2C_FIELD(fn_80193260(lbl_80435398, *M2C_FIELD(arg0, s32 **, 0x3C)), f32 *, 0x20);
    for (p = M2C_FIELD(arg0, s32 **, 0x3C) + 1; p != vec[1]; p++) {
        f = M2C_FIELD(fn_80193260(lbl_80435398, *p), f32 *, 0x20);
        if (f < best) {
            best = f;
            idx = p - M2C_FIELD(arg0, s32 **, 0x3C);
        }
    }
    return *SPart_At(M2C_FIELD(arg0, s32 **, 0x3C), idx);
}

void fn_801978E4(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            fn_80193050(lbl_80435398);
        } else {
            fn_803AA364(lbl_80435398, 2);
        }
    }
}

void fn_80197938(void) {
    fn_801978E4(1, 0xFFFF);
}

void fn_80197964(void) {
    fn_801978E4(0, 0xFFFF);
}

