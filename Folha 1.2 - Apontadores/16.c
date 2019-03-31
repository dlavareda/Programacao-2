#include <stdio.h>
void maior_menor(int x[], int *maior, int *menor)
{

    *maior = x[0];
    *menor = x[0];
    for (int i = 1; i < 9; i++)
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

int main()
{
    int v[10];
    int maior, menor;
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
    maior_menor(&v, &maior, &menor);
    printf("Maior = %d", maior);
    printf("Menor = %d", menor);
}