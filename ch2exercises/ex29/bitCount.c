#include "stdio.h"

/* normal bitCount */
int bitCount(unsigned x)
{
    int b;

    for (b = 0; x != 0; x >>= 1)
    {
        if (x & 01)
        {
            b++;
        }
    }

    return b;
}

/* fast bitCount */
int fastBitCount(unsigned x)
{
    int b;

    for (b = 0; x != 0; x &= (x - 1))
    {
        if (x)
        {
            b++;
        }
    }

    return b;
}

int main()
{
    unsigned i;
    for (i = -1000; i < 1000; i++)
    {
        if (fastBitCount(i) != bitCount(i))
	{
	    printf("count did not match on %d\n", i);
	}
    }

    return 0;
}
