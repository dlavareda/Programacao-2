#include <stdio.h>

typedef struct
{
    float a;
    float b;
} COMPLEXO;

void lercomplexo(float *a, float *b)
{
    printf("Introduza a parte real ");
    scanf("%f", a);
    printf("Introduza a parte imaginária ");
    scanf("%f", b);
}
void escrevercomplexo(float *a, float *b)
{
    printf("\n%f + %fi\n", *a, *b);
}
void somacomplexos(float a1, float a2, float b1, float b2, float *s1, float *s2)
{

    *s1 = a1 + b1;
    *s2 = a2 + b2;
}
int main()
{
    float a1, a2;
    float b1, b2;
    float s1, s2;
    lercomplexo(&a1, &a2);
    escrevercomplexo(&a1, &a2);
    lercomplexo(&b1, &b2);
    escrevercomplexo(&b1, &b2);
    somacomplexos(a1, a2, b1, b2, &s1, &s2);
    printf("\nSoma do complexo a + b = ");
    escrevercomplexo(&s1, &s2);
}
