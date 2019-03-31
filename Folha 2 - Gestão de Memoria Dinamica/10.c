#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "VetorReais.h"

int main(){
	float *x1, *x2;
	int t1, t2, k;
	x1 = lerVetor(&t1);
	escreverVetor(x1, t1);
	x2=lerVetor(&t2);
	escreverVetor(x2, t2);
	x1=juntarVetores(x1, x2, &t1, &t2);
	escreverVetor(x1, t1);
}