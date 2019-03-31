#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "VetorReais.h"

int main(){
	float *x1, *x2;
	int t1, t2, k;
	x1 = lerVetor(&t1);
	escreverVetor(x1, t1);
    printf("Quantos valores quer inserir ao inicio do vector");
    scanf("%d", &k);
    x2 = lerVetor(&t2);
    InserirElementos(x2, k, x1, &t1);
    printf("\n");
    escreverVetor(x1, t1);
}


/*
12. Considere as seguintes funções já implementadas (exercícios anterior):
float *LerVetor (int *N) // lê um vetor de números reais de tamanho “N”
void EscreverVetor (float *V, int N) // escreve um vetor V de N números reais
a) Construa uma função que insira k novos elementos no início de um vetor V de números
reais de tamanho N, utilizando o seguinte cabeçalho:
float *InserirElementos (float *Novos, int k, float *V, int *N)*/