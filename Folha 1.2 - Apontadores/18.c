#include <stdio.h>

void soma_media(int x[], int *soma, float *media)
{
    *soma = 0;
    for (int i = 0; i < 9; i++)
    {
        *soma = *soma + x[i];
    }
    *media = *soma / 10.0;
}

int main()
{
    int soma;
    float media;
    int v[10];
    v[0] = 2;
    v[1] = 52;
    v[2] = 7;
    v[3] = 3;
    v[4] = 2;
    v[5] = 8;
    v[6] = 12;
    v[7] = 2;
    v[8] = 60;
    v[9] = 2;
    soma_media(&v, &soma, &media);

    printf("Soma = %d\n", soma);
    printf("MEdia = %f\n", media);
}