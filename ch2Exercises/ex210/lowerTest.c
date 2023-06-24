/* Automated test for lower function */

/* standard library includes */
#include "stdio.h"
#include "stdbool.h"

/* application includes */
#include "lower.c"


int main(void)
{
    char loopChar;
    char lowerChar;
    bool err = true;

    for (loopChar = '!'; loopChar < '~' && (err != false); loopChar++)
    {
	lowerChar = lower(loopChar);
        err = ((loopChar >= 'A') && (loopChar <= 'Z')) ? ((loopChar == lowerChar) ? false : true) :
	        (loopChar == (loopChar + ('a' - 'A')) ? false : true);
    }

    if (err == false)
    {
        printf("\ntest failed\n");
    }

    return 0;
}

