#include "stdio.h"
#include "lower.c"

int main()
{
    char inChar;
    char outChar;
    printf("input a character and the lower case will be returned\n");
    inChar = getchar();

    outChar = lower(inChar);
    printf("\n%c", outChar);
}
