#include <stdio.h>
#include <stdlib.h>

float *lervetor(int *n){
    float *x;
    do{
        printf("Qual o tamanho do vector?\n");
        scanf("%d", n);
    }while (*n<=0);
    x = (float *) malloc((*n)*sizeof(float));
    for(int i = 0; i < *n; i++)
    {
        printf("Introduza [%d] ", i);
        scanf("%f", &x[i]);
    }
    return x;
}
void escrevervector(float *v, int n){
    int i;
    for(i = 0; i < n; i++)
    {
        printf("[%d] = %f \n", i, v[i]);
    }
    
}
float *inserirelementos(float *novos, int k, float *v, int *n){
    
    v = realloc(v, (*n+k)*sizeof(float));
    for(int i = 0; i < k; i++)
    {
        v[*n+i] = novos[i];
    }
*n = *n + k;
    return v;
}
int main(){
float *x1, *x2;
int t1, t2, k;
x1 = lervetor(&t1);
escrevervector(x1, t1);
x2 = lervetor(&t2);
x1 = inserirelementos(x2, t2, x1, &t1);
escrevervector(x1, t1);
}