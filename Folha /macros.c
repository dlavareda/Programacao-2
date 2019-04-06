#include <stdio.h>
#define VALORABSOLUTO(x) x < 0 ? -x : x

int main(){
    int a;
    printf("Introduza x\n");
    scanf("%d", &a);
    printf("O módulo de %d é: %d\n", a, VALORABSOLUTO(a));
}