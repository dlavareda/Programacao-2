#include <stdio.h>

typedef struct
{
    int numCC;       // Número de Cartão de Cidadão (único)
    int dataNasc[3]; // Data de nascimento no formato dia/mês/ano (ex: 21/5/1985)
    float altura;    // Altura em metros (ex: 1.85)
    int peso;        // Peso em Kg (ex: 76)
} PESSOA;

int main()
{
    FILE *f;
    PESSOA p;
    f = fopen("/home/dlavareda/Documents/Programação 2/Folha 3 - Ficheiros Binários/pessoas.txt", "r");

    while (fscanf(f, "%d", &p.numCC) == 1)
    {
        printf("%d", p.numCC);
    }

    close(f);
}

/*
em que para a data 21/5/1985, dataNasc[0] = 21, dataNasc[1] = 5 e dataNasc[2] = 1985.
Construa um programa de C que realize as seguintes ações:
a) Crie o ficheiro binário “Pessoas.bin” a partir dos dados contidos no ficheiro de texto
“Pessoas.txt” (página web da disciplina), o qual é composto apenas por registos
(estruturas) do tipo “PESSOA”;
b) Mostre os dados contidos no dado ficheiro binário “Pessoas.bin”.
c) A partir dos dados contidos no ficheiro binário “Pessoas.bin” crie o ficheiro binário
“Datas.bin” com os Números de Cartão de Cidadão (numCC) e o Peso (peso) de todas
as pessoas nascidas num dado Ano e que pesem mais que um dado Peso. O Ano e o
Peso devem ser pedidos ao utilizador e inseridos por este.
Nota: Não pode usar vetores e deve usar a função fseek (para além de outras que achar
necessárias), e deve ler o mínimo de informação possível para atingir o objetivo proposto.*/