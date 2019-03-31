#include <stdio.h>
#include "recursividade.h"

int main()
{
    float *v, m;
    int tam;
    v = LerVectorFloatFicheiro("/home/dlavareda/Documents/Programação 2/Folha 6 - Recursividade/Inteiros.txt", &tam);
    //m = media(v, tam, tam);
    m = media2(v, tam, tam, 0);
    printf("media = %f\n", m);
    return 1;
}