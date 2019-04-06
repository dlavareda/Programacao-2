#include <stdio.h>
#define DiferencaAbsoluta(a, b) a > b ? a - b : b - a

int main(){
    int a, b;
    printf("Introduza A\n");
    scanf("%d",&a);
    printf("INtroduza B\n");
    scanf("%d", &b);
    printf("Resultado: %d\n", DiferencaAbsoluta(a, b));
}


/*
Construa uma macro que determine a diferença absoluta entre dois valores inteiros. Ou seja:
DiferencaAbsoluta(A, B) = {
A −B, se A > B
B −A, caso contrário*/