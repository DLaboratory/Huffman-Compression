#pragma once

#include "type.h"

class VEBTree
{
    private:
        u8 m_min, m_max;
        u32 m_u;
        VEBTree *m_summary;
        VEBTree **m_cluster;
    public:
        u32 sqrt_u();
        u32 high(u32 x);
        u32 low(u32 x);
        u32 index(u32 x, u32 y);
};

