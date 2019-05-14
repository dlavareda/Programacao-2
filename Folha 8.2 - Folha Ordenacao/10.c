#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int numero;
    int notafinal;
}NOTAS;
#include "ordenacao10c.h"


int main(){
    NOTAS * v, *NEG, *POS;
    int tamV, tamNeg, tamPos;
    v = LerVetoresNotas("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 8.2 - Folha Ordenacao/dados3.txt", &tamV);
    MostrarVectorNotas(v,tamV);
    OrdenarQuickSort_NOTAS(v, 0, tamV-1);
    MostrarVectorNotas(v,tamV);
    ConstruirVectorNOtas(v, tamV, &NEG, &tamNeg, &POS, &tamPos);
    MostrarVectorNotas(NEG, tamNeg);
    MostrarVectorNotas(POS, tamPos);
}