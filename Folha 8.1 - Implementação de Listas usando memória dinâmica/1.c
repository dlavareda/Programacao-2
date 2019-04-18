#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int numAluno;
    float notaFT;
    float notaFreq;
} ALUNO;
#include "listas.h"

int main()
{
    ALUNO *Lista, *A;
    int tamlista, i, chave;
    Lista = CriarLista(&tamlista);
    MostrarLista(Lista, tamlista);
    MostrarUmElemento(Lista[0]);
    printf("Qual a chave (numALuno) a pesquisar? \n");
    scanf("%d", &chave);
    if (PesquisarAluno(chave, Lista, tamlista) == 1)
    {
        printf("Aluno Existe\n");
    }
    else
    {
        printf("Aluno com a chave %d nao existe\n", chave);
    }
    //Inserir 3 elementos
    for (i = 1; i <= 3; i++)
    {
        A = CriarElemento();
        Lista = InserirInicio(*A, Lista, &tamlista);
        free(A);
    }
    MostrarLista(Lista, tamlista);
    printf("Apagar\n");
    A = CriarElemento();
    Lista = Remover(*A, Lista, &tamlista);
    MostrarLista(Lista, tamlista);
}