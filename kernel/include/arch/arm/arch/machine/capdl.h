/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * SPDX-License-Identifier: GPL-2.0-only
 */

#pragma once

#include <machine/capdl.h>

#ifdef CONFIG_ARM_SMMU
static inline void arm_obj_iospace_print_attrs(cap_t iospace_cap)
{
    printf("(armiospace: %lu)\n", (long unsigned int)cap_io_space_cap_get_capModuleID(io_space));
}
#endif

static inline void obj_asidpool_print_attrs(cap_t asid_cap)
{
    printf("(asid_high: 0x%lx)\n", (long unsigned int)ASID_HIGH(cap_asid_pool_cap_get_capASIDBase(asid_cap)));
}

void capDL(void);
