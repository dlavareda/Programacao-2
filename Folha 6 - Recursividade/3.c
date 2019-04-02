#include <stdio.h>
int numerodigitos(int n)
{

    if (n / 10 == 0)
    {
        return 1;
    }
    else
    {
        n = n / 10;
        return 1 + numerodigitos(n - 1);
    }
}

int main()
{
    int n = 0;
    int num;
    printf("Intoduza um numero ");
    scanf("%d", &num);
    n = numerodigitos(num);
    printf("O numero %d tem %d digitos\n", num, n);
}

/*3. Implementar uma função recursiva para calcular o número de dígitos que contém um número
inteiro positivo N.*/