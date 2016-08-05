#include "MathFunctions.h"

u32 sqrt_fast_u32(u32 x)
{
    u32 v = 0, b, t;
    for(b = 0x4000U; b > 0; b >>= 2)
    {
        t = v + b;
        v >>= 1;
        if(t <= x)
        {
            v += b;
            x -= t;
        }
    }
    return v;
}

