#pragma once

#include "definitions.h"

void initializeGridContext(struct gridContext *gc, const uint_fast32_t nelx, 
                           const uint_fast32_t nely,
                           const uint_fast32_t nelz, const int nl);
void freeGridContext(struct gridContext *gc, const int nl);

void allocateStateField(const struct gridContext gc, const int l, CTYPE **v);
void allocateStateField_MTYPE(const struct gridContext gc, const int l,
                              MTYPE **v);
void allocateStateField_STYPE(const struct gridContext gc, const int l,
                              STYPE **v);
