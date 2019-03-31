#include <stdio.h>
#include <stdlib.h>

void mostrarvetor(float *x, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%f ", x[i]);
	}
	printf("\n");
}
int main()
{
	int n, i;
	float *v;
	do
	{
		printf("Introduza o numero > 0\n");
		scanf("%d", &n);
	} while (n <= 0);
	//v = (float *) malloc(n*sizeof(float));
	v = (float *)calloc(n, sizeof(float));
	if (v == NULL) //se nao conseguiu alocar memoria
		return 0;
	mostratvetor(v, n);
	for (i = 0; i < n; i++)
	{
		printf("Insira um numero real\n");
		scanf("%f", &v[i]);
	}
	mostrarvetor(v, n);
	//efectua corte do vector para metade
	n = n / 2;
	v = (float *)realloc(v, n * sizeof(float));
	mostrarvetor(v, n);
	return 1;
}
