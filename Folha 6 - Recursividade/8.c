#include <stdio.h>
#include "recursividade.h"
int main(){
    int *v, tam, ind_maior;
    v = LerVectorInteirosFicheiro("/home/dlavareda/Documents/Programação 2/Folha 6 - Recursividade/Inteiros.txt", &tam);
    ind_maior = indice_maior(v, tam);
    printf("Maior = %d - indice = %d\n", v[ind_maior], ind_maior);
    return 1;

}
