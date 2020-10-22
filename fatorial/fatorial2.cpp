#include <stdio.h>

int maiorfat_menor_que(int n) {
    //Finds the biggest p for which p! <= n
    int product = 1;
    // p: contar quantas vezes chamamos a função
    for (int p = 1; product*p <= n; p++) {
        product *= p;
    }
    // product > n/(p+1)
    return product;
}


int main() {
    //1 <= N <= 100.000
    int N;
    scanf("%d", &N);

    int k = 0; //counting
    while (N > 0) {
        int verbose = maiorfat_menor_que(N); 
        printf("%d + ", verbose);
        N -= maiorfat_menor_que(N); 
        k++;
    }   
}

