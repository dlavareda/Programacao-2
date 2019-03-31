#include <stdio.h>
#include <stdlib.h>

//feito lijeiramene diferente do enunciado para fazer diferente do exercicio anterior.
int lervector(int *v){
    int n;
    do{
        printf("Insira o tamanho do vector ");
        scanf("%d", &n);
    }while (n <=0);
    for(int i = 0; i < n; i++)
    {
        v = realloc(v, (n+1)*sizeof(int));
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
    return n;
}
void escrevervector(int *v, int n){
    for(int i = 0; i < n; i++)
    {
        printf("[%d] = %d \n", i, v[i]);
    }
    
}
int positivos(int *v, int *w, int n){
    int k=0;
    for(int i = 0; i < n; i++)
    {
        if (v[i]>0) {
            w[k] = v[i];
            k++;
        }
        
    }
    return k;
}
int main(){
    int *v;
    int *w;
    int n;
    int k;
    v = malloc(0*sizeof(int));
    n = lervector(v);
    printf("O tamanho do vector é %d\n", n);
    printf("V\n");
    escrevervector(v, n);
    w = malloc(0*sizeof(int));
    k = positivos(v, w, n);
    printf("W\n");
    escrevervector(w, k);
    printf("\n");
}