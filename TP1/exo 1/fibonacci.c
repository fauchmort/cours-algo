long long int fibo_naif(n){
    if (n >= 2){
        return fibo_naif(n-1)+fibo_naif(n-2);
    }
    else{
        return 1;
    }
}


    
long long int fibo_dyn(int n,long long int fib[]){
    if (fib == []){
        fib=fibo(n);
    }
    if (fib[n] == -1){
        if (n>=2){
            fib[n] = fibo_dyn(n - 1,fib) + fibo_dyn(n - 2,fib);
            return fib[n];
        }
    }
    else{
        return fib[n];
    } 
}

void fibo(n) {
    long long int fib[n];
    for (int i = 0; i < n; i++)
        fib[i] = -1;
}