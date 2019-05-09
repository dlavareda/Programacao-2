#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int numero;
    int notafinal;
}NOTAS;
#include "ordenacao10c.h"


int main(){
    NOTAS * v;
    int tamV;
    v = LerVetoresNotas("/home/dlavareda/dados3.txt", &tamV);
    MostrarVectorNotas(v,tamV);
}