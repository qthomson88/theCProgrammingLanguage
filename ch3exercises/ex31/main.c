#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#include "binsearch.c"

int main()
{
    int ix;
    const int listLen = 1000000;
    int list[listLen];
    int choice;
    int result;
    clock_t time;


    list[0] = 0;

    for (ix = 1; ix < listLen; ix ++)
    {
        list[ix] = list[ix - 1] + (rand() % 5);
    }

    printf("What number do you want to search for?\n");

    scanf("%d", &choice);

    /* by all accounts this extra print statement to print the start time shouldn't make a difference, but I can't get
    * the time to come out as anything other than 1 otherwise. In any event, the second algorithm is definitely faster
    */
    time = clock();
    printf("time  %f\n", ((double)time));
    result = binsearch(choice, list, listLen);
    time = clock() - time;
    printf("time  %f\n", ((double)time));

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
    printf("time  %f\n", ((double)time));
    result = binsearchShort(choice, list, listLen);
    time = clock() - time;
    printf("time  %f\n", ((double)time));
    
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

