#include "utils.h"

int is_sorted_nondecreasing(int *arr, int n)
{
    for (int i=1; i<n; i++){
        if (arr[i]<arr[i-1])
        {
            return 0;
        }
    }
    return 1;
}

int min_int(int a, int b)
{
    if (a<b){
        return a;
    }
    else{
        return b;
    }
}