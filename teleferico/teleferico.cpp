#include <stdio.h>
#include <math.h>

int div_ceil(int a, int b) {
    if (a % b == 0) return a / b;
    else return a / b + 1;
}

int main() {
    //2 <= C <= 100
    //1 <= A <= 1000
    int C, A; //C : capacidade máxima do teleférico //A: nº de alunos

    //Leitura dos valores
    scanf("%d\n%d", &C, &A);

    //Capacidade efetiva: C - 1
    printf("%d\n", div_ceil(A, C - 1));
    return 0;
}