#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int numAluno;
    float notaFT;
    float notaFreq;
}ALUNO;
#include "listas.h"

int main(){
    ALUNO *Lista;
    int tamlista;
    Lista = CriarLista(&tamlista);
    MostrarLista(Lista, tamlista);
}