#include <stdio.h>

typedef struct
{
    float a;
    float b;
} COMPLEXO;

void lercomplexo(float *a, float *b)
{
    printf("Introduza a parte real");
    scanf("%f", a);
    printf("Inroduza a parte imaginária");
    scanf("%f", b);
}
void escrevercomplexo(float *a, float *b)
{
    printf("%f + %f i", *a, *b);
}
int main()
{
    float a, b;
    lercomplexo(&a, &b);
    escrevercomplexo(&a, &b);
}
