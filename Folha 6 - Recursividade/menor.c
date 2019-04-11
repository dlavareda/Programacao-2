#include <stdio.h>
#include "recursividade.h"

int imenor(int *v, int n)
{
    int menor = 0;
    
    if (n == 1)
    {
        return 0;
    }
   if(v[menor]<v[n]){
       return menor;
   }else{
       return n;
   }
   imenor(v, n-1);
}

int indice_maior(int *x, int n){
    int k;
    if (n == 1){
        return 0;//x[O] é o maior elemento
    }
    k = indice_maior(x, n-1);
    if (x[n-1] > x[k]){
        return n-1;
    }else
    {
       return k;
        
    }
}

int main()
{
    int *v, tam, ind_menor;
    v = LerVectorInteirosFicheiro("/home/dlavareda/Documents/Programação 2/Folha 6 - Recursividade/Inteiros.txt", &tam);
    ind_menor = imenor(v, tam);
    printf("Menor = %d - indice = %d\n", v[ind_menor], ind_menor);
    return 1;
}
