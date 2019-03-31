#include <stdio.h>
#include <stdlib.h>

int soma1(int a, int b)
{
    int soma;
    soma = a + b;
    return soma;
}

int soma2(int *a, int *b)
{
    int soma;
    soma = (*a) + (*b);
    return soma;
}

int *soma3(int a, int b)
{
    int soma;
    soma = a + b;
    return &soma;
}

int main()
{

    int a = 10;
    int b = 5;
    int soma;
    int *s;
    soma = soma1(a, b);
    printf("Soma 1 = %d\n", soma);
    soma = soma2(&a, &b);
    printf("Soma 1 = %d\n", soma);
    s = soma3(a, b);
    printf("Soma 1 = %d\n", *s);
}