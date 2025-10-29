#include "count_value.h"

int cmp(int a, int b)
{
    if (a < b)
    {
        return -1;
    }
    else if (a == b)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int count_value(int vec[], int n, int value)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int aux = cmp(vec[i], value);
        if (aux == 0)
        {

            count++;
        }
    }

    return count;
}
