#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int num) {
    if (num < 2)
        return false;

    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int prime_naif(int n){
    int count = 0;

    for (int i = 2; i < n; i++) {
        if (is_prime(i))
            count++;
    }

    return count;
}


int primes_better(int n) {
    if (n <= 2)
        return 0;

    bool is_prime[n];

    for (int i = 0; i < n; i++)
        is_prime[i] = true;

    is_prime[0] = false; // 0 is not prime
    is_prime[1] = false; // 1 is not prime

    for (int p = 2; p * p < n; p++) {
        if (is_prime[p]) {
            // Mark multiples of p as not prime
            for (int multiple = p * p; multiple < n; multiple += p)
                is_prime[multiple] = false;
        }
    }

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (is_prime[i])
            count++;
    }

    return count;
}