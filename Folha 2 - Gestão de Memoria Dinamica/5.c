#include <stdio.h>
#include <stdlib.h>
void escrevervector(float *x, int *n){
    printf("Tamanho do vector\n");
        do{
            scanf("%d", n);
        }while (*n<=0);

        x = (int*) realloc(x, (*n)*sizeof(float));
        for(int i = 0; i < *n; i++)
        {
            printf("Insira o x[%d]\n", i);
            scanf("%f", &x[i]);
        }
}
void mostrarvetor(float *x, int n){
	int i;
	for	(i = 0; i<n; i++){
	printf("x[%d] = %f\n",i,x[i]);}
	printf("\n");
}
void mostrarelementon(float *x, int n){
    printf("A soma é x[%d] = %f\n", n, x[n]);
}
float somavetor(float *x, int n){
    float soma;
    for(int i = 0; i < n; i++)
    {
        soma = soma + x[i];
    }
    return soma;
}
void addsoma(float *x, int *n, float k){
    x = realloc(x, (*n+1)*sizeof(float));
    x[*n] = k;
    *n = *n+1;
}

int main() {   
    int n;
    float *x;
    float soma;
    x = (int*) malloc(0*sizeof(float));
    escrevervector(x, &n);
    mostrarvetor(x, n);
    soma = somavetor(x, n);
    printf("A soma é %f\n", soma);
    addsoma(x, &n, soma);
    mostrarelementon(x, n-1);
}
