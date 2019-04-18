#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"

int main()
{
    int *x, tamx, k, cont, indice;
    x = LerVectorInteiros("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha Ordenacao/InteirosComRepetidos.txt", &tamx);
    MostrarVetorInteiros(x, tamx);
    printf("\n");
    OrdenarBubbleSort_Dec(x, tamx);
    MostrarVetorInteiros(x, tamx);
    printf("\n");
    printf("O maior elemento é %d", x[0]);
    printf("\n");
    printf("O menor elemento é %d", x[tamx-1]);
    printf("\n");
    cont = 0;
    k = tamx-1;
    while(k>=0 && x[k]==x[tamx-1]){
        cont++;
        k--;
    }
    printf("Existem %d elementos iguais ao menor elemento (%d)\n", cont, x[tamx-1]);

    k = 0;
    indice = 0;
    int encontrado = 0;
    while(k <= tamx-1 && encontrado ==0){
        if (x[k] != x[k+1]){
            indice = k+1;
            encontrado = 1;
        }
    k++;
    }
    printf("O 2º maior elemento é %d", x[indice]);
    printf("\n");
}