#include <stdio.h>
#include <stdlib.h>

float *lervetor(int *n)
{
    float *x;
    do
    {
        printf("Qual o tamanho do vector?\n");
        scanf("%d", n);
    } while (*n <= 0);
    x = (float *)malloc((*n) * sizeof(float));
    for (int i = 0; i < *n; i++)
    {
        printf("Introduza [%d] ", i);
        scanf("%f", &x[i]);
    }
    return x;
}
void escrevervector(float *v, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("[%d] = %f \n", i, v[i]);
    }
}
float *removerkelementos(float *v, int *n, int k)
{

    for (int i = 0; i < *n; i++)
    {
        if (i >= k)
        {
            v[i] = v[i + k];
        }
        v[i] = v[i + k];
    }
    *n = *n - k;
    v = realloc(v, (*n) * sizeof(float));
    return v;
}
int main()
{
    float *x1;
    int t1, k;
    x1 = lervetor(&t1);
    escrevervector(x1, t1);
    printf("Quantos elementos quer remover? ");
    scanf("%d", &k);
    x1 = removerkelementos(x1, &t1, k);
    escrevervector(x1, t1);
}