#include <stdio.h>

void shellsort(float *a, int n)
{
    int i, j, increment;
    float tmp;
    for(increment = n/2; increment > 0; increment /= 2)
    {
        for(i = increment; i < n; i++)
        {
            tmp = a[i];
            for(j = i; j >= increment; j -= increment)
            {
                if(tmp > a[j-increment])
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
    float sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum = sum + array[i];
    }
    
    return sum/len;
}