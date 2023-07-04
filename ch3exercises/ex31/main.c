#include "stdio.h"
#include "time.h"

#include "binsearch.c"

int main()
{
    int ix;
    const int listLen = 100;
    long list[listLen];
    int choice;
    int result;
    clock_t time;

    /* a fibonacci sequence gets too big too fast
    * at this point in time, I don't want to generate a truly random list and sort it to really test my sorts
    */

    list[0] = 0;
    list[1] = 1;
    for (ix = 2; ix < listLen; ix++ )
    {
        list[ix] = list[ix - 1] + list[ix - 2];
    }

    printf("What number do you want to search for?\n");

    scanf("%d", &choice);

    time = clock();
    result = binsearch(choice, list, listLen);
    time = clock() - time;

    if (result >= 0)
    {
        printf("Found the number at index %d\n", result);
    }
    else
    {
        printf("Could not find number\n");
    }
    printf("time taken %f\n", ((double)time)/CLOCKS_PER_SEC);
    
    time = clock();
    result = binsearchShort(choice, list, listLen);
    time = clock() - time;
    
    if (result >= 0)
    {
        printf("Found the number at index %d\n", result);
    }
    else
    {
        printf("Could not find number\n");
    }
    printf("time taken %f\n", ((double)time)/CLOCKS_PER_SEC);

    return 0;
}

