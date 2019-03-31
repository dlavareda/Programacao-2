#include <stdio.h>
#include <stdlib.h>

void mostrarvetor(int *x, int n){
	int i;
	for	(i = 0; i<n; i++){
	printf("%d ",x[i]);}
	printf("\n");
}

void invertervetor(int *v, int n){
	int num, k;
	for	(k = 0; k<(n/2); k++){
	num = v[k];
	v[k]=v[n-1-k];
	v[n-1-k] = num;
}
}

int main(){
int n = 0;
int *v, num;
v = (int *) malloc(sizeof(int));
if (v == NULL){
	return 0; 
}
	printf("Insira um numero inteiro (-1 = terminar)\n");
	scanf("%d", &num);
	while(num != -1){
		n = n+1;
		v = (int *) realloc(v, n*sizeof(int));
		if (v == NULL){
			return 0;
		}
		v[n-1] = num;
		printf("Insira um numero inteiro (-1 = terminar)\n");
		scanf("%d", &num);
}
mostrarvetor(v, n);
invertervetor(v, n);
mostrarvetor(v, n);
}
