#include <stdio.h>
int potencia(int base, int n)
{
    if (n != 0)
        return (base * potencia(base, n - 1));
    else
        return 1;
}

int main()
{
    int resultado;
    resultado = potencia(2, 12);
    printf("%d", resultado);
}

/*1. Implementar uma função recursiva para calcular o valor de 2^N, com N ≥ 0.*/