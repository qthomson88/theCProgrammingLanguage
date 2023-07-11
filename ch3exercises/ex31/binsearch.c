/* find a number in a sorted list using a binary search */

int binsearch(int x, int list[], int length)
{
    int low, high, mid;

    low = 0;
    high = length - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < list[mid])
        {
            high = mid -1;
        }
        else if (x > list[mid])
        {
            low = mid +1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int binsearchShort(int x, int list[], int length)
{
    int low, high, mid;

    low = 0;
    high = length - 1;

    while (low < high)
    {
        mid = (low + high) / 2;
        if (x <= list[mid])
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    mid = (low + high) / 2;
    if (x == list[mid])
    {
        return mid;
    }
    else
    {
        return -1;
    }
}
