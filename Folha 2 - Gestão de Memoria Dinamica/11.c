#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "VetorReais.h"

int main()
{
	float *x1, *x2;
	int t1, t2, k;
	x1 = lerVetor(&t1);
	escreverVetor(x1, t1);
	x2 = lerVetor(&t2);
	escreverVetor(x2, t2);
	x1 = juntarVetores(x1, x2, &t1, &t2);
	escreverVetor(x1, t1);

	do
	{
		printf("Quantos elementos quer remover <= %d: ", t1);
		scanf("%d", &k);
	} while (k < 0 || k > t1);

	x1 = removerkelementos(x1, &t1, k);
	escreverVetor(x1, t1);
}