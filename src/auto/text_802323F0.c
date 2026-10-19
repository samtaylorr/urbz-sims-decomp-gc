/* Functions from 0x800034C0 to 0x803C0D60, found by decomp-toolkit. */
#include "common.h"

extern void *fn_8022554C(void *);
extern void fn_802303F0(void *, void *);
void fn_802324C0(void *arg0) {
    fn_802303F0(fn_8022554C(arg0), arg0);
}
