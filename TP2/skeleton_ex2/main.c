#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
#include "utils.h"

int main(void)
{
    int n = 10000;  // taille du tableau
    int *arr = malloc(n * sizeof(int));
    int *copy = malloc(n * sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100000; 
    
    clock_t start, end;
    double time_used;

    // Selection sort
    copy_array(arr, copy, n);
    start = clock();
    selection_sort(copy, n);
    end = clock();
    time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Selection sort : %.6f s\n", time_used);

    // Insertion sort
    copy_array(arr, copy, n);
    start = clock();
    insertion_sort(copy, n);
    end = clock();
    time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Insertion sort : %.6f s\n", time_used);

    // Bubble sort
    copy_array(arr, copy, n);
    start = clock();
    bubble_sort(copy, n);
    end = clock();
    time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Bubble sort    : %.6f s\n", time_used);

    // Merge sort
    copy_array(arr, copy, n);
    start = clock();
    merge_sort(copy, n);
    end = clock();
    time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Merge sort     : %.6f s\n", time_used);

    // Quick sort
    copy_array(arr, copy, n);
    start = clock();
    quick_sort(copy, n);
    end = clock();
    time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Quick sort     : %.6f s\n", time_used);

    free(arr);
    free(copy);
    return 0;
}
