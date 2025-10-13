#include <math.h>
#include <stdio.h>
#include "search.h"
#include "utils.h"

int linear_search(int *arr, int n, int target)
{
    for ( i=0, i<n , i++){
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int jump_search(int *arr, int n, int target)
{
    if (is_sorted_nondecreasing == 1){
        int j=sqrt(n);
        int m=j
        int p=0;
        while arr[min_int(m,n)-1]<target{
            p=m;
            m+=j
            if (p>=n) {
                return -1
            }
            for (i=p, i<min_int(m,n) , i++){
                if (arr[i] == target){
                    return i
                }
            }
        }
    return -1;
    }
}

int binary_search(int *arr, int n, int target)
{
    if (is_sorted_nondecreasing == 1){
        int a=0;
        int b=n;
        while arr[c]!=target{
            int s=i;
            int c = (b-a)/2;
            if (target< arr[c]){
                b=c;
            }
            else{
                a=c;
            }
        }
        return s;
    }
    return -1;
}