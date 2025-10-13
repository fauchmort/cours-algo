#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <prime.h>

int main(){
    clock_t start, end;
    start = clock();
    printf("\n%d",prime_naif(20));
    end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken by prime_naif(20): %f seconds\n", time_taken);

    start = clock();
    printf("\n%d",primes_better(20));
    end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken by primes_better(20): %f seconds\n", time_taken);
}