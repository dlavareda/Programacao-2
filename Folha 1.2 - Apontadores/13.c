#include <stdio.h>
int *soma4(int a, int b){
    int soma;
    soma = a+b;
    return soma;
}
int *soma5 (int *a, int *b){
    int soma;
    soma = *a+*b;
    return soma;
}
int main(){
    int *soma, a, b; 
    printf("Introduza A: ");
    scanf("%d", &a);
    printf("Introduza B: ");
    scanf("%d", &b);
    soma = soma4(a,b);
    printf("%d\n", soma);
    soma = soma5(&a,&b);
    printf("%d\n", soma);
}