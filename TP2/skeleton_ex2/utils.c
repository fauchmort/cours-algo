#include "utils.h"

void swap_int(int *a, int *b)
{
    int c=a;
    a=b;
    b=c;
    return a,b;
}

bool is_sorted_nondecreasing(int *arr, int n)
{
    for (int i=1; i<n; i++){
        if (arr[i]<arr[i-1])
        {
            return 0;  // revoie false
        }
    }
    return 1;  // renvoie true
}

void copy_array(int *src, int *dst, int n)
{
    for(int i=0; i<n; i++){
        dst[i]=src[i];
    }
    return dst;
}