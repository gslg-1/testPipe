#include "mod_t2.h"
#include "mod_t3.h"


uint8_t findBiggest(uint8_t * arr, uint8_t length)
{
    for (int i = 0 ; i < length-1; i++)
    {
        if( arr[i] > arr [i+1])
        {
            swapNB(arr[i]);
        }
    }
    return arr[length-1];
}