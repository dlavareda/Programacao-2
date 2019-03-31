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
float *removerelementos(float *v, int *n, int k1, int k2)
{
    int z = 0;
    for (int i = 0; i < *n; i++)
    {
        if (i <= k1 || i >= k2)
        {
            v[z] = v[i];
            z++;
        }
    }
    *n = *n - (k2 - k1 - 1);
    v = realloc(v, ((*n) * sizeof(float)));
    return v;
}
int main()
{
    float *x1;
    int t1, k1, k2;
    x1 = lervetor(&t1);
    escrevervector(x1, t1);
    printf("Introduza k1");
    scanf("%d", &k1);
    printf("Introduza k2");
    scanf("%d", &k2);
    x1 = removerelementos(x1, &t1, k1, k2);
    printf("Novo vector\n");
    escrevervector(x1, t1);
}
