#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fibo.h>


int main(){
    clock_t start, end;
    start = clock();
    printf("\n%d",fibo_naif(20));
    end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken by Fibo_naif(20): %f seconds\n", time_taken);

    start = clock();
    printf("\n%d",fibo_dyn(20));
    end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken by Fibo_dyn(20): %f seconds\n", time_taken);
}