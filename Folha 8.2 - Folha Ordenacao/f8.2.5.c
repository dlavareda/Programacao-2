#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"

int main(){
	int *v, tam;
	v = lerVetorInteiros("/home/dlavareda/Documents/UBI/Programação 2/programacao2/Folha 8.2 - Folha Ordenacao/InteirosPositivos.txt", &tam);
	MostrarVetorInteiros(v, tam);
	ordenarfusao(v, 0, tam-1);
	MostrarVetorInteiros(v, tam);
}
