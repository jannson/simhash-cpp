#ifndef __SIMTABLE_H_
#define __SIMTABLE_H_

#include "common.h"

extern "C" {
    typedef void* SimTable;
    SimTable SimTableInit(int d, hash_t* p, int length);
    void SimTableInsert(hash_t h);
    void SimTableRemove(hash_t h);
    void
}
#endif

