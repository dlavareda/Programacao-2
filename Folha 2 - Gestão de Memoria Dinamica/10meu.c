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
float *juntarvetores(float *v1, float *v2, int *n1, int *n2)
{

    v1 = realloc(v1, ((*n1 + *n2) * sizeof(float)));
    for (int i = 0; i < *n2; i++)
    {
        v1[(*n1 - 1) + (i + 1)] = v2[i];
    }
    *n1 = *n1 + *n2;

    return v1;
}
int main()
{
    float *x1, *x2;
    int t1, t2;
    x1 = lervetor(&t1);
    x2 = lervetor(&t2);
    escrevervector(x1, t1);
    escrevervector(x2, t2);
    x1 = juntarvetores(x1, x2, &t1, &t2);
    printf("Vectores Combinados \n");
    escrevervector(x1, t1);
}