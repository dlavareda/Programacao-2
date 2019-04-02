#include <stdio.h>
int MDC(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return MDC(num2, num1 % num2);
    }
}

int main()
{
    int num1, num2;
    int divisor;
    printf("Introduza o 1º numero\n");
    scanf("%d", &num1);
    printf("Introduza o 2º numero\n");
    scanf("%d", &num2);
    divisor = MDC(num1, num2);
    printf("O maximo divisor é: %d\n", divisor);
}