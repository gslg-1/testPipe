#include "mod_t3.h"


void swapNB(uint8_t * arr)
{
    uint8_t tmp = *arr;
    *arr = *(arr+1);
    *(arr+1) = tmp;
}

void sortUp(uint8_t * arr, uint8_t length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length-(1+i); j++)
        {
            if (arr[j] > arr[j+1])
            {
                swapNB(arr);
            }
        }
    }
}