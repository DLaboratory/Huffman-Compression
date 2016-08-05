#pragma once

class VEBTree
{
    private:
        unsigned char m_min, m_max;
        unsigned int m_u;
        VEBTree *m_summary;
        VEBTree **m_cluster;
    public:
        unsigned int sqrt_u();
        unsigned int high(unsigned int x);
        unsigned int low(unsigned int x);
        unsigned int index(unsigned int x, unsigned int y);
};

