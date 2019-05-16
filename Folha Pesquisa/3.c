#include <stdio.h>
#include <stdlib.h>
#include "ordenacao1.h"
#include "pesquisa.h"

int main()
{
    int *v, tamV, num, k;
    v = LerVectorInteiros("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha Pesquisa/InteirosComRepetidos.txt", &tamV);
    MostrarVetorInteiros(v, tamV);
    printf("Insira um inteiro entre 10 e 50:");
    scanf("%d", &num);
    printf("\n");
    OrdenarBubbleSort_Dec(v, tamV);
    MostrarVetorInteiros(v, tamV);
    k = PesquisaBinariaRec(num, v, 0, tamV);
    printf("\n");
    if (k == -1)
    {
        printf("%d não existe no vector!\n", num);
    }
    else
    {
        printf("%d existe na posição %d\n", num, k);
    }
}

/*Construa funções para:
- construir um vetor inteiros a partir de um ficheiro de texto,
- ordenar por ordem decrescente um vetor de inteiros, e
- pesquisar um elemento num vetor de inteiros (devolve o índice do elemento a
pesquisar, ou um valor negativo caso não exista).
Usando as três funções anteriores, implementar um programa em C que:
a) leia/construa um vetor de inteiros V;
b) peça ao utilizador e insira um número inteiro num;
c) verifique se num existe no vetor V e em que posição se encontra;
d) mostre o resultado obtido (não existe ou existe na posição k).
NOTA: Testar o algoritmo com os dados contidos no ficheiro “InteirosComRepetidos.txt*/