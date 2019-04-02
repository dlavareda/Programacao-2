#include <stdio.h>
int fib(int n){


    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else
    {
        return fib(n-1) + fib(n-2);
    }
    
}

int main(){
int resultado;
int num;
printf("Introduza o numero a calcular a sequencia de fibonacci\n");
scanf("%d", &num);
resultado = fib(num);
printf("%d\n", resultado);

}

/*Implementar uma função recursiva para calcular o valor de Fib(N), com N ≥ 0, uma usando,
tendo em conta que:
Fib(0) = 1; Fib(1) = 1; Fib(N) = Fib(N-1) + Fib(N-2).*/