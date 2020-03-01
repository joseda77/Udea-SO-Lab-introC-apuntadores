#include <stdio.h>

void shellsort(float *a, int n)
{
    int i, j, increment, tmp;
    for(increment = n/2; increment > 0; increment /= 2)
    {
        for(i = increment; i < n; i++)
        {
            tmp = a[i];
            for(j = i; j >= increment; j -= increment)
            {
                if(tmp < a[j-increment])
                    a[j] = a[j-increment];
                else
                    break;
            }
            a[j] = tmp;
        }
    }
}

float media(float *array, float len)
{
    int medium = len / 2;
    float firstValue = array[medium];
    float secondValue = array[medium+1];
    return (firstValue+secondValue)/2;
}