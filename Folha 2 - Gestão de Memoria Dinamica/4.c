#include <stdio.h>
#include <stdlib.h>
void mostrarvetor(float *x, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%f ", x[i]);
    }
    printf("\n");
}

void maiormenor(float *x, float *maior, float *menor, int n)
{
    *maior = x[0];
    *menor = x[0];
    for (int i = 1; i < n; i++)
    {
        if (*maior < x[i])
        {
            *maior = x[i];
        }
        if (*menor > x[i])
        {
            *menor = x[i];
        }
    }
}
void eliminarvalores(float *x, float *maior, float *menor, int *n)
{
    //*n = *n-2;
    for (int i = 0; i < *n; i++)
    {
        if (x[i] == *maior || x[i] == *menor)
        {
            for (int ii = 1; ii < *n; ii++)
            {
                if ((x[i + ii]) != *maior && (x[i + ii]) != *menor)
                {
                    x[i] = x[i + ii];
                    i = ii;
                    int aux = ii;
                    ii = *n;

                    *n = *n - aux;
                }
            }
        }
    }
}
int main()
{
    int n;
    float *x;
    float maior = 0.0, menor = 0.0;
    printf("Tamanho do vector\n");
    do
    {
        scanf("%d", &n);
    } while (n <= 0);

    x = (int *)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        printf("Insira o x[%d]\n", i);
        scanf("%f", &x[i]);
    }
    mostrarvetor(x, n);
    maiormenor(x, &maior, &menor, n);
    printf(" O maior é %f\n", maior);
    printf("O menor é %f\n", menor);
    eliminarvalores(x, &menor, &maior, &n);
    printf("novo vector \n");
    mostrarvetor(x, n);
    return 1;
}