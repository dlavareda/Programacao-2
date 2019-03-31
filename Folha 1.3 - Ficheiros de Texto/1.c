#include <stdio.h>
void LerVector(int V[], int *n){
	int num, nota;
	FILE *f;
	f = fopen("/home/dlavareda/Documents/Programação 2/Folha 1.3 - Ficheiros de Texto/dados3.txt", "r");
	//verificar se o ficheiro abre
	*n = 0;
	//fscan devolve sempre o numero de valores que leu
	while(*n < 100 && fscanf(f, "%d%d", &num, &nota) == 2) 
	{
		V[*n] = nota;
		*n = *n + 1;
	}
	fclose(f);
}

int SomaNotas(int V[], int n){
	int soma = 0, i;
	for (int i = 0; i < n; ++i)
	{
		soma = soma + V[i];
	}
	return soma;
}
void main()
{
	int	X[100], TAM, soma;
	float media;
	LerVector(X, &TAM);
	//NO exemplo X = 100500
	//&TAM = 112000
	//nao se manda com apontadores porque o X e TAM nao vao ser alterados na função
	soma = SomaNotas(X, TAM);
	media= (float)soma/TAM;
	printf("TAM =%d\n Soma = %d\n MEdia = %f\n", TAM, soma, media);
}

