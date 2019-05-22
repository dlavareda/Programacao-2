#include <stdio.h>
#include <stdlib.h>
#include "ordenacao1.h"
#include "pesquisa.h"

int main()
{
    int *v, num, tam, k, maior, menor, i;
    v = LerVectorInteiros("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 8.3 - Folha Pesquisa/InteirosComRepetidos.txt", &tam);
    printf("Introduza o inteiro");
    scanf("%d", &num);
    MostrarVetorInteiros(v,tam);
    OrdenarSeleccaoint(v, tam);
    MostrarVetorInteiros(v,tam);
    k = PesquisaBinariaRec(num, v, 0, tam-1);
    if (k < 0)
    {
        printf("%d não existe no vetor!\n", num);
        return 1;
    }
    i = k - 1;
    while (i >= 0 && v[i] == num)
    {
        i--;
    }
    if (i >= 0)
    {
        maior = v[i];
        printf("O maior numero menor do que %d é %d\n", num, maior);
    }
    else
    {
        printf("Não existe nenhum numero menor do que %d\n", num);
    }
    i = k + 1;
    while (i < tam && v[i] == num)
    {
        i++;
    }
    if (i < tam)
    {
        menor = v[i];
        printf("O menor numero maior do que %d é %d\n", num, menor);
    }
    else
    {
        printf("Não existe nenhum numero maior do que %d\n", num);
    }
}