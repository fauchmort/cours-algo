#include <math.h>
#include <stdio.h>
#include "search.h"
#include "utils.h"

int linear_search(int *arr, int n, int target)
{
    for (int i=0; i<n; i++){
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
        int m=j;
        int p=0;
        while (arr[min_int(m,n)-1]<target){
            p=m;
            m+=j;
            if (p>=n) {
                return -1;
            }
            for (int i=p; i<min_int(m,n) ; i++){
                if (arr[i] == target){
                    return i;
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
        int c;
        int s;
        while (arr[c]!=target){
            c = (b-a)/2;
            s=c;
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