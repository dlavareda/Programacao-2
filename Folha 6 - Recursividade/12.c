#include <stdio.h>
#include "recursividade.h"
int numerosPares(int v[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    if ((v[n - 1]) % 2 == 0)
    {
        return 1 + numerosPares(v, n - 1);
    }
    else
    {
        return numerosPares(v, n - 1);
    }
}
int main()
{
    int pares;
    int v;
    int tam;
    v = LerVectorFloatFicheiro("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 6 - Recursividade/Inteiros.txt", &tam);
    pares = numerosPares(&v, tam);
    printf("Numero de pares %d\n", pares);
}
